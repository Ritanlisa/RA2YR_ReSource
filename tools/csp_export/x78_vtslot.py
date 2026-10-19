#!/usr/bin/env python3
"""X78 F2a: rewrite `vt_slot_<BYTE>` call sites to named virtual calls where the
receiver class's header declares an aligned virtual at that byte offset.

Authority:
  * x72_audit.json  (per-class slot-alignment buckets; e-ok = trivially aligned)
  * current headers (virtual declaration order = the class's slot order)

Outcomes per site:
  named   -> `recv->vt_slot_NN(args)` => `recv-><Virtual>(args)`
  bank    -> unresolved receiver / class not aligned (bucket != e-ok) / index out of range
"""
import os, re, sys, json, collections
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import x78_w1_apply as W
import x78_w2_apply as W2

ROOT = W.ROOT
SRC = W.SRC
OUT = W.OUT
SKIP_TOP = W.SKIP_TOP
AUDIT = os.path.join(ROOT, ".omo", "evidence", "optimization", "x72", "x72_audit.json")
SLOT = re.compile(r"\bvt_slot_(\d+)\b")


def class_virtuals():
    """class -> [virtual method names in declaration order]"""
    out = collections.defaultdict(list)
    cls_open = re.compile(r"\b(?:struct|class)\s+([A-Za-z_]\w*)\b[^{;]*\{")
    pending = None
    for dp, dns, fns in os.walk(SRC):
        rel0 = os.path.relpath(dp, SRC)
        if rel0.split(os.sep)[0] in SKIP_TOP:
            continue
        for fn in fns:
            if not fn.lower().endswith((".hpp", ".h")):
                continue
            depth = 0
            stack = []
            for line in open(os.path.join(dp, fn), encoding="utf-8", errors="replace"):
                mo = cls_open.search(line)
                if mo and ";" not in line[:mo.end()]:
                    stack.append((mo.group(1), depth))
                elif pending and line.strip().startswith("{"):
                    stack.append((pending, depth))
                    pending = None
                elif pending and line.strip() and not line.strip().startswith("//"):
                    pending = None
                if stack:
                    vm = re.match(r"^\s*virtual\s+(?:[\w:<>,*&\s]+?)\b([A-Za-z_]\w*)\s*\(", line)
                    if vm:
                        out[stack[-1][0]].append(vm.group(1))
                depth += line.count("{") - line.count("}")
                while stack and depth <= stack[-1][1]:
                    stack.pop()
            # second pass not needed
    return out


