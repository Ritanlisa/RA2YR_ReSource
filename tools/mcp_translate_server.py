"""RA2 翻译工作台 MCP 服务器 (ra2-translate)

Domain-specific MCP toolset for the RA2YR ReSource reverse-engineering
workflow. Covers the complete mechanical loop so an agent can do ALL work
through MCP alone:

  find pending  ->  get context (IDA decompile + member map)
  ->  replace body (in-place translation)  ->  compile / build errors
  ->  member-access audit  ->  exec-flow verify  ->  mark completed

plus four-way batch rename, IDA address annotation maintenance
(functions & globals <-> // 0xADDR, one-to-one), and an issue tracker.

Self-contained minimal MCP stdio server (JSON-RPC 2.0, newline-delimited):
the official mcp 2.0 SDK's dual-era dispatch rejected classic tools/call
envelopes, so the stable public protocol shape is implemented directly.

Run:  python tools/mcp_translate_server.py
"""
import json
import os
import pathlib
import re
import subprocess
import time
import sys
import urllib.request

PROJECT_ROOT = pathlib.Path(__file__).resolve().parent.parent
SRC = PROJECT_ROOT / "src"
SNAPSHOT = PROJECT_ROOT / "decompile-results" / "full_export"
SIGNALS = PROJECT_ROOT / "signals.json"
MEMBER_LOOKUP = PROJECT_ROOT / "tools" / "member_lookup.json"
STATE_FILE = PROJECT_ROOT / ".omo" / "mcp_translate_state.json"
BUILD_LOG = PROJECT_ROOT / ".omo" / "mcp_build.log"

INSIDE_MARKER = "// [IDA decompile] original pseudocode - translation pending (final goal)"
IDA_MCP_URL = "http://127.0.0.1:13337/mcp"
MSBUILD = (r"C:/Program Files (x86)/Microsoft Visual Studio/2022/BuildTools"
           r"/MSBuild/Current/Bin/amd64/MSBuild.exe")
VCVARS = (r"C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools"
          r"\VC\Auxiliary\Build\vcvars32.bat")

KNOWN_BAD_MEMBER_ZONES = {
    # BuildingTypeClass 3700-3950 zone was realigned to the IDA til layout on
    # 2026-09-08 (name-anchored re-placement, verified 0 residual mismatches);
    # no warning needed anymore. Keep the table for future bad zones.
}
# x86 assembly mnemonics that begin operand lines inside gap2 asm dumps
_ASM_MNEMONICS = {
    "push", "pop", "mov", "lea", "call", "add", "sub", "cmp", "test", "jz",
    "jnz", "je", "jne", "jmp", "jl", "jg", "jle", "jge", "ret", "retn",
    "xor", "and", "or", "not", "neg", "inc", "dec", "imul", "idiv", "mul",
    "div", "shl", "shr", "sar", "movsx", "movzx", "cdq", "fld", "fstp",
    "fild", "fistp", "fcompp", "fnstsw", "sete", "setne", "setg", "setl",
    "setge", "setle", "cmov", "nop", "int", "leave", "enter", "lock",
    "rep", "stosd", "stosb", "lodsd", "movsd", "movsb",
}
CORE_CLASSES = ["ObjectClass", "TechnoClass", "FootClass", "BuildingClass",
                "UnitClass", "InfantryClass", "AircraftClass"]

DEF_HEAD = re.compile(r'^\s*[\w:<>\*&\[\]]+(?:\s+[\w:<>\*&\[\]]+)*\s+([\w:~]+)::([\w~]+)\s*\(')
ADDR_COMMENT = re.compile(r'^//\s*0x([0-9A-Fa-f]{6,8})\s*$')
ADDR_IN_COMMENT = re.compile(r'0x([0-9A-Fa-f]{6,8})')

_pending_index = None
_pending_index_stamp = None
_snapshot_index = None
_signals = None
_signals_mtime = None
_member_lookup = None
_member_lookup_mtime = None
_annot_cache = {"fn": None, "glob": None}


def _read_latin1(path):
    return pathlib.Path(path).read_bytes().decode("latin-1")


# ============================================================================
# pending-function index
# ============================================================================
def invalidate_pending_index():
    """Force rebuild on next access (reopen/external writes)."""
    global _pending_index, _pending_index_stamp
    _pending_index = None
    _pending_index_stamp = None


def build_pending_index():
    global _pending_index, _pending_index_stamp
    stamp = max((p.stat().st_mtime, str(p)) for p in SRC.rglob("*.cpp"))[0]
    sig_m = PROJECT_ROOT / "signals.json"
    stamp = (stamp, sig_m.stat().st_mtime)
    if _pending_index is not None and stamp == _pending_index_stamp:
        return _pending_index
    entries = []
    for p in sorted(SRC.rglob("*.cpp")):
        rel = str(p.relative_to(PROJECT_ROOT)).replace("\\", "/")
        try:
            lines = _read_latin1(p).split("\n")
        except OSError:
            continue
        for i, ln in enumerate(lines):
            if ln.rstrip("\r") != INSIDE_MARKER:
                continue
            info = _enclosing_function(lines, i, rel)
            if info:
                info["marker_line"] = i + 1
                info["pseudocode_lines"] = _pseudocode_span(lines, i)
                entries.append(info)
    _pending_index = entries
    _pending_index_stamp = stamp
    return entries


def _enclosing_function(lines, marker_idx, rel):
    i = marker_idx - 1
    while i >= 0 and (lines[i].strip() == "" or lines[i].strip().startswith("//")):
        i -= 1
    if i < 0:
        return None
    s = lines[i].strip()
    if not s.endswith("{"):
        return None
    if s == "{":
        # e4/gap2 two-line shape: the real signature sits on the line above.
        # (#148: entry["line"] used to point at the brace-only line, so
        # set_signature rewrote `{` instead of the def.)
        j = i - 1
        while j >= 0 and (lines[j].strip() == ""
                          or lines[j].strip().startswith("//")):
            j -= 1
        if j < 0 or "(" not in lines[j] or "=" in lines[j].split("(")[0]:
            return None
        i = j
        s = lines[i].strip()
    sig = s[:-1].strip() if s.endswith("{") else s
    addr = None
    j = i - 1
    while j >= 0 and j > i - 12:
        m = ADDR_COMMENT.match(lines[j].strip())
        if m:
            addr = "0x" + m.group(1).lower()
            break
        j -= 1
    display = sig
    mns = re.match(r'^namespace\s+\w+\s*\{\s*(.*)$', sig)
    if mns:
        display = mns.group(1)
    m = DEF_HEAD.match(sig)
    qual = (m.group(1) + "::" + m.group(2)) if m else display.split("(")[0].strip()
    cls = m.group(1) if m else ""
    return {"target": f"{rel}:{i + 1}", "file": rel, "line": i + 1,
            "function": qual, "class": cls, "signature": display[:200],
            "address": addr}


def _pseudocode_span(lines, marker_idx):
    depth = 0
    started = False
    for k in range(marker_idx + 1, min(len(lines), marker_idx + 5000)):
        if "{" in lines[k]:
            started = True
        if started:
            depth += lines[k].count("{") - lines[k].count("}")
            if depth <= 0:
                return k - marker_idx + 1
    return 0


# ============================================================================
# data sources
# ============================================================================
def snapshot_index():
    global _snapshot_index
    if _snapshot_index is None:
        idx = SNAPSHOT / "index.json"
        _snapshot_index = json.load(open(idx, encoding="utf-8")) if idx.exists() else {}
    return _snapshot_index


def signals():
    global _signals, _signals_mtime
    try:
        mtime = SIGNALS.stat().st_mtime
    except OSError:
        mtime = None
    if _signals is None or mtime != _signals_mtime:
        try:
            _signals = json.load(open(SIGNALS, encoding="utf-8"))
        except json.JSONDecodeError:
            # torn read: another writer is mid-replace — brief retry
            time.sleep(0.25)
            _signals = json.load(open(SIGNALS, encoding="utf-8"))
        _signals_mtime = mtime
    return _signals


def write_signals_atomic(sigj):
    """Atomic signals.json write (tmp + os.replace): a concurrent reader must
    never observe a half-written document (torn-read 'Extra data' race)."""
    tmp = SIGNALS.with_suffix(".json.tmp")
    tmp.write_text(json.dumps(sigj, ensure_ascii=False, indent=2),
                   encoding="utf-8")
    os.replace(str(tmp), str(SIGNALS))


def member_lookup():
    global _member_lookup, _member_lookup_mtime
    try:
        mtime = MEMBER_LOOKUP.stat().st_mtime
    except OSError:
        mtime = None
    if _member_lookup is None or mtime != _member_lookup_mtime:
        _member_lookup = (json.load(open(MEMBER_LOOKUP, encoding="utf-8"))
                          if MEMBER_LOOKUP.exists() else {})
        _member_lookup_mtime = mtime
    return _member_lookup


def resolve_target(target):
    pending = build_pending_index()
    if target.lower().startswith("0x"):
        t = target.lower()
        ti = int(t, 16)
        for e in pending:
            ea = (e.get("address") or "").lower()
            if ea == t or (ea.startswith("0x") and
                           int(ea, 16) == ti):
                return e
        ent = signals()["symbols"].get(t)
        if ent is None:
            # int-normalized fallback: signals keys are 0x%08X, callers send
            # 0x%X (or vice versa)
            try:
                ai = int(t, 16)
            except ValueError:
                ai = None
            if ai is not None:
                for k in ("0x%X" % ai, "0x%08X" % ai, "0x0%07X" % ai):
                    ent = signals()["symbols"].get(k)
                    if ent is not None:
                        break
        if ent:
            return {"target": t, "address": t, "function": ent.get("name", t),
                    "class": ent.get("name", "").split("::")[0],
                    "file": None, "line": None}
        return None
    if ":" in target and "::" not in target:
        for e in pending:
            if e["target"] == target:
                return e
        # non-pending (already translated) file:line -> synthesize entry
        file_part, _, line_part = target.rpartition(":")
        if line_part.isdigit() and (PROJECT_ROOT / file_part).exists():
            lines = _read_latin1(PROJECT_ROOT / file_part).split("\n")
            i = int(line_part) - 1
            if 0 <= i < len(lines):
                m = DEF_HEAD.match(lines[i])
                if m:
                    qual = m.group(1) + "::" + m.group(2)
                    return {"target": target, "file": file_part,
                            "line": i + 1, "function": qual,
                            "class": m.group(1),
                            "address": _fn_addr_index().get(qual)}
        return None
    for e in pending:
        if e["function"] == target:
            return e
    for k, v in signals()["symbols"].items():
        if isinstance(v, dict) and v.get("name") == target:
            return {"target": k, "address": k, "function": target,
                    "class": target.split("::")[0], "file": None, "line": None}
    return None


def snapshot_hexrays(addr_int):
    idx = snapshot_index()
    ent = idx.get(f"{addr_int:08X}")
    if not ent:
        return None
    f = SNAPSHOT / ent["file"]
    if not f.exists():
        return None
    lines = f.read_text(encoding="utf-8", errors="replace").split("\n")
    hdr = f"addr=0x{addr_int:08X}"
    for i, ln in enumerate(lines):
        if hdr in ln:
            j = i
            while j < len(lines) and "---- Hex-Rays ----" not in lines[j]:
                if j > i and lines[j].startswith("// addr=0x"):
                    return None
                j += 1
            if j >= len(lines):
                return None
            out = []
            k = j + 1
            while k < len(lines) and not lines[k].startswith("// ====="):
                out.append(lines[k])
                k += 1
            while out and not out[-1].strip():
                out.pop()
            return "\n".join(out)
    return None


def ida_til_members(class_name, lo, hi, timeout=8):
    try:
        code = ("import idaapi\n"
                "tif = idaapi.tinfo_t()\n"
                f"ok = tif.get_named_type(None, {class_name!r})\n"
                "udt = idaapi.udt_type_data_t()\n"
                "res = []\n"
                "if ok and tif.get_udt_details(udt):\n"
                "    for m in udt:\n"
                "        b = m.offset // 8\n"
                f"        if {lo} <= b <= {hi}:\n"
                "            res.append('%d %s' % (b, m.name))\n"
                "print(chr(10).join(res))\n")
        payload = json.dumps({"jsonrpc": "2.0", "method": "tools/call",
                              "params": {"name": "py_eval",
                                         "arguments": {"code": code}}, "id": 1})
        req = urllib.request.Request(IDA_MCP_URL, data=payload.encode(),
                                     headers={"Content-Type": "application/json",
                                              "Accept": "application/json"})
        resp = urllib.request.urlopen(req, timeout=timeout)
        data = json.loads(resp.read())
        content = data.get("result", {}).get("content", [])
        if content:
            obj = json.loads(content[0].get("text", "{}"))
            out = (obj.get("stdout") or "").strip()
            if out:
                rows = []
                for ln in out.split("\n"):
                    if ln.strip():
                        off, _, name = ln.partition(" ")
                        if off.isdigit():
                            rows.append((int(off), name.strip()))
                return rows
    except Exception:
        pass
    return None


def pseudocode_offsets(code):
    offs = set()
    # detect this-type scaling from the prototype line
    scale = 4  # default _DWORD
    m0 = re.search(r'\((\w+)\s*\*\s*this\b', code)
    if m0:
        w = m0.group(1)
        scale = {'_BYTE': 1, 'unsigned __int8': 1, 'char': 1,
                 '_WORD': 2, 'unsigned __int16': 2, 'short': 2,
                 '_DWORD': 4, 'int': 4, 'unsigned int': 4,
                 '_QWORD': 8, 'unsigned __int64': 8}.get(w, 4)
    for m in re.finditer(r'\(\s*\w+\s*\*\s*\*\s*\)\s*\(\s*\*?\w+\s*\+\s*(\d+)', code):
        offs.add(int(m.group(1)))
    for m in re.finditer(r'\[\s*\w+\s*\+\s*(\d{3,5})\s*\]', code):
        offs.add(int(m.group(1)))
    for m in re.finditer(r'\*\(\s*_BYTE\s*\*\)\s*\w+\s*\+\s*(\d+)', code):
        offs.add(int(m.group(1)))
    for m in re.finditer(r'\bthis\s*\+\s*(\d+)\b', code):
        offs.add(int(m.group(1)) * scale)
    return sorted(offs)


