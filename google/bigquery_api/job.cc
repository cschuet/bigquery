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
//   Job
// Documentation:
//   https://cloud.google.com/bigquery/

#include "google/bigquery_api/job.h"

#include <string>

#include <string>
#include "googleapis/client/data/jsoncpp_data.h"

#include "google/bigquery_api/job_configuration.h"
#include "google/bigquery_api/job_reference.h"
#include "google/bigquery_api/job_statistics.h"
#include "google/bigquery_api/job_status.h"


#include "absl/strings/str_cat.h"


namespace google_bigquery_api {
using namespace googleapis;


// Object factory method (static).
Job* Job::New() {
  return new client::JsonCppCapsule<Job>;
}

// Standard immutable constructor.
Job::Job(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
Job::Job(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
Job::~Job() {
}

// Properties.

const JobConfiguration Job::get_configuration() const {
   const Json::Value& storage = Storage("configuration");
   return client::JsonValueToCppValueHelper<JobConfiguration >(storage);
}

JobConfiguration Job::mutable_configuration() {
  Json::Value* storage = MutableStorage("configuration");
  return client::JsonValueToMutableCppValueHelper<JobConfiguration >(storage);
}

const JobReference Job::get_job_reference() const {
   const Json::Value& storage = Storage("jobReference");
   return client::JsonValueToCppValueHelper<JobReference >(storage);
}

JobReference Job::mutable_jobReference() {
  Json::Value* storage = MutableStorage("jobReference");
  return client::JsonValueToMutableCppValueHelper<JobReference >(storage);
}

const JobStatistics Job::get_statistics() const {
   const Json::Value& storage = Storage("statistics");
   return client::JsonValueToCppValueHelper<JobStatistics >(storage);
}

JobStatistics Job::mutable_statistics() {
  Json::Value* storage = MutableStorage("statistics");
  return client::JsonValueToMutableCppValueHelper<JobStatistics >(storage);
}

const JobStatus Job::get_status() const {
   const Json::Value& storage = Storage("status");
   return client::JsonValueToCppValueHelper<JobStatus >(storage);
}

JobStatus Job::mutable_status() {
  Json::Value* storage = MutableStorage("status");
  return client::JsonValueToMutableCppValueHelper<JobStatus >(storage);
}
}  // namespace google_bigquery_api
