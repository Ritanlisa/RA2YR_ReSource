#!/usr/bin/env python3
"""R6 step 1: full C2440 error harvest + solver-domain cross-reference.

For each of the 88 C2440 COMPILE_FAIL functions from R5:
  1. locate its isolated cpp in .omo/decomp_batch/r5_wall385/p*/part_00/
  2. recompile with era cl (full stderr)
  3. extract every C2440: (file, line, from, to)
  4. read the offending source line + the variable decl it belongs to
  5. look up solver entities for the function (P/S/RET/M/T) and judge
     whether a unique domain answers the mispelled variable

Output: .omo/agents/decomp_batch/r6_c2440_samples.json
"""
import json, os, re, sys, glob
from collections import Counter

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", "..", ".."))
sys.path.insert(0, os.path.join(ROOT, "tools", "decomp_sys"))

from decompile import era_compile  # noqa: E402

FAIL_NOTES = os.path.join(ROOT, ".omo", "agents", "decomp_batch", "r6_fail_notes.json")
WALL_DIR = os.path.join(ROOT, ".omo", "decomp_batch", "r5_wall385")
OUT = os.path.join(ROOT, ".omo", "agents", "decomp_batch", "r6_c2440_samples.json")

_assignments = json.load(open(os.path.join(ROOT, "anchors", "minclass_assignments.json"), encoding="utf-8"))


def fn_entities(faddr6):
    """All solver assignment entities for one function (hex addr like '526960')."""
    ents = {}
    up = faddr6.upper()
    for k, v in _assignments.items():
        parts = k.split(":")
        if len(parts) >= 2 and parts[1].upper() == up:
            ents[k] = v
    return ents


_ERR = re.compile(
    r"^(?P<file>[^\(\n]+)\((?P<line>\d+)\)\s*:\s*error C(?P<code>\d+)\s*:\s*(?P<what>.*)$")


def harvest():
    notes = json.load(open(FAIL_NOTES, encoding="utf-8"))
    c2440_addrs = [a for a, n in notes.items() if "C2440" in n]
    print("C2440 functions:", len(c2440_addrs))

    # index isolated cpps by addr suffix
    iso = {}
    for p in glob.glob(os.path.join(WALL_DIR, "p*", "part_00", "*_*.cpp")):
        base = os.path.basename(p)[:-4]
        m = re.search(r"_([0-9A-Fa-f]{6})$", base)
        if m:
            iso.setdefault(m.group(1).lower(), p)

    samples = []
    miss = 0
    for a in c2440_addrs:
        a6 = a.lower().replace("0x", "")
        cpp = iso.get(a6)
        if not cpp:
            miss += 1
            continue
        outdir = os.path.dirname(cpp)
        try:
            r = era_compile(cpp, outdir)
        except Exception as e:
            samples.append({"addr": a, "iso": cpp, "compile_exc": str(e)})
            continue
        errs = []
        for ln in (r.stdout + "\n" + r.stderr).splitlines():
            m = _ERR.match(ln.strip())
            if m:
                errs.append({"code": m.group("code"), "file": m.group("file"),
                             "line": int(m.group("line")), "what": m.group("what")})
        c2440s = [e for e in errs if e["code"] == "2440"]
        if not c2440s:
            # first error changed vs r5 note (note was from unit compile)
            pass
        # read source lines
        try:
            src = open(cpp, encoding="utf-8", errors="replace").read().splitlines()
        except OSError:
            src = []
        for e in c2440s:
            li = e["line"] - 1
            e["src"] = src[li].strip() if 0 <= li < len(src) else None
            ctx = src[max(0, li - 3):li] if li > 0 else []
            e["ctx"] = [c.strip() for c in ctx]
        ents = fn_entities(a6)
        ent_s = {}
        for k, v in ents.items():
            cands = v.get("candidates", [])
            ent_s[k] = {"cands": cands[:8] if len(cands) > 8 else cands,
                        "n": len(cands), "conf": v.get("confidence"),
                        "cls": v.get("class")}
        samples.append({"addr": a, "iso": os.path.relpath(cpp, ROOT),
                        "rc": r.returncode,
                        "n_errs": len(errs),
                        "first_err": (errs[0]["code"] if errs else None),
                        "c2440": c2440s, "entities": ent_s})
    json.dump(samples, open(OUT, "w", encoding="utf-8"), indent=1)
    print("harvested:", len(samples), "miss:", miss)
    # summary
    pat = Counter()
    for s in samples:
        for e in s["c2440"]:
            m = re.search(r"from '([^']*)' to '([^']*)'", e["what"])
            pat[(m.group(1)[:28], m.group(2)[:28]) if m else ("?", "?")] += 1
    for (f, t), c in pat.most_common(25):
        print(c, "|", f, "->", t)


if __name__ == "__main__":
    harvest()