# ============================================================================
# build / compile / verify / audit
# ============================================================================
# MSVC 诊断行：列号可选（cl 新版只报行号）；fatal error C1003 同样计入；
# 扩展名含 hpp/h —— 单文件编译的头文件错误是编译债主体（W1.1 #117）
ERROR_RE = re.compile(r'^[^\s]*?([A-Za-z0-9_/\\.]+\.(?:cpp|hpp|h))\((\d+)(?:,(\d+))?\): (?:fatal )?error (C\d+): (.*?)(?: \[D:|$)')


def parse_build_log(log):
    by_file = {}
    total = 0
    for ln in log.split("\n"):
        m = ERROR_RE.match(ln.strip())
        if not m:
            continue
        f = m.group(1).replace("\\", "/")
        by_file.setdefault(f, []).append({"line": int(m.group(2)),
                                          "code": m.group(4),
                                          "message": m.group(5)[:200]})
        total += 1
    return {"error_count": total,
            "by_file": {k: {"count": len(v), "errors": v[:10]}
                        for k, v in sorted(by_file.items(), key=lambda x: -len(x[1]))},
            "log": str(BUILD_LOG.relative_to(PROJECT_ROOT))}


def run_full_build():
    cmd = [MSBUILD, str(PROJECT_ROOT / "build_win" / "gamemd.vcxproj"),
           "-p:Configuration=Debug", "-p:Platform=Win32",
           "-p:BuildProjectReferences=false", "-m:8"]
    proc = subprocess.run(cmd, capture_output=True, text=True,
                          encoding="utf-8", errors="replace", timeout=900,
                          cwd=str(PROJECT_ROOT))
    log = (proc.stdout or "") + (proc.stderr or "")
    BUILD_LOG.parent.mkdir(exist_ok=True)
    BUILD_LOG.write_text(log, encoding="utf-8", errors="replace")
    return parse_build_log(log) | {"exit": proc.returncode}


def compile_single_file(cpp_rel):
    src_file = PROJECT_ROOT / cpp_rel
    bat = PROJECT_ROOT / ".omo" / "_mcp_cl.bat"
    bat.parent.mkdir(exist_ok=True)
    obj = PROJECT_ROOT / ".omo" / "_mcp_tmp.obj"
    bat.write_text("@echo off\r\n"
                   f'call "{VCVARS}" >nul 2>&1\r\n'
                   f"cl /c /I{PROJECT_ROOT}\\src /I{PROJECT_ROOT}\\app /nologo /W3 /std:c++20 "
                   "/DWIN32 /DWIN32_LEAN_AND_MEAN /DNOMINMAX /D_MBCS /TP "
                   f'/Fo"{obj}" "{src_file}"\r\n', encoding="latin-1")
    proc = subprocess.run(["cmd", "/c", str(bat)], capture_output=True, text=True,
                          encoding="utf-8", errors="replace", timeout=300,
                          cwd=str(PROJECT_ROOT))
    log = (proc.stdout or "") + (proc.stderr or "")
    BUILD_LOG.write_text(log, encoding="utf-8", errors="replace")
    errs = []
    for ln in log.split("\n"):
        m = ERROR_RE.match(ln.strip())
        if m:
            errs.append({"file": m.group(1).replace("\\", "/"),
                         "line": int(m.group(2)), "code": m.group(4),
                         "message": m.group(5)[:200]})
    return {"exit": proc.returncode, "errors": errs, "error_count": len(errs),
            "log": str(BUILD_LOG.relative_to(PROJECT_ROOT))}


def run_verify(addr, verbose=False):
    cmd = [sys.executable, "tools/verify_execution_flow.py", addr]
    if verbose:
        cmd.append("--verbose")
    proc = subprocess.run(cmd, capture_output=True, text=True,
                          encoding="utf-8", errors="replace",
                          timeout=900, cwd=str(PROJECT_ROOT))
    out = (proc.stdout or "") + (proc.stderr or "")
    reason = ""
    for ln in out.split("\n"):
        s = ln.strip()
        if s.startswith(("FAIL:", "missing:", "SKIP", "GUARD")):
            reason += s + " | "
    if proc.returncode == 0:
        try:
            sp = PROJECT_ROOT / "signals.json"
            sigj = json.loads(sp.read_text(encoding="utf-8"))
            a = int(str(addr), 16)
            for k in ("0x%X" % a, "0x%08X" % a):
                sym = sigj["symbols"].get(k)
                if sym and sym.get("reopened_from"):
                    sym["reopened_from"] = None
                    sym["verified_after_reopen"] = True
            write_signals_atomic(sigj)
        except Exception:
            pass
    result = {"verdict": "PASS" if proc.returncode == 0 else "FAIL",
              "detail": reason[:500], "exit": proc.returncode,
              "output_tail": "\n".join(out.split("\n")[-12:])}
    if verbose:
        result["blocks"] = _parse_verify_verbose(out)
    return result


def _parse_verify_verbose(out):
    """Parse `--verbose` output into a block-level diff: the IDA and C++ CFG
    dumps (`--- <label> CFG: ...` / `blk ... -> succ : events`) plus the
    STEP3(0) missing-event list, so shape-mismatch diagnosis stays inside the
    MCP loop instead of a separate Bash run."""
    blocks = {"ida": [], "cpp": [], "step3_missing": [], "header": []}
    side = None
    for ln in out.split("\n"):
        s = ln.rstrip()
        if "--- IDA CFG:" in s:
            side = "ida"
            blocks["header"].append(s.strip())
            continue
        if "--- C++ CFG:" in s:
            side = "cpp"
            blocks["header"].append(s.strip())
            continue
        if s.strip().startswith("missing:"):
            blocks["step3_missing"].append(s.strip()[len("missing:"):].strip())
            continue
        if side and s.strip().startswith("blk "):
            blocks[side].append(s.strip())
        elif side and s.strip() and not s.startswith("  ---"):
            if s.strip().startswith(("STEP3", "C++ source", "this type",
                                     "GUARD", "REJECT", "WARNING")):
                blocks["header"].append(s.strip())
    # cap the dumps: a huge CFG is unreadable in one MCP response anyway
    blocks["ida"] = blocks["ida"][:200]
    blocks["cpp"] = blocks["cpp"][:200]
    return blocks


def run_gates():
    proc = subprocess.run([sys.executable, "tools/run_all_gates.py"],
                          capture_output=True, text=True, encoding="utf-8",
                          errors="replace", timeout=900, cwd=str(PROJECT_ROOT))
    out = (proc.stdout or "") + (proc.stderr or "")
    fails = [ln.strip() for ln in out.split("\n") if "FAIL" in ln]
    return {"verdict": "PASS" if proc.returncode == 0 else "FAIL",
            "fail_lines": fails[:40], "exit": proc.returncode}


AUDIT_PATTERNS = [
    (r'\(\s*_BYTE\s*\*\s*\)\s*\w+\s*\+', '(_BYTE*)ptr +'),
    (r'\(\s*(?:uint8_t|int|char|short|long|_DWORD|_WORD)\s*\*\s*\)\s*\w+\s*\+', 'cast ptr + int'),
    (r'\(\(\w+\s*\*\)\s*\w+\)\s*\[\s*\d+\s*\]', '((T*)ptr)[N]'),
    (r'\bMEMORY\[', 'MEMORY[]'),
]


def audit_access(rel_path=None):
    results = []
    if rel_path:
        files = [PROJECT_ROOT / rel_path]
    else:
        files = [p for p in sorted(SRC.rglob("*.cpp"))
                 if not any(x in str(p) for x in ("_generated", "_gap2",
                                                  "gap2_defs", "subs"))]
    for p in files:
        if not p.exists():
            continue
        rel = str(p.relative_to(PROJECT_ROOT)).replace("\\", "/")
        lines = _read_latin1(p).split("\n")
        i = 0
        while i < len(lines):
            if lines[i].rstrip("\r") == INSIDE_MARKER:
                depth = 0
                started = False
                k = i + 1
                while k < len(lines):
                    if "{" in lines[k]:
                        started = True
                    if started:
                        depth += lines[k].count("{") - lines[k].count("}")
                        if depth <= 0:
                            break
                    k += 1
                i = k + 1
                continue
            for pat, label in AUDIT_PATTERNS:
                if re.search(pat, lines[i].split("//")[0]):
                    results.append(f"{rel}:{i + 1} [{label}] {lines[i].strip()[:80]}")
            i += 1
    return {"violations": len(results), "findings": results[:60]}


# ============================================================================
# annotation maintenance (functions & globals <-> IDA addresses)
# ============================================================================
def _fn_addr_index():
    if _annot_cache["fn"] is None:
        idx = {}
        for k, v in signals()["symbols"].items():
            if not isinstance(v, dict) or v.get("kind") != "function":
                continue
            name = v.get("name")
            if not name:
                continue
            idx.setdefault(name, k.lower())
            if "::" in name:
                idx.setdefault(name.replace("::", "_"), k.lower())
        _annot_cache["fn"] = idx
    return _annot_cache["fn"]


def _glob_addr_index():
    if _annot_cache["glob"] is None:
        idx = {}
        for name, addr in (signals().get("globals") or {}).items():
            if isinstance(addr, str):
                idx[name] = addr.lower()
        _annot_cache["glob"] = idx
    return _annot_cache["glob"]


NS_LINE_RE = re.compile(r"^\s*namespace\s+\w+\s*\{\s*//.*$|^\s*namespace\s+\w+\s*\{\s*$")


def _find_annotation(lines, def_idx):
    j = def_idx - 1
    steps = 0
    while j >= 0 and steps < 12:
        s = lines[j].strip()
        if s.startswith("//"):
            m = ADDR_IN_COMMENT.search(s)
            if m:
                return "0x" + m.group(1).lower(), j
        elif s != "" and not NS_LINE_RE.match(lines[j]):
            break
        j -= 1
        steps += 1
    return None, None


def audit_annotations(file_filter=None, limit=80):
    fn_idx = _fn_addr_index()
    missing, mismatched, unknown, matched = [], [], [], 0
    for p in sorted(SRC.rglob("*.cpp")):
        rel = str(p.relative_to(PROJECT_ROOT)).replace("\\", "/")
        if (file_filter and file_filter not in rel) or "_generated" in rel:
            continue
        lines = _read_latin1(p).split("\n")
        in_pseudo = False
        pseudo_depth = 0
        pseudo_seen_brace = False
        for i, ln in enumerate(lines):
            if "[IDA decompile]" in ln:
                in_pseudo = True
                pseudo_depth = 0
                pseudo_seen_brace = False
                continue
            if in_pseudo:
                pseudo_depth += ln.count("{") - ln.count("}")
                if "{" in ln:
                    pseudo_seen_brace = True
                if pseudo_depth > 0 or not pseudo_seen_brace:
                    continue
                in_pseudo = False  # closing brace consumed the block
                continue
            m = DEF_HEAD.match(ln)
            if not m or ln.rstrip().endswith(";"):
                continue
            qual = m.group(1) + "::" + m.group(2)
            expected = fn_idx.get(qual) or fn_idx.get(qual.replace("::", "_"))
            found, _ = _find_annotation(lines, i)
            rec = {"file": rel, "line": i + 1, "function": qual,
                   "expected": expected, "found": found}
            if found is None:
                (missing if expected else unknown).append(rec)
            elif expected and found != expected:
                mismatched.append(rec)
            else:
                matched += 1
    return {"matched": matched, "missing_with_known_addr": len(missing),
            "addr_mismatch": len(mismatched),
            "unknown_in_signals": len(unknown),
            "missing_sample": missing[:limit],
            "mismatch_sample": mismatched[:limit]}


def fix_annotations(file_filter=None, dry_run=True, limit=2000):
    fn_idx = _fn_addr_index()
    fixed = []
    for p in sorted(SRC.rglob("*.cpp")):
        rel = str(p.relative_to(PROJECT_ROOT)).replace("\\", "/")
        if (file_filter and file_filter not in rel) or "_generated" in rel:
            continue
        lines = _read_latin1(p).split("\n")
        inserts = []
        in_pseudo = False
        pseudo_depth = 0
        pseudo_seen_brace = False
        for i, ln in enumerate(lines):
            if "[IDA decompile]" in ln:
                in_pseudo = True
                pseudo_depth = 0
                pseudo_seen_brace = False
                continue
            if in_pseudo:
                pseudo_depth += ln.count("{") - ln.count("}")
                if "{" in ln:
                    pseudo_seen_brace = True
                if pseudo_depth > 0 or not pseudo_seen_brace:
                    continue
                in_pseudo = False  # closing brace consumed the block
                continue
            m = DEF_HEAD.match(ln)
            if not m or ln.rstrip().endswith(";"):
                continue
            qual = m.group(1) + "::" + m.group(2)
            expected = fn_idx.get(qual) or fn_idx.get(qual.replace("::", "_"))
            if not expected:
                continue
            found, _ = _find_annotation(lines, i)
            if found is None:
                inserts.append((i, expected, qual))
        if not inserts:
            continue
        if not dry_run:
            for i, addr, qual in sorted(inserts, reverse=True)[:limit]:
                lines.insert(i, "// " + addr)
            p.write_bytes("\n".join(lines).encode("latin-1"))
        fixed.extend({"file": rel, "line": i + 1, "function": qual, "addr": addr}
                     for i, addr, qual in inserts[:limit])
    return {"dry_run": dry_run, "annotations_added": len(fixed),
            "details": fixed[:60]}


