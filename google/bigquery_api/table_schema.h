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
#ifndef  GOOGLE_BIGQUERY_API_TABLE_SCHEMA_H_
#define  GOOGLE_BIGQUERY_API_TABLE_SCHEMA_H_

#include "googleapis/client/data/jsoncpp_data.h"

#include "google/bigquery_api/table_field_schema.h"

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
class TableSchema : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static TableSchema* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit TableSchema(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit TableSchema(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~TableSchema();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_bigquery_api::TableSchema</code>
   */
  const char* GetTypeName() const {
    return "google_bigquery_api::TableSchema";
  }

  /**
   * Determine if the '<code>fields</code>' attribute was set.
   *
   * @return true if the '<code>fields</code>' attribute was set.
   */
  bool has_fields() const {
    return Storage().isMember("fields");
  }

  /**
   * Clears the '<code>fields</code>' attribute.
   */
  void clear_fields() {
    MutableStorage()->removeMember("fields");
  }


  /**
   * Get a reference to the value of the '<code>fields</code>' attribute.
   */
  const client::JsonCppArray<TableFieldSchema > get_fields() const;

  /**
   * Gets a reference to a mutable value of the '<code>fields</code>' property.
   *
   * Describes the fields in a table.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<TableFieldSchema > mutable_fields();

 private:
  void operator=(const TableSchema&);
};  // TableSchema
}  // namespace google_bigquery_api
#endif  // GOOGLE_BIGQUERY_API_TABLE_SCHEMA_H_
