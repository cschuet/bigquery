// Copyright 2010 Google Inc.
//
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

// This code was generated by google-apis-code-generator 1.5.1
//   Build date: 2018-10-08 17:45:39 UTC
//   on: 2019-03-01, 03:01:16 UTC
//   C++ generator version: 0.1.4

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   BigQuery API (bigquery/v2)
// Description:
//   A data platform for customers to create, manage, share and query data.
// Classes:
//   DatasetList
// Documentation:
//   https://cloud.google.com/bigquery/

#include "google/bigquery_api/dataset_list.h"
#include <string>
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/bigquery_api/dataset_reference.h"


#include <string>
#include "googleapis/strings/strcat.h"

namespace google_bigquery_api {
using namespace googleapis;



// Object factory method (static).
DatasetList::DatasetListDatasets* DatasetList::DatasetListDatasets::New() {
  return new client::JsonCppCapsule<DatasetListDatasets>;
}

// Standard immutable constructor.
DatasetList::DatasetListDatasets::DatasetListDatasets(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
DatasetList::DatasetListDatasets::DatasetListDatasets(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
DatasetList::DatasetListDatasets::~DatasetListDatasets() {
}
// Object factory method (static).
DatasetList* DatasetList::New() {
  return new client::JsonCppCapsule<DatasetList>;
}

// Standard immutable constructor.
DatasetList::DatasetList(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
DatasetList::DatasetList(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
DatasetList::~DatasetList() {
}
}  // namespace google_bigquery_api