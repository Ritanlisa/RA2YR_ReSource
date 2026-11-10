#!/usr/bin/env python3
"""reclass_r5.py -- R5 pathology reclassification + ledger cleanup (one-shot).

Implements report_r4.md §1.1 ruling on the existing ledger:

  1. NG entries whose pathology was cc_mismatch are re-derived with the
     NEW classify_diff (param-slot-offset / retn-N only). "First insn
     reads stack vs reads ECX" form differences land in eval_order.
     Evidence source = latest results.jsonl record per addr (it keeps
     both orig+ours first_diff; the ledger only stores the orig side).
  2. PENDING entries whose note says COMPILE_FAIL become status=
     COMPILE_FAIL (decided verdict, not pending work).
  3. Prints before/after counts + the eval_order candidate list.

Idempotent: re-running produces zero changes.
"""
import collections
import json
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", "..", ".."))
sys.path.insert(0, os.path.join(ROOT, "tools", "decomp_sys"))

from batch_run import classify_diff  # noqa: E402  (real classifier, not a copy)

LEDGER = os.path.join(ROOT, ".omo", "codegen_match", "status.json")
RESULTS = os.path.join(HERE, "results.jsonl")

FD_RE = re.compile(r"^\+(\d+)\s+(.*)$")


def parse_fd(s):
    m = FD_RE.match(s or "")
    if not m:
        return None
    return {"off": int(m.group(1)), "disasm": m.group(2).strip()}


def main():
    latest = {}
    with open(RESULTS, encoding="utf-8") as f:
        for line in f:
            line = line.strip()
            if not line:
                continue
            try:
                r = json.loads(line)
            except ValueError:
                continue
            if r.get("verdict"):
                latest[r["addr"].lower()] = r

    with open(LEDGER, encoding="utf-8") as f:
        ledger = json.load(f)

    before_status = collections.Counter(e["status"] for e in ledger.values())
    before_ng_path = collections.Counter(
        (e.get("note") or "").split("/")[-1]
        for e in ledger.values() if e["status"] == "NG")
    print("BEFORE status   :", dict(before_status))
    print("BEFORE NG path  :", dict(before_ng_path))

    # ---- 1. reclassify NG cc_mismatch with the new classifier
    reclassified = []
    cc_ng = [(a, e) for a, e in ledger.items()
             if e["status"] == "NG" and "cc_mismatch" in (e.get("note") or "")]
    for addr, e in cc_ng:
        r = latest.get(addr)
        fd = (r or {}).get("first_diff") or {}
        pair = (parse_fd(fd.get("orig")), parse_fd(fd.get("ours")))
        if pair[0] is None or pair[1] is None:
            print("  [skip] %s: no parseable first_diff pair in results.jsonl"
                  % addr)
            continue
        newp = classify_diff(pair)
        old_note = e["note"]
        e["note"] = e["note"].replace("cc_mismatch", newp)
        reclassified.append((addr, e.get("name"), newp, old_note,
                             fd.get("orig"), fd.get("ours")))
    print("\n--- reclassification (NG cc_mismatch, new classifier) ---")
    for addr, name, newp, old, o, b in reclassified:
        print("  %-10s %-40s cc_mismatch -> %-12s" % (addr, name, newp))
        print("             orig: %s" % o)
        print("             ours: %s" % b)

    # ---- 2. COMPILE_FAIL PENDING -> COMPILE_FAIL
    cf_moved = 0
    for a, e in ledger.items():
        if e["status"] == "PENDING" and "COMPILE_FAIL" in (e.get("note") or ""):
            e["status"] = "COMPILE_FAIL"
            cf_moved += 1

    after_status = collections.Counter(e["status"] for e in ledger.values())
    after_ng_path = collections.Counter(
        (e.get("note") or "").split("/")[-1]
        for e in ledger.values() if e["status"] == "NG")
    print("\nPENDING->COMPILE_FAIL moved: %d" % cf_moved)
    print("AFTER  status   :", dict(after_status))
    print("AFTER  NG path  :", dict(after_ng_path))
    assert before_status["NG"] == after_status["NG"], "NG total must not move"
    assert after_ng_path.get("cc_mismatch", 0) == 0, "stale cc_mismatch left"
    assert sum(before_status.values()) == sum(after_status.values())

    # ---- 3. eval_order candidate list (source-shape repair candidates)
    print("\n--- eval_order candidates (source-form repair pool; LIST ONLY) ---")
    for a, e in sorted(ledger.items()):
        if e["status"] == "NG" and (e.get("note") or "").endswith("/eval_order"):
            r = latest.get(a) or {}
            fd = r.get("first_diff") or {}
            print("  %-10s %-40s %s  vs  %s"
                  % (a, e.get("name"), fd.get("orig"), fd.get("ours")))

    with open(LEDGER, "w", encoding="utf-8") as f:
        json.dump(ledger, f, indent=1, ensure_ascii=False)
        f.write("\n")
    print("\nledger written: %s" % LEDGER)
    return 0


if __name__ == "__main__":
    sys.exit(main())
