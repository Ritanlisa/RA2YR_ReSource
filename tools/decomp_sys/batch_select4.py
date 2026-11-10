#!/usr/bin/env python3
"""batch_select4.py -- DECOMP-2 round-4 batch composition (2026-11-10).

Round-4 expansion over batch_select3:
  * size 150..<500B (medium functions -- the round's stated target band)
  * up to 4 internal calls (pass_callees declares + rewrites callees)
  * full_export block with a NON-EMPTY Hex-Rays body
  * class methods preferred, per-class cap
  * ledger/r4 dedupe: every address already accounted (status.json or
    results.jsonl) is excluded from selection
  * hard filters for families with a structurally broken translation path
    (numeric method names, `unknown` class, template-instantiation class
    names, `sub [esp+arg_N],N; jmp` adjustor thunks, invalid identifiers)

Output: .omo/agents/decomp_batch/batch400_r4.json
Usage:  python tools/decomp_sys/batch_select4.py [--n 400] [--cap 10]
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
RESULTS = os.path.join(OUT_DIR, "results.jsonl")

IDENT_RE = re.compile(r"^[A-Za-z_]\w*$")
TPL_CLS_RE = re.compile(r"_ptr_|@|^\d|<|>")
THUNK_RE = re.compile(r"^sub\s+(?:dword\s+ptr\s+)?\[esp\s*\+\s*arg_0\]",
                      re.I)


def load_decided():
    done = set()
    if os.path.exists(LEDGER):
        for a in json.load(open(LEDGER, encoding="utf-8")):
            done.add(a.lower())
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
                done.add(r["addr"].lower())
    return done


def is_thunk(dis):
    """2-instruction MI adjustor thunk (`sub [esp+arg_0],N; jmp Callee`)."""
    lines = [re.sub(r"^//\s+[0-9A-Fa-f]+:\s*", "", ln).strip()
             for ln in dis.splitlines()
             if re.match(r"^//\s+[0-9A-Fa-f]+:", ln)]
    if not lines:
        return False
    body = [x for x in lines if not re.match(r"^retn?$", x)]
    if len(body) <= 3 and body and THUNK_RE.match(body[0]) and \
            any(x.startswith("jmp") for x in body):
        return True
    return False


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--n", type=int, default=400)
    ap.add_argument("--cap", type=int, default=10,
                    help="max candidates per class")
    ap.add_argument("--min-size", type=int, default=150)
    ap.add_argument("--max-size", type=int, default=500)
    ap.add_argument("--max-calls", type=int, default=4)
    ap.add_argument("--max-indirect", type=int, default=2)
    ap.add_argument("--reserve-nonleaf", type=int, default=240,
                    help="prefer >=N functions with at least one call")
    ap.add_argument("--out", default="batch400_r4.json")
    args = ap.parse_args()

    exports = pilot_select.parse_exports()
    sig = json.load(open(os.path.join(ROOT, "signals.json"),
                         encoding="utf-8"))
    decided = load_decided()
    print("already decided (ledger+results): %d" % len(decided))

    _idx = pseudo.load_index()
    pseudo.load_index = lambda: _idx

    cands = []
    drop = Counter()
    for addr_s, s in sig["symbols"].items():
        if s.get("kind") != "function":
            continue
        name = s.get("name") or ""
        if "::" not in name:
            drop["global"] += 1
            continue
        cls, method = name.split("::", 1)
        if not IDENT_RE.match(method) or not IDENT_RE.match(cls):
            drop["bad_ident"] += 1
            continue
        if cls == "unknown" or TPL_CLS_RE.search(cls):
            drop["bad_cls"] += 1
            continue
        addr = int(s.get("address", addr_s), 16)
        a_low = "0x%x" % addr
        ev = exports.get(addr)
        if ev is None:
            drop["no_export"] += 1
            continue
        size = ev["size"]
        if size < args.min_size or size >= args.max_size:
            drop["size"] += 1
            continue
        if is_thunk(ev["dis"]):
            drop["thunk"] += 1
            continue
        if "??_7" in ev["dis"]:
            # vtable-install store: orig is `mov [reg], offset ??_7...`;
            # our reloc key can never equal the mangled vtable symbol, so
            # these are structurally unmatched (constructor family).
            drop["vt_install"] += 1
            continue
        sc, feats = pilot_select.score_one(name, ev, None)
        nc = feats["n_calls"]
        if nc > args.max_calls:
            drop["too_many_calls"] += 1
            continue
        if feats["n_indirect_calls"] > args.max_indirect:
            drop["too_many_indirect"] += 1
            continue
        if a_low in decided:
            drop["decided"] += 1
            continue
        try:
            ex = pseudo.fetch(a_low)
        except (KeyError, AttributeError, IndexError):
            drop["no_block"] += 1
            continue
        if not ex.body_lines:
            drop["no_pseudo"] += 1
            continue
        cands.append({
            "addr": a_low, "name": name, "cls": cls, "size": size,
            "family": "fresh4", "score": sc, "n_calls": nc,
            "n_indirect": feats["n_indirect_calls"],
            "n_ds": feats["n_ds_refs"], "no_float": feats["no_float"],
            "placeholder": bool(re.search(
                r"^(sub_[0-9A-Fa-f]+|nullsub|j_|loc_|GetMember\d+|"
                r".*_field_0x.*|field_.*|__pad.*)", method)),
        })

    print("pool = %d   drops: %s" % (len(cands), dict(drop)))
    print("  call histogram:", dict(sorted(
        Counter(c["n_calls"] for c in cands).items())))

    def key(c):
        # medium-function difficulty ordering: fewer calls, no float, no ds,
        # smaller body first; placeholder names last
        return (c["n_calls"] > 0, c["placeholder"], not c["no_float"],
                c["n_ds"], c["size"], -c["score"], c["addr"])

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
            if quota.get(c["cls"], 0) >= args.cap:
                continue
            quota[c["cls"]] = quota.get(c["cls"], 0) + 1
            picked.add(c["addr"])
            out.append({k: c[k] for k in
                        ("addr", "name", "cls", "size", "family", "n_calls",
                         "no_float", "n_ds")})

    # phase 1: guarantee call-bearing representation (pass_callees path);
    # phase 2: fill with the rest
    nonleaf = [c for c in cands if c["n_calls"] >= 1]
    try_fill(nonleaf, args.reserve_nonleaf)
    try_fill(cands, args.n)

    path = os.path.join(OUT_DIR, args.out)
    with open(path, "w", encoding="utf-8") as f:
        json.dump(out, f, ensure_ascii=False, indent=1)
    print("selected %d -> %s" % (len(out), path))
    print("  classes:", Counter(e["cls"] for e in out).most_common(10))
    print("  call histogram:", dict(sorted(
        Counter(e["n_calls"] for e in out).items())))
    print("  size: min=%d max=%d mean=%.0f" % (
        min(e["size"] for e in out), max(e["size"] for e in out),
        sum(e["size"] for e in out) / max(1, len(out))))
    for e in out[:12]:
        print("  %-9s %4dB c%d %-44s %s" % (
            e["addr"], e["size"], e["n_calls"], e["name"][:44], e["cls"]))


if __name__ == "__main__":
    sys.exit(main())
