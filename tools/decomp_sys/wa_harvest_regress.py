#!/usr/bin/env python3
"""wa_harvest_regress.py -- W-A harvest zero-regression verification.

Two independent checks against the PRE-harvest ledger OK set (2,654):

  1. Trigger-surface scan (static, exhaustive): the W-A pass only rewrites an
     FP literal when the SAME statement loads a double/float data symbol.  If
     no OK function even carries an FP literal (superset condition), the pass
     has an empty trigger surface on the historical OK set -- i.e. the harvest
     cannot have changed any of them.

  2. Full-chain rerun (dynamic, sampled): N random historical OK functions are
     re-generated with the W-A pass default-ON and byte-compared again through
     batch_run.run_part.  Ledger is NOT written (run_part has no ledger side
     effects).  Expectation: N/N MATCH.

Usage:
  python tools/decomp_sys/wa_harvest_regress.py [--sample 30] [--seed 20261112]
"""
import argparse
import json
import os
import random
import sys
import time

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", ".."))
sys.path.insert(0, HERE)
sys.path.insert(0, ROOT)

import batch_run                                       # noqa: E402
import pseudo                                          # noqa: E402
import wa_variants as WV                               # noqa: E402
import wa_const                                        # noqa: E402
from registry_ext import Registry                      # noqa: E402

STATE = os.path.join(ROOT, ".omo", "agents", "decomp_batch")
PRE = os.path.join(STATE, "wa_harvest_pre_ledger.json")
OUT = os.path.join(STATE, "wa_probe", "regress_harvest")
EVID = os.path.join(STATE, "wa_probe", "wa_harvest_regress.json")


def scan_trigger_surface(ok_addrs):
    """Superset of the pass trigger: FP literal text + a double/float symbol
    loaded anywhere in the function's disassembly."""
    with_lit = []
    touchable = []
    t0 = time.time()
    for i, a in enumerate(ok_addrs):
        try:
            ex = pseudo.fetch(a)
        except Exception:                              # noqa: BLE001
            continue
        if not ex.body_lines:
            continue
        body = "\n".join(ex.body_lines)
        if not WV.FP_LIT_RE.search(body):
            continue
        with_lit.append(a)
        syms = wa_const.load_symbols(ex.disasm_lines or [])
        if any(ty in ("double", "float") for (_i, _n, ty, _r) in syms):
            touchable.append(a)
        if (i + 1) % 500 == 0:
            print("  scan %d/%d  lit=%d touchable=%d  %.0fs"
                  % (i + 1, len(ok_addrs), len(with_lit), len(touchable),
                     time.time() - t0), flush=True)
    return with_lit, touchable


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--sample", type=int, default=30)
    ap.add_argument("--seed", type=int, default=20261112)
    args = ap.parse_args()

    pre = json.load(open(PRE, encoding="utf-8"))
    ok = [a for a, v in pre.items() if v.get("status") == "OK"]
    ok.sort()
    print("[regress] pre-harvest ledger OK = %d" % len(ok))

    print("[1/2] trigger-surface scan ...")
    with_lit, touchable = scan_trigger_surface(ok)
    print("[1/2] OK functions with FP literal: %d; with FP literal + double/"
          "float symbol load: %d" % (len(with_lit), len(touchable)))

    print("[2/2] full-chain rerun of %d sampled OK functions ..."
          % args.sample)
    rng = random.Random(args.seed)
    sample = rng.sample(ok, min(args.sample, len(ok)))
    sample.sort()
    reg = Registry.get()
    idx = pseudo.load_index()
    os.makedirs(OUT, exist_ok=True)
    results, _ = batch_run.run_part(sample, {}, OUT, reg, idx)
    verdicts = {a: results[a]["verdict"] for a in sample}
    vc = {}
    for v in verdicts.values():
        vc[v] = vc.get(v, 0) + 1
    not_match = {a: v for a, v in verdicts.items() if v != "MATCH"}
    print("[2/2] verdicts:", vc)
    for a, v in not_match.items():
        print("  NOT MATCH: %s %s %s" % (a, v, results[a].get("note")))

    ev = {
        "pre_ok": len(ok),
        "trigger_scan": {
            "with_fp_literal": len(with_lit),
            "with_fp_literal_and_fp_symbol": len(touchable),
            "with_fp_literal_addrs": with_lit,
            "touchable_addrs": touchable,
        },
        "rerun": {
            "sample": args.sample,
            "seed": args.seed,
            "verdicts": vc,
            "not_match": not_match,
            "addrs": sample,
        },
    }
    with open(EVID, "w", encoding="utf-8") as f:
        json.dump(ev, f, indent=1, ensure_ascii=False)
    print("[regress] evidence -> %s" % EVID)
    return 0 if not not_match else 1


if __name__ == "__main__":
    sys.exit(main())
