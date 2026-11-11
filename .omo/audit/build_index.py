#!/usr/bin/env python3
"""Build audit index: ledger OK entries -> generated artifacts (read-only)."""
import json, os, glob, collections

REPO = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", ".."))
LEDGER = os.path.join(REPO, ".omo", "codegen_match", "status.json")
DB = os.path.join(REPO, ".omo", "decomp_batch")

led = json.load(open(LEDGER, encoding="utf-8"))
ok = {a.lower(): e for a, e in led.items() if e.get("status") == "OK"}
print("ledger OK:", len(ok))

index = {}  # addr -> list of artifact records
for path in glob.glob(os.path.join(DB, "**", "part_report.json"), recursive=True):
    d = os.path.dirname(path)
    try:
        j = json.load(open(path, encoding="utf-8"))
    except Exception as ex:
        print("ERR", path, ex); continue
    for r in j.get("results", []):
        a = r.get("addr", "").lower()
        if a in ok and r.get("verdict") == "MATCH":
            index.setdefault(a, []).append({
                "dir": d, "unit": r.get("unit"), "name": r.get("name"),
                "emitted": r.get("emitted"), "orig_size": r.get("orig_size"),
                "ours_size": r.get("ours_size"), "rule_violations": r.get("rule_violations"),
                "sites": r.get("sites"), "cls_src": r.get("cls_src"),
                "pathology": r.get("pathology"), "batch": r.get("batch"),
                "note": r.get("note"), "src": "part_report.json",
            })

for path in glob.glob(os.path.join(DB, "**", "batch_report.json"), recursive=True):
    d = os.path.dirname(path)
    try:
        j = json.load(open(path, encoding="utf-8"))
    except Exception as ex:
        print("ERR", path, ex); continue
    for r in j.get("results", []):
        a = r.get("addr", "").lower()
        if a in ok and r.get("verdict") == "MATCH":
            index.setdefault(a, []).append({
                "dir": d, "unit": r.get("unit"), "name": r.get("name"),
                "emitted": r.get("emitted"), "orig_size": r.get("orig_size"),
                "ours_size": r.get("ours_size"), "rule_violations": r.get("rule_violations"),
                "sites": r.get("sites"), "cls_src": r.get("cls_src"),
                "pathology": r.get("pathology"), "batch": r.get("batch"),
                "note": r.get("note"), "src": "batch_report.json",
            })

# mirror results
mp = os.path.join(REPO, ".omo", "agents", "mirror", "results.jsonl")
if os.path.exists(mp):
    for line in open(mp, encoding="utf-8"):
        line = line.strip()
        if not line:
            continue
        try:
            r = json.loads(line)
        except Exception:
            continue
        a = r.get("addr", "").lower()
        if a in ok and r.get("verdict") == "MATCH":
            index.setdefault(a, []).append({
                "dir": os.path.dirname(mp), "unit": r.get("receiver"), "name": r.get("name"),
                "emitted": r.get("ours_symbol"), "orig_size": r.get("orig_size"),
                "ours_size": r.get("ours_size"), "rule_violations": None,
                "sites": None, "cls_src": "mirror", "pathology": None, "batch": "mirror",
                "note": r.get("note"), "src": "mirror/results.jsonl",
            })

covered = len(index)
print("OK with MATCH artifact:", covered, "/", len(ok))
missing = sorted(set(ok) - set(index))
print("missing artifacts:", len(missing))
for a in missing[:20]:
    print("  MISS", a, ok[a].get("name"), ok[a].get("note"))

# choose newest dir per addr (mtime of dir)
def dkey(d):
    try: return os.path.getmtime(d)
    except Exception: return 0

best = {}
for a, recs in index.items():
    recs = sorted(recs, key=lambda r: (dkey(r["dir"]), r["src"] == "part_report.json"))
    best[a] = recs[-1]

json.dump({"index": index, "best": best}, open(os.path.join(os.path.dirname(__file__), "index.json"), "w", encoding="utf-8"), indent=1)

# stats
sz = collections.Counter()
for a, r in best.items():
    s = r.get("orig_size") or 0
    if s <= 6: sz["<=6"] += 1
    elif s <= 20: sz["7-20"] += 1
    elif s <= 50: sz["21-50"] += 1
    elif s <= 120: sz["51-120"] += 1
    else: sz[">120"] += 1
print("size buckets:", dict(sz))
rv = collections.Counter((r.get("rule_violations") or 0) for r in best.values())
print("rule_violations:", dict(sorted(rv.items())))
print("units:", len(set(r.get("unit") for r in best.values())))
print("top units:", collections.Counter(r.get("unit") for r in best.values()).most_common(15))
print("cls_src:", dict(collections.Counter(r.get("cls_src") for r in best.values())))
print("attempts distribution:", dict(sorted(collections.Counter(ok[a].get("attempts",0) for a in best).items())))
