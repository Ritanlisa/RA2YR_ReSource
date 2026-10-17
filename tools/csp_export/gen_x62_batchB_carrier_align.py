#!/usr/bin/env python3
"""X62 Batch B — carrier slot alignment (mechanism 3, til wins per L442).

Renames displaced carrier slot names to the til authority member name:
  StreamClass    __pad_008       @0x8 -> m_Position   (til m_Position@8+4)
  TechnoClass    objectTypeFlags @0x24 -> occupant    (til occupant@36+4)
  ObjectClass    objectTypeFlags @0x24 -> occupant    (carrier in _tree_full_e4.hpp)
  BuildingClass  objectTypeFlags @0x24 -> occupant

Only the single member-declaration line inside the named struct block is
touched (offset comment kept verbatim, type/size unchanged) -> sizeof
invariant preserved by construction and re-proven by x60_invariant_proof.py.

Usage:
  python tools/csp_export/gen_x62_batchB_carrier_align.py          # dry run
  python tools/csp_export/gen_x62_batchB_carrier_align.py --apply
"""
import argparse, re, sys, json
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
E4C = ROOT / "src" / "e4" / "classes"
TREE_FULL = E4C / "_tree_full_e4.hpp"
LEDGER = ROOT / ".omo" / "evidence" / "optimization" / "x62" / "x62_batchB_ledger.json"

ap = argparse.ArgumentParser()
ap.add_argument("--apply", action="store_true")
ARGS = ap.parse_args()

EDITS = [
    # (file, struct, old_name, new_name, offset_hex)
    (E4C / "StreamClass_e4.hpp", "StreamClass", "__pad_008", "m_Position", "0x8"),
    (E4C / "TechnoClass_e4.hpp", "TechnoClass", "objectTypeFlags", "occupant", "0x24"),
    (TREE_FULL, "ObjectClass", "objectTypeFlags", "occupant", "0x24"),
    (E4C / "BuildingClass_e4.hpp", "BuildingClass", "objectTypeFlags", "occupant", "0x24"),
]

MEMBER_RE = re.compile(
    r"^(?P<indent>\s*)(?P<ty>[A-Za-z_][\w :]*?\**\s*)(?P<name>\w+)\s*(?P<arr>\[[^\]]*\])?;\s*(?P<comment>//.*)?$")

results = []
for path, struct, old, new, off in EDITS:
    text = path.read_bytes().decode("latin-1")
    lines = text.split("\n")
    # locate struct block
    sopen = None
    for i, ln in enumerate(lines):
        if re.match(r"^\s*struct\s+" + re.escape(struct) + r"\s*(?::[^{]*)?\{\s*$", ln):
            sopen = i
            break
    if sopen is None:
        results.append({"file": str(path), "struct": struct, "status": "STRUCT-NOT-FOUND"})
        continue
    depth = 1
    hits = []
    j = sopen + 1
    while j < len(lines) and depth > 0:
        depth += lines[j].count("{") - lines[j].count("}")
        if depth <= 0:
            break
        m = MEMBER_RE.match(lines[j])
        if m and m.group("name") == old:
            com = m.group("comment") or ""
            if off in com.replace("0X", "0x"):
                hits.append((j, lines[j]))
        j += 1
    if len(hits) != 1:
        results.append({"file": str(path), "struct": struct, "status": f"HITS={len(hits)}",
                        "lines": [h[1].strip() for h in hits]})
        continue
    j, oldline = hits[0]
    m = MEMBER_RE.match(oldline)
    # replace ONLY the name token span: keep all other bytes verbatim
    s = m.start("name")
    e = m.end("name")
    newline = oldline[:s] + new + oldline[e:]
    results.append({"file": str(path), "struct": struct, "status": "PLANNED",
                    "line": j + 1, "old": oldline.strip(), "new": newline.strip()})
    lines[j] = newline
    if ARGS.apply:
        path.write_bytes("\n".join(lines).encode("latin-1"))

ok = sum(1 for r in results if r["status"] == "PLANNED")
print(f"planned renames: {ok}/{len(EDITS)}" + ("  APPLIED" if ARGS.apply else "  (dry run)"))
for r in results:
    print(f"  {r['status']:18s} {Path(r['file']).name}:{r.get('line','-')} {r['struct']}.{old if False else ''}"
          + (f"  {r.get('old','')} -> {r.get('new','')}" if r['status'] == 'PLANNED' else ""))

LEDGER.write_text(json.dumps({"applied": ARGS.apply, "results": results},
                             ensure_ascii=False, indent=1), encoding="utf-8")
print(f"ledger -> {LEDGER}")
