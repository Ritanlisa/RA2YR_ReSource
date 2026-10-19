#!/usr/bin/env python3
"""X78 W2: residual vtable-token purge on top of W1.

Handles what W1 left: vtable0 family, the collision/unresolved/scalar leftovers,
vtable5..49 and the bare `vtable` tokens.

Improvements over W1:
  * declaration sites get their TRUE enclosing class (brace-tracked line map)
  * per-(class,token) declaration plan: default offset-convention name; if taken,
    type-appropriate fallback (u32_<off>/ptr_<off>, then _2/_3 suffix) so decl and
    use sites stay consistent
  * anonymous-union vocabulary alias (union { T ptr_0; T vtable0; }) -> drop alias
  * receiver resolution also uses function parameters
Usage: python tools/csp_export/x78_w2_apply.py [--apply]
"""
import os, re, sys, json, collections
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import x78_w1_apply as W

ROOT = W.ROOT
SRC = W.SRC
OUT = W.OUT
HEAD_SRC = W.HEAD_SRC
SKIP_TOP = W.SKIP_TOP
EXTS = W.EXTS

# extended convention map (0-based token family vtable0 = offset 0x0)
MAP = dict(W.MAP)
MAP.update({"vtable0": "ptr_0", "vtbl0": "ptr_0"})
TOKRE = re.compile(r"\b(vtable|vtbl)([0-9_]*)\b")
NUM = re.compile(r"^(?:vtable|vtbl)(\d*)$")


def conv_off(tok):
    n = NUM.match(tok).group(1)
    if n == "":
        return 0
    n = int(n)
    if n == 0:
        return 0
    return 4 * (n - 1)


def class_line_map(path):
    """line -> innermost class name (brace-tracked; supports the multi-line
    `struct X\\n{` form used by tree headers)"""
    cls_open = re.compile(r"\b(struct|class)\s+([A-Za-z_]\w*)\b[^{;]*(\{)?\s*$")
    depth = 0
    stack = []
    m = {}
    pending = None
    for ln, raw in enumerate(open(path, encoding="utf-8", errors="replace"), 1):
        mo = cls_open.search(raw)
        if mo and ";" not in raw[:mo.end()]:
            if mo.group(3):
                stack.append((mo.group(2), depth))
            else:
                pending = mo.group(2)
        elif pending and raw.strip().startswith("{"):
            stack.append((pending, depth))
            pending = None
        elif raw.strip() and not raw.strip().startswith("//") and pending:
            pending = None
        if stack:
            m[ln] = stack[-1][0]
        depth += raw.count("{") - raw.count("}")
        while stack and depth <= stack[-1][1]:
            stack.pop()
    return m


def global_type_map(root):
    """global name -> type (scalar/array externs)"""
    g = {}
    for dp, dns, fns in os.walk(root):
        rel = os.path.relpath(dp, root)
        if rel.split(os.sep)[0] in SKIP_TOP:
            continue
        for fn in fns:
            if not fn.lower().endswith((".hpp", ".h", ".cpp")):
                continue
            for line in open(os.path.join(dp, fn), encoding="utf-8", errors="replace"):
                mm = re.match(r"^\s*(?:extern\s+|static\s+)?([A-Za-z_]\w*(?:\s*\*)?)\s*\**\s*"
                              r"([A-Za-z_]\w*)\s*(\[[^\]]*\])?\s*;", line)
                if mm:
                    g.setdefault(mm.group(2), (mm.group(1), bool(mm.group(3))))
    return g


def class_member_sets(root):
    """class -> {member: set(types)} across all files (pre-apply snapshot)"""
    mem = collections.defaultdict(lambda: collections.defaultdict(set))
    for frel, cls, name, off, typ in W._class_bodies(root):
        mem[cls][name].add(typ)
    return mem


MARK = re.compile(r"^\s*//\s*0x[0-9A-Fa-f]{6}\s*$")


def block_id_map(lines):
    """line -> function-block id; blocks are delimited by the `// 0xADDR` markers"""
    ids = {}
    bid = 0
    for i, l in enumerate(lines, 1):
        if MARK.match(l):
            bid += 1
        ids[i] = bid
    return ids


