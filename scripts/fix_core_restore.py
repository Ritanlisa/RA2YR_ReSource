import os
BASE = r"D:\RA2YR_ReSource\src"
c = 0
for root, _, files in os.walk(BASE):
    for fn in files:
        if not fn.endswith(".hpp") and not fn.endswith(".cpp"):
            continue
        fp = os.path.join(root, fn)
        with open(fp, "r", encoding="utf-8") as f:
            txt = f.read()
        orig = txt
        # Restore gamemd/ for unconverted paths
        txt = txt.replace('#include "core/', '#include "gamemd/core/')
        txt = txt.replace('#include "fundamentals.hpp"', '#include "gamemd/fundamentals.hpp"')
        if txt != orig:
            with open(fp, "w", encoding="utf-8", newline="\n") as f:
                f.write(txt)
            c += 1
print(f"Fixed {c} files")
