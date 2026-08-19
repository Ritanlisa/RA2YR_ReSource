"""Generate scope_manifest.md from Task 1+2+3 outputs."""
import json
from pathlib import Path
from collections import defaultdict

BASE = Path(__file__).parent

with open(BASE / "header_classification.json", encoding="utf-8") as f:
    hc = json.load(f)
with open(BASE / "class_hierarchy_order.json", encoding="utf-8") as f:
    cho = json.load(f)

# Same wave logic as gen_scorecard.py
DIR_WAVE = {
    "src/core": 1, "src/app": 13, "src/entity": 6, "src/structure": 7,
    "src/type": 6, "src/object": 8, "src/system": 10, "src/render": 11,
    "src/house": 12, "src/network": 12, "src/team": 12, "src/misc": 12,
    "src/ui": 12, "src/wdt": 13,
}
FILE_WAVE_OVERRIDES = {
    "src/object/abstract.hpp": 9, "src/object/object.hpp": 9,
    "src/type/abstract_type.hpp": 9, "src/type/type_classes.hpp": 9,
    "src/type/techno_type.hpp": 8, "src/type/object_type.hpp": 8,
    "src/object/techno.hpp": 8, "src/object/foot.hpp": 8,
    "src/object/mission.hpp": 8, "src/object/radio.hpp": 8,
    "src/fundamentals.hpp": 1,
}
STUB_WAVE_OVERRIDES = {
    "src/type/anim_type.hpp": 5, "src/type/bullet_type.hpp": 5,
    "src/type/particle_type.hpp": 5, "src/type/particle_system_type.hpp": 5,
    "src/type/overlay_type.hpp": 5, "src/type/smudge_type.hpp": 5,
    "src/type/terrain_type.hpp": 5, "src/type/building_type.hpp": 5,
    "src/type/infantry_type.hpp": 5, "src/type/unit_type.hpp": 5,
    "src/type/aircraft_type.hpp": 5, "src/type/weapon_type.hpp": 5,
    "src/type/warhead_type.hpp": 5,
    "src/entity/anim.hpp": 4, "src/entity/bullet.hpp": 4,
    "src/entity/particle.hpp": 4, "src/entity/particle_system.hpp": 4,
    "src/entity/overlay.hpp": 4, "src/entity/smudge.hpp": 4,
    "src/entity/terrain.hpp": 4, "src/entity/tiberium.hpp": 4,
    "src/entity/tube.hpp": 4, "src/entity/wave.hpp": 4,
    "src/entity/voxel_anim.hpp": 4, "src/entity/voxel.hpp": 4,
}
WAVE_NAMES = {
    1: "Foundation (core types, enums, math)",
    4: "Entity Instances (BulletClass, AnimClass, Particle, etc.)",
    5: "Entity Types (individual type headers)",
    6: "Consolidated Type + Entity Headers",
    7: "Structure Classes (Building, Infantry, Unit, Aircraft)",
    8: "Mid-Hierarchy Chain (Foot, Techno, Radio, Mission, TechnoType, ObjectType)",
    9: "Base Classes (ObjectClass, AbstractTypeClass, AbstractClass, type_classes.hpp)",
    10: "System Classes (cell, map, scenario, tactical, factory, radar, ini, files, mix)",
    11: "Render Classes (display, surface, movie, shp, text, voxel, palette, fog, bounce, bink)",
    12: "Support (house, network, team, misc, ui -- parallelizable)",
    13: "Final Integration (app, WDT, verification)",
}

NEW_HEADERS_NEEDED = [
    "RadSiteClass",
    "EBolt",
    "BuildingLightClass",
    "WaypointClass",
    "LayerClass",
    "Checksummer",
    "RepeatableTimerStruct",
    "ScoreStruct",
    "BaseClass",
    "BaseNodeClass",
    "DropshipStruct",
    "NodeNameType",
]


def get_wave(fp):
    if fp in FILE_WAVE_OVERRIDES:
        return FILE_WAVE_OVERRIDES[fp]
    if fp in STUB_WAVE_OVERRIDES:
        return STUB_WAVE_OVERRIDES[fp]
    for d, w in DIR_WAVE.items():
        if fp.startswith(d):
            return w
    return 13


# Categorize
in_scope = []   # PARTIAL + STUB
out_complete = []
out_utility = []

for f in hc["files"]:
    fp = f["file_path"]
    wave = get_wave(fp)
    if f["classification"] in ("PARTIAL", "STUB"):
        in_scope.append((fp, wave, f))
    elif f["classification"] == "COMPLETE":
        out_complete.append((fp, f))
    elif f["classification"] == "UTILITY":
        out_utility.append((fp, f))

