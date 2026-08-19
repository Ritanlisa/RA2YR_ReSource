#!/usr/bin/env python3
"""
extract_globals.py — Extract all named global variables from IDA MCP,
filter to engine globals only (no strings/RTTI/code labels),
and output structured JSON.

Connects to IDA MCP at 127.0.0.1:13337 via SSE + JSON-RPC.
Requires gamemd.exe.i64 loaded in IDA Pro.

Output: tools/globals_extracted.json
"""

import json
import re
import socket
import select
import threading
import time
import http.client
import sys
import os
from typing import Optional

# ============================================================
# Configuration
# ============================================================

MCP_HOST = "127.0.0.1"
MCP_PORT = 13337
MCP_TIMEOUT = 60  # seconds for requests
SSE_TIMEOUT = 120  # seconds for SSE read

OUTPUT_PATH = os.path.join(os.path.dirname(os.path.abspath(__file__)), "globals_extracted.json")
EVIDENCE_DIR = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", ".omo", "evidence")
EVIDENCE_PATH = os.path.join(EVIDENCE_DIR, "task-1-extraction-output.txt")

# Filter regex patterns — items matching these are EXCLUDED
FILTER_PATTERNS = [
    (re.compile(r'^a[0-9A-Z]'), 'string constant (a*)'),
    (re.compile(r'^\?\?_R'), 'RTTI (??_R*)'),
    (re.compile(r'^\?\?_7'), 'vtable (??_7*)'),
    (re.compile(r'^loc_'), 'code label (loc_*)'),
    (re.compile(r'^jpt_'), 'jump table (jpt_*)'),
    (re.compile(r'^def_'), 'defined code label (def_*)'),
    (re.compile(r'^nullsub'), 'null subroutine'),
    (re.compile(r'^byte_'), 'byte data label'),
    (re.compile(r'^word_'), 'word data label'),
    (re.compile(r'^dword_'), 'dword data label'),
    (re.compile(r'^flt_'), 'float data label'),
    (re.compile(r'^unk_'), 'unknown data label'),
]

# Batch size for type queries via py_eval
TYPE_BATCH_SIZE = 100

# ============================================================
# MCP Client — SSE transport
# ============================================================

