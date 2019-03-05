workspace(name = "com_github_cschuet_bigquery")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "com_github_cschuet_google_api_cpp_client",
    strip_prefix = "google-api-cpp-client-48f08d5e6c8c53bb39a511b50b8b532162a31519",
    urls = [
        "https://github.com/cschuet/google-api-cpp-client/archive/48f08d5e6c8c53bb39a511b50b8b532162a31519.tar.gz",
    ],
)

load("//:bazel/repositories.bzl", "repositories")

repositories()

load("@com_github_cschuet_jsoncpp//:bazel/repositories.bzl", "repositories")

repositories()

load ("@com_github_cschuet_google_api_cpp_client//:bazel/repositories.bzl", "repositories")

repositories()

