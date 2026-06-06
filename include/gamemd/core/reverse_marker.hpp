// reverse_marker.hpp — REVERSE macro for function comparison pipeline
//
// Usage:
//   REVERSE(0x4A0820, "IsCloseEnough: Manhattan distance check", true)
//   bool IsCloseEnough(int x1, int y1, int z1, int x2, int y2, int z2, int range) { ... }
//
// The REVERSE macro is a NO-OP at compile time. A build script
// (gen_reverse_hooks.py) scans source files for REVERSE markers
// and generates DEFINE_HOOK stubs with call logging.
//
// Parameters:
//   addr    — IDA function address (e.g., 0x6C8C40)
//   desc    — human-readable description
//   enabled — true = generate test hook, false = skip
#pragma once

#define REVERSE(addr, desc, enabled) \
    /* REVERSE_MARKER: addr desc enabled */
