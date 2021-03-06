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
#ifndef  GOOGLE_BIGQUERY_API_JOB_STATISTICS_H_
#define  GOOGLE_BIGQUERY_API_JOB_STATISTICS_H_

#include <string>
#include "googleapis/base/integral_types.h"
#include "googleapis/client/data/jsoncpp_data.h"

#include "google/bigquery_api/job_statistics2.h"
#include "google/bigquery_api/job_statistics3.h"
#include "google/bigquery_api/job_statistics4.h"

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
class JobStatistics : public client::JsonCppData {
 public:
  /**
   * No description provided.
   *
   * @ingroup DataObject
   */
  class JobStatisticsReservationUsage : public client::JsonCppData {
   public:
    /**
     * Creates a new default instance.
     *
     * @return Ownership is passed back to the caller.
     */
    static JobStatisticsReservationUsage* New();

    /**
     * Standard constructor for an immutable data object instance.
     *
     * @param[in] storage  The underlying data storage for this instance.
     */
    explicit JobStatisticsReservationUsage(const Json::Value& storage);

    /**
     * Standard constructor for a mutable data object instance.
     *
     * @param[in] storage  The underlying data storage for this instance.
     */
    explicit JobStatisticsReservationUsage(Json::Value* storage);

    /**
     * Standard destructor.
     */
    virtual ~JobStatisticsReservationUsage();