# Group in-scope by directory
by_dir = defaultdict(list)
for fp, wave, f in in_scope:
    d = str(Path(fp).parent).replace("\\", "/")
    by_dir[d].append((fp, wave, f))

# Group by wave for task assignment section
by_wave = defaultdict(list)
for fp, wave, f in in_scope:
    by_wave[wave].append((fp, f))


# ── Build markdown ──
lines = []
lines.append("# Scope Manifest — RA2YR ReSource Header Completion")
lines.append("")
lines.append(f"> Generated: 2026-06-17 | Sources: header_classification.json + class_hierarchy_order.json")
lines.append(f"> In scope: {len(in_scope)} files (PARTIAL + STUB) | Out of scope: {len(out_complete) + len(out_utility)} files (COMPLETE + UTILITY)")
lines.append(f"> Total unknown_ fields to resolve: {hc['total_unknown_fields']} | Total stub methods to implement: {hc['total_stub_methods']}")
lines.append("")

# ── PRE-REQUISITE ──
lines.append("## ⚠️ Pre-Requisite: Address Comment Audit")
lines.append("")
lines.append("**CRITICAL**: Task 3 discovered that `// 0xADDR` comments in `src/system/map.hpp` are **incorrect**.")
lines.append("For example, `IsVisible@0x4ACAC0` is actually `ProcessVisibilityFlags`. ")
lines.append("This means address comments in other files may also be wrong. ")
lines.append("**Before any Wave begins**, audit and correct all `// 0x` address comments using IDA verification:")
lines.append("")
lines.append("| File | Suspect | Action |")
lines.append("|------|---------|--------|")
lines.append("| `src/system/map.hpp` | 59 address comments — at least 1 known wrong | Full IDA cross-reference audit |")
lines.append("| `src/system/scenario.hpp` | 28 address comments | Spot-check top 5 by xref count |")
lines.append("| `src/object/techno.hpp` | 29 address comments | Spot-check top 5 by xref count |")
lines.append("| `src/structure/building.hpp` | 15 address comments | Audit all |")
lines.append("| `src/object/object.hpp` | 11 address comments | Audit all |")
lines.append("| `src/object/foot.hpp` | 8 address comments | Audit all |")
lines.append("| `src/misc/rules.hpp` | 24 address comments | Audit all (COMPLETE file but comments may mislead) |")
lines.append("| `src/network/multiplayer.hpp` | 50 address comments | Spot-check top 5 |")
lines.append("| `src/ui/mouse.hpp` | 10 address comments | Audit all |")
lines.append("| `src/system/tactical.hpp` | 10 address comments | Audit all |")
lines.append("| `src/system/cell.hpp` | 7 address comments | Audit all |")
lines.append("| `src/network/connection.hpp` | 19 address comments | Spot-check top 5 |")
lines.append("| `src/house/house.hpp` | 1 address comment | Verify |")
lines.append("")

# ── IN SCOPE ──
lines.append("---")
lines.append("")
lines.append("## 📋 IN SCOPE (97 files — PARTIAL + STUB)")
lines.append("")
lines.append("These files need work: resolve unknown_ fields, replace stubs with real implementations, add address comments.")
lines.append("")

for dirpath in sorted(by_dir.keys()):
    entries = sorted(by_dir[dirpath], key=lambda x: x[0])
    n_partial = sum(1 for _, _, f in entries if f["classification"] == "PARTIAL")
    n_stub = sum(1 for _, _, f in entries if f["classification"] == "STUB")
    total_u = sum(f["unknown_count"] for _, _, f in entries)
    total_s = sum(f["stub_count"] for _, _, f in entries)
    lines.append(f"### `{dirpath}/` ({len(entries)} files: {n_partial} PARTIAL, {n_stub} STUB, {total_u} unknown_, {total_s} stubs)")
    lines.append("")
    lines.append("| File | Status | Classes | unknown_ | Stubs | Impl | Wave |")
    lines.append("|------|--------|---------|----------|-------|------|------|")
    for fp, wave, f in entries:
        name = Path(fp).name
        cls = f["class_count"]
        u = f["unknown_count"]
        s = f["stub_count"]
        impl = f.get("implemented_count", 0)
        status = "PARTIAL" if f["classification"] == "PARTIAL" else "STUB"
        lines.append(f"| `{name}` | {status} | {cls} | {u} | {s} | {impl} | Wave {wave} |")
    lines.append("")

# ── OUT SCOPE ──
lines.append("---")
lines.append("")
lines.append("## ✅ OUT OF SCOPE (19 files — COMPLETE + UTILITY)")
lines.append("")
lines.append("These files need no further work for the header completion phase.")
lines.append("")

