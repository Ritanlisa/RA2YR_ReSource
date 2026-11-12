#!/usr/bin/env python3
"""wa_ab.py -- A/B the W-A generator pass through the full batch chain.

Runs `batch_run.run_part` twice on the same address list, once with
DECOMP_NO_DATA_CONST=1 (baseline: pass disabled) and once with it enabled,
then reports per-address verdict changes.  This is probe mode: run_part does
not write the codegen ledger (that only happens in batch_run.main).

Usage:
  python tools/decomp_sys/wa_ab.py --kind wa          # the 30 probe matches
  python tools/decomp_sys/wa_ab.py --kind regress     # OK-ledger candidates
  python tools/decomp_sys/wa_ab.py --addrs 0x403D50,0x403D10
  python tools/decomp_sys/wa_ab.py --kind regress --max 40
"""
import argparse
import json
import os
import random
import sys

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
OUT = os.path.join(STATE, "wa_probe")
LEDGER = os.path.join(ROOT, ".omo", "codegen_match", "status.json")


def ledger_status():
    st = json.load(open(LEDGER, encoding="utf-8"))
    return st


def candidates_regress(maxn, seed=20261113):
    """Ledger-OK functions that the pass can actually touch."""
    st = ledger_status()
    ok = [a for a, v in st.items() if v.get("status") == "OK"]
    rng = random.Random(seed)
    rng.shuffle(ok)
    picks = []
    scanned = 0
    for a in ok:
        scanned += 1
        try:
            ex = pseudo.fetch(a)
        except Exception:                              # noqa: BLE001
            continue
        if not ex.body_lines:
            continue
        dis = ex.disasm_lines or []
        syms = wa_const.load_symbols(dis)
        if not any(ty in ("double", "float") for (_i, _n, ty, _r) in syms):
            continue
        body = "\n".join(ex.body_lines)
        if not WV.FP_LIT_RE.search(body):
            continue
        picks.append(a)
        if len(picks) >= maxn:
            break
    print("[regress] scanned %d OK functions, %d touchable" % (scanned, len(picks)))
    return picks


def candidates_wa():
    rep = {}
    for name in ("report_fold.json", "report_fp.json", "report_imm.json"):
        p = os.path.join(OUT, name)
        if not os.path.exists(p):
            continue
        for r in json.load(open(p, encoding="utf-8"))["results"]:
            if r["verdict"] == "MATCH":
                rep[r["addr"]] = name
    return sorted(rep)


def run_side(addrs, outdir, pass_on):
    if pass_on:
        os.environ.pop("DECOMP_NO_DATA_CONST", None)
    else:
        os.environ["DECOMP_NO_DATA_CONST"] = "1"
    reg = Registry.get()
    idx = pseudo.load_index()
    os.makedirs(outdir, exist_ok=True)
    results, _ = batch_run.run_part(addrs, {}, outdir, reg, idx)
    return results


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--kind", choices=["wa", "regress"], default=None)
    ap.add_argument("--addrs", default=None)
    ap.add_argument("--max", type=int, default=0)
    ap.add_argument("--tag", default=None)
    args = ap.parse_args()
    if args.addrs:
        addrs = [a.strip().lower() for a in args.addrs.split(",") if a.strip()]
        tag = args.tag or "adhoc"
    elif args.kind == "wa":
        addrs = candidates_wa()
        tag = args.tag or "wa"
    elif args.kind == "regress":
        addrs = candidates_regress(args.max or 30)
        tag = args.tag or "regress"
    else:
        ap.error("--kind or --addrs required")
    if args.max:
        addrs = addrs[:args.max]
    print("[ab] %d addresses (tag=%s)" % (len(addrs), tag))
    base = run_side(addrs, os.path.join(OUT, "ab_%s_off" % tag), False)
    new = run_side(addrs, os.path.join(OUT, "ab_%s_on" % tag), True)
    rows = []
    flip_up = flip_down = same = 0
    for a in addrs:
        vb = base[a]["verdict"]
        vn = new[a]["verdict"]
        row = {"addr": a, "off": vb, "on": vn,
               "name": new[a].get("emitted") or new[a].get("name"),
               "off_rv": base[a].get("rule_violations"),
               "on_rv": new[a].get("rule_violations"),
               "on_clean": new[a].get("clean")}
        if vb != vn:
            if vn == "MATCH":
                flip_up += 1
            elif vb == "MATCH":
                flip_down += 1
            row["off_note"] = (base[a].get("note") or "")[:200]
            row["on_note"] = (new[a].get("note") or "")[:200]
        else:
            same += 1
        rows.append(row)
    out = os.path.join(OUT, "ab_%s.json" % tag)
    with open(out, "w", encoding="utf-8") as f:
        json.dump({"n": len(addrs), "flip_up": flip_up,
                   "flip_down": flip_down, "same": same,
                   "rows": rows}, f, indent=1, ensure_ascii=False)
    print("[ab] same=%d up=%d down=%d -> %s" % (same, flip_up, flip_down, out))
    for r in rows:
        if r["off"] != r["on"]:
            print("  %-10s %-14s -> %-14s %s"
                  % (r["addr"], r["off"], r["on"], r["name"]))
    return 0


if __name__ == "__main__":
    sys.exit(main())
