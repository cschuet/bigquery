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
#ifndef  GOOGLE_BIGQUERY_API_JOB_STATISTICS2_H_
#define  GOOGLE_BIGQUERY_API_JOB_STATISTICS2_H_

#include <string>
#include "googleapis/base/integral_types.h"
#include "googleapis/client/data/jsoncpp_data.h"

#include "google/bigquery_api/big_query_model_training.h"
#include "google/bigquery_api/explain_query_stage.h"
#include "google/bigquery_api/query_parameter.h"
#include "google/bigquery_api/query_timeline_sample.h"
#include "google/bigquery_api/table_reference.h"
#include "google/bigquery_api/table_schema.h"

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
class JobStatistics2 : public client::JsonCppData {
 public:
  /**
   * No description provided.
   *
   * @ingroup DataObject
   */
  class JobStatistics2ReservationUsage : public client::JsonCppData {
   public:
    /**
     * Creates a new default instance.
     *
     * @return Ownership is passed back to the caller.
     */
    static JobStatistics2ReservationUsage* New();

    /**
     * Standard constructor for an immutable data object instance.
     *
     * @param[in] storage  The underlying data storage for this instance.
     */
    explicit JobStatistics2ReservationUsage(const Json::Value& storage);

    /**
     * Standard constructor for a mutable data object instance.
     *
     * @param[in] storage  The underlying data storage for this instance.
     */
    explicit JobStatistics2ReservationUsage(Json::Value* storage);

    /**
     * Standard destructor.
     */
    virtual ~JobStatistics2ReservationUsage();

