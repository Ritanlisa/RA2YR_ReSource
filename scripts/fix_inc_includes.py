import os

BASE = r"D:\RA2YR_ReSource\include\gamemd"

changed = 0
for root, dirs, files in os.walk(BASE):
    for fn in files:
        if not fn.endswith(".hpp"):
            continue
        fp = os.path.join(root, fn)
        with open(fp, "r", encoding="utf-8") as f:
            txt = f.read()
        orig = txt
        # Strip gamemd/ prefix
        txt = txt.replace('#include "gamemd/', '#include "')
        # Fix ..\ backslash paths  
        txt = txt.replace('#include "..\\core\\', '#include "core/')
        txt = txt.replace('#include "..\\fundamentals.hpp"', '#include "fundamentals.hpp"')
        if txt != orig:
            with open(fp, "w", encoding="utf-8", newline="\n") as f:
                f.write(txt)
            changed += 1

print(f"Fixed {changed} files in include/gamemd/")
