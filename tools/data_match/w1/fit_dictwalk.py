#!/usr/bin/env python3
"""
fit_dictwalk.py -- test model: INT order per DLL = the lib's 2nd-linker-member
dictionary walk order (moffs member order, symbols via refs) filtered to our
imports. Validate against test2's actual INT order for all 15 DLLs / 371 slots.
"""
import struct, json, os, sys
W1 = os.path.abspath(os.path.dirname(__file__))
ROOT = os.path.abspath(os.path.join(W1, "..", "..", ".."))
sys.path.insert(0, os.path.join(ROOT, "tools", "data_match"))
from compare_imports import parse

LIBDIR = os.path.join(ROOT, ".vc6-8447", "LIB")
MAP = {"KERNEL32.dll": "kernel32", "USER32.dll": "user32", "GDI32.dll": "gdi32",
       "ADVAPI32.dll": "advapi32", "SHELL32.dll": "shell32", "ole32.dll": "ole32",
       "OLEAUT32.dll": "oleaut32", "WINMM.dll": "winmm", "WSOCK32.dll": "wsock32",
       "DDRAW.dll": "ddraw", "DSOUND.dll": "dsound", "VERSION.dll": "version",
       "COMCTL32.dll": "comctl32", "IMM32.dll": "imm32", "binkw32.dll": "binkw32_h"}

def lib_dict_symbol_walk(base):
    """walk members in moffs (dict) order; per member emit its symbols
    (alphabetical names whose ref maps to this member)."""
    p = os.path.join(LIBDIR if base != "binkw32_h" else W1, base + ".lib")
    b = open(p, "rb").read()
    off = 8; slashes = []
    while off + 60 <= len(b):
        hdr = b[off:off+60]; nm = hdr[0:16].decode("latin1").rstrip()
        size = int(hdr[48:58].decode().strip())
        if nm == "/": slashes.append((off, off+60, size))
        off += 60 + size + (size & 1)
    _, do2, sz2 = slashes[1]
    d = b[do2:do2+sz2]
    nm_ = struct.unpack_from("<I", d, 0)[0]
    moffs = list(struct.unpack_from("<%dI" % nm_, d, 4))
    p2 = 4 + 4*nm_
    nn = struct.unpack_from("<I", d, p2)[0]
    refs = list(struct.unpack_from("<%dH" % nn, d, p2+4))
    q = p2 + 4 + 2*nn
    names = []
    while q < len(d):
        e = d.index(b"\x00", q); names.append(d[q:e].decode("latin1")); q = e+1
    ref2ord = {i+1: i for i in range(nm_)}  # ref (1-based) -> dict ordinal
    ord2syms = {}
    for n, r in zip(names, refs):
        ord2syms.setdefault(ref2ord[r], []).append(n)
    walk = []          # (dict_ordinal, member_index_in_moffs, symbol)
    for mi, mo in enumerate(moffs):
        pass
    hdr2ord = {}
    for i, mo in enumerate(moffs):
        hdr2ord[mo] = i
    out = []
    for i, mo in enumerate(moffs):
        for s in sorted(ord2syms.get(i, [])):
            out.append(s)
    return out

def main():
    sd = json.load(open(os.path.join(ROOT, ".omo/agents/datamatch/slot_diff.json")))
    t2 = parse(os.path.join(W1, "test2.exe"))
    total = hit = 0
    for d in t2["descs"]:
        dll = d["dll"]
        if dll not in sd: continue
        r = sd[dll]
        idx = {t: i for i, t in enumerate(r["ins"])}
        INT = []
        for f in d["funcs"]:
            t = f["name"] if f["mode"] == "NAME" else "@" + str(f["ordinal"])
            INT.append(idx[t])
        base = MAP[dll]
        walk = lib_dict_symbol_walk(base)
        # map lib symbols to our ins tags: NAME: _X@N -> X@N etc; ORD: lib has its own
        pos_in_walk = {}
        for k, s in enumerate(walk):
            pos_in_walk[s] = k
        pred = []
        tags = r["ins"]
        # for each tag find its lib symbol(s)
        LIBS = json.load(open(os.path.join(ROOT, ".omo/agents/datamatch/lib_members.json")))
        key = [k for k in LIBS if k.replace("\\", "/").endswith("/" + base + ".lib")][0]
        tag2sym = {}
        for m in LIBS[key]:
            if m["mode"] == "NAME":
                tag2sym[m["import_name"]] = m["sym"]
            else:
                tag2sym["@%d" % m["ordinal"]] = m["sym"]
        ok = True
        seq = []
        for t in tags:
            s = tag2sym.get(t)
            if s is None or s not in pos_in_walk:
                ok = False; break
            seq.append(pos_in_walk[s])
        if not ok:
            print(f"{dll:14} map-fail"); continue
        # predicted INT: tags sorted by their walk position
        pred = [i for i in sorted(range(len(tags)), key=lambda i: seq[i])]
        h = sum(1 for a, b in zip(INT, pred) if a == b)
        hit += h; total += len(INT)
        print(f"{dll:14} n={len(INT):3d} dict-walk pred hits {h}/{len(INT)}  {'MATCH' if pred==INT else ''}")
    print(f"TOTAL {hit}/{total} = {100*hit/total:.1f}%")

if __name__ == "__main__":
    main()
