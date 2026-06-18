#!/usr/bin/env python3
"""
classify_priority.py — Classify remaining functions by translation priority.

Reads functions.json, cross-references CRT exclusions, scans src/ for stubs,
and outputs priority_matrix.json with tier-sorted function list.

Priority tiers:
  HIGH   — named + stub exists (found in src/) + size < 200 bytes
  MEDIUM — named + no stub found + size < 200 bytes  
  LOW    — sub_* (unnamed) OR size >= 200 bytes with no stub
  EXCLUDED — CRT functions

Output: tools/priority_matrix.json
"""

import json
import os
import re
from pathlib import Path
from collections import defaultdict

# ─── Paths ──────────────────────────────────────────────────────
ROOT = Path(__file__).resolve().parent.parent
FUNCTIONS_JSON = ROOT / "injectFunctionTest" / "functions.json"
CRT_EXCLUSIONS = ROOT / "tools" / "fr_crt_exclusions.json"
OUTPUT_JSON = ROOT / "tools" / "priority_matrix.json"
SRC_DIR = ROOT / "src"

# ─── Size buckets in bytes ──────────────────────────────────────
SIZE_TINY   = (0, 50)        # <50
SIZE_SMALL  = (50, 200)      # 50-200
SIZE_MEDIUM = (200, 500)     # 200-500
SIZE_LARGE  = (500, 999999)  # 500+

def size_bucket(size: int) -> str:
    if size < 50:       return "tiny"
    elif size < 200:     return "small"
    elif size < 500:     return "medium"
    return "large"

# ─── Module classification keywords ─────────────────────────────
# Ordered: more specific matches first
MODULE_PATTERNS = [
    # (module, regex pattern to match against full function name)
    ("menu",     r"(?:Menu|Dialog|Gadget|Bink|BINK|Sidebar|Mouse|Button|Slider|ListBox|Scroll|Cursor|ToolTip|DropDown|ComboBox|gadget|KeyBoard|HotKey|TabControl|ProgressBar|StatusBar|EditControl|CheckBox|RadioButton|GroupBox|StaticText)"),
    ("rendering", r"(?:Surface|Blitter|DSurface|Palette|Pal|SHP|Shp|Voxel|VXL|HVA|Draw|Render|Blit|DDSurface|ZBuffer|D3D|Texture|Sprite|Bitmap|Pixel|Alpha|LightSource|LightSourceClass|ConvertClass|PaletteClass|TextRender|Rect|Gradient|Display|DisplayClass|Tactical)"),
    ("object",    r"(?:ObjectClass|AbstractClass|Mission[^C]|Radio[^C]|TechnoClass|FootClass|BaseClass|BaseNode)"),
    ("system",    r"(?:^Cell|^Map|Scenario|Factory|Random|FileSystem|Ini|Rules|CCFile|RawFile|Hash|ConvertClass|GDP|Game|IsoMap|Iso|Coord|CellClass|MapClass|FactoryClass|FileClass|MixFile|Blowfish|HashCache|Random2)"),
    ("structure", r"(?:Infantry|UnitClass|Aircraft|BuildingClass|Warhead|Weapon|Armor|BuildingType|UnitType|InfantryType|AircraftType|BuildingLight|Power|SuperWeaponType|EMP|Cloak|IronCurtain|Chronosphere)"),
    ("team",      r"(?:TeamClass|TeamType|Trigger|TriggerType|Script|ScriptType|TagClass|TagType|TaskForce|Campaign|AITrigger)"),
    ("network",   r"(?:Network|Winsock|Session|Multiplayer|Connection|IPX|UDP|TCP|Modem|Serial|EventClass|Event|Latency)"),
    ("entity",    r"(?:Bullet|Anim|Particle|Overlay|Fog|Smudge|Light[^S]|BulletType|AnimType|ParticleType|OverlayType|SmudgeType|FogOfWar|Tiberium|WaveClass|Laser|RadBeam|Temporal)"),
    ("locomotor", r"(?:Locomotor|Jumpjet|Drive|Movement|Locomotion|Hover|Ship|Tunnel|Rocket|Walk)"),
    ("com",       r"(?:QueryInterface|AddRef|Release|IUnknown|GUID|Notice|COM|IID_|CLSID_|vt_entry|VectorClass)"),
    ("yrpp_io",   r"(?:XSurface|YRpp|Audio[A-Z]|Mixer|Stream)"),
    ("misc",      r"(?:Audio|Theme|Super|Movie|Bounce|CopyProtection|WDT|WatchDog|Expire|Crate|Spotlight|EMPulse|AlphaLight|Parasite|Spawn|IonStorm|Screen|Score)"),
]

# Category → module fallback
CATEGORY_MODULE_FALLBACK = {
    "menu":      "menu",
    "rendering": "rendering",
    "locomotor":  "locomotor",
    "com":       "com",
    "yrpp_io":   "yrpp_io",
    # member/global → will be resolved by name patterns
}

