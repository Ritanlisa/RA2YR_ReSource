#!/usr/bin/env python3
"""Generate src/misc/_funcs.hpp from tools/functions_by_module.json"""

import json
import re
from collections import OrderedDict

# Read JSON
with open("tools/functions_by_module.json", "r") as f:
    data = json.load(f)

funcs = data["misc+network"]["functions"]

# Map IDA return types to C++ types
TYPE_MAP = {
    "int": "int", "unsigned int": "unsigned int",
    "char": "char", "char *": "char*",
    "LONG": "long", "DWORD": "unsigned long",
    "bool": "bool", "BOOL": "BOOL",
    "void": "void", "void *": "void*",
    "void **": "void**", "void ***": "void***",
    "HRESULT": "HRESULT",
    "float *": "float*", "int *": "int*",
    "__int16": "short", "__int64": "long long",
    "wchar_t *": "wchar_t*",
    "double": "double",
    "_DWORD *": "unsigned int*",
}

def cpp_type(ida_type):
    return TYPE_MAP.get(ida_type, ida_type)

# Group functions: member -> class, global -> top-level
classes = OrderedDict()   # class_name -> [funcs]
globals_list = []         # global funcs

for f in funcs:
    name = f["name"]
    addr = f["addr"]
    category = f["category"]
    ret = cpp_type(f["return_type"])
    convention = f.get("convention", "")

    entry = {
        "name": name,
        "addr": addr,
        "ret": ret,
        "convention": convention,
        "param_bytes": f.get("param_bytes", 0),
    }

    if category == "member" and "::" in name:
        cls, method = name.split("::", 1)
        if cls not in classes:
            classes[cls] = []
        classes[cls].append(entry)
    else:
        # global, static, or unknown category
        globals_list.append(entry)

# Generate header
lines = []
lines.append("// Auto-generated from tools/functions_by_module.json")
lines.append("// Module: misc+network, namespace: gamemd")
lines.append(f"// {len(funcs)} functions: {sum(len(v) for v in classes.values())} member ({len(classes)} classes), {len(globals_list)} global/static")
lines.append("")
lines.append("#pragma once")
lines.append("")
lines.append("#include <windows.h>")
lines.append("")

# Collect types that need forward declarations
# We need to guess which types appear as class names or return types
known_classes = set(classes.keys())

# Add common types that might be referenced
extra_types = {
    "AudioIndex", "AudioStream", "AudioQueue", "AudioController",
    "SuperWeapon", "SuperWeaponType", "SuperWeaponTypeClass",
    "Rules", "RulesClass",
    "Network", "Connection", "Session",
    "Locomotor", "ILocomotion", "LocomotionClass",
    "WDT", "WatchdogTimer",
    "Movement", "RepeatableTimer",
    "Winsock", "Multiplayer",
    "HouseClass", "HouseTypeClass",
    "ObjectClass", "TechnoClass", "UnitClass", "BuildingClass", "InfantryClass", "AircraftClass",
    "CellClass", "CoordStruct", "Mission", "AbstractClass",
}
all_forward_types = known_classes | extra_types

# Sort for stable output
sorted_forward = sorted(all_forward_types)

lines.append("// Forward declarations")
for t in sorted_forward:
    lines.append(f"class {t};")
lines.append("")

lines.append("namespace gamemd {")
lines.append("")

# Output member functions grouped by class
for cls_name, members in classes.items():
    lines.append(f"// === {cls_name} ===")
    lines.append(f"// {len(members)} member function(s)")
    for m in members:
        lines.append(f"{m['ret']} {cls_name}::{m['name'].split('::',1)[1]}(); // IDA: {m['addr']}")
    lines.append("")

# Output global/static functions
lines.append("// === Global & Static Functions ===")
lines.append(f"// {len(globals_list)} function(s)")
lines.append("")
for g in globals_list:
    lines.append(f"{g['ret']} {g['name']}(); // IDA: {g['addr']}")

lines.append("")
lines.append("} // namespace gamemd")

output = "\n".join(lines)

with open("src/misc/_funcs.hpp", "w", encoding="utf-8") as f:
    f.write(output)

print(f"Generated src/misc/_funcs.hpp")
print(f"  Member functions: {sum(len(v) for v in classes.values())} ({len(classes)} classes)")
print(f"  Global/static: {len(globals_list)}")
print(f"  Total: {len(funcs)}")
print(f"  Forward declarations: {len(sorted_forward)}")
