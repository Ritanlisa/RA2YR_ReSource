#!/usr/bin/env python3
"""X78 W1 applier v2: global convention rename of the `vtable1..4` family.

Mapping: vtable1@0x0 vtable2@0x4 vtable3@0x8 vtable4@0xC (1-based vptr column
convention; evidenced by 752 declarations + seed disasm) -> ptr_0/ptr_4/ptr_8/ptr_C.

Site policy:
  * decl (member/local)          -> rename (type unchanged)
  * use, non-integer context     -> rename
  * use, integer context:
       - local variable          -> rename (pure variable rename)
       - member, receiver class resolves and class declares the target name
         with a POINTER type -> EXCLUDE (bank: category flip C2039->C2676)
       - otherwise (ghost)       -> rename (C2039 stays C2039)
Outputs: ledger jsonl, excluded jsonl.
Usage: python tools/csp_export/x78_w1_apply.py [--apply]
"""
import os, re, sys, json, collections

ROOT = r"D:\RA2YR_ReSource"
SRC = os.path.join(ROOT, "src")
OUT = os.path.join(ROOT, ".omo", "evidence", "optimization", "x78")
SKIP_TOP = {"raw_decomp", "_generated", "app"}
EXTS = (".hpp", ".cpp", ".h", ".inl")
MAP = {"vtable1": "ptr_0", "vtable2": "ptr_4", "vtable3": "ptr_8", "vtable4": "ptr_C",
       "vtbl1": "ptr_0", "vtbl2": "ptr_4", "vtbl3": "ptr_8", "vtbl4": "ptr_C"}
TOKRE = re.compile(r"\b(vtable|vtbl)([0-9_]*)\b")
TYPETOK = re.compile(
    r"\b(?:void|int|char|short|long|bool|float|double|unsigned|signed|__int\d+|"
    r"u?int\d+_t|size_t|DWORD|WORD|BYTE|BOOL|UINT|HWND|HANDLE|LP\w+|WPARAM|LPARAM)\s*\**\s*$")


def blank_comments(s):
    out = list(s); i, n, state = 0, len(s), 0
    while i < n:
        c = s[i]
        if state == 0:
            if c == "/" and i + 1 < n and s[i + 1] == "/":
                out[i] = " "; out[i+1] = " "; i += 2; state = 1; continue
            if c == "/" and i + 1 < n and s[i + 1] == "*":
                out[i] = " "; out[i+1] = " "; i += 2; state = 2; continue
            if c == '"': state = 3; i += 1; continue
            if c == "'": state = 4; i += 1; continue
            i += 1
        elif state == 1:
            if c == "\n": state = 0
            else: out[i] = " "
            i += 1
        elif state == 2:
            if c == "*" and i + 1 < n and s[i + 1] == "/":
                out[i] = " "; out[i+1] = " "; i += 2; state = 0
            else:
                if c != "\n": out[i] = " "
                i += 1
        elif state == 3:
            if c == "\\": i += 2; continue
            if c == '"': state = 0
            i += 1
        elif state == 4:
            if c == "\\": i += 2; continue
            if c == "'": state = 0
            i += 1
    return "".join(out)


def token_kind(code_line, a, b):
    before = code_line[:a]; after = code_line[b:]
    recv = None
    m = re.search(r"([A-Za-z_>\]\)\w\.\[\]]*)(\s*->\s*|\s*\.\s*)$", before)
    if m and m.group(2).strip() in ("->", "."):
        tail = re.search(r"[A-Za-z_]\w*(?:\s*\[[^\]]*\])?$", m.group(1))
        return "member", (tail.group(0).strip() if tail else m.group(1).strip())
    if re.match(r"\s*(\[[^\]]*\])?\s*[;,)]", after):
        pre = before.rstrip()
        if pre and re.search(r"[A-Za-z_\]\)\w]\s*\**\s*$", pre):
            if TYPETOK.search(pre) or re.search(r"\b[A-Z][A-Za-z_]\w*\s*\**\s*$", pre) or pre.endswith("*"):
                return "decl", None
    return "bare", None


