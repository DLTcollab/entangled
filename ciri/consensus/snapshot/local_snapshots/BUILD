cc_library(
    name = "conf",
    srcs = ["conf.c"],
    hdrs = ["conf.h"],
    visibility = ["//visibility:public"],
    deps = [
        "//ciri/utils:files",
        "//common:errors",
        "//utils:logger_helper",
    ],
)

cc_library(
    name = "shared_local_snapshots",
    deps = [
        ":conf",
        "//ciri/consensus:conf",
        "//ciri/consensus/milestone:milestone_tracker",
        "//common:errors",
        "//utils/handles:cond",
        "//utils/handles:rw_lock",
        "//utils/handles:thread",
    ],
)

cc_library(
    name = "local_snapshots_manager",
    srcs = [
        "local_snapshots_manager.c",
    ],
    hdrs = ["local_snapshots_manager.h"],
    visibility = ["//visibility:public"],
    deps = [
        ":pruning_service",
        ":shared_local_snapshots",
        "//ciri/consensus/snapshot:snapshots_provider",
        "//ciri/consensus/snapshot:snapshots_service",
        "//ciri/consensus/spent_addresses:spent_addresses_service",
        "//ciri/node:tips_cache",
    ],
)

cc_library(
    name = "pruning_service",
    srcs = ["pruning_service.c"],
    hdrs = ["pruning_service.h"],
    visibility = ["//visibility:public"],
    deps = [
        ":conf",
        "//ciri/consensus/snapshot:snapshots_provider",
        "//ciri/consensus/spent_addresses:spent_addresses_service",
        "//ciri/consensus/tangle",
        "//ciri/consensus/tangle:traversal",
        "//ciri/node:tips_cache",
        "//common:errors",
        "//utils/handles:cond",
        "//utils/handles:rw_lock",
        "//utils/handles:thread",
    ],
)
