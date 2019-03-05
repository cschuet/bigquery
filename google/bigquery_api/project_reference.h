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
#ifndef  GOOGLE_BIGQUERY_API_PROJECT_REFERENCE_H_
#define  GOOGLE_BIGQUERY_API_PROJECT_REFERENCE_H_

#include <string>

#include "googleapis/client/data/jsoncpp_data.h"

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
class ProjectReference : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static ProjectReference* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit ProjectReference(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit ProjectReference(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~ProjectReference();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_bigquery_api::ProjectReference</code>
   */
  const char* GetTypeName() const {
    return "google_bigquery_api::ProjectReference";
  }

  /**
   * Determine if the '<code>projectId</code>' attribute was set.
   *
   * @return true if the '<code>projectId</code>' attribute was set.
   */
  bool has_project_id() const {
    return Storage().isMember("projectId");
  }

  /**
   * Clears the '<code>projectId</code>' attribute.
   */
  void clear_project_id() {
    MutableStorage()->removeMember("projectId");
  }


  /**
   * Get the value of the '<code>projectId</code>' attribute.
   */
  const std::string get_project_id() const {
    const Json::Value& v = Storage("projectId");
    if (v == Json::Value::null) return std::string("");
    return std::string(v.asCString());
  }

  /**
   * Change the '<code>projectId</code>' attribute.
   *
   * [Required] ID of the project. Can be either the numeric ID or the assigned
   * ID of the project.
   *
   * @param[in] value The new value.
   */
  void set_project_id(const std::string& value) {
    *MutableStorage("projectId") = value.data();
  }

 private:
  void operator=(const ProjectReference&);
};  // ProjectReference
}  // namespace google_bigquery_api
#endif  // GOOGLE_BIGQUERY_API_PROJECT_REFERENCE_H_