class MCPClient:
    """Minimal JSON-RPC client over MCP SSE transport."""

    def __init__(self, host: str = MCP_HOST, port: int = MCP_PORT):
        self.host = host
        self.port = port
        self.session_id: Optional[str] = None
        self.msg_path: Optional[str] = None
        self._sse_sock: Optional[socket.socket] = None
        self._response_lock = threading.Lock()
        self._responses: dict[int, dict] = {}
        self._sse_running = False
        self._request_id = 0  # will start at 1 after initialize

    def connect(self) -> None:
        """Open SSE connection, extract session ID, start SSE reader thread."""
        self._sse_sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        self._sse_sock.connect((self.host, self.port))
        self._sse_sock.settimeout(SSE_TIMEOUT)

        # Send SSE GET request
        req = (
            f"GET /sse HTTP/1.1\r\n"
            f"Host: {self.host}:{self.port}\r\n"
            f"Accept: text/event-stream\r\n"
            f"Connection: keep-alive\r\n"
            f"\r\n"
        )
        self._sse_sock.sendall(req.encode())

        # Read SSE endpoint event
        data = b""
        for _ in range(100):
            ready = select.select([self._sse_sock], [], [], 0.5)
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
            raise ConnectionError(f"Failed to parse SSE endpoint from: {text[:500]}")
        self.msg_path = m.group(1)
        self.session_id = self.msg_path.split("session=")[-1]

        # Drain any extra SSE data already buffered
        self._sse_sock.setblocking(False)
        try:
            while True:
                c = self._sse_sock.recv(4096)
                if not c:
                    break
        except (BlockingIOError, socket.timeout):
            pass
        self._sse_sock.setblocking(True)
        self._sse_sock.settimeout(SSE_TIMEOUT)

        # Start SSE reader thread
        self._sse_running = True
        self._sse_thread = threading.Thread(target=self._sse_reader, daemon=True)
        self._sse_thread.start()

        # MCP handshake
        self._rpc("initialize", {
            "protocolVersion": "2024-11-05",
            "capabilities": {},
            "clientInfo": {"name": "extract_globals", "version": "1.0.0"}
        })
        # Send initialized notification (no response expected)
        self._rpc_notify("notifications/initialized")

    def _sse_reader(self) -> None:
        """Background thread: read SSE events, extract JSON-RPC responses."""
        buffer = b""
        while self._sse_running and self._sse_sock:
            try:
                ready = select.select([self._sse_sock], [], [], 1.0)
                if not ready[0]:
                    continue
                chunk = self._sse_sock.recv(4096)
                if not chunk:
                    break
                buffer += chunk

                # Parse SSE events: "event: message\ndata: {...}\n\n"
                while b"\n\n" in buffer:
                    event_end = buffer.index(b"\n\n") + 2
                    event_data = buffer[:event_end].decode("utf-8", errors="replace")
                    buffer = buffer[event_end:]

                    # Extract JSON from data: line
                    for line in event_data.split("\n"):
                        if line.startswith("data: "):
                            json_str = line[6:]
                            try:
                                msg = json.loads(json_str)
                                if "id" in msg and "result" in msg:
                                    msg_id = msg["id"]
                                    with self._response_lock:
                                        self._responses[msg_id] = msg
                                elif "id" in msg and "error" in msg:
                                    msg_id = msg["id"]
                                    with self._response_lock:
                                        self._responses[msg_id] = msg
                            except json.JSONDecodeError:
                                pass
            except (socket.timeout, BlockingIOError):
                continue
            except Exception:
                break

    def _next_id(self) -> int:
        self._request_id += 1
        return self._request_id

    def _post(self, payload: dict) -> None:
        """Send JSON-RPC request via HTTP POST. Non-blocking signal to SSE."""
        conn = http.client.HTTPConnection(self.host, self.port, timeout=10)
        body = json.dumps(payload)
        conn.request("POST", self.msg_path, body=body,
                     headers={"Content-Type": "application/json"})
        resp = conn.getresponse()
        resp.read()  # discard 202 Accepted body
        conn.close()

    def _rpc(self, method: str, params: dict, timeout: float = MCP_TIMEOUT) -> dict:
        """Send JSON-RPC request and wait for response via SSE."""
        req_id = self._next_id()
        payload = {"jsonrpc": "2.0", "id": req_id, "method": method, "params": params}
        self._post(payload)

        # Wait for response on SSE channel
        deadline = time.time() + timeout
        while time.time() < deadline:
            with self._response_lock:
                if req_id in self._responses:
                    resp = self._responses.pop(req_id)
                    if "error" in resp:
                        raise RuntimeError(f"RPC error (id={req_id}): {resp['error']}")
                    return resp["result"]
            time.sleep(0.05)

        raise TimeoutError(f"RPC timeout waiting for response id={req_id}, method={method}")

    def _rpc_notify(self, method: str, params: dict | None = None) -> None:
        """Send JSON-RPC notification (no response expected)."""
        payload = {"jsonrpc": "2.0", "method": method}
        if params:
            payload["params"] = params
        self._post(payload)

    def call_tool(self, name: str, arguments: dict) -> dict:
        """Call an MCP tool. Returns structuredContent dict."""
        result = self._rpc("tools/call", {"name": name, "arguments": arguments})
        # MCP returns {content: [{type: "text", text: "..."}], structuredContent: {...}}
        structured = result.get("structuredContent", {})

        # If structuredContent has a "result" field containing actual data, unwrap it
        if "result" in structured:
            raw_result = structured["result"]
            # entity_query returns result=[{...}] (list of query results)
            if isinstance(raw_result, list):
                return raw_result
            # py_eval returns result="None" (string), return full structured content
            return structured

        # Fallback: try content[0].text as JSON
        if "content" in result and len(result["content"]) > 0:
            text = result["content"][0].get("text", "")
            if text:
                try:
                    return json.loads(text)
                except json.JSONDecodeError:
                    pass
        return structured

    def disconnect(self) -> None:
        """Close SSE connection."""
        self._sse_running = False
        if self._sse_sock:
            try:
                self._sse_sock.close()
            except Exception:
                pass
            self._sse_sock = None


