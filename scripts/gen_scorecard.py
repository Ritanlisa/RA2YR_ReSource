"""Generate completion_scorecard.json and scope_manifest.md from Task 1+2 outputs."""
import json
from pathlib import Path

# Load inputs
with open(Path(__file__).parent / "header_classification.json", encoding="utf-8") as f:
    hc = json.load(f)
with open(Path(__file__).parent / "class_hierarchy_order.json", encoding="utf-8") as f:
    cho = json.load(f)

# Build class->hierarchy info map
class_info = {}
for entry in cho["topological_order"]:
    class_info[entry["class_name"]] = entry
for ih in cho["independent_hierarchies"]:
    for cls in ih["classes"]:
        class_info[cls["class_name"]] = cls

# Wave assignment by directory
DIR_WAVE = {
    "src/core": 1,
    "src/app": 13,
    "src/entity": 6,
    "src/structure": 7,
    "src/type": 6,
    "src/object": 8,
    "src/system": 10,
    "src/render": 11,
    "src/house": 12,
    "src/network": 12,
    "src/team": 12,
    "src/misc": 12,
    "src/ui": 12,
    "src/wdt": 13,
}

# File-specific wave overrides
FILE_WAVE_OVERRIDES = {
    "src/object/abstract.hpp": 9,
    "src/object/object.hpp": 9,
    "src/type/abstract_type.hpp": 9,
    "src/type/type_classes.hpp": 9,
    "src/type/techno_type.hpp": 8,
    "src/type/object_type.hpp": 8,
    "src/object/techno.hpp": 8,
    "src/object/foot.hpp": 8,
    "src/object/mission.hpp": 8,
    "src/object/radio.hpp": 8,
    "src/fundamentals.hpp": 1,
}

# Detail-specific wave overrides for STUB files (put them in correct waves)
STUB_WAVE_OVERRIDES = {
    "src/type/anim_type.hpp": 5,        # entity type leaf
    "src/type/bullet_type.hpp": 5,
    "src/type/particle_type.hpp": 5,
    "src/type/particle_system_type.hpp": 5,
    "src/type/overlay_type.hpp": 5,
    "src/type/smudge_type.hpp": 5,
    "src/type/terrain_type.hpp": 5,
    "src/type/building_type.hpp": 5,
    "src/type/infantry_type.hpp": 5,
    "src/type/unit_type.hpp": 5,
    "src/type/aircraft_type.hpp": 5,
    "src/type/weapon_type.hpp": 5,
    "src/type/warhead_type.hpp": 5,
    "src/entity/anim.hpp": 4,           # entity instances
    "src/entity/bullet.hpp": 4,
    "src/entity/particle.hpp": 4,
    "src/entity/particle_system.hpp": 4,
    "src/entity/overlay.hpp": 4,
    "src/entity/smudge.hpp": 4,
    "src/entity/terrain.hpp": 4,
    "src/entity/tiberium.hpp": 4,
    "src/entity/tube.hpp": 4,
    "src/entity/wave.hpp": 4,
    "src/entity/voxel_anim.hpp": 4,
    "src/entity/voxel.hpp": 4,
}

WAVE_NAMES = {
    1: "Foundation (core types, enums, math) -- already mostly done",
    2: "Foundation II (memory, vectors, interfaces)",
    3: "Foundation III (injection points, reverse markers)",
    4: "Entity Instances (BulletClass, AnimClass, Particle, etc.)",
    5: "Entity Types (bullet_type, anim_type, particle_type, etc.)",
    6: "Consolidated Type Headers (type_classes.hpp + remaining type stubs)",
    7: "Structure Classes (Building, Infantry, Unit, Aircraft)",
    8: "Mid-Hierarchy Chain (FootClass, TechnoClass, Radio, Mission, TechnoType, ObjectType)",
    9: "Base Classes (ObjectClass, AbstractTypeClass, AbstractClass)",
    10: "System Classes (cell, map, scenario, tactical, factory, radar, ini, files, mix)",
    11: "Render Classes (display, surface, movie, shp, text, voxel, palette, fog, bounce, bink)",
    12: "Support (house, network, team, misc, ui -- can be parallelized)",
    13: "Final Integration (app entry, WDT framework, verification)",
}


def estimate_effort(f):
    u = f["unknown_count"]
    s = f["stub_count"]
    if f["classification"] == "COMPLETE":
        return "DONE"
    if f["classification"] == "UTILITY":
        return "N/A"
    # Unknowns cost ~3x more than stubs in effort
    score = u + (s * 0.3)
    if score < 5:
        return "LOW"
    elif score < 15:
        return "MEDIUM"
    else:
        return "HIGH"


def get_wave(fp):
    """Determine wave for a file path."""
    if fp in FILE_WAVE_OVERRIDES:
        return FILE_WAVE_OVERRIDES[fp]
    if fp in STUB_WAVE_OVERRIDES:
        return STUB_WAVE_OVERRIDES[fp]
    for d, w in DIR_WAVE.items():
        if fp.startswith(d):
            return w
    return 13


PRIORITY_ORDER = {"HIGH": 0, "MEDIUM": 1, "LOW": 2, "N/A": 3, "DONE": 4}
EFFORT_ORDER = {"HIGH": 0, "MEDIUM": 1, "LOW": 2, "DONE": 3, "N/A": 4}

# ── Build scorecard entries ──
entries = []
for f in hc["files"]:
    fp = f["file_path"]
    wave = get_wave(fp)
    effort = estimate_effort(f)

    if f["classification"] in ("COMPLETE", "UTILITY"):
        priority = "N/A"
    elif effort == "HIGH":
        priority = "HIGH"
    elif f["unknown_count"] > 3 or f["stub_count"] > 10:
        priority = "HIGH"
    elif f["unknown_count"] > 0 or f["stub_count"] > 0:
        priority = "MEDIUM"
    else:
        priority = "LOW"

    entry = {
        "file_path": fp,
        "classification": f["classification"],
        "class_count": f["class_count"],
        "unknown_count": f["unknown_count"],
        "stub_count": f["stub_count"],
        "address_comment_count": f["address_comment_count"],
        "implemented_count": f.get("implemented_count", 0),
        "effort": effort,
        "priority": priority,
        "wave": wave,
        "wave_name": WAVE_NAMES.get(wave, "Unknown"),
        "notes": f.get("notes", ""),
    }
    entries.append(entry)

entries.sort(key=lambda e: (
    e["wave"],
    PRIORITY_ORDER.get(e["priority"], 9),
    EFFORT_ORDER.get(e["effort"], 9),
    e["file_path"],
))

scorecard = {
    "generated_at": "2026-06-17",
    "inputs": [
        "scripts/header_classification.json",
        "scripts/class_hierarchy_order.json",
    ],
    "summary": {
        "total_files": hc["total_files"],
        "in_scope": hc["files_by_category"]["PARTIAL"] + hc["files_by_category"]["STUB"],
        "out_of_scope": hc["files_by_category"]["COMPLETE"] + hc["files_by_category"]["UTILITY"],
        "total_unknown_fields": hc["total_unknown_fields"],
        "total_stub_methods": hc["total_stub_methods"],
        "waves": WAVE_NAMES,
    },
    "entries": entries,
}

with open(Path(__file__).parent / "completion_scorecard.json", "w", encoding="utf-8") as f:
    json.dump(scorecard, f, indent=2, ensure_ascii=False)

print(f"Scorecard written: {len(entries)} entries")
print(f"In scope: {scorecard['summary']['in_scope']}, Out of scope: {scorecard['summary']['out_of_scope']}")
