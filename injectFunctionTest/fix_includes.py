import os

INCLUDE = '#include "gamemd/core/reverse_marker.hpp"'
ROOT = r"D:\RA2YR_ReSource"
FILES = [
    "src/core/copy_protection.cpp",
    "src/core/menu_select.cpp",
    "src/misc/rules.cpp",
    "src/system/cc_file.cpp",
    "src/system/ini_class.cpp",
    "src/system/mix_file.cpp",
    "app/main.cpp",
    "app/cmdline.cpp",
    "src/object/object.cpp",
    "src/object/abstract.cpp",
]

for fp in FILES:
    path = os.path.join(ROOT, fp)
    if not os.path.exists(path): continue
    with open(path) as f: c = f.read()
    if INCLUDE in c: continue
    if 'REVERSE(' not in c: continue
    lines = c.split('\n')
    last = 0
    for i, line in enumerate(lines):
        if line.strip().startswith('#include'):
            last = i
    lines.insert(last + 1, INCLUDE)
    with open(path, 'w', newline='\n') as f: f.write('\n'.join(lines))
    print(f"Added include to {fp}")
print("Done")
