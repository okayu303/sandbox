load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_binary(
    name = "hello_world",
    srcs = ["hello_world.cpp"],
    deps = [
        "//cpp/lib:greet",
        "//cpp/lib:time",
    ],
)
