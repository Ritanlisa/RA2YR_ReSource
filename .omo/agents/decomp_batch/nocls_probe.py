#!/usr/bin/env python3
"""nocls_probe.py -- evidence collection for the 537 NO_CLS functions.

Sources (priority order per task):
  a. vtable_slot_authority main-table slot ownership (binary identity)
  b. full_export proto `Class *this` receiver type
  c. calling convention + ECX use in the entry disasm (member-ness)
  d. name class prefix (weakest)
Also reports whether the candidate class exists in the registry class
table, and if not, whether a canon/alias mapping gives a registry key.
"""
import json
import os
import re
import sys

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", "..", ".."))
sys.path.insert(0, os.path.join(ROOT, "tools", "decomp_sys"))
sys.path.insert(0, os.path.join(ROOT, "tools"))
sys.path.insert(0, ROOT)

import pseudo  # noqa: E402

STATE = os.path.join(ROOT, ".omo", "agents", "decomp_batch")


def j(p):
    with open(os.path.join(ROOT, p), encoding="utf-8") as f:
        return json.load(f)


def norm_addr(a):
    try:
        return int(str(a), 16)
    except (ValueError, TypeError):
        return None


def load_canon():
    align = j("anchors/class_name_align.json")
    alias = j("anchors/mangled_alias.json")
    r2c = {}
    for raw, v in (align.get("rtti_to_canon") or {}).items():
        if isinstance(v, dict) and v.get("canon"):
            r2c[raw] = v["canon"]
        elif isinstance(v, str):
            r2c[raw] = v

    def canon(name):
        out = name
        if name in r2c:
            out = r2c[name]
        elif name in alias:
            out = alias[name]
        elif name.startswith("?$"):
            m = re.match(r"^\?\$(\w+)@(.*)@@?$", name)
            if m:
                out = "%s_%s" % (m.group(1),
                                 re.sub(r"[^A-Za-z0-9_]", "_", m.group(2)))
            else:
                out = re.sub(r"[^A-Za-z0-9_]", "_", name.strip("?"))
        if not re.match(r"^[A-Za-z_]\w*$", out or ""):
            out = re.sub(r"[^A-Za-z0-9_]", "_", out or "Unnamed")
        return out
    return canon


