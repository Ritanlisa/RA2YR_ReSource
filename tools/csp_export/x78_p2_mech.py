#!/usr/bin/env python3
"""X78 part2 mechanical steps (A/C/D):
  A. delete unused extern vt_X declaration lines
  C. rename residual vtableN/vtblN code tokens (convention targets)
  D. rename vt_entry_* / vt_placeholder_* method names -> sub_<RVA>
Usage: python tools/csp_export/x78_p2_mech.py [--apply]
"""
import os, re, sys, json, collections
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import x78_w1_apply as W

SRC = W.SRC
OUT = W.OUT
SKIP_TOP = W.SKIP_TOP
MAP = {"vtable": "ptr_0", "vtbl": "ptr_0", "vtable1": "ptr_0", "vtbl1": "ptr_0",
       "vtable2": "ptr_4", "vtbl2": "ptr_4", "vtable3": "ptr_8", "vtbl3": "ptr_8",
       "vtable4": "ptr_C", "vtbl4": "ptr_C", "vtable0": "ptr_0", "vtbl0": "ptr_0"}
TOKRE = re.compile(r"\b(vtable|vtbl)([0-9_]*)\b")
VT_ENTRY = re.compile(r"\bvt_(entry|placeholder)_([0-9A-Fa-f]+)\b")
decl_re = re.compile(r"^\s*(?:extern|static)\s+[^;]*\bvt_[A-Za-z0-9_]+\s*;")
sym_re = re.compile(r"\bvt_([A-Za-z0-9_]+)\b")
BIT_BANK = set()


def load_bit_bank():
    p = os.path.join(OUT, "x78_w2_excluded.jsonl")
    s = set()
    if os.path.exists(p):
        for x in json.load(open(p, encoding="utf-8")):
            if x.get("why") == "bit-on-pointer":
                s.add((x["file"], str(x["line"]), x["tok"]))
    return s


def main():
    apply = "--apply" in sys.argv
    global BIT_BANK
    BIT_BANK = load_bit_bank()
    # ---- collect use counts per vt_ symbol (code only) ----
    uses = collections.Counter()
    for dp, dns, fns in os.walk(SRC):
        rel0 = os.path.relpath(dp, SRC)
        if rel0.split(os.sep)[0] in SKIP_TOP:
            continue
        for fn in fns:
            if not fn.lower().endswith((".hpp", ".cpp", ".h", ".inl")):
                continue
            p = os.path.join(dp, fn)
            t = open(p, encoding="utf-8", errors="replace").read()
            for cl in W.blank_comments(t).split("\n"):
                if decl_re.match(cl):
                    continue
                for m in sym_re.finditer(cl):
                    uses[m.group(1)] += 1
    deleted = []
    renamed_vt = []
    renamed_entry = 0
    for dp, dns, fns in os.walk(SRC):
        rel0 = os.path.relpath(dp, SRC)
        if rel0.split(os.sep)[0] in SKIP_TOP:
            continue
        for fn in fns:
            if not fn.lower().endswith((".hpp", ".cpp", ".h", ".inl")):
                continue
            p = os.path.join(dp, fn)
            rel = os.path.relpath(p, SRC)
            txt = open(p, encoding="utf-8", errors="replace").read()
            lines = txt.split("\n")
            code = W.blank_comments(txt).split("\n")
            keep = []
            changed = False
            for i, (raw, cl) in enumerate(zip(lines, code)):
                dm = decl_re.match(cl)
                if dm:
                    sm = sym_re.search(cl)
                    if sm and uses.get(sm.group(1), 0) == 0:
                        deleted.append({"file": rel, "line": i + 1, "code": raw.strip()[:160]})
                        changed = True
                        continue  # drop the line
                new = raw
                # C: residual vtable tokens (bit-on-pointer sites stay banked)
                edits = []
                for m in TOKRE.finditer(cl):
                    tok = m.group(0)
                    if (rel, str(i + 1), tok) in BIT_BANK:
                        continue
                    if tok in MAP:
                        edits.append((m.start(), m.end(), MAP[tok]))
                # D: vt_entry / vt_placeholder method names -> sub_<RVA>
                for m in VT_ENTRY.finditer(cl):
                    tok = m.group(0)
                    am = re.search(r"0x([0-9A-Fa-f]{6,8})", raw[m.end():])
                    if not am:
                        continue
                    edits.append((m.start(), m.end(), "sub_" + am.group(1).upper()))
                    renamed_entry += 1
                if edits:
                    for a, b, rep in reversed(edits):
                        new = new[:a] + rep + new[b:]
                    renamed_vt.append({"file": rel, "line": i + 1, "before": raw.strip()[:180],
                                       "after": new.strip()[:180]})
                    changed = True
                keep.append(new)
            if changed and apply:
                open(p, "w", encoding="utf-8", newline="").write("\n".join(keep))
    os.makedirs(OUT, exist_ok=True)
    json.dump(deleted, open(os.path.join(OUT, "x78_p2_deleted_decls.jsonl"), "w", encoding="utf-8"), ensure_ascii=False, indent=0)
    json.dump(renamed_vt, open(os.path.join(OUT, "x78_p2_renamed.jsonl"), "w", encoding="utf-8"), ensure_ascii=False, indent=0)
    print(("APPLY " if apply else "DRY ") + "deleted_decl_lines=%d renamed_lines=%d vt_entry_renames=%d"
          % (len(deleted), len(renamed_vt), renamed_entry))
    return 0


if __name__ == "__main__":
    sys.exit(main())
