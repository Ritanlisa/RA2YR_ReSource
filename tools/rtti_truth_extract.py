#!/usr/bin/env python3
"""RTTI ground-truth extractor for gamemd.exe (MSVC 6.0, 32-bit, /GR).

Parses MSVC6 RTTI structures directly from the PE binary (no IDA needed).
VC6 uses ABSOLUTE virtual addresses in all RTTI structures (unlike VC7.1+
image-relative offsets), and the COL signature dword is 0:

  COL  (RTTICompleteObjLocator)  { sig=0, offset, cdOffset, pTD, pCHD }
  TD   (TypeDescriptor)           { vfptr, spare=0, name[] ASCIZ }
  CHD  (RTTIClassHierarchyDescriptor) { sig=0, attributes, numBaseClasses, pBCA }
  BCA  (BaseClassArray)           array of absolute BCD pointers
  BCD  (BaseClassDescriptor)      { pTD, numContainedBases, mdisp, pdisp, vdisp, attributes }

The BCD array is a pre-order DFS of the hierarchy tree; each entry's subtree
size is numContainedBases+1.  Direct bases of the complete class are the
top-level subtree roots following BCD[0].

Outputs (git-tracked):
  anchors/rtti_hierarchy.json    classes / direct / full / this_adjust / td_addr
  anchors/rtti_vtable_class.json { vtable_va: { class, col_offset, col_va } }

Usage:
  python tools/rtti_truth_extract.py [--exe H:/RA2MD/gamemd.exe]
                                     [--compare .omo/rtti_ground_truth.json]
"""
from __future__ import annotations

import argparse
import json
import os
import re
import struct
import sys
from collections import defaultdict

IMAGE_BASE = 0x400000
TD_VFPTR = 0x7F9594  # type_info vftable, lives in .rdata
MAX_BASES = 64


def valid_td_name(name: bytes):
    """'.?AVClass@@' / '.?AUstruct@@' / '.?AW4enum@@' — mangled RTTI name."""
    return (
        name.startswith((b".?AV", b".?AU", b".?AW"))
        and name.endswith(b"@@")
        and len(name) >= 7
        and all(0x20 <= c < 0x7F for c in name)
    )


def parse_sections(data: bytes):
    e_lfanew = struct.unpack_from("<I", data, 0x3C)[0]
    nsec = struct.unpack_from("<H", data, e_lfanew + 6)[0]
    opt_size = struct.unpack_from("<H", data, e_lfanew + 20)[0]
    sec_off = e_lfanew + 24 + opt_size
    secs = []
    for i in range(nsec):
        off = sec_off + i * 40
        name = data[off : off + 8].rstrip(b"\x00").decode()
        vsize, va, rsize, roff = struct.unpack_from("<IIII", data, off + 8)
        secs.append(
            {
                "name": name,
                "va": IMAGE_BASE + va,
                "vsize": vsize,
                "roff": roff,
                "rsize": rsize,
                "span": max(vsize, rsize),
            }
        )
    return secs


class Binary:
    def __init__(self, path: str):
        self.path = path
        self.data = open(path, "rb").read()
        self.secs = parse_sections(self.data)

    def section(self, name: str):
        for s in self.secs:
            if s["name"] == name:
                return s
        return None

    def va2off(self, va: int):
        rva = va - IMAGE_BASE
        for s in self.secs:
            if s["va"] - IMAGE_BASE <= rva < s["va"] - IMAGE_BASE + s["span"]:
                off = s["roff"] + (rva - (s["va"] - IMAGE_BASE))
                if off < len(self.data):
                    return off
        return None

    def va_section(self, va: int):
        rva = va - IMAGE_BASE
        for s in self.secs:
            if s["va"] - IMAGE_BASE <= rva < s["va"] - IMAGE_BASE + s["span"]:
                return s["name"]
        return None

    def u32(self, va: int):
        off = self.va2off(va)
        return struct.unpack_from("<I", self.data, off)[0] if off is not None else None

    def cstr(self, va: int, maxlen: int = 512):
        off = self.va2off(va)
        if off is None:
            return None
        end = self.data.find(b"\x00", off, off + maxlen)
        if end < 0:
            return None
        return self.data[off:end]