# Compile regex patterns
MODULE_REGEX = [(mod, re.compile(pat, re.IGNORECASE)) for mod, pat in MODULE_PATTERNS]


def classify_module(func_name: str, category: str) -> str:
    """Determine module from function name and category."""
    # First try category fallback
    if category in CATEGORY_MODULE_FALLBACK:
        mod = CATEGORY_MODULE_FALLBACK[category]
        # But refine if name suggests different module
        for m, rx in MODULE_REGEX:
            if rx.search(func_name):
                if m != mod:
                    return m  # name-based wins over category
        return mod

    # member/global: scan name for module keywords
    for m, rx in MODULE_REGEX:
        if rx.search(func_name):
            return m

    return "global"


def build_stub_index(src_dir: Path) -> set:
    """Scan all source files and build a set of function names found."""
    found = set()
    # Patterns to extract function names from source code
    # 1. ClassName::MethodName — member function definitions/declarations
    member_pat = re.compile(r'\b([A-Z][A-Za-z0-9_]*::[A-Za-z_][A-Za-z0-9_]*)')
    # 2. Global functions — PascalCase names followed by (
    global_pat = re.compile(r'\b([A-Z][A-Za-z0-9_]{2,})\s*\(')

    for ext in ('*.cpp', '*.hpp', '*.h'):
        for fpath in src_dir.rglob(ext):
            try:
                content = fpath.read_text(encoding='utf-8', errors='ignore')
                # Find member function references
                for m in member_pat.finditer(content):
                    found.add(m.group(1))
                # Find global function calls/definitions
                for m in global_pat.finditer(content):
                    name = m.group(1)
                    # Filter out common false positives (types, keywords)
                    if name not in ('Class', 'Struct', 'Enum', 'True', 'False', 'Const',
                                    'Static', 'Public', 'Private', 'Virtual', 'Inline',
                                    'Extern', 'Int', 'Void', 'Bool', 'Char', 'Float',
                                    'Double', 'Long', 'Short', 'Unsigned', 'Signed',
                                    'Sizeof', 'Typedef', 'Using', 'Namespace',
                                    'Noexcept', 'Override', 'Constexpr', 'Decltype',
                                    'StaticCast', 'DynamicCast', 'ReinterpretCast',
                                    'ConstCast', 'For', 'While', 'If', 'Else', 'Return',
                                    'Break', 'Continue', 'Switch', 'Case', 'Default',
                                    'Goto', 'New', 'Delete', 'This', 'Nullptr',
                                    'WinMain', 'DllMain', 'DETACH', 'ATTACH'):
                        found.add(name)
            except Exception:
                continue

    print(f"  Stub index: {len(found)} unique names found in src/")
    return found


def classify_state(func_name: str, stub_index: set) -> str:
    """Classify implementation state of a function."""
    # Check if stub exists in source
    if func_name in stub_index:
        return "stub_exists"
    # Check if named (not sub_*)
    if func_name.startswith("sub_"):
        return "sub_unnamed"
    return "named_no_impl"


def assign_priority(state: str, size: int, is_crt: bool) -> str:
    """Assign priority tier based on state and size."""
    if is_crt:
        return "excluded"
    if state == "sub_unnamed":
        return "low"
    if state == "stub_exists" and size < 200:
        return "high"
    if state == "named_no_impl" and size < 200:
        return "medium"
    # Large named functions — low priority unless they have a stub
    if size >= 200:
        return "low"
    return "low"


def estimate_hours(size: int) -> float:
    """Estimate reverse engineering hours based on function size."""
    # Rough heuristic: ~0.5h per 50 bytes of assembly for faithful translation
    if size < 50:
        return 0.3
    elif size < 200:
        return size / 100.0  # ~1h per 100 bytes
    elif size < 500:
        return size / 60.0   # ~1.7h per 100 bytes (complexity increases)
    else:
        return size / 40.0   # ~2.5h per 100 bytes


