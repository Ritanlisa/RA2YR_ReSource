#!/usr/bin/env python3
"""
verify_translation.py — Use IDA MCP to verify C++ function translations against original binary.

For each function, compares structural metrics (basic blocks, branches, calls, returns)
between the IDA decompilation and the C++ implementation to detect disguised stubs.

Usage:
  python tools/verify_translation.py 0x743A50                        # By address
  python tools/verify_translation.py UnitClass::Scatter              # By name
  python tools/verify_translation.py --name UnitClass::Scatter       # Explicit --name
  python tools/verify_translation.py --all-translated                # All translated funcs
  python tools/verify_translation.py --all-translated --limit 10     # First 10 only
  python tools/verify_translation.py --file src/structure/unit.cpp   # All funcs in file
  python tools/verify_translation.py --min-ratio 0.3 --min-lines 5   # Custom thresholds
  python tools/verify_translation.py --skip-size 50                  # Skip funcs < 50B
  python tools/verify_translation.py --json                          # JSON output
  python tools/verify_translation.py --quiet                         # Only errors/warnings

Integration with check_translated_functions.py:
  python tools/check_translated_functions.py --ida-verify

Requires:
  - IDA Pro running with MCP server at 127.0.0.1:13337
  - gamemd.exe.i64 loaded in IDA
  - functions.json in injectFunctionTest/
"""

import argparse
import json
import os
import re
import select
import socket
import sys
import threading
import time
from collections import defaultdict
from pathlib import Path
from typing import Optional

# ═══════════════════════════════════════════════════
# Configuration
# ═══════════════════════════════════════════════════

MCP_HOST = os.environ.get("IDA_MCP_HOST", "127.0.0.1")
MCP_PORT = int(os.environ.get("IDA_MCP_PORT", "13337"))
MCP_TIMEOUT = float(os.environ.get("IDA_MCP_TIMEOUT", "30"))

PROJECT_ROOT = Path(__file__).parent.parent
FUNCTIONS_JSON = PROJECT_ROOT / "injectFunctionTest" / "functions.json"
SRC_DIR = PROJECT_ROOT / "src"

# Default thresholds
DEFAULT_MIN_LINES = 3          # ≥ this many real code lines
DEFAULT_LIKELY_REAL_RATIO = 0.4  # ratio above this → LIKELY REAL
DEFAULT_LIKELY_STUB_RATIO = 0.3  # ratio below this → LIKELY STUB
DEFAULT_SKIP_SIZE = 20           # skip functions smaller than this (bytes)


# ═══════════════════════════════════════════════════
# Minimal MCP SSE Client
# ═══════════════════════════════════════════════════

