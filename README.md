# Bazel Build for [BiqQuery C++ Client Libraries](http://google.github.io/google-api-cpp-client/latest/available_service_apis.html)

[![Build Status](https://travis-ci.org/cschuet/bigquery.svg?branch=master)](https://travis-ci.org/cschuet/bigquery)

Add to your WORKSPACE

```
http_archive(
    name = "com_github_cschuet_bigquery",
    strip_prefix = "bigquery-<SHA>",
    urls = [
        "https://github.com/cschuet/bigquery/archive/<SHA>.tar.gz",
    ],
)

load("@com_github_cschuet_bigquery//:bazel/repositories.bzl", "repositories")

repositories()

load("@com_github_cschuet_google_api_cpp_client//:bazel/repositories.bzl", "repositories")

repositories()

load("@com_github_cschuet_jsoncpp//:bazel/repositories.bzl", "repositories")

repositories()
```

Compile with
```
bazel build @com_github_cschuet_bigquery//:bigquery
```

## List Datasets

The repository contains an example application that illustrates the use of
BigQuery API. It lists the available datasets in a GCP project.

Make sure to create a service account with sufficient privileges and download
the key as a json file.

Download the root certificates, e.g.
```
wget https://raw.githubusercontent.com/grpc/grpc/master/etc/roots.pem
```

Run the example application
```
bazel build :list_datasets
bazel-bin/list_datasets <service-account-json> roots.pem
```

