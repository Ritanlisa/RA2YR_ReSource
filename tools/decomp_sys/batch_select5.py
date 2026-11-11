#!/usr/bin/env python3
"""batch_select5.py -- FULL-POOL difficulty-stratified census selector (2026-11-11).

The pipeline has decided ~1,000 of 19,078 functions (5%).  This selector builds
the four difficulty strata over EVERYTHING still undecided, so the census can
measure the production line across the complete difficulty spectrum instead of
the hand-picked easy bands used by batch_select{1..4}.

Strata (call/tail-jmp bearing = "non-leaf"; ds-only functions are leaves):
  A  leaf        size < 200B                      (easy)
  B  leaf        200B <= size < 500B
  C  call-bearing size < 500B
  D  call-bearing size >= 500B, OR any function >= 500B (large),
     OR indirect-call-heavy (n_indirect >= 4) regardless of size
  X  no full_export block at all (unstratifiable; reported separately)

Sampling: deterministic systematic (quantile) pick over each layer's candidates
sorted by difficulty key, so a 500-slot sample spans the whole layer instead of
clustering at one end.  Output order is easy -> hard within each layer, which
makes the part-by-part commit trail meaningful (early parts = easier tail).

Decided = ledger (.omo/codegen_match/status.json) UNION
          results.jsonl (.omo/agents/decomp_batch/results.jsonl)
(both are excluded; the union is reported).

Usage:
  python tools/decomp_sys/batch_select5.py                 # 500/layer
  python tools/decomp_sys/batch_select5.py --n 500 --seed census1
"""
import argparse
import json
import os
import re
import sys
from collections import Counter

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", ".."))
sys.path.insert(0, HERE)
sys.path.insert(0, os.path.join(ROOT, ".omo", "agents", "phasea"))

import pilot_select  # noqa: E402

OUT_DIR = os.path.join(ROOT, ".omo", "agents", "decomp_batch")
LEDGER = os.path.join(ROOT, ".omo", "codegen_match", "status.json")
RESULTS = os.path.join(OUT_DIR, "results.jsonl")


def norm(addr):
    return "0x%x" % int(addr, 16)


def load_decided():
    led, res = set(), set()
    if os.path.exists(LEDGER):
        for a in json.load(open(LEDGER, encoding="utf-8")):
            led.add(norm(a))
    if os.path.exists(RESULTS):
        for line in open(RESULTS, encoding="utf-8"):
            line = line.strip()
            if not line:
                continue
            try:
                r = json.loads(line)
            except ValueError:
                continue
            if r.get("addr"):
                res.add(norm(r["addr"]))
    return led, res


def feats(ev):
    lines = [ln for ln in ev["dis"].splitlines() if ln.strip()]
    n_calls = sum(1 for ln in lines if pilot_select.CALL_RE.search(ln))
    n_tail = sum(1 for ln in lines if pilot_select.TAILJMP_RE.search(ln))
    n_ds = sum(1 for ln in lines if pilot_select.DS_RE.search(ln))
    n_ind = sum(1 for ln in lines if pilot_select.IND_CALL_RE.search(ln))
    return n_calls + n_tail, n_ds, n_ind


def classify(size, ncalls, nds, nind):
    """Return (layer, reason) per the census strata."""
    if ncalls >= 4 or (nind >= 4 and size < 500):
        # virtual-dispatch-heavy small bodies are not "easy C"
        return "D", "indirect-heavy"
    if ncalls == 0 and size < 200:
        return "A", "leaf"
    if ncalls == 0 and size < 500:
        return "B", "leaf-medium"
    if ncalls > 0 and size < 500:
        return "C", "call-small"
    return "D", "call-large" if ncalls > 0 else "large"


