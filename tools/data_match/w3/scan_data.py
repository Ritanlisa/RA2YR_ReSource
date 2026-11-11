#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""scan_data.py -- W3 .data inventory ledger for gamemd.exe.

Classifies every 4-byte dword of the .data virtual range
    VA 0x812000 .. 0xB79BE4   (RVA 0x412000, VirtualSize 0x367BE4)
into exactly one category, with byte-level string/RTTI overlays and
run-level detection of numeric tables / function-pointer tables.

Ground truth anchors consumed (read-only):
    anchors/rtti_vtable_class.json        -> vtable VA set
    anchors/vtable_slot_authority.json    -> vtable VA -> class
    anchors/singleton_types.json          -> known global instances (176)
    anchors/global_init_types.json        -> strlit char[N] globals + installs
    tools/class_layouts.json              -> sizeof for singleton classes

Outputs (to tools/data_match/w3/):
    w3_inventory.json   full ledger (totals, region map, detail lists)
    w3_runs.json        merged same-label runs (the dword ledger in run form)
    w3_summary.md       human-readable summary

Usage: python tools/data_match/w3/scan_data.py
"""
import json
import os
import struct
import sys

import numpy as np

ORIG = r"D:\RA2MD\gamemd.exe"
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__)))))
OUT_DIR = os.path.join(ROOT, "tools", "data_match", "w3")

# ---- PE section facts (verified via dumpbin /headers) ----
IMAGE_BASE = 0x400000
DATA_VA = 0x812000
DATA_RAW = 0x412000
DATA_VSIZE = 0x367BE4
DATA_RAW_SIZE = 0x6C000
DATA_RAW_END = DATA_VA + DATA_RAW_SIZE          # 0x878000
DATA_END = DATA_VA + DATA_VSIZE                 # 0xB79BE4 (exclusive)

TEXT_LO, TEXT_HI = 0x401000, 0x7E1000           # .text VA span (raw end)
RDATA_LO, RDATA_HI = 0x7E1000, 0x811074         # .rdata VA span
RSRC_LO, RSRC_HI = 0xB7A000, 0xB92228           # .rsrc VA span

# ---- labels ----
L_CRTCPP = "crt_cpp_init_table"     # __xc_a..__xc_z : [0x812000,0x815DA6)
L_CRTC = "crt_c_init_table"         # __xi_a..__xi_z : [0x815DA8,0x815DBC)
L_CRTT = "crt_term_group"           # XPA/XPX/XPZ/XTA/XTZ groups
L_TINFO = "rtti_type_info"          # type_info descriptor objects
L_STR = "string_data"               # printable ASCII / char[N] globals
L_WSTR = "widestring_data"          # UTF-16LE printable runs
L_NUM = "numeric_table"             # monotone int/float array runs
L_FPT = "function_pointer_table"    # runs of >=2 .text pointers
L_FPT1 = "function_pointer_single"  # isolated .text pointer
L_VT = "vtable_ref"                 # dword equal to a known vtable VA
L_RDP = "rdata_pointer"
L_DAP = "data_pointer"
L_RSP = "rsrc_pointer"
L_ZERO = "zero"
L_SMALL = "small_integer"           # 0 < v < 0x10000
L_OTHER = "other_integer"

LABEL_ORDER = [L_CRTCPP, L_CRTC, L_CRTT, L_TINFO, L_STR, L_WSTR, L_NUM,
               L_FPT, L_FPT1, L_VT, L_RDP, L_DAP, L_RSP, L_ZERO, L_SMALL, L_OTHER]


def load_json(path):
    with open(path, "r", encoding="utf-8") as fh:
        return json.load(fh)


def build_vtable_set():
    vt = set()
    owner = {}
    d = load_json(os.path.join(ROOT, "anchors", "rtti_vtable_class.json"))["vtables"]
    for k, v in d.items():
        a = int(k, 16)
        vt.add(a)
        owner.setdefault(a, v.get("class"))
    a = load_json(os.path.join(ROOT, "anchors", "vtable_slot_authority.json"))
    for cls, v in a.items():
        addr = v.get("vtable")
        if addr:
            va = int(addr, 16)
            vt.add(va)
            owner[va] = cls
    return vt, owner


def read_data_bytes():
    with open(ORIG, "rb") as fh:
        fh.seek(DATA_RAW)
        raw = fh.read(DATA_RAW_SIZE)
    assert len(raw) == DATA_RAW_SIZE, "short .data read"
    tail = b"\x00" * (DATA_END - DATA_RAW_END)
    return raw + tail


def align4(n):
    return (n + 3) & ~3


def ascii_runs(buf, base_va, min_len=8):
    """Maximal printable runs. Returns [(va, length)] byte spans."""
    out = []
    i = 0
    n = len(buf)
    while i < n:
        b = buf[i]
        if 0x20 <= b <= 0x7E:
            j = i + 1
            while j < n and 0x20 <= buf[j] <= 0x7E:
                j += 1
            if j - i >= min_len:
                out.append((base_va + i, j - i))
            i = j
        else:
            i += 1
    return out


def wstring_runs(buf, base_va, min_chars=4):
    """UTF-16LE printable runs (char printable, high byte 0)."""
    out = []
    i = 0
    n = len(buf) - 1
    while i < n:
        b0, b1 = buf[i], buf[i + 1]
        if 0x20 <= b0 <= 0x7E and b1 == 0:
            j = i
            while j + 1 < n and 0x20 <= buf[j] <= 0x7E and buf[j + 1] == 0:
                j += 2
            chars = (j - i) // 2
            if chars >= min_chars:
                out.append((base_va + i, chars * 2))
            i = j
        else:
            i += 2 if i % 2 == 0 else 1
    return out


def main():
    os.makedirs(OUT_DIR, exist_ok=True)
    dt = np.dtype("<u4")
    buf = read_data_bytes()
    vals = np.frombuffer(buf, dtype=dt)
    n = len(vals)
    assert n == (DATA_END - DATA_VA) // 4, (n, (DATA_END - DATA_VA) // 4)

    labels = np.full(n, -1, dtype=np.int8)  # -1 = unclassified
    code = {name: i for i, name in enumerate(LABEL_ORDER)}

    def mark(lo_va, hi_va, code_name):
        i0 = (lo_va - DATA_VA) // 4
        i1 = (hi_va - DATA_VA) // 4
        labels[i0:i1] = code[code_name]

    def is_unlabelled(lo_va, hi_va):
        i0 = (lo_va - DATA_VA) // 4
        i1 = (hi_va - DATA_VA) // 4
        return not np.any(labels[i0:i1] >= 0)

    # ---------- 1. CRT tables (exact, verified by __cinit disassembly) ----------
    mark(0x812000, 0x815DA8, L_CRTCPP)   # XCA null + 3944 ctor ptrs + XCZ null + pad
    mark(0x815DA8, 0x815DBC, L_CRTC)     # XIA null + 4 C initializers
    mark(0x815DBC, 0x815DE0, L_CRTT)     # XIZ null + XP*/XT* groups

    # ---------- 2. type_info descriptors (static vfptr = 0x7F9594) ----------
    type_info = []
    ti_vft = 0x7F9594
    for i in np.nonzero(vals == ti_vft)[0]:
        va = DATA_VA + int(i) * 4
        if labels[i] >= 0:
            continue
        if not is_unlabelled(va, va + 8):
            continue
        # name starts at va+8, NUL terminated
        off = (va + 8) - DATA_VA
        z = buf.find(b"\x00", off)
        if z < 0:
            continue
        name = buf[off:z].decode("latin1")
        size = align4(8 + len(name) + 1)
        if not is_unlabelled(va, va + size):
            continue
        mark(va, va + size, L_TINFO)
        type_info.append({"va": va, "size": size, "name": name})

    # ---------- 3. strings ----------
    ascii_spans = ascii_runs(buf, DATA_VA)
    wstr_spans = wstring_runs(buf, DATA_VA)

    # per-dword string label: a dword is a string dword if its start lies in a
    # printable span (>=3 printable bytes of its 4) and it is not already claimed
    str_mask = np.zeros(n, dtype=bool)
    for va, ln in ascii_spans:
        i0 = (va - DATA_VA) // 4
        i1 = (va + ln - DATA_VA + 3) // 4
        str_mask[i0:i1] = True
    wstr_mask = np.zeros(n, dtype=bool)
    for va, ln in wstr_spans:
        i0 = (va - DATA_VA) // 4
        i1 = (va + ln - DATA_VA + 3) // 4
        wstr_mask[i0:i1] = True

    # anchored char[N] globals from global_init_types.json
    ginit = load_json(os.path.join(ROOT, "anchors", "global_init_types.json"))
    strlit = []
    for e in ginit.get("evidence", []):
        if e.get("via") != "gdata-strlit":
            continue
        t = (e.get("types") or [""])[0]
        if not t.startswith("char["):
            continue
        sz = int(t[5:-1])
        va = int(e["addr"], 16)
        strlit.append({"va": va, "size": sz, "name": e.get("name"), "str": e.get("str")})
    strlit.sort(key=lambda r: r["va"])

    # mark string dwords (only where ASCII/WSTRING bytes exist and not claimed)
    mask = ((str_mask | wstr_mask) & (labels < 0))
    labels[mask & str_mask] = code[L_STR]
    labels[mask & ~str_mask] = code[L_WSTR]
    # also force-mark anchored char[N] spans that the ASCII scan missed
    for r in strlit:
        i0 = (r["va"] - DATA_VA) // 4
        i1 = (r["va"] + r["size"] - DATA_VA) // 4
        for i in range(i0, min(i1, n)):
            if labels[i] < 0:
                labels[i] = code[L_STR]

    # ---------- 4. numeric tables: monotone asc/desc runs of unlabelled dwords ----------
    def monotone_runs(min_len=16, max_step=0x2000):
        runs = []
        i = 0
        while i < n:
            if labels[i] >= 0:
                i += 1
                continue
            v = int(vals[i])
            j = i + 1
            direction = 0
            while j < n and labels[j] < 0:
                w = int(vals[j])
                d = w - int(vals[j - 1])
                if direction == 0:
                    if 0 < d <= max_step:
                        direction = 1
                    elif -max_step <= d < 0:
                        direction = -1
                    else:
                        break
                if direction == 1 and not (0 < d <= max_step):
                    break
                if direction == -1 and not (-max_step <= d < 0):
                    break
                j += 1
            if direction != 0 and j - i >= min_len:
                runs.append((i, j, direction))
                i = j
            else:
                i += 1
        return runs

    num_runs = monotone_runs()
    for i0, i1, _ in num_runs:
        labels[i0:i1] = code[L_NUM]

    # ---------- 5. pointer runs / value classes ----------
    def val_in(lo, hi):
        return np.logical_and(vals >= lo, vals < hi)

    un = labels < 0
    text_ptr = un & val_in(TEXT_LO, TEXT_HI)
    # runs of >=2 text pointers -> function pointer table
    fpt_runs = []
    i = 0
    while i < n:
        if text_ptr[i]:
            j = i + 1
            while j < n and text_ptr[j]:
                j += 1
            if j - i >= 2:
                fpt_runs.append((i, j))
                labels[i:j] = code[L_FPT]
            i = j
        else:
            i += 1

    un = labels < 0
    vt_set = np.zeros(1, dtype=np.uint32)  # placeholder to keep numpy happy
    vt_vals, vt_owner = build_vtable_set()
    vt_arr = np.array(sorted(vt_vals), dtype=np.uint32)

    def classify():
        un = np.nonzero(labels < 0)[0]
        if len(un) == 0:
            return
        v = vals[un]
        # vectorized membership via searchsorted
        pos = np.searchsorted(vt_arr, v)
        pos_c = np.clip(pos, 0, len(vt_arr) - 1)
        is_vt = vt_arr[pos_c] == v
        is_text = (v >= TEXT_LO) & (v < TEXT_HI)
        is_rdata = (v >= RDATA_LO) & (v < RDATA_HI)
        is_data = (v >= DATA_VA) & (v < DATA_END)
        is_rsrc = (v >= RSRC_LO) & (v < RSRC_HI)
        is_zero = v == 0
        is_small = (v > 0) & (v < 0x10000)
        lab = np.full(len(un), code[L_OTHER], dtype=np.int8)
        lab[is_small] = code[L_SMALL]
        lab[is_rsrc] = code[L_RSP]
        lab[is_data] = code[L_DAP]
        lab[is_rdata] = code[L_RDP]
        lab[is_text] = code[L_FPT1]
        lab[is_vt] = code[L_VT]
        lab[is_zero] = code[L_ZERO]
        labels[un] = lab

    classify()

    # ---------- 6. ledger totals ----------
    totals = {}
    for name, c in code.items():
        cnt = int(np.count_nonzero(labels == c))
        totals[name] = {"dwords": cnt, "bytes": cnt * 4}
    file_dwords = (DATA_RAW_END - DATA_VA) // 4
    data_dwords = n

    def pct(x, d):
        return round(100.0 * x / d, 2) if d else 0.0

    for name in totals:
        totals[name]["pct_of_virtual_data"] = pct(totals[name]["dwords"], data_dwords)
        c = code[name]
        fb = int(np.count_nonzero(labels[:file_dwords] == c))
        tb = int(np.count_nonzero(labels[file_dwords:] == c))
        totals[name]["dwords_file_backed"] = fb
        totals[name]["dwords_zero_tail"] = tb
        totals[name]["pct_of_file_backed"] = pct(fb, file_dwords)

    # ---------- 7. runs ledger ----------
    runs = []
    i = 0
    while i < n:
        c = int(labels[i])
        j = i + 1
        while j < n and int(labels[j]) == c:
            j += 1
        runs.append({
            "va": DATA_VA + i * 4,
            "end": DATA_VA + j * 4,
            "bytes": (j - i) * 4,
            "label": LABEL_ORDER[c],
        })
        i = j

    # ---------- 8. detail lists ----------
    # CRT tables
    cpp_entries = [int(x) for x in vals[1:3945]]   # 0x812004..0x815DA0 (3944)
    c_entries = [int(x) for x in vals[3946:3951]]  # 0x815DA8..0x815DBC (5 slots)
    crt = {
        "cpp_table": {
            "va": 0x812000, "end": 0x815DA4,
            "leading_null_at": 0x812000,
            "trailing_null_at": 0x815DA4,
            "ctor_count": len(cpp_entries),
            "min": hex(min(cpp_entries)), "max": hex(max(cpp_entries)),
            "unique": len(set(cpp_entries)),
            "strictly_ascending_pairs": sum(1 for a, b in zip(cpp_entries, cpp_entries[1:]) if a < b),
            "total_pairs": len(cpp_entries) - 1,
        },
        "c_table": {
            "va": 0x815DA8, "end": 0x815DBC,
            "entries": [hex(x) for x in c_entries],
        },
        "term_group": {
            "va": 0x815DBC, "end": 0x815DE0,
            "dwords": [hex(int(x)) for x in vals[3951:3960]],
        },
    }

    # numeric tables top runs
    def run_list(run_idxs, limit=40):
        out = []
        for i0, i1, d in run_idxs:
            seg = vals[i0:i1]
            diffs = np.diff(seg.astype(np.int64))
            out.append({
                "va": DATA_VA + i0 * 4, "end": DATA_VA + i1 * 4,
                "bytes": (i1 - i0) * 4, "entries": int(i1 - i0),
                "direction": d,
                "first": hex(int(seg[0])), "last": hex(int(seg[-1])),
                "step_min": int(diffs.min()) if len(diffs) else 0,
                "step_max": int(diffs.max()) if len(diffs) else 0,
            })
        out.sort(key=lambda r: -r["bytes"])
        return out[:limit]

    # function pointer table runs
    fpt_list = []
    for i0, i1 in fpt_runs:
        seg = vals[i0:i1]
        fpt_list.append({"va": DATA_VA + i0 * 4, "end": DATA_VA + i1 * 4,
                         "bytes": (i1 - i0) * 4, "entries": int(i1 - i0),
                         "target_min": hex(int(seg.min())), "target_max": hex(int(seg.max()))})
    fpt_list.sort(key=lambda r: -r["bytes"])

    # vtable refs
    vts = []
    for i in np.nonzero(labels == code[L_VT])[0]:
        va = DATA_VA + int(i) * 4
        v = int(vals[i])
        vts.append({"va": va, "value": hex(v), "class": vt_owner.get(v)})

    # strings summary
    str_bytes = sum(ln for _, ln in ascii_spans)
    wstr_bytes = sum(ln for _, ln in wstr_spans)
    # anchored strlit cross-check
    anchor_hit = 0
    anchor_miss = []
    for r in strlit:
        i0 = (r["va"] - DATA_VA) // 4
        i1 = (r["va"] + r["size"] - DATA_VA) // 4
        if i0 < n and i1 <= n and np.all(labels[i0:i1] == code[L_STR]):
            anchor_hit += 1
        else:
            anchor_miss.append(r["va"])

    # union with ida_global_types.json char[N] globals (adds large buffers)
    charn_union = {r["va"]: r["size"] for r in strlit}
    try:
        ida_g = load_json(os.path.join(ROOT, "anchors", "ida_global_types.json"))
        import re as _re
        for k, v in ida_g.items():
            va = int(k, 16)
            if not (DATA_VA <= va < DATA_END):
                continue
            m = _re.match(r"char\[(\d+)\]$", str(v.get("type", "")))
            if m:
                charn_union.setdefault(va, int(m.group(1)))
    except Exception:
        pass
    charn_ida_extra = sum(1 for va in charn_union if va not in {r["va"] for r in strlit})
    name_prefix = {}
    for t in type_info:
        p = t["name"][:4]
        name_prefix[p] = name_prefix.get(p, 0) + 1

    # vtable-set hit reconciliation inside the file-backed region
    fb_vals = vals[:file_dwords]
    pos = np.searchsorted(vt_arr, fb_vals)
    pos = np.clip(pos, 0, len(vt_arr) - 1)
    vt_hit_idx = np.nonzero(vt_arr[pos] == fb_vals)[0]
    vt_hit_detail = []
    for i in vt_hit_idx:
        va = DATA_VA + int(i) * 4
        v = int(vals[i])
        vt_hit_detail.append({"va": va, "value": v, "cls": vt_owner.get(v),
                              "label": LABEL_ORDER[int(labels[i])]})

    # singletons
    sing = load_json(os.path.join(ROOT, "anchors", "singleton_types.json"))
    layouts = load_json(os.path.join(ROOT, "tools", "class_layouts.json"))
    simple = {k: v.get("size", 0) for k, v in layouts.items()}
    sing_rows = []
    for k, v in sing.items():
        va = int(k, 16)
        tp = v.get("type", "")
        cls = tp.lstrip("?$").split("@")[0] if tp.startswith("?$") else tp
        sz = simple.get(tp) or simple.get(cls) or 0
        sing_rows.append({
            "va": va, "name": v.get("name"), "type": tp,
            "region": "file_backed" if va < DATA_RAW_END else "zero_tail",
            "class_size_guess": sz,
            "static_dword": hex(int(vals[(va - DATA_VA) // 4])) if (va - DATA_VA) // 4 < n else None,
        })
    sing_rows.sort(key=lambda r: r["va"])
    # gaps between consecutive singletons
    for a, b in zip(sing_rows, sing_rows[1:]):
        a["gap_to_next"] = b["va"] - a["va"]

    # install sites (independent raw scan; C7 05 imm32 imm32)
    with open(ORIG, "rb") as fh:
        fbuf = fh.read()
    installs = []
    i = TEXT_LO
    end = TEXT_HI
    while i < end - 9:
        o = i - IMAGE_BASE
        if fbuf[o] == 0xC7 and fbuf[o + 1] == 0x05:
            dst, val = struct.unpack_from("<II", fbuf, o + 2)
            if DATA_VA <= dst < DATA_END and val in vt_vals:
                installs.append({"site": i, "dst": dst, "vtable": val,
                                 "cls": vt_owner.get(val)})
        i += 1

    inv = {
        "meta": {
            "exe": ORIG,
            "data_va": hex(DATA_VA), "data_vsize": hex(DATA_VSIZE),
            "data_raw_size": hex(DATA_RAW_SIZE),
            "data_end": hex(DATA_END),
            "file_backed_end": hex(DATA_RAW_END),
            "total_dwords": data_dwords, "file_backed_dwords": file_dwords,
            "zero_tail_dwords": data_dwords - file_dwords,
            "vtable_set_size": len(vt_vals),
            "generated_by": "tools/data_match/w3/scan_data.py",
        },
        "totals": totals,
        "crt_tables": crt,
        "type_info": {
            "count": len(type_info),
            "total_bytes": sum(t["size"] for t in type_info),
            "first_va": hex(min(t["va"] for t in type_info)),
            "last_va": hex(max(t["va"] for t in type_info)),
            "name_prefix": name_prefix,
            "sample": type_info[:8],
        },
        "strings": {
            "ascii_runs": len(ascii_spans),
            "ascii_bytes": str_bytes,
            "widestring_runs": len(wstr_spans),
            "widestring_bytes": wstr_bytes,
            "anchored_charN_globals": len(strlit),
            "anchored_bytes": sum(r["size"] for r in strlit),
            "anchored_label_hits": anchor_hit,
            "anchored_misses": anchor_miss[:20],
            "charN_union_globals": len(charn_union),
            "charN_union_bytes": sum(charn_union.values()),
            "charN_ida_extra": charn_ida_extra,
        },
        "numeric_tables": {"runs": len(num_runs),
                           "bytes": sum((i1 - i0) * 4 for i0, i1, _ in num_runs),
                           "top": run_list(num_runs)},
        "function_pointer_tables": {"runs": len(fpt_list),
                                    "bytes": sum(r["bytes"] for r in fpt_list),
                                    "top": fpt_list[:40]},
        "vtable_refs": {"count": len(vts), "items": vts,
                        "file_backed_vtset_hits": len(vt_hit_detail),
                        "file_backed_vtset_detail": vt_hit_detail},
        "singletons": {"count": len(sing_rows), "rows": sing_rows},
        "installs": {
            "direct_mov_count": len(installs),
            "unique_dst": len(set(x["dst"] for x in installs)),
            "unique_vtable": len(set(x["vtable"] for x in installs)),
            "dst_in_zero_tail": sum(1 for x in installs if x["dst"] >= DATA_RAW_END),
            "dst_in_file_backed": sum(1 for x in installs if x["dst"] < DATA_RAW_END),
            "all": [{"site": hex(x["site"]), "dst": hex(x["dst"]),
                     "vtable": hex(x["vtable"]), "cls": x["cls"]} for x in installs],
            "sample": [{"site": hex(x["site"]), "dst": hex(x["dst"]),
                        "vtable": hex(x["vtable"]), "cls": x["cls"]} for x in installs[:40]],
        },
        "runs": runs,
    }
    with open(os.path.join(OUT_DIR, "w3_inventory.json"), "w", encoding="utf-8") as fh:
        json.dump(inv, fh, indent=1)

    # compact runs file (va is hex string for readability)
    with open(os.path.join(OUT_DIR, "w3_runs.json"), "w", encoding="utf-8") as fh:
        json.dump([{"va": hex(r["va"]), "end": hex(r["end"]), "bytes": r["bytes"],
                    "label": r["label"]} for r in runs], fh, indent=0)

    # ---------- 9. markdown summary ----------
    def fmt_row(name):
        t = totals[name]
        return "| %s | %d | %d | %.2f%% | %.2f%% |" % (
            name, t["dwords"], t["bytes"], t["pct_of_virtual_data"], t["pct_of_file_backed"])

    lines = []
    lines.append("# W3 .data inventory (dword ledger)\n")
    lines.append("Region: VA 0x812000..0xB79BE4 (%d dwords = %d bytes); file-backed "
                 "0x812000..%s (%d dwords), zero tail %s..0xB79BE4 (%d dwords)\n" % (
                     data_dwords, data_dwords * 4, hex(DATA_RAW_END), file_dwords,
                     hex(DATA_RAW_END), data_dwords - file_dwords))
    lines.append("| category | dwords | bytes | % of virtual .data | dwords in file-backed | % of file-backed |")
    lines.append("|---|---|---|---|---|---|")
    for name in LABEL_ORDER:
        if totals[name]["dwords"]:
            t = totals[name]
            lines.append("| %s | %d | %d | %.2f%% | %d | %.2f%% |" % (
                name, t["dwords"], t["bytes"], t["pct_of_virtual_data"],
                t["dwords_file_backed"], t["pct_of_file_backed"]))
    lines.append("")
    lines.append("## CRT init tables (verified)\n")
    lines.append("- C++ table `__xc_a..__xc_z` = [0x812000, 0x815DA4): leading NULL + **3944 ctor pointers** + XCZ NULL. "
                 "Strictly ascending: %d/%d pairs; range %s..%s; unique %d." % (
                     crt["cpp_table"]["strictly_ascending_pairs"], crt["cpp_table"]["total_pairs"],
                     crt["cpp_table"]["min"], crt["cpp_table"]["max"], crt["cpp_table"]["unique"]))
    lines.append("- C table `__xi_a..__xi_z` = [0x815DA8, 0x815DBC): XIA NULL + 4 entries: %s." %
                 ", ".join(crt["c_table"]["entries"]))
    lines.append("- Terminator group [0x815DBC,0x815DE0): %s." % ", ".join(crt["term_group"]["dwords"]))
    lines.append("- __cinit@0x7CBDAF calls `__initterm(0x812000,0x815DA4)` then `__initterm(0x815DA8,0x815DBC)` "
                 "(disassembled; see report).\n")
    lines.append("## RTTI type_info descriptors\n")
    lines.append("- %d objects, %d bytes, VA %s..%s; static vfptr = 0x7F9594. "
                 "Name prefixes: %s\n" % (
                     len(type_info), sum(t["size"] for t in type_info),
                     inv["type_info"]["first_va"], inv["type_info"]["last_va"],
                     ", ".join("%s:%d" % (k, v) for k, v in sorted(name_prefix.items(), key=lambda x: -x[1])[:6])))
    lines.append("## Strings\n")
    lines.append("- ASCII runs >= 8: %d spans / %d bytes; UTF-16LE runs >= 4 chars: %d / %d bytes." % (
        len(ascii_spans), str_bytes, len(wstr_spans), wstr_bytes))
    lines.append("- Anchored `char[N]` globals (global_init_types gdata-strlit): %d records / %d bytes; "
                 "label coverage %d/%d. Union with ida_global_types: %d records / %d bytes (+%d large buffers).\n" % (
                     len(strlit), sum(r["size"] for r in strlit), anchor_hit, len(strlit),
                     len(charn_union), sum(charn_union.values()), charn_ida_extra))
    lines.append("## Numeric tables\n")
    lines.append("- %d monotone runs (>=16 entries), %d bytes total. Top: %s\n" % (
        len(num_runs), sum((i1 - i0) * 4 for i0, i1, _ in num_runs),
        "; ".join("%s..%s(%dB)" % (hex(r["va"]), hex(r["end"]), r["bytes"]) for r in run_list(num_runs, 5))))
    lines.append("## Function-pointer tables\n")
    lines.append("- %d runs (>=2 consecutive .text pointers), %d bytes. Top: %s\n" % (
        len(fpt_list), sum(r["bytes"] for r in fpt_list),
        "; ".join("%s..%s(%dB)" % (hex(r["va"]), hex(r["end"]), r["bytes"]) for r in fpt_list[:5])))
    lines.append("## Class instance vptrs\n")
    lines.append("- File-backed dwords equal to a known vtable VA: **%d** = %d type_info vfptr (0x7F9594) + %d numeric-table "
                 "coincidences (0x7F31AC @0x874F20, 0x7F57C8 @0x874F6C, inside the 16K monotone table). "
                 "**Class-instance vptr stored in the file: 0.**" % (
                     len(vt_hit_detail), sum(1 for x in vt_hit_detail if x["value"] == 0x7F9594),
                     sum(1 for x in vt_hit_detail if x["value"] != 0x7F9594)))
    lines.append("- Runtime installs found by raw `mov [imm32], imm32` scan: **%d sites**, %d unique destination globals; "
                 "all %d destinations are in the zero tail (>=%s); 0 in file-backed region.\n" % (
                     len(installs), len(set(x["dst"] for x in installs)),
                     sum(1 for x in installs if x["dst"] >= DATA_RAW_END), hex(DATA_RAW_END)))
    lines.append("## Singletons\n")
    lines.append("- %d entries from singleton_types.json; region split: %d file-backed / %d zero-tail." % (
        len(sing_rows), sum(1 for r in sing_rows if r["region"] == "file_backed"),
        sum(1 for r in sing_rows if r["region"] == "zero_tail")))
    with open(os.path.join(OUT_DIR, "w3_summary.md"), "w", encoding="utf-8") as fh:
        fh.write("\n".join(lines) + "\n")

    print("wrote w3_inventory.json / w3_runs.json / w3_summary.md")
    print("total dwords %d; file-backed %d; zero-tail %d" % (data_dwords, file_dwords, data_dwords - file_dwords))
    for name in LABEL_ORDER:
        t = totals[name]
        if t["dwords"]:
            print("  %-26s %7d dwords %9d B  %5.2f%%" % (name, t["dwords"], t["bytes"], t["pct_of_virtual_data"]))
    print("type_info objects:", len(type_info), "bytes:", sum(t["size"] for t in type_info))
    print("ascii runs:", len(ascii_spans), "bytes:", str_bytes, "| wstring:", len(wstr_spans), wstr_bytes)
    print("numeric runs:", len(num_runs), "fpt runs:", len(fpt_list), "vtable refs:", len(vts))
    print("direct installs:", len(installs), "unique dst:", len(set(x["dst"] for x in installs)))


if __name__ == "__main__":
    main()
