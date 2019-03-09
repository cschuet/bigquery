licenses(["notice"])

exports_files(["LICENSE"])

cc_library(
    name = "bigquery",
    srcs = glob(
        ["**/*.cc"],
        exclude = ["list_datasets.cc"],
    ),
    hdrs = glob(
        ["**/*.h"],
    ),
    copts = ["-Wno-unused-local-typedefs"],
    deps = [
        "@com_github_abseil_abseil_cpp//absl/strings",
        "@com_github_google_google_api_cpp_client//:googleapis_internal",
        "@com_github_google_google_api_cpp_client//:googleapis_jsoncpp",
    ],
)

cc_binary(
    name = "list_datasets",
    srcs = ["list_datasets.cc"],
    copts = ["-Wno-unused-local-typedefs"],
    deps = [
        ":bigquery",
        "@com_github_google_google_api_cpp_client//:googleapis_curl_http",
        "@com_github_google_google_api_cpp_client//:googleapis_oauth2",
        "@com_github_google_google_api_cpp_client//:googleapis_utils",
    ],
)
