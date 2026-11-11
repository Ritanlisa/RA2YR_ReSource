#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""Compare gdb pull-order trace vs insertion order vs INT order (test2). v2"""
import json, struct, re, os

W1 = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(W1, "..", "..", ".."))
DM = os.path.join(ROOT, ".omo", "agents", "datamatch")
LIBJ = json.load(open(os.path.join(DM, "lib_members.json"), encoding="utf-8"))


def norm(k):
    return k.replace("\\", "/")


def members_of(base):
    for k in LIBJ:
        if norm(k).lower().endswith("/%s.lib" % base.lower()):
            return LIBJ[k]
    return None


def hintmap(base):
    path = None
    for ext in ("LIB", "lib"):
        p = os.path.join(ROOT, ".vc6-8447", "LIB", base + "." + ext)
        if os.path.exists(p):
            path = p
            break
    if path is None:
        return {}
    b = open(path, "rb").read()
    out = {}
    off = 8
    while off + 60 <= len(b):
        hdr = b[off:off+60]
        try:
            size = int(hdr[48:58].decode("latin1").strip())
        except Exception:
            break
        d = b[off+60:off+60+size]
        if len(d) >= 0x14 and d[0:4] == b"\x00\x00\xff\xff" and struct.unpack_from("<H", d, 6)[0] == 0x14c:
            h = struct.unpack_from("<H", d, 0x10)[0]
            z = d.find(b"\x00", 0x14)
            out.setdefault(d[0x14:z].decode("latin1"), h)
        off += 60 + size
        if off & 1:
            off += 1
    return out


BASE_OF = {"KERNEL32.dll": "kernel32", "USER32.dll": "user32", "GDI32.dll": "gdi32",
           "ADVAPI32.dll": "advapi32", "SHELL32.dll": "shell32", "ole32.dll": "ole32",
           "OLEAUT32.dll": "oleaut32", "WINMM.dll": "winmm", "WSOCK32.dll": "wsock32",
           "DDRAW.dll": "ddraw", "DSOUND.dll": "dsound", "VERSION.dll": "version",
           "COMCTL32.dll": "comctl32", "IMM32.dll": "imm32", "binkw32.dll": "binkw32"}


def main():
    log = open(os.path.join(DM, "gdb_trace.log"), encoding="utf-8", errors="replace").read().splitlines()
    mods = {}
    for ln in log:
        m = re.match(r"impobj2 mod=(\d+) a1=(\w+) a2=(\w+) sig=0000ffff size=(\d+) hint=(-?\d+)", ln)
        if m:
            mods.setdefault(int(m.group(1)), []).append((int(m.group(4)), int(m.group(5))))
    sd = json.load(open(os.path.join(DM, "slot_diff.json"), encoding="utf-8"))
    for dll, base in BASE_OF.items():
        ms = members_of(base)
        hm = hintmap(base)
        sym2hint = {}
        for m in ms:
            s = m.get("sym")
            if s and s in hm:
                sym2hint[m["import_name"]] = hm[s]
        r = sd[dll]
        ins_h = [sym2hint.get(n) for n in r["ins"]]
        int_h = [sym2hint.get(r["ins"][i]) for i in r["t2_int"]]
        hs = set(x for x in ins_h if x is not None)
        best = None
        for mod, ev in mods.items():
            ded = []
            for s, h in ev:
                if not ded or ded[-1] != h:
                    ded.append(h)
            if not ded:
                continue
            frac = sum(1 for h in ded if h in hs) / len(ded)
            if best is None or frac > best[0]:
                best = (frac, mod, ded)
        if best is None:
            print(dll, "no trace")
            continue
        frac, mod, ded = best
        m_ins = sum(1 for a, b in zip(ded, ins_h) if a == b)
        m_int = sum(1 for a, b in zip(ded, int_h) if a == b)
        print("%-14s mod=%-2d frac=%.2f dedup=%d ins=%d int=%d | trace~ins=%d trace~int=%d" %
              (dll, mod, frac, len(ded), len(ins_h), len(int_h), m_ins, m_int))
        print("   trace[:16]:", ded[:16])
        print("   ins  [:16]:", ins_h[:16])
        print("   int  [:16]:", int_h[:16])


if __name__ == "__main__":
    main()
