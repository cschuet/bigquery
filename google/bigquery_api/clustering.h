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
#ifndef  GOOGLE_BIGQUERY_API_CLUSTERING_H_
#define  GOOGLE_BIGQUERY_API_CLUSTERING_H_

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
class Clustering : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static Clustering* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit Clustering(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit Clustering(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~Clustering();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_bigquery_api::Clustering</code>
   */
  const char* GetTypeName() const {
    return "google_bigquery_api::Clustering";
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
  const client::JsonCppArray<string > get_fields() const {
     const Json::Value& storage = Storage("fields");
    return client::JsonValueToCppValueHelper<client::JsonCppArray<string > >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>fields</code>' property.
   *
   * [Repeated] One or more fields on which data should be clustered. Only top-
   * level, non-repeated, simple-type fields are supported. When you cluster a
   * table using multiple columns, the order of columns you specify is
   * important. The order of the specified columns determines the sort order of
   * the data.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<string > mutable_fields() {
    Json::Value* storage = MutableStorage("fields");
    return client::JsonValueToMutableCppValueHelper<client::JsonCppArray<string > >(storage);
  }

 private:
  void operator=(const Clustering&);
};  // Clustering
}  // namespace google_bigquery_api
#endif  // GOOGLE_BIGQUERY_API_CLUSTERING_H_
