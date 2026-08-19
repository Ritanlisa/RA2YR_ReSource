#!/usr/bin/env python3
"""
efv_inline_test.py -- T22 inline-expansion verification harness.

Proves that `efv_inline.try_inline_match` (wired into verify_execution_flow as a
post-`cfg_match` fallback) turns a FALSE-FAIL caused PURELY by binary inlining
into a PASS, WITHOUT relaxing the proven matcher.

It is grounded in a REAL, IDA-confirmed inline in gamemd.exe:

    BuildingClass::GetHealthRatio (0x5F5C60)  -- body `health / (vtable[136]()
      ->Strength)` -- is INLINED into BuildingClass::IsHealthLow (0x5F5CD0): the
      caller's IDA pseudocode carries the health-ratio computation in place, with
      NO direct `CALL(0x5F5C60)`. (Same callee is also inlined into
      GetSellPriority 0x5F5DD0.) Confirmed via IDA decompile + efv_ida_events.

PART 1 grounds the demo in the REAL IDA: it loads the cached IDA pseudocode for
both functions, builds their event CFGs through the SAME pipeline the verifier
uses, and asserts the inline signature (IsHealthLow's IDA contains the callee's
distinctive inlined events but NO direct CALL to the callee).

PART 2 demonstrates FAIL -> PASS: the caller's faithful C++ (which CALLs
GetHealthRatio) is event-CFG-equivalent to the binary EXCEPT for that one call;
the direct cfg_match FAILS, and `try_inline_match` (faithful CFG substitution of
the callee) makes it PASS -- driven against the REAL IsHealthLow IDA CFG.

PART 3 are NEGATIVE controls proving NO matcher weakening: a WRONG callee body,
an UNTRANSLATED callee (provider -> None), and a non-inline discrepancy all stay
FAIL. PART 4 exercises 2-level recursion + the cycle guard (a self-recursive
callee must terminate, not hang). PART 5 re-runs the golden soundness gate
in-process and requires it to still pass (3 goldens PASS, stubs FAIL).

NOTE ON SOURCE FIXTURES: the project's only PROVEN-faithful translations are the
3 goldens, and none of them is inlined anywhere (all their xrefs are direct
CALLs); every non-golden building.cpp translation is a simplified STUB. So no
NATURALLY-faithful caller+callee pair exists in current src to flip FAIL->PASS
through `verify_single_function` end-to-end. This harness therefore drives the
REAL production `try_inline_match` over event CFGs that mirror the CONFIRMED real
IsHealthLow/GetHealthRatio structure (the same technique efv_golden_test uses for
its synthetic probes) -- the IDA side is the real cached pseudocode; the C++ /
callee event CFGs are the faithful translations a correct port would produce
(each matching its own real IDA). Nothing here is faked: the mechanism is the
production code, and a wrong substitution still FAILS.
"""

import os
import sys

_HERE = os.path.dirname(os.path.abspath(__file__))
if _HERE not in sys.path:
    sys.path.insert(0, _HERE)

import verify_execution_flow as vef

CALLER_ADDR = 0x5F5CD0   # BuildingClass::IsHealthLow   (inlines GetHealthRatio)
CALLEE_ADDR = 0x5F5C60   # BuildingClass::GetHealthRatio (the inlined callee)
GLOBAL_ADDR = 0x87F7E8   # Rules-threshold global read in IsHealthLow's IDA

# The curated narrative evidence lives in .omo/evidence/t22-inline.txt; this
# harness writes its raw run log to a sibling file so a re-run never clobbers it.
DEFAULT_EVIDENCE = os.path.join(str(vef.PROJECT_ROOT), ".omo", "evidence",
                                "t22-inline-harness.txt")


# ============================================================
# helpers
# ============================================================

def _single(efv, entry_id, events, succ=None):
    m = efv["model"]
    g = m.CFG(entry_id)
    g.new_block(entry_id, list(events), list(succ) if succ else [])
    return g


def _calls(cfg):
    out = set()
    for b in cfg.blocks.values():
        for e in b.ordered_events:
            if e.startswith("CALL(0x"):
                out.add(e)
    return out


def _flat(cfg):
    fl = []
    for bid in cfg.traverse(order="dfs"):
        fl.extend(cfg.get_block(bid).ordered_events)
    return fl


# ============================================================
# main
# ============================================================

