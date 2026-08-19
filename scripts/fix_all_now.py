import os, re

DIRS = [
    r"D:\RA2YR_ReSource\src",
    r"D:\RA2YR_ReSource\include\gamemd",
]

changed = 0
for BASE in DIRS:
    for root, dirs, files in os.walk(BASE):
        for fn in files:
            if not fn.endswith(".hpp") and not fn.endswith(".cpp"):
                continue
            fp = os.path.join(root, fn)
            with open(fp, "r", encoding="utf-8") as f:
                txt = f.read()
            orig = txt

            # Step 1: Strip gamemd/ prefix
            txt = txt.replace('#include "gamemd/', '#include "')

            # Step 2: Fix ..\core\xxx.hpp -> core/xxx.hpp
            txt = re.sub(
                r'#include "\.\.\\core\\([^"]+)"',
                r'#include "core/\1"',
                txt,
            )

            # Step 3: Fix ..\fundamentals.hpp
            txt = txt.replace(
                '#include "..\\fundamentals.hpp"',
                '#include "fundamentals.hpp"',
            )

            # Step 4: Only fix known unconverted paths that use ..\ 
            # These are files still in include/gamemd/ that other headers reference
            unconverted_dirs = [
                "system", "render", "misc", "type", "entity",
                "ui", "network", "house", "team", "wdt",
                "object", "structure",
            ]
            for d in unconverted_dirs:
                txt = re.sub(
                    rf'#include "\.\.\\{d}\\([^"]+)"',
                    rf'#include "{d}/\1"',
                    txt,
                )

            if txt != orig:
                with open(fp, "w", encoding="utf-8", newline="\n") as f:
                    f.write(txt)
                changed += 1

print(f"Fixed includes in {changed} files")