SCALAR_BEFORE = re.compile(r"(&|>>|<<|\+|-|\*|/|%|\^|\|)\s*$")
SCALAR_AFTER = re.compile(r"^\s*[\)\]]*\s*(>>|<<|==|!=|>=|<=|>|<|\&|\||\^|\+|-|\*|/|%)")
CAST_BEFORE = re.compile(r"\(\s*(?:int|unsigned int|unsigned|short|char|unsigned char|unsigned short|long|DWORD|BYTE|WORD|uint\d+_t|int\d+_t|__int\d+|size_t|UINT|uintptr_t)\s*\*?\s*\)\s*$")


def is_scalar(code_line, a, b):
    before = code_line[:a]; after = code_line[b:]
    if CAST_BEFORE.search(before): return "cast"
    m = SCALAR_BEFORE.search(before)
    if m:
        op = m.group(1)
        pre = before[:m.start()].rstrip()
        if op == "*":
            if pre and not (TYPETOK.search(before[:m.start()+1]) or pre.endswith(("*", "(", ","))):
                return "op*"
        elif op == "&":
            if pre and not pre.endswith(("*", "&", "(", ",")):
                return "op&"
        else:
            return "op" + op
    if SCALAR_AFTER.search(after):
        return "after"
    return None


HEAD_SRC = os.path.join(ROOT, ".omo", "x78_head", "src")


def _class_bodies(root):
    """yield (file_rel, class_name, member_name, offset, type) with brace-tracked scopes"""
    cls_open = re.compile(r"\b(struct|class)\s+([A-Za-z_]\w*)\b[^{;]*\{")
    mem_rx = re.compile(r"^\s*([^;{}()]+?)\b([A-Za-z_]\w*)\s*(\[[^\]]*\])?\s*;\s*(?://\s*(?:0x)?([0-9A-Fa-f]+))?")
    for dp, dns, fns in os.walk(root):
        rel = os.path.relpath(dp, root)
        if rel.split(os.sep)[0] in SKIP_TOP: continue
        for fn in fns:
            if not fn.lower().endswith((".hpp", ".cpp")): continue
            frel = os.path.relpath(os.path.join(dp, fn), root)
            depth = 0
            stack = []  # (class, depth_at_open)
            for rawline in open(os.path.join(dp, fn), encoding="utf-8", errors="replace"):
                m = cls_open.search(rawline)
                opened = 0
                if m and ";" not in rawline[:m.end()]:
                    # class opened on this line
                    stack.append((m.group(2), depth))
                    opened = 1
                if stack:
                    mm = mem_rx.match(rawline)
                    if mm:
                        yield frel, stack[-1][0], mm.group(2), mm.group(4), mm.group(1).strip()
                depth += rawline.count("{") - rawline.count("}")
                while stack and depth <= stack[-1][1]:
                    stack.pop()


def build_member_registry(root):
    """(file, member) -> [(class, off, type)] from a (pre-apply) tree snapshot,
    plus the collision set: (class, token) pairs whose target name is already
    declared in the same class."""
    by_file = collections.defaultdict(list)
    classes = collections.defaultdict(lambda: collections.defaultdict(list))
    for frel, cls, name, off, typ in _class_bodies(root):
        by_file[(frel, name)].append((cls, off, typ))
        classes[cls][frel].append((name, off))
    # per (class, file) collision info; then a class-level aggregate for use sites
    collisions = {}          # (cls, file, tok) -> {"same_off": bool}
    agg = {}                 # (cls, tok) -> {"any_sameoff": bool, "any_diffoff": bool, "files": [...]}
    for cls, files in classes.items():
        for f, ms in files.items():
            members = collections.defaultdict(list)
            for n, off in ms:
                members[n].append(off)
            for tok, tgt in MAP.items():
                if tok in members and tgt in members:
                    toffs = [o for o in members[tok] if o]
                    goffs = [o for o in members[tgt] if o]
                    same = bool(toffs and goffs) and set(o.upper() for o in toffs) == set(o.upper() for o in goffs)
                    collisions[(cls, f, tok)] = {"same_off": same}
                    a = agg.setdefault((cls, tok), {"any_sameoff": False, "any_diffoff": False, "files": []})
                    a["files"].append(f)
                    if same:
                        a["any_sameoff"] = True
                    else:
                        a["any_diffoff"] = True
    return by_file, collisions, agg


