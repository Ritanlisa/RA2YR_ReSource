#!/usr/bin/env python3
"""G42.2 wave-2: header-leverage pack.

Research basis (g131 agents 3/5/6):
  A. C2365 x813 raw lines = 20 unique hpp sites where the E4 class-header
     generator emitted BOTH a flat-member placeholder (`unsigned int NAME;`)
     AND a method declaration with the same name.  Delete the placeholder
     (method declaration is the truth -- error line anchors it).
  B. Four mangled signature lines (def mirrored the hpp damage):
       AudioQueue StopAllVoices `__thiscall *__fastcall` merge  -> int StopAllVoices(int a2);
         (call-site majority: member-form 1 arg / static-form this+1)
       Voice Stop same merge template                            -> int Stop();
         (def already `int Voice::Stop()`; call sites pass this only)
       WinModemClass ReadBytes `void ()()` fn-type fragment      -> void (*a1)()
       Session RemoveTeam double-named fn-ptr param              -> drop trailing name
     Session truth (ida_cache 0x5D1D80) itself carries the `__thiscall ***`
     fn-ptr type -- kept verbatim per no-invention rule.
  C. Debug truth (0x4068E0 `int Debug::Log()`): strip 7 fake params from decl
     and def (body references none).  ScrollText: rename duplicated param only
     (materialized-this decl; full arity surgery is wave-6 scope).
  D. Event truth (0x48D080): strip 5 fake params from Dispatch decl (verified
     against cache before edit; def handled only if it mirrors).

All edits content-anchored (no fixed line numbers survive earlier deletions);
per-file ops applied bottom-up.  Usage: [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
LOG = ROOT / ".omo/g131_flat_log.txt"
APPLY = "--apply" in sys.argv


def rd(p):
    with open(p, "r", encoding="utf-8", errors="replace", newline="") as f:
        return f.read().splitlines(keepends=True)


def wr(p, lines):
    with open(p, "w", encoding="utf-8", newline="") as f:
        f.write("".join(lines))


ops = {}  # rel path -> list of ("del"|"rep", line_idx, must_match_subst, new_text)


def add(rel, kind, subst, new=None, hint=""):
    p = ROOT / rel
    lines = rd(p)
    hits = [i for i, ln in enumerate(lines) if subst in ln]
    if len(hits) != 1:
        print(f"ABORT {rel}: anchor {subst!r} found {len(hits)} times ({hint})")
        sys.exit(1)
    ops.setdefault(rel, []).append((kind, hits[0], subst, new, hint))
    print(f"{'EDIT' if APPLY else 'DRY '} {rel}:{hits[0]+1} {kind} [{hint}]")


# ---- A. C2365 member placeholders (dynamic extraction from census) ----
LOC = re.compile(r"[\\/](src[\\/][\w\\/\-.]+?)\((\d+)\)[^\n]*?C2365")
NAME = re.compile(r"“gamemd::\w+::(\w+)”[^\n]*?以前的定义是“数据成员”")
sites = {}  # rel -> {(line,name)}
for ln in open(LOG, encoding="utf-8", errors="replace"):
    m = LOC.search(ln)
    n = NAME.search(ln)
    if not (m and n):
        continue
    rel = m.group(1).replace("\\", "/")
    sites.setdefault(rel, set()).add((int(m.group(2)), n.group(1)))
print(f"C2365-A sites: {sum(len(v) for v in sites.values())} in {len(sites)} files")

PLACEHOLDER = r"^\s*(?:unsigned\s+int|int|unsigned\s+char|char|short|long|float|double|bool|void\s*\*)\s+%s\s*;\s*(?://.*)?\r?\n$"
for rel, items in sorted(sites.items()):
    p = ROOT / rel
    lines = rd(p)
    todo = []
    for meth_line, name in sorted(items):
        pat = re.compile(PLACEHOLDER % re.escape(name), re.IGNORECASE)
        cands = [i for i in range(max(0, meth_line - 501), meth_line - 1) if pat.match(lines[i])]
        if not cands:
            print(f"ABORT {rel}: no placeholder for {name} (method @{meth_line})")
            sys.exit(1)
        todo.append((cands[-1], name))
    for idx, name in sorted(todo, reverse=True):
        ops.setdefault(rel, []).append(("del", idx, lines[idx].strip(), None, f"C2365 {name}"))

# ---- B. mangled signature lines ----
add("src/e4/classes/AudioQueue_e4.hpp", "rep", "__thiscall *__fastcall AudioQueue::StopAllVoices",
    "    int StopAllVoices(int a2);\n", "AudioQueue decl")
add("src/e4/AudioQueue_e4.cpp", "rep", "int AudioQueue::StopAllVoices(",
    "int AudioQueue::StopAllVoices(int a2)\n", "AudioQueue def")
add("src/e4/classes/Voice_e4.hpp", "rep", "__thiscall *__thiscall Voice_Stop",
    "    int Stop();\n", "Voice decl")
add("src/e4/classes/WinModemClass_e4.hpp", "rep", "int ReadBytes(void ()() a1",
    "    int ReadBytes(void (*a1)(), WinModemClass * aP1, WinModemClass * aP2);\n", "WinModem decl")
add("src/e4/WinModemClass_e4.cpp", "rep", "int WinModemClass::ReadBytes(void ()() a1",
    "int WinModemClass::ReadBytes(void (*a1)(), WinModemClass * aP1, WinModemClass * aP2)\n", "WinModem def")
add("src/e4/classes/Session_e4.hpp", "rep", "int (__thiscall ***a2)(unsigned int, int) aP1);",
    "    int RemoveTeam(int (__thiscall ***aP1)(unsigned int, int));  // 0x5D1D80\n", "Session decl")
add("src/e4/Session_e4.cpp", "rep", "int (__thiscall ***a2)(unsigned int, int) aP1)",
    "int Session::RemoveTeam(int (__thiscall ***aP1)(unsigned int, int))\n", "Session def")

# ---- C. Debug truth surgery ----
add("src/e4/classes/Debug_e4.hpp", "rep", "char ScrollText(int a2, const char *a2);",
    "    char ScrollText(int a1, const char *a2);  // 0x5BD0D0\n", "ScrollText dup param")
add("src/e4/classes/Debug_e4.hpp", "rep", "int Log(void *a1_1, void *a2_1, void *a3_1, void *a4_1, void *a5_1, void *a6_1, void *a7_1);",
    "    int Log();  // 0x4068E0\n", "Log decl := truth 0-param")
add("src/e4/Debug_e4.cpp", "rep", "int Debug::Log(void *a1_1, void *a2_1, void *a3_1, void *a4_1, void *a5_1, void *a6_1, void *a7_1)",
    "int Debug::Log()\n", "Log def := truth 0-param")

# ---- D. Event truth surgery (verify cache first) ----
cache = ROOT / ".omo/ida_cache/func_0x0048D080.json"
import json
truth = json.loads(cache.read_text(encoding="utf-8")).get("decompiled", "").split("\n")[0]
assert "Dispatch" in truth and "(" in truth, truth
n_params = 0 if re.search(r"Dispatch\(\)", truth) else len(re.findall(r",(?![^()]*\))", truth.split("(", 1)[1].split(")", 1)[0]))
print(f"Event::Dispatch cache truth: {truth!r} -> params={n_params}")
if n_params == 0:
    add("src/e4/classes/Event_e4.hpp", "rep",
        "int Dispatch(void *a1_1, void *a2_1, void *a3_1, void *a4_1, void *a5_1);  // 0x48D080",
        "    int Dispatch();  // 0x48D080\n", "Event Dispatch decl := truth 0-param")

if not APPLY:
    print(f"\ndry-run: {sum(len(v) for v in ops.values())} ops in {len(ops)} files. pass --apply")
    sys.exit(0)

# apply per file, bottom-up
for rel, fileops in ops.items():
    p = ROOT / rel
    lines = rd(p)
    seen = set()
    for kind, idx, subst, new, hint in sorted(fileops, key=lambda o: -o[1]):
        if idx in seen:
            continue
        seen.add(idx)
        if kind == "del":
            del lines[idx]
        else:
            assert subst in lines[idx], (rel, idx, subst)
            lines[idx] = new
    wr(p, lines)
print(f"\napplied {sum(len(v) for v in ops.values())} ops in {len(ops)} files")
