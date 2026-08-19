#!/usr/bin/env python3
"""_gap2_collect_skips.py - map compile errors in a build log to the gap2
function addresses that caused them, and merge into .omo/gap2_skipped_compile.json.

Strategy:
  1. Build a (Class::Method -> addr) and (method -> [addr]) map from the
     generated gap2_defs.cpp / gap2_global_defs.cpp files (each def is preceded
     by a `// 0xADDR` line).
  2. For each `error Cnnnn:` line in the log:
       a. If the error file:line sits inside a gap2 marker block in an hpp OR in
          a gap2_defs.cpp, read that line's `// 0xADDR`.
       b. Else, pull every fully-qualified `A::B::C` symbol out of the (ASCII)
          message, reduce to Class::Method, and look up its addr.
  3. Append the resulting addresses to gap2_skipped_compile.json["addrs"].
"""
import json, re, sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
SRC = ROOT / "src"
SKIP = ROOT / ".omo" / "gap2_skipped_compile.json"
LOG = ROOT / (sys.argv[1] if len(sys.argv) > 1 else ".omo/gap2_build_p2.log")

ADDR_RE = re.compile(r"//\s*(0x[0-9A-Fa-f]+)")
QUAL_RE = re.compile(r"([A-Za-z_]\w*(?:::[A-Za-z_~]\w*)+)")
DEF_RE = re.compile(r"\b([A-Za-z_]\w*)::~?([A-Za-z_]\w*)\s*\(")


def build_addr_maps():
    cm_to_addr = {}     # "Class::Method" -> addr
    method_to_addrs = {}  # "Method" -> set(addr)
    for cpp in SRC.rglob("gap2_*defs.cpp"):
        lines = cpp.read_text(encoding="utf-8", errors="replace").splitlines()
        last_addr = None
        for ln in lines:
            ma = ADDR_RE.search(ln)
            if ma and ln.strip().startswith("//"):
                last_addr = ma.group(1)
            for dm in DEF_RE.finditer(ln):
                cls, meth = dm.group(1), dm.group(2)
                # skip namespace tokens used as 'class' (e.g. gamemd::Foo global)
                if last_addr:
                    cm_to_addr.setdefault(f"{cls}::{meth}", last_addr)
                    method_to_addrs.setdefault(meth, set()).add(last_addr)
    return cm_to_addr, method_to_addrs


def line_addr(file_path, lineno):
    try:
        lines = Path(file_path).read_text(encoding="utf-8", errors="replace").splitlines()
    except Exception:
        return None
    for i in range(max(0, lineno - 2), min(len(lines), lineno + 1)):
        ma = ADDR_RE.search(lines[i])
        if ma:
            return ma.group(1)
    return None


def main():
    cm_to_addr, method_to_addrs = build_addr_maps()
    err_re = re.compile(r"^(.*?)\((\d+)(?:,\d+)?\)\s*:\s*(?:fatal\s+)?error\s+C\d+\s*:?\s*(.*)$")
    skip_addrs = set()
    unresolved_errs = []
    for raw in LOG.read_text(encoding="utf-8", errors="replace").splitlines():
        m = err_re.match(raw.strip())
        if not m:
            continue
        fpath, lineno, msg = m.group(1).strip(), int(m.group(2)), m.group(3)
        a = None
        # (a) PREFER the authoritative qualified-symbol map (Class::Method -> addr).
        for q in QUAL_RE.findall(msg):
            parts = q.split("::")
            if len(parts) >= 2:
                cm = parts[-2] + "::" + parts[-1].lstrip("~")
                if cm in cm_to_addr:
                    a = cm_to_addr[cm]
                    break
        # (b) method-only UNIQUE match
        if a is None:
            for q in QUAL_RE.findall(msg):
                meth = q.split("::")[-1].lstrip("~")
                addrs = method_to_addrs.get(meth)
                if addrs and len(addrs) == 1:
                    a = next(iter(addrs))
                    break
        # (c) last resort: a gap2-block line carrying its own // 0xADDR
        if a is None:
            a = line_addr(fpath, lineno)
        if a:
            skip_addrs.add(a.upper())
        else:
            unresolved_errs.append(raw.strip())

    existing = json.load(open(SKIP, encoding="utf-8")) if SKIP.exists() else {}
    prev = set(x.upper() for x in existing.get("addrs", []))
    merged = sorted(prev | skip_addrs)
    out = dict(existing)
    out["addrs"] = merged
    json.dump(out, open(SKIP, "w", encoding="utf-8"), indent=2)
    print(f"new skip addrs: {sorted(skip_addrs)}")
    print(f"total skip addrs: {len(merged)}")
    if unresolved_errs:
        print(f"UNMAPPED errors ({len(unresolved_errs)}):")
        for e in unresolved_errs[:20]:
            safe = e.encode("ascii", "replace").decode("ascii")
            print("  " + safe)


if __name__ == "__main__":
    main()