def audit_global_annotations(file_filter=None, limit=60):
    gidx = _glob_addr_index()
    missing, matched = [], 0
    annotated_names = set()
    # Pass 1: collect names that ALREADY have an annotated declaration
    # anywhere. A name hit in pass 2 that is already annotated elsewhere is a
    # local declaration or re-use shadowing the global (G8 fleet bodies keep
    # IDA pseudocode locals like `CHAR Buffer[1024];`) — it carries no
    # annotation duty, and a duplicate real definition would be a link error.
    for p in sorted(SRC.rglob("*.cpp")) + sorted(SRC.rglob("*.hpp")):
        rel = str(p.relative_to(PROJECT_ROOT)).replace("\\", "/")
        if (file_filter and file_filter not in rel) or "_generated" in rel:
            continue
        for ln in _read_latin1(p).split("\n"):
            code = ln.partition("//")[0]
            m = re.match(r'^\s*(?:extern\s+|static\s+)?[\w:<>\*&\s]+\b'
                         r'([A-Z]\w{3,}|g_\w+)\s*(?:=|;|\[)', code)
            if m and ADDR_IN_COMMENT.search(ln.partition("//")[2]):
                annotated_names.add(m.group(1))
    for p in sorted(SRC.rglob("*.cpp")) + sorted(SRC.rglob("*.hpp")):
        rel = str(p.relative_to(PROJECT_ROOT)).replace("\\", "/")
        if (file_filter and file_filter not in rel) or "_generated" in rel:
            continue
        lines = _read_latin1(p).split("\n")
        # Skip raw IDA pseudocode blocks: identifiers inside them (Destination,
        # Source, Buffer, ...) are decompiler artifacts that merely collide with
        # real globals of the same name — they carry no annotation duty.
        in_pseudo = False
        pseudo_depth = 0
        pseudo_seen_brace = False
        for i, ln in enumerate(lines):
            if "[IDA decompile]" in ln:
                in_pseudo = True
                pseudo_depth = 0
                pseudo_seen_brace = False
                continue
            if in_pseudo:
                pseudo_depth += ln.count("{") - ln.count("}")
                if "{" in ln:
                    pseudo_seen_brace = True
                if pseudo_depth > 0 or not pseudo_seen_brace:
                    continue
                in_pseudo = False  # closing brace consumed the block
                continue
            code, _, comment = ln.partition("//")
            # Skip inline-assembly text lines (gap2 dumps): their operands
            # (push offset Delimiter, mov eax, String) are labels, not decls.
            first = code.strip().split(None, 1)[0] if code.strip() else ""
            if first.lower() in _ASM_MNEMONICS or " offset " in code or "ds:" in code:
                continue
            m = re.match(r'^\s*(?:extern\s+|static\s+)?[\w:<>\*&\s]+\b'
                         r'([A-Z]\w{3,}|g_\w+)\s*(?:=|;|\[)', code)
            if not m:
                continue
            name = m.group(1)
            # usage lines, not declarations: `return g_X;`, `g_X = 0;`,
            # `Buffer[0] = *Drive;`, `T* p = g_X;` — the declaration always
            # has the name as the DECLARED token, never RHS of an assignment.
            if first in ("return", "return;") or code.strip() == "" or \
                    code.strip().lstrip("*&").startswith(name) or \
                    "=" in code[:m.start(1)]:
                continue
            expected = gidx.get(name)
            if not expected:
                continue
            if ADDR_IN_COMMENT.search(comment):
                matched += 1
                continue
            if name in annotated_names:
                continue  # annotated elsewhere: this hit is a local/shadow
            missing.append({"file": rel, "line": i + 1, "global": name,
                            "expected": expected})
    return {"annotated": matched, "missing": len(missing),
            "missing_sample": missing[:limit]}


def annotate_function(target, addr=None):
    entry = resolve_target(target)
    if entry is None or not entry.get("file"):
        return {"ok": False, "error": "target not resolvable to a file function"}
    if addr is None:
        addr = entry.get("address") or _fn_addr_index().get(entry["function"])
    if addr is None:
        return {"ok": False, "error": "no addr given and none found in signals"}
    addr = addr.lower()
    p = PROJECT_ROOT / entry["file"]
    lines = _read_latin1(p).split("\n")
    i = entry["line"] - 1
    found, cidx = _find_annotation(lines, i)
    if found == addr:
        return {"ok": True, "already": addr}
    if cidx is not None and found is not None:
        lines[cidx] = re.sub(r'0x[0-9A-Fa-f]{6,8}', addr, lines[cidx])
        action = f"updated {found} -> {addr}"
    else:
        lines.insert(i, "// " + addr)
        action = f"inserted {addr}"
    p.write_bytes("\n".join(lines).encode("latin-1"))
    global _pending_index
    _pending_index = None
    return {"ok": True, "action": action, "function": entry["function"]}


# ============================================================================
# body replacement
# ============================================================================
def replace_pseudocode(entry, new_body, dry_run):
    p = PROJECT_ROOT / entry["file"]
    lines = _read_latin1(p).split("\n")
    marker_idx = None
    for i in range(entry["line"] - 1, min(entry["line"] + 40, len(lines))):
        if lines[i].rstrip("\r") == INSIDE_MARKER:
            marker_idx = i
            break
    if marker_idx is None:
        return {"ok": False, "error": "marker not found near function"}
    # guard (#146): the block's own annotation must name the entry's address —
    # a stale index must never steer a body write into a neighbouring function
    want = entry.get("address")
    if want:
        ann = _marker_annotation(lines, marker_idx)
        try:
            want_i = int(want, 16)
        except (TypeError, ValueError):
            want_i = None
        if ann is not None and want_i is not None and ann != want_i:
            return {"ok": False,
                    "error": "annotation mismatch: block at // 0x%X but "
                             "target is %s (stale index? re-resolve)"
                             % (ann, want)}
    depth = 0
    started = False
    end = marker_idx
    for k in range(marker_idx + 1, len(lines)):
        if "{" in lines[k]:
            started = True
        if started:
            depth += lines[k].count("{") - lines[k].count("}")
            if depth <= 0:
                end = k
                break
        if k > marker_idx + 5000:
            return {"ok": False, "error": "pseudocode span not bounded"}
    # Issue #2 guard: if new_body wrongly starts with a duplicate signature
    # line ("RetType Class::Method(...) {"), auto-strip it (and its matching
    # trailing '}') — the replacement span keeps the outer real signature, so
    # keeping this line would compile into a double signature (C1003 bait).
    gap2_def = None
    if marker_idx > 0:
        prev_line = lines[marker_idx - 1].strip()
        if prev_line.startswith("namespace ") and "{" in prev_line and "(" in prev_line:
            gap2_def = lines[marker_idx - 1]
    stripped_note = None
    fname = (entry.get("function") or "").split("::")[-1]
    nl = new_body.split("\n")
    first = nl[0].strip()
    if (fname and fname in first and "(" in first
            and first.endswith("{") and not first.startswith("//")):
        if nl[-1].strip() == "}":
            nl = nl[1:-1]
        else:
            nl = nl[1:]
        stripped_note = f"auto-stripped duplicated signature line: '{first}'"
        new_body = "\n".join(nl)
    bal = new_body.count("{") - new_body.count("}")
    if bal != 0:
        return {"ok": False, "error": f"new_body brace imbalance {bal:+d}"}
    old_block = "\n".join(lines[marker_idx:end + 1])
    if dry_run:
        return {"ok": True, "dry_run": True,
                "would_replace_lines": [marker_idx + 1, end + 1],
                "stripped_signature": stripped_note,
                "old_preview": old_block[:600], "new_preview": new_body[:600]}
    if gap2_def:
        nb = new_body.strip()
        if nb.startswith('{'):
            nb = nb[1:]
        if nb.endswith('}'):
            nb = nb[:-1]
        new_body = gap2_def + chr(10) + nb + chr(10) + '}'
    lines[marker_idx:end + 1] = new_body.split(chr(10))
    p.write_bytes("\n".join(lines).encode("latin-1"))
    annotation = None
    if entry.get("address"):
        annotation = annotate_function(entry["target"], entry["address"])
    return {"ok": True, "replaced_lines": [marker_idx + 1, end + 1],
            "stripped_signature": stripped_note,
            "old_block_saved_chars": len(old_block),
            "address_annotation": annotation}


# ============================================================================
# issue tracker
# ============================================================================
def load_state():
    if STATE_FILE.exists():
        try:
            return json.loads(STATE_FILE.read_text(encoding="utf-8"))
        except Exception:
            pass
    return {"issues": [], "next_issue_id": 1}


def save_state(st):
    STATE_FILE.parent.mkdir(exist_ok=True)
    STATE_FILE.write_text(json.dumps(st, ensure_ascii=False, indent=1),
                          encoding="utf-8")


# ============================================================================
# tool implementations
# ============================================================================
def tool_list_pending(file_filter=None, class_filter=None, limit=50):
    idx = build_pending_index()
    out = [e for e in idx
           if (not file_filter or file_filter in e["file"])
           and (not class_filter or class_filter in e["class"])]
    return {"total_matching": len(out), "returned": out[:limit],
            "total_pending": len(idx)}


def tool_next_batch(count=10, strategy="core-small-first"):
    idx = build_pending_index()
    if strategy == "core-small-first":
        def key(e):
            core = 0 if any(e["class"].endswith(c) for c in CORE_CLASSES) else 1
            return (core, e["pseudocode_lines"] or 9999)
        pool = sorted(idx, key=key)
    else:
        pool = sorted(idx, key=lambda e: (e["file"], e["line"]))
    return {"batch": pool[:count], "strategy": strategy,
            "total_pending": len(idx)}


# ============================================================================
# context helpers: global-name resolution + canon method index
# ============================================================================
_glob_hpp_index_cache = None
_glob_reverse_cache = None
_canon_methods_cache = None
_canon_methods_stamp = None


def glob_hpp_index():
    """addr(int) -> {"name","file","line"} from `// data: 0xADDR` declarations
    in src/**/*.hpp (the extern-decl homes an agent would otherwise grep for)."""
    global _glob_hpp_index_cache
    if _glob_hpp_index_cache is not None:
        return _glob_hpp_index_cache
    idx = {}
    for p in sorted(SRC.rglob("*.hpp")):
        rel = str(p.relative_to(PROJECT_ROOT)).replace("\\", "/")
        try:
            lines = _read_latin1(p).split("\n")
        except OSError:
            continue
        for i, ln in enumerate(lines):
            m = re.search(r'//\s*data:\s*0x([0-9A-Fa-f]{6,8})', ln)
            if not m:
                continue
            # the decl usually shares the annotation line; a trailing-line
            # annotation takes the previous line instead
            decl = ln.strip()
            md = re.match(r'(?:extern\s+)?[\w:<>\*&\s]+?[\s\*]([A-Za-z_]\w+)'
                          r'\s*(?:=|;|\[)', decl)
            if not md and i:
                decl = lines[i - 1].strip()
                md = re.match(r'(?:extern\s+)?[\w:<>\*&\s]+?[\s\*]([A-Za-z_]\w+)'
                              r'\s*(?:=|;|\[)', decl)
            try:
                a = int(m.group(1), 16)
            except ValueError:
                continue
            idx.setdefault(a, {"name": md.group(1) if md else None,
                               "file": rel, "line": i,
                               "decl": decl[:120]})
    _glob_hpp_index_cache = idx
    return idx


def glob_reverse_index():
    """addr-int -> [global names] (from signals.json globals)."""
    global _glob_reverse_cache
    if _glob_reverse_cache is not None:
        return _glob_reverse_cache
    rev = {}
    for name, addr in (signals().get("globals") or {}).items():
        if isinstance(addr, str) and addr.lower().startswith("0x"):
            try:
                rev.setdefault(int(addr, 16), []).append(name)
            except ValueError:
                continue
    _glob_reverse_cache = rev
    return rev


def canon_method_index():
    """addr(int) -> {"class","decl","line"} for every method declared in
    src/csp_canon/classes.hpp (`// 0xADDR` comment per decl)."""
    global _canon_methods_cache, _canon_methods_stamp
    p = PROJECT_ROOT / "src" / "csp_canon" / "classes.hpp"
    try:
        stamp = p.stat().st_mtime
    except OSError:
        return {}
    if _canon_methods_cache is not None and stamp == _canon_methods_stamp:
        return _canon_methods_cache
    idx = {}
    cur_cls = None
    try:
        text = p.read_text(encoding="utf-8", errors="replace")
    except OSError:
        return {}
    for i, ln in enumerate(text.split("\n")):
        m = re.match(r'^struct (\w+)', ln)
        if m:
            cur_cls = m.group(1)
            continue
        m = re.search(r'//\s*0x([0-9A-Fa-f]{6,8})\b', ln)
        if m and cur_cls and "(" in ln:
            try:
                a = int(m.group(1), 16)
            except ValueError:
                continue
            idx.setdefault(a, {"class": cur_cls, "decl": ln.strip(),
                               "line": i + 1})
    _canon_methods_cache = idx
    _canon_methods_stamp = stamp
    return idx


_GLOBAL_TOKEN_RE = re.compile(
    r'MEMORY\[\s*(0x[0-9A-Fa-f]+)\s*\]'
    r'|\b(?:dword|byte|word|flt|dbl|qword|unk)_([0-9A-Fa-f]{5,8})\b'
    r'|\b(g_[A-Za-z0-9_]+)\b')


