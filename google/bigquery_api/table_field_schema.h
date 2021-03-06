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
#ifndef  GOOGLE_BIGQUERY_API_TABLE_FIELD_SCHEMA_H_
#define  GOOGLE_BIGQUERY_API_TABLE_FIELD_SCHEMA_H_

#include <string>

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
class TableFieldSchema : public client::JsonCppData {
 public:
  /**
   * [Optional] The categories attached to this field, used for field-level
   * access control.
   *
   * @ingroup DataObject
   */
  class TableFieldSchemaCategories : public client::JsonCppData {
   public:
    /**
     * Creates a new default instance.
     *
     * @return Ownership is passed back to the caller.
     */
    static TableFieldSchemaCategories* New();

    /**
     * Standard constructor for an immutable data object instance.
     *
     * @param[in] storage  The underlying data storage for this instance.
     */
    explicit TableFieldSchemaCategories(const Json::Value& storage);

    /**
     * Standard constructor for a mutable data object instance.
     *
     * @param[in] storage  The underlying data storage for this instance.
     */
    explicit TableFieldSchemaCategories(Json::Value* storage);

    /**
     * Standard destructor.
     */
    virtual ~TableFieldSchemaCategories();

    /**
     * Returns a string denoting the type of this data object.
     *
     * @return <code>google_bigquery_api::TableFieldSchemaCategories</code>
     */
    const char* GetTypeName() const {
      return "google_bigquery_api::TableFieldSchemaCategories";
    }

    /**
     * Determine if the '<code>names</code>' attribute was set.
     *
     * @return true if the '<code>names</code>' attribute was set.
     */
    bool has_names() const {
      return Storage().isMember("names");
    }

    /**
     * Clears the '<code>names</code>' attribute.
     */
    void clear_names() {
      MutableStorage()->removeMember("names");
    }


    /**
     * Get a reference to the value of the '<code>names</code>' attribute.
     */
    const client::JsonCppArray<string > get_names() const {
       const Json::Value& storage = Storage("names");
      return client::JsonValueToCppValueHelper<client::JsonCppArray<string > >(storage);
    }

    /**
     * Gets a reference to a mutable value of the '<code>names</code>' property.
     *
     * A list of category resource names. For example,
     * "projects/1/taxonomies/2/categories/3". At most 5 categories are allowed.
     *
     * @return The result can be modified to change the attribute value.
     */
    client::JsonCppArray<string > mutable_names() {
      Json::Value* storage = MutableStorage("names");
      return client::JsonValueToMutableCppValueHelper<client::JsonCppArray<string > >(storage);
    }

   private:
    void operator=(const TableFieldSchemaCategories&);
  };  // TableFieldSchemaCategories
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static TableFieldSchema* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit TableFieldSchema(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit TableFieldSchema(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~TableFieldSchema();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_bigquery_api::TableFieldSchema</code>
   */
  const char* GetTypeName() const {
    return "google_bigquery_api::TableFieldSchema";
  }

  /**
   * Determine if the '<code>categories</code>' attribute was set.
   *
   * @return true if the '<code>categories</code>' attribute was set.
   */
  bool has_categories() const {
    return Storage().isMember("categories");
  }

  /**
   * Clears the '<code>categories</code>' attribute.
   */
  void clear_categories() {
    MutableStorage()->removeMember("categories");
  }


  /**
   * Get a reference to the value of the '<code>categories</code>' attribute.
   */
  const TableFieldSchemaCategories get_categories() const {
     const Json::Value& storage = Storage("categories");
    return client::JsonValueToCppValueHelper<TableFieldSchemaCategories >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>categories</code>'
   * property.
   *
   * [Optional] The categories attached to this field, used for field-level
   * access control.
   *
   * @return The result can be modified to change the attribute value.
   */
  TableFieldSchemaCategories mutable_categories() {
    Json::Value* storage = MutableStorage("categories");
    return client::JsonValueToMutableCppValueHelper<TableFieldSchemaCategories >(storage);
  }

  /**
   * Determine if the '<code>description</code>' attribute was set.
   *
   * @return true if the '<code>description</code>' attribute was set.
   */
  bool has_description() const {
    return Storage().isMember("description");
  }

  /**
   * Clears the '<code>description</code>' attribute.
   */
  void clear_description() {
    MutableStorage()->removeMember("description");
  }


  /**
   * Get the value of the '<code>description</code>' attribute.
   */
  const std::string get_description() const {
    const Json::Value& v = Storage("description");
    if (v == Json::Value::null) return std::string("");
    return std::string(v.asCString());
  }

  /**
   * Change the '<code>description</code>' attribute.
   *
   * [Optional] The field description. The maximum length is 1,024 characters.
   *
   * @param[in] value The new value.
   */
  void set_description(const std::string& value) {
    *MutableStorage("description") = value.data();
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
   * [Optional] Describes the nested schema fields if the type property is set
   * to RECORD.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<TableFieldSchema > mutable_fields();

  /**
   * Determine if the '<code>mode</code>' attribute was set.
   *
   * @return true if the '<code>mode</code>' attribute was set.
   */
  bool has_mode() const {
    return Storage().isMember("mode");
  }

  /**
   * Clears the '<code>mode</code>' attribute.
   */
  void clear_mode() {
    MutableStorage()->removeMember("mode");
  }


  /**
   * Get the value of the '<code>mode</code>' attribute.
   */
  const std::string get_mode() const {
    const Json::Value& v = Storage("mode");
    if (v == Json::Value::null) return std::string("");
    return std::string(v.asCString());
  }

  /**
   * Change the '<code>mode</code>' attribute.
   *
   * [Optional] The field mode. Possible values include NULLABLE, REQUIRED and
   * REPEATED. The default value is NULLABLE.
   *
   * @param[in] value The new value.
   */
  void set_mode(const std::string& value) {
    *MutableStorage("mode") = value.data();
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
   * [Required] The field name. The name must contain only letters (a-z, A-Z),
   * numbers (0-9), or underscores (_), and must start with a letter or
   * underscore. The maximum length is 128 characters.
   *
   * @param[in] value The new value.
   */
  void set_name(const std::string& value) {
    *MutableStorage("name") = value.data();
  }

  /**
   * Determine if the '<code>type</code>' attribute was set.
   *
   * @return true if the '<code>type</code>' attribute was set.
   */
  bool has_type() const {
    return Storage().isMember("type");
  }

  /**
   * Clears the '<code>type</code>' attribute.
   */
  void clear_type() {
    MutableStorage()->removeMember("type");
  }


  /**
   * Get the value of the '<code>type</code>' attribute.
   */
  const std::string get_type() const {
    const Json::Value& v = Storage("type");
    if (v == Json::Value::null) return std::string("");
    return std::string(v.asCString());
  }

  /**
   * Change the '<code>type</code>' attribute.
   *
   * [Required] The field data type. Possible values include STRING, BYTES,
   * INTEGER, INT64 (same as INTEGER), FLOAT, FLOAT64 (same as FLOAT), BOOLEAN,
   * BOOL (same as BOOLEAN), TIMESTAMP, DATE, TIME, DATETIME, RECORD (where
   * RECORD indicates that the field contains a nested schema) or STRUCT (same
   * as RECORD).
   *
   * @param[in] value The new value.
   */
  void set_type(const std::string& value) {
    *MutableStorage("type") = value.data();
  }

 private:
  void operator=(const TableFieldSchema&);
};  // TableFieldSchema
}  // namespace google_bigquery_api
#endif  // GOOGLE_BIGQUERY_API_TABLE_FIELD_SCHEMA_H_
