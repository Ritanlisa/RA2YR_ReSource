import json
from pathlib import Path

d = json.load(open("tools/ida_results.json"))
found = [r for r in d["results"] if r["address"]]
print(f"Found: {len(found)} / {d['total']}")

print("\n=== Found addresses ===")
for r in found:
    fname = Path(r["file"]).name
    print(f"  {r['ida_match']:50s} -> {r['address']:10s}  ({fname}:{r['line']})")

# Show not-found patterns for analysis
print(f"\n=== Not found sample (first 30) ===")
nf = [r for r in d["results"] if not r["address"]]
for r in nf[:30]:
    patterns = r.get("ida_patterns", [])
    pat_str = " | ".join(f"{t}:{n}" for t, n in patterns[:2])
    print(f"  [{r['class_name']}] {r['func_name']}()  patterns=[{pat_str}]")

# Pattern analysis
print(f"\n=== Pattern type stats ===")
from collections import Counter
types = Counter()
for r in nf:
    for t, n in r.get("ida_patterns", []):
        types[t] += 1
for t, c in types.most_common():
    print(f"  {t}: {c}")