def parse_params(lines):
    """file-wide receiver-name -> {types} from function parameter lists"""
    out = collections.defaultdict(set)
    sig = re.compile(r"\(([^()]*)\)\s*(?:const\s*)?(?:noexcept\s*)?\{?\s*$")
    param = re.compile(r"([A-Za-z_]\w*)\s*\**\s*&?\s*([A-Za-z_]\w*)\s*(?:=[^,]*)?$")
    for l in lines:
        m = sig.search(l)
        if not m:
            continue
        for part in m.group(1).split(","):
            pm = param.search(part.strip())
            if pm:
                out[pm.group(2)].add(pm.group(1))
    return out


GLOBALS = {}

BIT_AFTER = re.compile(r"^\s*[\)\]]*\s*(>>|<<|\&|\||\^|\*|/|%)\s*")
ARITH_AFTER = re.compile(r"^\s*[\)\]]*\s*(\+|-|==|!=|>=|<=|>|<)\s*")
BIT_BEFORE = re.compile(r"(&|\||\^|>>|<<|\*|/|%)\s*$")
ARITH_BEFORE = re.compile(r"(\+|-)\s*$")
CASTISH_BEFORE = re.compile(r"\(\s*(?:int|unsigned int|unsigned|short|char|long|DWORD|BYTE|WORD|uint\w*|__int\d+)\s*\*?\s*\)\s*$")


def scalar_class(code_line, a, b):
    """'bit' (integer-only ops -> unsafe on pointers) | 'arith' (pointer-safe) | None"""
    before = code_line[:a]
    after = code_line[b:]
    if CASTISH_BEFORE.search(before):
        return "cast"
    if BIT_AFTER.search(after) or BIT_BEFORE.search(before):
        return "bit"
    if ARITH_AFTER.search(after) or ARITH_BEFORE.search(before):
        return "arith"
    return None