def tool_get_context(target):
    entry = resolve_target(target)
    if entry is None:
        return {"ok": False, "error": f"target not found: {target}"}
    result = dict(entry)
    code = None
    if entry.get("address"):
        try:
            code = snapshot_hexrays(int(entry["address"], 16))
        except Exception:
            code = None
    if code is None and entry.get("file"):
        try:
            lines = _read_latin1(PROJECT_ROOT / entry["file"]).split("\n")
            mi = None
            for i in range(entry["line"] - 1,
                           min(entry["line"] + 40, len(lines))):
                if lines[i].rstrip("\r") == INSIDE_MARKER:
                    mi = i
                    break
            if mi is not None:
                code = "\n".join(
                    lines[mi + 1:mi + 1 + (entry.get("pseudocode_lines") or 0)])
        except Exception:
            pass
    result["decompile"] = code[:8000] if code else None
    if entry.get("address"):
        try:
            man = json.loads((PROJECT_ROOT / "anchors"
                              / "csp_canon_manifest.json")
                             .read_text(encoding="utf-8"))
            _a = entry.get("address") or ""
            _ai = int(_a, 16) if _a.startswith("0x") else 0
            man = man.get("0x%08X" % _ai) if _ai else None
            if man:
                result["canon"] = {"sig": man.get("sig"),
                                   "cls": man.get("cls")}
        except Exception:
            pass
    if code:
        cls = entry.get("class") or ""
        # fall back to csp_canon manifest cls (covers e4/gap2 flat names
        # where _enclosing_function can't detect the class)
        if not cls and result.get("canon", {}).get("cls"):
            cls = result["canon"]["cls"]
            entry["class"] = cls
            result["class"] = cls
        offs = pseudocode_offsets(code)
        til = ida_til_members(cls, min(offs), max(offs)) if offs else None
        til_map = dict(til) if til else {}
        ml = member_lookup().get(cls, {})
        warnings = []
        for lo, hi, msg in KNOWN_BAD_MEMBER_ZONES.get(cls, []):
            if any(lo <= o <= hi for o in offs):
                warnings.append(f"member_lookup {cls}+{lo}..{hi}: {msg}")
        canon_tab = {}
        canon_man = {}
        try:
            canon_tab = json.loads((PROJECT_ROOT / "anchors"
                                    / "csp_canon_members.json")
                                   .read_text(encoding="utf-8")).get(
                                       cls or "", {}).get("members", {})
            canon_man = json.loads((PROJECT_ROOT / "anchors"
                                    / "csp_canon_manifest.json")
                                   .read_text(encoding="utf-8")).get(
                                       entry.get("address") or "", {})
        except Exception:
            pass
        mapping = {}
        for o in offs:
            c = canon_tab.get(str(o))
            if c and c.get("name"):
                mapping[o] = {"name": c["name"], "source": "csp-canon",
                              "size": c.get("size")}
            elif o in til_map:
                mapping[o] = {"name": til_map[o], "source": "ida-til"}
            elif str(o) in ml:
                mapping[o] = {"name": ml[str(o)]["name"],
                              "source": "member_lookup"}
            else:
                mapping[o] = {"name": None, "source": None}
        result["member_map"] = mapping
        result["warnings"] = warnings
    if entry.get("address"):
        s = signals()["symbols"].get(entry["address"])
        if s:
            result["signals"] = {k: s.get(k) for k in
                                 ("completed", "done", "translated", "name")}
    # ---- globals referenced by the pseudocode -> names + hpp decl homes ----
    if code:
        rev = glob_reverse_index()
        hpp = glob_hpp_index()
        gidx = _glob_addr_index()
        gmap = {}
        for m in _GLOBAL_TOKEN_RE.finditer(code):
            a = None
            if m.group(1):
                a = int(m.group(1), 16)
            elif m.group(2):
                a = int(m.group(2), 16)
            elif m.group(3):
                ga = gidx.get(m.group(3))
                if ga and ga.startswith("0x"):
                    a = int(ga, 16)
            if a is None:
                continue
            key = "0x%08X" % a
            if key not in gmap:
                gmap[key] = {"names": rev.get(a, []),
                             "decl": hpp.get(a)}
        if gmap:
            result["globals_map"] = gmap
    # ---- receiver guidance (member-form path for free-form pendings) ----
    # primary anchor: the snapshot's til-typed `T *this` (post-cleanup IDA
    # renders typed receivers; the canon manifest cls has ~0 pending coverage).
    # Fires only when member_lookup can resolve names for that class, i.e. the
    # translation can be verified in member form.
    if entry.get("address") and not entry.get("class"):
        rc = None
        til_t = None
        if code:
            mt = re.search(r'\(\s*([A-Za-z_]\w*)\s*\*\s*this\b', code)
            if mt:
                til_t = mt.group(1)
        if til_t and til_t not in ("int", "_DWORD", "_BYTE", "_WORD", "char",
                                   "void", "unsigned __int8", "__int16",
                                   "unsigned __int16", "__int64", "_QWORD",
                                   "float", "double", "BOOL"):
            if til_t in member_lookup():
                rc = til_t
        if rc is None:
            rc = (result.get("canon") or {}).get("cls")
        if rc:
            mi = canon_method_index()
            try:
                ai = int(entry["address"], 16)
            except (TypeError, ValueError):
                ai = None
            mrec = mi.get(ai) if ai is not None else None
            result["receiver"] = {
                "class": (mrec["class"] if mrec else rc),
                "til_this_type": til_t,
                "canon_decl": (mrec or {}).get("decl"),
                "note": ("typed receiver on the IDA side renders this->Name; "
                         "translate in member form '<ret> %s::Name(...)' "
                         "(first param -> implicit this); use set_signature "
                         "to rewrite the def line (auto-includes the carrier)"
                         % (mrec["class"] if mrec else rc))}
    return result


def tool_replace_body(target, new_body, dry_run):
    entry = resolve_target(target)
    if entry is None or not entry.get("file"):
        return {"ok": False,
                "error": f"target not resolvable to pending function: {target}"}
    return replace_pseudocode(entry, new_body, dry_run)


def tool_verify(target, async_mode=False, verbose=False, auto_mark=False,
                note=""):
    entry = resolve_target(target)
    if entry is None:
        return {"ok": False, "error": f"target not found: {target}"}
    if async_mode:
        jid = submit_job("verify", lambda: tool_verify(target, False,
                                                       verbose, auto_mark,
                                                       note))
        return {"ok": True, "job_id": jid, "note": "poll with job_status"}
    addr = entry.get("address")
    if not addr:
        return {"ok": False, "error": "no address; verify needs 0xADDR"}
    result = run_verify(addr, verbose=verbose)
    if result["verdict"] == "PASS" and auto_mark:
        mark = tool_mark_completed(target, note or "auto_mark: verify PASS")
        result["auto_mark"] = mark
    elif result["verdict"] == "FAIL" and auto_mark:
        result["auto_mark"] = {"ok": False,
                               "skipped": "verify FAIL; not marked"}
    return result


def tool_mark_completed(target, note=""):
    entry = resolve_target(target)
    if entry is None or not entry.get("address"):
        return {"ok": False, "error": "target needs an address"}
    sig = signals()
    key = entry["address"].lower()
    e = sig["symbols"].get(key)
    if not e:
        return {"ok": False, "error": f"no signals entry at {key}"}
    if e.get("reopened_from"):
        return {"ok": False,
                "error": ("reopened for retranslation and not verified since; "
                          "run verify_function (PASS) before mark_completed"),
                "reopened_from": e.get("reopened_from")}
    e["completed"] = True
    if note:
        e["note"] = note
    write_signals_atomic(sig)
    global _signals
    _signals = None
    return {"ok": True, "address": key, "name": e.get("name"),
            "completed": True}


def tool_function_state(target):
    entry = resolve_target(target)
    if entry is None:
        return {"ok": False, "error": f"target not found: {target}"}
    out = dict(entry)
    out["pending_translation"] = bool(entry.get("file"))
    if entry.get("address"):
        s = signals()["symbols"].get(entry["address"])
        out["signals"] = s and {k: s.get(k) for k in
                                ("completed", "done", "translated")}
    st = load_state()
    out["issues"] = [i for i in st["issues"]
                     if i.get("target") in (target, entry.get("address"),
                                            entry.get("function"))]
    return out


def tool_rename_symbol(old_name, new_name, dry_run, sync_ida):
    # Keep names as independent argv entries. In particular, `::` is symbol
    # content, never a batch delimiter or shell syntax.
    cmd = [sys.executable, "tools/rename_symbol.py"]
    if dry_run:
        cmd.append("--dry-run")
    if not sync_ida:
        cmd.append("--no-ida")
    cmd += [old_name, new_name]
    proc = subprocess.run(cmd, capture_output=True, text=True,
                          encoding="utf-8", errors="replace", timeout=600,
                          cwd=str(PROJECT_ROOT))
    output = ((proc.stdout or "") + (proc.stderr or ""))
    structured = None
    for line in reversed(output.splitlines()):
        if line.startswith("RENAME_RESULT: "):
            try:
                structured = json.loads(line.split(": ", 1)[1])
            except json.JSONDecodeError:
                structured = None
            break
    result = structured or {"ok": proc.returncode == 0,
                            "exit": proc.returncode}
    result["exit"] = proc.returncode
    result["output"] = output[-3000:]
    result["ok"] = bool(proc.returncode == 0 and result.get("ok", True))
    if proc.returncode != 0:
        result["error"] = "rename_symbol failed"
    return result


def tool_rename_local(target, old_name, new_name, dry_run):
    entry = resolve_target(target)
    if entry is None or not entry.get("file"):
        return {"ok": False, "error": "target not resolvable"}
    p = PROJECT_ROOT / entry["file"]
    lines = _read_latin1(p).split("\n")
    i = entry["line"] - 1
    k = i
    while k < len(lines) and "{" not in lines[k]:
        k += 1
    depth = 0
    started = False
    e = k
    while e < len(lines):
        depth += lines[e].count("{") - lines[e].count("}")
        if "{" in lines[e]:
            started = True
        if started and depth <= 0:
            break
        e += 1
    word = re.compile(r'\b' + re.escape(old_name) + r'\b')
    hits = 0
    new_lines = []
    for idx in range(len(lines)):
        if i <= idx <= e:
            n, h = word.subn(new_name, lines[idx])
            hits += h
            new_lines.append(n)
        else:
            new_lines.append(lines[idx])
    if dry_run:
        return {"ok": True, "dry_run": True, "occurrences": hits}
    if hits:
        p.write_bytes("\n".join(new_lines).encode("latin-1"))
    return {"ok": True, "occurrences": hits,
            "renamed": old_name + " -> " + new_name}


def tool_build(scope="file", file=None, async_mode=False):
    if scope == "file" and not file:
        return {"ok": False, "error": "scope=file requires 'file'"}
    if async_mode:
        jid = submit_job("build", lambda: tool_build(scope, file, False))
        return {"ok": True, "job_id": jid,
                "note": "poll with job_status"}
    if scope == "file":
        return compile_single_file(file)
    return run_full_build()


def tool_get_build_errors(file=None):
    if not BUILD_LOG.exists():
        return {"ok": False, "error": "no build log yet; run build first"}
    data = parse_build_log(
        BUILD_LOG.read_text(encoding="utf-8", errors="replace"))
    if file:
        data["by_file"] = {k: v for k, v in data["by_file"].items()
                           if file in k}
    return data


# ---------------- async job framework (build/verify/regen/anchor) ----------
import threading
from concurrent.futures import ThreadPoolExecutor

_JOBS = {}
_JOBS_LOCK = threading.Lock()
_JOB_SEQ = [0]
_JOB_POOL = ThreadPoolExecutor(max_workers=2)


def _job_run(job_id, fn):
    try:
        result = fn()
        state, res = "done", result
    except Exception as e:  # noqa: BLE001 - jobs report any failure
        state, res = "error", {"error": repr(e)[:400]}
    with _JOBS_LOCK:
        _JOBS[job_id]["state"] = state
        _JOBS[job_id]["result"] = res
        _JOBS[job_id]["done"] = time.time()


def submit_job(kind, fn):
    with _JOBS_LOCK:
        _JOB_SEQ[0] += 1
        jid = "%s-%d" % (kind, _JOB_SEQ[0])
        _JOBS[jid] = {"kind": kind, "state": "running", "submitted": time.time()}
        _JOB_POOL.submit(_job_run, jid, fn)
    return jid


def tool_job_status(job_id=None):
    with _JOBS_LOCK:
        if job_id:
            j = _JOBS.get(job_id)
            if not j:
                return {"ok": False, "error": "unknown job: %s" % job_id}
            out = dict(j)
            return {"ok": True, "job": out}
    return {"ok": True, "jobs": sorted(_JOBS.keys())}


CSP_EXPORT = PROJECT_ROOT / "tools" / "csp_export"
CANON_MANIFEST = PROJECT_ROOT / "anchors" / "csp_canon_manifest.json"
CANON_MEMBERS = PROJECT_ROOT / "anchors" / "csp_canon_members.json"
BACKFILL_MANIFEST = PROJECT_ROOT / "anchors" / "backfill_manifest.json"
COMPARISON_LOG = PROJECT_ROOT / "injectFunctionTest" / "comparisonResult.log"


