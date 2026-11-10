#!/usr/bin/env python3
"""smoke.py -- Phase A codegen-match harness smoke test.

Runs the FULL chain (original byte extraction -> VC6-era cl compile -> COFF
extraction -> capstone normalization -> diff -> ledger) on two simple
translated functions:

  A. Math::DistSq2D      @ 0x5F6560  (src/e4/Math_e4.cpp:211 -- virtual-call
     coordinate fetch + dx^2+dy^2; first-alignment MISMATCH is EXPECTED and
     acceptable; the deliverable is the first-diff instruction pair)
  B. DListNode::Init     @ 0x4072C0  (src/misc/misc_ext.cpp:21708 -- leaf,
     three self-store members; expected byte-exact MATCH)

Harness PASS criterion: both chains run end-to-end and produce a verdict
(MATCH or MISMATCH-with-first-diff). Nothing under src/ is modified; the era
harness TUs are generated into .omo/agents/phasea/.

Usage:
  python tools/codegen_match/smoke.py [--expect-init-match/--no-expect-init-match]
"""
import argparse
import os
import sys

REPO = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", ".."))
sys.path.insert(0, REPO)
sys.path.insert(0, os.path.dirname(__file__))

from tools.codegen_match import extract as exmod
from tools.codegen_match import build_era as bemod
from tools.codegen_match import diffasm as dmod
from tools.codegen_match import ledger as lmod

OUT = os.path.join(REPO, ".omo", "agents", "phasea")

# ---------------------------------------------------------------- TU bodies

# Mirrors src/e4/Math_e4.cpp:211 (Math::DistSq2D) semantics:
#   v2 = (*(int(***)(Math*, unsigned char*))(*(unsigned int*)this->__pad_0 + 72))(this, v6)
#   return (v3 - p0[0])^2 + (v4 - p1[1])^2
# vtable slot 18 (0x48) = GetCoordsEx(out-buf) -> Coord3*.
DISTSQ_TU = r"""
// Phase A era harness TU -- mirrors src/e4/Math_e4.cpp Math::DistSq2D
struct MathEra {
    // 18 filler virtual slots so GetCoordsEx lands at vtable offset 0x48
    virtual int s00(); virtual int s01(); virtual int s02();
    virtual int s03(); virtual int s04(); virtual int s05();
    virtual int s06(); virtual int s07(); virtual int s08();
    virtual int s09(); virtual int s10(); virtual int s11();
    virtual int s12(); virtual int s13(); virtual int s14();
    virtual int s15(); virtual int s16(); virtual int s17();
    virtual int* GetCoordsEx(void* buf);   // slot 18 == +0x48
    int DistSq2D(unsigned int* other);
};
int MathEra::DistSq2D(unsigned int* other) {
    unsigned char buf[12];
    int* c = GetCoordsEx(buf);
    int x = *c;
    int y = c[1];
    int z = c[2];
    int x2 = x - (int)other[0];
    int y2 = y - (int)other[1];
    return y2 * y2 + x2 * x2;
}
"""

# Mirrors src/misc/misc_ext.cpp:21708 (DListNode::Init):
#   *(unsigned int*)this->__pad_000 = this; this->q004 = (int)this; this->q008 = this;
INIT_TU = r"""
// Phase A era harness TU -- mirrors src/misc/misc_ext.cpp DListNode::Init
struct DListNodeEra {
    int m0; int m1; int m2;
    void Init();
};
void DListNodeEra::Init() {
    m0 = (int)this;
    m1 = (int)this;
    m2 = (int)this;
}
"""


def run_case(label, ident, tu_body, tu_name, sym_filter, expect_match=None):
    print("=" * 78)
    print("SMOKE CASE %s -- %s" % (label, ident))
    print("=" * 78)
    tu_path = os.path.join(OUT, tu_name)
    with open(tu_path, "w", encoding="utf-8") as f:
        f.write(tu_body)
    print("[smoke] TU written: %s" % tu_path)

    # 1. original bytes
    art = exmod.extract_function(ident)
    orig_path = os.path.join(OUT, "orig_%s.json" % art["addr"][2:])
    import json
    with open(orig_path, "w", encoding="utf-8") as f:
        json.dump(art, f, indent=1)
    print("[smoke] orig artifact -> %s" % orig_path)

    # 2. era compile + COFF extract
    ours, ours_path = bemod.compile_and_extract(
        tu_path, out_dir=OUT, sym_filter=sym_filter, tag=art["addr"][2:])

    # 3. normalized diff
    sa, _ = dmod.load_orig_side(orig_path)
    sb, _ = dmod.load_obj_side(ours_path)
    ok, first = dmod.compare(sa, sb, verbose=True)
    name = art["name"]
    if ok:
        print("[smoke] verdict: MATCH (%s @ %s, %d bytes)"
              % (name, art["addr"], art["size"]))
        lmod.record(art["addr"], name=name, status="OK",
                    first_diff=None, note="smoke %s" % label)
    else:
        a, b = first
        fd = None
        if a and b:
            fd = "ORIG +%d %s | OURS +%d %s" % (a["off"], a["disasm"], b["off"], b["disasm"])
        print("[smoke] verdict: MISMATCH (%s @ %s) first_diff: %s"
              % (name, art["addr"], fd))
        lmod.record(art["addr"], name=name, status="NG", first_diff=fd,
                    note="smoke %s" % label)

    # expectation bookkeeping (informational unless strict)
    if expect_match is True and not ok:
        print("[smoke] NOTE: expected MATCH but got MISMATCH (see first diff above)")
    if expect_match is False and ok:
        print("[smoke] NOTE: expected MISMATCH but got MATCH (bonus!)")
    return ok


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--strict", action="store_true",
                    help="require DListNode::Init to MATCH for smoke PASS")
    args = ap.parse_args()

    os.makedirs(OUT, exist_ok=True)
    print("[smoke] Phase A codegen-match harness smoke -- artifacts in %s" % OUT)

    r1 = run_case("A", "Math::DistSq2D", DISTSQ_TU, "era_5F6560.cpp",
                  "DistSq2D", expect_match=False)
    r2 = run_case("B", "DListNode::Init", INIT_TU, "era_4072C0.cpp",
                  "Init", expect_match=True)

    print("=" * 78)
    lmod.stats()
    print("=" * 78)
    harness_ok = True  # both chains completed => harness PASS (per spec)
    if args.strict and not r2:
        harness_ok = False
    print("[smoke] HARNESS %s  (chain completion: A=%s done, B=%s done%s)"
          % ("PASS" if harness_ok else "FAIL",
             "chain" if r1 is not None else "?", "chain" if r2 is not None else "?",
             "; DListNode::Init MATCH=%s" % r2))
    return 0 if harness_ok else 1


if __name__ == "__main__":
    sys.exit(main())
