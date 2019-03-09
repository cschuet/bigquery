#include <fstream>
#include <iostream>
#include <memory>
#include "gflags/gflags.h"
#include "googleapis/client/auth/oauth2_authorization.h"
#include "googleapis/client/auth/oauth2_service_authorization.h"
#include "googleapis/client/data/data_reader.h"

#include "googleapis/client/transport/curl_http_transport.h"
#include "googleapis/client/transport/http_authorization.h"
#include "googleapis/client/transport/http_transport.h"
#include "googleapis/client/transport/http_request_batch.h"
#include "googleapis/client/util/status.h"
#include "googleapis/strings/strcat.h"

#include "google/bigquery_api/bigquery_api.h"

namespace googleapis {

static const char usage[] =
    "List datasets.\n"
    "\n"
    "This is a sample application illustrating the use of the GoogleApis C++\n"
    "Client. The application makes calls into the Google Cloud Bigquery API.\n"
    "The application itself is not particularly useful, rather it just\n"
    "illustrates how to interact with a live service.\n"
    "\n"
    "Usage:\n"
    "\tlist_datasets <service_account.json> [<cacerts_path>]\n"
    "\n"
    "Output:\n"
    "\n"
    "A list of Google Bigquery datasets.\n"
    "\n"
    "Example:\n"
    "\t$ bazel-bin/list_datasets your-project-id-1cf578086929.json roots.pem\n";

using google_bigquery_api::BigqueryService;

using client::HttpTransport;
using client::HttpTransportLayerConfig;
using client::OAuth2Credential;
using client::OAuth2ServiceAccountFlow;
using client::StatusInvalidArgument;

class BigQuerySample {
 public:
  googleapis::util::Status Startup(int argc, char* argv[]);
  void Run();
 private:

   OAuth2Credential credential_;
   std::unique_ptr<BigqueryService> bigquery_;
   std::unique_ptr<OAuth2ServiceAccountFlow> flow_;
   std::unique_ptr<HttpTransportLayerConfig> config_;
};

util::Status BigQuerySample::Startup(int argc, char* argv[]) {
  if ((argc < 2) || (argc > 3)) {
    return StatusInvalidArgument(usage);
  }

  // Set up HttpTransportLayer.
  googleapis::util::Status status;
  config_.reset(new HttpTransportLayerConfig);
  client::HttpTransportFactory* factory =
      new client::CurlHttpTransportFactory(config_.get());
  config_->ResetDefaultTransportFactory(factory);
  if (argc > 2) {
    config_->mutable_default_transport_options()->set_cacerts_path(argv[2]);
  }

  // Set up OAuth 2.0 flow for a service account.
  flow_.reset(new client::OAuth2ServiceAccountFlow(
      config_->NewDefaultTransportOrDie()));
  // Load the the contents of the service_account.json into a string.
  string json(std::istreambuf_iterator<char>(std::ifstream(argv[1]).rdbuf()),
              std::istreambuf_iterator<char>());
  // Initialize the flow with the contents of service_account.json.
  flow_->InitFromJson(json);
  // Tell the flow exactly which scopes (priveleges) we need.
  // TODO(cschuet): Figure out what scopes.
  flow_->set_default_scopes(BigqueryService::SCOPES::BIGQUERY);

  bigquery_.reset(new BigqueryService(config_->NewDefaultTransportOrDie()));
  return status;
}

void BigQuerySample::Run() {
  // Connect the credential passed to ListBuckets() with the AuthFlow
  // constructed in Startup().
  credential_.set_flow(flow_.get());
  google_bigquery_api::DatasetsResource_ListMethod request(bigquery_.get(), &credential_, flow_->project_id());
  Json::Value value;
  google_bigquery_api::DatasetList dataset_list(&value);
  auto status = request.ExecuteAndParseResponse(&dataset_list);
  if (!status.ok()) {
      std::cout << "Could not list datasets: " << status.error_message()
                << std::endl;
  }
  for (auto dataset : dataset_list.get_datasets()) {
	  std::cout << dataset << std::endl;
  }
}

}  // namespace googleapis

using namespace googleapis;
int main(int argc, char* argv[]) {
	google::InitGoogleLogging(argv[0]);
	google::ParseCommandLineFlags(&argc, &argv, true);

	BigQuerySample sample;
	googleapis::util::Status status = sample.Startup(argc, argv);
	if (!status.ok()) {
	    std::cerr << "Could not initialize application." << std::endl;
	    std::cerr << status.error_message() << std::endl;
	    return -1;
	}

	sample.Run();
	std::cout << "Done!" << std::endl;

	return 0;
}
