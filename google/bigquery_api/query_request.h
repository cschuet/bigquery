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
// Generated from:
//   Version: v2
//   Revision: 427
// Generated by:
//    Tool: google-apis-code-generator 1.5.1
//     C++: 0.1.4
#ifndef  GOOGLE_BIGQUERY_API_QUERY_REQUEST_H_
#define  GOOGLE_BIGQUERY_API_QUERY_REQUEST_H_

#include <string>
#include "googleapis/base/integral_types.h"
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/bigquery_api/dataset_reference.h"
#include "google/bigquery_api/query_parameter.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_bigquery_api {
using namespace googleapis;

/**
 * No description provided.
 *
 * @ingroup DataObject
 */
class QueryRequest : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static QueryRequest* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit QueryRequest(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit QueryRequest(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~QueryRequest();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_bigquery_api::QueryRequest</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_bigquery_api::QueryRequest");
  }

  /**
   * Determine if the '<code>defaultDataset</code>' attribute was set.
   *
   * @return true if the '<code>defaultDataset</code>' attribute was set.
   */
  bool has_default_dataset() const {
    return Storage().isMember("defaultDataset");
  }

  /**
   * Clears the '<code>defaultDataset</code>' attribute.
   */
  void clear_default_dataset() {
    MutableStorage()->removeMember("defaultDataset");
  }


  /**
   * Get a reference to the value of the '<code>defaultDataset</code>'
   * attribute.
   */
  const DatasetReference get_default_dataset() const;

  /**
   * Gets a reference to a mutable value of the '<code>defaultDataset</code>'
   * property.
   *
   * [Optional] Specifies the default datasetId and projectId to assume for any
   * unqualified table names in the query. If not set, all table names in the
   * query string must be qualified in the format 'datasetId.tableId'.
   *
   * @return The result can be modified to change the attribute value.
   */
  DatasetReference mutable_defaultDataset();

  /**
   * Determine if the '<code>dryRun</code>' attribute was set.
   *
   * @return true if the '<code>dryRun</code>' attribute was set.
   */
  bool has_dry_run() const {
    return Storage().isMember("dryRun");
  }

  /**
   * Clears the '<code>dryRun</code>' attribute.
   */
  void clear_dry_run() {
    MutableStorage()->removeMember("dryRun");
  }


  /**
   * Get the value of the '<code>dryRun</code>' attribute.
   */
  bool get_dry_run() const {
    const Json::Value& storage = Storage("dryRun");
    return client::JsonValueToCppValueHelper<bool >(storage);
  }

  /**
   * Change the '<code>dryRun</code>' attribute.
   *
   * [Optional] If set to true, BigQuery doesn't run the job. Instead, if the
   * query is valid, BigQuery returns statistics about the job such as how many
   * bytes would be processed. If the query is invalid, an error returns. The
   * default value is false.
   *
   * @param[in] value The new value.
   */
  void set_dry_run(bool value) {
    client::SetJsonValueFromCppValueHelper<bool >(
      value, MutableStorage("dryRun"));
  }

  /**
   * Determine if the '<code>kind</code>' attribute was set.
   *
   * @return true if the '<code>kind</code>' attribute was set.
   */
  bool has_kind() const {
    return Storage().isMember("kind");
  }

  /**
   * Clears the '<code>kind</code>' attribute.
   */
  void clear_kind() {
    MutableStorage()->removeMember("kind");
  }


  /**
   * Get the value of the '<code>kind</code>' attribute.
   */
  const StringPiece get_kind() const {
    const Json::Value& v = Storage("kind");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>kind</code>' attribute.
   *
   * The resource type of the request.
   *
   * @param[in] value The new value.
   */
  void set_kind(const StringPiece& value) {
    *MutableStorage("kind") = value.data();
  }

  /**
   * Determine if the '<code>location</code>' attribute was set.
   *
   * @return true if the '<code>location</code>' attribute was set.
   */
  bool has_location() const {
    return Storage().isMember("location");
  }

  /**
   * Clears the '<code>location</code>' attribute.
   */
  void clear_location() {
    MutableStorage()->removeMember("location");
  }


  /**
   * Get the value of the '<code>location</code>' attribute.
   */
  const StringPiece get_location() const {
    const Json::Value& v = Storage("location");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>location</code>' attribute.
   *
   * The geographic location where the job should run. See details at
   * https://cloud.google.com/bigquery/docs/locations#specifying_your_location.
   *
   * @param[in] value The new value.
   */
  void set_location(const StringPiece& value) {
    *MutableStorage("location") = value.data();
  }

  /**
   * Determine if the '<code>maxResults</code>' attribute was set.
   *
   * @return true if the '<code>maxResults</code>' attribute was set.
   */
  bool has_max_results() const {
    return Storage().isMember("maxResults");
  }

  /**
   * Clears the '<code>maxResults</code>' attribute.
   */
  void clear_max_results() {
    MutableStorage()->removeMember("maxResults");
  }


  /**
   * Get the value of the '<code>maxResults</code>' attribute.
   */
  uint32 get_max_results() const {
    const Json::Value& storage = Storage("maxResults");
    return client::JsonValueToCppValueHelper<uint32 >(storage);
  }

  /**
   * Change the '<code>maxResults</code>' attribute.
   *
   * [Optional] The maximum number of rows of data to return per page of
   * results. Setting this flag to a small value such as 1000 and then paging
   * through results might improve reliability when the query result set is
   * large. In addition to this limit, responses are also limited to 10 MB. By
   * default, there is no maximum row count, and only the byte limit applies.
   *
   * @param[in] value The new value.
   */
  void set_max_results(uint32 value) {
    client::SetJsonValueFromCppValueHelper<uint32 >(
      value, MutableStorage("maxResults"));
  }

  /**
   * Determine if the '<code>parameterMode</code>' attribute was set.
   *
   * @return true if the '<code>parameterMode</code>' attribute was set.
   */
  bool has_parameter_mode() const {
    return Storage().isMember("parameterMode");
  }

  /**
   * Clears the '<code>parameterMode</code>' attribute.
   */
  void clear_parameter_mode() {
    MutableStorage()->removeMember("parameterMode");
  }


  /**
   * Get the value of the '<code>parameterMode</code>' attribute.
   */
  const StringPiece get_parameter_mode() const {
    const Json::Value& v = Storage("parameterMode");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>parameterMode</code>' attribute.
   *
   * Standard SQL only. Set to POSITIONAL to use positional (?) query parameters
   * or to NAMED to use named (@myparam) query parameters in this query.
   *
   * @param[in] value The new value.
   */
  void set_parameter_mode(const StringPiece& value) {
    *MutableStorage("parameterMode") = value.data();
  }

  /**
   * Determine if the '<code>preserveNulls</code>' attribute was set.
   *
   * @return true if the '<code>preserveNulls</code>' attribute was set.
   */
  bool has_preserve_nulls() const {
    return Storage().isMember("preserveNulls");
  }

  /**
   * Clears the '<code>preserveNulls</code>' attribute.
   */
  void clear_preserve_nulls() {
    MutableStorage()->removeMember("preserveNulls");
  }


  /**
   * Get the value of the '<code>preserveNulls</code>' attribute.
   */
  bool get_preserve_nulls() const {
    const Json::Value& storage = Storage("preserveNulls");
    return client::JsonValueToCppValueHelper<bool >(storage);
  }

  /**
   * Change the '<code>preserveNulls</code>' attribute.
   * @deprecated
   *
   *
   * [Deprecated] This property is deprecated.
   *
   * @param[in] value The new value.
   */
  void set_preserve_nulls(bool value) {
    client::SetJsonValueFromCppValueHelper<bool >(
      value, MutableStorage("preserveNulls"));
  }

  /**
   * Determine if the '<code>query</code>' attribute was set.
   *
   * @return true if the '<code>query</code>' attribute was set.
   */
  bool has_query() const {
    return Storage().isMember("query");
  }

  /**
   * Clears the '<code>query</code>' attribute.
   */
  void clear_query() {
    MutableStorage()->removeMember("query");
  }


  /**
   * Get the value of the '<code>query</code>' attribute.
   */
  const StringPiece get_query() const {
    const Json::Value& v = Storage("query");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>query</code>' attribute.
   *
   * [Required] A query string, following the BigQuery query syntax, of the
   * query to execute. Example: "SELECT count(f1) FROM
   * [myProjectId:myDatasetId.myTableId]".
   *
   * @param[in] value The new value.
   */
  void set_query(const StringPiece& value) {
    *MutableStorage("query") = value.data();
  }

  /**
   * Determine if the '<code>queryParameters</code>' attribute was set.
   *
   * @return true if the '<code>queryParameters</code>' attribute was set.
   */
  bool has_query_parameters() const {
    return Storage().isMember("queryParameters");
  }

  /**
   * Clears the '<code>queryParameters</code>' attribute.
   */
  void clear_query_parameters() {
    MutableStorage()->removeMember("queryParameters");
  }


  /**
   * Get a reference to the value of the '<code>queryParameters</code>'
   * attribute.
   */
  const client::JsonCppArray<QueryParameter > get_query_parameters() const;

  /**
   * Gets a reference to a mutable value of the '<code>queryParameters</code>'
   * property.
   *
   * Query parameters for Standard SQL queries.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<QueryParameter > mutable_queryParameters();

  /**
   * Determine if the '<code>timeoutMs</code>' attribute was set.
   *
   * @return true if the '<code>timeoutMs</code>' attribute was set.
   */
  bool has_timeout_ms() const {
    return Storage().isMember("timeoutMs");
  }

  /**
   * Clears the '<code>timeoutMs</code>' attribute.
   */
  void clear_timeout_ms() {
    MutableStorage()->removeMember("timeoutMs");
  }


  /**
   * Get the value of the '<code>timeoutMs</code>' attribute.
   */
  uint32 get_timeout_ms() const {
    const Json::Value& storage = Storage("timeoutMs");
    return client::JsonValueToCppValueHelper<uint32 >(storage);
  }

  /**
   * Change the '<code>timeoutMs</code>' attribute.
   *
   * [Optional] How long to wait for the query to complete, in milliseconds,
   * before the request times out and returns. Note that this is only a timeout
   * for the request, not the query. If the query takes longer to run than the
   * timeout value, the call returns without any results and with the
   * 'jobComplete' flag set to false. You can call GetQueryResults() to wait for
   * the query to complete and read the results. The default value is 10000
   * milliseconds (10 seconds).
   *
   * @param[in] value The new value.
   */
  void set_timeout_ms(uint32 value) {
    client::SetJsonValueFromCppValueHelper<uint32 >(
      value, MutableStorage("timeoutMs"));
  }

  /**
   * Determine if the '<code>useLegacySql</code>' attribute was set.
   *
   * @return true if the '<code>useLegacySql</code>' attribute was set.
   */
  bool has_use_legacy_sql() const {
    return Storage().isMember("useLegacySql");
  }

  /**
   * Clears the '<code>useLegacySql</code>' attribute.
   */
  void clear_use_legacy_sql() {
    MutableStorage()->removeMember("useLegacySql");
  }


  /**
   * Get the value of the '<code>useLegacySql</code>' attribute.
   */
  bool get_use_legacy_sql() const {
    const Json::Value& storage = Storage("useLegacySql");
    return client::JsonValueToCppValueHelper<bool >(storage);
  }

  /**
   * Change the '<code>useLegacySql</code>' attribute.
   *
   * Specifies whether to use BigQuery's legacy SQL dialect for this query. The
   * default value is true. If set to false, the query will use BigQuery's
   * standard SQL: https://cloud.google.com/bigquery/sql-reference/ When
   * useLegacySql is set to false, the value of flattenResults is ignored; query
   * will be run as if flattenResults is false.
   *
   * @param[in] value The new value.
   */
  void set_use_legacy_sql(bool value) {
    client::SetJsonValueFromCppValueHelper<bool >(
      value, MutableStorage("useLegacySql"));
  }

  /**
   * Determine if the '<code>useQueryCache</code>' attribute was set.
   *
   * @return true if the '<code>useQueryCache</code>' attribute was set.
   */
  bool has_use_query_cache() const {
    return Storage().isMember("useQueryCache");
  }

  /**
   * Clears the '<code>useQueryCache</code>' attribute.
   */
  void clear_use_query_cache() {
    MutableStorage()->removeMember("useQueryCache");
  }


  /**
   * Get the value of the '<code>useQueryCache</code>' attribute.
   */
  bool get_use_query_cache() const {
    const Json::Value& storage = Storage("useQueryCache");
    return client::JsonValueToCppValueHelper<bool >(storage);
  }

  /**
   * Change the '<code>useQueryCache</code>' attribute.
   *
   * [Optional] Whether to look for the result in the query cache. The query
   * cache is a best-effort cache that will be flushed whenever tables in the
   * query are modified. The default value is true.
   *
   * @param[in] value The new value.
   */
  void set_use_query_cache(bool value) {
    client::SetJsonValueFromCppValueHelper<bool >(
      value, MutableStorage("useQueryCache"));
  }

 private:
  void operator=(const QueryRequest&);
};  // QueryRequest
}  // namespace google_bigquery_api
#endif  // GOOGLE_BIGQUERY_API_QUERY_REQUEST_H_