def main():
    reg = j(".omo/decomp_sys/decomp_registry.json")
    vsa = j("anchors/vtable_slot_authority.json")
    canon = load_canon()
    classes = reg["classes"]
    rows = [json.loads(line) for line in
            open(os.path.join(STATE, "results.jsonl"), encoding="utf-8")
            if line.strip()]
    nocls = [r["addr"] for r in rows if r.get("verdict") == "NO_CLS"]
    # de-dup preserving order
    seen = set()
    addrs = []
    for a in nocls:
        n = norm_addr(a)
        if n is not None and n not in seen:
            seen.add(n)
            addrs.append("0x%x" % n)

    # VSA addr -> [(raw_cls, canon_cls, slot, name)]
    vsa_idx = {}
    for raw_cls, ent in vsa.items():
        cc = canon(raw_cls)
        for sn, srec in (ent.get("slots") or {}).items():
            n = norm_addr(srec.get("addr") or "")
            if n is None:
                continue
            vsa_idx.setdefault(n, []).append(
                (raw_cls, cc, int(sn), srec.get("name")))

    ECX = re.compile(r"\becx\b|\bcl\b|\bcx\b", re.I)
    THIS_RE = re.compile(r"\(\s*([A-Za-z_?$@][\w?$@]*)\s*\*\s*_?this\b")
    ARG1_PTR_RE = re.compile(r"\(\s*([A-Za-z_?$@][\w?$@]*)\s*\*\s*(?:[\w]+)?\s*[,)]")

    out = []
    for addr in addrs:
        fn = reg["functions"].get(addr) or {}
        rec = {
            "addr": addr,
            "name": fn.get("name"),
            "cc": fn.get("cc"),
            "ret": fn.get("ret"),
            "nparams": len(fn.get("params") or []),
            "cls": fn.get("cls"),
            "evidence": {},
        }
        try:
            ex = pseudo.fetch(addr)
            proto = ex.proto or ""
        except KeyError as e:
            rec["evidence"]["proto_error"] = str(e)
            proto = ""
            ex = None
        rec["proto"] = proto
        # --- a. VSA ownership
        n = norm_addr(addr)
        claims = vsa_idx.get(n) or []
        if claims:
            rec["evidence"]["vsa"] = [
                {"raw": c[0], "canon": c[1], "slot": c[2], "slot_name": c[3]}
                for c in claims]
            ccls = sorted({c[1] for c in claims})
            if len(ccls) == 1:
                rec["candidate"] = ccls[0]
                rec["candidate_src"] = "vsa"
        # --- b. proto this
        m = THIS_RE.search(proto)
        if m:
            t = m.group(1)
            tc = canon(t)
            rec["evidence"]["proto_this"] = {
                "raw": t, "canon": tc, "in_registry": t in classes,
                "canon_in_registry": tc in classes}
            if not rec.get("candidate"):
                rec["candidate"] = tc
                rec["candidate_src"] = "proto_this"
        else:
            # proto first arg class pointer under any name (weaker)
            mm = ARG1_PTR_RE.search(proto)
            if mm:
                t = mm.group(1)
                tc = canon(t)
                rec["evidence"]["proto_arg1_ptr"] = {
                    "raw": t, "canon": tc, "in_registry": t in classes,
                    "canon_in_registry": tc in classes}
        # --- c. cc + ECX use
        if ex is not None:
            head = ex.disasm_lines[:20]
            ecx = any(ECX.search(h) for h in head)
            rec["evidence"]["ecx"] = {
                "cc": fn.get("cc"), "ecx_in_first20": ecx,
                "first": head[:4]}
            if not rec.get("candidate") and fn.get("cc") == "thiscall" \
                    and ecx:
                rec["evidence"]["member_ish"] = True
        # --- d. name prefix
        name = fn.get("name") or ""
        if "::" in name:
            p = name.split("::")[0]
            pc = canon(p)
            rec["evidence"]["name_prefix"] = {
                "raw": p, "canon": pc, "in_registry": p in classes,
                "canon_in_registry": pc in classes}
            if not rec.get("candidate"):
                rec["candidate"] = pc
                rec["candidate_src"] = "name_prefix"
        if rec.get("candidate"):
            c = rec["candidate"]
            rec["candidate_in_registry"] = bool(
                any(k in classes for k in (c, c + "Class")))
        out.append(rec)

    path = os.path.join(STATE, "nocls_probe.json")
    with open(path, "w", encoding="utf-8") as f:
        json.dump(out, f, indent=1, ensure_ascii=False)

    from collections import Counter
    stat = Counter()
    for r in out:
        if r.get("candidate"):
            stat["cand:" + r["candidate_src"]] += 1
            if r.get("candidate_in_registry"):
                stat["cand_in_registry"] += 1
            else:
                stat["cand_missing_registry"] += 1
        else:
            stat["no_candidate"] += 1
            if r["evidence"].get("member_ish"):
                stat["no_candidate_memberish"] += 1
    print(json.dumps({"n": len(out), "stat": dict(stat)}, indent=1))

    # quick sample of candidates / missing
    miss = [r for r in out if r.get("candidate")
            and not r.get("candidate_in_registry")]
    print("--- candidates missing from registry (first 15)")
    for r in miss[:15]:
        print(r["addr"], r["name"], "->", r["candidate"],
              "src", r["candidate_src"], "|", r["evidence"].
              get(r["candidate_src"] if r["candidate_src"] != "name_prefix"
                  else "name_prefix"))
    print("--- no candidate (first 10)")
    for r in [x for x in out if not x.get("candidate")][:10]:
        print(r["addr"], r["name"], "| cc", r["cc"], "|",
              r["evidence"].get("ecx"))
    return 0


if __name__ == "__main__":
    sys.exit(main())
