// Licensed under the Apache License, Version 2.0 (the "License"); you may not
// use this file except in compliance with the License. You may obtain a copy of
// the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations under
// the License.

// This code was generated by google-apis-code-generator 1.6.0

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google API Discovery Service.
// Service:
//   BigQuery API (bigquery/v2)
// Description:
//   A data platform for customers to create, manage, share and query data.
// Classes:
//   QueryRequest
// Documentation:
//   https://cloud.google.com/bigquery/

#include "google/bigquery_api/query_request.h"

#include <string>

#include <string>
#include "googleapis/base/integral_types.h"
#include "googleapis/client/data/jsoncpp_data.h"

#include "google/bigquery_api/dataset_reference.h"
#include "google/bigquery_api/query_parameter.h"


#include "absl/strings/str_cat.h"


namespace google_bigquery_api {
using namespace googleapis;


// Object factory method (static).
QueryRequest* QueryRequest::New() {
  return new client::JsonCppCapsule<QueryRequest>;
}

// Standard immutable constructor.
QueryRequest::QueryRequest(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
QueryRequest::QueryRequest(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
QueryRequest::~QueryRequest() {
}

// Properties.

const DatasetReference QueryRequest::get_default_dataset() const {
   const Json::Value& storage = Storage("defaultDataset");
   return client::JsonValueToCppValueHelper<DatasetReference >(storage);
}

DatasetReference QueryRequest::mutable_defaultDataset() {
  Json::Value* storage = MutableStorage("defaultDataset");
  return client::JsonValueToMutableCppValueHelper<DatasetReference >(storage);
}

const client::JsonCppArray<QueryParameter > QueryRequest::get_query_parameters() const {
   const Json::Value& storage = Storage("queryParameters");
   return client::JsonValueToCppValueHelper<client::JsonCppArray<QueryParameter > >(storage);
}

client::JsonCppArray<QueryParameter > QueryRequest::mutable_queryParameters() {
  Json::Value* storage = MutableStorage("queryParameters");
  return client::JsonValueToMutableCppValueHelper<client::JsonCppArray<QueryParameter > >(storage);
}
}  // namespace google_bigquery_api
