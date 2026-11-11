#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""lib_extract_member.py -- find and extract the COFF member of an archive that
defines a given symbol.

Usage: python tools/data_match/lib_extract_member.py <lib> <symbol> <out.obj>
"""
import struct
import sys


def members(data):
    assert data[:8] == b"!<arch>\n"
    pos = 8
    longnames = b""
    while pos + 60 <= len(data):
        hdr = data[pos:pos + 60]
        name = hdr[:16].decode("latin1").rstrip()
        size = int(hdr[48:58].decode("latin1").strip() or 0)
        body = data[pos + 60:pos + 60 + size]
        if name.startswith("//"):
            longnames = body
        else:
            if name.startswith("/") and name[1:].isdigit():
                off = int(name[1:])
                end = longnames.find(b"\n", off)
                nm = longnames[off:end].decode("latin1")
            else:
                nm = name.rstrip("/")
            yield nm, body
        pos += 60 + size
        if size % 2:
            pos += 1


def coff_symbols(body):
    # COFF header: Machine(2) NSections(2) TimeDate(4) PtrSymTab(4) NSyms(4) ...
    if len(body) < 20:
        return []
    ptr_sym, nsyms = struct.unpack_from("<II", body, 8)
    if ptr_sym == 0 or ptr_sym + nsyms * 18 > len(body):
        return []
    strtab = ptr_sym + nsyms * 18
    strlen = struct.unpack_from("<I", body, strtab)[0] if strtab + 4 <= len(body) else 0
    strdata = body[strtab:strtab + strlen]
    syms = []
    for i in range(nsyms):
        rec = body[ptr_sym + i * 18: ptr_sym + i * 18 + 18]
        nm = rec[:8]
        if nm[:4] == b"\0\0\0\0":
            off = struct.unpack_from("<I", nm, 4)[0]
            end = strdata.find(b"\0", off)
            name = strdata[off:end].decode("latin1")
        else:
            name = nm.rstrip(b"\0").decode("latin1")
        syms.append(name)
    return syms


def main():
    lib, sym, out = sys.argv[1], sys.argv[2], sys.argv[3]
    data = open(lib, "rb").read()
    for nm, body in members(data):
        try:
            syms = coff_symbols(body)
        except Exception:
            continue
        if sym in syms:
            print("found in member %r (%d bytes)" % (nm, len(body)))
            open(out, "wb").write(body)
            return 0
    print("not found")
    return 1


if __name__ == "__main__":
    sys.exit(main())
