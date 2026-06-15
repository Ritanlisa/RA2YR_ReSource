import os

BASE = r"D:\RA2YR_ReSource\src"
TARGET = '#include "gamemd/'
REPLACEMENT = '#include "'

changed = 0
for root, dirs, files in os.walk(BASE):
    for fn in files:
        if not fn.endswith(".hpp") and not fn.endswith(".cpp"):
            continue
        fp = os.path.join(root, fn)
        with open(fp, "r", encoding="utf-8") as f:
            txt = f.read()
        orig = txt
        txt = txt.replace(TARGET, REPLACEMENT)
        if txt != orig:
            with open(fp, "w", encoding="utf-8", newline="\n") as f:
                f.write(txt)
            changed += 1

print(f"Stripped gamemd/ from {changed} files")
