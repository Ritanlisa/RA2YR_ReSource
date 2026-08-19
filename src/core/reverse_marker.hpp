// reverse_marker.hpp - REVERSE macro for function comparison pipeline
//
// Usage:
//   REVERSE(0x4A0820, "IsCloseEnough: Manhattan distance check", "Capture")
//   bool IsCloseEnough(int x1, int y1, int z1, int x2, int y2, int z2, int range) { ... }
//
// The REVERSE macro is a NO-OP at compile time. A build script
// (gen_reverse_hooks.py) scans source files for REVERSE markers
// and generates DEFINE_HOOK stubs with RE_* implementations.
//
// Parameters:
//   addr - IDA function address (e.g., 0x6C8C40)
//   desc - human-readable description
//   mode - "None" | "Replace" | "Inject" | "Capture"
//
// Modes:
//   "None"    - No hook generated. Existing default.
//   "Replace" - Shadow comparison + replace this func and all downstream RE funcs.
//               Requires all callees to have REVERSE markers with Inject or Replace.
//   "Inject"  - Shadow comparison for this func only. Downstream calls use original gamemd.
//   "Capture" - Hook injects, records input/output only. No RE comparison.
//               No completion check required. Pure observation.
#pragma once

#define REVERSE(addr, desc, mode) \
    /* REVERSE_MARKER: addr desc mode */
