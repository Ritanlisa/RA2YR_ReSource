#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""Analyze the test2 gdb trace: pull order (module,hint) vs observed INT order."""
import json, struct, re, os, sys

W1 = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(W1, "..", "..", ".."))
DM = os.path.join(ROOT, ".omo", "agents", "datamatch")

LIBJ = json.load(open(os.path.join(DM, "lib_members.json"), encoding="utf-8"))


def norm(k):
    return k.replace("\\", "/")


def members_of(base):
    target = "/%s.lib" % base
    for k in LIBJ:
        if norm(k).endswith(target):
            return LIBJ[k]
    # fallback: case-insensitive
    for k in LIBJ:
        if norm(k).lower().endswith(target.lower()):
            return LIBJ[k]
    return None


def hintmap(base):
    path = os.path.join(ROOT, ".vc6-8447", "LIB", base + ".LIB")
    if not os.path.exists(path):
        path = os.path.join(ROOT, ".vc6-8447", "LIB", base + ".lib")
    b = open(path, "rb").read()
    out = {}
    off = 8
    while off + 60 <= len(b):
        hdr = b[off:off+60]
        nm = hdr[0:16].decode("latin1", "replace").rstrip()
        if not nm:
            break
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
    seq = {}
    for ln in log:
        m = re.match(r"impobj2 mod=(\d+) a1=(\w+) a2=(\w+) sig=0000ffff size=(\d+) hint=(-?\d+)", ln)
        if m:
            mod = int(m.group(1)); size = int(m.group(4)); hint = int(m.group(5))
            seq.setdefault(mod, []).append((size, hint))
    # import hint/name maps
    sd = json.load(open(os.path.join(DM, "slot_diff.json"), encoding="utf-8"))
    for dll, base in BASE_OF.items():
        ms = members_of(base)
        if ms is None:
            print("no members for", base)
            continue
        hm = hintmap(base)
        sym2hint = {}
        for m in ms:
            s = m.get("sym")
            if s and s in hm:
                sym2hint[m["import_name"]] = hm[s]
        r = sd[dll]
        int_names = [r["ins"][i] for i in r["t2_int"]]
        int_hints = [sym2hint.get(n) for n in int_names]
        # find the module index for this dll: module whose first hint belongs to this dll
        cand = None
        for mod, ev in seq.items():
            hs = set(sym2hint.values())
            if ev and ev[0][1] in hs:
                cand = mod
                break
        trace_hints = [h for s, h in seq.get(cand, [])] if cand is not None else []
        # dedupe consecutive repeats (extra section reads)
        tded = []
        for h in trace_hints:
            if not tded or tded[-1] != h:
                tded.append(h)
        match = sum(1 for a, b in zip(tded, int_hints) if a == b)
        print("%-14s mod=%-2s trace=%4d INT=%4d dedup_match=%d/%d" %
              (dll, cand, len(trace_hints), len(int_hints), match, min(len(tded), len(int_hints))))
        print("   trace hints[:24]:", tded[:24])
        print("   INT   hints[:24]:", int_hints[:24])


if __name__ == "__main__":
    main()