def build_registry():
    reg = collections.defaultdict(dict)
    for dp, dns, fns in os.walk(SRC):
        rel = os.path.relpath(dp, SRC)
        if rel.split(os.sep)[0] in SKIP_TOP: continue
        for fn in fns:
            if not fn.lower().endswith(".hpp"): continue
            cur = None
            for line in open(os.path.join(dp, fn), encoding="utf-8", errors="replace"):
                cm = re.match(r"^\s*(?:struct|class)\s+([A-Za-z_]\w*)\b[^{;]*\{\s*$", line)
                if cm:
                    cur = cm.group(1); continue
                if cur:
                    mm = re.match(r"^\s*([^;{}()]+?)\b([A-Za-z_]\w*)\s*(\[[^\]]*\])?\s*;\s*(?://\s*(?:0x)?([0-9A-Fa-f]+))?", line)
                    if mm:
                        reg[cur][mm.group(2)] = (mm.group(4), mm.group(1).strip())
    return reg


LOCAL_TYPE = re.compile(r"\b([A-Za-z_]\w*)\s*\*+\s*([A-Za-z_]\w*)\s*(?:;|=[^=]|,|\))")


def local_types_of(lines):
    m = collections.defaultdict(set)
    for l in lines:
        for mm in LOCAL_TYPE.finditer(l):
            m[mm.group(2)].add(mm.group(1))
    return m