def demangle(mangled: bytes):
    """'.?AVUnitClass@@' -> 'UnitClass'; keeps template sugar like '?$BlitPlain@E'
    and nested-scope form 'Leaf@Scope' (innermost first, as in the mangled name)."""
    s = mangled.decode("ascii", "replace")
    if s.startswith(".?AW4"):  # enum
        s = s[5:]
    elif s.startswith((".?AV", ".?AU")):  # class / struct
        s = s[4:]
    elif s.startswith(".?A"):
        s = s[3:]
    if s.endswith("@@"):
        s = s[:-2]
    return s


# ---------------------------------------------------------------- TD scan


def scan_type_descriptors(bin_: Binary):
    """Find every TypeDescriptor: {vfptr, spare=0, '.?A...@@\\0'} in .data/.rdata."""
    tds = {}  # va -> demangled name
    for secname in (".data", ".rdata", ".text"):
        sec = bin_.section(secname)
        if not sec:
            continue
        blob = bin_.data[sec["roff"] : sec["roff"] + sec["rsize"]]
        pat = struct.pack("<II", TD_VFPTR, 0)
        pos = blob.find(pat)
        while pos != -1:
            if pos % 4 == 0:  # TDs are dword-aligned
                va = sec["va"] + pos
                name = bin_.cstr(va + 8)
                if name and valid_td_name(name):
                    tds[va] = demangle(name)
            pos = blob.find(pat, pos + 1)
    return tds


# ---------------------------------------------------------------- COL scan


def parse_chd(bin_: Binary, chd_va: int, td_set):
    """Validate + parse CHD -> list of BCD VAs."""
    off = bin_.va2off(chd_va)
    if off is None:
        return None
    sig, attrs, nbases, pbca = struct.unpack_from("<IIII", bin_.data, off)
    if sig != 0 or not (1 <= nbases <= MAX_BASES):
        return None
    bca_off = bin_.va2off(pbca)
    if bca_off is None:
        return None
    bcds = struct.unpack_from(f"<{nbases}I", bin_.data, bca_off)
    for b in bcds:
        if bin_.va2off(b) is None:
            return None
    return {"attrs": attrs, "nbases": nbases, "bcds": list(bcds)}


def scan_cols(bin_: Binary, tds):
    """Every COL in .rdata/.data: dword[3] must be a known TD address."""
    td_set = set(tds)
    cols = {}  # col_va -> {offset, cdOffset, td_va, chd_va, chd}
    for secname in (".rdata", ".data"):
        sec = bin_.section(secname)
        if not sec:
            continue
        blob = bin_.data[sec["roff"] : sec["roff"] + sec["rsize"]]
        n = len(blob) // 4
        words = struct.unpack_from(f"<{n}I", blob[: n * 4])
        for i in range(0, n - 4):
            cand_va = sec["va"] + i * 4
            if cand_va in cols:
                continue
            sig, coff, cdoff, ptd, pchd = words[i : i + 5]
            if sig != 0 or ptd not in td_set:
                continue
            chd = parse_chd(bin_, pchd, td_set)
            if chd is None:
                continue
            cols[cand_va] = {
                "offset": coff,
                "cdOffset": cdoff,
                "td_va": ptd,
                "chd_va": pchd,
                "chd": chd,
            }
    return cols


# ---------------------------------------------------------------- vtables


def build_vtable_map(bin_: Binary, cols):
    """xref pass: any dword in .rdata/.data equal to a COL VA sits at vtable[-4]."""
    col_set = set(cols)
    hits = defaultdict(list)  # col_va -> [vtable_va]
    text = bin_.section(".text")
    text_lo, text_hi = text["va"], text["va"] + text["span"]
    for secname in (".rdata", ".data"):
        sec = bin_.section(secname)
        if not sec:
            continue
        blob = bin_.data[sec["roff"] : sec["roff"] + sec["rsize"]]
        n = len(blob) // 4
        words = struct.unpack_from(f"<{n}I", blob[: n * 4])
        for i, w in enumerate(words):
            if w in col_set:
                vtbl_va = sec["va"] + (i + 1) * 4
                first = bin_.u32(vtbl_va)
                if first is not None and text_lo <= first < text_hi:
                    hits[w].append(vtbl_va)
    return hits


