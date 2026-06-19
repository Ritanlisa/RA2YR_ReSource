import json
from pathlib import Path

# Read substring results
d = json.load(open("tools/ida_substring_results.json"))
found = [r for r in d["results"] if r["address"]]
print(f"Substring pass: Found {len(found)} / {d['total']}")

print("\n=== Found via substring (first 30) ===")
for r in found[:30]:
    fname = Path(r["file"]).name
    mt = r.get("match_type", "?")
    print(f"  [{mt:20s}] {r['ida_match']:50s} -> {r['address']:10s}  ({fname}:{r['line']})")

# Also check exact match results
d2 = json.load(open("tools/ida_results.json"))
found2 = [r for r in d2["results"] if r["address"]]
print(f"\nExact pass: Found {len(found2)} / {d2['total']}")

# Merge
assigned = set()
all_found = []
for r in found:
    key = (r["file"], r["line"])
    if key not in assigned:
        assigned.add(key)
        all_found.append(r)
for r in found2:
    key = (r["file"], r["line"])
    if key not in assigned and r.get("address"):
        assigned.add(key)
        all_found.append(r)

print(f"\nMerged unique found: {len(all_found)}")

exact_count = sum(1 for r in all_found if r.get("match_type") is None)
substr_count = sum(1 for r in all_found if r.get("match_type") is not None)
print(f"  Exact matches: {exact_count}")
print(f"  Substring matches: {substr_count}")

merged = {
    "found": len(all_found),
    "total": d["total"],
    "exact_count": exact_count,
    "substr_count": substr_count,
    "results": all_found,
}
with open("tools/ida_results_merged.json", "w") as f:
    json.dump(merged, f, indent=2)
print(f"\nMerged results saved to tools/ida_results_merged.json")
