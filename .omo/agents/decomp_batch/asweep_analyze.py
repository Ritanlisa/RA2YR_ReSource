#!/usr/bin/env python3
"""asweep_analyze.py -- full A-layer sweep accounting (read-only).

Produces the numbers used by report_a_sweep.md:
  * sweep verdicts / compile rate / match rates
  * verdict x size-band table (A layer difficulty profile)
  * pathology histogram (sweep + size-band split for the top clusters)
  * COMPILE_FAIL first-error family histogram + cluster addresses
  * extern_reloc cluster evidence (address range, sizes, sample diff)
  * project-cumulative ledger totals (unique-address, last-record-wins)
"""
import json
import os
import re
from collections import Counter, defaultdict

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", "..", ".."))
STATE = os.path.join(ROOT, ".omo", "agents", "decomp_batch")
BATCH = os.path.join(STATE, "batch_asweep_A.json")
RESULTS = os.path.join(STATE, "results.jsonl")
LEDGER = os.path.join(ROOT, ".omo", "codegen_match", "status.json")

BANDS = [(1, 9), (10, 19), (20, 29), (30, 49), (50, 99), (100, 196)]


def band(sz):
    for lo, hi in BANDS:
        if lo <= sz <= hi:
            return "%d-%d" % (lo, hi)
    return "?"


def main():
    entries = json.load(open(BATCH, encoding="utf-8"))
    size = {e["addr"].lower(): e["size"] for e in entries}
    sset = set(size)

    last = {}
    with open(RESULTS, encoding="utf-8") as f:
        for line in f:
            line = line.strip()
            if not line:
                continue
            try:
                r = json.loads(line)
            except ValueError:
                continue
            if r.get("addr") and r.get("verdict"):
                last[r["addr"].lower()] = r

    sw = {a: last[a] for a in sset if a in last}
    print("sweep decided: %d/%d" % (len(sw), len(sset)))
    vc = Counter(r["verdict"] for r in sw.values())
    print("verdicts:", dict(vc))

    # verdict x size band
    print("\n-- verdict x size band --")
    tab = defaultdict(Counter)
    for a, r in sw.items():
        tab[band(size[a])][r["verdict"]] += 1
    hdr = ["band", "n", "MATCH", "MISMATCH", "COMPILE_FAIL", "other",
           "compile%", "match/dec%"]
    print(" | ".join(hdr))
    for lo, hi in BANDS:
        b = "%d-%d" % (lo, hi)
        c = tab[b]
        n = sum(c.values())
        dec = c["MATCH"] + c["MISMATCH"]
        print(" | ".join(map(str, [
            b, n, c["MATCH"], c["MISMATCH"], c["COMPILE_FAIL"],
            n - c["MATCH"] - c["MISMATCH"] - c["COMPILE_FAIL"],
            round(100.0 * dec / max(1, n), 1),
            round(100.0 * c["MATCH"] / max(1, dec), 1)])))

    # pathology
    pc = Counter(r.get("pathology") for r in sw.values()
                 if r.get("pathology"))
    print("\n-- pathology (sweep MISMATCH) --")
    for k, v in pc.most_common():
        print("%-14s %5d" % (k, v))
    print("\n-- pathology x band --")
    ptab = defaultdict(Counter)
    for a, r in sw.items():
        if r.get("pathology"):
            ptab[r["pathology"]][band(size[a])] += 1
    for k, _ in pc.most_common(6):
        print("%-14s %s" % (k, dict(ptab[k])))

    # extern_reloc evidence
    ex = [(a, r) for a, r in sw.items() if r.get("pathology") == "extern_reloc"]
    if ex:
        rng = [int(a, 16) for a, _ in ex]
        szs = [size[a] for a, _ in ex]
        print("\n-- extern_reloc cluster --")
        print("n=%d  addr 0x%x..0x%x  size %d..%d mean %.1f"
              % (len(ex), min(rng), max(rng), min(szs), max(szs),
                 sum(szs) / float(len(szs))))
        print("bands:", dict(Counter(band(s) for s in szs)))
        k = 3
        for a, r in ex[:k]:
            fd = r.get("first_diff") or {}
            print("  %s %-28s orig[%s] ours[%s]"
                  % (a, r.get("emitted") or r.get("name") or "?",
                     fd.get("orig"), fd.get("ours")))

    # compile-fail families
    cf = [r for r in sw.values() if r["verdict"] == "COMPILE_FAIL"]
    fam = Counter()
    for r in cf:
        m = re.search(r"\b(C\d{4})\b", r.get("note") or "")
        fam[m.group(1) if m else "other"] += 1
    print("\n-- COMPILE_FAIL first-error families (n=%d) --" % len(cf))
    for k, v in fam.most_common(12):
        print("%-8s %5d" % (k, v))
    # C2100 unit cluster
    vec = [r for r in cf if re.search(r"_VectorClass|_DynamicVectorClass",
                                      r.get("note") or "")]
    if vec:
        addrs = [int(r["addr"], 16) for r in vec]
        print("  vector-template units: %d  addr 0x%x..0x%x"
              % (len(vec), min(addrs), max(addrs)))
    # sample notes per family
    seen = set()
    print("  samples:")
    for r in cf:
        m = re.search(r"\b(C\d{4})\b", r.get("note") or "")
        code = m.group(1) if m else "other"
        if code in seen:
            continue
        seen.add(code)
        print("   %-7s %s | %s" % (code, r["addr"],
                                   (r.get("note") or "")[:120]))

    # cumulative project totals
    led = {}
    if os.path.exists(LEDGER):
        led = json.load(open(LEDGER, encoding="utf-8"))
    lstat = Counter(v.get("status") for v in led.values())
    all_match = sum(1 for r in last.values() if r["verdict"] == "MATCH")
    all_dec = sum(1 for r in last.values()
                  if r["verdict"] in ("MATCH", "MISMATCH"))
    print("\n-- project cumulative --")
    print("unique functions with verdict: %d" % len(last))
    print("unique MATCH: %d   unique MISMATCH: %d"
          % (all_match, all_dec - all_match))
    print("ledger: %d entries %s" % (len(led), dict(lstat)))
    print("ledger OK(MATCH) %d  NG %d  COMPILE_FAIL %d  PENDING %d"
          % (lstat.get("OK", 0), lstat.get("NG", 0),
             lstat.get("COMPILE_FAIL", 0), lstat.get("PENDING", 0)))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
