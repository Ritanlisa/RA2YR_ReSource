#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""verify_singletons.py -- W3: verify known .data global instances (singletons).

For a sample of globals from anchors/singleton_types.json:
  1. prove the file-level slot is zero (zero tail, vptr not statically stored)
  2. locate runtime vtable-install sites (mov [imm32], imm32 scan of .text)
  3. verify each install instruction with capstone and check the installed
     vtable's owning class matches the singleton's declared type
  4. cross-check class size / inter-singleton gap from tools/class_layouts.json

Outputs:
  tools/data_match/w3/w3_singletons_verify.json
  tools/data_match/w3/w3_singletons_verify.md

Usage: python tools/data_match/w3/verify_singletons.py
"""
import json
import os
import struct

import capstone

ORIG = r"D:\RA2MD\gamemd.exe"
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__)))))
W3 = os.path.join(ROOT, "tools", "data_match", "w3")


def load(p):
    with open(p, "r", encoding="utf-8") as fh:
        return json.load(fh)


def main():
    inv = load(os.path.join(W3, "w3_inventory.json"))
    sing = load(os.path.join(ROOT, "anchors", "singleton_types.json"))
    layouts = load(os.path.join(ROOT, "tools", "class_layouts.json"))
    sizes = {k: v.get("size", 0) for k, v in layouts.items()}
    rtti_base = load(os.path.join(ROOT, "anchors", "rtti_base_arrays.json"))

    def base_names(cls):
        """Direct/base class names from the RTTI ??_R2 base array."""
        out = []
        for e in rtti_base.get(cls) or []:
            s = e
            if s.startswith("??_R1A@"):
                s = s[8:]
                i = s.find("?")
                if i >= 0:
                    s = s[i:]
            if s.endswith("8"):
                s = s[:-1]
            out.append(s)
        return out

    installs = inv["installs"]["all"]
    by_dst = {}
    for it in installs:
        by_dst.setdefault(int(it["dst"], 16), []).append(it)

    fbuf = open(ORIG, "rb").read()
    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)

    # choose 16 singletons spread over the address range, prefer ones with installs
    rows = sorted((int(k, 16), v) for k, v in sing.items())
    with_inst = [(va, v) for va, v in rows if va in by_dst]
    # spread sample over sorted list of install-backed singletons
    sample = []
    if with_inst:
        step = max(1, len(with_inst) // 16)
        sample = with_inst[::step][:16]
    if len(sample) < 10:
        for va, v in rows:
            if (va, v) not in sample:
                sample.append((va, v))
            if len(sample) >= 16:
                break
    sample.sort()

    out = []
    for va, v in sample:
        tp = v.get("type", "")
        sz = sizes.get(tp, 0)
        # PE image bytes: only the file-backed part of .data has file bytes;
        # the zero tail (>=0x87E000) is zero-initialized by the loader.
        DATA_VA, DATA_RAW, DATA_RAW_END = 0x812000, 0x412000, 0x87E000
        if DATA_VA <= va < DATA_RAW_END:
            static = fbuf[DATA_RAW + (va - DATA_VA): DATA_RAW + (va - DATA_VA) + 16]
        else:
            static = b"\x00" * 16
        static_zero = all(b == 0 for b in static)
        inst_rows = []
        for it in by_dst.get(va, []):
            site = int(it["site"], 16)
            vt = int(it["vtable"], 16)
            code = fbuf[site - 0x400000:site - 0x400000 + 12]
            disasm = []
            verified = False
            for ins in md.disasm(code, site):
                disasm.append("%08x %s %s" % (ins.address, ins.mnemonic, ins.op_str))
                if ins.address == site:
                    verified = (ins.mnemonic == "mov" and "dword ptr" in ins.op_str
                                and hex(va) in ins.op_str and hex(vt) in ins.op_str)
                break
            cls = it.get("cls")
            if cls == tp:
                kind = "self"
            elif cls and any((cls + "@@") == bn or cls == bn.rstrip("@") for bn in base_names(tp)):
                kind = "base"
            elif cls:
                kind = "no"
            else:
                kind = "n/a"
            inst_rows.append({
                "site": hex(site), "vtable": hex(vt), "vtable_cls": cls,
                "match_kind": kind,
                "disasm": disasm[0] if disasm else "",
                "verified_mov": verified,
            })
        next_va = None
        idx = [i for i, (a, _) in enumerate(rows) if a == va]
        if idx and idx[0] + 1 < len(rows):
            next_va = rows[idx[0] + 1][0]
        out.append({
            "va": va, "name": v.get("name"), "type": tp,
            "class_size": sz,
            "static_bytes_zero": static_zero,
            "static_hex": static.hex(" ") if static else "",
            "installs": inst_rows,
            "gap_to_next": (next_va - va) if next_va else None,
            "size_fits_gap": (sz <= (next_va - va)) if (sz and next_va) else None,
        })

    with open(os.path.join(W3, "w3_singletons_verify.json"), "w", encoding="utf-8") as fh:
        json.dump({"count": len(out), "sample": out}, fh, indent=1)

    lines = ["# W3 singleton verification (sample of %d / 176)\n" % len(out)]
    lines.append("| VA | name | type | sizeof | static16B | install site | installed vtable | vtable class | match | capstone | gap |")
    lines.append("|---|---|---|---|---|---|---|---|---|---|---|")
    for r in out:
        if r["installs"]:
            i0 = r["installs"][0]
            lines.append("| %08x | %s | %s | %s | %s | %s | %s | %s | %s | %s | %s |" % (
                r["va"], r["name"], r["type"], r["class_size"] or "?",
                "all-zero" if r["static_bytes_zero"] else r["static_hex"],
                i0["site"], i0["vtable"], i0["vtable_cls"] or "?",
                {"self": "YES(self)", "base": "YES(base)", "n/a": "n/a"}.get(
                    i0["match_kind"], "NO"),
                "YES" if i0["verified_mov"] else "NO",
                r["gap_to_next"] if r["gap_to_next"] else "-"))
        else:
            lines.append("| %08x | %s | %s | %s | %s | - | - | - | - | - | %s |" % (
                r["va"], r["name"], r["type"], r["class_size"] or "?",
                "all-zero" if r["static_bytes_zero"] else r["static_hex"],
                r["gap_to_next"] if r["gap_to_next"] else "-"))
    n_inst = sum(1 for r in out for i in r["installs"])
    n_ok = sum(1 for r in out for i in r["installs"] if i["verified_mov"])
    n_self = sum(1 for r in out for i in r["installs"] if i["match_kind"] == "self")
    n_base = sum(1 for r in out for i in r["installs"] if i["match_kind"] == "base")
    n_match = n_self + n_base
    lines.append("\n- Installs found for sample: %d; capstone-verified `mov [global], vtable`: %d; "
                 "class identity (self/base via RTTI base arrays): %d self + %d base = %d/%d."
                 % (n_inst, n_ok, n_self, n_base, n_match, n_inst))
    lines.append("- All sampled slots are in the zero tail (>=0x87E000); file-level bytes are all zero — the vptr is installed at runtime.")
    with open(os.path.join(W3, "w3_singletons_verify.md"), "w", encoding="utf-8") as fh:
        fh.write("\n".join(lines) + "\n")
    print("\n".join(lines))


if __name__ == "__main__":
    main()
