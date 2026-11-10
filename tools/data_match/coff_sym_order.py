import struct, sys

def coff_undef_order(path, filter_prefix=()):
    b = open(path, "rb").read()
    mach, nsec, tds, symptr, nsyms, optsz, chars = struct.unpack_from("<HHIIIHH", b, 0)
    so = 20 + optsz
    secnames = []
    for i in range(nsec):
        o = so + i * 40
        raw = b[o:o+8]
        vsize, va, rawsz, rawptr = struct.unpack_from("<IIII", b, o+8)
        if raw[:4] == b"\x00\x00\x00\x00":
            # extended name via string table
            stroff = struct.unpack_from("<I", b, o+4)[0]
            strt = symptr + nsyms * 18
            e = b.index(b"\x00", strt + stroff)
            nm = b[strt+stroff:e].decode("latin1")
        else:
            nm = raw.rstrip(b"\x00").decode("latin1")
        secnames.append(nm)
    out = []
    strt = symptr + nsyms * 18
    for i in range(nsyms):
        o = symptr + i * 18
        nm = b[o:o+8]
        if nm[:4] == b"\x00\x00\x00\x00":
            stroff = struct.unpack_from("<I", b, o+4)[0]
            e = b.index(b"\x00", strt + stroff)
            name = b[strt+stroff:e].decode("latin1")
        else:
            name = nm.rstrip(b"\x00").decode("latin1")
        value, secnum, typ = struct.unpack_from("<IhH", b, o+8)
        sc = b[o+16]
        aux = b[o+17]
        if sc == 2 and secnum == 0 and name:  # undefined external
            out.append(name)
        i += aux
    return out

if __name__ == "__main__":
    path = sys.argv[1]
    syms = coff_undef_order(path)
    print(f"{len(syms)} undefined externs in symbol-table order")
    if len(sys.argv) > 2:
        pat = sys.argv[2]
        idx = [i for i, s in enumerate(syms) if pat in s]
        lo = max(0, idx[0] - 2) if idx else 0
        hi = min(len(syms), (idx[-1] + 3) if idx else 20)
        for i in range(lo, hi):
            print(f"  {i:4d} {syms[i]}")
    else:
        for i, s in enumerate(syms[:40]):
            print(f"  {i:4d} {s}")
