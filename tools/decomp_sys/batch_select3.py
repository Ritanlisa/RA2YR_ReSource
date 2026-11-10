#!/usr/bin/env python3
"""batch_select3.py -- DECOMP-2 round-3 batch composition (2026-11-10).

Round-3 expansion over batch_select2:
  * size 4..<200B (was <120B)
  * NON-LEAF allowed: 0..2 calls (internal or indirect) -- callee
    declarations are handled by the pass_callees hpp prototypes
  * full_export block with a NON-EMPTY Hex-Rays body
  * class methods preferred, ICF-fold/thunk families excluded, per-class cap
  * ledger recovery-first ordering (PENDING -> fresh -> NG -> OK)

Output: .omo/agents/decomp_batch/batch400.json
Usage:  python tools/decomp_sys/batch_select3.py [--n 400] [--cap 15]
        [--min-calls 0] [--max-calls 2] [--max-size 200]
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
sys.path.insert(0, ROOT)
sys.path.insert(0, os.path.join(ROOT, ".omo", "agents", "phasea"))

import pilot_select  # noqa: E402
import pseudo        # noqa: E402

OUT_DIR = os.path.join(ROOT, ".omo", "agents", "decomp_batch")
LEDGER = os.path.join(ROOT, ".omo", "codegen_match", "status.json")

FOLD_RE = re.compile(r"^(COMStub|Thunk_.*|.*Thunk_.*|vt\d+|nullsub|j_|loc_)")
PLACEHOLDER_RE = re.compile(
    r"^(sub_[0-9A-Fa-f]+|nullsub_?\d*|j_.*|loc_.*|.*[Vv]t\d+.*"
    r"|(?:Get|Set)Member\d+|.*_field_0x[0-9A-Fa-f]+.*|field_.*"
    r"|__pad.*|unknown\d*)$")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--n", type=int, default=400)
    ap.add_argument("--cap", type=int, default=15,
                    help="max candidates per class")
    ap.add_argument("--min-calls", type=int, default=0)
    ap.add_argument("--max-calls", type=int, default=2)
    ap.add_argument("--max-size", type=int, default=200)
    ap.add_argument("--out", default="batch400.json")
    ap.add_argument("--reserve-nonleaf", type=int, default=80,
                    help="guarantee >=N non-leaf (n_calls>=1) picks")
    args = ap.parse_args()

    exports = pilot_select.parse_exports()
    sig = json.load(open(os.path.join(ROOT, "signals.json"), encoding="utf-8"))
    decided = {}
    if os.path.exists(LEDGER):
        decided = json.load(open(LEDGER, encoding="utf-8"))
    decided_addrs = {a.lower() for a in decided}

    # cache the full_export index ONCE (pseudo.fetch reloads it otherwise)
    _idx = pseudo.load_index()
    pseudo.load_index = lambda: _idx

    cands = []
    n_no_pseudo = 0
    for addr_s, s in sig["symbols"].items():
        if s.get("kind") != "function":
            continue
        name = s.get("name") or ""
        if not name or FOLD_RE.match(name.split("::")[-1]):
            continue
        addr = int(s.get("address", addr_s), 16)
        a_low = "0x%x" % addr
        ev = exports.get(addr)
        if ev is None or ev["size"] < 4 or ev["size"] >= args.max_size:
            continue
        sc, feats = pilot_select.score_one(name, ev, None)
        nc = feats["n_calls"]
        if nc < args.min_calls or nc > args.max_calls:
            continue
        # indirect calls are far harder to declare; cap at 1
        if feats["n_indirect_calls"] > 1:
            continue
        try:
            ex = pseudo.fetch(a_low)
        except (KeyError, AttributeError, IndexError):
            n_no_pseudo += 1
            continue
        if not ex.body_lines:
            n_no_pseudo += 1
            continue
        cls = name.split("::")[0] if "::" in name else None
        led = decided.get(a_low) or {}
        st = str(led.get("status") or "")
        if a_low not in decided_addrs:
            prio = 1        # 1 = fresh (never accounted)
        elif st.startswith("PENDING"):
            prio = 0        # 0 = recover an unresolved ledger entry
        elif st == "NG":
            prio = 2        # 2 = previously MISMATCH
        else:
            prio = 3        # 3 = already MATCHed, lowest value
        cands.append({
            "addr": a_low, "name": name, "cls": cls,
            "size": ev["size"], "family": "fresh3",
            "score": sc, "class_method": bool(cls),
            "n_calls": nc, "n_indirect": feats["n_indirect_calls"],
            "n_ds": feats["n_ds_refs"], "no_float": feats["no_float"],
            "placeholder": bool(PLACEHOLDER_RE.match(name)),
            "already_decided": a_low in decided_addrs,
            "prio": prio, "ledger_status": led.get("status"),
            "has_pseudo": True,
        })

    print("pool(<%dB, %d..%d calls, pseudo) = %d  (dropped %d empty-body)"
          % (args.max_size, args.min_calls, args.max_calls,
             len(cands), n_no_pseudo))
    cm = sum(1 for c in cands if c["class_method"])
    calls_hist = Counter(c["n_calls"] for c in cands)
    print("  class methods: %d  placeholders: %d  already-decided: %d"
          % (cm, sum(1 for c in cands if c["placeholder"]),
             sum(1 for c in cands if c["already_decided"])))
    print("  call-count histogram:", dict(sorted(calls_hist.items())))

    def key(c):
        # n_calls deliberately NOT a primary key: leaf pool is huge and
        # would starve the non-leaf expansion round-3 exists for
        return (c["prio"], not c["class_method"],
                c["placeholder"], c["size"], -c["score"], c["addr"])

    cands.sort(key=key)
    quota = {}
    out = []
    picked = set()

    def try_fill(subset, limit):
        for c in subset:
            if len(out) >= limit:
                return
            if c["addr"] in picked:
                continue
            cls = c["cls"] or "_global"
            if quota.get(cls, 0) >= args.cap:
                continue
            quota[cls] = quota.get(cls, 0) + 1
            picked.add(c["addr"])
            out.append({k: c[k] for k in
                        ("addr", "name", "cls", "size", "family", "n_calls")})

    # phase 1: guarantee non-leaf representation (the round-3 expansion
    # exists to exercise the <=2-call population), phase 2: fill the rest
    nonleaf = [c for c in cands if c["n_calls"] >= 1]
    try_fill(nonleaf, args.reserve_nonleaf)
    try_fill(cands, args.n)

    os.makedirs(OUT_DIR, exist_ok=True)
    path = os.path.join(OUT_DIR, args.out)
    with open(path, "w", encoding="utf-8") as f:
        json.dump(out, f, ensure_ascii=False, indent=1)

    print("selected %d -> %s" % (len(out), path))
    print("  classes:", Counter((e.get("cls") or "_global") for e in out)
          .most_common(12))
    calls_sel = Counter(e["n_calls"] for e in out)
    print("  selected call histogram:", dict(sorted(calls_sel.items())))
    for e in out[:12]:
        print("  %-9s %4dB c%d %-48s %s"
              % (e["addr"], e["size"], e["n_calls"], e["name"][:48],
                 e.get("cls")))


if __name__ == "__main__":
    sys.exit(main())
