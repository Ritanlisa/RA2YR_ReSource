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
import pathlib
import re
import subprocess
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
    "BuildingTypeClass": [(3700, 3950,
                           "shifted: 3808=PowerBonus(not DoorStages), 3816=ExtraPowerBonus, 3840=DoorStages")],
}
CORE_CLASSES = ["ObjectClass", "TechnoClass", "FootClass", "BuildingClass",
                "UnitClass", "InfantryClass", "AircraftClass"]

DEF_HEAD = re.compile(r'^\s*[\w:<>\*&\[\]]+(?:\s+[\w:<>\*&\[\]]+)*\s+([\w:~]+)::([\w~]+)\s*\(')
ADDR_COMMENT = re.compile(r'^//\s*0x([0-9A-Fa-f]{6,8})\s*$')
ADDR_IN_COMMENT = re.compile(r'0x([0-9A-Fa-f]{6,8})')

_pending_index = None
_snapshot_index = None
_signals = None
_signals_mtime = None
_member_lookup = None
_annot_cache = {"fn": None, "glob": None}


def _read_latin1(path):
    return pathlib.Path(path).read_bytes().decode("latin-1")


# ============================================================================
# pending-function index
# ============================================================================
def build_pending_index():
    global _pending_index
    if _pending_index is not None:
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
    sig = s[:-1].strip()
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
        _signals = json.load(open(SIGNALS, encoding="utf-8")) if SIGNALS.exists() else {"symbols": {}}
        _signals_mtime = mtime
    return _signals


def member_lookup():
    global _member_lookup
    if _member_lookup is None:
        _member_lookup = json.load(open(MEMBER_LOOKUP, encoding="utf-8")) if MEMBER_LOOKUP.exists() else {}
    return _member_lookup


def resolve_target(target):
    pending = build_pending_index()
    if target.lower().startswith("0x"):
        t = target.lower()
        for e in pending:
            if e["address"] == t:
                return e
        ent = signals()["symbols"].get(t)
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
    for m in re.finditer(r'\(\s*\w+\s*\*\s*\*\s*\)\s*\(\s*\*?\w+\s*\+\s*(\d+)', code):
        offs.add(int(m.group(1)))
    for m in re.finditer(r'\[\s*\w+\s*\+\s*(\d{3,5})\s*\]', code):
        offs.add(int(m.group(1)))
    for m in re.finditer(r'\*\(\s*_BYTE\s*\*\)\s*\w+\s*\+\s*(\d+)', code):
        offs.add(int(m.group(1)))
    for m in re.finditer(r'\bthis\s*\+\s*(\d+)\b', code):
        offs.add(int(m.group(1)) * 4)
    return sorted(offs)


# ============================================================================
# build / compile / verify / audit
# ============================================================================
ERROR_RE = re.compile(r'^[^\s]*?([A-Za-z0-9_/\\.]+\.cpp)\((\d+),(\d+)\): error (C\d+): (.*?)(?: \[D:|$)')


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


def run_verify(addr):
    proc = subprocess.run(
        [sys.executable, "tools/verify_execution_flow.py", addr],
        capture_output=True, text=True, encoding="utf-8", errors="replace",
        timeout=900, cwd=str(PROJECT_ROOT))
    out = (proc.stdout or "") + (proc.stderr or "")
    reason = ""
    for ln in out.split("\n"):
        s = ln.strip()
        if s.startswith(("FAIL:", "missing:", "SKIP")):
            reason += s + " | "
    return {"verdict": "PASS" if proc.returncode == 0 else "FAIL",
            "detail": reason[:500], "exit": proc.returncode,
            "output_tail": "\n".join(out.split("\n")[-12:])}


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


def _find_annotation(lines, def_idx):
    j = def_idx - 1
    steps = 0
    while j >= 0 and steps < 12:
        s = lines[j].strip()
        if s.startswith("//"):
            m = ADDR_IN_COMMENT.search(s)
            if m:
                return "0x" + m.group(1).lower(), j
        elif s != "":
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
        for i, ln in enumerate(lines):
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
        for i, ln in enumerate(lines):
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
    for p in sorted(SRC.rglob("*.cpp")) + sorted(SRC.rglob("*.hpp")):
        rel = str(p.relative_to(PROJECT_ROOT)).replace("\\", "/")
        if (file_filter and file_filter not in rel) or "_generated" in rel:
            continue
        lines = _read_latin1(p).split("\n")
        for i, ln in enumerate(lines):
            code, _, comment = ln.partition("//")
            m = re.match(r'^\s*(?:extern\s+|static\s+)?[\w:<>\*&\s]+\b'
                         r'([A-Z]\w{3,}|g_\w+)\s*(?:=|;|\[)', code)
            if not m:
                continue
            name = m.group(1)
            expected = gidx.get(name)
            if not expected:
                continue
            if ADDR_IN_COMMENT.search(comment):
                matched += 1
            else:
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
    lines[marker_idx:end + 1] = new_body.split("\n")
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
    if code:
        cls = entry.get("class") or ""
        offs = pseudocode_offsets(code)
        til = ida_til_members(cls, min(offs), max(offs)) if offs else None
        til_map = dict(til) if til else {}
        ml = member_lookup().get(cls, {})
        warnings = []
        for lo, hi, msg in KNOWN_BAD_MEMBER_ZONES.get(cls, []):
            if any(lo <= o <= hi for o in offs):
                warnings.append(f"member_lookup {cls}+{lo}..{hi}: {msg}")
        mapping = {}
        for o in offs:
            if o in til_map:
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
    return result