# ============================================================
# Filter logic
# ============================================================

def should_include(name: str) -> tuple[bool, str]:
    """Check if a global should be included. Returns (include, reason)."""
    for pattern, reason in FILTER_PATTERNS:
        if pattern.match(name):
            return False, reason
    return True, ""


# ============================================================
# Globals extraction
# ============================================================

def fetch_all_globals(client: MCPClient) -> list[dict]:
    """Fetch all named globals from .data segment via paginated entity_query.
    
    Handles IDA MCP server quirk: some pages return fewer items than requested
    even when more exist, and advance next_offset by the full count anyway.
    When this happens, we retry from (offset + actual_returned) with smaller
    page sizes to avoid skipping items.
    """
    all_globals = []
    offset = 0
    page_sizes = [500, 200, 100, 50, 10]  # fallback sizes (no larger than 500)
    total_reported = None
    stalled_count = 0

    while True:
        actual_returned = 0
        used_next_offset = None

        for ps in page_sizes:
            result = client.call_tool("entity_query", {
                "queries": [{
                    "kind": "globals",
                    "segment": ".data",
                    "count": ps,
                    "offset": offset,
                    "fields": ["addr", "name", "size", "segment"]
                }]
            })

            batch = result[0]["data"]
            server_next_offset = result[0].get("next_offset")
            if total_reported is None:
                total_reported = result[0].get("total", 0)

            actual_returned = len(batch)
            all_globals.extend(batch)

            if actual_returned >= ps or server_next_offset is None:
                # Normal: got all we asked for, or reached the end
                used_next_offset = server_next_offset
                offset = server_next_offset if server_next_offset is not None else (offset + actual_returned)
                break
            else:
                # Server returned fewer than requested — don't trust server_next_offset,
                # advance by actual items returned: offset += actual_returned
                old_offset = offset
                offset = offset + actual_returned
                print(f"    Short page at 0x{old_offset:X}: got {actual_returned}/{ps}, "
                      f"server_next={server_next_offset}, continuing from 0x{offset:X}")

        if actual_returned == 0:
            stalled_count += 1
            if stalled_count > 10:
                print(f"  ERROR: Stalled at offset {offset} after 10 zero-return pages. Aborting.")
                break
            # Try advancing by the server's reported offset, or by 50
            offset = offset + 50
            print(f"  Zero items at offset, trying {offset}")
            continue
        else:
            stalled_count = 0

        print(f"  Accumulated {len(all_globals)}/{total_reported} globals "
              f"(last batch: {actual_returned})")
        
        if used_next_offset is None:
            break
        if total_reported and offset >= total_reported:
            break
        if len(all_globals) >= 20000:
            print("  WARNING: Reached safety limit of 20000 globals")
            break

    return all_globals


def extract_type_info(client: MCPClient, addrs: list[str]) -> dict[str, dict]:
    """Batch-extract type info for a list of addresses via py_eval."""
    if not addrs:
        return {}

    addr_list = ", ".join(addrs)
    code = f"""
import ida_nalt, ida_typeinf, json
results = []
for addr in [{addr_list}]:
    tif = ida_typeinf.tinfo_t()
    has_type = ida_nalt.get_tinfo(tif, addr)
    results.append({{
        "addr": hex(addr),
        "has_type": has_type,
        "type_str": tif.dstr() if has_type else None
    }})
print(json.dumps(results))
"""
    try:
        result = client.call_tool("py_eval", {"code": code})
        # call_tool returns structuredContent dict for py_eval
        # stdout contains the JSON-printed results
        stdout = result.get("stdout", "") if isinstance(result, dict) else ""
        if stdout:
            items = json.loads(stdout)
            return {item["addr"]: item for item in items}
    except Exception as e:
        print(f"  WARNING: type batch query failed: {e}")
    return {}


