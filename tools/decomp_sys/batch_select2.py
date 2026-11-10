#!/usr/bin/env python3
"""batch_select2.py -- DECOMP-2 round-2 batch composition (2026-11-10).

Composes exactly N = 5 pilots + (N-5) fresh candidates:

  * pilots   -- the five functions the user designated for re-verification
  * candidates -- signals.json functions filtered to
        - leaf (no calls / no ds: refs; pilot_select.score_one features)
        - byte size 4..<120
        - full_export block with a NON-EMPTY Hex-Rays body
        - class methods (`Class::Method`) preferred and never ICF-fold /
          thunk families; per-class cap keeps one family from dominating
        - functions not already decided in .omo/codegen_match/status.json
          sort first (fresh information gain), then the rest

Output: .omo/agents/decomp_batch/batch100.json
Usage:  python tools/decomp_sys/batch_select2.py [--n 100] [--cap 10]
"""
import argparse
import json
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", ".."))
sys.path.insert(0, HERE)
sys.path.insert(0, ROOT)
sys.path.insert(0, os.path.join(ROOT, ".omo", "agents", "phasea"))

import pilot_select  # noqa: E402
import pseudo        # noqa: E402

OUT_DIR = os.path.join(ROOT, ".omo", "agents", "decomp_batch")
LEDGER = os.path.join(ROOT, ".omo", "codegen_match", "status.json")

PILOTS = [
    ("0x5B2990", "Math::Abs16Cmp"),
    ("0x5F6560", "Math::DistSq2D"),
    ("0x401940", "ObjectClass::GetMember06"),
    ("0x486380", "Cell::IsEmpty"),
    ("0x4870D0", "Cell::IsPassableOffset"),
]

FOLD_RE = re.compile(r"^(COMStub|Thunk_.*|.*Thunk_.*|vt\d+|nullsub|j_|loc_)")
PLACEHOLDER_RE = re.compile(
    r"^(sub_[0-9A-Fa-f]+|nullsub_?\d*|j_.*|loc_.*|.*[Vv]t\d+.*"
    r"|(?:Get|Set)Member\d+|.*_field_0x[0-9A-Fa-f]+.*|field_.*"
    r"|__pad.*|unknown\d*)$")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--n", type=int, default=100)
    ap.add_argument("--cap", type=int, default=10,
                    help="max candidates per class")
    args = ap.parse_args()

    exports = pilot_select.parse_exports()
    sig = json.load(open(os.path.join(ROOT, "signals.json"), encoding="utf-8"))
    decided = {}
    if os.path.exists(LEDGER):
        decided = json.load(open(LEDGER, encoding="utf-8"))
    decided_addrs = {a.lower() for a in decided}

    pilot_addrs = {a.lower() for a, _ in PILOTS}
    pilots = []
    for a, nm in PILOTS:
        try:
            ex = pseudo.fetch(a)
        except KeyError:
            print("WARN pilot %s has no export block" % a)
            continue
        pilots.append({
            "addr": a, "name": ex.name, "cls": ex.name.split("::")[0]
            if "::" in ex.name else None, "size": ex.size,
            "family": "pilot", "pilot": True,
        })
    print("pilots: %d/%d export blocks found" % (len(pilots), len(PILOTS)))

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
        if a_low in pilot_addrs:
            continue
        ev = exports.get(addr)
        if ev is None or ev["size"] < 4 or ev["size"] >= 120:
            continue
        sc, feats = pilot_select.score_one(name, ev, None)
        if not feats["leaf"]:
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
            "size": ev["size"], "family": "fresh",
            "score": sc, "class_method": bool(cls),
            "placeholder": bool(PLACEHOLDER_RE.match(name)),
            "already_decided": a_low in decided_addrs,
            "prio": prio, "ledger_status": led.get("status"),
            "has_pseudo": True,
        })

    print("pool(leaf + <120B + pseudo) = %d  (dropped %d empty-body)"
          % (len(cands), n_no_pseudo))
    cm = sum(1 for c in cands if c["class_method"])
    print("  class methods: %d  placeholders: %d  already-decided: %d"
          % (cm, sum(1 for c in cands if c["placeholder"]),
             sum(1 for c in cands if c["already_decided"])))

    # recovery-first (ledger PENDING/NG), then fresh, then already-OK;
    # class methods first, non-placeholder names first,
    # smaller before larger, score desc as tie-break
    def key(c):
        return (c["prio"], not c["class_method"],
                c["placeholder"], c["size"], -c["score"], c["addr"])

    cands.sort(key=key)
    quota = {}
    out = list(pilots)
    picked = {p["addr"] for p in pilots}
    for c in cands:
        if len(out) >= args.n:
            break
        if c["addr"] in picked:
            continue
        cls = c["cls"] or "_global"
        if quota.get(cls, 0) >= args.cap:
            continue
        quota[cls] = quota.get(cls, 0) + 1
        picked.add(c["addr"])
        out.append({k: c[k] for k in
                    ("addr", "name", "cls", "size", "family")})

    os.makedirs(OUT_DIR, exist_ok=True)
    path = os.path.join(OUT_DIR, "batch100.json")
    with open(path, "w", encoding="utf-8") as f:
        json.dump(out, f, ensure_ascii=False, indent=1)

    print("selected %d -> %s" % (len(out), path))
    print("family mix:", {})
    from collections import Counter
    print("  classes:", Counter((e.get("cls") or "_global") for e in out)
          .most_common(12))
    for e in out[:12]:
        print("  %-9s %4dB %-48s %s"
              % (e["addr"], e["size"], e["name"][:48], e.get("cls")))


if __name__ == "__main__":
    sys.exit(main())
