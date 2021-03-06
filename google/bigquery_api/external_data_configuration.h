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
#ifndef  GOOGLE_BIGQUERY_API_EXTERNAL_DATA_CONFIGURATION_H_
#define  GOOGLE_BIGQUERY_API_EXTERNAL_DATA_CONFIGURATION_H_

#include <string>
#include "googleapis/base/integral_types.h"
#include "googleapis/client/data/jsoncpp_data.h"

#include "google/bigquery_api/bigtable_options.h"
#include "google/bigquery_api/csv_options.h"
#include "google/bigquery_api/google_sheets_options.h"
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
class ExternalDataConfiguration : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static ExternalDataConfiguration* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit ExternalDataConfiguration(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit ExternalDataConfiguration(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~ExternalDataConfiguration();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_bigquery_api::ExternalDataConfiguration</code>
   */
  const char* GetTypeName() const {
    return "google_bigquery_api::ExternalDataConfiguration";
  }

  /**
   * Determine if the '<code>autodetect</code>' attribute was set.
   *
   * @return true if the '<code>autodetect</code>' attribute was set.
   */
  bool has_autodetect() const {
    return Storage().isMember("autodetect");
  }

  /**
   * Clears the '<code>autodetect</code>' attribute.
   */
  void clear_autodetect() {
    MutableStorage()->removeMember("autodetect");
  }


  /**
   * Get the value of the '<code>autodetect</code>' attribute.
   */
  bool get_autodetect() const {
    const Json::Value& storage = Storage("autodetect");
    return client::JsonValueToCppValueHelper<bool >(storage);
  }

  /**
   * Change the '<code>autodetect</code>' attribute.
   *
   * Try to detect schema and format options automatically. Any option specified
   * explicitly will be honored.
   *
   * @param[in] value The new value.
   */
  void set_autodetect(bool value) {
    client::SetJsonValueFromCppValueHelper<bool >(
      value, MutableStorage("autodetect"));
  }

  /**
   * Determine if the '<code>bigtableOptions</code>' attribute was set.
   *
   * @return true if the '<code>bigtableOptions</code>' attribute was set.
   */
  bool has_bigtable_options() const {
    return Storage().isMember("bigtableOptions");
  }

  /**
   * Clears the '<code>bigtableOptions</code>' attribute.
   */
  void clear_bigtable_options() {
    MutableStorage()->removeMember("bigtableOptions");
  }


  /**
   * Get a reference to the value of the '<code>bigtableOptions</code>'
   * attribute.
   */
  const BigtableOptions get_bigtable_options() const;

  /**
   * Gets a reference to a mutable value of the '<code>bigtableOptions</code>'
   * property.
   *
   * [Optional] Additional options if sourceFormat is set to BIGTABLE.
   *
   * @return The result can be modified to change the attribute value.
   */
  BigtableOptions mutable_bigtableOptions();

  /**
   * Determine if the '<code>compression</code>' attribute was set.
   *
   * @return true if the '<code>compression</code>' attribute was set.
   */
  bool has_compression() const {
    return Storage().isMember("compression");
  }

  /**
   * Clears the '<code>compression</code>' attribute.
   */
  void clear_compression() {
    MutableStorage()->removeMember("compression");
  }


  /**
   * Get the value of the '<code>compression</code>' attribute.
   */
  const std::string get_compression() const {
    const Json::Value& v = Storage("compression");
    if (v == Json::Value::null) return std::string("");
    return std::string(v.asCString());
  }

  /**
   * Change the '<code>compression</code>' attribute.
   *
   * [Optional] The compression type of the data source. Possible values include
   * GZIP and NONE. The default value is NONE. This setting is ignored for
   * Google Cloud Bigtable, Google Cloud Datastore backups and Avro formats.
   *
   * @param[in] value The new value.
   */
  void set_compression(const std::string& value) {
    *MutableStorage("compression") = value.data();
  }

  /**
   * Determine if the '<code>csvOptions</code>' attribute was set.
   *
   * @return true if the '<code>csvOptions</code>' attribute was set.
   */
  bool has_csv_options() const {
    return Storage().isMember("csvOptions");
  }

  /**
   * Clears the '<code>csvOptions</code>' attribute.
   */
  void clear_csv_options() {
    MutableStorage()->removeMember("csvOptions");
  }


  /**
   * Get a reference to the value of the '<code>csvOptions</code>' attribute.
   */
  const CsvOptions get_csv_options() const;

  /**
   * Gets a reference to a mutable value of the '<code>csvOptions</code>'
   * property.
   *
   * Additional properties to set if sourceFormat is set to CSV.
   *
   * @return The result can be modified to change the attribute value.
   */
  CsvOptions mutable_csvOptions();

  /**
   * Determine if the '<code>googleSheetsOptions</code>' attribute was set.
   *
   * @return true if the '<code>googleSheetsOptions</code>' attribute was set.
   */
  bool has_google_sheets_options() const {
    return Storage().isMember("googleSheetsOptions");
  }

  /**
   * Clears the '<code>googleSheetsOptions</code>' attribute.
   */
  void clear_google_sheets_options() {
    MutableStorage()->removeMember("googleSheetsOptions");
  }


  /**
   * Get a reference to the value of the '<code>googleSheetsOptions</code>'
   * attribute.
   */
  const GoogleSheetsOptions get_google_sheets_options() const;

  /**
   * Gets a reference to a mutable value of the
   * '<code>googleSheetsOptions</code>' property.
   *
   * [Optional] Additional options if sourceFormat is set to GOOGLE_SHEETS.
   *
   * @return The result can be modified to change the attribute value.
   */
  GoogleSheetsOptions mutable_googleSheetsOptions();

  /**
   * Determine if the '<code>hivePartitioningMode</code>' attribute was set.
   *
   * @return true if the '<code>hivePartitioningMode</code>' attribute was set.
   */
  bool has_hive_partitioning_mode() const {
    return Storage().isMember("hivePartitioningMode");
  }

  /**
   * Clears the '<code>hivePartitioningMode</code>' attribute.
   */
  void clear_hive_partitioning_mode() {
    MutableStorage()->removeMember("hivePartitioningMode");
  }


  /**
   * Get the value of the '<code>hivePartitioningMode</code>' attribute.
   */
  const std::string get_hive_partitioning_mode() const {
    const Json::Value& v = Storage("hivePartitioningMode");
    if (v == Json::Value::null) return std::string("");
    return std::string(v.asCString());
  }

  /**
   * Change the '<code>hivePartitioningMode</code>' attribute.
   *
   * [Optional, Experimental] If hive partitioning is enabled, which mode to
   * use. Two modes are supported: - AUTO: automatically infer partition key
   * name(s) and type(s). - STRINGS: automatic infer partition key name(s). All
   * types are strings. Not all storage formats support hive partitioning --
   * requesting hive partitioning on an unsupported format will lead to an
   * error.
   *
   * @param[in] value The new value.
   */
  void set_hive_partitioning_mode(const std::string& value) {
    *MutableStorage("hivePartitioningMode") = value.data();
  }

  /**
   * Determine if the '<code>ignoreUnknownValues</code>' attribute was set.
   *
   * @return true if the '<code>ignoreUnknownValues</code>' attribute was set.
   */
  bool has_ignore_unknown_values() const {
    return Storage().isMember("ignoreUnknownValues");
  }

  /**
   * Clears the '<code>ignoreUnknownValues</code>' attribute.
   */
  void clear_ignore_unknown_values() {
    MutableStorage()->removeMember("ignoreUnknownValues");
  }


  /**
   * Get the value of the '<code>ignoreUnknownValues</code>' attribute.
   */
  bool get_ignore_unknown_values() const {
    const Json::Value& storage = Storage("ignoreUnknownValues");
    return client::JsonValueToCppValueHelper<bool >(storage);
  }

  /**
   * Change the '<code>ignoreUnknownValues</code>' attribute.
   *
   * [Optional] Indicates if BigQuery should allow extra values that are not
   * represented in the table schema. If true, the extra values are ignored. If
   * false, records with extra columns are treated as bad records, and if there
   * are too many bad records, an invalid error is returned in the job result.
   * The default value is false. The sourceFormat property determines what
   * BigQuery treats as an extra value: CSV: Trailing columns JSON: Named values
   * that don't match any column names Google Cloud Bigtable: This setting is
   * ignored. Google Cloud Datastore backups: This setting is ignored. Avro:
   * This setting is ignored.
   *
   * @param[in] value The new value.
   */
  void set_ignore_unknown_values(bool value) {
    client::SetJsonValueFromCppValueHelper<bool >(
      value, MutableStorage("ignoreUnknownValues"));
  }

  /**
   * Determine if the '<code>maxBadRecords</code>' attribute was set.
   *
   * @return true if the '<code>maxBadRecords</code>' attribute was set.
   */
  bool has_max_bad_records() const {
    return Storage().isMember("maxBadRecords");
  }

  /**
   * Clears the '<code>maxBadRecords</code>' attribute.
   */
  void clear_max_bad_records() {
    MutableStorage()->removeMember("maxBadRecords");
  }


  /**
   * Get the value of the '<code>maxBadRecords</code>' attribute.
   */
  int32 get_max_bad_records() const {
    const Json::Value& storage = Storage("maxBadRecords");
    return client::JsonValueToCppValueHelper<int32 >(storage);
  }

  /**
   * Change the '<code>maxBadRecords</code>' attribute.
   *
   * [Optional] The maximum number of bad records that BigQuery can ignore when
   * reading data. If the number of bad records exceeds this value, an invalid
   * error is returned in the job result. This is only valid for CSV, JSON, and
   * Google Sheets. The default value is 0, which requires that all records are
   * valid. This setting is ignored for Google Cloud Bigtable, Google Cloud
   * Datastore backups and Avro formats.
   *
   * @param[in] value The new value.
   */
  void set_max_bad_records(int32 value) {
    client::SetJsonValueFromCppValueHelper<int32 >(
      value, MutableStorage("maxBadRecords"));
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
   * [Optional] The schema for the data. Schema is required for CSV and JSON
   * formats. Schema is disallowed for Google Cloud Bigtable, Cloud Datastore
   * backups, and Avro formats.
   *
   * @return The result can be modified to change the attribute value.
   */
  TableSchema mutable_schema();

  /**
   * Determine if the '<code>sourceFormat</code>' attribute was set.
   *
   * @return true if the '<code>sourceFormat</code>' attribute was set.
   */
  bool has_source_format() const {
    return Storage().isMember("sourceFormat");
  }

  /**
   * Clears the '<code>sourceFormat</code>' attribute.
   */
  void clear_source_format() {
    MutableStorage()->removeMember("sourceFormat");
  }


  /**
   * Get the value of the '<code>sourceFormat</code>' attribute.
   */
  const std::string get_source_format() const {
    const Json::Value& v = Storage("sourceFormat");
    if (v == Json::Value::null) return std::string("");
    return std::string(v.asCString());
  }

  /**
   * Change the '<code>sourceFormat</code>' attribute.
   *
   * [Required] The data format. For CSV files, specify "CSV". For Google
   * sheets, specify "GOOGLE_SHEETS". For newline-delimited JSON, specify
   * "NEWLINE_DELIMITED_JSON". For Avro files, specify "AVRO". For Google Cloud
   * Datastore backups, specify "DATASTORE_BACKUP". [Beta] For Google Cloud
   * Bigtable, specify "BIGTABLE".
   *
   * @param[in] value The new value.
   */
  void set_source_format(const std::string& value) {
    *MutableStorage("sourceFormat") = value.data();
  }

  /**
   * Determine if the '<code>sourceUris</code>' attribute was set.
   *
   * @return true if the '<code>sourceUris</code>' attribute was set.
   */
  bool has_source_uris() const {
    return Storage().isMember("sourceUris");
  }

  /**
   * Clears the '<code>sourceUris</code>' attribute.
   */
  void clear_source_uris() {
    MutableStorage()->removeMember("sourceUris");
  }


  /**
   * Get a reference to the value of the '<code>sourceUris</code>' attribute.
   */
  const client::JsonCppArray<string > get_source_uris() const {
     const Json::Value& storage = Storage("sourceUris");
    return client::JsonValueToCppValueHelper<client::JsonCppArray<string > >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>sourceUris</code>'
   * property.
   *
   * [Required] The fully-qualified URIs that point to your data in Google
   * Cloud. For Google Cloud Storage URIs: Each URI can contain one '*' wildcard
   * character and it must come after the 'bucket' name. Size limits related to
   * load jobs apply to external data sources. For Google Cloud Bigtable URIs:
   * Exactly one URI can be specified and it has be a fully specified and valid
   * HTTPS URL for a Google Cloud Bigtable table. For Google Cloud Datastore
   * backups, exactly one URI can be specified. Also, the '*' wildcard character
   * is not allowed.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<string > mutable_sourceUris() {
    Json::Value* storage = MutableStorage("sourceUris");
    return client::JsonValueToMutableCppValueHelper<client::JsonCppArray<string > >(storage);
  }

 private:
  void operator=(const ExternalDataConfiguration&);
};  // ExternalDataConfiguration
}  // namespace google_bigquery_api
#endif  // GOOGLE_BIGQUERY_API_EXTERNAL_DATA_CONFIGURATION_H_