def tool_sig_lookup(target):
    """CSP canon manifest query: sig source + class anchor for a function."""
    addr = _norm_addr_str(target)
    if addr is None:
        return {"error": "need 0xADDR"}
    man = json.loads(CANON_MANIFEST.read_text(encoding="utf-8"))
    e = man.get(addr) or man.get(addr.lower()) or {}
    if not e:
        return {"addr": addr, "found": False,
                "note": "not in csp_canon_manifest (19,078 keyed by %08X form)"}
    return {"addr": addr, "found": True, "name": e.get("name"),
            "sig": e.get("sig"), "cls": e.get("cls"),
            "note": ("sig=csp -> CSP anchored; sig=ida-proto -> unanchored, "
                     "run csp_anchor first")}


def _norm_addr_str(target):
    if not isinstance(target, str):
        return None
    m = re.search(r"0x([0-9A-Fa-f]{6,8})", target)
    if not m:
        return None
    return "0x%08X" % int(m.group(1), 16)


def tool_backfill_accounts():
    """Step-6 backfill ledger: status counts + actionable lists."""
    man = json.loads(BACKFILL_MANIFEST.read_text(encoding="utf-8"))
    counts = {}
    needs = []
    downgraded = 0
    no_cls = []
    for a, e in man.items():
        st = e.get("status", "?")
        counts[st] = counts.get(st, 0) + 1
        if st == "needs-retranslation":
            needs.append({"addr": a, "cls": e.get("cls"),
                          "residual": e.get("residual_tokens")})
        elif st == "downgrade":
            downgraded += 1
        elif st == "no-cls" and len(no_cls) < 5:
            no_cls.append(a)
    return {"total": len(man), "counts": counts,
            "needs_retranslation": needs[:50],
            "needs_retranslation_total": len(needs),
            "downgrade_total": downgraded,
            "no_cls_sample": no_cls,
            "note": ("downgrade/no-cls = signature gaps -> run csp_anchor; "
                     "needs-retranslation -> RA2MCP retranslate")}


def tool_backfill_get(target):
    """Fetch a backfilled body (from bodies/*.inc) + its ledger entry."""
    addr = _norm_addr_str(target)
    if addr is None:
        return {"error": "need 0xADDR"}
    ai = int(addr, 16)
    man = json.loads(BACKFILL_MANIFEST.read_text(encoding="utf-8"))
    e = man.get(addr) or {}
    bucket = PROJECT_ROOT / "src" / "csp_canon" / "bodies" / (
        "fn_%02X.inc" % ((ai >> 16) & 0xFF))
    body = None
    if bucket.exists():
        text = bucket.read_text(encoding="utf-8", errors="replace")
        i = text.find("// ==== BACKFILL %s " % addr)
        if i < 0:
            i = text.find("// ==== BACKFILL 0x%08X " % ai)
        if i >= 0:
            j = text.find("// ==== BACKFILL", i + 10)
            body = text[i:j if j > 0 else len(text)]
    return {"addr": addr, "entry": {k: v for k, v in e.items()
                                    if k != "renames"},
            "renames": e.get("renames", {}), "body": body,
            "ok": body is not None}


def tool_canon_regen(async_mode=False):
    """Regenerate the mechanical foundation after renames/anchors:
    gen_cpp_canon -> rewrite_member_refs -> backfill_completed. Returns
    per-stage summaries. All three are deterministic re-runnable scripts."""
    if async_mode:
        jid = submit_job("canon_regen", tool_canon_regen)
        return {"ok": True, "job_id": jid, "note": "poll with job_status"}
    stages = []
    for script in ("gen_cpp_canon.py", "rewrite_member_refs.py",
                   "backfill_completed.py"):
        proc = subprocess.run(
            [sys.executable, str(CSP_EXPORT / script)],
            capture_output=True, text=True, encoding="utf-8",
            errors="replace", timeout=1200, cwd=str(PROJECT_ROOT))
        out = (proc.stdout or "") + (proc.stderr or "")
        stages.append({"script": script, "ok": proc.returncode == 0,
                       "exit": proc.returncode,
                       "tail": out[-800:]})
        if proc.returncode != 0:
            return {"ok": False, "stages": stages,
                    "error": "%s failed" % script}
    return {"ok": True, "stages": stages,
            "note": ("foundation regenerated; classes.hpp/members/raw_decomp/"
                     "bodies all re-synced to CSP layer")}


def tool_csp_anchor(addrs, timeout=900, async_mode=False):
    if async_mode:
        jid = submit_job("csp_anchor",
                         lambda: tool_csp_anchor(addrs, timeout, False))
        return {"ok": True, "job_id": jid, "note": "poll with job_status"}
    """Run CSP incremental solver for function addresses, then report the
    canon manifest/type_map anchor state per address. Mechanical wrapper."""
    if isinstance(addrs, str):
        addrs = [addrs]
    norm = []
    for x in addrs or []:
        n = _norm_addr_str(x)
        if n:
            norm.append("0x%08X" % int(n, 16))
    if not norm:
        return {"error": "need addrs like ['0x004011C0']"}
    proc = subprocess.run(
        [sys.executable, "-m", "tools.type_infer.incremental"] + norm,
        capture_output=True, text=True, encoding="utf-8", errors="replace",
        timeout=timeout, cwd=str(PROJECT_ROOT))
    out = (proc.stdout or "") + (proc.stderr or "")
    man = json.loads(CANON_MANIFEST.read_text(encoding="utf-8"))
    report = []
    for n in norm:
        e = man.get(n) or {}
        report.append({"addr": n, "name": e.get("name"),
                       "sig_before": e.get("sig"), "cls": e.get("cls")})
    return {"ok": proc.returncode == 0, "exit": proc.returncode,
            "addresses": report, "output": out[-3000:],
            "note": ("after solver, re-run canon_regen to re-sync manifest; "
                     "sig flips to csp when CSP solves the signature")}


def tool_compare_parse(path=None):
    """Parse comparisonResult.log (REVERSE comparison) into accounts."""
    p = pathlib.Path(path) if path else COMPARISON_LOG
    if not p.exists():
        return {"ok": False, "error": "log not found: %s" % p,
                "hint": "run the game with hooks (15s+) first"}
    section = None
    counts = {"Different": 0, "Same": 0, "NoneCalls": 0, "Captures": 0}
    diff_funcs = []
    same_funcs = []
    cur = None
    for line in p.read_text(encoding="utf-8", errors="replace").split("\n"):
        if "Different Compares" in line:
            section = "diff"
        elif "Same Compares" in line:
            section = "same"
        elif "None Calls" in line:
            section = "none"
        elif "Captures" in line and "====" in line:
            section = "captures"
        m = re.match(r"\s*\[([\w:]+)-(0x[0-9a-fA-F]+)\]", line)
        if m:
            cur = m.group(1)
            if section == "diff":
                counts["Different"] += 1
                if len(diff_funcs) < 100:
                    diff_funcs.append({"name": m.group(1), "addr": m.group(2)})
            elif section == "same":
                counts["Same"] += 1
                if len(same_funcs) < 100:
                    same_funcs.append({"name": m.group(1), "addr": m.group(2)})
            elif section == "none":
                counts["NoneCalls"] += 1
    return {"ok": True, "log": str(p), "counts": counts,
            "different_sample": diff_funcs, "same_sample": same_funcs,
            "note": ("Same = behaviorally verified vs original; "
                     "Different = fix and re-run")}


def tool_member_set(cls, offset, name, mtype, size=4, evidence="manual",
                    overwrite=False, entries=None):
    """Mechanical evidence entry into the CSP member layer. Writes
    anchors/member_types.json (authoritative anchor, consumed by
    gen_cpp_canon as override) + tools/member_lookup.json + signals
    _member_by_name sync. Run canon_regen afterwards."""
    if not cls or not name:
        return {"error": "need cls and name"}
    try:
        off = int(str(offset), 0)
    except ValueError:
        return {"error": "offset must be int/0xNN"}
    mt_p = PROJECT_ROOT / "anchors" / "member_types.json"
    ml_p = PROJECT_ROOT / "tools" / "member_lookup.json"
    sp = PROJECT_ROOT / "signals.json"
    mt = json.loads(mt_p.read_text(encoding="utf-8"))
    key = "%s+0x%X" % (cls, off)
    if key in mt and not overwrite:
        return {"error": "entry exists", "key": key, "existing": mt[key],
                "hint": "pass overwrite=true to replace (evidence beats stale)"}
    entry = {"name": name, "type": mtype or "void*", "size": size,
             "confidence": "ANCHORED", "evidence": evidence}
    mt[key] = entry
    mt_p.write_text(json.dumps(mt, indent=1, ensure_ascii=False) + chr(10),
                    encoding="utf-8")
    ml = json.loads(ml_p.read_text(encoding="utf-8"))
    ml.setdefault(cls, {})[str(off)] = {"name": name, "type": mtype or "void*",
                                        "size": size, "src": evidence}
    ml_p.write_text(json.dumps(ml, indent=1, ensure_ascii=False) + chr(10),
                    encoding="utf-8")
    sig = json.loads(sp.read_text(encoding="utf-8"))
    mbn = sig.setdefault("_member_by_name", {}).setdefault(cls, {})
    mbn[name] = off
    write_signals_atomic(sig)
    return {"ok": True, "key": key, "entry": entry,
            "note": "run canon_regen to propagate into classes.hpp/members/"
                    "raw_decomp/bodies"}


def tool_reopen(target):
    """Step-6 retranslation entry: completed -> pending. Restores the IDA
    pseudocode block (from ida_cache) as the pending body and clears the
    completed flag. Pair with replace_body -> verify_function ->
    mark_completed."""
    addr = _norm_addr_str(target)
    if not addr:
        return {"ok": False, "error": "need 0xADDR"}
    ai = int(addr, 16)
    cache = (PROJECT_ROOT / ".omo" / "ida_cache" / ("func_0x%X.json" % ai))
    if not cache.exists():
        return {"ok": False, "error": "no ida_cache for %s" % addr}
    pseudo = json.loads(cache.read_text(encoding="utf-8")).get("decompiled", "")
    if not pseudo.strip():
        return {"ok": False, "error": "cache pseudocode empty"}
    sys.path.insert(0, str(PROJECT_ROOT / "tools"))
    import verify_execution_flow as V
    body = V.find_cpp_function_by_addr(ai)
    if not body:
        return {"ok": False, "error": "no cpp body in tree"}
    path = pathlib.Path(body["file"])
    old_text = "".join(body["lines"])
    # replace the whole def block with a pending block (def line + marker +
    # pseudocode), brace-matched from the first '{' of the captured text
    first = old_text.find("{")
    name = (man := json.loads((PROJECT_ROOT / "anchors"
                               / "csp_canon_manifest.json")
                              .read_text(encoding="utf-8"))).get(addr, {})
    fname = (man and name.get("name")) or body.get("function") or addr
    defline = old_text.split("{", 1)[0].rstrip()
    nl = chr(10)
    pending_block = (defline + nl + "{" + nl
                     + "// [IDA decompile] original pseudocode - translation "
                       "pending (final goal)" + nl + pseudo + nl + "}" + nl)
    # locate old_text inside the file (it is a contiguous capture)
    ftext = path.read_text(encoding="utf-8", errors="replace")
    i = ftext.find(old_text)
    if i < 0:
        return {"ok": False,
                "error": "def block not found verbatim in file",
                "file": str(path.relative_to(PROJECT_ROOT))}
    ftext = ftext[:i] + pending_block + ftext[i + len(old_text):]
    path.write_text(ftext, encoding="utf-8", newline=chr(10))
    sp = PROJECT_ROOT / "signals.json"
    sig = json.loads(sp.read_text(encoding="utf-8"))
    sym = None
    for k in (addr, addr.lower(), "0x%X" % ai):
        sym = sig["symbols"].get(k)
        if sym is not None:
            addr = k
            break
    was = bool(sym and sym.get("completed"))
    if sym is not None:
        sym["completed"] = False
        sym["translated"] = False
        sym["reopened_from"] = "needs-retranslation"
    write_signals_atomic(sig)
    invalidate_pending_index()
    rel = str(path)
    if path.is_absolute():
        rel = str(path.relative_to(PROJECT_ROOT))
    return {"ok": True, "addr": addr, "file": rel,
            "was_completed": was,
            "note": "now pending; use replace_body -> verify_function -> "
                    "mark_completed"}


