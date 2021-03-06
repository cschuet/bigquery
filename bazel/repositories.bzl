load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

def _maybe(repo_rule, name, **kwargs):
    if name not in native.existing_rules():
        repo_rule(name = name, **kwargs)

def repositories():
    _maybe(
        http_archive,
        name = "com_github_gflags_gflags",
        sha256 = "6e16c8bc91b1310a44f3965e616383dbda48f83e8c1eaa2370a215057b00cabe",
        strip_prefix = "gflags-77592648e3f3be87d6c7123eb81cbad75f9aef5a",
        urls = [
            "https://mirror.bazel.build/github.com/gflags/gflags/archive/77592648e3f3be87d6c7123eb81cbad75f9aef5a.tar.gz",
            "https://github.com/gflags/gflags/archive/77592648e3f3be87d6c7123eb81cbad75f9aef5a.tar.gz",
        ],
    )

    _maybe(
        http_archive,
        name = "com_google_glog",
        sha256 = "dfc074b41a5b86fc5dda4f0e2e2d6cc5b21f798c9fcc8ed5fea9c8f7c4613be6",
        strip_prefix = "glog-dd2b93d761a19860190cb3fa92066c8031e912e3",
        urls = [
            "https://mirror.bazel.build/github.com/google/glog/archive/dd2b93d761a19860190cb3fa92066c8031e912e3.tar.gz",
            "https://github.com/google/glog/archive/dd2b93d761a19860190cb3fa92066c8031e912e3.tar.gz",
        ],
    )

    _maybe(
        http_archive,
	name = "com_github_cschuet_jsoncpp",
	strip_prefix = "jsoncpp-8f3755a9eb9765c4709b6d30299b1f335fcf20b1",
	urls = [
	    "https://github.com/cschuet/jsoncpp/archive/8f3755a9eb9765c4709b6d30299b1f335fcf20b1.tar.gz",
	],
    )
    
    _maybe(
        http_archive,
        name = "com_github_google_benchmark",
        strip_prefix = "benchmark-d205ead299c7cddd5e1bc3478d57ad4320a4a53c",
        urls = [
            "https://github.com/google/benchmark/archive/d205ead299c7cddd5e1bc3478d57ad4320a4a53c.tar.gz",
        ],
    )

    _maybe(
        http_archive,
        name = "com_github_abseil_abseil_cpp",
        strip_prefix = "abseil-cpp-419f3184f8ebcdb23105295eadd2a569f3351eb9",
        urls = [
            "https://github.com/abseil/abseil-cpp/archive/419f3184f8ebcdb23105295eadd2a569f3351eb9.tar.gz",
        ],
    )

   
    _maybe(
        http_archive,
        name = "com_github_cschuet_google_api_cpp_client",
        strip_prefix = "google-api-cpp-client-e94aef1cc705bd845b684a99c3b857c758beefc7",
        urls = [
            "https://github.com/cschuet/google-api-cpp-client/archive/e94aef1cc705bd845b684a99c3b857c758beefc7.tar.gz",
        ],
    )

