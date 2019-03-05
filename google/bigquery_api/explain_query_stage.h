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
#ifndef  GOOGLE_BIGQUERY_API_EXPLAIN_QUERY_STAGE_H_
#define  GOOGLE_BIGQUERY_API_EXPLAIN_QUERY_STAGE_H_

#include <string>
#include "googleapis/base/integral_types.h"
#include "googleapis/client/data/jsoncpp_data.h"

#include "google/bigquery_api/explain_query_step.h"

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
class ExplainQueryStage : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static ExplainQueryStage* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit ExplainQueryStage(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit ExplainQueryStage(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~ExplainQueryStage();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_bigquery_api::ExplainQueryStage</code>
   */
  const char* GetTypeName() const {
    return "google_bigquery_api::ExplainQueryStage";
  }

  /**
   * Determine if the '<code>completedParallelInputs</code>' attribute was set.
   *
   * @return true if the '<code>completedParallelInputs</code>' attribute was
   * set.
   */
  bool has_completed_parallel_inputs() const {
    return Storage().isMember("completedParallelInputs");
  }

  /**
   * Clears the '<code>completedParallelInputs</code>' attribute.
   */
  void clear_completed_parallel_inputs() {
    MutableStorage()->removeMember("completedParallelInputs");
  }


  /**
   * Get the value of the '<code>completedParallelInputs</code>' attribute.
   */
  int64 get_completed_parallel_inputs() const {
    const Json::Value& storage = Storage("completedParallelInputs");
    return client::JsonValueToCppValueHelper<int64 >(storage);
  }

  /**
   * Change the '<code>completedParallelInputs</code>' attribute.
   *
   * Number of parallel input segments completed.
   *
   * @param[in] value The new value.
   */
  void set_completed_parallel_inputs(int64 value) {
    client::SetJsonValueFromCppValueHelper<int64 >(
      value, MutableStorage("completedParallelInputs"));
  }

  /**
   * Determine if the '<code>computeMsAvg</code>' attribute was set.
   *
   * @return true if the '<code>computeMsAvg</code>' attribute was set.
   */
  bool has_compute_ms_avg() const {
    return Storage().isMember("computeMsAvg");
  }

  /**
   * Clears the '<code>computeMsAvg</code>' attribute.
   */
  void clear_compute_ms_avg() {
    MutableStorage()->removeMember("computeMsAvg");
  }


  /**
   * Get the value of the '<code>computeMsAvg</code>' attribute.
   */
  int64 get_compute_ms_avg() const {
    const Json::Value& storage = Storage("computeMsAvg");
    return client::JsonValueToCppValueHelper<int64 >(storage);
  }

  /**
   * Change the '<code>computeMsAvg</code>' attribute.
   *
   * Milliseconds the average shard spent on CPU-bound tasks.
   *
   * @param[in] value The new value.
   */
  void set_compute_ms_avg(int64 value) {
    client::SetJsonValueFromCppValueHelper<int64 >(
      value, MutableStorage("computeMsAvg"));
  }

  /**
   * Determine if the '<code>computeMsMax</code>' attribute was set.
   *
   * @return true if the '<code>computeMsMax</code>' attribute was set.
   */
  bool has_compute_ms_max() const {
    return Storage().isMember("computeMsMax");
  }

  /**
   * Clears the '<code>computeMsMax</code>' attribute.
   */
  void clear_compute_ms_max() {
    MutableStorage()->removeMember("computeMsMax");
  }


  /**
   * Get the value of the '<code>computeMsMax</code>' attribute.
   */
  int64 get_compute_ms_max() const {
    const Json::Value& storage = Storage("computeMsMax");
    return client::JsonValueToCppValueHelper<int64 >(storage);
  }

  /**
   * Change the '<code>computeMsMax</code>' attribute.
   *
   * Milliseconds the slowest shard spent on CPU-bound tasks.
   *
   * @param[in] value The new value.
   */
  void set_compute_ms_max(int64 value) {
    client::SetJsonValueFromCppValueHelper<int64 >(
      value, MutableStorage("computeMsMax"));
  }

  /**
   * Determine if the '<code>computeRatioAvg</code>' attribute was set.
   *
   * @return true if the '<code>computeRatioAvg</code>' attribute was set.
   */
  bool has_compute_ratio_avg() const {
    return Storage().isMember("computeRatioAvg");
  }

  /**
   * Clears the '<code>computeRatioAvg</code>' attribute.
   */
  void clear_compute_ratio_avg() {
    MutableStorage()->removeMember("computeRatioAvg");
  }


  /**
   * Get the value of the '<code>computeRatioAvg</code>' attribute.
   */
  double get_compute_ratio_avg() const {
    const Json::Value& storage = Storage("computeRatioAvg");
    return client::JsonValueToCppValueHelper<double >(storage);
  }

  /**
   * Change the '<code>computeRatioAvg</code>' attribute.
   *
   * Relative amount of time the average shard spent on CPU-bound tasks.
   *
   * @param[in] value The new value.
   */
  void set_compute_ratio_avg(double value) {
    client::SetJsonValueFromCppValueHelper<double >(
      value, MutableStorage("computeRatioAvg"));
  }

  /**
   * Determine if the '<code>computeRatioMax</code>' attribute was set.
   *
   * @return true if the '<code>computeRatioMax</code>' attribute was set.
   */
  bool has_compute_ratio_max() const {
    return Storage().isMember("computeRatioMax");
  }

  /**
   * Clears the '<code>computeRatioMax</code>' attribute.
   */
  void clear_compute_ratio_max() {
    MutableStorage()->removeMember("computeRatioMax");
  }


  /**
   * Get the value of the '<code>computeRatioMax</code>' attribute.
   */
  double get_compute_ratio_max() const {
    const Json::Value& storage = Storage("computeRatioMax");
    return client::JsonValueToCppValueHelper<double >(storage);
  }

  /**
   * Change the '<code>computeRatioMax</code>' attribute.
   *
   * Relative amount of time the slowest shard spent on CPU-bound tasks.
   *
   * @param[in] value The new value.
   */
  void set_compute_ratio_max(double value) {
    client::SetJsonValueFromCppValueHelper<double >(
      value, MutableStorage("computeRatioMax"));
  }

  /**
   * Determine if the '<code>endMs</code>' attribute was set.
   *
   * @return true if the '<code>endMs</code>' attribute was set.
   */
  bool has_end_ms() const {
    return Storage().isMember("endMs");
  }

  /**
   * Clears the '<code>endMs</code>' attribute.
   */
  void clear_end_ms() {
    MutableStorage()->removeMember("endMs");
  }


  /**
   * Get the value of the '<code>endMs</code>' attribute.
   */
  int64 get_end_ms() const {
    const Json::Value& storage = Storage("endMs");
    return client::JsonValueToCppValueHelper<int64 >(storage);
  }

  /**
   * Change the '<code>endMs</code>' attribute.
   *
   * Stage end time represented as milliseconds since epoch.
   *
   * @param[in] value The new value.
   */
  void set_end_ms(int64 value) {
    client::SetJsonValueFromCppValueHelper<int64 >(
      value, MutableStorage("endMs"));
  }

  /**
   * Determine if the '<code>id</code>' attribute was set.
   *
   * @return true if the '<code>id</code>' attribute was set.
   */
  bool has_id() const {
    return Storage().isMember("id");
  }

  /**
   * Clears the '<code>id</code>' attribute.
   */
  void clear_id() {
    MutableStorage()->removeMember("id");
  }


  /**
   * Get the value of the '<code>id</code>' attribute.
   */
  int64 get_id() const {
    const Json::Value& storage = Storage("id");
    return client::JsonValueToCppValueHelper<int64 >(storage);
  }

  /**
   * Change the '<code>id</code>' attribute.
   *
   * Unique ID for stage within plan.
   *
   * @param[in] value The new value.
   */
  void set_id(int64 value) {
    client::SetJsonValueFromCppValueHelper<int64 >(
      value, MutableStorage("id"));
  }

  /**
   * Determine if the '<code>inputStages</code>' attribute was set.
   *
   * @return true if the '<code>inputStages</code>' attribute was set.
   */
  bool has_input_stages() const {
    return Storage().isMember("inputStages");
  }

  /**
   * Clears the '<code>inputStages</code>' attribute.
   */
  void clear_input_stages() {
    MutableStorage()->removeMember("inputStages");
  }


  /**
   * Get a reference to the value of the '<code>inputStages</code>' attribute.
   */
  const client::JsonCppArray<int64 > get_input_stages() const {
     const Json::Value& storage = Storage("inputStages");
    return client::JsonValueToCppValueHelper<client::JsonCppArray<int64 > >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>inputStages</code>'
   * property.
   *
   * IDs for stages that are inputs to this stage.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<int64 > mutable_inputStages() {
    Json::Value* storage = MutableStorage("inputStages");
    return client::JsonValueToMutableCppValueHelper<client::JsonCppArray<int64 > >(storage);
  }

  /**
   * Determine if the '<code>name</code>' attribute was set.
   *
   * @return true if the '<code>name</code>' attribute was set.
   */
  bool has_name() const {
    return Storage().isMember("name");
  }

  /**
   * Clears the '<code>name</code>' attribute.
   */
  void clear_name() {
    MutableStorage()->removeMember("name");
  }


  /**
   * Get the value of the '<code>name</code>' attribute.
   */
  const std::string get_name() const {
    const Json::Value& v = Storage("name");
    if (v == Json::Value::null) return std::string("");
    return std::string(v.asCString());
  }

  /**
   * Change the '<code>name</code>' attribute.
   *
   * Human-readable name for stage.
   *
   * @param[in] value The new value.
   */
  void set_name(const std::string& value) {
    *MutableStorage("name") = value.data();
  }

  /**
   * Determine if the '<code>parallelInputs</code>' attribute was set.
   *
   * @return true if the '<code>parallelInputs</code>' attribute was set.
   */
  bool has_parallel_inputs() const {
    return Storage().isMember("parallelInputs");
  }

  /**
   * Clears the '<code>parallelInputs</code>' attribute.
   */
  void clear_parallel_inputs() {
    MutableStorage()->removeMember("parallelInputs");
  }


  /**
   * Get the value of the '<code>parallelInputs</code>' attribute.
   */
  int64 get_parallel_inputs() const {
    const Json::Value& storage = Storage("parallelInputs");
    return client::JsonValueToCppValueHelper<int64 >(storage);
  }

  /**
   * Change the '<code>parallelInputs</code>' attribute.
   *
   * Number of parallel input segments to be processed.
   *
   * @param[in] value The new value.
   */
  void set_parallel_inputs(int64 value) {
    client::SetJsonValueFromCppValueHelper<int64 >(
      value, MutableStorage("parallelInputs"));
  }

  /**
   * Determine if the '<code>readMsAvg</code>' attribute was set.
   *
   * @return true if the '<code>readMsAvg</code>' attribute was set.
   */
  bool has_read_ms_avg() const {
    return Storage().isMember("readMsAvg");
  }

  /**
   * Clears the '<code>readMsAvg</code>' attribute.
   */
  void clear_read_ms_avg() {
    MutableStorage()->removeMember("readMsAvg");
  }


  /**
   * Get the value of the '<code>readMsAvg</code>' attribute.
   */
  int64 get_read_ms_avg() const {
    const Json::Value& storage = Storage("readMsAvg");
    return client::JsonValueToCppValueHelper<int64 >(storage);
  }

  /**
   * Change the '<code>readMsAvg</code>' attribute.
   *
   * Milliseconds the average shard spent reading input.
   *
   * @param[in] value The new value.
   */
  void set_read_ms_avg(int64 value) {
    client::SetJsonValueFromCppValueHelper<int64 >(
      value, MutableStorage("readMsAvg"));
  }

  /**
   * Determine if the '<code>readMsMax</code>' attribute was set.
   *
   * @return true if the '<code>readMsMax</code>' attribute was set.
   */
  bool has_read_ms_max() const {
    return Storage().isMember("readMsMax");
  }

  /**
   * Clears the '<code>readMsMax</code>' attribute.
   */
  void clear_read_ms_max() {
    MutableStorage()->removeMember("readMsMax");
  }


  /**
   * Get the value of the '<code>readMsMax</code>' attribute.
   */
  int64 get_read_ms_max() const {
    const Json::Value& storage = Storage("readMsMax");
    return client::JsonValueToCppValueHelper<int64 >(storage);
  }

  /**
   * Change the '<code>readMsMax</code>' attribute.
   *
   * Milliseconds the slowest shard spent reading input.
   *
   * @param[in] value The new value.
   */
  void set_read_ms_max(int64 value) {
    client::SetJsonValueFromCppValueHelper<int64 >(
      value, MutableStorage("readMsMax"));
  }

  /**
   * Determine if the '<code>readRatioAvg</code>' attribute was set.
   *
   * @return true if the '<code>readRatioAvg</code>' attribute was set.
   */
  bool has_read_ratio_avg() const {
    return Storage().isMember("readRatioAvg");
  }

  /**
   * Clears the '<code>readRatioAvg</code>' attribute.
   */
  void clear_read_ratio_avg() {
    MutableStorage()->removeMember("readRatioAvg");
  }


  /**
   * Get the value of the '<code>readRatioAvg</code>' attribute.
   */
  double get_read_ratio_avg() const {
    const Json::Value& storage = Storage("readRatioAvg");
    return client::JsonValueToCppValueHelper<double >(storage);
  }

  /**
   * Change the '<code>readRatioAvg</code>' attribute.
   *
   * Relative amount of time the average shard spent reading input.
   *
   * @param[in] value The new value.
   */
  void set_read_ratio_avg(double value) {
    client::SetJsonValueFromCppValueHelper<double >(
      value, MutableStorage("readRatioAvg"));
  }

  /**
   * Determine if the '<code>readRatioMax</code>' attribute was set.
   *
   * @return true if the '<code>readRatioMax</code>' attribute was set.
   */
  bool has_read_ratio_max() const {
    return Storage().isMember("readRatioMax");
  }

  /**
   * Clears the '<code>readRatioMax</code>' attribute.
   */
  void clear_read_ratio_max() {
    MutableStorage()->removeMember("readRatioMax");
  }


  /**
   * Get the value of the '<code>readRatioMax</code>' attribute.
   */
  double get_read_ratio_max() const {
    const Json::Value& storage = Storage("readRatioMax");
    return client::JsonValueToCppValueHelper<double >(storage);
  }

  /**
   * Change the '<code>readRatioMax</code>' attribute.
   *
   * Relative amount of time the slowest shard spent reading input.
   *
   * @param[in] value The new value.
   */
  void set_read_ratio_max(double value) {
    client::SetJsonValueFromCppValueHelper<double >(
      value, MutableStorage("readRatioMax"));
  }

  /**
   * Determine if the '<code>recordsRead</code>' attribute was set.
   *
   * @return true if the '<code>recordsRead</code>' attribute was set.
   */
  bool has_records_read() const {
    return Storage().isMember("recordsRead");
  }

  /**
   * Clears the '<code>recordsRead</code>' attribute.
   */
  void clear_records_read() {
    MutableStorage()->removeMember("recordsRead");
  }


  /**
   * Get the value of the '<code>recordsRead</code>' attribute.
   */
  int64 get_records_read() const {
    const Json::Value& storage = Storage("recordsRead");
    return client::JsonValueToCppValueHelper<int64 >(storage);
  }

  /**
   * Change the '<code>recordsRead</code>' attribute.
   *
   * Number of records read into the stage.
   *
   * @param[in] value The new value.
   */
  void set_records_read(int64 value) {
    client::SetJsonValueFromCppValueHelper<int64 >(
      value, MutableStorage("recordsRead"));
  }

  /**
   * Determine if the '<code>recordsWritten</code>' attribute was set.
   *
   * @return true if the '<code>recordsWritten</code>' attribute was set.
   */
  bool has_records_written() const {
    return Storage().isMember("recordsWritten");
  }

  /**
   * Clears the '<code>recordsWritten</code>' attribute.
   */
  void clear_records_written() {
    MutableStorage()->removeMember("recordsWritten");
  }


  /**
   * Get the value of the '<code>recordsWritten</code>' attribute.
   */
  int64 get_records_written() const {
    const Json::Value& storage = Storage("recordsWritten");
    return client::JsonValueToCppValueHelper<int64 >(storage);
  }

  /**
   * Change the '<code>recordsWritten</code>' attribute.
   *
   * Number of records written by the stage.
   *
   * @param[in] value The new value.
   */
  void set_records_written(int64 value) {
    client::SetJsonValueFromCppValueHelper<int64 >(
      value, MutableStorage("recordsWritten"));
  }

  /**
   * Determine if the '<code>shuffleOutputBytes</code>' attribute was set.
   *
   * @return true if the '<code>shuffleOutputBytes</code>' attribute was set.
   */
  bool has_shuffle_output_bytes() const {
    return Storage().isMember("shuffleOutputBytes");
  }

  /**
   * Clears the '<code>shuffleOutputBytes</code>' attribute.
   */
  void clear_shuffle_output_bytes() {
    MutableStorage()->removeMember("shuffleOutputBytes");
  }


  /**
   * Get the value of the '<code>shuffleOutputBytes</code>' attribute.
   */
  int64 get_shuffle_output_bytes() const {
    const Json::Value& storage = Storage("shuffleOutputBytes");
    return client::JsonValueToCppValueHelper<int64 >(storage);
  }

  /**
   * Change the '<code>shuffleOutputBytes</code>' attribute.
   *
   * Total number of bytes written to shuffle.
   *
   * @param[in] value The new value.
   */
  void set_shuffle_output_bytes(int64 value) {
    client::SetJsonValueFromCppValueHelper<int64 >(
      value, MutableStorage("shuffleOutputBytes"));
  }

  /**
   * Determine if the '<code>shuffleOutputBytesSpilled</code>' attribute was
   * set.
   *
   * @return true if the '<code>shuffleOutputBytesSpilled</code>' attribute was
   * set.
   */
  bool has_shuffle_output_bytes_spilled() const {
    return Storage().isMember("shuffleOutputBytesSpilled");
  }

  /**
   * Clears the '<code>shuffleOutputBytesSpilled</code>' attribute.
   */
  void clear_shuffle_output_bytes_spilled() {
    MutableStorage()->removeMember("shuffleOutputBytesSpilled");
  }


  /**
   * Get the value of the '<code>shuffleOutputBytesSpilled</code>' attribute.
   */
  int64 get_shuffle_output_bytes_spilled() const {
    const Json::Value& storage = Storage("shuffleOutputBytesSpilled");
    return client::JsonValueToCppValueHelper<int64 >(storage);
  }

  /**
   * Change the '<code>shuffleOutputBytesSpilled</code>' attribute.
   *
   * Total number of bytes written to shuffle and spilled to disk.
   *
   * @param[in] value The new value.
   */
  void set_shuffle_output_bytes_spilled(int64 value) {
    client::SetJsonValueFromCppValueHelper<int64 >(
      value, MutableStorage("shuffleOutputBytesSpilled"));
  }

  /**
   * Determine if the '<code>startMs</code>' attribute was set.
   *
   * @return true if the '<code>startMs</code>' attribute was set.
   */
  bool has_start_ms() const {
    return Storage().isMember("startMs");
  }

  /**
   * Clears the '<code>startMs</code>' attribute.
   */
  void clear_start_ms() {
    MutableStorage()->removeMember("startMs");
  }


  /**
   * Get the value of the '<code>startMs</code>' attribute.
   */
  int64 get_start_ms() const {
    const Json::Value& storage = Storage("startMs");
    return client::JsonValueToCppValueHelper<int64 >(storage);
  }

  /**
   * Change the '<code>startMs</code>' attribute.
   *
   * Stage start time represented as milliseconds since epoch.
   *
   * @param[in] value The new value.
   */
  void set_start_ms(int64 value) {
    client::SetJsonValueFromCppValueHelper<int64 >(
      value, MutableStorage("startMs"));
  }

  /**
   * Determine if the '<code>status</code>' attribute was set.
   *
   * @return true if the '<code>status</code>' attribute was set.
   */
  bool has_status() const {
    return Storage().isMember("status");
  }

  /**
   * Clears the '<code>status</code>' attribute.
   */
  void clear_status() {
    MutableStorage()->removeMember("status");
  }


  /**
   * Get the value of the '<code>status</code>' attribute.
   */
  const std::string get_status() const {
    const Json::Value& v = Storage("status");
    if (v == Json::Value::null) return std::string("");
    return std::string(v.asCString());
  }

  /**
   * Change the '<code>status</code>' attribute.
   *
   * Current status for the stage.
   *
   * @param[in] value The new value.
   */
  void set_status(const std::string& value) {
    *MutableStorage("status") = value.data();
  }

  /**
   * Determine if the '<code>steps</code>' attribute was set.
   *
   * @return true if the '<code>steps</code>' attribute was set.
   */
  bool has_steps() const {
    return Storage().isMember("steps");
  }

  /**
   * Clears the '<code>steps</code>' attribute.
   */
  void clear_steps() {
    MutableStorage()->removeMember("steps");
  }


  /**
   * Get a reference to the value of the '<code>steps</code>' attribute.
   */
  const client::JsonCppArray<ExplainQueryStep > get_steps() const;

  /**
   * Gets a reference to a mutable value of the '<code>steps</code>' property.
   *
   * List of operations within the stage in dependency order (approximately
   * chronological).
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<ExplainQueryStep > mutable_steps();

  /**
   * Determine if the '<code>waitMsAvg</code>' attribute was set.
   *
   * @return true if the '<code>waitMsAvg</code>' attribute was set.
   */
  bool has_wait_ms_avg() const {
    return Storage().isMember("waitMsAvg");
  }

  /**
   * Clears the '<code>waitMsAvg</code>' attribute.
   */
  void clear_wait_ms_avg() {
    MutableStorage()->removeMember("waitMsAvg");
  }


  /**
   * Get the value of the '<code>waitMsAvg</code>' attribute.
   */
  int64 get_wait_ms_avg() const {
    const Json::Value& storage = Storage("waitMsAvg");
    return client::JsonValueToCppValueHelper<int64 >(storage);
  }

  /**
   * Change the '<code>waitMsAvg</code>' attribute.
   *
   * Milliseconds the average shard spent waiting to be scheduled.
   *
   * @param[in] value The new value.
   */
  void set_wait_ms_avg(int64 value) {
    client::SetJsonValueFromCppValueHelper<int64 >(
      value, MutableStorage("waitMsAvg"));
  }

  /**
   * Determine if the '<code>waitMsMax</code>' attribute was set.
   *
   * @return true if the '<code>waitMsMax</code>' attribute was set.
   */
  bool has_wait_ms_max() const {
    return Storage().isMember("waitMsMax");
  }

  /**
   * Clears the '<code>waitMsMax</code>' attribute.
   */
  void clear_wait_ms_max() {
    MutableStorage()->removeMember("waitMsMax");
  }


  /**
   * Get the value of the '<code>waitMsMax</code>' attribute.
   */
  int64 get_wait_ms_max() const {
    const Json::Value& storage = Storage("waitMsMax");
    return client::JsonValueToCppValueHelper<int64 >(storage);
  }

  /**
   * Change the '<code>waitMsMax</code>' attribute.
   *
   * Milliseconds the slowest shard spent waiting to be scheduled.
   *
   * @param[in] value The new value.
   */
  void set_wait_ms_max(int64 value) {
    client::SetJsonValueFromCppValueHelper<int64 >(
      value, MutableStorage("waitMsMax"));
  }

  /**
   * Determine if the '<code>waitRatioAvg</code>' attribute was set.
   *
   * @return true if the '<code>waitRatioAvg</code>' attribute was set.
   */
  bool has_wait_ratio_avg() const {
    return Storage().isMember("waitRatioAvg");
  }

  /**
   * Clears the '<code>waitRatioAvg</code>' attribute.
   */
  void clear_wait_ratio_avg() {
    MutableStorage()->removeMember("waitRatioAvg");
  }


  /**
   * Get the value of the '<code>waitRatioAvg</code>' attribute.
   */
  double get_wait_ratio_avg() const {
    const Json::Value& storage = Storage("waitRatioAvg");
    return client::JsonValueToCppValueHelper<double >(storage);
  }

  /**
   * Change the '<code>waitRatioAvg</code>' attribute.
   *
   * Relative amount of time the average shard spent waiting to be scheduled.
   *
   * @param[in] value The new value.
   */
  void set_wait_ratio_avg(double value) {
    client::SetJsonValueFromCppValueHelper<double >(
      value, MutableStorage("waitRatioAvg"));
  }

  /**
   * Determine if the '<code>waitRatioMax</code>' attribute was set.
   *
   * @return true if the '<code>waitRatioMax</code>' attribute was set.
   */
  bool has_wait_ratio_max() const {
    return Storage().isMember("waitRatioMax");
  }

  /**
   * Clears the '<code>waitRatioMax</code>' attribute.
   */
  void clear_wait_ratio_max() {
    MutableStorage()->removeMember("waitRatioMax");
  }


  /**
   * Get the value of the '<code>waitRatioMax</code>' attribute.
   */
  double get_wait_ratio_max() const {
    const Json::Value& storage = Storage("waitRatioMax");
    return client::JsonValueToCppValueHelper<double >(storage);
  }

  /**
   * Change the '<code>waitRatioMax</code>' attribute.
   *
   * Relative amount of time the slowest shard spent waiting to be scheduled.
   *
   * @param[in] value The new value.
   */
  void set_wait_ratio_max(double value) {
    client::SetJsonValueFromCppValueHelper<double >(
      value, MutableStorage("waitRatioMax"));
  }

  /**
   * Determine if the '<code>writeMsAvg</code>' attribute was set.
   *
   * @return true if the '<code>writeMsAvg</code>' attribute was set.
   */
  bool has_write_ms_avg() const {
    return Storage().isMember("writeMsAvg");
  }

  /**
   * Clears the '<code>writeMsAvg</code>' attribute.
   */
  void clear_write_ms_avg() {
    MutableStorage()->removeMember("writeMsAvg");
  }


  /**
   * Get the value of the '<code>writeMsAvg</code>' attribute.
   */
  int64 get_write_ms_avg() const {
    const Json::Value& storage = Storage("writeMsAvg");
    return client::JsonValueToCppValueHelper<int64 >(storage);
  }

  /**
   * Change the '<code>writeMsAvg</code>' attribute.
   *
   * Milliseconds the average shard spent on writing output.
   *
   * @param[in] value The new value.
   */
  void set_write_ms_avg(int64 value) {
    client::SetJsonValueFromCppValueHelper<int64 >(
      value, MutableStorage("writeMsAvg"));
  }

  /**
   * Determine if the '<code>writeMsMax</code>' attribute was set.
   *
   * @return true if the '<code>writeMsMax</code>' attribute was set.
   */
  bool has_write_ms_max() const {
    return Storage().isMember("writeMsMax");
  }

  /**
   * Clears the '<code>writeMsMax</code>' attribute.
   */
  void clear_write_ms_max() {
    MutableStorage()->removeMember("writeMsMax");
  }


  /**
   * Get the value of the '<code>writeMsMax</code>' attribute.
   */
  int64 get_write_ms_max() const {
    const Json::Value& storage = Storage("writeMsMax");
    return client::JsonValueToCppValueHelper<int64 >(storage);
  }

  /**
   * Change the '<code>writeMsMax</code>' attribute.
   *
   * Milliseconds the slowest shard spent on writing output.
   *
   * @param[in] value The new value.
   */
  void set_write_ms_max(int64 value) {
    client::SetJsonValueFromCppValueHelper<int64 >(
      value, MutableStorage("writeMsMax"));
  }

  /**
   * Determine if the '<code>writeRatioAvg</code>' attribute was set.
   *
   * @return true if the '<code>writeRatioAvg</code>' attribute was set.
   */
  bool has_write_ratio_avg() const {
    return Storage().isMember("writeRatioAvg");
  }

  /**
   * Clears the '<code>writeRatioAvg</code>' attribute.
   */
  void clear_write_ratio_avg() {
    MutableStorage()->removeMember("writeRatioAvg");
  }


  /**
   * Get the value of the '<code>writeRatioAvg</code>' attribute.
   */
  double get_write_ratio_avg() const {
    const Json::Value& storage = Storage("writeRatioAvg");
    return client::JsonValueToCppValueHelper<double >(storage);
  }

  /**
   * Change the '<code>writeRatioAvg</code>' attribute.
   *
   * Relative amount of time the average shard spent on writing output.
   *
   * @param[in] value The new value.
   */
  void set_write_ratio_avg(double value) {
    client::SetJsonValueFromCppValueHelper<double >(
      value, MutableStorage("writeRatioAvg"));
  }

  /**
   * Determine if the '<code>writeRatioMax</code>' attribute was set.
   *
   * @return true if the '<code>writeRatioMax</code>' attribute was set.
   */
  bool has_write_ratio_max() const {
    return Storage().isMember("writeRatioMax");
  }

  /**
   * Clears the '<code>writeRatioMax</code>' attribute.
   */
  void clear_write_ratio_max() {
    MutableStorage()->removeMember("writeRatioMax");
  }


  /**
   * Get the value of the '<code>writeRatioMax</code>' attribute.
   */
  double get_write_ratio_max() const {
    const Json::Value& storage = Storage("writeRatioMax");
    return client::JsonValueToCppValueHelper<double >(storage);
  }

  /**
   * Change the '<code>writeRatioMax</code>' attribute.
   *
   * Relative amount of time the slowest shard spent on writing output.
   *
   * @param[in] value The new value.
   */
  void set_write_ratio_max(double value) {
    client::SetJsonValueFromCppValueHelper<double >(
      value, MutableStorage("writeRatioMax"));
  }

 private:
  void operator=(const ExplainQueryStage&);
};  // ExplainQueryStage
}  // namespace google_bigquery_api
#endif  // GOOGLE_BIGQUERY_API_EXPLAIN_QUERY_STAGE_H_
