import os, re

base = r"D:\RA2YR_ReSource\src"
changed = 0

for root, dirs, files in os.walk(base):
    for fn in files:
        if not fn.endswith(".hpp"):
            continue
        fp = os.path.join(root, fn)
        with open(fp, "r", encoding="utf-8") as f:
            txt = f.read()
        orig = txt

        # Fix: #include "..\core\xxx.hpp" → #include "gamemd/core/xxx.hpp"
        txt = re.sub(
            r'#include "\.\.\\core\\([^"]+)"',
            r'#include "gamemd/core/\1"',
            txt,
        )
        # Fix: #include "..\fundamentals.hpp" → #include "gamemd/fundamentals.hpp"
        txt = txt.replace(
            '#include "..\\fundamentals.hpp"',
            '#include "gamemd/fundamentals.hpp"',
        )
        # Fix: #include "..\subdir\file.hpp" → #include "subdir/file.hpp"
        txt = re.sub(
            r'#include "\.\.\\([a-z_]+)\\([^"]+)"',
            r'#include "\1/\2"',
            txt,
        )

        if txt != orig:
            with open(fp, "w", encoding="utf-8", newline="\n") as f:
                f.write(txt)
            changed += 1

print(f"Fixed include paths in {changed} headers")