class MCPClient:
    """Minimal JSON-RPC client for IDA MCP over SSE transport."""

    def __init__(self, host=MCP_HOST, port=MCP_PORT):
        self.host = host
        self.port = port
        self.session_id: Optional[str] = None
        self.msg_path: Optional[str] = None
        self._sse_sock: Optional[socket.socket] = None
        self._lock = threading.Lock()
        self._responses: dict[int, dict] = {}
        self._running = False
        self._req_id = 0
        self._connected = False

    def connect(self) -> bool:
        """Open SSE connection, perform MCP handshake. Returns True on success."""
        try:
            self._sse_sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
            self._sse_sock.settimeout(10)
            self._sse_sock.connect((self.host, self.port))
        except (ConnectionRefusedError, socket.timeout, OSError) as e:
            print(f"WARNING: Cannot connect to IDA MCP at {self.host}:{self.port} — {e}",
                  file=sys.stderr)
            return False

        req = (
            f"GET /sse HTTP/1.1\r\n"
            f"Host: {self.host}:{self.port}\r\n"
            f"Accept: text/event-stream\r\n"
            f"Connection: keep-alive\r\n\r\n"
        )
        self._sse_sock.sendall(req.encode())

        data = b""
        for _ in range(200):
            ready = select.select([self._sse_sock], [], [], 0.25)
            if ready[0]:
                chunk = self._sse_sock.recv(4096)
                if not chunk:
                    break
                data += chunk
                if b"data:" in data:
                    break

        text = data.decode("utf-8", errors="replace")
        m = re.search(r"data:\s*(/sse\?session=[^\s\r\n]+)", text)
        if not m:
            print(f"WARNING: Failed to parse SSE endpoint from IDA MCP response",
                  file=sys.stderr)
            try:
                self._sse_sock.close()
            except Exception:
                pass
            self._sse_sock = None
            return False

        self.msg_path = m.group(1)
        self.session_id = self.msg_path.split("session=")[-1]

        # Drain leftover SSE data
        self._sse_sock.setblocking(False)
        try:
            while True:
                c = self._sse_sock.recv(4096)
                if not c:
                    break
        except (BlockingIOError, socket.timeout):
            pass
        self._sse_sock.setblocking(True)
        self._sse_sock.settimeout(60)

        # Start SSE reader thread
        self._running = True
        self._sse_thread = threading.Thread(target=self._sse_reader, daemon=True)
        self._sse_thread.start()

        # MCP handshake
        try:
            self._rpc("initialize", {
                "protocolVersion": "2024-11-05",
                "capabilities": {},
                "clientInfo": {"name": "verify_translation", "version": "1.0.0"}
            })
            self._rpc_notify("notifications/initialized")
        except Exception as e:
            print(f"WARNING: MCP handshake failed — {e}", file=sys.stderr)
            self.disconnect()
            return False

        self._connected = True
        return True

    def _sse_reader(self):
        """Background thread: read SSE events, dispatch JSON-RPC responses."""
        buf = b""
        while self._running and self._sse_sock:
            try:
                ready = select.select([self._sse_sock], [], [], 1.0)
                if not ready[0]:
                    continue
                chunk = self._sse_sock.recv(4096)
                if not chunk:
                    break
                buf += chunk
                while b"\n\n" in buf:
                    end = buf.index(b"\n\n") + 2
                    event = buf[:end].decode("utf-8", errors="replace")
                    buf = buf[end:]
                    for line in event.split("\n"):
                        if line.startswith("data: "):
                            try:
                                msg = json.loads(line[6:])
                                if "id" in msg:
                                    with self._lock:
                                        self._responses[msg["id"]] = msg
                            except json.JSONDecodeError:
                                pass
            except (socket.timeout, BlockingIOError):
                continue
            except Exception:
                break

    def _next_id(self) -> int:
        self._req_id += 1
        return self._req_id

    def _post(self, payload: dict) -> None:
        """HTTP POST to MCP message endpoint."""
        import http.client
        body = json.dumps(payload)
        conn = http.client.HTTPConnection(self.host, self.port, timeout=10)
        conn.request("POST", self.msg_path, body=body,
                     headers={"Content-Type": "application/json"})
        resp = conn.getresponse()
        resp.read()
        conn.close()

    def _rpc(self, method: str, params: dict, timeout: float = MCP_TIMEOUT) -> dict:
        """Send JSON-RPC request, wait for SSE response."""
        rid = self._next_id()
        self._post({"jsonrpc": "2.0", "id": rid, "method": method, "params": params})
        deadline = time.time() + timeout
        while time.time() < deadline:
            with self._lock:
                if rid in self._responses:
                    msg = self._responses.pop(rid)
                    if "error" in msg:
                        raise RuntimeError(f"RPC error: {msg['error']}")
                    return msg["result"]
            time.sleep(0.05)
        raise TimeoutError(f"RPC timeout for {method}")

    def _rpc_notify(self, method: str, params: dict | None = None) -> None:
        """Send JSON-RPC notification (no response)."""
        payload = {"jsonrpc": "2.0", "method": method}
        if params:
            payload["params"] = params
        self._post(payload)

    def call_tool(self, name: str, arguments: dict) -> dict:
        """Call an MCP tool. Returns parsed structuredContent/result."""
        result = self._rpc("tools/call", {"name": name, "arguments": arguments})
        structured = result.get("structuredContent", {})
        if isinstance(structured, dict) and "result" in structured and isinstance(structured["result"], list):
            return structured["result"]
        if "result" in structured:
            return structured["result"]
        if "content" in result and result["content"]:
            text = result["content"][0].get("text", "")
            if text:
                try:
                    return json.loads(text)
                except json.JSONDecodeError:
                    pass
        return structured

    def is_connected(self) -> bool:
        return self._connected

    def disconnect(self):
        """Close SSE connection."""
        self._running = False
        if self._sse_sock:
            try:
                self._sse_sock.close()
            except Exception:
                pass
            self._sse_sock = None
        self._connected = False


