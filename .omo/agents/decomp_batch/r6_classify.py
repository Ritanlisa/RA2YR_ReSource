#!/usr/bin/env python3
"""R6 step 1b: classify each C2440 site by its fix pattern + solver answerability."""
import json, os, re
from collections import Counter

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", "..", ".."))
S = json.load(open(os.path.join(ROOT, ".omo", "agents", "decomp_batch", "r6_c2440_samples.json"), encoding="utf-8"))

_PTR = re.compile(r"^(?:class\s+)?([A-Za-z_][\w@]*)\s*(\**)\s*(const\s*)?$")


def kind_of(ty):
    """'ptr-X' / 'int' / 'void*' etc."""
    t = ty.replace("class ", "").strip()
    if "*" in t:
        return "ptr"
    if t in ("int", "unsigned int", "long", "unsigned long", "short",
             "unsigned short", "char", "unsigned char", "__int32", "_DWORD",
             "_WORD", "_BYTE", "bool"):
        return "int"
    return "other:" + t[:20]


rows = []
for s in S:
    addr = s["addr"]
    for e in s.get("c2440", []):
        m = re.search(r"from '([^']*)' to '([^']*)'", e["what"])
        if not m:
            continue
        f, t = m.group(1), m.group(2)
        rows.append({
            "addr": addr, "line": e["line"], "from": f, "to": t,
            "src": e.get("src"), "ctx": e.get("ctx", []),
            "entities": s.get("entities", {}),
            "fk": kind_of(f), "tk": kind_of(t),
        })

print("total C2440 sites:", len(rows))

# --- bucket: WHERE does the mispelled type sit?  inspect src line shapes
shape = Counter()
for r in rows:
    src = r["src"] or ""
    if re.match(r"^\s*(unsigned )?int \w+ =", src) or re.match(r"^\s*_?DWORD \w+ =", src):
        shape["int-local = <ptr rhs>"] += 1
    elif re.match(r"^\s*(void|char|unsigned char) \*\w+ =", src):
        shape["ptr-local = <int rhs>"] += 1
    elif re.match(r"^\s*\w+ \*\w+ =", src):
        shape["ptr-local = <other-ptr rhs>"] += 1
    elif "this->" in src.split("=")[0]:
        shape["member = rhs"] += 1
    elif "(" in src.split("=")[0] and "=" in src:
        shape["decl-with-init"] += 1
    else:
        shape["other"] += 1
print(shape.most_common())

# detailed per-pattern with sample src
for pat in ["int-local = <ptr rhs>", "ptr-local = <int rhs>", "ptr-local = <other-ptr rhs>", "member = rhs", "decl-with-init"]:
    print("\n===", pat)
    n = 0
    for r in rows:
        src = r["src"] or ""
        hit = False
        if pat == "int-local = <ptr rhs>" and re.match(r"^\s*(unsigned )?int \w+ =", src):
            hit = True
        elif pat == "ptr-local = <int rhs>" and re.match(r"^\s*(void|char|unsigned char) \*\w+ =", src):
            hit = True
        elif pat == "ptr-local = <other-ptr rhs>" and re.match(r"^\s*\w+ \*\w+ =", src) and not re.match(r"^\s*(void|char|unsigned char) \*\w+ =", src):
            hit = True
        elif pat == "member = rhs" and "this->" in src.split("=")[0] and "=" in src:
            hit = True
        elif pat == "decl-with-init" and "(" in src.split("=")[0] and "=" in src and "this" not in src.split("=")[0]:
            hit = True
        if hit and n < 6:
            print(" %s L%s %s -> %s | %s" % (r["addr"], r["line"], r["from"], r["to"], src[:90]))
            n += 1

# --- solver answerability: for each function, do we have a UNIQUE entity
#     of the right kind (S forced/narrow, P forced/narrow, RET)?
uniq = Counter()
for r in rows:
    ents = r["entities"]
    usable = []
    for k, v in ents.items():
        if k.startswith("EAX:"):
            continue
        if v.get("confidence") in ("forced", "narrow") and 1 <= v.get("n", 99) <= 3:
            usable.append((k, v["cands"], v["conf"]))
    uniq[(len(usable) > 0, r["fk"], r["tk"])] += 1
for k, c in uniq.most_common(12):
    print(k, c)