def tool_replace_body(target, new_body, dry_run):
    entry = resolve_target(target)
    if entry is None or not entry.get("file"):
        return {"ok": False,
                "error": f"target not resolvable to pending function: {target}"}
    return replace_pseudocode(entry, new_body, dry_run)


def tool_verify(target):
    entry = resolve_target(target)
    if entry is None:
        return {"ok": False, "error": f"target not found: {target}"}
    addr = entry.get("address")
    if not addr:
        return {"ok": False, "error": "no address; verify needs 0xADDR"}
    return run_verify(addr)


def tool_mark_completed(target, note=""):
    entry = resolve_target(target)
    if entry is None or not entry.get("address"):
        return {"ok": False, "error": "target needs an address"}
    sig = signals()
    key = entry["address"].lower()
    e = sig["symbols"].get(key)
    if not e:
        return {"ok": False, "error": f"no signals entry at {key}"}
    e["completed"] = True
    if note:
        e["note"] = note
    SIGNALS.write_text(json.dumps(sig, ensure_ascii=False, indent=1),
                       encoding="utf-8")
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
    cmd = [sys.executable, "tools/rename_symbol.py"]
    if dry_run:
        cmd.append("--dry-run")
    if not sync_ida:
        cmd.append("--no-ida")
    cmd += [old_name, new_name]
    proc = subprocess.run(cmd, capture_output=True, text=True,
                          encoding="utf-8", errors="replace", timeout=600,
                          cwd=str(PROJECT_ROOT))
    return {"exit": proc.returncode,
            "output": ((proc.stdout or "") + (proc.stderr or ""))[-3000:]}


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


def tool_build(scope="file", file=None):
    if scope == "file":
        if not file:
            return {"ok": False, "error": "scope=file requires 'file'"}
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


def tool_issues_add(description, target=None, kind="debt"):
    st = load_state()
    iss = {"id": st["next_issue_id"], "description": description,
           "target": target, "kind": kind, "status": "open"}
    st["issues"].append(iss)
    st["next_issue_id"] += 1
    save_state(st)
    return {"ok": True, "issue": iss}


def tool_issues_list(include_resolved=False):
    st = load_state()
    out = [i for i in st["issues"]
           if include_resolved or i["status"] == "open"]
    return {"count": len(out), "issues": out}


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
     "description": "对单个函数运行 exec-flow CFG 校验（需地址）。返回 PASS/FAIL 与缺失事件。",
     "inputSchema": {"type": "object",
                     "properties": {"target": {"type": "string"}},
                     "required": ["target"]}},
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
     "description": "编译验证。scope=file 单 TU 快速验证（秒级）；scope=all 全项目 MSBuild（分钟级，错误按文件分组）。",
     "inputSchema": {"type": "object",
                     "properties": {"scope": {"type": "string",
                                              "enum": ["file", "all"],
                                              "default": "file"},
                                    "file": {"type": "string"}},
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
     "description": "列出 issue（可含已解决）。",
     "inputSchema": {"type": "object",
                     "properties": {"include_resolved": {"type": "boolean",
                                                        "default": False}},
                     "required": []}},
    {"name": "issues_resolve",
     "description": "解决一条 issue。",
     "inputSchema": {"type": "object",
                     "properties": {"id": {"type": "integer"},
                                    "resolution": {"type": "string"}},
                     "required": ["id"]}},
    {"name": "stats",
     "description": "工作台统计：待翻译数/分布、completed 集、issue 计数、最近构建状态。",
     "inputSchema": {"type": "object", "properties": {}, "required": []}},
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
        return tool_verify(a["target"])
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
        return tool_build(a.get("scope", "file"), a.get("file"))
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
        return tool_issues_list(a.get("include_resolved", False))
    if name == "issues_resolve":
        return tool_issues_resolve(a["id"], a.get("resolution", ""))
    if name == "stats":
        return tool_stats()
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