# ═══════════════════════════════════════════════════
# Name ↔ Address Resolution
# ═══════════════════════════════════════════════════

def load_functions_json():
    """Load functions.json. Returns list of function dicts + {name→entry} index."""
    with open(FUNCTIONS_JSON, "r", encoding="utf-8", errors="replace") as f:
        data = json.load(f)
    funcs = data.get("functions", [])
    name_index = {}
    for entry in funcs:
        name = entry.get("name", "")
        if name:
            name_index[name] = entry
            # Also index by just the method name (after last ::)
            if "::" in name:
                method_only = name.rsplit("::", 1)[-1]
                if method_only not in name_index:
                    name_index[method_only] = entry
    return funcs, name_index


def resolve_to_address(name_or_addr: str, name_index: dict) -> Optional[str]:
    """Resolve a function name or address to a canonical address string (0x...)."""
    if re.match(r"^0x[0-9A-Fa-f]+$", name_or_addr):
        return name_or_addr.upper()
    if name_or_addr in name_index:
        return name_index[name_or_addr]["address"].upper()
    return None


def resolve_to_name(addr: str, funcs: list) -> str:
    """Given an address, return the function name from functions.json."""
    addr_upper = addr.upper()
    for entry in funcs:
        if entry["address"].upper() == addr_upper:
            return entry.get("name", f"sub_{addr_upper}")
    return f"sub_{addr_upper}"


# ═══════════════════════════════════════════════════
# IDA Metrics Extraction
# ═══════════════════════════════════════════════════

def get_ida_metrics(client: MCPClient, addr: str) -> Optional[dict]:
    """Call IDA MCP analyze_function and extract structural metrics.

    Returns dict with: bb_count, callee_count, pseudocode_lines,
    branch_count, return_count, func_size, cyclomatic_complexity.
    Returns None on failure.
    """
    try:
        result = client.call_tool("analyze_function", {
            "addr": addr,
            "include_asm": False,
        })
    except Exception as e:
        print(f"  WARNING: IDA MCP call failed for {addr}: {e}", file=sys.stderr)
        return None

    if not result:
        return None

    # Handle the nested result structure: result = [per-function-dict] or direct dict
    if isinstance(result, list):
        data = result[0] if result else {}
    elif isinstance(result, dict):
        data = result
    else:
        return None

    func_size = data.get("size", 0)
    bb_info = data.get("basic_blocks", {})
    bb_count = bb_info.get("count", 0) if isinstance(bb_info, dict) else 0
    cyclomatic = bb_info.get("cyclomatic_complexity", 0) if isinstance(bb_info, dict) else 0

    callees = data.get("callees", [])
    callee_count = len(callees) if isinstance(callees, list) else 0

    pseudo = data.get("decompiled", "")
    if not pseudo:
        pseudo = data.get("decompilation", "")
    pseudocode_lines = len(pseudo.split("\n")) if pseudo else 0

    # Count branches in pseudocode
    branch_patterns = [
        r'\bif\s*\(', r'\belse\b', r'\bswitch\s*\(', r'\bcase\s+',
        r'\bfor\s*\(', r'\bwhile\s*\(', r'\bdo\b', r'\bgoto\s+',
    ]
    branch_count = 0
    for pat in branch_patterns:
        branch_count += len(re.findall(pat, pseudo))

    # Count returns in pseudocode
    return_count = len(re.findall(r'\breturn\b', pseudo))

    return {
        "bb_count": bb_count,
        "callee_count": callee_count,
        "pseudocode_lines": pseudocode_lines,
        "branch_count": branch_count,
        "return_count": return_count,
        "func_size": func_size,
        "cyclomatic_complexity": cyclomatic,
    }


# ═══════════════════════════════════════════════════
# C++ Function Body Extraction
# ═══════════════════════════════════════════════════

