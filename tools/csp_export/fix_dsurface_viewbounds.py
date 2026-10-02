#!/usr/bin/env python3
"""G42.3 wave-3: DSurface_ViewBounds flat-host struct (238 sites, zero rewrites).

Research basis (g131 agents 1/2): corpus renders DSurface::ViewBounds static
object (data 0x886FA0) with member accesses `.field_0/.field_4/.__pad_8/
.__pad_34[N]/.__pad_FC[N]`.  The G41.48 `class DSurface_ViewBounds;` fwd can
never satisfy member access (C2027 x207 / C2275 x26 / C2065 x5).

Corpus-wide member inventory (name-encoded offsets honored):
  field_0 +0x0 / field_4 +0x4 / __pad_8 +0x8 (max idx 20) /
  __pad_34 +0x34 (max idx 116) / __pad_FC +0xFC (max idx 324 -> +0x240)

Surgery: struct DSurface_ViewBounds_flat host in e4_globals.hpp + typed
extern; delete the e4_protos.h fwd.  All 309+ member accesses and bare
`&DSurface_ViewBounds` uses become valid as-is.

Usage: [--apply]
"""
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = "--apply" in sys.argv

STRUCT = """\
// G42.3: DSurface::ViewBounds static-object flat host (data: 0x886FA0)
// -- offsets honor the corpus pad naming (__pad_N at +N); covers max indexed
//    access __pad_FC[324] = +0x240
struct DSurface_ViewBounds_flat {
    unsigned int field_0;                   // +0x0
    unsigned int field_4;                   // +0x4
    unsigned char __pad_8[0x34 - 0x8];      // +0x8  (idx<=20)
    unsigned char __pad_34[0xFC - 0x34];    // +0x34 (idx<=116)
    unsigned char __pad_FC[0x240 - 0xFC];   // +0xFC (idx<=324)
};
extern DSurface_ViewBounds_flat DSurface_ViewBounds;  // data: 0x886FA0
"""


def rd(p):
    with open(p, "r", encoding="utf-8", errors="replace", newline="") as f:
        return f.read().splitlines(keepends=True)


def wr(p, lines):
    with open(p, "w", encoding="utf-8", newline="") as f:
        f.write("".join(lines))


# 1. e4_protos.h: delete the fwd line
p1 = ROOT / "src/e4/e4_protos.h"
lines = rd(p1)
hits = [i for i, ln in enumerate(lines) if ln.strip() == "class DSurface_ViewBounds;"]
if len(hits) != 1:
    print(f"ABORT e4_protos.h fwd found {len(hits)}")
    sys.exit(1)
print(f"{'EDIT' if APPLY else 'DRY '} e4_protos.h:{hits[0]+1} delete fwd")
if APPLY:
    del lines[hits[0]]
    wr(p1, lines)

# 2. e4_globals.hpp: replace `extern int DSurface_ViewBounds;` with struct + typed extern
p2 = ROOT / "src/e4/e4_globals.hpp"
lines = rd(p2)
hits = [i for i, ln in enumerate(lines)
        if ln.strip().startswith("extern int DSurface_ViewBounds;")]
if len(hits) != 1:
    print(f"ABORT e4_globals.hpp extern found {len(hits)}")
    sys.exit(1)
i = hits[0]
print(f"{'EDIT' if APPLY else 'DRY '} e4_globals.hpp:{i+1} extern int -> flat host struct")
if APPLY:
    lines[i] = STRUCT
    wr(p2, lines)

print("done" if APPLY else "dry-run ok; pass --apply")
