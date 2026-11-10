#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
parse_import_lib.py -- COFF import-library archive parser.

Extracts, for every member of an import .lib, the (symbol, dll, mode, ordinal,
hint, import-name) tuple. Short-import members (Sig1=0 Sig2=0xFFFF) carry all
metadata in the header; the string data is "symbolname\0dllname\0".

Usage:
  python parse_import_lib.py <lib1> [lib2 ...] [--json out]
"""
import sys, json, struct

def parse_long_member(d):
    """Long-form import member: a COFF object with .idata$ sections.
    Returns list of entries {sym, dll, mode, ordinal, hint, import_name}."""
    if len(d) < 20:
        return []
    mach, nsec, tds, symptr, nsyms, optsz, chars = struct.unpack_from("<HHIIIHH", d, 0)
    if mach != 0x014C:
        return []
    secs = []
    so = 20 + optsz
    for i in range(nsec):
        o = so + i * 40
        name = d[o:o+8].rstrip(b"\x00").decode("latin1")
        vsize, va, rawsz, rawptr = struct.unpack_from("<IIII", d, o+8)
        secs.append({"name": name, "raw": d[rawptr:rawptr+rawsz]})
    # symbol table
    out = []
    if symptr == 0 or nsyms == 0:
        return []
    for i in range(nsyms):
        o = symptr + i * 18
        nm = d[o:o+8]
        if nm[:4] == b"\x00\x00\x00\x00":
            stroff = struct.unpack_from("<I", d, o+4)[0]
            # string table is at symptr + nsyms*18
            strt = symptr + nsyms * 18
            e = d.index(b"\x00", strt + stroff)
            name = d[strt+stroff:e].decode("latin1")
        else:
            name = nm.rstrip(b"\x00").decode("latin1")
        value, secnum, typc, sc = struct.unpack_from("<IhHH", d, o+8)
        aux = d[o+12]  # number of aux records
        if name.startswith("__imp_") and secnum > 0 and 0 < secnum <= nsec:
            sec = secs[secnum - 1]
            if sec["name"].startswith(".idata$4") or sec["name"].startswith(".idata$5"):
                # find .idata$6 (hint/name) and .idata$7 (dll) in same member
                hn = next((s["raw"] for s in secs if s["name"].startswith(".idata$6")), None)
                dn = next((s["raw"] for s in secs if s["name"].startswith(".idata$7")), None)
                dll = dn.split(b"\x00")[0].decode("latin1") if dn else ""
                thunk = struct.unpack_from("<I", sec["raw"], 0)[0] if len(sec["raw"]) >= 4 else 0
                if thunk & 0x80000000:
                    out.append({"sym": name, "dll": dll, "mode": "ORD",
                                "ordinal": thunk & 0xFFFF, "hint": None,
                                "import_name": None, "type": 2})
                elif hn:
                    hint = struct.unpack_from("<H", hn, 0)[0]
                    iname = hn[2:].split(b"\x00")[0].decode("latin1")
                    out.append({"sym": name, "dll": dll, "mode": "NAME",
                                "ordinal": None, "hint": hint,
                                "import_name": iname, "type": 2})
        i += aux
    return out


def parse_lib(path):
    b = open(path, "rb").read()
    if b[:8] != b"!<arch>\n":
        raise ValueError(f"{path}: not an ar archive")
    members = []
    off = 8
    while off + 60 <= len(b):
        hdr = b[off:off+60]
        name = hdr[0:16].decode("latin1").rstrip()
        size = int(hdr[48:58].decode().strip())
        data_off = off + 60
        data = b[data_off:data_off+size]
        members.append((name, data))
        off = data_off + size + (size & 1)
    out = []
    for name, d in members:
        if len(d) < 20:
            continue
        sig1, sig2, ver, mach = struct.unpack_from("<HHHH", d, 0)
        if sig1 == 0 and sig2 == 0xFFFF:
            tds, szdata = struct.unpack_from("<II", d, 8)
            ordhint, typ = struct.unpack_from("<HH", d, 16)
            # bit layout (verified empirically): Type:2 (bits 0-1) | NameType:3 (bits 2-4)
            nametype = (typ >> 2) & 0x7
            mtype = typ & 0x3
            rest = d[20:20+szdata]
            z1 = rest.find(b"\x00")
            sym = rest[:z1].decode("latin1")
            z2 = rest.find(b"\x00", z1+1)
            dll = rest[z1+1:z2 if z2 != -1 else len(rest)].decode("latin1")
            # NameType (from the corrected 2+3 bit layout):
            # 0 = ordinal, 1 = name as stored, 2 = strip leading underscore(s),
            # 3 = strip leading underscore + trailing @N (undecorate)
            if nametype == 0:
                mode, ordinal, hint, impname = "ORD", ordhint, None, None
            else:
                n = sym
                if nametype == 2 and n.startswith("_"):
                    n = n[1:]        # strip exactly one leading underscore
                elif nametype == 3:
                    if n.startswith("_"):
                        n = n[1:]
                    at = n.rfind("@")
                    if at > 0 and n[at+1:].isdigit():
                        n = n[:at]
                mode, ordinal, hint, impname = "NAME", None, ordhint, n
            out.append({"sym": sym, "dll": dll, "mode": mode, "ordinal": ordinal,
                        "hint": hint, "import_name": impname, "type": mtype})
        elif name.startswith("binkw32") or name == "" or name == "/":
            continue
        else:
            # long-form COFF object member
            try:
                out.extend(parse_long_member(d))
            except Exception:
                pass
    return out

def main():
    libs = [a for a in sys.argv[1:] if not a.startswith("--")]
    res = {}
    for l in libs:
        try:
            res[l] = parse_lib(l)
        except Exception as e:
            print(f"!! {l}: {e}")
    for l, ms in res.items():
        ords = sum(1 for m in ms if m["mode"] == "ORD")
        names = len(ms) - ords
        print(f"{l}: {len(ms)} short members ({names} by name, {ords} by ordinal)")
    if "--json" in sys.argv:
        out = sys.argv[sys.argv.index("--json")+1]
        json.dump(res, open(out, "w"), indent=1)
        print("wrote", out)

if __name__ == "__main__":
    main()
