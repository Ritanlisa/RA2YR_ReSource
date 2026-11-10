#!/usr/bin/env python3
"""ledger.py -- Phase A codegen-match progress ledger.

Backing store: .omo/codegen_match/status.json
  { "0xADDR": {"name":..., "status": "OK|NG|PENDING", "first_diff":..., "attempts": N} }

Usage:
  python tools/codegen_match/ledger.py add 0x4072c0 --name "DListNode::Init" --status OK
  python tools/codegen_match/ledger.py add 0x5f6560 --name "Math::DistSq2D" --status NG --first-diff "..."
  python tools/codegen_match/ledger.py stats
  python tools/codegen_match/ledger.py show 0x4072c0
  python tools/codegen_match/ledger.py list
"""
import argparse
import json
import os
import sys

REPO = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", ".."))
LEDGER = os.path.join(REPO, ".omo", "codegen_match", "status.json")


def load():
    if os.path.exists(LEDGER):
        with open(LEDGER, encoding="utf-8") as f:
            return json.load(f)
    return {}


def save(d):
    os.makedirs(os.path.dirname(LEDGER), exist_ok=True)
    with open(LEDGER, "w", encoding="utf-8") as f:
        json.dump(d, f, indent=1, sort_keys=True)


def record(addr, name=None, status=None, first_diff=None, note=None):
    d = load()
    a = addr.lower()
    if not a.startswith("0x"):
        a = "0x" + a
    e = d.get(a, {"name": name or "?", "status": "PENDING", "first_diff": None, "attempts": 0})
    if name:
        e["name"] = name
    if status:
        e["status"] = status
    if first_diff is not None:
        e["first_diff"] = first_diff
    if note:
        e["note"] = note
    e["attempts"] = int(e.get("attempts", 0)) + 1
    d[a] = e
    save(d)
    print("[ledger] %s %s -> %s (attempt %d)" % (a, e["name"], e["status"], e["attempts"]))
    return e


def stats():
    d = load()
    c = {"OK": 0, "NG": 0, "PENDING": 0}
    for e in d.values():
        c[e.get("status", "PENDING")] = c.get(e.get("status", "PENDING"), 0) + 1
    total = len(d)
    print("[ledger] %s" % LEDGER)
    print("[ledger] total=%d  OK=%d  NG=%d  PENDING=%d" % (total, c["OK"], c["NG"], c["PENDING"]))
    for st in ("NG", "PENDING"):
        subset = [(a, e) for a, e in sorted(d.items()) if e.get("status") == st]
        for a, e in subset[:20]:
            fd = e.get("first_diff")
            print("  %-10s %-12s %-40s %s" % (a, st, e.get("name"), (fd or "")[:90]))
        if len(subset) > 20:
            print("  ... and %d more %s" % (len(subset) - 20, st))
    return c


def main():
    ap = argparse.ArgumentParser(description="codegen match ledger")
    sub = ap.add_subparsers(dest="cmd", required=True)
    p_add = sub.add_parser("add")
    p_add.add_argument("addr")
    p_add.add_argument("--name")
    p_add.add_argument("--status", choices=["OK", "NG", "PENDING"], required=True)
    p_add.add_argument("--first-diff", dest="first_diff")
    p_add.add_argument("--note")
    sub.add_parser("stats")
    p_show = sub.add_parser("show")
    p_show.add_argument("addr")
    sub.add_parser("list")
    args = ap.parse_args()

    if args.cmd == "add":
        record(args.addr, args.name, args.status, args.first_diff, args.note)
    elif args.cmd == "stats":
        stats()
    elif args.cmd == "show":
        d = load()
        a = args.addr.lower()
        a = a if a.startswith("0x") else "0x" + a
        print(json.dumps(d.get(a, {}), indent=1))
    else:
        d = load()
        for a in sorted(d):
            e = d[a]
            print("  %-10s %-8s %-40s attempts=%d" % (a, e.get("status"), e.get("name"), e.get("attempts", 0)))
    return 0


if __name__ == "__main__":
    sys.exit(main())