def _is_cpp_comment_or_empty(line: str) -> bool:
    stripped = line.strip()
    if not stripped:
        return True
    if stripped.startswith("//") or stripped.startswith("/*") or stripped.startswith("*"):
        return True
    if stripped.startswith("#") or stripped.startswith("extern"):
        return True
    return False


def _is_real_code_line(line: str) -> bool:
    """Check if a line has real C++ code (not comment, blank, or brace-only)."""
    code = line.split("//")[0].strip()
    if not code:
        return False
    if code in ("{", "}", "};", "};"):
        return False
    if code.startswith("#"):
        return False
    return True


def find_function_in_cpp(func_name: str) -> Optional[dict]:
    """Search src/**/*.cpp for a function by name. Returns body + metadata.

    Returns dict with: filepath, start_line, end_line, body_lines,
    real_code_lines, branch_count, return_count, call_count.
    Returns None if not found.
    """
    # Split ClassName::MethodName
    parts = func_name.split("::")
    method_name = parts[-1]
    class_name = parts[0] if len(parts) > 1 else None

    # Build search patterns
    patterns = []
    if class_name:
        patterns.append(f"{class_name}::{method_name}")
        patterns.append(f"{class_name}::{method_name}(")
    patterns.append(f"::{method_name}(")
    patterns.append(f" {method_name}(")  # global function

    # Search all .cpp files
    for cpp_file in sorted(SRC_DIR.rglob("*.cpp")):
        try:
            with open(cpp_file, "r", encoding="utf-8", errors="replace") as f:
                lines = f.readlines()
        except (OSError, UnicodeDecodeError):
            continue

        # Find the function definition
        for i, line in enumerate(lines):
            stripped = line.strip()
            code_part = stripped.split("//")[0]

            # Match function signature
            matched = False
            if class_name:
                if f"{class_name}::{method_name}(" in code_part:
                    matched = True
            else:
                if f" {method_name}(" in code_part and not stripped.startswith("//"):
                    matched = True

            if not matched:
                continue

            # Reject if it looks like a forward declaration (ends with ;)
            if stripped.rstrip().endswith(";"):
                continue

            # Find opening brace — on same line or next lines
            brace_line = -1
            if "{" in lines[i]:
                brace_line = i
            else:
                for j in range(i + 1, min(i + 5, len(lines))):
                    if "{" in lines[j] and not lines[j].strip().startswith("//"):
                        brace_line = j
                        break

            if brace_line < 0:
                continue

            # Extract body by counting braces
            depth = 0
            body_lines = []
            for j in range(brace_line, len(lines)):
                line_j = lines[j]
                code_j = line_j.split("//")[0]
                body_lines.append(line_j)
                for ch in code_j:
                    if ch == "{":
                        depth += 1
                    elif ch == "}":
                        depth -= 1
                        if depth == 0:
                            return _analyze_cpp_body(
                                body_lines, j - brace_line + 1,
                                str(cpp_file.relative_to(PROJECT_ROOT)),
                                brace_line + 1, j + 1
                            )
                if depth == 0:
                    break

    return None


def _analyze_cpp_body(body_lines: list, body_line_count: int,
                      filepath: str, start_line: int, end_line: int) -> dict:
    """Analyze a C++ function body for metrics."""
    real_code = 0
    branches = 0
    returns = 0
    calls = 0

    for line in body_lines:
        if _is_real_code_line(line):
            real_code += 1

        code_part = line.split("//")[0]

        # Count branches
        branches += len(re.findall(r'\bif\s*\(', code_part))
        branches += len(re.findall(r'\belse\b', code_part))
        branches += len(re.findall(r'\bswitch\s*\(', code_part))
        branches += len(re.findall(r'\bcase\s+', code_part))
        branches += len(re.findall(r'\bfor\s*\(', code_part))
        branches += len(re.findall(r'\bwhile\s*\(', code_part))
        branches += len(re.findall(r'\bdo\b', code_part))

        # Count returns
        returns += len(re.findall(r'\breturn\b', code_part))

        # Count function calls: identifier followed by (
        calls += len(re.findall(r'\b\w+\s*\(', code_part))
        # Subtract control flow keywords caught above
        for kw in ['if', 'for', 'while', 'switch', 'return', 'catch']:
            calls -= len(re.findall(rf'\b{kw}\s*\(', code_part))

    return {
        "filepath": filepath,
        "start_line": start_line,
        "end_line": end_line,
        "body_line_count": body_line_count,
        "real_code_lines": real_code,
        "cpp_branches": branches,
        "cpp_returns": returns,
        "cpp_calls": max(0, calls),  # clamp negative
    }


