#!/usr/bin/env python3
"""CC/signedness evidence audit over the whole OK pool (read-only)."""
import json, os, re, glob

REPO = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", ".."))
EXPORT = os.path.join(REPO, "decompile-results", "full_export")
HERE = os.path.dirname(__file__)


def load_json(p):
    with open(p, encoding="utf-8") as f:
        return json.load(f)


def pseudo_of(addr, eidx):
    key = addr[2:].upper().zfill(8)
    ent = eidx.get(key)
    if not ent:
        return None
    path = os.path.join(EXPORT, ent["file"].replace("/", os.sep))
    if not os.path.exists(path):
        return None
    txt = open(path, encoding="utf-8", errors="replace").read()
    pos = txt.find("// addr=0x%s" % key)
    if pos < 0:
        return None
    end = txt.find("// ======================================================================", pos + 1)
    return txt[pos:end if end > 0 else len(txt)].strip()


def find_sig(root, emitted, name):
    method = (emitted or name or "").split("::")[-1]
    cls = (emitted or name or "").split("::")[0] if "::" in (emitted or name or "") else None
    best = None
    for dp, _, fns in os.walk(root):
        for fn in fns:
            if not fn.lower().endswith(".cpp"):
                continue
            p = os.path.join(dp, fn)
            try:
                txt = open(p, encoding="utf-8", errors="replace").read()
            except Exception:
                continue
            needle = ("%s::%s(" % (cls, method)) if cls else (" %s(" % method)
            pos = txt.find(needle)
            if pos < 0:
                pos = txt.find("::%s(" % method)
            if pos < 0:
                continue
            ls = txt.rfind("\n", 0, pos) + 1
            le = txt.find("\n", pos)
            sig = txt[ls:le if le > 0 else len(txt)].strip()
            if "{" not in sig:  # multi-line signature
                sig = txt[ls:txt.find("{", pos)].strip().replace("\n", " ")
            return sig
    return None


def cc_emit(sig):
    if not sig:
        return None
    if "__stdcall" in sig:
        return "stdcall"
    if "__fastcall" in sig:
        return "fastcall"
    if "__cdecl" in sig:
        return "cdecl"
    return "thiscall-member"


def cc_proto(pseudo):
    if not pseudo:
        return None
    m = re.search(r"// proto: ([^\n]+)", pseudo)
    return m.group(1).strip() if m else None


def proto_cc(p):
    if not p:
        return None
    if "__thiscall" in p:
        return "thiscall"
    if "__stdcall" in p:
        return "stdcall"
    if "__fastcall" in p:
        return "fastcall"
    if "__cdecl" in p:
        return "cdecl"
    return "other"


def disasm_evidence(pseudo):
    if not pseudo:
        return {"inst": 0, "ecx": False, "edx": False, "ret_imm": []}
    if "---- IDA disasm ----" not in pseudo:
        return {"inst": 0, "ecx": False, "edx": False, "ret_imm": []}
    dis = pseudo.split("---- IDA disasm ----")[-1].split("---- Hex-Rays ----")[0]
    inst = [l.strip() for l in dis.splitlines() if re.match(r"//\s+[0-9a-fA-F]+:", l)]
    early = inst[:8]
    return {
        "inst": len(inst),
        "ecx": any("ecx" in l for l in early),
        "edx": any("edx" in l for l in early),
        "ret_imm": [a or b for a, b in re.findall(r"retn?\s+([0-9a-fA-Fx]+)|ret\s+([0-9a-fA-Fx]+)", dis)][:5],
    }


def main():
    idx = load_json(os.path.join(HERE, "index.json"))
    eidx = load_json(os.path.join(EXPORT, "index.json"))
    rows = []
    missing = []
    for addr, rec in sorted(idx["best"].items()):
        ps = pseudo_of(addr, eidx)
        sig = find_sig(rec["dir"], rec.get("emitted"), rec.get("name"))
        if not sig:
            missing.append(addr)
        ev = disasm_evidence(ps)
        pc = cc_proto(ps)
        ec = cc_emit(sig)
        rows.append({"addr": addr, "name": rec.get("name"), "emitted": rec.get("emitted"),
                     "unit": rec.get("unit"), "size": rec.get("orig_size"),
                     "proto": ps and (re.search(r"// proto: ([^\n]+)", ps).group(1) if re.search(r"// proto: ([^\n]+)", ps) else None),
                     "proto_cc": pc, "emit_cc": ec, "sig": sig,
                     "ecx": ev["ecx"], "edx": ev["edx"], "ret_imm": ev["ret_imm"], "n_inst": ev["inst"]})
    json.dump(rows, open(os.path.join(HERE, "cc_rows.json"), "w", encoding="utf-8"), indent=1)
    from collections import Counter
    print("rows", len(rows), "missing sig", len(missing), missing[:10])
    print("emit cc:", Counter(r["emit_cc"] for r in rows))
    print("proto cc:", Counter(r["proto_cc"] for r in rows))
    # thiscall member emitted but ECX not touched in first 8 insns
    odd = [r for r in rows if r["emit_cc"] == "thiscall-member" and not r["ecx"]]
    print("\nthis-member emitted but no early ECX:", len(odd))
    for r in odd[:40]:
        print("  %-9s %-46s size=%-4s proto=%-28s ret=%s inst=%s" % (r["addr"], r["name"], r["size"], r["proto"], r["ret_imm"], r["n_inst"]))
    # proto thiscall but emitted not thiscall
    odd2 = [r for r in rows if r["proto_cc"] == "thiscall" and r["emit_cc"] != "thiscall-member"]
    print("\nproto thiscall but emitted non-member:", len(odd2))
    for r in odd2[:20]:
        print("  %-9s %-46s emit=%-12s proto=%s" % (r["addr"], r["name"], r["emit_cc"], r["proto"]))
    # proto stdcall emitted thiscall-member (no ecx evidence = ambiguous)
    odd3 = [r for r in rows if r["proto_cc"] == "stdcall" and r["emit_cc"] == "thiscall-member"]
    print("\nproto stdcall -> emitted thiscall-member:", len(odd3))
    for r in odd3[:40]:
        print("  %-9s %-46s ecx=%-5s ret=%s size=%s" % (r["addr"], r["name"], r["ecx"], r["ret_imm"], r["size"]))
    # fastcall check
    odd4 = [r for r in rows if r["proto_cc"] == "fastcall" or r["emit_cc"] == "fastcall"]
    print("\nfastcall rows:", len(odd4))
    for r in odd4:
        print("  %-9s %-46s proto=%-24s emit=%-12s ecx=%-5s edx=%-5s" % (r["addr"], r["name"], r["proto"], r["emit_cc"], r["ecx"], r["edx"]))


if __name__ == "__main__":
    main()