lines.append("### COMPLETE (4 files) — All members named, no stubs, all implementations present")
lines.append("")
lines.append("| File | Classes | Reason |")
lines.append("|------|---------|--------|")
for fp, f in sorted(out_complete):
    name = Path(fp).name
    cls = f["class_count"]
    reason = f.get("notes", "All members named, no stubs, implementations present")
    lines.append(f"| `{name}` | {cls} | {reason} |")
lines.append("")

lines.append("### UTILITY (15 files) — No game class definitions (enums, infrastructure, configs)")
lines.append("")
lines.append("| File | Type | Reason |")
lines.append("|------|------|--------|")
for fp, f in sorted(out_utility):
    name = Path(fp).name
    typ = "enums" if "enum" in name.lower() else "config" if "config" in name.lower() else "infrastructure"
    reason = f.get("notes", "No class definitions — infrastructure file")
    lines.append(f"| `{name}` | {typ} | {reason} |")
lines.append("")

# ── NEW HEADERS NEEDED ──
lines.append("---")
lines.append("")
lines.append("## 🆕 NEW HEADERS NEEDED (12 classes)")
lines.append("")
lines.append("These classes exist in the IDA database / YRpp but have **no corresponding header file** in the project. Must be created before Wave 9 (base classes) since AbstractClass depends on some of them.")
lines.append("")
lines.append("| # | Class | Likely Directory | Priority | Notes |")
lines.append("|---|-------|-----------------|----------|-------|")
notes_map = {
    "RadSiteClass": "Radar site effect — likely in src/render/ or src/entity/",
    "EBolt": "Electric bolt effect — likely in src/entity/",
    "BuildingLightClass": "Building light/illumination — likely in src/render/",
    "WaypointClass": "Map waypoint marker — likely in src/system/",
    "LayerClass": "Map rendering layer — likely in src/system/ or src/render/",
    "Checksummer": "Checksum utility — likely in src/core/ or src/system/",
    "RepeatableTimerStruct": "Timer utility struct — likely in src/core/",
    "ScoreStruct": "Score tracking struct — likely in src/ui/ or src/misc/",
    "BaseClass": "Base node for linked lists — likely in src/core/",
    "BaseNodeClass": "Node for linked lists — likely in src/core/",
    "DropshipStruct": "Dropship animation data — likely in src/entity/",
    "NodeNameType": "INI node name type — likely in src/system/ or src/type/",
}
for i, cls in enumerate(NEW_HEADERS_NEEDED, 1):
    note = notes_map.get(cls, "Unknown — needs IDA investigation")
    lines.append(f"| {i} | `{cls}` | TBD | P1 | {note} |")
lines.append("")
lines.append("**Action**: Use IDA to determine each class's vtable/member layout, then create stub headers in the appropriate directory. Add to Wave 4-6 as appropriate.")
lines.append("")

# ── WAVE ASSIGNMENTS ──
lines.append("---")
lines.append("")
lines.append("## 🌊 Task Wave Assignments")
lines.append("")
lines.append("Work order: leaf classes first (no dependents), then mid-hierarchy, then root classes. Independent hierarchies can be parallelized within a wave.")
lines.append("")

