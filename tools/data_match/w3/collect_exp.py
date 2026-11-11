#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""collect_exp.py -- collect W3 era-toolchain experiment evidence.

Parses the .map files and the built EXEs of tools/data_match/w3/exp and emits
w3_crt_experiments.json: __xc_a/__xi_a table contents, .bss placement order of
the global objects, static (file) bytes of the objects, and runtime vptr values.

Usage: python tools/data_match/w3/collect_exp.py
"""
import json
import os
import re
import struct
import subprocess

HERE = os.path.dirname(os.path.abspath(__file__))
EXP = os.path.join(HERE, "exp")
OUT = os.path.join(HERE, "w3_crt_experiments.json")


def pe_sections(path):
    f = open(path, "rb").read()
    e = struct.unpack_from("<I", f, 0x3C)[0]
    nsec = struct.unpack_from("<H", f, e + 6)[0]
    opt = e + 24
    base = struct.unpack_from("<I", f, opt + 28)[0]
    so = opt + struct.unpack_from("<H", f, e + 20)[0]
    out = []
    for i in range(nsec):
        off = so + i * 40
        name = f[off:off + 8].rstrip(b"\0").decode("latin1")
        vs, va, rs, ro = struct.unpack_from("<IIII", f, off + 8)
        out.append(dict(name=name, va=va + base, vs=vs, ro=ro, rs=rs))
    return f, out


def va_to_off(secs, va):
    for s in secs:
        if s["va"] <= va < s["va"] + max(s["vs"], s["rs"]):
            return s["ro"] + (va - s["va"])
    return None


def parse_map(path):
    syms = {}
    for line in open(path, encoding="latin1"):
        m = re.match(r"\s+([0-9a-f]{4}):([0-9a-f]{8})\s+(\S+)\s+([0-9a-f]{8})", line)
        if m:
            syms[m.group(3)] = int(m.group(4), 16)
    return syms


def find(syms, needle):
    for k, v in syms.items():
        if needle in k:
            return v
    return None


def analyze(name):
    exe = os.path.join(EXP, name + ".exe")
    mp = os.path.join(EXP, name + ".map")
    f, secs = pe_sections(exe)
    syms = parse_map(mp)
    out = {"exe": name, "map": name + ".map"}

    def rd(va):
        o = va_to_off(secs, va)
        if o is None or o + 4 > len(f):
            return 0
        return struct.unpack_from("<I", f, o)[0]

    def bytes_at(va, n):
        o = va_to_off(secs, va)
        if o is None:
            return b""
        return f[o:o + n]

    xca = find(syms, "__xc_a")
    xcz = find(syms, "__xc_z")
    xia = find(syms, "__xi_a")
    xiz = find(syms, "__xi_z")
    if xca and xcz:
        out["xc"] = {"va": xca, "end": xcz,
                     "entries": [rd(va) for va in range(xca, xcz, 4)]}
    if xia and xiz:
        out["xi"] = {"va": xia, "end": xiz,
                     "entries": [rd(va) for va in range(xia, xiz, 4)]}
    # data section info
    ds = [s for s in secs if s["name"] == ".data"][0]
    out["data_section"] = {"va": ds["va"], "vsize": ds["vs"], "rawsize": ds["rs"]}
    # globals and .bss order
    gl = []
    for needle in ["?g_a1@", "?g_a2@", "?g_a3@", "?g_a4@", "?g_a5@", "?g_a6@",
                   "?g_b@", "?g_c@", "?g_pod@", "?g_int@"]:
        va = find(syms, needle)
        if va:
            gl.append({"sym": needle.strip("?").strip("@"), "va": va,
                       "static16": bytes_at(va, 16).hex(" ")})
    gl.sort(key=lambda r: r["va"])
    out["globals_by_address"] = gl
    # bss contribution (map line)
    out["bss"] = None
    for line in open(mp, encoding="latin1"):
        m = re.search(r"^\s+0003:([0-9a-f]{8})\s+([0-9a-f]{8})H\s+\.bss\s+DATA", line)
        if m:
            out["bss"] = {"start_va": ds["va"] + int(m.group(1), 16),
                          "size": int(m.group(2), 16)}
    # run and capture stdout
    try:
        pr = subprocess.run([exe], cwd=EXP, capture_output=True, text=False, timeout=20)
        out["runtime_stdout"] = pr.stdout.decode("latin1", "replace").strip().splitlines()
    except Exception as exc:  # noqa: BLE001
        out["runtime_stdout"] = ["<run failed: %s>" % exc]
    return out


def main():
    exps = ["exp1", "exp2", "exp6", "t1", "t2", "t3", "t4", "gui", "gui_eh",
            "gui_gx", "sz", "align"]
    res = {}
    for e in exps:
        if os.path.exists(os.path.join(EXP, e + ".exe")) and os.path.exists(os.path.join(EXP, e + ".map")):
            res[e] = analyze(e)
    with open(OUT, "w", encoding="utf-8") as fh:
        json.dump(res, fh, indent=1)
    print("wrote", OUT)
    for e, r in res.items():
        xc = r.get("xc", {}).get("entries", [])
        print("%-7s __xc[%d] %s  globals@%s" % (
            e, len(xc), " ".join("%08x" % v for v in xc),
            " ".join("%08x" % g["va"] for g in r.get("globals_by_address", []))))


if __name__ == "__main__":
    main()