def main():
    global GLOBALS
    apply = "--apply" in sys.argv
    cmem = class_member_sets(HEAD_SRC)
    GLOBALS = global_type_map(SRC)
    files = []
    for dp, dns, fns in os.walk(SRC):
        rel = os.path.relpath(dp, SRC)
        if rel.split(os.sep)[0] in SKIP_TOP:
            continue
        for fn in fns:
            if fn.lower().endswith(EXTS):
                files.append(os.path.join(dp, fn))

    # -------- pass 1: declaration plan --------
    plan = {}          # (cls, tok) -> new name or None (bank)
    union_drop = set()  # (rel, line) alias-drop sites
    decl_sites = []
    for p in files:
        rel = os.path.relpath(p, SRC)
        lines = open(p, encoding="utf-8", errors="replace").read().split("\n")
        code = W.blank_comments("\n".join(lines)).split("\n")
        lmap = class_line_map(p)
        for i, (raw, cl) in enumerate(zip(lines, code)):
            if "vtable" not in cl and "vtbl" not in cl:
                continue
            for m in TOKRE.finditer(cl):
                tok = m.group(0)
                kind, recv = W.token_kind(cl, m.start(), m.end())
                if kind != "decl":
                    continue
                cls = lmap.get(i + 1)
                if not cls:
                    continue  # local declaration -> handled in pass 2 as local
                decl_sites.append((rel, i + 1, tok, cls, raw))
                key = (cls, tok)
                if key in plan:
                    continue
                off = None
                om = re.search(r"//\s*(?:0x)?([0-9A-Fa-f]{1,3})\b", raw)
                if om:
                    try:
                        off = int(om.group(1), 16)
                    except ValueError:
                        off = None
                base = MAP.get(tok)
                no_truth = "(no offset truth)" in raw
                if base is None:
                    tm = re.match(r"^\s*([^;]+?)\s+%s\s*(?:\[[^\]]*\])?\s*;" % re.escape(tok), raw)
                    typ = tm.group(1) if tm else ""
                    n = NUM.match(tok).group(1)
                    if no_truth or off is None:
                        # vocabulary-only supply member: X70 literal-suffix rule
                        base = "ptr_%s" % (n if n else "0")
                    else:
                        base = ("ptr_%X" % off) if ("*" in typ) else ("u32_%X" % off)
                if base not in cmem.get(cls, {}):
                    plan[key] = base
                    continue
                # name taken in this class -> type-appropriate unique fallback
                tm = re.match(r"^\s*([^;]+?)\s+%s\s*(?:\[[^\]]*\])?\s*;" % re.escape(tok), raw)
                typ = tm.group(1) if tm else ""
                stem = ("u32_%s" % conv_off(tok)) if ("*" not in typ) else ("ptr_%s" % conv_off(tok))
                cand = stem
                k = 2
                while cand in cmem.get(cls, {}):
                    cand = "%s_%d" % (stem, k)
                    k += 1
                plan[key] = cand
    print("decl plan:", len(plan), "banked:", sum(1 for v in plan.values() if v is None))

    # -------- pass 2: rewrite --------
    ledger, excluded = [], []
    changed_lines = 0
    tok_renamed = collections.Counter()
    for p in files:
        rel = os.path.relpath(p, SRC)
        txt = open(p, encoding="utf-8", errors="replace").read()
        lines = txt.split("\n")
        code = W.blank_comments(txt).split("\n")
        lmap = class_line_map(p)
        bids = block_id_map(lines)
        bltypes = collections.defaultdict(lambda: collections.defaultdict(set))
        for idx, l in enumerate(lines):
            if (idx + 1) in lmap:
                continue
            for mm in W.LOCAL_TYPE.finditer(l):
                bltypes[bids[idx + 1]][mm.group(2)].add(mm.group(1))
        bparams = collections.defaultdict(lambda: collections.defaultdict(set))
        for idx, l in enumerate(lines):
            for kk, vv in parse_params([l]).items():
                bparams[bids[idx + 1]][kk] |= vv
        ltypes = W.local_types_of([l for idx, l in enumerate(lines) if (idx + 1) not in lmap])
        cur_fn_class = None
        edits_by_line = {}
        for i, (raw, cl) in enumerate(zip(lines, code)):
            fm = re.match(r"^\s*(?:[A-Za-z_][\w:<>\*&\s]*?)\b([A-Za-z_]\w*)::([A-Za-z_~]\w*)\s*\([^;]*\)\s*(?:const\s*)?\{?\s*$", cl)
            if fm:
                cur_fn_class = fm.group(1)
            if "vtable" not in cl and "vtbl" not in cl:
                continue
            occ = []
            line_excluded = False
            del_alias = False
            bid = bids[i + 1]
            blocals = collections.defaultdict(set, bltypes[bid])
            for kk, vv in bparams[bid].items():
                blocals[kk] |= vv
            for m in TOKRE.finditer(cl):
                tok = m.group(0)
                if tok not in MAP and NUM.match(tok).group(1) == "":
                    continue
                if tok not in MAP:
                    # N>=5 only if it has a plan
                    pass
                kind, recv = W.token_kind(cl, m.start(), m.end())
                sc = scalar_class(cl, m.start(), m.end())
                # ------- declarations -------
                if kind == "decl":
                    cls = lmap.get(i + 1)
                    if not cls:
                        # local declaration
                        new = MAP.get(tok)
                        if new is None:
                            n = NUM.match(tok).group(1)
                            new = "ptr_%s" % (n if n else "0")
                        if new in blocals and new != tok:
                            excluded.append({"file": rel, "line": i + 1, "tok": tok,
                                             "why": "local-name-collision", "cls": "",
                                             "code": raw.strip()[:200]})
                            line_excluded = True
                            continue
                        occ.append((m.start(), m.end(), new, tok))
                        continue
                    new = plan.get((cls, tok))
                    if new is None:
                        excluded.append({"file": rel, "line": i + 1, "tok": tok, "why": "decl-collision",
                                         "cls": cls, "code": raw.strip()[:200]})
                        line_excluded = True
                        continue
                    # anonymous-union vocabulary alias: drop the redundant name
                    if re.search(r"\bunion\b", raw) and new in raw:
                        del_alias = True
                        excluded.append({"file": rel, "line": i + 1, "tok": tok, "why": "union-alias-dropped",
                                         "cls": cls, "code": raw.strip()[:200]})
                        continue
                    occ.append((m.start(), m.end(), new, tok))
                    continue
                # ------- member uses -------
                if kind == "member":
                    cands = []
                    if recv == "this":
                        if cur_fn_class:
                            cands = [cur_fn_class]
                    elif len(blocals.get(recv, ())) == 1:
                        cands = list(blocals[recv])
                    elif recv in ltypes and len(ltypes[recv]) == 1:
                        cands = list(ltypes[recv])
                    elif recv in GLOBALS:
                        cands = [GLOBALS[recv][0]]
                    else:
                        mrecv = re.match(r"^([A-Za-z_]\w*)\s*\[[^\]]*\]$", recv or "")
                        if mrecv and mrecv.group(1) in GLOBALS:
                            cands = [GLOBALS[mrecv.group(1)][0]]
                    if not cands:
                        excluded.append({"file": rel, "line": i + 1, "tok": tok, "why": "unresolved-receiver",
                                         "cls": "", "code": raw.strip()[:200]})
                        line_excluded = True
                        continue
                    cls = cands[0]
                    new = plan.get((cls, tok))
                    if new is None:
                        if (cls, tok) in plan:
                            excluded.append({"file": rel, "line": i + 1, "tok": tok,
                                             "why": "decl-collision", "cls": cls,
                                             "code": raw.strip()[:200]})
                            line_excluded = True
                            continue
                        # ghost reference in a class without the member:
                        # offset convention for the 1..4 family, X70 literal rule above
                        new = MAP.get(tok)
                        if new is None:
                            n = NUM.match(tok).group(1)
                            new = "ptr_%s" % (n if n else "0")
                    if sc == "bit" and new != tok:
                        tinfo = cmem.get(cls, {}).get(new)
                        if tinfo and any(("*" in t or t.strip() in ("void", "IUnknown")) for t in tinfo):
                            excluded.append({"file": rel, "line": i + 1, "tok": tok, "why": "bit-on-pointer",
                                             "cls": cls, "code": raw.strip()[:200]})
                            line_excluded = True
                            continue
                    occ.append((m.start(), m.end(), new, tok))
                    continue
                # ------- bare names (locals / globals) -------
                new = MAP.get(tok)
                if new is None:
                    n = NUM.match(tok).group(1)
                    new = "ptr_%s" % (n if n else "0")
                occ.append((m.start(), m.end(), new, tok))
            if line_excluded or not occ:
                continue
            new_line = raw
            if del_alias:
                # remove ", <tok>" / "<tok>; " alias inside the union, keep the survivor
                for a, b, new, tok in occ:
                    pass
                new_line = re.sub(r"\s*(?:unsigned\s+int|int|void\s*\*|char)\s+\b(?:vtable|vtbl)\d*\b\s*;\s*", " ", raw)
                new_line = re.sub(r"union\s*\{\s*;?\s*\}", "union { ; }", new_line)
            else:
                for a, b, new, tok in reversed(occ):
                    new_line = new_line[:a] + new + new_line[b:]
                    tok_renamed[tok] += 1
            edits_by_line[i] = (raw, new_line)
        if edits_by_line:
            changed_lines += len(edits_by_line)
            for i, (old, new) in edits_by_line.items():
                ledger.append({"file": rel, "line": i + 1, "before": old.strip()[:220],
                               "after": new.strip()[:220]})
                if apply:
                    lines[i] = new
            if apply:
                open(p, "w", encoding="utf-8", newline="").write("\n".join(lines))
    os.makedirs(OUT, exist_ok=True)
    json.dump(ledger, open(os.path.join(OUT, "x78_w2_ledger.jsonl"), "w", encoding="utf-8"), ensure_ascii=False, indent=0)
    json.dump(excluded, open(os.path.join(OUT, "x78_w2_excluded.jsonl"), "w", encoding="utf-8"), ensure_ascii=False, indent=0)
    print(("APPLY " if apply else "DRY ") + "lines=%d sites=%d excluded=%d" % (changed_lines, sum(tok_renamed.values()), len(excluded)))
    print("by token:", dict(tok_renamed))
    print("excluded by why:", dict(collections.Counter(x["why"] for x in excluded)))
    print("excluded by file:", collections.Counter(x["file"] for x in excluded).most_common(12))
    return 0


if __name__ == "__main__":
    sys.exit(main())
