# Bazel Build for [BiqQuery C++ Client Libraries](http://google.github.io/google-api-cpp-client/latest/available_service_apis.html)

[![Build Status](https://travis-ci.org/cschuet/bigquery.svg?branch=master)](https://travis-ci.org/cschuet/bigquery)

Add to your WORKSPACE

```
http_archive(
    name = "com_github_cschuet_bigquery",
    strip_prefix = "bigquery-e95c88a65c07288c89739df0bdcf39d993ad5b07",
    urls = [
        "https://github.com/cschuet/bigquery/archive/e95c88a65c07288c89739df0bdcf39d993ad5b07.tar.gz",
    ],
)

load("//:bazel/repositories.bzl", "repositories")

repositories()

load("@com_github_cschuet_jsoncpp//:bazel/repositories.bzl", "repositories")

repositories()

load("@com_github_cschuet_google_api_cpp_client//:bazel/repositories.bzl", "repositories")

repositories()
```

Compile with
```
bazel build @com_github_cschuet_bigquery//:bigquery
```