def tool_set_signature(target, signature, sync_hpp=True, dry_run=False):
    """Rewrite a function's definition line in its .cpp and (optionally) the
    matching declaration in a non-generated .hpp (located by its // 0xADDR
    annotation). Member-form conversion ('RetType Cls::Name(...)') also
    auto-includes the class carrier: 'csp_canon/classes.hpp' for e4/gap2 TUs,
    the per-function 'e4/classes/E4Recv_XXXXXX_e4.hpp' for E4Recv receivers.
    Name changes are NOT this tool's job (rename_symbol handles those).
    csp_canon/*.hpp are generated and never hand-edited."""
    entry = resolve_target(target)
    if entry is None or not entry.get("file"):
        return {"ok": False,
                "error": f"target not resolvable to a file function: {target}"}
    sig_line = signature.strip()
    while sig_line.endswith("{"):
        sig_line = sig_line[:-1].strip()
    if "(" not in sig_line or ")" not in sig_line:
        return {"ok": False,
                "error": "signature must look like 'RetType [Cls::]Name(params)'"}
    p = PROJECT_ROOT / entry["file"]
    lines = _read_latin1(p).split("\n")
    di = entry["line"] - 1
    old = lines[di].rstrip("\r")
    mns = re.match(r'^(\s*namespace\s+\w+\s*\{\s*)(.*)$', old)
    if mns:
        prefix, body_old = mns.group(1), mns.group(2)
    else:
        prefix, body_old = "", old
    indent = re.match(r"\s*", body_old).group(0)
    new_line = prefix + indent + sig_line + " {"
    # #148 guard: the line we are about to rewrite must actually be the def
    # line — its text has to contain the function name of the new signature.
    name_m0 = re.match(r'^(.*?)([A-Za-z_]\w*)\s*\(', sig_line)
    fname0 = name_m0.group(2) if name_m0 else None
    if fname0 and fname0 not in old:
        return {"ok": False,
                "error": ("def-line mismatch: target line does not mention "
                          "'%s' -- stale/wrong line, refusing to rewrite"
                          % fname0),
                "old_def": old.strip()}
    if dry_run:
        return {"ok": True, "dry_run": True, "file": entry["file"],
                "old_def": old.strip(), "new_def": new_line.strip()}
    lines[di] = new_line
    # ---- carrier include automation (e4/gap2 member-form TUs) ----
    includes_added = []
    mem = re.search(r'([A-Za-z_]\w*)::[~A-Za-z_]\w*\s*\(', sig_line)
    if mem:
        cls = mem.group(1)
        want = None
        if cls.startswith("E4Recv_"):
            want = 'e4/classes/%s_e4.hpp' % cls
        elif "/e4/" in entry["file"] or "gap2" in entry["file"]:
            want = 'csp_canon/classes.hpp'
        if want and not any(('#include "%s"' % want) in ln for ln in lines[:60]):
            last_inc = max((i for i, ln in enumerate(lines[:80])
                            if ln.strip().startswith("#include")), default=-1)
            lines.insert(last_inc + 1, '#include "%s"' % want)
            includes_added.append(want)
    p.write_bytes("\n".join(lines).encode("latin-1"))
    global _pending_index
    _pending_index = None
    out = {"ok": True, "file": entry["file"], "line": entry["line"],
           "old_def": old.strip(), "new_def": new_line.strip(),
           "includes_added": includes_added}
    # ---- hpp declaration sync (by // 0xADDR annotation, generated files
    # excluded -- csp_canon/raw_decomp are regenerable, never hand-edited) ----
    out["hpp"] = {"synced": False, "reason": "sync_hpp disabled"}
    if sync_hpp:
        out["hpp"] = _sync_hpp_decl(entry, sig_line)
    return out


def _sync_hpp_decl(entry, sig_line):
    addr = entry.get("address")
    name_m = re.match(r'^(.*?)([A-Za-z_]\w*)\s*\(', sig_line)
    fname = name_m.group(2) if name_m else None
    if not addr or not fname:
        return {"synced": False, "reason": "no addr or name parsed"}
    ai = int(addr, 16) if addr.startswith("0x") else None
    ann_re = re.compile(r'//\s*(?:IDA\s+)?0x([0-9A-Fa-f]{6,8})')
    for p in sorted(SRC.rglob("*.hpp")):
        rel = str(p.relative_to(PROJECT_ROOT)).replace("\\", "/")
        if rel.startswith(("src/csp_canon/", "src/raw_decomp/")):
            continue
        try:
            hlines = _read_latin1(p).split("\n")
        except OSError:
            continue
        for i, ln in enumerate(hlines):
            m = ann_re.search(ln)
            if not m:
                continue
            try:
                if int(m.group(1), 16) != ai:
                    continue
            except ValueError:
                continue
            if fname not in ln:
                continue
            # strip the class qualifier for the in-class declaration
            hpp_sig = re.sub(r'([A-Za-z_]\w*)::(?=[~A-Za-z_]\w*\s*\()',
                             '', sig_line)
            head = ln[:m.start()].rstrip()
            cmt = ln[m.start():].rstrip("\r")
            if head.endswith("{"):
                head = head[:-1].rstrip()
            new_ln = (head + " " if head else "") + hpp_sig + "  " + cmt
            hlines[i] = new_ln
            p.write_bytes("\n".join(hlines).encode("latin-1"))
            return {"synced": True, "file": rel, "line": i + 1,
                    "decl": new_ln.strip()[:160]}
    return {"synced": False,
            "reason": "no hpp decl with // %s annotation + name %s" % (addr, fname)}


def tool_sweep_stubs(file_filter=None, dry_run=True, limit=200):
    """Remove dead stub blocks from stub files (src/_generated/, subs*.cpp,
    *stub*.cpp): any stub function whose // 0xADDR annotation names an address
    that (a) is completed in signals or (b) has an annotation in a non-stub
    file, is a misdirection hazard for by_addr lookup (46D350 precedent) and
    is removed whole (annotation line + def block)."""
    stub_files = []
    for p in sorted(SRC.rglob("*.cpp")):
        rel = str(p.relative_to(PROJECT_ROOT)).replace("\\", "/")
        name = p.name.lower()
        if ("_generated" in rel or name.startswith("subs")
                or "stub" in name):
            if not file_filter or file_filter in rel:
                stub_files.append((p, rel))
    real_anns = set()
    for p in sorted(SRC.rglob("*.cpp")):
        rel = str(p.relative_to(PROJECT_ROOT)).replace("\\", "/")
        name = p.name.lower()
        if "_generated" in rel or name.startswith("subs") or "stub" in name:
            continue
        try:
            txt = _read_latin1(p)
        except OSError:
            continue
        for m in re.finditer(r'//\s*(?:IDA\s+)?0x([0-9A-Fa-f]{6,8})', txt):
            try:
                real_anns.add(int(m.group(1), 16))
            except ValueError:
                continue
    sig = signals()
    ann_re = re.compile(r'//\s*(?:IDA\s+)?0x([0-9A-Fa-f]{6,8})')
    removed, errors = [], []
    for p, rel in stub_files:
        try:
            lines = _read_latin1(p).split("\n")
        except OSError:
            continue
        kill_spans = []
        for i, ln in enumerate(lines):
            m = ann_re.search(ln)
            if not m:
                continue
            try:
                a = int(m.group(1), 16)
            except ValueError:
                continue
            sym = sig["symbols"].get("0x%x" % a) or sig["symbols"].get("0x%08x" % a)
            is_done = bool(isinstance(sym, dict) and sym.get("completed"))
            if not is_done and a not in real_anns:
                continue
            # find the def line below the annotation, then brace-match
            j = i + 1
            while j < len(lines) and not lines[j].strip():
                j += 1
            if j >= len(lines) or "{" not in lines[j]:
                continue
            depth, started, k = 0, False, j
            while k < len(lines):
                if "{" in lines[k]:
                    started = True
                if started:
                    depth += lines[k].count("{") - lines[k].count("}")
                    if depth <= 0:
                        break
                k += 1
            if not started or depth > 0:
                errors.append({"file": rel, "line": i + 1,
                               "error": "unbounded stub block"})
                continue
            kill_spans.append((i, k))
        if not kill_spans:
            continue
        kill_spans.sort(reverse=True)
        if not dry_run:
            for (i, k) in kill_spans:
                del lines[i:k + 1]
            p.write_bytes("\n".join(lines).encode("latin-1"))
        for (i, k) in kill_spans[:limit]:
            removed.append({"file": rel, "lines": [i + 1, k + 1]})
        if len(removed) >= limit:
            break
    return {"ok": True, "dry_run": dry_run, "stub_files": len(stub_files),
            "blocks_removed": len(removed), "sample": removed[:20],
            "errors": errors[:10],
            "note": "dry_run=true previews; run again with dry_run=false"}


def tool_harvest_loop(count=20, max_lines=8, file_filter=None,
                      dry_run=False, async_mode=False):
    """Mechanical trivial-bucket harvest: pending functions whose rewritten
    raw_decomp body is a single `return <expr>;` (no `this`) are translated
    verbatim, verified, and marked on PASS / rolled back on FAIL. Returns a
    per-function ledger. Non-trivial candidates are reported for the agent."""
    if async_mode and not dry_run:
        jid = submit_job("harvest", lambda: tool_harvest_loop(
            count, max_lines, file_filter, dry_run, False))
        return {"ok": True, "job_id": jid,
                "note": "verify runs ~10-30s per candidate; poll job_status"}
    idx = build_pending_index()
    pool = [e for e in idx
            if (e.get("pseudocode_lines") or 999) <= max_lines
            and (not file_filter or file_filter in e["file"])
            and not (signals()["symbols"].get(e.get("address") or "")
                     or {}).get("completed")]
    attempted = passed = failed = skipped = 0
    ledger = []
    for entry in pool:
        if attempted >= count:
            break
        addr = entry.get("address")
        if not addr:
            skipped += 1
            continue
        body = _raw_decomp_trivial_return(addr)
        if body is None:
            ledger.append({"addr": addr, "skipped": "not trivial-return"})
            skipped += 1
            continue
        # #147 guard: every bare lowercase identifier in the return statement
        # must be declared on the def line we keep (a param name like
        # dwNewLong that survives only in the raw_decomp def would compile-
        # break the carrier). PascalCase call targets / globals are exempt.
        decl = entry.get("signature") or ""
        ident_re = re.compile(r'\b([a-z_][a-z0-9_]{2,})\b')
        exempt = {"return", "true", "false", "nullptr", "sizeof", "null"}
        missing = sorted({t for t in ident_re.findall(body)
                          if t not in exempt
                          and not t.startswith(("g_", "data_global"))
                          and t not in decl})
        if missing:
            ledger.append({"addr": addr,
                           "skipped": "identifiers not in def line: %s"
                                      % ", ".join(missing[:4])})
            skipped += 1
            continue
        attempted += 1
        r = _harvest_one(entry, body, dry_run)
        if r.get("skipped"):
            skipped += 1
        elif r["verdict"] == "PASS":
            passed += 1
        elif r["verdict"] == "FAIL":
            failed += 1  # DRY neither passes nor fails
        ledger.append({"addr": addr, **{k: v for k, v in r.items()
                                        if k in ("verdict", "marked",
                                                 "rolled_back", "skipped",
                                                 "detail", "body")}})
    return {"ok": True, "dry_run": dry_run, "pool": len(pool),
            "attempted": attempted, "passed": passed, "failed": failed,
            "skipped": skipped, "ledger": ledger[:40]}


_RAWDEC_RE = re.compile(
    r'^// ==== 0x([0-9A-Fa-f]{8})\s+.*====\s*$', re.M)


def _raw_decomp_trivial_return(addr):
    """Fetch the raw_decomp rewritten body for addr; return the single return
    statement if the body is exactly one `return <expr>;` with no `this`
    reference (the mechanical trivial template), else None."""
    try:
        ai = int(addr, 16)
    except (TypeError, ValueError):
        return None
    bucket = (PROJECT_ROOT / "src" / "raw_decomp" /
              ("fn_%02X.c" % ((ai >> 16) & 0xFF)))
    if not bucket.exists():
        return None
    text = bucket.read_text(encoding="utf-8", errors="replace")
    m = re.search(r'^// ==== 0x%08X\s.*$' % ai, text, re.M)
    if not m:
        return None
    nxt = text.find("\n// ==== 0x", m.end())
    seg = text[m.end():nxt if nxt > 0 else len(text)]
    b = seg.find("{")
    e = seg.rfind("}")
    if b < 0 or e <= b:
        return None
    body = seg[b + 1:e]
    stmts = [ln.strip() for ln in body.split("\n") if ln.strip()]
    if len(stmts) != 1 or not stmts[0].startswith("return") \
            or not stmts[0].endswith(";") or "this" in stmts[0]:
        return None
    return stmts[0]


def _marker_annotation(lines, marker_idx):
    """Address annotation (`// 0xADDR`) above a pseudocode marker, as int."""
    j = marker_idx - 1
    while j >= 0 and j > marker_idx - 12:
        m = ADDR_COMMENT.match(lines[j].strip())
        if m:
            return int(m.group(1), 16)
        j -= 1
    return None


def _harvest_one(entry, ret_stmt, dry_run):
    """Replace a pending pseudocode block with one return statement, verify,
    mark on PASS, roll the file back on FAIL. The def line is kept as-is."""
    # re-resolve fresh: earlier harvests in the same loop shifted line numbers
    # (#146: stale entries made the marker scan land in the NEXT function's
    # block, writing one function's body into another)
    fresh = None
    if entry.get("address"):
        fresh = resolve_target(entry["address"])
    if fresh and fresh.get("file") == entry.get("file") and fresh.get("line"):
        entry = fresh
    p = PROJECT_ROOT / entry["file"]
    lines = _read_latin1(p).split("\n")
    marker_idx = None
    for i in range(entry["line"] - 1, min(entry["line"] + 40, len(lines))):
        if lines[i].rstrip("\r") == INSIDE_MARKER:
            marker_idx = i
            break
    if marker_idx is None:
        return {"skipped": "marker not found"}
    # guard: the block's own annotation must name the target address (#146)
    want = entry.get("address")
    if want:
        ann = _marker_annotation(lines, marker_idx)
        try:
            want_i = int(want, 16)
        except (TypeError, ValueError):
            want_i = None
        if ann is None:
            return {"skipped": "no // 0xADDR annotation above marker"}
        if want_i is not None and ann != want_i:
            return {"skipped": "annotation mismatch: block is 0x%X, "
                               "target is %s" % (ann, want)}
    depth = started = 0
    end = marker_idx
    for k in range(marker_idx + 1, len(lines)):
        if "{" in lines[k]:
            started = 1
        if started:
            depth += lines[k].count("{") - lines[k].count("}")
            if depth <= 0:
                end = k
                break
    if not started or depth > 0:
        return {"skipped": "pseudocode span unbounded"}
    if dry_run:
        return {"verdict": "DRY", "body": ret_stmt,
                "would_replace_lines": [entry["line"], end + 1]}
    old = lines[marker_idx:end + 1]
    lines[marker_idx:end + 1] = ["  " + ret_stmt]
    p.write_bytes("\n".join(lines).encode("latin-1"))
    global _pending_index
    _pending_index = None
    addr = entry.get("address")
    result = run_verify(addr)
    if result["verdict"] == "PASS":
        mark = tool_mark_completed(addr, "harvest_loop: trivial-return")
        return {"verdict": "PASS", "marked": mark.get("ok", True)}
    # rollback
    lines[marker_idx:end + 1] = old
    p.write_bytes("\n".join(lines).encode("latin-1"))
    _pending_index = None
    return {"verdict": "FAIL", "rolled_back": True,
            "detail": result.get("detail", "")[:200]}


