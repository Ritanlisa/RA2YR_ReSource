#!/usr/bin/env python3
"""scan_ecx.py -- find thiscall-attributed functions whose binary never reads
ECX (candidate __cdecl/static-member arbitration family).

Criteria (R4 cdecl arbitration):
  * registry cc == thiscall
  * first 20 disasm instructions contain no ECX operand
  * body reads stack args ([esp+...])
  * epilogue is a bare `retn` (no callee cleanup)
"""
import json
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", "..", ".."))
sys.path.insert(0, os.path.join(ROOT, "tools", "decomp_sys"))
sys.path.insert(0, ROOT)

from registry_ext import Registry  # noqa: E402

EXPORT = os.path.join(ROOT, "decompile-results", "full_export")
BLOCK_RE = re.compile(
    r"// =+\n// ([^\n]*)\n// addr=(0x[0-9A-Fa-f]+) size=(0x[0-9A-Fa-f]+)\n"
    r"// proto: ([^\n]*)\n// ---- IDA disasm ----\n(.*?)// ---- Hex-Rays ----",
    re.S)
INSN_RE = re.compile(r"^\s*[0-9A-Fa-f]+:\s*(.*)$")


def scan():
    blocks = {}
    for fn in sorted(os.listdir(os.path.join(EXPORT, "src"))):
        if not fn.endswith(".cpp"):
            continue
        text = open(os.path.join(EXPORT, "src", fn), encoding="utf-8",
                    errors="replace").read()
        for m in BLOCK_RE.finditer(text):
            addr = m.group(2).lower()
            dis = []
            for line in m.group(5).splitlines():
                line = re.sub(r"^\s*//\s?", "", line)
                im = INSN_RE.match(line)
                if im:
                    dis.append(im.group(1).strip())
            blocks["0x%x" % int(addr, 16)] = {
                "name": m.group(1), "size": int(m.group(3), 16),
                "proto": m.group(4), "dis": dis,
            }
    return blocks


def epilogue_retn(dis):
    for d in reversed(dis[-4:]):
        m = re.match(r"^retn\s+(?:0x)?([0-9A-Fa-f]+)$", d)
        if m:
            return int(m.group(1), 16), False
        if re.match(r"^retn$", d):
            return 0, True
    return None, None


def main():
    blocks = scan()
    print("blocks parsed: %d" % len(blocks))
    reg = Registry.get()
    cands = []
    for a_low, b in blocks.items():
        fn = reg.function(a_low)
        if not fn:
            continue
        if (fn.get("cc") or "thiscall") != "thiscall":
            continue
        if not fn.get("params"):
            continue
        dis = b["dis"]
        head = dis[:20]
        if any(re.search(r"\b(?:ecx|cx|cl|ch)\b", d) for d in head):
            continue
        if not any("[esp" in d for d in dis):
            continue
        retn, bare = epilogue_retn(dis)
        if not bare:
            continue
        whole_ecx = any(re.search(r"\b(?:ecx|cx|cl|ch)\b", d) for d in dis)
        # param byte demand from stack arg slots
        slots = set()
        for d in dis:
            for mm in re.finditer(r"\[esp \+ (?:arg_([0-9A-Fa-f]+)|0x([0-9A-Fa-f]+))\]", d):
                if mm.group(1):
                    slots.add(int(mm.group(1), 16))
                else:
                    slots.add(int(mm.group(2), 16) - 4)
        cands.append({
            "addr": a_low, "name": fn.get("name"), "size": b["size"],
            "n_params": len(fn["params"]), "retn": retn,
            "ecx_anywhere": whole_ecx, "stack_slots": sorted(slots),
            "proto": b["proto"], "dis0": dis[:6],
        })
    print("candidates: %d (of which no ECX anywhere: %d)"
          % (len(cands), sum(1 for c in cands if not c["ecx_anywhere"])))
    json.dump(cands, open(os.path.join(HERE, "cdecl_candidates.json"), "w",
                          encoding="utf-8"), indent=1)
    for c in cands[:40]:
        print("%-9s %4dB p%-2d retn=%-3d %-44s %s" % (
            c["addr"], c["size"], c["n_params"], c["retn"],
            (c["name"] or "")[:44], c["dis0"][:2]))


if __name__ == "__main__":
    sys.exit(main())