    /**
     * Returns a string denoting the type of this data object.
     *
     * @return <code>google_bigquery_api::JobStatistics2ReservationUsage</code>
     */
    const char* GetTypeName() const {
      return "google_bigquery_api::JobStatistics2ReservationUsage";
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
    void operator=(const JobStatistics2ReservationUsage&);
  };  // JobStatistics2ReservationUsage
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static JobStatistics2* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit JobStatistics2(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit JobStatistics2(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~JobStatistics2();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_bigquery_api::JobStatistics2</code>
   */
  const char* GetTypeName() const {
    return "google_bigquery_api::JobStatistics2";
  }

  /**
   * Determine if the '<code>billingTier</code>' attribute was set.
   *
   * @return true if the '<code>billingTier</code>' attribute was set.
   */
  bool has_billing_tier() const {
    return Storage().isMember("billingTier");
  }

  /**
   * Clears the '<code>billingTier</code>' attribute.
   */
  void clear_billing_tier() {
    MutableStorage()->removeMember("billingTier");
  }


  /**
   * Get the value of the '<code>billingTier</code>' attribute.
   */
  int32 get_billing_tier() const {
    const Json::Value& storage = Storage("billingTier");
    return client::JsonValueToCppValueHelper<int32 >(storage);
  }

  /**
   * Change the '<code>billingTier</code>' attribute.
   *
   * [Output-only] Billing tier for the job.
   *
   * @param[in] value The new value.
   */
  void set_billing_tier(int32 value) {
    client::SetJsonValueFromCppValueHelper<int32 >(
      value, MutableStorage("billingTier"));
  }

  /**
   * Determine if the '<code>cacheHit</code>' attribute was set.
   *
   * @return true if the '<code>cacheHit</code>' attribute was set.
   */
  bool has_cache_hit() const {
    return Storage().isMember("cacheHit");
  }

  /**
   * Clears the '<code>cacheHit</code>' attribute.
   */
  void clear_cache_hit() {
    MutableStorage()->removeMember("cacheHit");
  }


  /**
   * Get the value of the '<code>cacheHit</code>' attribute.
   */
  bool get_cache_hit() const {
    const Json::Value& storage = Storage("cacheHit");
    return client::JsonValueToCppValueHelper<bool >(storage);
  }

  /**
   * Change the '<code>cacheHit</code>' attribute.
   *
   * [Output-only] Whether the query result was fetched from the query cache.
   *
   * @param[in] value The new value.
   */
  void set_cache_hit(bool value) {
    client::SetJsonValueFromCppValueHelper<bool >(
      value, MutableStorage("cacheHit"));
  }

  /**
   * Determine if the '<code>ddlOperationPerformed</code>' attribute was set.
   *
   * @return true if the '<code>ddlOperationPerformed</code>' attribute was set.
   */
  bool has_ddl_operation_performed() const {
    return Storage().isMember("ddlOperationPerformed");
  }

  /**
   * Clears the '<code>ddlOperationPerformed</code>' attribute.
   */
  void clear_ddl_operation_performed() {
    MutableStorage()->removeMember("ddlOperationPerformed");
  }


  /**
   * Get the value of the '<code>ddlOperationPerformed</code>' attribute.
   */
  const std::string get_ddl_operation_performed() const {
    const Json::Value& v = Storage("ddlOperationPerformed");
    if (v == Json::Value::null) return std::string("");
    return std::string(v.asCString());
  }

  /**
   * Change the '<code>ddlOperationPerformed</code>' attribute.
   *
   * The DDL operation performed, possibly dependent on the pre-existence of the
   * DDL target. Possible values (new values might be added in the future):
   * "CREATE": The query created the DDL target. "SKIP": No-op. Example cases:
   * the query is CREATE TABLE IF NOT EXISTS while the table already exists, or
   * the query is DROP TABLE IF EXISTS while the table does not exist.
   * "REPLACE": The query replaced the DDL target. Example case: the query is
   * CREATE OR REPLACE TABLE, and the table already exists. "DROP": The query
   * deleted the DDL target.
   *
   * @param[in] value The new value.
   */
  void set_ddl_operation_performed(const std::string& value) {
    *MutableStorage("ddlOperationPerformed") = value.data();
  }

  /**
   * Determine if the '<code>ddlTargetTable</code>' attribute was set.
   *
   * @return true if the '<code>ddlTargetTable</code>' attribute was set.
   */
  bool has_ddl_target_table() const {
    return Storage().isMember("ddlTargetTable");
  }

  /**
   * Clears the '<code>ddlTargetTable</code>' attribute.
   */
  void clear_ddl_target_table() {
    MutableStorage()->removeMember("ddlTargetTable");
  }


  /**
   * Get a reference to the value of the '<code>ddlTargetTable</code>'
   * attribute.
   */
  const TableReference get_ddl_target_table() const;

  /**
   * Gets a reference to a mutable value of the '<code>ddlTargetTable</code>'
   * property.
   *
   * The DDL target table. Present only for CREATE/DROP TABLE/VIEW queries.
   *
   * @return The result can be modified to change the attribute value.
   */
  TableReference mutable_ddlTargetTable();

  /**
   * Determine if the '<code>estimatedBytesProcessed</code>' attribute was set.
   *
   * @return true if the '<code>estimatedBytesProcessed</code>' attribute was
   * set.
   */
  bool has_estimated_bytes_processed() const {
    return Storage().isMember("estimatedBytesProcessed");
  }

  /**
   * Clears the '<code>estimatedBytesProcessed</code>' attribute.
   */
  void clear_estimated_bytes_processed() {
    MutableStorage()->removeMember("estimatedBytesProcessed");
  }


  /**
   * Get the value of the '<code>estimatedBytesProcessed</code>' attribute.
   */
  int64 get_estimated_bytes_processed() const {
    const Json::Value& storage = Storage("estimatedBytesProcessed");
    return client::JsonValueToCppValueHelper<int64 >(storage);
  }

  /**
   * Change the '<code>estimatedBytesProcessed</code>' attribute.
   *
   * [Output-only] The original estimate of bytes processed for the job.
   *
   * @param[in] value The new value.
   */
  void set_estimated_bytes_processed(int64 value) {
    client::SetJsonValueFromCppValueHelper<int64 >(
      value, MutableStorage("estimatedBytesProcessed"));
  }

  /**
   * Determine if the '<code>modelTraining</code>' attribute was set.
   *
   * @return true if the '<code>modelTraining</code>' attribute was set.
   */
  bool has_model_training() const {
    return Storage().isMember("modelTraining");
  }

  /**
   * Clears the '<code>modelTraining</code>' attribute.
   */
  void clear_model_training() {
    MutableStorage()->removeMember("modelTraining");
  }


  /**
   * Get a reference to the value of the '<code>modelTraining</code>' attribute.
   */
  const BigQueryModelTraining get_model_training() const;

  /**
   * Gets a reference to a mutable value of the '<code>modelTraining</code>'
   * property.
   *
   * [Output-only, Beta] Information about create model query job progress.
   *
   * @return The result can be modified to change the attribute value.
   */
  BigQueryModelTraining mutable_modelTraining();

  /**
   * Determine if the '<code>modelTrainingCurrentIteration</code>' attribute was
   * set.
   *
   * @return true if the '<code>modelTrainingCurrentIteration</code>' attribute
   * was set.
   */
  bool has_model_training_current_iteration() const {
    return Storage().isMember("modelTrainingCurrentIteration");
  }

  /**
   * Clears the '<code>modelTrainingCurrentIteration</code>' attribute.
   */
  void clear_model_training_current_iteration() {
    MutableStorage()->removeMember("modelTrainingCurrentIteration");
  }


  /**
   * Get the value of the '<code>modelTrainingCurrentIteration</code>'
   * attribute.
   */
  int32 get_model_training_current_iteration() const {
    const Json::Value& storage = Storage("modelTrainingCurrentIteration");
    return client::JsonValueToCppValueHelper<int32 >(storage);
  }

  /**
   * Change the '<code>modelTrainingCurrentIteration</code>' attribute.
   *
   * [Output-only, Beta] Deprecated; do not use.
   *
   * @param[in] value The new value.
   */
  void set_model_training_current_iteration(int32 value) {
    client::SetJsonValueFromCppValueHelper<int32 >(
      value, MutableStorage("modelTrainingCurrentIteration"));
  }

  /**
   * Determine if the '<code>modelTrainingExpectedTotalIteration</code>'
   * attribute was set.
   *
   * @return true if the '<code>modelTrainingExpectedTotalIteration</code>'
   * attribute was set.
   */
  bool has_model_training_expected_total_iteration() const {
    return Storage().isMember("modelTrainingExpectedTotalIteration");
  }

  /**
   * Clears the '<code>modelTrainingExpectedTotalIteration</code>' attribute.
   */
  void clear_model_training_expected_total_iteration() {
    MutableStorage()->removeMember("modelTrainingExpectedTotalIteration");
  }


  /**
   * Get the value of the '<code>modelTrainingExpectedTotalIteration</code>'
   * attribute.
   */
  int64 get_model_training_expected_total_iteration() const {
    const Json::Value& storage = Storage("modelTrainingExpectedTotalIteration");
    return client::JsonValueToCppValueHelper<int64 >(storage);
  }

  /**
   * Change the '<code>modelTrainingExpectedTotalIteration</code>' attribute.
   *
   * [Output-only, Beta] Deprecated; do not use.
   *
   * @param[in] value The new value.
   */
  void set_model_training_expected_total_iteration(int64 value) {
    client::SetJsonValueFromCppValueHelper<int64 >(
      value, MutableStorage("modelTrainingExpectedTotalIteration"));
  }

  /**
   * Determine if the '<code>numDmlAffectedRows</code>' attribute was set.
   *
   * @return true if the '<code>numDmlAffectedRows</code>' attribute was set.
   */
  bool has_num_dml_affected_rows() const {
    return Storage().isMember("numDmlAffectedRows");
  }

  /**
   * Clears the '<code>numDmlAffectedRows</code>' attribute.
   */
  void clear_num_dml_affected_rows() {
    MutableStorage()->removeMember("numDmlAffectedRows");
  }


  /**
   * Get the value of the '<code>numDmlAffectedRows</code>' attribute.
   */
  int64 get_num_dml_affected_rows() const {
    const Json::Value& storage = Storage("numDmlAffectedRows");
    return client::JsonValueToCppValueHelper<int64 >(storage);
  }

  /**
   * Change the '<code>numDmlAffectedRows</code>' attribute.
   *
   * [Output-only] The number of rows affected by a DML statement. Present only
   * for DML statements INSERT, UPDATE or DELETE.
   *
   * @param[in] value The new value.
   */
  void set_num_dml_affected_rows(int64 value) {
    client::SetJsonValueFromCppValueHelper<int64 >(
      value, MutableStorage("numDmlAffectedRows"));
  }

  /**
   * Determine if the '<code>queryPlan</code>' attribute was set.
   *
   * @return true if the '<code>queryPlan</code>' attribute was set.
   */
  bool has_query_plan() const {
    return Storage().isMember("queryPlan");
  }

  /**
   * Clears the '<code>queryPlan</code>' attribute.
   */
  void clear_query_plan() {
    MutableStorage()->removeMember("queryPlan");
  }


  /**
   * Get a reference to the value of the '<code>queryPlan</code>' attribute.
   */
  const client::JsonCppArray<ExplainQueryStage > get_query_plan() const;

  /**
   * Gets a reference to a mutable value of the '<code>queryPlan</code>'
   * property.
   *
   * [Output-only] Describes execution plan for the query.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<ExplainQueryStage > mutable_queryPlan();

  /**
   * Determine if the '<code>referencedTables</code>' attribute was set.
   *
   * @return true if the '<code>referencedTables</code>' attribute was set.
   */
  bool has_referenced_tables() const {
    return Storage().isMember("referencedTables");
  }

  /**
   * Clears the '<code>referencedTables</code>' attribute.
   */
  void clear_referenced_tables() {
    MutableStorage()->removeMember("referencedTables");
  }


  /**
   * Get a reference to the value of the '<code>referencedTables</code>'
   * attribute.
   */
  const client::JsonCppArray<TableReference > get_referenced_tables() const;

  /**
   * Gets a reference to a mutable value of the '<code>referencedTables</code>'
   * property.
   *
   * [Output-only] Referenced tables for the job. Queries that reference more
   * than 50 tables will not have a complete list.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<TableReference > mutable_referencedTables();

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
  const client::JsonCppArray<JobStatistics2ReservationUsage > get_reservation_usage() const {
     const Json::Value& storage = Storage("reservationUsage");
    return client::JsonValueToCppValueHelper<client::JsonCppArray<JobStatistics2ReservationUsage > >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>reservationUsage</code>'
   * property.
   *
   * [Output-only] Job resource usage breakdown by reservation.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<JobStatistics2ReservationUsage > mutable_reservationUsage() {
    Json::Value* storage = MutableStorage("reservationUsage");
    return client::JsonValueToMutableCppValueHelper<client::JsonCppArray<JobStatistics2ReservationUsage > >(storage);
  }

  /**
   * Determine if the '<code>schema</code>' attribute was set.
   *
   * @return true if the '<code>schema</code>' attribute was set.
   */
  bool has_schema() const {
    return Storage().isMember("schema");
  }

  /**
   * Clears the '<code>schema</code>' attribute.
   */
  void clear_schema() {
    MutableStorage()->removeMember("schema");
  }


  /**
   * Get a reference to the value of the '<code>schema</code>' attribute.
   */
  const TableSchema get_schema() const;

  /**
   * Gets a reference to a mutable value of the '<code>schema</code>' property.
   *
   * [Output-only] The schema of the results. Present only for successful dry
   * run of non-legacy SQL queries.
   *
   * @return The result can be modified to change the attribute value.
   */
  TableSchema mutable_schema();

  /**
   * Determine if the '<code>statementType</code>' attribute was set.
   *
   * @return true if the '<code>statementType</code>' attribute was set.
   */
  bool has_statement_type() const {
    return Storage().isMember("statementType");
  }

  /**
   * Clears the '<code>statementType</code>' attribute.
   */
  void clear_statement_type() {
    MutableStorage()->removeMember("statementType");
  }


  /**
   * Get the value of the '<code>statementType</code>' attribute.
   */
  const std::string get_statement_type() const {
    const Json::Value& v = Storage("statementType");
    if (v == Json::Value::null) return std::string("");
    return std::string(v.asCString());
  }

  /**
   * Change the '<code>statementType</code>' attribute.
   *
   * The type of query statement, if valid. Possible values (new values might be
   * added in the future): "SELECT": SELECT query. "INSERT": INSERT query; see
   * https://cloud.google.com/bigquery/docs/reference/standard-sql/data-
   * manipulation-language. "UPDATE": UPDATE query; see
   * https://cloud.google.com/bigquery/docs/reference/standard-sql/data-
   * manipulation-language. "DELETE": DELETE query; see
   * https://cloud.google.com/bigquery/docs/reference/standard-sql/data-
   * manipulation-language. "MERGE": MERGE query; see
   * https://cloud.google.com/bigquery/docs/reference/standard-sql/data-
   * manipulation-language. "CREATE_TABLE": CREATE [OR REPLACE] TABLE without AS
   * SELECT. "CREATE_TABLE_AS_SELECT": CREATE [OR REPLACE] TABLE ... AS SELECT
   * ... . "DROP_TABLE": DROP TABLE query. "CREATE_VIEW": CREATE [OR REPLACE]
   * VIEW ... AS SELECT ... . "DROP_VIEW": DROP VIEW query. "ALTER_TABLE": ALTER
   * TABLE query. "ALTER_VIEW": ALTER VIEW query.
   *
   * @param[in] value The new value.
   */
  void set_statement_type(const std::string& value) {
    *MutableStorage("statementType") = value.data();
  }

  /**
   * Determine if the '<code>timeline</code>' attribute was set.
   *
   * @return true if the '<code>timeline</code>' attribute was set.
   */
  bool has_timeline() const {
    return Storage().isMember("timeline");
  }

  /**
   * Clears the '<code>timeline</code>' attribute.
   */
  void clear_timeline() {
    MutableStorage()->removeMember("timeline");
  }


  /**
   * Get a reference to the value of the '<code>timeline</code>' attribute.
   */
  const client::JsonCppArray<QueryTimelineSample > get_timeline() const;

  /**
   * Gets a reference to a mutable value of the '<code>timeline</code>'
   * property.
   *
   * [Output-only] [Beta] Describes a timeline of job execution.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<QueryTimelineSample > mutable_timeline();

  /**
   * Determine if the '<code>totalBytesBilled</code>' attribute was set.
   *
   * @return true if the '<code>totalBytesBilled</code>' attribute was set.
   */
  bool has_total_bytes_billed() const {
    return Storage().isMember("totalBytesBilled");
  }

  /**
   * Clears the '<code>totalBytesBilled</code>' attribute.
   */
  void clear_total_bytes_billed() {
    MutableStorage()->removeMember("totalBytesBilled");
  }


  /**
   * Get the value of the '<code>totalBytesBilled</code>' attribute.
   */
  int64 get_total_bytes_billed() const {
    const Json::Value& storage = Storage("totalBytesBilled");
    return client::JsonValueToCppValueHelper<int64 >(storage);
  }

  /**
   * Change the '<code>totalBytesBilled</code>' attribute.
   *
   * [Output-only] Total bytes billed for the job.
   *
   * @param[in] value The new value.
   */
  void set_total_bytes_billed(int64 value) {
    client::SetJsonValueFromCppValueHelper<int64 >(
      value, MutableStorage("totalBytesBilled"));
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
   * [Output-only] Total bytes processed for the job.
   *
   * @param[in] value The new value.
   */
  void set_total_bytes_processed(int64 value) {
    client::SetJsonValueFromCppValueHelper<int64 >(
      value, MutableStorage("totalBytesProcessed"));
  }

  /**
   * Determine if the '<code>totalBytesProcessedAccuracy</code>' attribute was
   * set.
   *
   * @return true if the '<code>totalBytesProcessedAccuracy</code>' attribute
   * was set.
   */
  bool has_total_bytes_processed_accuracy() const {
    return Storage().isMember("totalBytesProcessedAccuracy");
  }

  /**
   * Clears the '<code>totalBytesProcessedAccuracy</code>' attribute.
   */
  void clear_total_bytes_processed_accuracy() {
    MutableStorage()->removeMember("totalBytesProcessedAccuracy");
  }


  /**
   * Get the value of the '<code>totalBytesProcessedAccuracy</code>' attribute.
   */
  const std::string get_total_bytes_processed_accuracy() const {
    const Json::Value& v = Storage("totalBytesProcessedAccuracy");
    if (v == Json::Value::null) return std::string("");
    return std::string(v.asCString());
  }

  /**
   * Change the '<code>totalBytesProcessedAccuracy</code>' attribute.
   *
   * [Output-only] For dry-run jobs, totalBytesProcessed is an estimate and this
   * field specifies the accuracy of the estimate. Possible values can be:
   * UNKNOWN: accuracy of the estimate is unknown. PRECISE: estimate is precise.
   * LOWER_BOUND: estimate is lower bound of what the query would cost.
   * UPPER_BOUND: estiamte is upper bound of what the query would cost.
   *
   * @param[in] value The new value.
   */
  void set_total_bytes_processed_accuracy(const std::string& value) {
    *MutableStorage("totalBytesProcessedAccuracy") = value.data();
  }

  /**
   * Determine if the '<code>totalPartitionsProcessed</code>' attribute was set.
   *
   * @return true if the '<code>totalPartitionsProcessed</code>' attribute was
   * set.
   */
  bool has_total_partitions_processed() const {
    return Storage().isMember("totalPartitionsProcessed");
  }

  /**
   * Clears the '<code>totalPartitionsProcessed</code>' attribute.
   */
  void clear_total_partitions_processed() {
    MutableStorage()->removeMember("totalPartitionsProcessed");
  }


  /**
   * Get the value of the '<code>totalPartitionsProcessed</code>' attribute.
   */
  int64 get_total_partitions_processed() const {
    const Json::Value& storage = Storage("totalPartitionsProcessed");
    return client::JsonValueToCppValueHelper<int64 >(storage);
  }

  /**
   * Change the '<code>totalPartitionsProcessed</code>' attribute.
   *
   * [Output-only] Total number of partitions processed from all partitioned
   * tables referenced in the job.
   *
   * @param[in] value The new value.
   */
  void set_total_partitions_processed(int64 value) {
    client::SetJsonValueFromCppValueHelper<int64 >(
      value, MutableStorage("totalPartitionsProcessed"));
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

  /**
   * Determine if the '<code>undeclaredQueryParameters</code>' attribute was
   * set.
   *
   * @return true if the '<code>undeclaredQueryParameters</code>' attribute was
   * set.
   */
  bool has_undeclared_query_parameters() const {
    return Storage().isMember("undeclaredQueryParameters");
  }

  /**
   * Clears the '<code>undeclaredQueryParameters</code>' attribute.
   */
  void clear_undeclared_query_parameters() {
    MutableStorage()->removeMember("undeclaredQueryParameters");
  }


  /**
   * Get a reference to the value of the
   * '<code>undeclaredQueryParameters</code>' attribute.
   */
  const client::JsonCppArray<QueryParameter > get_undeclared_query_parameters() const;

  /**
   * Gets a reference to a mutable value of the
   * '<code>undeclaredQueryParameters</code>' property.
   *
   * Standard SQL only: list of undeclared query parameters detected during a
   * dry run validation.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<QueryParameter > mutable_undeclaredQueryParameters();

 private:
  void operator=(const JobStatistics2&);
};  // JobStatistics2
}  // namespace google_bigquery_api
#endif  // GOOGLE_BIGQUERY_API_JOB_STATISTICS2_H_