def tool_reconcile_accounts(dry_run=True, limit=100):
    """Marker&completed reconciliation: find functions marked completed but
    still carrying a pending pseudocode block in the tree (phantom
    completions), optionally clear them. Mechanical; re-runnable."""
    marker = ("// [IDA decompile] original pseudocode - translation "
              "pending (final goal)")
    addr_re = re.compile(r"^// 0x([0-9A-Fa-f]{6,8})\s*\r?$")
    sig = json.loads(SIGNALS.read_text(encoding="utf-8"))
    completed = {a for a, s in sig["symbols"].items()
                 if isinstance(s, dict) and s.get("completed")
                 and a.lower().startswith("0x")}
    tree_pending = set()
    cur = None
    for f in SRC.rglob("*.cpp"):
        try:
            text = f.read_text(encoding="utf-8", errors="replace")
        except OSError:
            continue
        if marker not in text:
            continue
        for ln in text.split("\n"):
            m = addr_re.match(ln)
            if m:
                cur = "0x" + m.group(1).lstrip("0").lower()
                continue
            if marker in ln and cur:
                tree_pending.add(cur)
                cur = None
    phantoms = sorted(completed & tree_pending)
    out = {"phantom_count": len(phantoms), "dry_run": dry_run,
           "phantoms": phantoms[:limit]}
    if not dry_run:
        n = 0
        for a in phantoms:
            sym = sig["symbols"].get(a)
            if isinstance(sym, dict) and sym.get("completed"):
                sym["completed"] = False
                sym["translated"] = False
                sym["phantom_cleared"] = "marker&completed reconcile"
                n += 1
        write_signals_atomic(sig)
        out["cleared"] = n
        invalidate_pending_index()
    return {"ok": True, **out}


def tool_issues_add(description, target=None, kind="debt"):
    st = load_state()
    iss = {"id": st["next_issue_id"], "description": description,
           "target": target, "kind": kind, "status": "open"}
    st["issues"].append(iss)
    st["next_issue_id"] += 1
    save_state(st)
    return {"ok": True, "issue": iss}


def tool_issues_list(include_resolved=False, status="open", kind=None,
                     target=None, limit=50, summary=False):
    st = load_state()
    out = [i for i in st["issues"]
           if (include_resolved or i["status"] == "open")]
    if status and not include_resolved:
        out = [i for i in out if i["status"] == status]
    if kind:
        out = [i for i in out if i.get("kind") == kind]
    if target:
        out = [i for i in out if target in (i.get("target") or "")
               or target in (i.get("description") or "")]
    counts = {}
    for i in out:
        counts[i["status"]] = counts.get(i["status"], 0) + 1
    if summary:
        return {"total": len(out), "by_status": counts,
                "note": "summary=true -> counts only"}
    return {"count": len(out), "by_status": counts,
            "issues": out[:limit]}


def tool_issues_resolve(iid, resolution=""):
    st = load_state()
    for i in st["issues"]:
        if i["id"] == iid:
            i["status"] = "resolved"
            i["resolution"] = resolution
            save_state(st)
            return {"ok": True, "issue": i}
    return {"ok": False, "error": f"issue {iid} not found"}


def tool_addr_lookup(name=None, addr=None):
    out = {}
    if addr:
        key = addr.lower()
        s = signals()["symbols"].get(key)
        out["addr"] = key
        out["function"] = s and s.get("name")
        if not s:
            out["globals"] = [k for k, v in
                              (signals().get("globals") or {}).items()
                              if isinstance(v, str)
                              and v.lower() == key][:5]
        out["pending_translation"] = any(e.get("address") == key
                                         for e in build_pending_index())
    elif name:
        fn_idx = _fn_addr_index()
        out["name"] = name
        out["function_addr"] = (fn_idx.get(name)
                                or fn_idx.get(name.replace("::", "_")))
        out["global_addr"] = _glob_addr_index().get(name)
    return out


def tool_stats():
    idx = build_pending_index()
    by_file, by_class = {}, {}
    for e in idx:
        by_file[e["file"]] = by_file.get(e["file"], 0) + 1
        by_class[e["class"]] = by_class.get(e["class"], 0) + 1
    completed = sum(1 for v in signals()["symbols"].values()
                    if isinstance(v, dict) and v.get("kind") == "function"
                    and v.get("completed"))
    st = load_state()
    open_issues = sum(1 for i in st["issues"] if i["status"] == "open")
    last_build = None
    if BUILD_LOG.exists():
        last_build = parse_build_log(
            BUILD_LOG.read_text(encoding="utf-8",
                                errors="replace"))["error_count"]
    return {"pending_translations": len(idx),
            "top_files": dict(sorted(by_file.items(),
                                     key=lambda x: -x[1])[:12]),
            "top_classes": dict(sorted(by_class.items(),
                                       key=lambda x: -x[1])[:12]),
            "completed_functions": completed,
            "open_issues": open_issues,
            "last_build_errors": last_build}


# ============================================================================
# tool catalog + dispatch + minimal MCP stdio loop
# ============================================================================
TOOLS = [
    {"name": "list_pending",
     "description": "列出所有待翻译函数（函数体内含 IDA 原始伪码）。可按文件/类过滤。返回 target(file:line)/函数/类/地址/伪码行数。",
     "inputSchema": {"type": "object",
                     "properties": {"file_filter": {"type": "string"},
                                    "class_filter": {"type": "string"},
                                    "limit": {"type": "integer",
                                              "default": 50}},
                     "required": []}},
    {"name": "next_batch",
     "description": "获取下一批待翻译函数（核心类优先 + 小函数优先，或文件顺序）。",
     "inputSchema": {"type": "object",
                     "properties": {"count": {"type": "integer",
                                              "default": 10},
                                    "strategy": {"type": "string",
                                                 "enum": ["core-small-first",
                                                          "file-order"],
                                                 "default": "core-small-first"}},
                     "required": []}},
    {"name": "get_context",
     "description": "获取翻译上下文：IDA 反编译伪码（快照优先）、成员偏移→名称映射（IDA til 在线优先，member_lookup 回退并标注已知坏区）、signals 状态。",
     "inputSchema": {"type": "object",
                     "properties": {"target": {"type": "string",
                                               "description": "file.cpp:line | 0xADDR | Class::Method"}},
                     "required": ["target"]}},
    {"name": "replace_body",
     "description": "用真 C++ 翻译就地替换函数体内的 IDA 伪码块；替换后自动维护 // 0xADDR 注解。先 dry_run 预览。",
     "inputSchema": {"type": "object",
                     "properties": {"target": {"type": "string"},
                                    "new_body": {"type": "string"},
                                    "dry_run": {"type": "boolean",
                                                "default": False}},
                     "required": ["target", "new_body"]}},
    {"name": "verify_function",
     "description": "对单个函数运行 exec-flow CFG 校验（需地址）。verbose=true 返回双侧 CFG 块级转储 + STEP3(0) 缺失事件；auto_mark=true 时 PASS 即写 completed。async=true 后台执行返回 job_id。",
     "inputSchema": {"type": "object",
                     "properties": {"target": {"type": "string"},
                                    "async": {"type": "boolean",
                                              "default": False},
                                    "verbose": {"type": "boolean",
                                                "default": False},
                                    "auto_mark": {"type": "boolean",
                                                  "default": False},
                                    "note": {"type": "string"}},
                     "required": ["target"]}},
    {"name": "job_status",
     "description": "查询异步任务（build/verify/canon_regen/csp_anchor 的 async 模式）状态与结果。",
     "inputSchema": {"type": "object",
                     "properties": {"job_id": {"type": "string"}},
                     "required": []}},
    {"name": "mark_completed",
     "description": "验证通过后将函数标记 completed=true（写入 signals.json，附 note）。",
     "inputSchema": {"type": "object",
                     "properties": {"target": {"type": "string"},
                                    "note": {"type": "string"}},
                     "required": ["target"]}},
    {"name": "function_state",
     "description": "查询函数状态：是否待翻译/completed/done + 关联 issue。",
     "inputSchema": {"type": "object",
                     "properties": {"target": {"type": "string"}},
                     "required": ["target"]}},
    {"name": "rename_symbol",
     "description": "四方批量重命名（src/ + signals.json + member_lookup.json + IDA），包装 tools/rename_symbol.py。",
     "inputSchema": {"type": "object",
                     "properties": {"old_name": {"type": "string"},
                                    "new_name": {"type": "string"},
                                    "dry_run": {"type": "boolean",
                                                "default": False},
                                    "sync_ida": {"type": "boolean",
                                                 "default": True}},
                     "required": ["old_name", "new_name"]}},
    {"name": "rename_local",
     "description": "函数作用域内重命名局部变量（只改该函数体，词边界精确替换）。",
     "inputSchema": {"type": "object",
                     "properties": {"target": {"type": "string"},
                                    "old_name": {"type": "string"},
                                    "new_name": {"type": "string"},
                                    "dry_run": {"type": "boolean",
                                                "default": False}},
                     "required": ["target", "old_name", "new_name"]}},
    {"name": "build",
     "description": "编译验证。scope=file 单 TU 快速验证（秒级）；scope=all 全项目 MSBuild（分钟级）。async=true 后台执行返回 job_id。",
     "inputSchema": {"type": "object",
                     "properties": {"scope": {"type": "string",
                                              "enum": ["file", "all"],
                                              "default": "file"},
                                    "file": {"type": "string"},
                                    "async": {"type": "boolean",
                                              "default": False}},
                     "required": []}},
    {"name": "get_build_errors",
     "description": "读取最近一次构建日志，返回按文件分组的结构化错误。",
     "inputSchema": {"type": "object",
                     "properties": {"file": {"type": "string"}},
                     "required": []}},
    {"name": "run_gates",
     "description": "运行三重质量门控（code-standards / ida-artifact / exec-flow）。",
     "inputSchema": {"type": "object", "properties": {}, "required": []}},
    {"name": "audit_access",
     "description": "成员访问审计：扫描真代码中的地址+偏移违规（自动跳过未翻译伪码块）。",
     "inputSchema": {"type": "object",
                     "properties": {"file": {"type": "string"}},
                     "required": []}},
    {"name": "annotations_audit",
     "description": "审计函数与 IDA 地址一一对应：函数定义的 // 0xADDR 注解 vs signals.json，报告缺失/地址不匹配/未知。",
     "inputSchema": {"type": "object",
                     "properties": {"file_filter": {"type": "string"}},
                     "required": []}},
    {"name": "annotations_fix",
     "description": "批量为缺失 // 0xADDR 注解的函数定义补注解（signals 名称→地址）。dry_run 预览。",
     "inputSchema": {"type": "object",
                     "properties": {"file_filter": {"type": "string"},
                                    "dry_run": {"type": "boolean",
                                                "default": True}},
                     "required": []}},
    {"name": "globals_annotations_audit",
     "description": "审计全局变量与 IDA 数据地址的 // data: 0xADDR 注解对应。",
     "inputSchema": {"type": "object",
                     "properties": {"file_filter": {"type": "string"}},
                     "required": []}},
    {"name": "annotate_function",
     "description": "为单个函数设置/修正 // 0xADDR 注解（addr 省略则从 signals 查）。replace_body 后自动调用。",
     "inputSchema": {"type": "object",
                     "properties": {"target": {"type": "string"},
                                    "addr": {"type": "string"}},
                     "required": ["target"]}},
    {"name": "addr_lookup",
     "description": "函数/全局变量名 <-> IDA 地址 双向查询（signals.json）。",
     "inputSchema": {"type": "object",
                     "properties": {"name": {"type": "string"},
                                    "addr": {"type": "string"}},
                     "required": []}},
    {"name": "issues_add",
     "description": "记录一条错误/债务（issue 跟踪）。",
     "inputSchema": {"type": "object",
                     "properties": {"description": {"type": "string"},
                                    "target": {"type": "string"},
                                    "kind": {"type": "string",
                                             "enum": ["bug", "debt",
                                                      "blocker",
                                                      "question"]}},
                     "required": ["description"]}},
    {"name": "issues_list",
     "description": "列出 issue。支持 status/kind/target 过滤 + limit + summary（只返计数）。",
     "inputSchema": {"type": "object",
                     "properties": {"include_resolved": {"type": "boolean",
                                                         "default": False},
                                    "status": {"type": "string"},
                                    "kind": {"type": "string"},
                                    "target": {"type": "string"},
                                    "limit": {"type": "integer",
                                              "default": 50},
                                    "summary": {"type": "boolean",
                                                "default": False}},
                     "required": []}},
    {"name": "issues_resolve",
     "description": "解决一条 issue。",
     "inputSchema": {"type": "object",
                     "properties": {"id": {"type": "integer"},
                                    "resolution": {"type": "string"}},
                     "required": ["id"]}},
    {"name": "sig_lookup",
     "description": "CSP 规范 manifest 查询：函数签名的锚定来源（sig=csp 已锚定 / sig=ida-proto 未锚定）与类锚。第 6 步准入判定用。",
     "inputSchema": {"type": "object",
                     "properties": {"target": {"type": "string",
                                               "description": "0xADDR"}},
                     "required": ["target"]}},
    {"name": "backfill_accounts",
     "description": "第 6 步回填账：direct/renamed/needs-retranslation/downgrade/no-cls/no-body 计数 + 可行动清单（补锚/重翻队列）。",
     "inputSchema": {"type": "object", "properties": {}, "required": []}},
    {"name": "backfill_get",
     "description": "取某函数的回填体（bodies/*.inc）+ 账目条目（含 residual 令牌与改名映射）。",
     "inputSchema": {"type": "object",
                     "properties": {"target": {"type": "string"}},
                     "required": ["target"]}},
    {"name": "canon_regen",
     "description": "改名/补锚后重生成机械地基：gen_cpp_canon -> rewrite_member_refs -> backfill_completed 三段顺序执行（确定性、可重跑），返回逐段摘要。",
     "inputSchema": {"type": "object", "properties": {}, "required": []}},
    {"name": "csp_anchor",
     "description": "对未锚定函数地址跑 CSP 增量求解器（tools.type_infer.incremental），返回逐地址锚定状态。补 downgrade/no-cls 签名缺口的主通道。",
     "inputSchema": {"type": "object",
                     "properties": {"addrs": {"type": "array",
                                              "items": {"type": "string"}},
                                    "timeout": {"type": "integer",
                                                "default": 900}},
                     "required": ["addrs"]}},
    {"name": "compare_parse",
     "description": "解析 comparisonResult.log（REVERSE 对拍）为 Different/Same/NoneCalls 账 + 差异函数清单。Same=行为已对原版验证。",
     "inputSchema": {"type": "object",
                     "properties": {"path": {"type": "string"}},
                     "required": []}},
    {"name": "member_set",
     "description": "Member evidence entry (ctor write-map / xref proof): writes member_types authoritative anchor + member_lookup + mbn sync. Run canon_regen to propagate.",
     "inputSchema": {"type": "object",
                     "properties": {"cls": {"type": "string"},
                                    "offset": {"type": "string"},
                                    "name": {"type": "string"},
                                    "mtype": {"type": "string",
                                              "default": "void*"},
                                    "size": {"type": "integer", "default": 4},
                                    "evidence": {"type": "string"},
                                    "overwrite": {"type": "boolean",
                                                  "default": False},
                                    "entries": {"type": "array",
                                                "items": {"type": "object"}}},
                     "required": ["cls"]}},
    {"name": "reopen",
     "description": "Step-6 retranslation entry: completed -> pending. Restores IDA pseudocode block from ida_cache and clears completed. Pair with replace_body/verify_function/mark_completed.",
     "inputSchema": {"type": "object",
                     "properties": {"target": {"type": "string"}},
                     "required": ["target"]}},
    {"name": "reconcile_accounts",
     "description": "marker&completed 对账：找出 signals=completed 但树内仍带 pending 伪码块的幻影完成并（dry_run=false 时）清降为 pending。防假完成守卫的定期巡检。",
     "inputSchema": {"type": "object",
                     "properties": {"dry_run": {"type": "boolean",
                                                "default": True},
                                    "limit": {"type": "integer",
                                              "default": 100}},
                     "required": []}},
    {"name": "stats",
     "description": "工作台统计：待翻译数/分布、completed 集、issue 计数、最近构建状态。",
     "inputSchema": {"type": "object", "properties": {}, "required": []}},
    {"name": "set_signature",
     "description": "改写函数定义行（cpp）并同步 hpp 声明（按 // 0xADDR 注解定位，生成目录除外）。成员形态（Cls::Name）自动补载体 include（e4/gap2 用 csp_canon/classes.hpp，E4Recv 用对应 _e4.hpp）。改名走 rename_symbol。",
     "inputSchema": {"type": "object",
                     "properties": {"target": {"type": "string"},
                                    "signature": {"type": "string",
                                                  "description": "RetType [Cls::]Name(params)，不带 '{'"},
                                    "sync_hpp": {"type": "boolean",
                                                 "default": True},
                                    "dry_run": {"type": "boolean",
                                                "default": False}},
                     "required": ["target", "signature"]}},
    {"name": "sweep_stubs",
     "description": "批量清扫死存根：stub 文件（_generated/subs*/stub*）中 // 0xADDR 指向已完成函数或在非 stub 文件有真体注解的存根块整体移除（46D350 误命中治理）。默认 dry_run。",
     "inputSchema": {"type": "object",
                     "properties": {"file_filter": {"type": "string"},
                                    "dry_run": {"type": "boolean",
                                                "default": True},
                                    "limit": {"type": "integer",
                                              "default": 200}},
                     "required": []}},
    {"name": "harvest_loop",
     "description": "琐碎桶机械收割：pending 且 raw_decomp 重写体为单条 return <expr>;（无 this）的函数逐个 replace→verify→PASS 标记/FAIL 回滚（写入前校验块地址注解 #146；参数引用守卫 #147）。async=true 后台执行返回 job_id。返回逐函数账目。",
     "inputSchema": {"type": "object",
                     "properties": {"count": {"type": "integer",
                                              "default": 20},
                                    "max_lines": {"type": "integer",
                                                  "default": 8},
                                    "file_filter": {"type": "string"},
                                    "dry_run": {"type": "boolean",
                                                "default": False},
                                    "async": {"type": "boolean",
                                              "default": False}},
                     "required": []}},
]