# ═══════════════════════════════════════════════════
# Comparison & Verdict
# ═══════════════════════════════════════════════════

def compare_metrics(ida: dict, cpp: dict,
                    min_lines: int, likely_real: float, likely_stub: float) -> dict:
    """Compare IDA metrics with C++ metrics and compute verdict.

    Returns dict with: verdict, ratios, details.
    """
    # Skip if no IDA data
    if ida is None:
        return {
            "verdict": "SKIP",
            "reason": "IDA MCP unavailable",
            "ratios": {},
        }

    # Compute ratios (capped at 1.0 since we're checking if C++ is "real enough")
    real_lines = cpp["real_code_lines"] if cpp else 0
    cpp_branches = cpp["cpp_branches"] if cpp else 0
    cpp_returns = cpp["cpp_returns"] if cpp else 0
    cpp_calls = cpp["cpp_calls"] if cpp else 0

    real_line_ratio = real_lines / ida["pseudocode_lines"] if ida["pseudocode_lines"] > 0 else 1.0
    branch_ratio = cpp_branches / ida["branch_count"] if ida["branch_count"] > 0 else 1.0
    callee_ratio = cpp_calls / ida["callee_count"] if ida["callee_count"] > 0 else 1.0
    return_ratio = cpp_returns / ida["return_count"] if ida["return_count"] > 0 else 1.0

    # Overall ratio: average of all non-trivial ratios (where IDA count > 0)
    ratios_list = []
    if ida["branch_count"] > 0:
        ratios_list.append(branch_ratio)
    if ida["callee_count"] > 0:
        ratios_list.append(callee_ratio)
    if ida["return_count"] > 0:
        ratios_list.append(return_ratio)

    overall_ratio = sum(ratios_list) / len(ratios_list) if ratios_list else real_line_ratio

    ratios = {
        "line_ratio": round(real_line_ratio, 2),
        "branch_ratio": round(branch_ratio, 2),
        "callee_ratio": round(callee_ratio, 2),
        "return_ratio": round(return_ratio, 2),
        "overall": round(overall_ratio, 2),
    }

    # Verdict
    if real_lines < min_lines:
        verdict = "LIKELY_STUB"
        reason = f"too few real lines ({real_lines} < {min_lines})"
    elif overall_ratio >= likely_real:
        verdict = "LIKELY_REAL"
        reason = f"ratio {overall_ratio:.2f} >= {likely_real}"
    elif overall_ratio < likely_stub:
        verdict = "LIKELY_STUB"
        reason = f"ratio {overall_ratio:.2f} < {likely_stub}"
    else:
        verdict = "BORDERLINE"
        reason = f"ratio {overall_ratio:.2f} between {likely_stub} and {likely_real}"

    return {
        "verdict": verdict,
        "reason": reason,
        "ratios": ratios,
    }


# ═══════════════════════════════════════════════════
# Main verification entry point
# ═══════════════════════════════════════════════════

