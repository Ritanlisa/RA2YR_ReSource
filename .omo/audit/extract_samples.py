#!/usr/bin/env python3
"""Extract audit samples (read-only): cpp body + pseudo + disasm + hpp + flags."""
import json, os, re, glob, sys

REPO = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", ".."))
EXPORT = os.path.join(REPO, "decompile-results", "full_export")
INDEX_PATH = os.path.join(os.path.dirname(__file__), "index.json")

OK_SAMPLE = [
    # addr, stratum label
    ("0x401940", "A4-identity+13att"), ("0x4ca160", "A4-rv2"), ("0x50e370", "A4-rv2"),
    ("0x48ba80", "A4-clean"), ("0x4722d0", "A4-clean"), ("0x4389f0", "A4-clean"),
    ("0x408d50", "A4-clean"), ("0x411630", "A4-clean"), ("0x540f90", "A4-identity"),
    ("0x5c0f30", "A4-identity"), ("0x4886a0", "A4-identity"), ("0x6241c0", "A4-identity+9att"),
    ("0x55ab70", "B56-stub"), ("0x55ac60", "B56-stubtrue"), ("0x4ca750", "B56-const12"),
    ("0x5b2e40", "B56-identity"), ("0x5d6310", "B56-former-ret_norm"), ("0x642ad0", "B56-former-width"),
    ("0x65c600", "B56-stub"), ("0x5f3530", "B56-send"), ("0x7b1750", "B56-send"),
    ("0x4b4c60", "B56-identity"), ("0x7bab70", "B56-CF-to-MATCH"),
    ("0x408070", "C78-query"), ("0x408520", "C78-fastcall"), ("0x40d230", "C78-addref"),
    ("0x40d240", "C78-release"), ("0x41c010", "C78-query"), ("0x681100", "C78-rv2"),
    ("0x746d80", "C78-rv2"), ("0x759f70", "C78-rv2"), ("0x600670", "C78-sites22"),
    ("0x70c5b0", "C78-identity"), ("0x406520", "C78-sites11"), ("0x425270", "C78-rv2-vtable"),
    ("0x557b00", "C78-rv2"),
    ("0x4722c0", "D11-mirror"), ("0x4870d0", "D17-array"), ("0x486380", "D20-former-ret_norm"),
    ("0x602ae0", "D161-substantive"),
]

NG_SAMPLE = [
    ("0x405c00", "branch_polarity"), ("0x526960", "branch_polarity"),
    ("0x48b570", "branch_order"), ("0x565b00", "branch_order"),
    ("0x499860", "codegen_shape"), ("0x448070", "codegen_shape"),
    ("0x42e820", "frame_sched"), ("0x472160", "frame_sched"),
    ("0x7c81db", "regalloc"), ("0x4863d0", "regalloc"),
    ("0x7b0f50", "const_fold"), ("0x5865f0", "const_fold"),
    ("0x75f140", "extern_reloc"), ("0x475610", "extern_reloc"),
    ("0x4766f0", "width_mismatch"), ("0x726900", "width_mismatch"),
    ("0x56d100", "signedness"), ("0x5176a0", "ret_norm"),
    ("0x65a820", "cc_mismatch"), ("0x4c9220", "eval_order"),
]


def load_index():
    with open(INDEX_PATH, encoding="utf-8") as f:
        return json.load(f)


def load_export_index():
    with open(os.path.join(EXPORT, "index.json"), encoding="utf-8") as f:
        return json.load(f)


def pseudo_block(addr, eidx):
    key = addr[2:].upper().zfill(8)
    ent = eidx.get(key)
    if not ent:
        return None, None
    path = os.path.join(EXPORT, ent["file"].replace("/", os.sep))
    if not os.path.exists(path):
        return None, ent
    txt = open(path, encoding="utf-8", errors="replace").read()
    marker = "// addr=0x%s" % key
    pos = txt.find(marker)
    if pos < 0:
        # try lowercase
        pos = txt.find(marker.lower())
    if pos < 0:
        return None, ent
    end = txt.find("// ======================================================================", pos + 1)
    if end < 0:
        end = len(txt)
    return txt[pos:end].strip(), ent


