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
//   TableDataInsertAllRequest
// Documentation:
//   https://cloud.google.com/bigquery/

#include "google/bigquery_api/table_data_insert_all_request.h"

#include <string>

#include <string>
#include "googleapis/client/data/jsoncpp_data.h"


#include "absl/strings/str_cat.h"


namespace google_bigquery_api {
using namespace googleapis;



// Object factory method (static).
TableDataInsertAllRequest::TableDataInsertAllRequestRows* TableDataInsertAllRequest::TableDataInsertAllRequestRows::New() {
  return new client::JsonCppCapsule<TableDataInsertAllRequestRows>;
}

// Standard immutable constructor.
TableDataInsertAllRequest::TableDataInsertAllRequestRows::TableDataInsertAllRequestRows(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
TableDataInsertAllRequest::TableDataInsertAllRequestRows::TableDataInsertAllRequestRows(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
TableDataInsertAllRequest::TableDataInsertAllRequestRows::~TableDataInsertAllRequestRows() {
}

// Properties.

const client::JsonCppAssociativeArray<client::JsonCppData > TableDataInsertAllRequest::TableDataInsertAllRequestRows::get_json() const {
   const Json::Value& storage = Storage("json");
   return client::JsonValueToCppValueHelper<client::JsonCppAssociativeArray<client::JsonCppData > >(storage);
}

client::JsonCppAssociativeArray<client::JsonCppData > TableDataInsertAllRequest::TableDataInsertAllRequestRows::mutable_json() {
  Json::Value* storage = MutableStorage("json");
  return client::JsonValueToMutableCppValueHelper<client::JsonCppAssociativeArray<client::JsonCppData > >(storage);
}
// Object factory method (static).
TableDataInsertAllRequest* TableDataInsertAllRequest::New() {
  return new client::JsonCppCapsule<TableDataInsertAllRequest>;
}

// Standard immutable constructor.
TableDataInsertAllRequest::TableDataInsertAllRequest(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
TableDataInsertAllRequest::TableDataInsertAllRequest(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
TableDataInsertAllRequest::~TableDataInsertAllRequest() {
}

// Properties.
}  // namespace google_bigquery_api