def verify_function(client: MCPClient, addr: str, name: str | None = None,
                    min_lines=DEFAULT_MIN_LINES,
                    likely_real=DEFAULT_LIKELY_REAL_RATIO,
                    likely_stub=DEFAULT_LIKELY_STUB_RATIO,
                    skip_size=DEFAULT_SKIP_SIZE) -> dict:
    """Verify a single function translation.

    Args:
        client: Connected MCPClient
        addr: IDA address (e.g., "0x743A50")
        name: Function name (e.g., "UnitClass::Scatter"). Auto-resolved if None.
        min_lines: Minimum real code lines
        likely_real: Ratio threshold for LIKELY_REAL
        likely_stub: Ratio threshold for LIKELY_STUB
        skip_size: Skip functions smaller than this (bytes)

    Returns result dict with: addr, name, ida_metrics, cpp_metrics, verdict, ratios, etc.
    """
    if name is None:
        name = f"sub_{addr}"

    # Get IDA metrics
    ida = get_ida_metrics(client, addr)

    if ida is None:
        return {
            "addr": addr,
            "name": name,
            "verdict": "SKIP",
            "reason": "IDA MCP call failed",
            "ida_metrics": None,
            "cpp_metrics": None,
            "ratios": {},
        }

    # Skip tiny functions
    if ida["func_size"] < skip_size:
        return {
            "addr": addr,
            "name": name,
            "verdict": "SKIP",
            "reason": f"function too small ({ida['func_size']}B < {skip_size}B)",
            "ida_metrics": ida,
            "cpp_metrics": None,
            "ratios": {},
        }

    # Find C++ implementation
    cpp = find_function_in_cpp(name)

    if cpp is None:
        return {
            "addr": addr,
            "name": name,
            "verdict": "LIKELY_STUB",
            "reason": "no C++ implementation found in src/",
            "ida_metrics": ida,
            "cpp_metrics": None,
            "ratios": {},
        }

    # Compare
    comparison = compare_metrics(ida, cpp, min_lines, likely_real, likely_stub)

    return {
        "addr": addr,
        "name": name,
        "verdict": comparison["verdict"],
        "reason": comparison["reason"],
        "ida_metrics": ida,
        "cpp_metrics": cpp,
        "ratios": comparison["ratios"],
    }


# ═══════════════════════════════════════════════════
# Output formatting
# ═══════════════════════════════════════════════════

def format_result(result: dict, quiet: bool = False) -> str:
    """Format a single verification result for display."""
    lines = [f"{result['addr']} {result['name']}:"]

    ida = result.get("ida_metrics")
    cpp = result.get("cpp_metrics")
    ratios = result.get("ratios", {})

    if ida:
        blocks = f"{ida['bb_count']} blocks"
        cals = f"{ida['callee_count']} calls"
        brs = f"{ida['branch_count']} branches"
        rets = f"{ida['return_count']} returns"
        lines.append(f"  IDA: {ida['func_size']}B, {blocks}, {cals}, {brs}, {rets}")
    else:
        lines.append(f"  IDA: (unavailable)")

    if cpp:
        lines.append(f"  C++: {cpp['real_code_lines']} real lines, "
                     f"{cpp['cpp_calls']} calls, "
                     f"{cpp['cpp_branches']} branches, "
                     f"{cpp['cpp_returns']} returns")
    else:
        lines.append(f"  C++: (not found)")

    if ratios:
        ratio_str = f"{ratios.get('overall', '?')}"
        lines.append(f"  Ratio: {ratio_str}")

    verdict = result["verdict"]
    reason = result.get("reason", "")
    if verdict == "LIKELY_REAL":
        suffix = "PASS" if not reason.startswith("ratio") else ""
        lines.append(f"  {verdict} — {reason} {suffix}")
    elif verdict == "LIKELY_STUB":
        lines.append(f"  {verdict} — REJECTED ({reason})")
    elif verdict == "BORDERLINE":
        lines.append(f"  {verdict} — needs review ({reason})")
    else:  # SKIP
        lines.append(f"  {verdict} — {reason}")

    return "\n".join(lines)


def format_result_compact(result: dict) -> str:
    """Single-line compact format."""
    addr = result["addr"]
    name = result["name"]
    verdict = result["verdict"]
    ratios = result.get("ratios", {})
    overall = ratios.get("overall", "-")
    ida = result.get("ida_metrics", {})
    cpp = result.get("cpp_metrics", {})

    if verdict == "SKIP":
        reason = result.get("reason", "")
        return f"{addr} {name}: SKIP — {reason}"

    size = ida.get("func_size", "?") if ida else "?"
    bb = ida.get("bb_count", "?") if ida else "?"
    real = cpp.get("real_code_lines", 0) if cpp else 0
    call = cpp.get("cpp_calls", 0) if cpp else 0
    br = cpp.get("cpp_branches", 0) if cpp else 0

    return f"{addr} {name}: {size}B {bb}bb | C++:{real}L:{call}C:{br}B | ratio={overall} → {verdict}"