def run(evidence_path=None):
    out = []

    def line(s=""):
        out.append(s)
        print(s)

    checks = []

    def check(name, cond):
        checks.append((name, bool(cond)))
        line("  [%s] %s" % ("PASS" if cond else "FAIL", name))
        return bool(cond)

    M = vef.load_all_maps()
    efv = vef._load_efv()
    signals = efv["cpp_events"].get_signals()
    m = efv["model"]

    cfg_match = efv["match"].cfg_match
    normalize = efv["normalize"].normalize
    canon = vef.canonicalize_branch_polarity
    try_inline = efv["inline"].try_inline_match

    # ---------------------------------------------------------------
    line("=" * 72)
    line("PART 1 -- REAL inline evidence (cached IDA pseudocode)")
    line("=" * 72)
    ida_caller_txt, _ = vef.load_ida_cache(CALLER_ADDR)
    ida_callee_txt, _ = vef.load_ida_cache(CALLEE_ADDR)
    have_real = bool((ida_caller_txt or "").strip() and (ida_callee_txt or "").strip())
    check("real IDA pseudocode cached for caller 0x%X and callee 0x%X"
          % (CALLER_ADDR, CALLEE_ADDR), have_real)

    ida_caller = None
    if have_real:
        ida_caller = vef._build_ida_cfg_events(
            efv, ida_caller_txt, vef.detect_this_type(ida_caller_txt), M)
        ida_callee = vef._build_ida_cfg_events(
            efv, ida_callee_txt, vef.detect_this_type(ida_callee_txt), M)
        line("  IsHealthLow   (0x%X) IDA events : %s" % (CALLER_ADDR, _flat(ida_caller)))
        line("  GetHealthRatio(0x%X) IDA events : %s" % (CALLEE_ADDR, _flat(ida_callee)))
        caller_evs = set(_flat(ida_caller))
        callee_evs = set(_flat(ida_callee))
        # inline signature: caller does NOT directly CALL the callee ...
        check("caller IDA has NO direct CALL(0x%X) to the callee (it inlined it)"
              % CALLEE_ADDR, ("CALL(0x%X)" % CALLEE_ADDR) not in caller_evs)
        # ... yet carries the callee's distinctive inlined events in place
        distinctive = {e for e in callee_evs if e != m.RET}
        check("caller IDA carries the callee's inlined body events %s"
              % sorted(distinctive),
              distinctive and distinctive.issubset(caller_evs))

    # ---------------------------------------------------------------
    line("")
    line("=" * 72)
    line("PART 2 -- FAIL -> PASS via inline expansion (real IsHealthLow IDA)")
    line("=" * 72)

    # The faithful C++ IsHealthLow: returns GetHealthRatio() <= Rules.X && health>0
    #   -> RET, CALL(0x5F5C60), READ(global,0x87F7E8), READ(member,108).
    cpp_caller = _single(efv, "cpp_caller", [
        m.RET,
        m.call_direct(CALLEE_ADDR),
        m.read_global(GLOBAL_ADDR),
        m.read_member(108),
    ])
    # The faithful C++ GetHealthRatio (matches its OWN real IDA):
    #   READ(member,108), RET, CALL(vfptr+136).
    callee_cfg = _single(efv, "cpp_callee", [
        m.read_member(108),
        m.RET,
        m.call_virtual(136),
    ])

    def provider_good(addr):
        return callee_cfg if addr == CALLEE_ADDR else None

    ida_for_match = ida_caller if ida_caller is not None else _single(
        efv, "ida0", [m.read_member(108), m.RET, m.call_virtual(136),
                      m.read_global(GLOBAL_ADDR), m.read_member(108)])

    direct = cfg_match(ida_for_match, cpp_caller)
    check("direct cfg_match FAILS (false-FAIL: C++ CALLs the inlined callee)",
          direct is False)

    inlined = try_inline(ida_for_match, cpp_caller, provider_good,
                         cfg_match=cfg_match, normalize=normalize, canonicalize=canon)
    check("try_inline_match PASSES after faithful callee substitution",
          inlined is True)

    # ---------------------------------------------------------------
    line("")
    line("=" * 72)
    line("PART 3 -- NEGATIVE controls (NO matcher weakening)")
    line("=" * 72)

    # (a) WRONG callee body: an extra WRITE the binary never performed.
    wrong_callee = _single(efv, "wrong", [
        m.read_member(108), m.write_member(200), m.RET, m.call_virtual(136),
    ])

    def provider_wrong(addr):
        return wrong_callee if addr == CALLEE_ADDR else None

    bad = try_inline(ida_for_match, cpp_caller, provider_wrong,
                     cfg_match=cfg_match, normalize=normalize, canonicalize=canon)
    check("WRONG callee body (extra WRITE) -> still FAILS (no weakening)",
          bad is False)

    # (b) UNTRANSLATED callee: provider returns None -> cannot expand -> FAIL.
    none_res = try_inline(ida_for_match, cpp_caller, lambda a: None,
                          cfg_match=cfg_match, normalize=normalize, canonicalize=canon)
    check("UNTRANSLATED callee (provider->None) -> stays FAIL (documented limit)",
          none_res is False)

    # (c) a NON-inline discrepancy (a wrong member WRITE, no CALL absent from IDA)
    #     -> the inline fallback must not rescue it.
    cpp_wrong_write = _single(efv, "cppw", [
        m.read_member(108), m.RET, m.call_virtual(136),
        m.read_global(GLOBAL_ADDR), m.write_member(999),
    ])
    res_c = try_inline(ida_for_match, cpp_wrong_write, provider_good,
                       cfg_match=cfg_match, normalize=normalize, canonicalize=canon)
    check("non-inline discrepancy (wrong WRITE) -> inline fallback does not rescue",
          res_c is False)

    # ---------------------------------------------------------------
    line("")
    line("=" * 72)
    line("PART 4 -- recursion (2-level inline) + cycle guard")
    line("=" * 72)

    A_ADDR, B_ADDR, R_ADDR = 0xA000, 0xB000, 0xC000
    # Binary inlined A, and A inlined B -> caller IDA = A's body with B's body in
    # place: READ(member,8), WRITE(member,40), RET. (no CALL(0x...) survives)
    ida_2lvl = _single(efv, "ida2", [
        m.read_member(8), m.write_member(40), m.RET,
    ])
    # C++ caller CALLs A; A's CFG CALLs B; B writes member 40.
    cpp_2lvl = _single(efv, "c2", [m.call_direct(A_ADDR), m.RET])
    cfg_A = _single(efv, "A", [m.read_member(8), m.call_direct(B_ADDR), m.RET])
    cfg_B = _single(efv, "B", [m.write_member(40), m.RET])

    def provider_2lvl(addr):
        return {A_ADDR: cfg_A, B_ADDR: cfg_B}.get(addr)

    two = try_inline(ida_2lvl, cpp_2lvl, provider_2lvl,
                     cfg_match=cfg_match, normalize=normalize, canonicalize=canon)
    check("2-level recursion (caller->A->B both inlined) -> PASSES", two is True)

    # cycle guard: a self-recursive callee R (R calls R, inlined) must TERMINATE.
    ida_cyc = _single(efv, "idac", [m.read_member(8), m.RET])
    cpp_cyc = _single(efv, "ccyc", [m.call_direct(R_ADDR), m.RET])
    cfg_R = _single(efv, "R", [m.read_member(8), m.call_direct(R_ADDR), m.RET])

    terminated = True
    cyc_res = None
    try:
        cyc_res = try_inline(ida_cyc, cpp_cyc, lambda a: cfg_R if a == R_ADDR else None,
                             cfg_match=cfg_match, normalize=normalize, canonicalize=canon)
    except RecursionError:
        terminated = False
    check("self-recursive callee -> cycle guard TERMINATES (no hang/RecursionError)",
          terminated and isinstance(cyc_res, bool))

    # ---------------------------------------------------------------
    line("")
    line("=" * 72)
    line("PART 5 -- golden soundness regression (3 goldens PASS, stubs FAIL)")
    line("=" * 72)
    try:
        import efv_golden_test
        rc = efv_golden_test.run(verbose=False, evidence_path=None)
    except Exception as exc:           # pragma: no cover
        line("  ERROR running golden gate: %r" % exc)
        rc = 1
    check("efv_golden_test.run() exit 0 (no regression from inline fallback)",
          rc == 0)

    # ---------------------------------------------------------------
    line("")
    line("=" * 72)
    line("RESULT")
    line("=" * 72)
    all_ok = all(ok for _n, ok in checks)
    line("  %s  (%d checks)" % ("ALL PASS" if all_ok else "FAILURES PRESENT",
                                len(checks)))

    if evidence_path:
        try:
            os.makedirs(os.path.dirname(evidence_path), exist_ok=True)
            with open(evidence_path, "w", encoding="utf-8") as f:
                f.write("\n".join(out) + "\n")
            print("  evidence written: %s" % evidence_path)
        except OSError as exc:
            print("  WARNING: could not write evidence (%s)" % exc, file=sys.stderr)

    return 0 if all_ok else 1


def main():
    import argparse
    p = argparse.ArgumentParser(description="T22 inline-expansion harness.")
    p.add_argument("--evidence", default=DEFAULT_EVIDENCE)
    p.add_argument("--no-evidence", action="store_true")
    args = p.parse_args()
    sys.exit(run(evidence_path=None if args.no_evidence else args.evidence))


if __name__ == "__main__":
    main()
