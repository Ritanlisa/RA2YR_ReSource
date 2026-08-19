#!/usr/bin/env python3
"""
test_crash_isolation.py -- Proves the §D-STEP4 crash-path isolation in
`verify_single_function` (.omo/plans/code-verifier.md §D-STEP4).

CLAIM UNDER TEST
----------------
A per-function exception inside the verifier's structural pipeline (cfg_match /
inline fallback) or inside the STEP3(0) check must:
  * NEVER propagate out of verify_single_function (so a single bad function can
    never crash the whole `--auto` run);
  * NEVER silently PASS the whole function — a crash falls back to the
    *independently computed* STEP3(0) verdict, which still gates and can FAIL;
  * emit a LOUD WARN to stderr (not silent).

PROBES (all monkeypatch the verifier's own modules, exactly like test_step3_0.py)
  C1  faithful golden + cfg_match RAISES
        -> verify_single_function does NOT raise
        -> structural_crashed fallback -> relies on STEP3(0) -> PASS (faithful)
        -> info["structural_error"] present, "structural match raised" WARN on stderr
  C2  stub  + cfg_match RAISES
        -> does NOT raise
        -> relies on STEP3(0); a stub omits external ops -> STEP3(0) FAIL -> FAIL
        -> info["structural_error"] present, WARN on stderr
  C3  faithful golden + step3_0_check RAISES (real cfg_match left intact)
        -> does NOT raise
        -> STEP3(0) treated satisfied (loud); real bijection matches -> PASS
        -> info["step3_0_error"] present, "STEP3(0) check raised" WARN on stderr

Exit 0 iff every probe meets its expectation; non-zero otherwise.

Usage:
    python tools/test_crash_isolation.py
    python tools/test_crash_isolation.py -v
"""

import io
import os
import sys
import contextlib

_HERE = os.path.dirname(os.path.abspath(__file__))
if _HERE not in sys.path:
    sys.path.insert(0, _HERE)

import verify_execution_flow as vef
import efv_match

GOOD_ADDR = 0x44E7B0        # BuildingClass::GetPowerOutput (faithful golden)
GOOD_NAME = "BuildingClass::GetPowerOutput"
STUB_ADDR = 0x743A50        # UnitClass::Scatter (stub)
STUB_NAME = "UnitClass::Scatter"


class _Boom(RuntimeError):
    pass


def _raiser(*_a, **_k):
    raise _Boom("synthetic crash for crash-isolation test")


def _call_isolated(addr, name, M, ida_text, verbose, patch_match=False,
                   patch_step3=False):
    """Run verify_single_function with the requested monkeypatch(es), capturing
    stderr. Returns (raised_exc_or_None, passed, info, stderr_text)."""
    disp = M.addr_to_name.get(addr) or name
    orig_match = efv_match.cfg_match
    orig_step3 = vef.step3_0_check
    buf = io.StringIO()
    raised = None
    passed = info = None
    try:
        if patch_match:
            efv_match.cfg_match = _raiser
        if patch_step3:
            vef.step3_0_check = _raiser
        with contextlib.redirect_stderr(buf):
            passed, info = vef.verify_single_function(
                addr, name, disp, M, ida_text, verbose=verbose, signals=None)
    except Exception as exc:                  # verify_single_function MUST NOT raise
        raised = exc
    finally:
        efv_match.cfg_match = orig_match
        vef.step3_0_check = orig_step3
    return raised, passed, info, buf.getvalue()