def main():
    dry = "--apply" not in sys.argv
    reg = build_registry()
    by_file_head, collisions, coll_agg = build_member_registry(HEAD_SRC)
    files = []
    for dp, dns, fns in os.walk(SRC):
        rel = os.path.relpath(dp, SRC)
        if rel.split(os.sep)[0] in SKIP_TOP: continue
        for fn in fns:
            if fn.lower().endswith(EXTS):
                files.append(os.path.join(dp, fn))
    ledger, excluded = [], []
    per_tok = collections.Counter()
    per_kind = collections.Counter()
    changed_lines = 0
    for p in files:
        rel = os.path.relpath(p, SRC)
        txt = open(p, encoding="utf-8", errors="replace").read()
        lines = txt.split("\n")
        code = blank_comments(txt).split("\n")
        ltypes = local_types_of(lines)
        edits_by_line = {}
        cur_fn_class = None
        for i, (raw, cl) in enumerate(zip(lines, code)):
            fm = re.match(r"^\s*(?:[A-Za-z_][\w:<>\*&\s]*?)\b([A-Za-z_]\w*)::([A-Za-z_~]\w*)\s*\([^;]*\)\s*(?:const\s*)?\{?\s*$", cl)
            if fm:
                cur_fn_class = fm.group(1)
            if "vtable" not in cl and "vtbl" not in cl: continue
            # pass 1: collect candidate occurrences + exclusion decisions (line-atomic)
            occ = []
            line_excluded = False
            for m in TOKRE.finditer(cl):
                tok = m.group(0)
                if tok not in MAP: continue
                kind, recv = token_kind(cl, m.start(), m.end())
                sc = is_scalar(cl, m.start(), m.end())
                # receiver class resolution (this / local); candidates may be ambiguous
                cands = []
                if kind == "member":
                    if recv == "this":
                        if cur_fn_class:
                            cands = [cur_fn_class]
                    elif recv in ltypes:
                        cands = sorted(ltypes[recv])
                    if not cands:
                        excluded.append({"file": rel, "line": i + 1, "tok": tok,
                                         "why": "unresolved-receiver", "cls": "",
                                         "target": MAP[tok], "target_type": "",
                                         "code": raw.strip()[:200]})
                        line_excluded = True
                        continue
                    # use site: bank only if some declaring universe has a
                    # non-same-offset collision (name would rebind to a DIFFERENT slot)
                    bad = [c for c in cands if coll_agg.get((c, tok), {}).get("any_diffoff")]
                    if bad:
                        excluded.append({"file": rel, "line": i + 1, "tok": tok,
                                         "why": "decl-collision(diff-offset universe)", "cls": bad[0],
                                         "target": MAP[tok], "target_type": "",
                                         "code": raw.strip()[:200]})
                        line_excluded = True
                        continue
                    if sc:
                        ptr_hit = False
                        for c in cands:
                            tinfo = reg.get(c, {}).get(MAP[tok])
                            if tinfo and ("*" in tinfo[1] or tinfo[1].strip() in ("void", "IUnknown")):
                                ptr_hit = True
                        if ptr_hit:
                            excluded.append({"file": rel, "line": i + 1, "tok": tok, "why": sc,
                                             "cls": cands[0], "target": MAP[tok],
                                             "target_type": "pointer-typed declared member",
                                             "code": raw.strip()[:200]})
                            line_excluded = True
                            continue
                    cls = cands[0]
                # decl-site class from pre-apply snapshot (brace-tracked)
                if kind == "decl":
                    cands = by_file_head.get((rel, tok), [])
                    cls = cands[0][0] if cands else None
                    if not cands:
                        # not a class member -> local declaration; safe unless the
                        # target name is already a local name in this file
                        if MAP[tok] in ltypes:
                            excluded.append({"file": rel, "line": i + 1, "tok": tok,
                                             "why": "local-name-collision", "cls": "",
                                             "target": MAP[tok], "target_type": "",
                                             "code": raw.strip()[:200]})
                            line_excluded = True
                            continue
                        occ.append((m.start(), m.end(), tok, kind))
                        per_tok[tok] += 1
                        per_kind[kind] += 1
                        continue
                    # decl site: bank iff the declaring class in THIS file already has the target
                    if any((c, rel, tok) in collisions for c, o, t in cands):
                        excluded.append({"file": rel, "line": i + 1, "tok": tok,
                                         "why": "decl-collision(this file)", "cls": cls,
                                         "target": MAP[tok], "target_type": "",
                                         "code": raw.strip()[:200]})
                        line_excluded = True
                        continue
                if sc and kind == "member":
                    if cls and cls in reg and MAP[tok] in reg[cls]:
                        t = reg[cls][MAP[tok]][1]
                        if "*" in t or t.strip() in ("void", "IUnknown"):
                            excluded.append({"file": rel, "line": i + 1, "tok": tok, "why": sc,
                                             "cls": cls, "target": MAP[tok], "target_type": t,
                                             "code": raw.strip()[:200]})
                            line_excluded = True
                occ.append((m.start(), m.end(), tok, kind))
            if line_excluded or not occ:
                continue
            edits = []
            for a, b, tok, kind in occ:
                edits.append((a, b, MAP[tok]))
                per_tok[tok] += 1
                per_kind[kind] += 1
            if edits:
                new = raw
                for a, b, rep in reversed(edits):
                    new = new[:a] + rep + new[b:]
                edits_by_line[i] = (raw, new)
        if edits_by_line:
            changed_lines += len(edits_by_line)
            for i, (old, new) in edits_by_line.items():
                ledger.append({"file": rel, "line": i + 1, "before": old.strip()[:220],
                               "after": new.strip()[:220]})
                if not dry:
                    lines[i] = new
            if not dry:
                open(p, "w", encoding="utf-8", newline="\n").write("\n".join(lines))
    os.makedirs(OUT, exist_ok=True)
    json.dump(ledger, open(os.path.join(OUT, "x78_w1_ledger.jsonl"), "w", encoding="utf-8"), ensure_ascii=False, indent=0)
    json.dump(excluded, open(os.path.join(OUT, "x78_w1_excluded.jsonl"), "w", encoding="utf-8"), ensure_ascii=False, indent=0)
    print(("DRY " if dry else "APPLY ") + f"lines={changed_lines} sites={sum(per_tok.values())} excluded={len(excluded)}")
    print("per-token:", dict(per_tok))
    print("per-kind:", dict(per_kind))
    if excluded:
        print("excluded by file:", collections.Counter(e["file"] for e in excluded).most_common(10))
        for e in excluded[:8]:
            print("  ", e["file"], e["line"], e["tok"], e["cls"], "->", e["target"], e["target_type"], "|", e["code"][:110])


if __name__ == "__main__":
    main()