# ═══════════════════════════════════════════════════
# Batch modes
# ═══════════════════════════════════════════════════

def get_translated_funcs():
    """Get all translated functions from functions.json."""
    funcs, _ = load_functions_json()
    return [f for f in funcs if f.get("hook", {}).get("translated")]


def get_functions_in_file(filepath: str) -> list[dict]:
    """Extract all function names from a .cpp file, resolve to functions.json entries."""
    funcs, name_index = load_functions_json()
    results = []

    try:
        with open(filepath, "r", encoding="utf-8", errors="replace") as f:
            content = f.read()
    except (OSError, UnicodeDecodeError):
        return results

    # Find all IDA address annotations: // IDA: 0xADDR ...
    addr_pattern = re.compile(r'//\s*IDA:\s*(0x[0-9A-Fa-f]+)')
    addrs_found = set()
    for m in addr_pattern.finditer(content):
        addrs_found.add(m.group(1).upper())

    # Also try to find by function signature
    sig_pattern = re.compile(
        r'(?:[\w]+(?:\s*[*&]+)?\s+)+?'
        r'(([\w]+)::([\w~]+))'
        r'\s*\('
    )
    for m in sig_pattern.finditer(content):
        full_name = m.group(1)
        if full_name in name_index:
            addrs_found.add(name_index[full_name]["address"].upper())

    # Resolve addresses to entries
    for entry in funcs:
        if entry["address"].upper() in addrs_found:
            results.append(entry)

    return results


# ═══════════════════════════════════════════════════
# Integration: function for check_translated_functions.py
# ═══════════════════════════════════════════════════

def verify_single_by_name(client: MCPClient, func_name: str,
                          name_index: dict, **kwargs) -> dict | None:
    """Verify a single function by C++ name. For integration with check_translated_functions.py.

    Returns result dict or None if function not found / couldn't verify.
    """
    addr = resolve_to_address(func_name, name_index)
    if not addr:
        return None
    return verify_function(client, addr, func_name, **kwargs)


# ═══════════════════════════════════════════════════
# CLI
# ═══════════════════════════════════════════════════