def run(verbose=False):
    results = []   # (label, ok, detail)

    def record(label, ok, detail=""):
        results.append((label, bool(ok), detail))

    M = vef.load_all_maps()

    good_ida, _g = vef.load_ida_cache(GOOD_ADDR)
    stub_ida, _s = vef.load_ida_cache(STUB_ADDR)
    if not good_ida or not good_ida.strip():
        record("harness: faithful golden IDA cache present", False,
               "no IDA cache for 0x%X" % GOOD_ADDR)
        return _emit(results, verbose)
    if not stub_ida or not stub_ida.strip():
        record("harness: stub IDA cache present", False,
               "no IDA cache for 0x%X" % STUB_ADDR)
        return _emit(results, verbose)

    # ---- C1: faithful + cfg_match RAISES -> no crash, PASS via STEP3(0), WARN ----
    raised, passed, info, err = _call_isolated(
        GOOD_ADDR, GOOD_NAME, M, good_ida, verbose, patch_match=True)
    record("C1 faithful + cfg_match RAISES: verify_single_function does NOT raise",
           raised is None, "raised=%r" % (raised,))
    record("C1 faithful + cfg_match RAISES: verdict PASS (relies on STEP3(0))",
           raised is None and passed is True,
           "passed=%s step3_0_ok=%s" % (passed, (info or {}).get("step3_0_ok")))
    record("C1 faithful + cfg_match RAISES: structural_error recorded + WARN on stderr",
           raised is None and (info or {}).get("structural_error") is not None
           and "structural match raised" in err,
           "structural_error=%r err_has_warn=%s"
           % ((info or {}).get("structural_error"),
              "structural match raised" in err))

    # ---- C2: stub + cfg_match RAISES -> no crash, FAIL via STEP3(0), WARN ----
    raised, passed, info, err = _call_isolated(
        STUB_ADDR, STUB_NAME, M, stub_ida, verbose, patch_match=True)
    record("C2 stub + cfg_match RAISES: verify_single_function does NOT raise",
           raised is None, "raised=%r" % (raised,))
    record("C2 stub + cfg_match RAISES: verdict FAIL (STEP3(0) gates a stub)",
           raised is None and passed is False,
           "passed=%s step3_0_ok=%s" % (passed, (info or {}).get("step3_0_ok")))
    record("C2 stub + cfg_match RAISES: structural_error recorded + WARN on stderr",
           raised is None and (info or {}).get("structural_error") is not None
           and "structural match raised" in err,
           "structural_error=%r err_has_warn=%s"
           % ((info or {}).get("structural_error"),
              "structural match raised" in err))

    # ---- C3: faithful + step3_0_check RAISES -> no crash, PASS via bijection, WARN
    raised, passed, info, err = _call_isolated(
        GOOD_ADDR, GOOD_NAME, M, good_ida, verbose, patch_step3=True)
    record("C3 faithful + step3_0_check RAISES: verify_single_function does NOT raise",
           raised is None, "raised=%r" % (raised,))
    record("C3 faithful + step3_0_check RAISES: verdict PASS (real bijection matches)",
           raised is None and passed is True,
           "passed=%s" % (passed,))
    record("C3 faithful + step3_0_check RAISES: step3_0_error recorded + WARN on stderr",
           raised is None and (info or {}).get("step3_0_error") is not None
           and "STEP3(0) check raised" in err,
           "step3_0_error=%r err_has_warn=%s"
           % ((info or {}).get("step3_0_error"),
              "STEP3(0) check raised" in err))

    return _emit(results, verbose)


def _emit(results, verbose):
    print("=" * 72)
    print("crash-isolation test (per-function exception never crashes / never")
    print("silently PASSes -- falls back to the STEP3(0) verdict, loudly)")
    print("=" * 72)
    all_ok = True
    for label, ok, detail in results:
        all_ok = all_ok and ok
        print("  [%s] %s" % ("PASS" if ok else "FAIL", label))
        if detail and (verbose or not ok):
            print("        %s" % detail)
    print("-" * 72)
    print("RESULT: %s (%d/%d probes met expectation)" % (
        "ALL PASS" if all_ok else "FAILURES PRESENT",
        sum(1 for _l, ok, _d in results if ok), len(results)))
    return 0 if all_ok else 1


def main():
    import argparse
    p = argparse.ArgumentParser(description="STEP4 crash-isolation test.")
    p.add_argument("-v", "--verbose", action="store_true")
    args = p.parse_args()
    sys.exit(run(verbose=args.verbose))


if __name__ == "__main__":
    main()