# ---------------------------------------------------------------- hierarchy


def parse_bcd(bin_: Binary, bcd_va):
    off = bin_.va2off(bcd_va)
    if off is None:
        return None
    ptd, ncb, mdisp, pdisp, vdisp, attrs = struct.unpack_from("<6I", bin_.data, off)
    return {
        "td_va": ptd,
        "numContained": ncb,
        "mdisp": mdisp,
        "pdisp": pdisp,
        "vdisp": vdisp,
        "attrs": attrs,
    }


def direct_bases_from_parsed(parsed):
    """parsed: list of BCD dicts in DFS pre-order; entry 0 is the class itself."""
    roots = []
    idx = 1
    while idx < len(parsed):
        roots.append(parsed[idx])
        idx += parsed[idx]["numContained"] + 1
    return roots


def build_hierarchy(bin_: Binary, cols, tds):
    classes = set(tds.values())
    direct = defaultdict(set)  # class -> direct base names
    full = defaultdict(set)  # class -> all base names (transitive)
    this_adjust = {}  # "Derived->Base" -> [mdisp, pdisp, vdisp]
    col_of_class = {}  # class -> primary COL va (offset==0)
    orphan_tds = set(tds.values())
    bad_cols = []

    for col_va, col in cols.items():
        cls = tds.get(col["td_va"])
        if cls is None:
            bad_cols.append(col_va)
            continue
        parsed = []
        ok = True
        for b in col["chd"]["bcds"]:
            bcd = parse_bcd(bin_, b)
            if bcd is None or bcd["td_va"] not in tds:
                ok = False
                break
            bcd["name"] = tds[bcd["td_va"]]
            parsed.append(bcd)
        if not ok or not parsed or parsed[0]["td_va"] != col["td_va"]:
            bad_cols.append(col_va)
            continue
        orphan_tds.discard(cls)
        for p in parsed:
            orphan_tds.discard(p["name"])
        if col["offset"] == 0:
            col_of_class[cls] = col_va
        else:
            col_of_class.setdefault(cls, col_va)
        bases = [p["name"] for p in parsed[1:]]
        for b in direct_bases_from_parsed(parsed):
            direct[cls].add(b["name"])
        full[cls].update(bases)
        for p in parsed[1:]:
            key = f"{cls}->{p['name']}"
            this_adjust[key] = [p["mdisp"], p["pdisp"], p["vdisp"]]

    return {
        "classes": sorted(classes),
        "direct": {k: sorted(v) for k, v in direct.items()},
        "full": {k: sorted(v) for k, v in full.items()},
        "this_adjust": this_adjust,
        "td_addr": {name: va for va, name in tds.items()},
        "col_addr": col_of_class,
        "orphan_tds": sorted(orphan_tds),
        "bad_cols": [hex(c) for c in bad_cols],
    }


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--exe", default=r"H:/RA2MD/gamemd.exe")
    ap.add_argument("--out-dir", default=None, help="default: <repo>/anchors")
    ap.add_argument("--compare", default=None, help="old .omo/rtti_ground_truth.json")
    args = ap.parse_args()

    here = os.path.dirname(os.path.abspath(__file__))
    repo = os.path.dirname(here)
    out_dir = args.out_dir or os.path.join(repo, "anchors")

    bin_ = Binary(args.exe)
    print(f"[+] {args.exe}: {len(bin_.data):,} bytes, sections:",
          ", ".join(f"{s['name']}@{s['va']:#x}+{s['span']:#x}" for s in bin_.secs))

    tds = scan_type_descriptors(bin_)
    print(f"[+] TypeDescriptors: {len(tds)}")

    cols = scan_cols(bin_, tds)
    print(f"[+] CompleteObjectLocators: {len(cols)}")

    vmap = build_vtable_map(bin_, cols)
    n_vtables = sum(len(v) for v in vmap.values())
    print(f"[+] COL->vtable xrefs: {n_vtables} vtables over {len(vmap)} COLs")

    hier = build_hierarchy(bin_, cols, tds)
    print(f"[+] classes={len(hier['classes'])} "
          f"with-hierarchy={len(hier['full'])} "
          f"direct-edges={sum(len(v) for v in hier['direct'].values())} "
          f"this_adjust={len(hier['this_adjust'])}")
    print(f"[+] orphan TDs (no COL/BCD reference): {len(hier['orphan_tds'])}")
    for o in hier["orphan_tds"][:20]:
        print("    -", o)
    if hier["bad_cols"]:
        print(f"[!] unparsable COLs: {len(hier['bad_cols'])} {hier['bad_cols'][:10]}")

    # vtable -> class output
    vtable_class = {}
    for col_va, vts in vmap.items():
        col = cols[col_va]
        cls = tds.get(col["td_va"], f"UNKNOWN_{col['td_va']:#x}")
        for vt in vts:
            vtable_class[hex(vt)] = {
                "class": cls,
                "col_offset": col["offset"],
                "col_va": hex(col_va),
            }

    os.makedirs(out_dir, exist_ok=True)
    out_h = os.path.join(out_dir, "rtti_hierarchy.json")
    out_v = os.path.join(out_dir, "rtti_vtable_class.json")
    with open(out_h, "w", encoding="utf-8") as f:
        json.dump(
            {
                "classes": hier["classes"],
                "direct": hier["direct"],
                "full": hier["full"],
                "this_adjust": hier["this_adjust"],
                "td_addr": {k: hex(v) for k, v in sorted(
                    hier["td_addr"].items(), key=lambda kv: kv[1])},
                "col_addr": {k: hex(v) for k, v in hier["col_addr"].items()},
                "meta": {
                    "exe": args.exe,
                    "image_base": IMAGE_BASE,
                    "td_vfptr": hex(TD_VFPTR),
                    "generated_by": "tools/rtti_truth_extract.py",
                },
            },
            f, indent=1, sort_keys=True,
        )
    with open(out_v, "w", encoding="utf-8") as f:
        json.dump(
            {
                "meta": {
                    "exe": args.exe,
                    "generated_by": "tools/rtti_truth_extract.py",
                    "note": "vtable[-1] -> COL; col_offset!=0 means MI secondary vtable",
                },
                "vtables": dict(sorted(vtable_class.items(), key=lambda kv: int(kv[0], 16))),
            },
            f, indent=1,
        )
    print(f"[+] wrote {out_h}")
    print(f"[+] wrote {out_v} ({len(vtable_class)} vtables)")

    if args.compare and os.path.isfile(args.compare):
        old = json.load(open(args.compare, encoding="utf-8"))
        old_cls = set(old.get("classes", []))
        new_cls = set(hier["classes"])
        old_full = old.get("inheritance", {})
        print("\n[compare] vs old .omo truth:")
        print(f"  classes: old={len(old_cls)} new={len(new_cls)} "
              f"| new-only={len(new_cls - old_cls)} old-only={len(old_cls - new_cls)}")
        only_new = sorted(new_cls - old_cls)
        if only_new:
            print("  new-only sample:", only_new[:15])
        only_old = sorted(old_cls - new_cls)
        if only_old:
            print("  old-only sample:", only_old[:15])
        diff_edges = 0
        checked = 0
        for cls, bases in old_full.items():
            if cls in hier["full"]:
                checked += 1
                if set(bases) != set(hier["full"][cls]):
                    diff_edges += 1
                    if diff_edges <= 10:
                        print(f"  EDGE-DIFF {cls}: old={sorted(bases)} new={sorted(hier['full'][cls])}")
        print(f"  full-hierarchy: {checked} comparable classes, {diff_edges} base-set diffs")
    return 0


if __name__ == "__main__":
    sys.exit(main())
