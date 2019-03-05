licenses(["notice"])

exports_files(["LICENSE"])

cc_library(
    name = "bigquery",
    srcs = glob(
        ["**/*.cc"],
    ),
    hdrs = glob(
        ["**/*.h"],
    ),
    copts = ["-Wno-unused-local-typedefs"],
    deps = [
        "@com_github_google_google_api_cpp_client//:googleapis_internal",
        "@com_github_google_google_api_cpp_client//:googleapis_jsoncpp",
	"@com_github_abseil_abseil_cpp//absl/strings",
    ],
)