def dispatch_tool(name, a):
    if name == "list_pending":
        return tool_list_pending(a.get("file_filter"), a.get("class_filter"),
                                 a.get("limit", 50))
    if name == "next_batch":
        return tool_next_batch(a.get("count", 10),
                               a.get("strategy", "core-small-first"))
    if name == "get_context":
        return tool_get_context(a["target"])
    if name == "replace_body":
        return tool_replace_body(a["target"], a["new_body"],
                                 a.get("dry_run", False))
    if name == "verify_function":
        return tool_verify(a["target"], a.get("async", False),
                           a.get("verbose", False), a.get("auto_mark", False),
                           a.get("note", ""))
    if name == "job_status":
        return tool_job_status(a.get("job_id"))
    if name == "mark_completed":
        return tool_mark_completed(a["target"], a.get("note", ""))
    if name == "function_state":
        return tool_function_state(a["target"])
    if name == "rename_symbol":
        return tool_rename_symbol(a["old_name"], a["new_name"],
                                  a.get("dry_run", False),
                                  a.get("sync_ida", True))
    if name == "rename_local":
        return tool_rename_local(a["target"], a["old_name"], a["new_name"],
                                 a.get("dry_run", False))
    if name == "build":
        return tool_build(a.get("scope", "file"), a.get("file"),
                          a.get("async", False))
    if name == "get_build_errors":
        return tool_get_build_errors(a.get("file"))
    if name == "run_gates":
        return run_gates()
    if name == "audit_access":
        return audit_access(a.get("file"))
    if name == "annotations_audit":
        return audit_annotations(a.get("file_filter"))
    if name == "annotations_fix":
        return fix_annotations(a.get("file_filter"),
                               a.get("dry_run", True))
    if name == "globals_annotations_audit":
        return audit_global_annotations(a.get("file_filter"))
    if name == "annotate_function":
        return annotate_function(a["target"], a.get("addr"))
    if name == "addr_lookup":
        return tool_addr_lookup(a.get("name"), a.get("addr"))
    if name == "issues_add":
        return tool_issues_add(a["description"], a.get("target"),
                               a.get("kind", "debt"))
    if name == "issues_list":
        return tool_issues_list(a.get("include_resolved", False),
                                a.get("status", "open"), a.get("kind"),
                                a.get("target"), a.get("limit", 50),
                                a.get("summary", False))
    if name == "issues_resolve":
        return tool_issues_resolve(a["id"], a.get("resolution", ""))
    if name == "sig_lookup":
        return tool_sig_lookup(a["target"])
    if name == "backfill_accounts":
        return tool_backfill_accounts()
    if name == "backfill_get":
        return tool_backfill_get(a["target"])
    if name == "canon_regen":
        return tool_canon_regen(a.get("async", False))
    if name == "csp_anchor":
        return tool_csp_anchor(a.get("addrs"), a.get("timeout", 900),
                               a.get("async", False))
    if name == "compare_parse":
        return tool_compare_parse(a.get("path"))
    if name == "member_set":
        if a.get("entries"):
            out = {"ok": True, "applied": [], "errors": []}
            for en in a["entries"]:
                r = tool_member_set(a["cls"], en.get("offset"), en.get("name"),
                                    en.get("mtype", "void*"),
                                    en.get("size", 4),
                                    en.get("evidence", a.get("evidence",
                                                             "manual")),
                                    a.get("overwrite", False))
                (out["applied"] if r.get("ok") else out["errors"]).append(r)
            return out
        return tool_member_set(a["cls"], a["offset"], a["name"],
                               a.get("mtype", "void*"),
                               a.get("size", 4), a.get("evidence", "manual"),
                               a.get("overwrite", False))
    if name == "reopen":
        return tool_reopen(a["target"])
    if name == "reconcile_accounts":
        return tool_reconcile_accounts(a.get("dry_run", True),
                                       a.get("limit", 100))
    if name == "stats":
        return tool_stats()
    if name == "set_signature":
        return tool_set_signature(a["target"], a["signature"],
                                  a.get("sync_hpp", True),
                                  a.get("dry_run", False))
    if name == "sweep_stubs":
        return tool_sweep_stubs(a.get("file_filter"), a.get("dry_run", True),
                                a.get("limit", 200))
    if name == "harvest_loop":
        return tool_harvest_loop(a.get("count", 20), a.get("max_lines", 8),
                                 a.get("file_filter"), a.get("dry_run", False),
                                 a.get("async", False))
    raise ValueError(f"unknown tool: {name}")


SERVER_INFO = {"name": "ra2-translate", "version": "1.1.0"}
NEWLINE = chr(10)


def handle_message(msg):
    """Process one JSON-RPC message dict -> response dict (or None)."""
    method = msg.get("method")
    mid = msg.get("id")
    if method is None or mid is None:
        return None  # notification -> ignore
    try:
        if method == "initialize":
            result = {"protocolVersion":
                      msg["params"].get("protocolVersion", "2024-11-05"),
                      "capabilities": {"tools": {"listChanged": False}},
                      "serverInfo": SERVER_INFO}
        elif method == "ping":
            result = {}
        elif method == "tools/list":
            result = {"tools": TOOLS}
        elif method == "tools/call":
            params = msg.get("params") or {}
            try:
                payload = dispatch_tool(params.get("name"),
                                         params.get("arguments") or {})
                result = {"content": [{"type": "text",
                                       "text": json.dumps(
                                           payload, ensure_ascii=False,
                                           indent=1)}],
                          "isError": False}
            except KeyError as e:
                result = {"content": [{"type": "text",
                                       "text": json.dumps(
                                           {"ok": False,
                                            "error": "missing argument "
                                            + str(e)})}],
                          "isError": True}
            except Exception as e:
                result = {"content": [{"type": "text",
                                       "text": json.dumps(
                                           {"ok": False,
                                            "error": str(e)[:300]})}],
                          "isError": True}
            else:
                # Tool-level failures (notably rename_symbol preflight or
                # collision rejection) must be MCP errors, not protocol success.
                if isinstance(payload, dict) and payload.get("ok") is False:
                    result["isError"] = True
        else:
            return {"jsonrpc": "2.0", "id": mid,
                    "error": {"code": -32601,
                              "message": "method not found"}}
        return {"jsonrpc": "2.0", "id": mid, "result": result}
    except Exception as e:
        return {"jsonrpc": "2.0", "id": mid,
                "error": {"code": -32603, "message": str(e)[:200]}}


def serve_stdio():
    """MCP stdio transport: newline-delimited JSON-RPC 2.0."""
    out = sys.stdout
    for raw in sys.stdin:
        raw = raw.strip()
        if not raw:
            continue
        try:
            msg = json.loads(raw)
        except Exception:
            continue
        resp = handle_message(msg)
        if resp is not None:
            out.write(json.dumps(resp) + NEWLINE)
            out.flush()


def serve_http(port):
    """Persistent HTTP JSON-RPC endpoint (single-shot POST per request,
    same dispatch as stdio). Health: GET / -> service info."""
    from http.server import BaseHTTPRequestHandler, HTTPServer

    class Handler(BaseHTTPRequestHandler):
        def log_message(self, fmt, *args):
            pass  # keep stdout clean

        def do_GET(self):
            body = json.dumps({"service": SERVER_INFO,
                               "endpoint": "/mcp",
                               "transport": "http-jsonrpc"}).encode()
            self.send_response(200)
            self.send_header("Content-Type", "application/json")
            self.send_header("Content-Length", str(len(body)))
            self.end_headers()
            self.wfile.write(body)

        def do_POST(self):
            try:
                length = int(self.headers.get("Content-Length") or 0)
                msg = json.loads(self.rfile.read(length) or b"{}")
                resp = handle_message(msg)
                if resp is None:
                    resp = {"jsonrpc": "2.0", "id": None,
                            "error": {"code": -32700,
                                      "message": "notification ignored"}}
                body = json.dumps(resp).encode()
                code = 200
            except Exception as e:
                body = json.dumps({"error": str(e)[:200]}).encode()
                code = 400
            self.send_response(code)
            self.send_header("Content-Type", "application/json")
            self.send_header("Content-Length", str(len(body)))
            self.end_headers()
            self.wfile.write(body)

    httpd = HTTPServer(("127.0.0.1", port), Handler)
    print(f"ra2-translate MCP HTTP service on http://127.0.0.1:{port}/mcp",
          flush=True)
    httpd.serve_forever()


def main():
    import argparse
    ap = argparse.ArgumentParser()
    ap.add_argument("--http", type=int, metavar="PORT", default=None,
                    help="run as persistent HTTP JSON-RPC service instead of stdio")
    args = ap.parse_args()
    if args.http:
        serve_http(args.http)
    else:
        serve_stdio()


if __name__ == "__main__":
    main()