for wave in sorted(by_wave.keys()):
    files = sorted(by_wave[wave], key=lambda x: x[0])
    total_u = sum(f["unknown_count"] for _, f in files)
    total_s = sum(f["stub_count"] for _, f in files)
    n_partial = sum(1 for _, f in files if f["classification"] == "PARTIAL")
    n_stub = sum(1 for _, f in files if f["classification"] == "STUB")
    name = WAVE_NAMES.get(wave, "Wave " + str(wave))
    
    lines.append(f"### Wave {wave}: {name}")
    lines.append(f"**{len(files)} files** ({n_partial} PARTIAL, {n_stub} STUB) — {total_u} unknown_ fields, {total_s} stubs")
    lines.append("")
    
    # Group by directory within wave
    wdirs = defaultdict(list)
    for fp, f in files:
        d = str(Path(fp).parent).replace("\\", "/")
        wdirs[d].append((fp, f))
    
    for d, d_files in sorted(wdirs.items()):
        lines.append(f"**`{d}/`**:")
        for fp, f in sorted(d_files):
            name = Path(fp).name
            cls = f["class_count"]
            u = f["unknown_count"]
            s = f["stub_count"]
            status = "PARTIAL" if f["classification"] == "PARTIAL" else "STUB"
            impl = f.get("implemented_count", 0)
            # Determine effort tag
            if f["unknown_count"] >= 15 or f["stub_count"] >= 35:
                tag = "🔴 HIGH"
            elif f["unknown_count"] >= 5 or f["stub_count"] >= 15:
                tag = "🟡 MEDIUM"
            else:
                tag = "🟢 LOW"
            lines.append(f"- `{name}` — {status}, {cls} classes, {u} unknown_, {s} stubs, {impl} impl — {tag}")
        lines.append("")
    
    # Dependency note
    if wave == 4:
        lines.append("> **Dependency**: None — these are leaf ObjectClass subclasses. No class depends on them.")
    elif wave == 5:
        lines.append("> **Dependency**: None — leaf AbstractTypeClass subclasses. No class depends on them.")
    elif wave == 6:
        lines.append("> **Dependency**: Waves 4-5 complete. type_classes.hpp depends on individual type headers.")
    elif wave == 7:
        lines.append("> **Dependency**: Waves 4-5, 8 (FootClass → TechnoClass must be complete first)")
    elif wave == 8:
        lines.append("> **Dependency**: Wave 9 complete (ObjectClass → AbstractClass base). Mid-hierarchy sits between leaf and root.")
    elif wave == 9:
        lines.append("> **Dependency**: Waves 4-8 complete. Root classes affect everything. Address comment audit MUST be done first.")
    elif wave == 10:
        lines.append("> **Dependency**: Independent hierarchies (GScreen, File, etc.) — can proceed in parallel with waves 4-9.")
    elif wave == 11:
        lines.append("> **Dependency**: Independent hierarchies (Surface, Blitter, Movie, SHP) — can proceed in parallel.")
    elif wave == 12:
        lines.append("> **Dependency**: Independent hierarchies + support classes. Can be parallelized across sub-teams.")
    lines.append("")

# ── CRITICAL PATH ──
lines.append("---")
lines.append("")
lines.append("## 🔗 Critical Path")
lines.append("")
lines.append("The following sequence is the **blocking dependency chain** — each step must complete before the next can start:")
lines.append("")
lines.append("```")
lines.append("Wave 9: ObjectClass → AbstractTypeClass → AbstractClass")
lines.append("    ↑ requires")
lines.append("Wave 8: TechnoClass → FootClass → RadioClass → MissionClass")
lines.append("    ↑ requires")
lines.append("Wave 7: BuildingClass → InfantryClass → UnitClass → AircraftClass")
lines.append("    ↑ requires")
lines.append("Wave 6: type_classes.hpp (TechnoTypeClass → ObjectTypeClass)")
lines.append("    ↑ requires")
lines.append("Wave 4-5: Entity instances + individual type headers")
lines.append("```")
lines.append("")
lines.append("**Independent (can proceed in parallel with critical path):**")
lines.append("- Waves 10-12 (system, render, support — mostly independent hierarchies)")
lines.append("- Wave 13 (final integration)")
lines.append("")

# ── STATS ──
lines.append("---")
lines.append("")
lines.append("## 📊 Completion Statistics")
lines.append("")
lines.append("| Category | Count | % |")
lines.append("|----------|-------|---|")
for cat in ["COMPLETE", "UTILITY", "PARTIAL", "STUB"]:
    n = hc["files_by_category"][cat]
    pct = n / hc["total_files"] * 100
    lines.append(f"| {cat} | {n} | {pct:.1f}% |")
lines.append(f"| **Total** | **{hc['total_files']}** | **100%** |")
lines.append("")
lines.append("| Effort | Count |")
lines.append("|--------|-------|")
effort_counts = defaultdict(int)
for fp, wave, f in in_scope:
    u = f["unknown_count"]
    s = f["stub_count"]
    score = u + (s * 0.3)
    if score >= 15:
        effort_counts["HIGH"] += 1
    elif score >= 5:
        effort_counts["MEDIUM"] += 1
    else:
        effort_counts["LOW"] += 1
for eff in ["LOW", "MEDIUM", "HIGH"]:
    lines.append(f"| {eff} | {effort_counts[eff]} |")
lines.append("")
lines.append("| Directory | Files | unknown_ | Stubs |")
lines.append("|-----------|-------|----------|-------|")
for d in sorted(by_dir.keys()):
    ents = by_dir[d]
    n = len(ents)
    u = sum(f["unknown_count"] for _, _, f in ents)
    s = sum(f["stub_count"] for _, _, f in ents)
    lines.append(f"| `{d}/` | {n} | {u} | {s} |")
lines.append("")

# Write
with open(BASE / "scope_manifest.md", "w", encoding="utf-8") as f:
    f.write("\n".join(lines))

print(f"scope_manifest.md written: {len(lines)} lines")
