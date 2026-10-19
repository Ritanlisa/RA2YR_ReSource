#!/usr/bin/env python3
"""X78 R2 table: classify every pre-apply `vtableN`/`vtblN`/`vt_slot_N` site.

Classification (per declaration entity / site group):
  A-real-vptr        declared pointer member sitting on a binary vtable column
                     (vtable_authority col_offset match) -> W1 renamed to ptr_<off>;
                     member removal deferred (X72 residual lane).
  B-misnamed-scalar  declared member / local that is NOT a vptr column, or a
                     ghost reference: W1 renamed per offset convention.
  C-wrong-translation scalar/bit use contradicting the receiver model -> banked
                     (x78_w1_excluded.jsonl), evidence per site.
  D-vtslot-banked    vt_slot_N call points: illegal to rename without the
                     header-reorder lane (X75 ruling).

Reads: x78_inventory.json (pre-apply), anchors/vtable_authority.json,
       x78_w1_ledger.jsonl, x78_w1_excluded.jsonl.
Writes: x78_table.json, x78_table.md
"""
import os, re, json, collections

ROOT = r"D:\RA2YR_ReSource"
OUT = os.path.join(ROOT, ".omo", "evidence", "optimization", "x78")
SRC = os.path.join(ROOT, "src")
SKIP_TOP = {"raw_decomp", "_generated", "app"}

inv = json.load(open(os.path.join(OUT, "x78_inventory.json"), encoding="utf-8"))
auth = json.load(open(os.path.join(ROOT, "anchors", "vtable_authority.json"), encoding="utf-8"))
ledger = json.load(open(os.path.join(OUT, "x78_w1_ledger.jsonl"), encoding="utf-8"))
excl = json.load(open(os.path.join(OUT, "x78_w1_excluded.jsonl"), encoding="utf-8"))

# class -> set of vtable col offsets (binary)
cols = collections.defaultdict(set)
for k, v in auth["vtables"].items():
    name = v.get("class_rtti") or ""
    if v.get("col_offset") is not None:
        cols[name].add(v["col_offset"])

# class registry from PRE-APPLY headers (HEAD snapshot): name -> {member: (offset,type)}
HEAD_SRC = os.path.join(ROOT, ".omo", "x78_head", "src")
reg = collections.defaultdict(dict)
reg_by_file = collections.defaultdict(list)
for dp, dns, fns in os.walk(HEAD_SRC):
    rel = os.path.relpath(dp, HEAD_SRC)
    if rel.split(os.sep)[0] in SKIP_TOP: continue
    for fn in fns:
        if not fn.lower().endswith(".hpp"): continue
        frel = os.path.relpath(os.path.join(dp, fn), HEAD_SRC)
        cur = None
        for line in open(os.path.join(dp, fn), encoding="utf-8", errors="replace"):
            cm = re.match(r"^\s*(?:struct|class)\s+([A-Za-z_]\w*)\b[^{;]*\{\s*$", line)
            if cm:
                cur = cm.group(1); continue
            if cur:
                mm = re.match(r"^\s*([^;{}()]+?)\b([A-Za-z_]\w*)\s*(\[[^\]]*\])?\s*;\s*(?://\s*(?:0x)?([0-9A-Fa-f]+))?", line)
                if mm:
                    reg[cur][mm.group(2)] = (mm.group(4), mm.group(1).strip())
                    reg_by_file[(frel, mm.group(2))].append((cur, mm.group(4), mm.group(1).strip()))

SCOPE = re.compile(r"^(?:(?:vtable|vtbl)[0-9_]*|vt_slot_\d+)$")
scope = [s for s in inv if SCOPE.match(s["tok"])]

# classify
rows = []
excl_keys = {(e["file"], e["line"], e["tok"]) for e in excl}
excl_by_key = {}
for e in excl:
    excl_by_key.setdefault((e["file"], e["line"], e["tok"]), e["why"])