def main():
    global FUNCTIONS_JSON, SRC_DIR
    parser = argparse.ArgumentParser(
        description="verify_translation.py — IDA-based translation verification",
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog="""
Examples:
  python tools/verify_translation.py 0x743A50
  python tools/verify_translation.py UnitClass::Scatter
  python tools/verify_translation.py --name UnitClass::Scatter
  python tools/verify_translation.py --all-translated --limit 10
  python tools/verify_translation.py --file src/structure/unit.cpp
  python tools/verify_translation.py --all-translated --min-ratio 0.35
  python tools/verify_translation.py --json
        """,
    )

    parser.add_argument("target", nargs="?", default=None,
                        help="Function address (0x...) or name (Class::Method)")
    parser.add_argument("--name", default=None,
                        help="Function name (Class::Method) to verify")
    parser.add_argument("--addr", default=None,
                        help="Function address (0x...) to verify")
    parser.add_argument("--all-translated", action="store_true",
                        help="Verify all translated functions in functions.json")
    parser.add_argument("--limit", type=int, default=0,
                        help="Limit number of functions (with --all-translated)")
    parser.add_argument("--file", default=None,
                        help="Verify all functions in a .cpp file")

    parser.add_argument("--min-lines", type=int, default=DEFAULT_MIN_LINES,
                        help=f"Minimum real code lines (default: {DEFAULT_MIN_LINES})")
    parser.add_argument("--min-ratio", type=float, default=DEFAULT_LIKELY_REAL_RATIO,
                        help=f"Ratio threshold for LIKELY_REAL (default: {DEFAULT_LIKELY_REAL_RATIO})")
    parser.add_argument("--max-stub-ratio", type=float, default=DEFAULT_LIKELY_STUB_RATIO,
                        help=f"Ratio threshold for LIKELY_STUB (default: {DEFAULT_LIKELY_STUB_RATIO})")
    parser.add_argument("--skip-size", type=int, default=DEFAULT_SKIP_SIZE,
                        help=f"Skip functions smaller than N bytes (default: {DEFAULT_SKIP_SIZE})")

    parser.add_argument("--functions-json", default=str(FUNCTIONS_JSON),
                        help="Path to functions.json")
    parser.add_argument("--src-dir", default=str(SRC_DIR),
                        help="Source directory to search for .cpp implementations")
    parser.add_argument("--json", action="store_true",
                        help="Output results as JSON")
    parser.add_argument("--quiet", action="store_true",
                        help="Only errors and warnings (compact output)")
    parser.add_argument("--compact", action="store_true",
                        help="Single-line compact output per function")

    args = parser.parse_args()

    # Override global paths if provided
    FUNCTIONS_JSON = Path(args.functions_json)
    SRC_DIR = Path(args.src_dir)

    # Build target list
    targets = []  # list of (addr, name) tuples

    if args.all_translated:
        translated = get_translated_funcs()
        if args.limit > 0:
            translated = translated[:args.limit]
        targets = [(f["address"], f["name"]) for f in translated]
        print(f"Verifying {len(targets)} translated functions...", file=sys.stderr)

    elif args.file:
        filepath = Path(args.file)
        if not filepath.is_absolute():
            filepath = PROJECT_ROOT / filepath
        entries = get_functions_in_file(str(filepath))
        targets = [(e["address"], e["name"]) for e in entries]
        print(f"Found {len(targets)} functions in {args.file}", file=sys.stderr)

    else:
        # Single target
        target_str = args.target or args.name or args.addr
        if not target_str:
            parser.print_help()
            sys.exit(1)

        funcs, name_index = load_functions_json()

        if re.match(r"^0x[0-9A-Fa-f]+$", target_str, re.IGNORECASE):
            addr = target_str.upper()
            name = resolve_to_name(addr, funcs)
            targets = [(addr, name)]
        else:
            addr = resolve_to_address(target_str, name_index)
            if addr:
                targets = [(addr, target_str)]
            else:
                print(f"ERROR: Function '{target_str}' not found in functions.json",
                      file=sys.stderr)
                sys.exit(2)

    if not targets:
        print("No functions to verify.", file=sys.stderr)
        sys.exit(0)

    # Connect to IDA MCP
    client = MCPClient()
    if not client.connect():
        print("ERROR: Cannot connect to IDA MCP. Is IDA Pro running with MCP server?",
              file=sys.stderr)
        print("       Expected at: 127.0.0.1:13337", file=sys.stderr)
        sys.exit(2)

    # Verify all targets
    results = []
    passed = 0
    failed = 0
    skipped = 0
    borderline = 0

    try:
        for addr, name in targets:
            result = verify_function(
                client, addr, name,
                min_lines=args.min_lines,
                likely_real=args.min_ratio,
                likely_stub=args.max_stub_ratio,
                skip_size=args.skip_size,
            )
            results.append(result)

            verdict = result.get("verdict", "UNKNOWN")
            if verdict == "LIKELY_REAL":
                passed += 1
            elif verdict == "LIKELY_STUB":
                failed += 1
            elif verdict == "BORDERLINE":
                borderline += 1
            elif verdict == "SKIP":
                skipped += 1

            if args.compact:
                print(format_result_compact(result))
            elif not args.quiet:
                print(format_result(result))
                print()
    finally:
        client.disconnect()

    # Summary
    if args.json:
        print(json.dumps({
            "results": results,
            "summary": {
                "total": len(results),
                "passed": passed,
                "failed": failed,
                "skipped": skipped,
                "borderline": borderline,
            }
        }, indent=2, default=str))
    else:
        if not args.quiet or args.compact:
            print(f"\n{'='*60}")
            print(f"Summary: {len(results)} total | "
                  f"{passed} PASS | {failed} FAIL | "
                  f"{borderline} BORDERLINE | {skipped} SKIP")

        if failed > 0:
            print(f"\nFAILED ({failed}):")
            for r in results:
                if r["verdict"] == "LIKELY_STUB":
                    addr = r["addr"]
                    name = r["name"]
                    reason = r.get("reason", "")
                    print(f"  {addr} {name}: {reason}")

    # Exit code
    if failed > 0:
        sys.exit(1)
    else:
        sys.exit(0)


if __name__ == "__main__":
    main()
