load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "greet",
    srcs = ["greet/hello_greet.cpp"],
    hdrs = ["greet/hello_greet.hpp"],
    strip_include_prefix = "greet",
    include_prefix = "lib",
    visibility = ["//cpp/main:__pkg__"],
)

cc_library(
    name = "time",
    srcs = ["time/hello_time.cpp"],
    hdrs = ["time/hello_time.hpp"],
    strip_include_prefix = "time",
    include_prefix = "lib",
    visibility = ["//cpp/main:__pkg__"],
)