def find_cpp(root, emitted, name):
    cands = []
    for dp, _, fns in os.walk(root):
        for fn in fns:
            if fn.lower().endswith(".cpp"):
                cands.append(os.path.join(dp, fn))
    method = (emitted or name or "").split("::")[-1]
    hits = []
    for p in cands:
        try:
            txt = open(p, encoding="utf-8", errors="replace").read()
        except Exception:
            continue
        if "::%s(" % method in txt or " %s(" % method in txt:
            hits.append((p, txt))
    if not hits:
        return None, None
    # prefer per-function file then exact emitted class
    if emitted:
        cls = emitted.split("::")[0]
        h2 = [h for h in hits if cls + "::" + method + "(" in h[1]]
        if h2:
            hits = h2
    for p, txt in hits:
        for pat in ("::%s(" % method, " %s(" % method):
            pos = txt.find(pat)
            if pos >= 0:
                return p, txt
    return hits[0]


def extract_body(txt, emitted, name):
    method = (emitted or name or "").split("::")[-1]
    cls = (emitted or name or "").split("::")[0] if "::" in (emitted or name or "") else None
    needle = ("%s::%s(" % (cls, method)) if cls else (" %s(" % method)
    pos = txt.find(needle)
    if pos < 0:
        pos = txt.find("::%s(" % method)
    if pos < 0:
        pos = txt.find(" %s(" % method)
    if pos < 0:
        return None, None
    # signature start: line start
    ls = txt.rfind("\n", 0, pos) + 1
    brace = txt.find("{", pos)
    if brace < 0:
        return None, None
    # brace match
    depth = 0
    i = brace
    while i < len(txt):
        c = txt[i]
        if c == "{":
            depth += 1
        elif c == "}":
            depth -= 1
            if depth == 0:
                sig_line = txt[ls:txt.find("\n", ls)].strip() if txt.find("\n", ls) >= 0 else txt[ls:].strip()
                return sig_line, txt[ls:i + 1]
        i += 1
    return None, None


def find_hpp(root, unit):
    if not unit:
        return None
    for dp, _, fns in os.walk(root):
        for fn in fns:
            if fn.lower() == (unit + ".hpp").lower():
                return os.path.join(dp, fn)
    return None


def flags(body):
    if not body:
        return {}
    return {
        "lines": body.count("\n") + 1,
        "goto": len(re.findall(r"\bgoto\b", body)),
        "labels": len(re.findall(r"\bLABEL_\w+", body)),
        "returns": len(re.findall(r"\breturn\b", body)),
        "asm": len(re.findall(r"__asm\b|asm\s*\{", body)),
        "pragma": len(re.findall(r"#pragma", body)),
        "union": len(re.findall(r"\bunion\b", body)),
        "qmark": body.count("?"),
        "cast_deref_plus": len(re.findall(r"\*\s*\(\s*\w[\w\s]*\*+\s*\)\s*\([^()]*\+", body)),
        "this_ptr_arith": len(re.findall(r"\bthis\s*\+\s*(?:0x)?\d+", body)),
        "cast_this_arith": len(re.findall(r"\(\s*\w[\w\s]*\*+\s*\)\s*this\s*\+", body)),
        "this_subscript": len(re.findall(r"\bthis\s*\[", body)),
        "cast_this_index": len(re.findall(r"\(\s*\(\s*\w[\w\s]*\*+\s*\)\s*this\s*\)\s*\[", body)),
        "member_pun": len(re.findall(r"\(\s*\w[\w\s]*\*+\s*\)\s*&\s*this->", body)),
        "int_cost": len(re.findall(r"\(int\)\s*\(", body)),
        "placeholders": sorted(set(re.findall(r"\b(?:sub_[0-9A-Fa-f]+|GetMember\d+|field_[0-9A-Fa-fx]+|dword_[0-9A-Fa-f]+|unk_[0-9A-Fa-f]+|Stub\w*|COMStub\w*|Ret(?:urn)?\w*_\w+|vt_entry_\w+)\b", body))),
    }


