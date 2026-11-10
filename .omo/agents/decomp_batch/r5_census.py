#!/usr/bin/env python3
"""R5 census: classify the 385 R4 COMPILE_FAIL notes into error-code x
symbol-category buckets. Output: r5_census.md + r5_census.json."""
import json
import re
import collections
import os

HERE = os.path.dirname(os.path.abspath(__file__))
rows = json.load(open(os.path.join(HERE, "r5_census_rows.json"), encoding="utf-8"))

ERR_RE = re.compile(r"error\s+(C\d+)\s*:\s*([^\"]*?)(?=;|$)")

def first_error(note):
    if not note:
        return None, None
    m = re.search(r"error\s+(C\d+)\s*:\s*(.*?)(?:;|$)", note)
    if not m:
        return None, note[:60]
    return m.group(1), m.group(2)

def all_errors(note):
    return re.findall(r"error\s+(C\d+)", note or "")

# ---- symbol-category classifier (per error code family) --------------
def classify(code, msg):
    if code == "C2065":
        m = re.search(r"'([^']+)'[ :]+undeclared identifier", msg)
        sym = m.group(1) if m else "?"
        if re.match(r"^g?_", sym) or re.match(r"^[a-z]\w*_", sym):
            return "global-ish (g_/hungarian prefix)"
        if re.match(r"^v\d+$", sym):
            return "local (vN)"
        if sym[0].isupper():
            return "Type/global-class (Uppercase)"
        return "other-lowercase"
    if code in ("C2228", "C2227", "C2226"):
        m = re.search(r"left of ['\"]?\.?\.?(\w+)['\"]? must have", msg)
        if "__pad" in msg or (m and m.group(1).startswith("__pad")):
            return "pad member (type view missing)"
        if "field_0x" in msg or (m and "field_0x" in m.group(1)):
            return "field_0x member"
        return "named member (member struct type missing)"
    if code == "C2039":
        return "member not in class (body/hpp view gap)"
    if code == "C2664":
        if "cannot convert parameter" in msg:
            return "param conversion"
        return "other conversion"
    if code == "C2100":
        return "illegal indirection"
    if code == "C2109":
        return "subscript on non-array"
    if code == "C2440":
        m = re.search(r"cannot convert from '([^']*)' to '([^']*)'", msg)
        if m:
            f, t = m.group(1), m.group(2)
            if "*" in f and "*" in t:
                return "ptr->ptr cast"
            if "*" in f or "*" in t:
                return "ptr<->int cast"
            return "value cast"
        return "assignment cast"
    if code in ("C2143", "C2146", "C2059", "C2061", "C2062", "C2144", "C2058"):
        return "syntax (residual IDA tokens)"
    if code == "C4234":
        return "__thiscall keyword in hpp"
    if code == "C2562":
        return "void returns value"
    if code == "C2660":
        return "callee arity"
    if code == "C4716":
        return "missing return"
    return "other"

per_code = collections.Counter()
per_code_cat = collections.defaultdict(collections.Counter)
samples = collections.defaultdict(list)
for r in rows:
    code, msg = first_error(r.get("note"))
    if code is None:
        code, msg = "NO_ERROR_TEXT", (msg or "")[:60]
    cat = classify(code, msg or "")
    per_code[code] += 1
    per_code_cat[code][cat] += 1
    if len(samples[(code, cat)]) < 6:
        samples[(code, cat)].append({
            "addr": r["addr"], "name": r.get("name") or r.get("emitted"),
            "msg": (msg or "")[:160]})

out = {"total": len(rows), "first_error_code": {}}
lines = ["# R5 census: 385 COMPILE_FAIL first-error distribution", ""]
lines.append("| first err | n | category | n |")
lines.append("|---|---|---|---|")
for code, n in per_code.most_common():
    top_cat = per_code_cat[code].most_common(1)[0][0]
    for cat, k in per_code_cat[code].most_common():
        lines.append("| %s | %s | %s | %d |" % (code, str(n) if cat == top_cat else "", cat, k))
    out["first_error_code"][code] = {
        "n": n, "cats": dict(per_code_cat[code]),
        "samples": {("%s|%s" % kc): v for kc, v in samples.items()
                    if kc[0] == code}}

open(os.path.join(HERE, "r5_census.json"), "w", encoding="utf-8").write(
    json.dumps(out, indent=1, ensure_ascii=False))
open(os.path.join(HERE, "r5_census.md"), "w", encoding="utf-8").write(
    "\n".join(lines) + "\n")
print("\n".join(lines))
