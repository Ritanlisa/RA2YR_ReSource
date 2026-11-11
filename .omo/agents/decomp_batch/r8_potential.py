#!/usr/bin/env python3
"""r8_potential.py -- quantify each candidate fix's coverage on NG 295.

P2 array element width: body uses this->ARR[idx]; check which of
   base+idx, base+2*idx, base+4*idx is in the function's [ecx+N] set.
P3 narrow scalar: declared width > min disasm width at the same offset.
P5 signedness: member offset appears in a signed-jcc compare in orig but
   the view type is unsigned (or vice versa).
"""
import collections
import json
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", "..", ".."))
sys.path.insert(0, os.path.join(ROOT, "tools", "decomp_sys"))
sys.path.insert(0, ROOT)
sys.path.insert(0, os.path.join(ROOT, "tools", "codegen_match"))

import decompile  # noqa: E402
import pseudo  # noqa: E402
from registry_ext import Registry  # noqa: E402
from passes import (ClassView, _disasm_this_offsets,  # noqa: E402
                    _disasm_min_width, _disasm_max_width)
import importlib  # noqa: E402
P = importlib.import_module("passes")

UNSIGNED = {"unsigned int", "unsigned char", "unsigned short", "unsigned long"}
SIGNED = {"int", "char", "signed char", "short", "long"}


def main():
    verdicts = json.load(open(os.path.join(HERE, "r8_ng_census_verdicts.json"),
                              encoding="utf-8"))
    reg = Registry.get()
    idx = pseudo.load_index()
    stats = collections.Counter()
    examples = collections.defaultdict(list)
    for addr, v in sorted(verdicts.items()):
        if v["verdict"] != "MISMATCH":
            continue
        try:
            views = ClassView()
            ctx, unit = decompile.run_function(addr, reg, views, idx)
        except BaseException:
            continue
        text = "\n".join(ctx.lines)
        cls = ctx.sig.get("cls")
        offs = _disasm_this_offsets(ctx)
        # ---- P2 arrays
        for off, a in (views.arrays.get(cls) or {}).items():
            name = a.get("name")
            elem = (a.get("elem") or "").strip()
            uses = list(re.finditer(r"this->%s\s*\[\s*(0x[0-9a-fA-F]+|\d+)\s*\]"
                                    % re.escape(name), text))
            if not uses:
                continue
            stats["P2_array_views_with_index"] += 1
            verdict = None
            for m in uses[:4]:
                i = int(m.group(1), 0)
                cand = {1: off + i, 2: off + 2 * i, 4: off + 4 * i}
                hit = [w for w, o in cand.items() if o in offs]
                if hit:
                    verdict = hit[0]
                    break
            if verdict is None:
                stats["P2_no_disasm_evidence"] += 1
                continue
            w = {"int": 4, "unsigned int": 4, "short": 2,
                 "unsigned short": 2, "char": 1, "unsigned char": 1}.get(elem)
            if w and w != verdict:
                stats["P2_elem_mismatch"] += 1
                examples["P2"].append((addr, name, elem, verdict, v.get("name")))
            else:
                stats["P2_ok"] += 1
        # ---- P3 scalars
        for off, roles in (views.scalars.get(cls) or {}).items():
            for role, x in roles.items():
                name, ty, w, src = (x.get("name"), x.get("type"),
                                    x.get("width"), x.get("src"))
                if not name or w is None:
                    continue
                if not offs or off not in offs:
                    continue
                dmin = _disasm_min_width(ctx, off)
                if dmin and dmin < int(w):
                    stats["P3_narrowable"] += 1
                    examples["P3"].append((addr, name, ty, int(w), dmin,
                                           src, v.get("name")))
                    break
        # ---- P4 alias-based offsets (mov reg, ecx then [reg+N])
        alias = set()
        for dl in ctx.ex.disasm_lines:
            mm = re.search(r"\bmov\s+(\w+)\s*,\s*(?:e|r)?cx\b", dl)
            if mm:
                alias.add(mm.group(1))
        alias.discard("ecx")
        if alias:
            extra = 0
            for dl in ctx.ex.disasm_lines:
                for r in alias:
                    for mm in re.finditer(r"\[%s\s*\+\s*(0x[0-9a-fA-F]+|\d+)\]"
                                          % re.escape(r), dl):
                        o = int(mm.group(1), 0)
                        if o not in offs:
                            extra += 1
            if extra:
                stats["P4_alias_only_offsets"] += 1
        # ---- P5 signedness: signed jcc involving [ecx+off]
        signed_j = re.compile(r"^\s*[0-9A-Fa-f]+:\s*j(?:l|le|g|ge)\b")
        uns_j = re.compile(r"^\s*[0-9A-Fa-f]+:\s*j(?:b|be|a|ae)\b")
        s_offs, u_offs = set(), set()
        dis = ctx.ex.disasm_lines
        for i, dl in enumerate(dis):
            if signed_j.match(dl) or uns_j.match(dl):
                window = dis[max(0, i - 4):i]
                for wl in window:
                    for mm in re.finditer(r"\[ecx\s*\+\s*(0x[0-9a-fA-F]+|\d+)\]", wl):
                        o = int(mm.group(1), 0)
                        (s_offs if signed_j.match(dl) else u_offs).add(o)
        for off, roles in (views.scalars.get(cls) or {}).items():
            if off not in s_offs:
                continue
            for role, x in roles.items():
                ty = x.get("type")
                if ty in UNSIGNED:
                    stats["P5_unsigned_in_signed_cmp"] += 1
                    examples["P5"].append((addr, x.get("name"), ty,
                                           "signed-cmp",
                                           v.get("name")))
                    break
        for off, a in (views.arrays.get(cls) or {}).items():
            if off not in s_offs:
                continue
            if (a.get("elem") or "") in UNSIGNED:
                stats["P5_array_unsigned_in_signed_cmp"] += 1
                examples["P5"].append((addr, a.get("name"), a.get("elem"),
                                       "signed-cmp-array", v.get("name")))

    print(json.dumps(stats, indent=1))
    json.dump({k: v[:40] for k, v in examples.items()},
              open(os.path.join(HERE, "r8_potential.json"), "w",
                   encoding="utf-8"), indent=1, ensure_ascii=False)
    for k in ("P2", "P3", "P5"):
        print("\n== examples", k)
        for e in examples[k][:10]:
            print("  ", e)


if __name__ == "__main__":
    main()