def make_record(addr, label, best, eidx):
    r = best.get(addr)
    if not r:
        return {"addr": addr, "label": label, "error": "no index record"}
    root = r["dir"]
    if not os.path.isdir(root):
        return {"addr": addr, "label": label, "error": "dir missing: " + root}
    cpp_path, cpp_txt = find_cpp(root, r.get("emitted"), r.get("name"))
    sig, body = extract_body(cpp_txt, r.get("emitted"), r.get("name")) if cpp_txt else (None, None)
    pblock, pent = pseudo_block(addr, eidx)
    hpp_path = find_hpp(root, r.get("unit"))
    hpp = open(hpp_path, encoding="utf-8", errors="replace").read() if hpp_path else None
    rec = dict(addr=addr, label=label, name=r.get("name"), emitted=r.get("emitted"),
               unit=r.get("unit"), orig_size=r.get("orig_size"), ours_size=r.get("ours_size"),
               rv=r.get("rule_violations"), sites=r.get("sites"), cls_src=r.get("cls_src"),
               dir=root, cpp=cpp_path, signature=sig, body=body,
               hpp=hpp_path, hpp_text=hpp,
               pseudo=pblock, pseudo_ent=pent, flags=flags(body))
    # orig/ours asm json
    tag = addr[2:].upper()
    for kind in ("orig", "ours"):
        p = None
        for cand in glob.glob(os.path.join(root, "**", "%s_%s.json" % (kind, tag)), recursive=True):
            p = cand
            break
        rec[kind] = json.load(open(p, encoding="utf-8")) if p else None
        rec[kind + "_path"] = p
    return rec


def main():
    idx = load_index()
    best = idx["best"]
    eidx = load_export_index()
    out = {"ok": [], "ng": []}
    for addr, label in OK_SAMPLE:
        out["ok"].append(make_record(addr, label, best, eidx))
    # NG: find latest mismatch artifact per address
    led = json.load(open(os.path.join(REPO, ".omo", "codegen_match", "status.json"), encoding="utf-8"))
    ng_best = {}
    for p in glob.glob(os.path.join(REPO, ".omo", "decomp_batch", "**", "part_report.json"), recursive=True) + \
             glob.glob(os.path.join(REPO, ".omo", "decomp_batch", "**", "batch_report.json"), recursive=True):
        try:
            j = json.load(open(p, encoding="utf-8"))
        except Exception:
            continue
        for r in j.get("results", []):
            a = r.get("addr", "").lower()
            if led.get(a, {}).get("status") != "NG" or r.get("verdict") != "MISMATCH":
                continue
            mt = os.path.getmtime(p)
            cur = ng_best.get(a)
            if cur is None or mt > cur[0]:
                ng_best[a] = (mt, dict(dir=os.path.dirname(p), name=r.get("name"), emitted=r.get("emitted"),
                                       unit=r.get("unit"), orig_size=r.get("orig_size"), ours_size=r.get("ours_size"),
                                       rv=r.get("rule_violations"), sites=r.get("sites"), cls_src=r.get("cls_src"),
                                       pathology=r.get("pathology"), note=r.get("note"), first_diff=r.get("first_diff")))
    for addr, patho in NG_SAMPLE:
        rec = make_record(addr, patho, {a: v[1] for a, v in ng_best.items()}, eidx)
        if "error" not in rec and ng_best.get(addr):
            rec["artifact"] = ng_best[addr][1]
        out["ng"].append(rec)
    p = os.path.join(os.path.dirname(__file__), "samples.json")
    json.dump(out, open(p, "w", encoding="utf-8"), indent=1)
    print("wrote", p)
    for grp in ("ok", "ng"):
        print(grp, len(out[grp]), "errors:", sum(1 for r in out[grp] if r.get("error")))
        for r in out[grp]:
            if r.get("error"):
                print("  ERR", r["addr"], r["label"], r["error"])
            elif not r.get("body"):
                print("  NOBODY", r["addr"], r["label"], r.get("dir"), r.get("name"))
            else:
                print("  OK  %-9s %-22s %-46s cpp=%s" % (r["addr"], r["label"], r.get("name"), os.path.basename(r.get("cpp") or "?")))


if __name__ == "__main__":
    main()
