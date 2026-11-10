#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
gen_tables.py -- w2 master generator: pointer-free .rdata table units -> typed C.

Emitters (Theater mode):
  * struct   -- field-labeled struct array (theater; only unit with known layout)
  * guid     -- struct Guid arrays (hex literals)
  * mask     -- unsigned char arrays (0x20/0xDB blobs)
  * float    -- float[] / double[] with shortest round-trip literals
  * ints     -- unsigned int[] hex literals
  * bytes    -- unsigned char[] fallback

Unit set = named anchors (trusted extents, false-positive wide-char "ptrs"
ignored) + all pointer-free runs >=16B not covered by anchors.
"""
import struct, json, math

ORIG = r"D:\RA2MD\gamemd.exe"
OUT_C = r"D:\RA2YR_ReSource\tools\data_match\w2\tables_w2.c"
OUT_H = r"D:\RA2YR_ReSource\tools\data_match\w2\w2_units.json"

GAME_LO, GAME_HI = 0x3E1608, 0x3F9590
TXTP_LO, TXTP_HI = 0x401000, 0x7DF390

# named anchors: (name, lo, hi, emitter)
ANCHORS = [
    ("theater",   0x3E1B78, 0x3E1E18, "struct"),
    ("maskA",     0x3E2B0C, 0x3E3234, "mask"),
    ("fc26_dbl",  0x3E3544, 0x3E3580, "float"),
    ("fc_37b0",   0x3E37AC, 0x3E37C0, "float"),
    ("intfam",    0x3E622C, 0x3E7A38, "ints"),
    ("fc_8848",   0x3E8848, 0x3E8880, "float"),
    ("fc_pi",     0x3E8974, 0x3E8994, "float"),
    ("guidA",     0x3E94E0, 0x3E9B60, "guid"),
    ("guidC",     0x3EB788, 0x3EB7F8, "guid"),
    ("triB_maskB",0x3EC440, 0x3ECBD8, "mask"),
    ("fc_3ed7d8", 0x3ED7D8, 0x3ED7F8, "float"),
    ("deg_3ed5fc",0x3ED5FC, 0x3ED7D8, "ints"),
    ("pihdr3",    0x3F1170, 0x3F11B0, "float"),
    ("p95_3ef70c",0x3EF70C, 0x3EF71C, "float"),
    ("fc_3f4e4c", 0x3F4E4C, 0x3F4E68, "float"),
    ("fc_3f6bac", 0x3F6BAC, 0x3F6BC4, "float"),
    ("guidD",     0x3F7500, 0x3F7620, "guid"),
    ("dshow_pre", 0x3F7C20, 0x3F7CB0, "ints"),
    ("dshowfarm", 0x3F7CB0, 0x3F9590, "guid"),
]

THEATER_FIELDS = [
    ("name",   0x00, 16, "s"), ("display", 0x10, 32, "s"),
    ("ini",    0x30, 10, "s"), ("iso",     0x3A, 10, "s"),
    ("iso2",   0x44, 10, "s"), ("ext",     0x4E, 4,  "s"),
    ("mmt",    0x52, 4,  "s"), ("letter",  0x56, 2,  "s"),
    ("f1",     0x58, 4, "f"), ("f2",      0x5C, 4, "f"),
    ("i1",     0x60, 4, "i"), ("f3",      0x64, 4, "f"),
    ("i2",     0x68, 4, "i"), ("i3",      0x6C, 4, "i"),
]

def cstr(bs):
    z = bs.find(b"\x00")
    s = bs[:z if z >= 0 else len(bs)].decode("latin1")
    return '"' + s.replace("\\", "\\\\").replace('"', '\\"') + '"'

def ffmt(v):
    for cand in (f"{v:g}", f"{v:.6f}", f"{v:.9g}"):
        if struct.unpack("<f", struct.pack("<f", float(cand)))[0] == v:
            if "." not in cand and "e" not in cand and "E" not in cand:
                cand += ".0"
            return cand + "f"
    return None

def dfmt(v):
    for cand in (f"{v:g}", f"{v:.17g}"):
        if struct.unpack("<d", struct.pack("<d", float(cand)))[0] == v:
            if "." not in cand and "e" not in cand and "E" not in cand:
                cand += ".0"
            return cand
    return None

def is_guid(b, off):
    d1, d2, d3 = struct.unpack_from('<IHH', b, off)
    if not (0x1100 <= d3 <= 0x11FF or d3 in (0x0C0A, 0xBAB4)): return False
    if d2 == 0 or d3 == 0: return False
    if b[off+8:off+16] == b'\x00'*8: return False
    return True

def isptr(d):
    return TXTP_LO <= d < TXTP_HI or 0x812000 <= d < 0xB79BE4 or 0x7E1000 <= d < 0x811074

def sym(name):
    return "g_theaterTable" if name == "theater" else f"g_{name}"

def main():
    b = open(ORIG, 'rb').read()

    # pointer-free runs >= 16B
    runs = []
    s = None
    for off in range(GAME_LO, GAME_HI, 4):
        d = struct.unpack_from('<I', b, off)[0]
        if not isptr(d):
            if s is None: s = off
        else:
            if s is not None:
                if off - s >= 16: runs.append((s, off))
                s = None
    if s is not None and GAME_HI - s >= 16: runs.append((s, GAME_HI))

    # units = anchors first (address-sorted); runs clipped against them; extras kept
    units = []
    for name, lo, hi, em in ANCHORS:
        units.append({"name": name, "lo": lo, "hi": hi, "emitter": em})
    units.sort(key=lambda u: (u["lo"], u["hi"]))
    for lo, hi in runs:
        segs = []
        cur = lo
        for u in units:
            ulo, uhi = u["lo"], u["hi"]
            if uhi <= cur or ulo >= hi: continue
            if cur < ulo: segs.append((cur, ulo))
            cur = max(cur, uhi)
        if cur < hi: segs.append((cur, hi))
        for slo, shi in segs:
            if shi - slo >= 16:
                units.append({"name": f"u_{slo:X}", "lo": slo, "hi": shi, "emitter": "ints"})
    units.sort(key=lambda u: u["lo"])
    # merge adjacent auto units with same emitter (reduces noise)
    merged = []
    for u in units:
        if (merged and merged[-1]["emitter"] == u["emitter"] == "ints"
                and merged[-1]["hi"] == u["lo"]):
            merged[-1]["hi"] = u["hi"]
        else:
            merged.append(dict(u))
    units = merged
    # invariant: no overlaps (union == sum)
    tot = sum(u["hi"] - u["lo"] for u in units)
    cur_hi = -1
    for u in units:
        assert u["lo"] >= cur_hi, f"overlap at {u['name']}"
        cur_hi = u["hi"]
    assert tot == sum(u["hi"] - u["lo"] for u in units)

    L = []
    L.append("/* generated by gen_tables.py -- .rdata static tables, era CL /O2 target */")
    L.append("struct Guid { unsigned long d1; unsigned short d2; unsigned short d3; unsigned char b[8]; };")
    L.append("struct TheaterData {")
    L.append("    char name[16]; char display[32]; char ini[10]; char iso[10]; char iso2[10];")
    L.append("    char ext[4]; char mmt[4]; char letter[2];")
    L.append("    float f1; float f2; int i1; float f3; int i2; int i3;")
    L.append("};")
    L.append("")
    names = []
    for u in units:
        lo, hi, em = u["lo"], u["hi"], u["emitter"]
        data = b[lo:hi]
        n = u["name"]
        names.append(n)
        L.append(f"/* ---- {n} : orig RVA 0x{lo:06X}..0x{hi:06X} ({hi-lo}B) ---- */")
        if em == "struct" and n == "theater":
            L.append("const struct TheaterData g_theaterTable[6] = {")
            for e in range(6):
                base = lo + e * 0x70
                parts = []
                for fn, fo, fs, fk in THEATER_FIELDS:
                    raw = b[base+fo:base+fo+fs]
                    if fk == "s": parts.append(cstr(raw))
                    elif fk == "f": parts.append(ffmt(struct.unpack('<f', raw)[0]) or "0.0f")
                    else: parts.append(str(struct.unpack('<i', raw)[0]))
                L.append("    {" + ", ".join(parts) + "},")
            L.append("};")
        elif em == "guid":
            assert (hi - lo) % 16 == 0, n
            L.append(f"const struct Guid g_{n}[{(hi-lo)//16}] = {{")
            for off in range(lo, hi, 16):
                d1, d2, d3 = struct.unpack_from('<IHH', b, off)
                bs = b[off+8:off+16]
                L.append(f"    {{0x{d1:08X}l, 0x{d2:04X}, 0x{d3:04X}, "
                         f"{{{','.join(f'0x{x:02X}' for x in bs)}}}}},")
            L.append("};")
        elif em == "mask":
            L.append(f"const unsigned char g_{n}[{hi-lo}] = {{")
            for i in range(lo, hi, 16):
                L.append("    " + ",".join(f"0x{x:02X}" for x in b[i:min(i+16, hi)]) + ",")
            L.append("};")
        elif em == "float":
            # doubles if 8-aligned & even length else floats
            if (hi - lo) % 8 == 0 and lo % 8 == 0:
                vals = [struct.unpack_from('<d', b, o)[0] for o in range(lo, hi, 8)]
                lits = [dfmt(v) for v in vals]
                if all(l is not None for l in lits):
                    L.append(f"const double g_{n}[{len(vals)}] = {{")
                    for l in lits: L.append(f"    {l},")
                    L.append("};")
                else:
                    L.append(f"const unsigned int g_{n}[{(hi-lo)//4}] = {{")
                    for i in range(lo, hi, 16):
                        chunk = b[i:min(i+16, hi)]
                        vals4 = struct.unpack('<%dI' % (len(chunk)//4), chunk)
                        L.append("    " + ",".join(f"0x{x:08X}" for x in vals4) + ",")
                    L.append("};")
            else:
                vals = [struct.unpack_from('<f', b, o)[0] for o in range(lo, hi, 4)]
                lits = [ffmt(v) for v in vals]
                if all(l is not None for l in lits):
                    L.append(f"const float g_{n}[{len(vals)}] = {{")
                    for l in lits: L.append(f"    {l},")
                    L.append("};")
                else:
                    L.append(f"const unsigned int g_{n}[{(hi-lo)//4}] = {{")
                    for i in range(lo, hi, 16):
                        chunk = b[i:min(i+16, hi)]
                        vals4 = struct.unpack('<%dI' % (len(chunk)//4), chunk)
                        L.append("    " + ",".join(f"0x{x:08X}" for x in vals4) + ",")
                    L.append("};")
        else:  # ints
            L.append(f"const unsigned int g_{n}[{(hi-lo)//4}] = {{")
            for i in range(lo, hi, 16):
                chunk = b[i:min(i+16, hi)]
                vals = struct.unpack('<%dI' % (len(chunk)//4), chunk)
                L.append("    " + ",".join(f"0x{x:08X}" for x in vals) + ",")
            L.append("};")
        L.append("")

    open(OUT_C, "w").write("\n".join(L))

    # w2_main.c: reference every table so /opt:ref keeps them
    M = ["/* generated by gen_tables.py -- keeps every table alive through /opt:ref */"]
    M.append("struct Guid; struct TheaterData;")
    for u in units:
        M.append(f"extern const unsigned char {sym(u['name'])}[];")
    M.append("const void * const g_keepAll[] = {")
    for u in units:
        M.append(f"    {sym(u['name'])},")
    M.append("};")
    M.append("int __stdcall WinMain(void *hI, void *hP, char *cl, int sw)")
    M.append("{ (void)hI;(void)hP;(void)cl;(void)sw; return (int)g_keepAll[0]; }")
    open(r"D:\RA2YR_ReSource\tools\data_match\w2\w2_main.c", "w").write("\n".join(M))

    json.dump(units, open(OUT_H, "w"), indent=1)
    tot = sum(u["hi"] - u["lo"] for u in units)
    print(f"{len(units)} units, total {tot}B -> {OUT_C}")

if __name__ == "__main__":
    main()