# ============================================================
# Verification
# ============================================================

def verify_no_string_leaks(output_path: str) -> int:
    """Check that no string constants leaked through the filter.
    Returns count of leaks (should be 0)."""
    with open(output_path, "r") as f:
        data = json.load(f)
    leaks = [x for x in data if re.match(r'^a[0-9A-Z]', x["name"])]
    for leak in leaks[:10]:
        print(f"  LEAK: {leak['name']} @ {leak['addr']}")
    if len(leaks) > 10:
        print(f"  ... and {len(leaks) - 10} more leaks")
    return len(leaks)


def print_summary(globals_data: list[dict], typed_count: int) -> None:
    """Print summary statistics."""
    total = len(globals_data)
    segments = {}
    for g in globals_data:
        seg = g["segment"]
        segments[seg] = segments.get(seg, 0) + 1

    sizes = [g["size"] for g in globals_data]
    print(f"\n{'='*60}")
    print(f"SUMMARY")
    print(f"{'='*60}")
    print(f"  Total engine globals: {total}")
    print(f"  With IDA type info: {typed_count}")
    print(f"  Without type info: {total - typed_count}")
    print(f"  Segments: {segments}")
    if sizes:
        print(f"  Size range: {min(sizes)} - {max(sizes)} bytes")
        print(f"  Total bytes: {sum(sizes)}")
    print(f"{'='*60}")


# ============================================================
# Main
# ============================================================

