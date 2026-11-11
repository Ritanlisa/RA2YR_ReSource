#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
crack_lib_hash3.py -- the 2nd linker member decoded fully:
    u32 nmembers; u32 member_offset[nmembers]  (PERMUTATION = lib hash walk order)
    u32 nnames;   u16 member_ordinal[nnames];  names (alphabetical)
Crack: find (hash, modulus) s.t. simulating
    insert all names in ARCHIVE order into bucket table (head-insert chains),
    walk buckets ascending; emit each member at first encounter
reproduces the member permutation. Start with smallest libs, verify on all.
"""
import struct, os, json, itertools

ROOT = r"D:\RA2YR_ReSource"
LIBDIR = os.path.join(ROOT, ".vc6-8447", "LIB")

def parse_lib(path):
    b = open(path, "rb").read()
    off = 8; members = []  # (name, data_off, size) physical order
    while off + 60 <= len(b):
        hdr = b[off:off+60]; name = hdr[0:16].decode("latin1").rstrip()
        size = int(hdr[48:58].decode().strip())
        members.append((name, off+60, size))
        off += 60 + size + (size & 1)
    slashes = [(n, o, s) for n, o, s in members if n == "/"]
    _, do, sz = slashes[1]; d = b[do:do+sz]
    nm = struct.unpack_from("<I", d, 0)[0]
    moffs = list(struct.unpack_from("<%dI" % nm, d, 4))
    p = 4 + 4*nm
    nn = struct.unpack_from("<I", d, p)[0]
    u16s = list(struct.unpack_from("<%dH" % nn, d, p+4))
    q = p + 4 + 2*nn
    names = []
    while q < len(d):
        e = d.index(b"\x00", q); names.append(d[q:e].decode("latin1")); q = e+1
    return {"members": members, "moffs": moffs, "u16": u16s, "names": names}

def member_symbols(b, moff):
    """parse a thunk obj member: return its public symbol names."""
    # COFF obj at file offset moff: skip any linker directives... obj starts with machine u16
    syms = []
    mach = struct.unpack_from("<H", b, moff)[0]
    if mach not in (0x14C, 0x162): return None
    nsec = struct.unpack_from("<H", b, moff+2)[0]
    nsym = struct.unpack_from("<I", b, moff+12)[0]
    symptr = struct.unpack_from("<I", b, moff+16)[0]
    strtoff = struct.unpack_from("<I", b, moff+20)[0]
    if nsym == 0 or nsym > 500: return None
    strtab = moff + symptr
    def symname(o):
        nz = struct.unpack_from("<I", b, o)[0]
        if nz:
            e = b.index(b"\x00", strtab + nz)
            return b[strtab+nz:e].decode("latin1")
        return b[o+8:o+8+8].rstrip(b"\x00").decode("latin1")
    p = symptr
    i = 0
    while i < nsym:
        nm = symname(moff + p)
        sec = struct.unpack_from("<h", b, moff+p+12)[0]
        typ = struct.unpack_from("<H", b, moff+p+14)[0]
        sc = b[moff+p+16]
        naux = b[moff+p+17]
        if sc == 2:  # external
            syms.append(nm)
        i += 1 + naux
        p += 18 * (1 + naux)
    return syms

def main():
    libs = {}
    for base in ["kernel32", "user32", "gdi32", "advapi32", "shell32", "ole32",
                 "oleaut32", "winmm", "wsock32", "ddraw", "dsound", "version",
                 "comctl32", "imm32"]:
        path = os.path.join(LIBDIR, base + ".lib")
        if not os.path.exists(path): continue
        L = parse_lib(path)
        b = open(path, "rb").read()
        # physical member starts (offset of data)
        starts = {o: i for i, (n, o, s) in enumerate(L["members"]) if n != "/"}
        # verify moffs are member data starts
        okc = sum(1 for mo in L["moffs"] if mo in starts)
        # build name -> member ordinal (dict order)
        name2ord = dict(zip(L["names"], L["u16"]))
        # parse each member's public syms (only thunk objs, skip longnames etc.)
        ord2member = {v: k for k, v in starts.items()}  # physical idx -> data off
        # map: dict-ordinal -> member data off
        dict_ord2off = {i: mo for i, mo in enumerate(L["moffs"])}
        libs[base] = {"L": L, "starts": starts, "name2ord": name2ord,
                      "dict_ord2off": dict_ord2off, "b": b, "moff_hits": okc}
        print(f"{base}: nm={len(L['moffs'])} member-start hits={okc} nn={len(L['names'])}")

    json.dump({k: {"nm": len(v['L']['moffs']), "moffs": v['L']['moffs'],
                   "names": v['L']['names'], "u16": v['L']['u16']}
               for k, v in libs.items()},
              open(os.path.join(ROOT, ".omo/agents/datamatch/dict_struct.json"), "w"))

    # ---- detailed structure on dsound (smallest) ----
    base = "dsound"
    v = libs[base]; L = v["L"]; b = v["b"]
    print(f"\n=== {base} member permutation ===")
    for i, mo in enumerate(L["moffs"]):
        syms = member_symbols(b, mo)
        print(f"  dict#{i}: off=0x{mo:X} syms={syms}")
    print("names:", L["names"])
    print("u16  :", L["u16"])

if __name__ == "__main__":
    main()
