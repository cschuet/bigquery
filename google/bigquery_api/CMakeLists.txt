# This is a CMake file for BigQuery API v2
# using the Google APIs Client Library for C++.
#
# See http://google.github.io/google-api-cpp-client/latest/start/get_started
# for more information about what to do with this file.

project (google_bigquery_api)

# These sources assume that the CMakeLists.txt in ../.. added itself to
# the include directories so that include paths are specified explicitly
# with the directory #include "google/bigquery_api/..."
add_library(google_bigquery_api STATIC
            big_query_model_training.cc
            bigtable_column.cc
            bigtable_column_family.cc
            bigtable_options.cc
            clustering.cc
            csv_options.cc
            dataset.cc
            dataset_list.cc
            dataset_reference.cc
            destination_table_properties.cc
            encryption_configuration.cc
            error_proto.cc
            explain_query_stage.cc
            explain_query_step.cc
            external_data_configuration.cc
            get_query_results_response.cc
            get_service_account_response.cc
            google_sheets_options.cc
            iteration_result.cc
            job.cc
            job_cancel_response.cc
            job_configuration.cc
            job_configuration_extract.cc
            job_configuration_load.cc
            job_configuration_query.cc
            job_configuration_table_copy.cc
            job_list.cc
            job_reference.cc
            job_statistics.cc
            job_statistics2.cc
            job_statistics3.cc
            job_statistics4.cc
            job_status.cc
            json_object.cc
            materialized_view_definition.cc
            model_definition.cc
            project_list.cc
            project_reference.cc
            query_parameter.cc
            query_parameter_type.cc
            query_parameter_value.cc
            query_request.cc
            query_response.cc
            query_timeline_sample.cc
            range_partitioning.cc
            streamingbuffer.cc
            table.cc
            table_cell.cc
            table_data_insert_all_request.cc
            table_data_insert_all_response.cc
            table_data_list.cc
            table_field_schema.cc
            table_list.cc
            table_reference.cc
            table_row.cc
            table_schema.cc
            time_partitioning.cc
            training_run.cc
            user_defined_function_resource.cc
            view_definition.cc
            bigquery_service.cc)
target_link_libraries(google_bigquery_api googleapis_http)
target_link_libraries(google_bigquery_api googleapis_internal)
target_link_libraries(google_bigquery_api googleapis_jsoncpp)
target_link_libraries(google_bigquery_api googleapis_utils)