def main():
    print("=" * 60)
    print("extract_globals.py — Engine Global Variable Extractor")
    print("=" * 60)

    # --- Connect ---
    print("\n[1/5] Connecting to IDA MCP...")
    client = MCPClient()
    try:
        client.connect()
        print(f"  Connected. Session: {client.session_id[:8]}...")
        print(f"  Message endpoint: {client.msg_path}")
    except ConnectionError as e:
        print(f"\nERROR: Cannot connect to IDA MCP at {MCP_HOST}:{MCP_PORT}")
        print(f"  {e}")
        print(f"\n  Make sure IDA Pro is running with gamemd.exe.i64 loaded")
        print(f"  and the MCP server is listening on port {MCP_PORT}.")
        sys.exit(1)
    except Exception as e:
        print(f"\nERROR: Connection failed: {e}")
        sys.exit(1)

    # --- Fetch all globals ---
    print("\n[2/5] Fetching all named globals from .data...")
    try:
        all_globals = fetch_all_globals(client)
        print(f"  Total raw globals fetched: {len(all_globals)}")
    except Exception as e:
        print(f"\nERROR: Failed to fetch globals: {e}")
        client.disconnect()
        sys.exit(1)

    if not all_globals:
        print("\nWARNING: No globals found in .data segment. Is the IDB properly loaded?")
        client.disconnect()
        sys.exit(1)

    # --- Filter ---
    print("\n[3/5] Filtering: removing strings, RTTI, code labels...")
    filtered_globals = []
    filter_stats = {}
    for g in all_globals:
        include, reason = should_include(g["name"])
        if include:
            filtered_globals.append(g)
        else:
            filter_stats[reason] = filter_stats.get(reason, 0) + 1

    print(f"  Engine globals kept: {len(filtered_globals)}")
    for reason, count in sorted(filter_stats.items(), key=lambda x: -x[1]):
        print(f"    Excluded — {reason}: {count}")

    # --- Extract type info ---
    print(f"\n[4/5] Extracting type info for {len(filtered_globals)} globals...")
    typed_count = 0
    addrs = [int(g["addr"], 16) for g in filtered_globals]
    type_map: dict[str, dict] = {}

    for batch_start in range(0, len(addrs), TYPE_BATCH_SIZE):
        batch = addrs[batch_start:batch_start + TYPE_BATCH_SIZE]
        batch_strs = [hex(a) for a in batch]
        batch_types = extract_type_info(client, batch_strs)
        type_map.update(batch_types)
        typed_count += len(batch_types)
        print(f"  Batch {batch_start // TYPE_BATCH_SIZE + 1}: "
              f"got types for {len(batch_types)}/{len(batch)} globals")
        # Small delay between batches to avoid overwhelming IDA
        if batch_start + TYPE_BATCH_SIZE < len(addrs):
            time.sleep(0.1)

    # --- Build output ---
    print("\n[5/5] Building output...")
    output = []
    for g in filtered_globals:
        addr_hex = g["addr"]
        entry = {
            "name": g["name"],
            "addr": addr_hex,
            "size": g["size"],
            "segment": g.get("segment", ".data"),
            "ida_type": None,
            "has_type": False,
        }
        if addr_hex in type_map:
            ti = type_map[addr_hex]
            entry["has_type"] = ti.get("has_type", False)
            if entry["has_type"]:
                entry["ida_type"] = ti.get("type_str")

        output.append(entry)

    # Sort by address for deterministic output
    output.sort(key=lambda x: int(x["addr"], 16))

    # --- Write output ---
    with open(OUTPUT_PATH, "w") as f:
        json.dump(output, f, indent=2)
    print(f"  Output: {OUTPUT_PATH} ({len(output)} entries)")

    # --- Print summary ---
    actual_typed = sum(1 for g in output if g["has_type"])
    print_summary(output, actual_typed)

    # --- Verify no string leaks ---
    print("\n--- Verification: string leak check ---")
    leak_count = verify_no_string_leaks(OUTPUT_PATH)
    if leak_count == 0:
        print("  PASS: No string constants in output.")
    else:
        print(f"  FAIL: {leak_count} string constants leaked through filter!")

    # --- Second verification: RTTI leaks ---
    with open(OUTPUT_PATH, "r") as f:
        data = json.load(f)
    rtti_leaks = [x for x in data if x["name"].startswith("??_R")]
    print(f"  RTTI leak check: {len(rtti_leaks)} (expect 0)")
    if rtti_leaks:
        print(f"  FAIL: {len(rtti_leaks)} RTTI entries leaked!")

    # --- Save evidence ---
    os.makedirs(EVIDENCE_DIR, exist_ok=True)
    with open(EVIDENCE_PATH, "w") as f:
        f.write(f"Task 1: extract_globals.py extraction evidence\n")
        f.write(f"{'='*60}\n")
        f.write(f"Timestamp: {time.strftime('%Y-%m-%d %H:%M:%S')}\n")
        f.write(f"Raw globals fetched: {len(all_globals)}\n")
        f.write(f"Engine globals kept: {len(output)}\n")
        f.write(f"With type info: {actual_typed}\n")
        f.write(f"Without type info: {len(output) - actual_typed}\n")
        f.write(f"String leak count: {leak_count}\n")
        f.write(f"RTTI leak count: {len(rtti_leaks)}\n")
        f.write(f"\nFilter stats:\n")
        for reason, count in sorted(filter_stats.items(), key=lambda x: -x[1]):
            f.write(f"  {reason}: {count}\n")
        f.write(f"\nTop 10 entries:\n")
        for entry in output[:10]:
            f.write(f"  {entry['name']} @ {entry['addr']} ({entry['size']}B)"
                    f" type={'yes' if entry['has_type'] else 'no'}"
                    f"{' -> ' + entry['ida_type'] if entry['ida_type'] else ''}\n")
    print(f"\n  Evidence saved: {EVIDENCE_PATH}")

    # --- Disconnect ---
    client.disconnect()
    print("\nDone. IDA MCP disconnected.")

    return 0 if leak_count == 0 and len(rtti_leaks) == 0 else 1


if __name__ == "__main__":
    sys.exit(main())