def main():
    apply = "--apply" in sys.argv
    audit = json.load(open(AUDIT, encoding="utf-8"))
    bucket = {}
    for r in audit["records"]:
        bucket[r["class"]] = r["bucket"]
    stats_bucket = collections.Counter()
    virt = class_virtuals()
    GLOBALS = W2.global_type_map(SRC)
    named = banked = 0
    bank_reasons = collections.Counter()
    bank_classes = collections.Counter()
    ledger = []
    excluded = []
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
            lmap = W2.class_line_map(p)
            bids = W2.block_id_map(lines)
            bltypes = collections.defaultdict(lambda: collections.defaultdict(set))
            for idx, l in enumerate(lines):
                if (idx + 1) in lmap:
                    continue
                for mm in W.LOCAL_TYPE.finditer(l):
                    bltypes[bids[idx + 1]][mm.group(2)].add(mm.group(1))
            bparams = collections.defaultdict(lambda: collections.defaultdict(set))
            for idx, l in enumerate(lines):
                for kk, vv in W2.parse_params([l]).items():
                    bparams[bids[idx + 1]][kk] |= vv
            cur_fn_class = None
            edits_by_line = {}
            for i, (raw, cl) in enumerate(zip(lines, code)):
                fm = re.match(r"^\s*(?:[A-Za-z_][\w:<>\*&\s]*?)\b([A-Za-z_]\w*)::([A-Za-z_~]\w*)\s*\([^;]*\)\s*(?:const\s*)?\{?\s*$", cl)
                if fm:
                    cur_fn_class = fm.group(1)
                if "vt_slot_" not in cl:
                    continue
                bid = bids[i + 1]
                blocals = collections.defaultdict(set, bltypes[bid])
                for kk, vv in bparams[bid].items():
                    blocals[kk] |= vv
                occ = []
                line_excluded = False
                for m in SLOT.finditer(cl):
                    off = int(m.group(1))
                    # receiver expression before the token
                    before = cl[:m.start()]
                    rm = re.search(r"([A-Za-z_>\]\)\w\.\[\]]*)(\s*->\s*|\s*\.\s*)$", before)
                    recv = None
                    if rm and rm.group(2).strip() in ("->", "."):
                        tail = re.search(r"[A-Za-z_]\w*(?:\s*\[[^\]]*\])?$", rm.group(1))
                        recv = tail.group(0).strip() if tail else rm.group(1).strip()
                    cls = None
                    if recv == "this":
                        cls = cur_fn_class
                    elif recv and len(blocals.get(recv, ())) == 1:
                        cls = list(blocals[recv])[0]
                    elif recv and recv in GLOBALS:
                        cls = GLOBALS[recv][0]
                    else:
                        mr = re.match(r"^([A-Za-z_]\w*)\s*\[[^\]]*\]$", recv or "")
                        if mr and mr.group(1) in GLOBALS:
                            cls = GLOBALS[mr.group(1)][0]
                    if not cls:
                        banked += 1
                        bank_reasons["unresolved-receiver"] += 1
                        excluded.append({"file": rel, "line": i + 1, "tok": m.group(0), "why": "unresolved-receiver",
                                         "cls": recv or "", "code": raw.strip()[:200]})
                        line_excluded = True
                        continue
                    b = bucket.get(cls, None)
                    stats_bucket[(cls, b or "not-in-audit")] += 1
                    if b != "e-ok":
                        banked += 1
                        bank_reasons["class-not-aligned:" + str(b or "not-in-audit")] += 1
                        bank_classes[cls] += 1
                        excluded.append({"file": rel, "line": i + 1, "tok": m.group(0),
                                         "why": "class-not-aligned", "cls": cls + " [" + str(b or "not-in-audit") + "]",
                                         "code": raw.strip()[:200]})
                        line_excluded = True
                        continue
                    vs = virt.get(cls, [])
                    idx = off // 4
                    if idx >= len(vs):
                        banked += 1
                        bank_reasons["slot-out-of-range"] += 1
                        excluded.append({"file": rel, "line": i + 1, "tok": m.group(0),
                                         "why": "slot-out-of-range", "cls": cls,
                                         "code": raw.strip()[:200]})
                        line_excluded = True
                        continue
                    occ.append((m.start(), m.end(), vs[idx], m.group(0)))
                    named += 1
                if line_excluded or not occ:
                    continue
                newline = raw
                for a, b2, name, tok in reversed(occ):
                    newline = newline[:a] + name + newline[b2:]
                edits_by_line[i] = (raw, newline)
            if edits_by_line:
                for i, (old, new) in edits_by_line.items():
                    ledger.append({"file": rel, "line": i + 1, "before": old.strip()[:200], "after": new.strip()[:200]})
                    if apply:
                        lines[i] = new
                if apply:
                    open(p, "w", encoding="utf-8", newline="").write("\n".join(lines))
    os.makedirs(OUT, exist_ok=True)
    json.dump(ledger, open(os.path.join(OUT, "x78_vtslot_ledger.jsonl"), "w", encoding="utf-8"), ensure_ascii=False, indent=0)
    json.dump(excluded, open(os.path.join(OUT, "x78_vtslot_excluded.jsonl"), "w", encoding="utf-8"), ensure_ascii=False, indent=0)
    print(("APPLY " if apply else "DRY ") + "named=%d banked=%d" % (named, banked))
    print("bank reasons:", dict(bank_reasons))
    print("banked classes top:", bank_classes.most_common(12))
    print("sample resolved classes:", stats_bucket.most_common(12))
    return 0


if __name__ == "__main__":
    sys.exit(main())