for s in scope:
    tok = s["tok"]
    kind = s["kind"]
    cls = s["cls"] or ""
    if tok.startswith("vt_slot_"):
        cl = "D-vtslot-banked"
        action = "bank (X75 header-reorder lane)"
        ev = "X68 byte-offset call; rename unsafe (header slot order != binary)"
    elif (s["file"], s["line"], tok) in excl_keys:
        why = excl_by_key.get((s["file"], s["line"], tok), "")
        if why.startswith("decl-collision") or why == "local-name-collision":
            cl = "E-name-collision-banked"
            action = "bank (renaming would duplicate an existing member/local name -> C2086/C2371)"
            ev = why
        elif why == "unresolved-receiver":
            cl = "F-receiver-unresolved-banked"
            action = "bank (receiver type unresolvable; rebinding risk unprovable)"
            ev = why
        else:
            cl = "C-wrong-translation"
            action = "fix to true field / method relocation lane (banked, L468)"
            ev = "scalar op (%s) vs pointer-typed declared member at receiver class" % why
    else:
        off = None
        typ = ""
        cname = cls
        if kind == "decl-member":
            cand = reg_by_file.get((s["file"], tok))
            if cand:
                cname, off, typ = cand[0]
            elif cname in reg and tok in reg[cname]:
                off, typ = reg[cname][tok]
        if kind == "decl-member" and (off or typ):
            try:
                offn = int(off, 16) if off else None
            except Exception:
                offn = None
            has_auth = bool(cols.get(cname))
            is_ptr = bool(typ) and ("*" in typ or typ.strip() in ("void", "IUnknown"))
            if is_ptr and offn in (0, 4, 8, 0xC, 0x10, 0x14, 0x18, 0x1C, 0x20, 0x24, 0x28, 0x2C):
                cl = "A-real-vptr"
                action = "W1 renamed -> ptr_%X (X70 A-set convention); member removal deferred (X72 residual lane)" % offn
                ev = ("vtable_authority col_offset=%s" % off) if (offn in cols.get(cname, set())) else (
                    "convention vptr-column offset 0x%X + pointer type in class body (authority absent for class)" % offn)
            else:
                cl = "B-misnamed-scalar"
                action = "W1 renamed -> ptr_<4*(N-1)> (type preserved)"
                ev = "declared member; offset/type not on authority column (type=%s off=%s)" % (typ, off)
        elif kind == "decl-local":
            cl = "B-misnamed-scalar"
            action = "W1 renamed (local variable)"
            ev = "local declaration"
        elif kind in ("use-member", "use-bare"):
            cl = "B-misnamed-scalar"
            action = "W1 renamed (ghost/non-scalar use)"
            ev = "reference site; receiver=%s" % (s["recv"] or "bare")
        else:
            cl = "B-misnamed-scalar"
            action = "W1 renamed"
            ev = ""
    rows.append({"file": s["file"], "line": s["line"], "tok": tok, "kind": kind,
                 "cls": cls, "fn": s["fn"], "recv": s["recv"], "class": cl,
                 "evidence": ev, "action": action, "code": s["code"]})

byclass = collections.Counter(r["class"] for r in rows)
bytok = collections.defaultdict(collections.Counter)
for r in rows:
    bytok[r["class"]][r["tok"]] += 1

# entity-level grouping (class + token) with dominant classification
ent = collections.defaultdict(lambda: collections.Counter())
for r in rows:
    ent[(r["cls"] or r["fn"] or "<global>", r["tok"])][r["class"]] += 1

md = []
md.append("# X78 R2 table — vtable-vocabulary purge (build universe)\n")
md.append("Sites: %d | files: %d | entities: %d\n" % (len(rows), len(set(r["file"] for r in rows)), len(ent)))
md.append("Classification counts: " + json.dumps(dict(byclass)) + "\n")
md.append("Per-token classification:")
for cl in ["A-real-vptr", "B-misnamed-scalar", "C-wrong-translation", "D-vtslot-banked", "E-name-collision-banked", "F-receiver-unresolved-banked"]:
    md.append("  * %s: %s" % (cl, json.dumps(dict(bytok[cl]))))
md.append("\n## W1 ledger (renamed sites by file, top 40)\n")
lf = collections.Counter(l["file"] for l in ledger)
md.append("| file | renamed lines |")
md.append("|---|---|")
for f, n in lf.most_common(40):
    md.append("| %s | %d |" % (f, n))
md.append("\n## C-wrong-translation exclusions (%d)\n" % len(excl))
md.append("| file:line | tok | owning class | target | target type | why | code |")
md.append("|---|---|---|---|---|---|---|")
for e in excl:
    md.append("| %s:%d | %s | %s | %s | `%s` | %s | `%s` |" % (
        e["file"], e["line"], e["tok"], e.get("cls", ""), e["target"], e.get("target_type", ""), e["why"], e["code"][:110]))
md.append("\n## Per-class samples\n")
samples = collections.defaultdict(list)
for r in rows:
    key = r["class"]
    if len(samples[key]) < 8:
        samples[key].append("%s:%d `%s` (%s) recv=%s" % (r["file"], r["line"], r["code"][:90], r["kind"], r["recv"]))
for cl in ["A-real-vptr", "B-misnamed-scalar", "C-wrong-translation", "D-vtslot-banked", "E-name-collision-banked", "F-receiver-unresolved-banked"]:
    md.append("### %s" % cl)
    for s in samples[cl]:
        md.append("- %s" % s)
    md.append("")

json.dump(rows, open(os.path.join(OUT, "x78_table.json"), "w", encoding="utf-8"), ensure_ascii=False, indent=0)
open(os.path.join(OUT, "x78_table.md"), "w", encoding="utf-8").write("\n".join(md))
print("\n".join(md[:14]))
print("table rows:", len(rows), "entities:", len(ent))
