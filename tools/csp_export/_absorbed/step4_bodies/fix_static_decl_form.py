#!/usr/bin/env python3
"""G42.13: ii-bucket static-form decl surgery (agent-3 round-2 recipe).

C2352's ii bucket (~547 errors): decl declared as NON-STATIC member while
the binary truth has NO this (cache first line) and signals CC is not
thiscall -- the function is a static member / free function the corpus
calls as `Cls::Name(...)`.  Making the decl static legalizes those calls
with zero caller rewrites (object-expression `x->StaticFn()` is legal C++).

Gate (all must hold):
  - census C2352 mentions the qualified name
  - unique signal address, call_convention != thiscall
  - cache truth first line: no explicit this param, class prefix matches
  - exactly one decl line in the e4 class hpp (by name, any form)
Surgery: `static RET Name(truth params);  // 0xADDR` (:= truth wholesale).

Usage: [--apply]
"""
import json
import os
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
APPLY = "--apply" in sys.argv
CEN = ROOT / ".omo/tu_errors_g133.json"
CACHE = ROOT / ".omo/ida_cache"
E4C = ROOT / "src/e4/classes"

sig = json.load(open(ROOT / "signals.json", encoding="utf-8", errors='replace'))
name2addrs = {}
addr2sym = {}
for addr, v in sig["symbols"].items():
    name2addrs.setdefault(v["name"], []).append(addr)
    addr2sym[addr] = v

census = json.load(open(CEN, encoding="utf-8", errors='replace'))
Q1, Q2 = chr(0x201C), chr(0x201D)
QT = "[" + Q1 + Q2 + chr(34) + "]"
c2352 = {}
for tu, el in census.items():
    for e in el:
        if "error C2352" not in e:
            continue
        m = re.search(QT + r"(?:gamemd::)?([A-Za-z_]\w*::[A-Za-z_]\w+)" + QT, e)
        if m:
            c2352[m.group(1)] = c2352.get(m.group(1), 0) + 1
print("C2352 qualified names:", len(c2352), " mentions:", sum(c2352.values()))


def cache_line(addr):
    for cand in ("func_0x%08X.json" % int(addr, 16), "func_0x%X.json" % int(addr, 16)):
        p = CACHE / cand
        if p.exists():
            dec = json.load(open(p, encoding="utf-8", errors='replace')).get("decompiled", "")
            return dec.split("\n")[0] if dec else None
    return None


stats = {}
edits = {}
for qname, cnt in sorted(c2352.items(), key=lambda kv: -kv[1]):
    cls, name = qname.rsplit("::", 1)
    if name == cls or name.startswith("~"):
        continue
    addrs = name2addrs.get(qname, [])
    if len(addrs) != 1:
        stats["skip-addr"] = stats.get("skip-addr", 0) + cnt
        continue
    addr = addrs[0]
    cc = addr2sym[addr].get("call_convention")
    if cc == "thiscall":
        stats["skip-thiscall"] = stats.get("skip-thiscall", 0) + cnt
        continue
    t = cache_line(addr)
    if not t or "__usercall" in t or "@<" in t:
        stats["skip-no-cache"] = stats.get("skip-no-cache", 0) + cnt
        continue
    # truth must reference the class and carry no this
    if ("%s::" % cls) not in t or "__thiscall" in t:
        stats["skip-truth-mismatch"] = stats.get("skip-truth-mismatch", 0) + cnt
        continue
    # parse truth params
    pm = re.search(r"\((.*)\)\s*$", t)
    if not pm:
        stats["skip-truth-parse"] = stats.get("skip-truth-parse", 0) + cnt
        continue
    params = pm.group(1).strip()
    if re.search(r"\bthis\s*(,|$)", params):
        stats["skip-truth-has-this"] = stats.get("skip-truth-has-this", 0) + cnt
        continue
    head = t[:pm.start()]
    head = re.sub(r"__stdcall|__cdecl|__fastcall|__pascal", " ", head)
    qi = head.rfind("%s::%s" % (cls, name))
    ret = head[:qi].strip() if qi >= 0 else head.strip()
    for a, b in (("_DWORD", "unsigned int"), ("_QWORD", "unsigned long long"),
                 ("_WORD", "unsigned short"), ("_BYTE", "unsigned char"),
                 ("_BOOL4", "int"), ("__int64", "long long"),
                 ("CHAR", "char"), ("__int16", "short"),
                 ("unsigned __int8", "unsigned char"),
                 ("__int8", "signed char"), ("ULONG", "unsigned long"),
                 ("LONG", "long"), ("VOID", "void"), ("BOOL", "int"),
                 ("UINT", "unsigned int"), ("u_short", "unsigned short"),
                 ("u_char", "unsigned char"), ("u_int", "unsigned int")):
        ret = re.sub(r"\b%s\b" % a, b, ret)
        params = re.sub(r"\b%s\b" % a, b, params)
    # find the decl line
    hp = E4C / ("%s_e4.hpp" % cls)
    if not hp.exists():
        stats["skip-no-hpp"] = stats.get("skip-no-hpp", 0) + cnt
        continue
    with open(hp, "r", encoding="utf-8", errors="replace", newline="") as f:
        lines = f.read().splitlines(keepends=True)
    drx = re.compile(r"^(\s*)(?:virtual\s+|static\s+|inline\s+)*"
                     r"[\w:<>,\s\*&]+?\b%s\s*\([^;{}]*\)\s*;\s*(?://.*)?\r?\n?$"
                     % re.escape(name))
    hits = [i for i, ln in enumerate(lines) if drx.match(ln)]
    if len(hits) != 1:
        stats["skip-decl-hits%d" % len(hits)] = stats.get("skip-decl-hits%d" % len(hits), 0) + cnt
        continue
    i = hits[0]
    lead = re.match(r"\s*", lines[i]).group(0)
    ann = ""
    am = re.search(r"//.*$", lines[i])
    if am:
        ann = "  " + am.group(0).rstrip("\r\n")
    lines[i] = "%sstatic %s %s(%s);%s\n" % (lead, ret or "int", name,
                                            params or "", ann)
    edits[str(hp)] = lines
    stats["done"] = stats.get("done", 0) + cnt
    print(f"  {hp.name}:{i+1} static {ret or 'int'} {name}({params[:50]}...)  [{cnt}]")

print("stats:", sorted(stats.items(), key=lambda kv: -kv[1]))
if APPLY and edits:
    for path, lines in edits.items():
        with open(path, "w", encoding="utf-8", errors='replace', newline="") as f:
            f.write("".join(lines))
    print("written:", len(edits), "files")
elif not APPLY:
    print("(dry run)")
