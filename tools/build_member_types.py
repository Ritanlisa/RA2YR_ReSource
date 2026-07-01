"""
T1: Build anchor set from class_layouts.json + member_lookup.json
Output: anchors/member_types.json

Approach:
- class_layouts = primary source for class membership (which offsets per class)
- member_lookup = enrichment source for type/name detail on 34 core classes
- Each entry: "ClassName+0xOFF" -> {"type": "...", "name": "...", "confidence": "..."}
- Union/bitfield members -> confidence=UNKNOWN
- Nested types: DynamicVectorClass<T> -> T* (effective inner type stored in "inner_type")
"""
import json, os, re

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
os.chdir(ROOT)

# --- Load sources ---
with open('tools/class_layouts.json') as f:
    class_layouts = json.load(f)
with open('tools/member_lookup.json') as f:
    member_lookup = json.load(f)

print(f"class_layouts: {len(class_layouts)} classes")
print(f"member_lookup: {len(member_lookup)} classes")
overlap = set(class_layouts) & set(member_lookup)
print(f"overlap: {len(overlap)} classes")

# --- Nested type expansion ---
NESTED_RE = re.compile(r'(?:DynamicVectorClass|DVector)<\s*([^>]+)\s*>\s*\*')

def expand_nested_type(type_str):
    """Expand DynamicVectorClass<T>* or DVector<T>* to T*.
    Returns (expanded_type, inner_element_type) or (None, None) if not nested.
    """
    if not type_str:
        return None, None
    m = NESTED_RE.match(type_str)
    if m:
        inner = m.group(1).strip()
        return f'{inner}*', inner
    return None, None

# --- Build merged output ---
output = {}
stats = {"ANCHORED": 0, "UNKNOWN": 0, "total_classes": 0, "total_members": 0,
         "nested_expanded": 0, "union_members": 0, "bitfield_members": 0}

UNKNOWN_TYPES = {'UNKNOWN', '', None, 'void', 'unknown'}

for class_name, layout in class_layouts.items():
    offsets = layout.get('offsets', {})
    if not offsets:
        continue

    stats["total_classes"] += 1
    lookup_members = member_lookup.get(class_name, {})

    for offset_str, entry in offsets.items():
        if not isinstance(entry, dict):
            continue

        offset_int = int(offset_str)
        hex_offset = f"0x{offset_int:X}"
        key = f"{class_name}+{hex_offset}"
        stats["total_members"] += 1

        # Try to enrich from member_lookup (same offset, same class)
        lookup_entry = lookup_members.get(offset_str) if isinstance(lookup_members, dict) else None

        if lookup_entry and isinstance(lookup_entry, dict):
            member_name = lookup_entry.get('name', entry.get('ida_name', ''))
            member_type = lookup_entry.get('type', entry.get('type', ''))
            is_union = lookup_entry.get('union', False)
            is_bitfield = lookup_entry.get('bitfield', False)
            inherited_from = lookup_entry.get('inherited_from', None)
        else:
            member_name = entry.get('ida_name', '')
            member_type = entry.get('type', '')
            is_union = False
            is_bitfield = False
            inherited_from = None

        # Determine confidence
        if is_union:
            confidence = "UNKNOWN"
            stats["union_members"] += 1
        elif is_bitfield:
            confidence = "UNKNOWN"
            stats["bitfield_members"] += 1
        elif member_type in UNKNOWN_TYPES:
            confidence = "UNKNOWN"
        else:
            confidence = "ANCHORED"

        if confidence == "ANCHORED":
            stats["ANCHORED"] += 1
        else:
            stats["UNKNOWN"] += 1

        result = {
            "type": member_type,
            "name": member_name,
            "confidence": confidence
        }

        # Handle nested types
        expanded, inner = expand_nested_type(member_type)
        if expanded:
            result["inner_type"] = expanded
            result["element_type"] = inner
            stats["nested_expanded"] += 1

        if inherited_from:
            result["inherited_from"] = inherited_from

        output[key] = result

# ── Scan constraint graph for missing member references ──
import re as _re2
_RE_MEMBER_C = _re2.compile(r'^(.+?)::.*?\.this\.member\((0x[0-9a-fA-F]+)\)')
constraints_path = os.path.join('tools', 'type_infer', 'constraints', 'raw_constraints.json')
if os.path.exists(constraints_path):
    with open(constraints_path) as f:
        raw = json.load(f)
    constraints = raw.get('constraints', [])
    
    added = 0
    for ct in constraints:
        for field in ('from', 'to'):
            name = ct.get(field, '')
            m = _RE_MEMBER_C.match(name)
            if not m:
                continue
            cls = m.group(1)
            offset = int(m.group(2), 16)
            key = f"{cls}+0x{offset:X}"
            if key not in output:
                output[key] = {
                    "type": "void*",
                    "name": "",
                    "confidence": "UNKNOWN"
                }
                added += 1
                stats["constraint_filled"] = stats.get("constraint_filled", 0) + 1
    
    print(f"\n[constraint scan] Added {added} missing member references from constraint graph")

# --- Write output ---
os.makedirs('anchors', exist_ok=True)
with open('anchors/member_types.json', 'w') as f:
    json.dump(output, f, indent=2, sort_keys=True)

print(f"\n--- Results ---")
print(f"Classes with members: {stats['total_classes']}")
print(f"Total member entries: {stats['total_members']}")
print(f"ANCHORED: {stats['ANCHORED']}")
print(f"UNKNOWN: {stats['UNKNOWN']}")
print(f"Nested types expanded: {stats['nested_expanded']}")
print(f"Union members: {stats['union_members']}")
print(f"Bitfield members: {stats['bitfield_members']}")
print(f"Output: {os.path.getsize('anchors/member_types.json')} bytes")

# --- Spot checks ---
print(f"\n--- Spot Checks ---")
spot_checks = [
    "BuildingClass+0x520",  # offset 1312 -> Type: BuildingTypeClass*
    "Checksummer+0x0",
    "GameConfig+0xCD",
    "AbstractClass+0x0",
    "ObjectClass+0x10",
]
for key in spot_checks:
    entry = output.get(key)
    if entry:
        print(f"  {key}: type={entry['type']}, name={entry['name']}, conf={entry['confidence']}")
    else:
        print(f"  {key}: NOT FOUND")