def main():
    print("=" * 60)
    print("  classify_priority.py — Translation Priority Classifier")
    print("=" * 60)

    # ── Load data ──────────────────────────────────────────────
    print("\n[1/5] Loading functions.json ...")
    with open(FUNCTIONS_JSON, 'r', encoding='utf-8') as f:
        func_data = json.load(f)
    all_funcs = func_data['functions']
    print(f"  Loaded {len(all_funcs):,} functions")

    print("\n[2/5] Loading CRT exclusions ...")
    with open(CRT_EXCLUSIONS, 'r', encoding='utf-8') as f:
        crt_data = json.load(f)
    crt_addrs = set(crt_data['excluded_addresses'])
    print(f"  Loaded {len(crt_addrs):,} CRT exclusions")

    print("\n[3/5] Building stub index from src/ ...")
    stub_index = build_stub_index(SRC_DIR)

    # ── Classify each function ─────────────────────────────────
    print(f"\n[4/5] Classifying {len(all_funcs):,} functions ...")
    
    tiers = defaultdict(list)
    module_counts = defaultdict(int)
    state_counts = defaultdict(int)
    size_dist = defaultdict(int)

    for func in all_funcs:
        name = func['name']
        addr = func['address']
        size = func['size']
        category = func.get('category', 'global')

        # CRT check
        is_crt = addr in crt_addrs

        # Module
        module = classify_module(name, category)
        module_counts[module] += 1

        # Size bucket
        bucket = size_bucket(size)
        size_dist[bucket] += 1

        # State
        state = classify_state(name, stub_index)
        if is_crt:
            state = "crt_excluded"
        state_counts[state] += 1

        # Priority
        priority = assign_priority(state, size, is_crt)
        hours = estimate_hours(size)

        entry = {
            "name": name,
            "addr": addr,
            "size": size,
            "module": module,
            "state": state,
            "size_bucket": bucket,
            "est_hours": round(hours, 2),
            "reason": f"{state} + {bucket} ({size}B)"
        }
        tiers[priority].append(entry)

    # ── Sort each tier by priority (HIGH: smallest first, etc.) ─
    for tier in tiers:
        if tier == "high":
            # HIGH: smallest first (easy wins)
            tiers[tier].sort(key=lambda e: e['size'])
        elif tier == "medium":
            # MEDIUM: smallest first
            tiers[tier].sort(key=lambda e: e['size'])
        else:
            # LOW: by module then size
            tiers[tier].sort(key=lambda e: (e['module'], e['size']))

    # ── Build output ───────────────────────────────────────────
    output = {
        "metadata": {
            "generated": "auto",
            "source": "functions.json",
            "total_functions": len(all_funcs),
            "crt_excluded": len(crt_addrs),
            "classified": len(all_funcs),
            "classifier": "classify_priority.py",
            "tiers_description": {
                "high": "Named + stub exists in src/ + size < 200B — ready to complete",
                "medium": "Named + no stub + size < 200B — small, known, needs implementation",
                "low": "sub_* unnamed OR size >= 200B — requires more investigation",
                "excluded": "CRT / compiler runtime functions — skip"
            }
        },
        "summary": {
            "high": {"count": len(tiers["high"]), "est_hours": round(sum(e["est_hours"] for e in tiers["high"]), 1)},
            "medium": {"count": len(tiers["medium"]), "est_hours": round(sum(e["est_hours"] for e in tiers["medium"]), 1)},
            "low": {"count": len(tiers["low"]), "est_hours": round(sum(e["est_hours"] for e in tiers["low"]), 1)},
            "excluded": {"count": len(tiers["excluded"]), "est_hours": 0},
        },
        "module_distribution": dict(module_counts),
        "state_distribution": dict(state_counts),
        "high": tiers["high"],
        "medium": tiers["medium"],
        "low": tiers["low"],
        "excluded": tiers["excluded"],
    }

    # ── Write output ───────────────────────────────────────────
    print(f"\n[5/5] Writing {OUTPUT_JSON} ...")
    OUTPUT_JSON.parent.mkdir(parents=True, exist_ok=True)
    with open(OUTPUT_JSON, 'w', encoding='utf-8') as f:
        json.dump(output, f, indent=2, ensure_ascii=False)
    
    file_size_mb = OUTPUT_JSON.stat().st_size / (1024 * 1024)
    print(f"  Written: {file_size_mb:.1f} MB")

    # ── Print summary ──────────────────────────────────────────
    total = len(all_funcs)
    print("\n" + "=" * 60)
    print("  PRIORITY SUMMARY")
    print("=" * 60)
    print(f"  Total functions:    {total:>8,}")
    print(f"  ───────────────────────────")
    for tier in ["high", "medium", "low", "excluded"]:
        s = output["summary"][tier]
        label = tier.upper().ljust(10)
        count_str = f"{s['count']:>8,}"
        pct = s['count'] / total * 100 if total > 0 else 0
        hours_str = f"{s['est_hours']:>8.1f}h" if tier != "excluded" else "       -"
        print(f"  {label} {count_str} ({pct:5.1f}%)  {hours_str}")

    print(f"\n  Module distribution:")
    for mod, cnt in sorted(module_counts.items(), key=lambda x: -x[1]):
        print(f"    {mod.ljust(12)}: {cnt:>6,}")

    print(f"\n  State distribution:")
    for st, cnt in sorted(state_counts.items(), key=lambda x: -x[1]):
        print(f"    {st.ljust(16)}: {cnt:>6,}")

    print(f"\n  Size distribution:")
    for bu, cnt in sorted(size_dist.items()):
        print(f"    {bu.ljust(8)}: {cnt:>6,}")

    # ── Display top HIGH entries ──────────────────────────────
    print(f"\n  Top 10 HIGH priority (smallest stubs):")
    for e in tiers["high"][:10]:
        print(f"    {e['name'][:55].ljust(55)} {e['size']:>5}B  {e['module']}")

    print("\n  Done.")


if __name__ == "__main__":
    main()
