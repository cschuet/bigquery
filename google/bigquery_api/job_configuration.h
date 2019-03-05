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
// Generated from:
//   Version: v2
//   Revision: 20190224
// Generated by:
//    Tool: google-apis-code-generator 1.6.0
//     C++: 0.1.5
#ifndef  GOOGLE_BIGQUERY_API_JOB_CONFIGURATION_H_
#define  GOOGLE_BIGQUERY_API_JOB_CONFIGURATION_H_

#include <string>
#include "googleapis/base/integral_types.h"
#include "googleapis/client/data/jsoncpp_data.h"

#include "google/bigquery_api/job_configuration_extract.h"
#include "google/bigquery_api/job_configuration_load.h"
#include "google/bigquery_api/job_configuration_query.h"
#include "google/bigquery_api/job_configuration_table_copy.h"

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
class JobConfiguration : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static JobConfiguration* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit JobConfiguration(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit JobConfiguration(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~JobConfiguration();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_bigquery_api::JobConfiguration</code>
   */
  const char* GetTypeName() const {
    return "google_bigquery_api::JobConfiguration";
  }

  /**
   * Determine if the '<code>copy</code>' attribute was set.
   *
   * @return true if the '<code>copy</code>' attribute was set.
   */
  bool has_copy() const {
    return Storage().isMember("copy");
  }

  /**
   * Clears the '<code>copy</code>' attribute.
   */
  void clear_copy() {
    MutableStorage()->removeMember("copy");
  }


  /**
   * Get a reference to the value of the '<code>copy</code>' attribute.
   */
  const JobConfigurationTableCopy get_copy() const;

  /**
   * Gets a reference to a mutable value of the '<code>copy</code>' property.
   *
   * [Pick one] Copies a table.
   *
   * @return The result can be modified to change the attribute value.
   */
  JobConfigurationTableCopy mutable_copy();

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
   * [Optional] If set, don't actually run this job. A valid query will return a
   * mostly empty response with some processing statistics, while an invalid
   * query will return the same error it would if it wasn't a dry run. Behavior
   * of non-query jobs is undefined.
   *
   * @param[in] value The new value.
   */
  void set_dry_run(bool value) {
    client::SetJsonValueFromCppValueHelper<bool >(
      value, MutableStorage("dryRun"));
  }

  /**
   * Determine if the '<code>extract</code>' attribute was set.
   *
   * @return true if the '<code>extract</code>' attribute was set.
   */
  bool has_extract() const {
    return Storage().isMember("extract");
  }

  /**
   * Clears the '<code>extract</code>' attribute.
   */
  void clear_extract() {
    MutableStorage()->removeMember("extract");
  }


  /**
   * Get a reference to the value of the '<code>extract</code>' attribute.
   */
  const JobConfigurationExtract get_extract() const;

  /**
   * Gets a reference to a mutable value of the '<code>extract</code>' property.
   *
   * [Pick one] Configures an extract job.
   *
   * @return The result can be modified to change the attribute value.
   */
  JobConfigurationExtract mutable_extract();

  /**
   * Determine if the '<code>jobTimeoutMs</code>' attribute was set.
   *
   * @return true if the '<code>jobTimeoutMs</code>' attribute was set.
   */
  bool has_job_timeout_ms() const {
    return Storage().isMember("jobTimeoutMs");
  }

  /**
   * Clears the '<code>jobTimeoutMs</code>' attribute.
   */
  void clear_job_timeout_ms() {
    MutableStorage()->removeMember("jobTimeoutMs");
  }


  /**
   * Get the value of the '<code>jobTimeoutMs</code>' attribute.
   */
  int64 get_job_timeout_ms() const {
    const Json::Value& storage = Storage("jobTimeoutMs");
    return client::JsonValueToCppValueHelper<int64 >(storage);
  }

  /**
   * Change the '<code>jobTimeoutMs</code>' attribute.
   *
   * [Optional] Job timeout in milliseconds. If this time limit is exceeded,
   * BigQuery may attempt to terminate the job.
   *
   * @param[in] value The new value.
   */
  void set_job_timeout_ms(int64 value) {
    client::SetJsonValueFromCppValueHelper<int64 >(
      value, MutableStorage("jobTimeoutMs"));
  }

  /**
   * Determine if the '<code>jobType</code>' attribute was set.
   *
   * @return true if the '<code>jobType</code>' attribute was set.
   */
  bool has_job_type() const {
    return Storage().isMember("jobType");
  }

  /**
   * Clears the '<code>jobType</code>' attribute.
   */
  void clear_job_type() {
    MutableStorage()->removeMember("jobType");
  }


  /**
   * Get the value of the '<code>jobType</code>' attribute.
   */
  const std::string get_job_type() const {
    const Json::Value& v = Storage("jobType");
    if (v == Json::Value::null) return std::string("");
    return std::string(v.asCString());
  }

  /**
   * Change the '<code>jobType</code>' attribute.
   *
   * [Output-only] The type of the job. Can be QUERY, LOAD, EXTRACT, COPY or
   * UNKNOWN.
   *
   * @param[in] value The new value.
   */
  void set_job_type(const std::string& value) {
    *MutableStorage("jobType") = value.data();
  }

  /**
   * Determine if the '<code>labels</code>' attribute was set.
   *
   * @return true if the '<code>labels</code>' attribute was set.
   */
  bool has_labels() const {
    return Storage().isMember("labels");
  }

  /**
   * Clears the '<code>labels</code>' attribute.
   */
  void clear_labels() {
    MutableStorage()->removeMember("labels");
  }


  /**
   * Get a reference to the value of the '<code>labels</code>' attribute.
   */
  const client::JsonCppAssociativeArray<string > get_labels() const {
     const Json::Value& storage = Storage("labels");
    return client::JsonValueToCppValueHelper<client::JsonCppAssociativeArray<string > >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>labels</code>' property.
   *
   * The labels associated with this job. You can use these to organize and
   * group your jobs. Label keys and values can be no longer than 63 characters,
   * can only contain lowercase letters, numeric characters, underscores and
   * dashes. International characters are allowed. Label values are optional.
   * Label keys must start with a letter and each label in the list must have a
   * different key.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppAssociativeArray<string > mutable_labels() {
    Json::Value* storage = MutableStorage("labels");
    return client::JsonValueToMutableCppValueHelper<client::JsonCppAssociativeArray<string > >(storage);
  }

  /**
   * Determine if the '<code>load</code>' attribute was set.
   *
   * @return true if the '<code>load</code>' attribute was set.
   */
  bool has_load() const {
    return Storage().isMember("load");
  }

  /**
   * Clears the '<code>load</code>' attribute.
   */
  void clear_load() {
    MutableStorage()->removeMember("load");
  }


  /**
   * Get a reference to the value of the '<code>load</code>' attribute.
   */
  const JobConfigurationLoad get_load() const;

  /**
   * Gets a reference to a mutable value of the '<code>load</code>' property.
   *
   * [Pick one] Configures a load job.
   *
   * @return The result can be modified to change the attribute value.
   */
  JobConfigurationLoad mutable_load();

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
   * Get a reference to the value of the '<code>query</code>' attribute.
   */
  const JobConfigurationQuery get_query() const;

  /**
   * Gets a reference to a mutable value of the '<code>query</code>' property.
   *
   * [Pick one] Configures a query job.
   *
   * @return The result can be modified to change the attribute value.
   */
  JobConfigurationQuery mutable_query();

 private:
  void operator=(const JobConfiguration&);
};  // JobConfiguration
}  // namespace google_bigquery_api
#endif  // GOOGLE_BIGQUERY_API_JOB_CONFIGURATION_H_