    /**
     * Returns a string denoting the type of this data object.
     *
     * @return <code>google_bigquery_api::JobStatisticsReservationUsage</code>
     */
    const char* GetTypeName() const {
      return "google_bigquery_api::JobStatisticsReservationUsage";
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
     * [Output-only] Reservation name or "unreserved" for on-demand resources
     * usage.
     *
     * @param[in] value The new value.
     */
    void set_name(const std::string& value) {
      *MutableStorage("name") = value.data();
    }

    /**
     * Determine if the '<code>slotMs</code>' attribute was set.
     *
     * @return true if the '<code>slotMs</code>' attribute was set.
     */
    bool has_slot_ms() const {
      return Storage().isMember("slotMs");
    }

    /**
     * Clears the '<code>slotMs</code>' attribute.
     */
    void clear_slot_ms() {
      MutableStorage()->removeMember("slotMs");
    }


    /**
     * Get the value of the '<code>slotMs</code>' attribute.
     */
    int64 get_slot_ms() const {
      const Json::Value& storage = Storage("slotMs");
      return client::JsonValueToCppValueHelper<int64 >(storage);
    }

    /**
     * Change the '<code>slotMs</code>' attribute.
     *
     * [Output-only] Slot-milliseconds the job spent in the given reservation.
     *
     * @param[in] value The new value.
     */
    void set_slot_ms(int64 value) {
      client::SetJsonValueFromCppValueHelper<int64 >(
        value, MutableStorage("slotMs"));
    }

   private:
    void operator=(const JobStatisticsReservationUsage&);
  };  // JobStatisticsReservationUsage
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static JobStatistics* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit JobStatistics(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit JobStatistics(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~JobStatistics();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_bigquery_api::JobStatistics</code>
   */
  const char* GetTypeName() const {
    return "google_bigquery_api::JobStatistics";
  }

  /**
   * Determine if the '<code>completionRatio</code>' attribute was set.
   *
   * @return true if the '<code>completionRatio</code>' attribute was set.
   */
  bool has_completion_ratio() const {
    return Storage().isMember("completionRatio");
  }

  /**
   * Clears the '<code>completionRatio</code>' attribute.
   */
  void clear_completion_ratio() {
    MutableStorage()->removeMember("completionRatio");
  }


  /**
   * Get the value of the '<code>completionRatio</code>' attribute.
   */
  double get_completion_ratio() const {
    const Json::Value& storage = Storage("completionRatio");
    return client::JsonValueToCppValueHelper<double >(storage);
  }

  /**
   * Change the '<code>completionRatio</code>' attribute.
   *
   * [TrustedTester] [Output-only] Job progress (0.0 -> 1.0) for LOAD and
   * EXTRACT jobs.
   *
   * @param[in] value The new value.
   */
  void set_completion_ratio(double value) {
    client::SetJsonValueFromCppValueHelper<double >(
      value, MutableStorage("completionRatio"));
  }

  /**
   * Determine if the '<code>creationTime</code>' attribute was set.
   *
   * @return true if the '<code>creationTime</code>' attribute was set.
   */
  bool has_creation_time() const {
    return Storage().isMember("creationTime");
  }

  /**
   * Clears the '<code>creationTime</code>' attribute.
   */
  void clear_creation_time() {
    MutableStorage()->removeMember("creationTime");
  }


  /**
   * Get the value of the '<code>creationTime</code>' attribute.
   */
  int64 get_creation_time() const {
    const Json::Value& storage = Storage("creationTime");
    return client::JsonValueToCppValueHelper<int64 >(storage);
  }

  /**
   * Change the '<code>creationTime</code>' attribute.
   *
   * [Output-only] Creation time of this job, in milliseconds since the epoch.
   * This field will be present on all jobs.
   *
   * @param[in] value The new value.
   */
  void set_creation_time(int64 value) {
    client::SetJsonValueFromCppValueHelper<int64 >(
      value, MutableStorage("creationTime"));
  }

  /**
   * Determine if the '<code>endTime</code>' attribute was set.
   *
   * @return true if the '<code>endTime</code>' attribute was set.
   */
  bool has_end_time() const {
    return Storage().isMember("endTime");
  }

  /**
   * Clears the '<code>endTime</code>' attribute.
   */
  void clear_end_time() {
    MutableStorage()->removeMember("endTime");
  }


  /**
   * Get the value of the '<code>endTime</code>' attribute.
   */
  int64 get_end_time() const {
    const Json::Value& storage = Storage("endTime");
    return client::JsonValueToCppValueHelper<int64 >(storage);
  }

  /**
   * Change the '<code>endTime</code>' attribute.
   *
   * [Output-only] End time of this job, in milliseconds since the epoch. This
   * field will be present whenever a job is in the DONE state.
   *
   * @param[in] value The new value.
   */
  void set_end_time(int64 value) {
    client::SetJsonValueFromCppValueHelper<int64 >(
      value, MutableStorage("endTime"));
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
  const JobStatistics4 get_extract() const;

  /**
   * Gets a reference to a mutable value of the '<code>extract</code>' property.
   *
   * [Output-only] Statistics for an extract job.
   *
   * @return The result can be modified to change the attribute value.
   */
  JobStatistics4 mutable_extract();

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
  const JobStatistics3 get_load() const;

  /**
   * Gets a reference to a mutable value of the '<code>load</code>' property.
   *
   * [Output-only] Statistics for a load job.
   *
   * @return The result can be modified to change the attribute value.
   */
  JobStatistics3 mutable_load();

  /**
   * Determine if the '<code>numChildJobs</code>' attribute was set.
   *
   * @return true if the '<code>numChildJobs</code>' attribute was set.
   */
  bool has_num_child_jobs() const {
    return Storage().isMember("numChildJobs");
  }

  /**
   * Clears the '<code>numChildJobs</code>' attribute.
   */
  void clear_num_child_jobs() {
    MutableStorage()->removeMember("numChildJobs");
  }


  /**
   * Get the value of the '<code>numChildJobs</code>' attribute.
   */
  int64 get_num_child_jobs() const {
    const Json::Value& storage = Storage("numChildJobs");
    return client::JsonValueToCppValueHelper<int64 >(storage);
  }

  /**
   * Change the '<code>numChildJobs</code>' attribute.
   *
   * [Output-only] Number of child jobs executed.
   *
   * @param[in] value The new value.
   */
  void set_num_child_jobs(int64 value) {
    client::SetJsonValueFromCppValueHelper<int64 >(
      value, MutableStorage("numChildJobs"));
  }

  /**
   * Determine if the '<code>parentJobId</code>' attribute was set.
   *
   * @return true if the '<code>parentJobId</code>' attribute was set.
   */
  bool has_parent_job_id() const {
    return Storage().isMember("parentJobId");
  }

  /**
   * Clears the '<code>parentJobId</code>' attribute.
   */
  void clear_parent_job_id() {
    MutableStorage()->removeMember("parentJobId");
  }


  /**
   * Get the value of the '<code>parentJobId</code>' attribute.
   */
  const std::string get_parent_job_id() const {
    const Json::Value& v = Storage("parentJobId");
    if (v == Json::Value::null) return std::string("");
    return std::string(v.asCString());
  }

  /**
   * Change the '<code>parentJobId</code>' attribute.
   *
   * [Output-only] If this is a child job, the id of the parent.
   *
   * @param[in] value The new value.
   */
  void set_parent_job_id(const std::string& value) {
    *MutableStorage("parentJobId") = value.data();
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
   * Get a reference to the value of the '<code>query</code>' attribute.
   */
  const JobStatistics2 get_query() const;

  /**
   * Gets a reference to a mutable value of the '<code>query</code>' property.
   *
   * [Output-only] Statistics for a query job.
   *
   * @return The result can be modified to change the attribute value.
   */
  JobStatistics2 mutable_query();

  /**
   * Determine if the '<code>quotaDeferments</code>' attribute was set.
   *
   * @return true if the '<code>quotaDeferments</code>' attribute was set.
   */
  bool has_quota_deferments() const {
    return Storage().isMember("quotaDeferments");
  }

  /**
   * Clears the '<code>quotaDeferments</code>' attribute.
   */
  void clear_quota_deferments() {
    MutableStorage()->removeMember("quotaDeferments");
  }


  /**
   * Get a reference to the value of the '<code>quotaDeferments</code>'
   * attribute.
   */
  const client::JsonCppArray<string > get_quota_deferments() const {
     const Json::Value& storage = Storage("quotaDeferments");
    return client::JsonValueToCppValueHelper<client::JsonCppArray<string > >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>quotaDeferments</code>'
   * property.
   *
   * [Output-only] Quotas which delayed this job's start time.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<string > mutable_quotaDeferments() {
    Json::Value* storage = MutableStorage("quotaDeferments");
    return client::JsonValueToMutableCppValueHelper<client::JsonCppArray<string > >(storage);
  }

  /**
   * Determine if the '<code>reservationUsage</code>' attribute was set.
   *
   * @return true if the '<code>reservationUsage</code>' attribute was set.
   */
  bool has_reservation_usage() const {
    return Storage().isMember("reservationUsage");
  }

  /**
   * Clears the '<code>reservationUsage</code>' attribute.
   */
  void clear_reservation_usage() {
    MutableStorage()->removeMember("reservationUsage");
  }


  /**
   * Get a reference to the value of the '<code>reservationUsage</code>'
   * attribute.
   */
  const client::JsonCppArray<JobStatisticsReservationUsage > get_reservation_usage() const {
     const Json::Value& storage = Storage("reservationUsage");
    return client::JsonValueToCppValueHelper<client::JsonCppArray<JobStatisticsReservationUsage > >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>reservationUsage</code>'
   * property.
   *
   * [Output-only] Job resource usage breakdown by reservation.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<JobStatisticsReservationUsage > mutable_reservationUsage() {
    Json::Value* storage = MutableStorage("reservationUsage");
    return client::JsonValueToMutableCppValueHelper<client::JsonCppArray<JobStatisticsReservationUsage > >(storage);
  }

  /**
   * Determine if the '<code>startTime</code>' attribute was set.
   *
   * @return true if the '<code>startTime</code>' attribute was set.
   */
  bool has_start_time() const {
    return Storage().isMember("startTime");
  }

  /**
   * Clears the '<code>startTime</code>' attribute.
   */
  void clear_start_time() {
    MutableStorage()->removeMember("startTime");
  }


  /**
   * Get the value of the '<code>startTime</code>' attribute.
   */
  int64 get_start_time() const {
    const Json::Value& storage = Storage("startTime");
    return client::JsonValueToCppValueHelper<int64 >(storage);
  }

  /**
   * Change the '<code>startTime</code>' attribute.
   *
   * [Output-only] Start time of this job, in milliseconds since the epoch. This
   * field will be present when the job transitions from the PENDING state to
   * either RUNNING or DONE.
   *
   * @param[in] value The new value.
   */
  void set_start_time(int64 value) {
    client::SetJsonValueFromCppValueHelper<int64 >(
      value, MutableStorage("startTime"));
  }

  /**
   * Determine if the '<code>totalBytesProcessed</code>' attribute was set.
   *
   * @return true if the '<code>totalBytesProcessed</code>' attribute was set.
   */
  bool has_total_bytes_processed() const {
    return Storage().isMember("totalBytesProcessed");
  }

  /**
   * Clears the '<code>totalBytesProcessed</code>' attribute.
   */
  void clear_total_bytes_processed() {
    MutableStorage()->removeMember("totalBytesProcessed");
  }


  /**
   * Get the value of the '<code>totalBytesProcessed</code>' attribute.
   */
  int64 get_total_bytes_processed() const {
    const Json::Value& storage = Storage("totalBytesProcessed");
    return client::JsonValueToCppValueHelper<int64 >(storage);
  }

  /**
   * Change the '<code>totalBytesProcessed</code>' attribute.
   *
   * [Output-only] [Deprecated] Use the bytes processed in the query statistics
   * instead.
   *
   * @param[in] value The new value.
   */
  void set_total_bytes_processed(int64 value) {
    client::SetJsonValueFromCppValueHelper<int64 >(
      value, MutableStorage("totalBytesProcessed"));
  }

  /**
   * Determine if the '<code>totalSlotMs</code>' attribute was set.
   *
   * @return true if the '<code>totalSlotMs</code>' attribute was set.
   */
  bool has_total_slot_ms() const {
    return Storage().isMember("totalSlotMs");
  }

  /**
   * Clears the '<code>totalSlotMs</code>' attribute.
   */
  void clear_total_slot_ms() {
    MutableStorage()->removeMember("totalSlotMs");
  }


  /**
   * Get the value of the '<code>totalSlotMs</code>' attribute.
   */
  int64 get_total_slot_ms() const {
    const Json::Value& storage = Storage("totalSlotMs");
    return client::JsonValueToCppValueHelper<int64 >(storage);
  }

  /**
   * Change the '<code>totalSlotMs</code>' attribute.
   *
   * [Output-only] Slot-milliseconds for the job.
   *
   * @param[in] value The new value.
   */
  void set_total_slot_ms(int64 value) {
    client::SetJsonValueFromCppValueHelper<int64 >(
      value, MutableStorage("totalSlotMs"));
  }

 private:
  void operator=(const JobStatistics&);
};  // JobStatistics
}  // namespace google_bigquery_api
#endif  // GOOGLE_BIGQUERY_API_JOB_STATISTICS_H_