def systematic_pick(items, k):
    """Deterministic quantile pick: if len<=k take all, else k evenly spaced."""
    if k <= 0:
        return []
    if len(items) <= k:
        return list(items)
    n = len(items)
    idxs = [int(round(i * (n - 1) / float(k - 1))) for i in range(k)]
    out, seen = [], set()
    for i in idxs:
        while i in seen:
            i = (i + 1) % n
        seen.add(i)
        out.append(items[i])
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--n", type=int, default=500,
                    help="sample size per layer (default 500)")
    ap.add_argument("--total", type=int, default=0,
                    help="if set, top up layers proportionally to pool mass "
                         "until this many are selected (B can be exhausted)")
    ap.add_argument("--layers", default="ABCD")
    ap.add_argument("--max-x", type=int, default=100,
                    help="cap for no-export (X) bucket, reported apart")
    ap.add_argument("--tag", default="census")
    ap.add_argument("--dry-run", action="store_true")
    args = ap.parse_args()

    exports = pilot_select.parse_exports()
    sig = json.load(open(os.path.join(ROOT, "signals.json"),
                         encoding="utf-8"))
    led, res = load_decided()
    decided = led | res
    print("decided: ledger=%d results=%d union=%d"
          % (len(led), len(res), len(decided)))

    pools = {L: [] for L in "ABCDX"}
    skipped_kind = 0
    for addr_s, s in sig["symbols"].items():
        if s.get("kind") != "function":
            skipped_kind += 1
            continue
        addr = norm(s.get("address") or addr_s)
        if addr in decided:
            continue
        ev = exports.get(int(addr, 16))
        name = s.get("name") or ""
        cls = s.get("cls") or (name.split("::", 1)[0] if "::" in name else "")
        rec = {"addr": addr, "name": name, "cls": cls}
        if ev is None:
            rec.update(size=0, n_calls=0, n_indirect=0, n_ds=0, layer="X",
                       reason="no-export", ev=None)
            pools["X"].append(rec)
            continue
        nc, nds, ni = feats(ev)
        layer, reason = classify(ev["size"], nc, nds, ni)
        rec.update(size=ev["size"], n_calls=nc, n_indirect=ni, n_ds=nds,
                   layer=layer, reason=reason, ev=ev)
        pools[layer].append(rec)

    print("remaining functions: %d (non-function symbols skipped: %d)"
          % (sum(len(v) for v in pools.values()), skipped_kind))
    for L in "ABCD":
        print("  pool %s = %5d" % (L, len(pools[L])))
    print("  pool X (no full_export block) = %d (sample cap %d)"
          % (len(pools["X"]), args.max_x))

    # per-layer quota (--total top-up is proportional to undecided pool mass;
    # layer B is physically small and therefore simply exhausted)
    quota = {L: args.n for L in args.layers if L in "ABCD"}
    if args.total:
        base = sum(min(quota[L], len(pools[L])) for L in quota)
        short = max(0, args.total - base)
        mass = {L: len(pools[L]) for L in quota}
        room = {L: len(pools[L]) - min(quota[L], len(pools[L]))
                for L in quota}
        tot_mass = float(sum(mass.values())) or 1.0
        for L in quota:
            add = int(round(short * mass[L] / tot_mass))
            quota[L] += min(add, room[L])
        # integer-rounding remainder -> largest mass with room
        have = sum(min(quota[L], len(pools[L])) for L in quota)
        while have < args.total:
            progs = [L for L in quota if quota[L] < len(pools[L])]
            if not progs:
                break
            L = max(progs, key=lambda x: (len(pools[x]), x))
            quota[L] += 1
            have += 1
        print("quota: %s (total target %d)" % (
            {L: min(quota[L], len(pools[L])) for L in quota}, args.total))

    os.makedirs(OUT_DIR, exist_ok=True)
    written = []
    for L in args.layers:
        cands = pools.get(L) or []
        if L == "X":
            cands = cands[:args.max_x]
        else:
            cands.sort(key=lambda c: (c["size"], c["n_calls"],
                                      c["n_indirect"], c["n_ds"], c["addr"]))
            cands = systematic_pick(cands, quota.get(L, args.n))
        out = []
        for c in cands:
            out.append({
                "addr": c["addr"], "name": c["name"], "cls": c["cls"],
                "size": c["size"], "family": "census%s" % L,
                "layer": c["layer"], "reason": c["reason"],
                "n_calls": c["n_calls"], "n_indirect": c["n_indirect"],
                "n_ds": c["n_ds"],
            })
        path = os.path.join(OUT_DIR, "batch_%s_%s.json" % (args.tag, L))
        if not args.dry_run:
            with open(path, "w", encoding="utf-8") as f:
                json.dump(out, f, ensure_ascii=False, indent=1)
        written.append((L, path, out))
        if out:
            sizes = [e["size"] for e in out]
            print("  %s: selected %d  size %d..%d (mean %.0f)  calls=%s"
                  % (L, len(out), min(sizes), max(sizes),
                     sum(sizes) / float(len(sizes)),
                     dict(sorted(Counter(e["n_calls"]
                                         for e in out).items()))))
            print("     classes: %s"
                  % Counter(e["cls"] for e in out).most_common(6))

    if not args.dry_run:
        merged = []
        for _L, _p, out in written:
            merged.extend(out)
        mpath = os.path.join(OUT_DIR, "batch_%s_all.json" % args.tag)
        with open(mpath, "w", encoding="utf-8") as f:
            json.dump(merged, f, ensure_ascii=False, indent=1)
        print("total selected %d -> %s" % (len(merged), mpath))
        for _L, p, _o in written:
            print("  %s" % p)
    return 0


if __name__ == "__main__":
    sys.exit(main())
