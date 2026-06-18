"""
Batch decompile 15 medium functions from structure/ stubs priority matrix.
Connects to IDA Pro MCP at 127.0.0.1:13337.
"""
import json, urllib.request, threading, time, sys, os

SSE_URL = "http://127.0.0.1:13337/sse"

FUNCTIONS = [
    ("0x4a1d50", "4a1d50"),
    ("0x521b00", "521b00"),
    ("0x6b4f00", "6b4f00"),
    ("0x71a700", "71a700"),
    ("0x772ac0", "772ac0"),
    ("0x521c40", "521c40"),
    ("0x458db0", "458db0"),
    ("0x459c00", "459c00"),
    ("0x4c5a80", "4c5a80"),
    ("0x6ce8d0", "6ce8d0"),
    ("0x7105e0", "7105e0"),
    ("0x41c210", "41c210"),
    ("0x459f20", "459f20"),
    ("0x523350", "523350"),
    ("0x5f5c60", "5f5c60"),
]

class IdaMCPClient:
    def __init__(self):
        self.session_url = None
        self.lock = threading.Lock()
        self.responses = {}
        self.next_id = 100
        self._running = True

    def connect(self):
        ev = threading.Event()
        def sse_thread():
            req = urllib.request.Request(SSE_URL, headers={"Accept": "text/event-stream"})
            resp = urllib.request.urlopen(req, timeout=120)
            while self._running:
                try:
                    line = resp.readline().decode("utf-8").strip()
                    if not line: continue
                    if line.startswith("data: "):
                        data = line[6:]
                        if self.session_url is None:
                            self.session_url = "http://127.0.0.1:13337" + data
                            ev.set()
                        else:
                            try:
                                msg = json.loads(data)
                                with self.lock:
                                    self.responses[msg.get("id")] = msg
                            except: pass
                except: break
        self._sse_thread = threading.Thread(target=sse_thread, daemon=True)
        self._sse_thread.start()
        ev.wait(timeout=10)
        if self.session_url is None:
            raise RuntimeError("No session URL from IDA MCP")

    def call_tool(self, tool_name, args):
        rid = self.next_id
        self.next_id += 1
        body = json.dumps({
            "jsonrpc": "2.0", "id": rid,
            "method": "tools/call",
            "params": {"name": tool_name, "arguments": args}
        }).encode()
        req = urllib.request.Request(self.session_url, data=body, headers={"Content-Type":"application/json"})
        urllib.request.urlopen(req).read()
        deadline = time.time() + 120
        while time.time() < deadline:
            with self.lock:
                if rid in self.responses:
                    msg = self.responses.pop(rid)
                    return msg.get("result"), msg.get("error")
            time.sleep(0.2)
        return None, {"message": "Timeout"}

    def decompile_one(self, addr_hex):
        result, error = self.call_tool("decompile", {"addr": addr_hex})
        if error:
            return None, error.get("message", str(error))
        if result is None:
            return None, "No result"
        content = result.get("content", [])
        if not content:
            return None, "No content in result"
        text = content[0].get("text", "")
        if not text:
            return None, "Empty text"
        try:
            parsed = json.loads(text)
        except:
            return text, None
        code = parsed.get("code")
        err = parsed.get("error")
        if err:
            return None, err
        return code, None

    def close(self):
        self._running = False

def main():
    client = IdaMCPClient()
    print("Connecting to IDA MCP...", flush=True)
    client.connect()
    print("Connected.", flush=True)

    print("Warming up (wait_auto_analysis + init_hexrays + build_caches)...", flush=True)
    client.call_tool("server_warmup", {"wait_auto_analysis": True, "init_hexrays": True, "build_caches": True})
    print("Warmup done.", flush=True)

    results = {}
    total = len(FUNCTIONS)
    for idx, (addr, name) in enumerate(FUNCTIONS):
        print(f"[{idx+1}/{total}] {addr}...", end=" ", flush=True)
        code, error = client.decompile_one(addr)
        if error:
            print(f"ERROR: {error}", flush=True)
            results[addr] = {"error": error, "name": name}
        elif code:
            print(f"{len(code)} chars", flush=True)
            results[addr] = {"name": name, "code": code}
        else:
            print("No output", flush=True)
            results[addr] = {"error": "No output", "name": name}
        time.sleep(0.3)

    # Save
    out_path = r"D:\RA2YR_ReSource\.omo\evidence\structure_decompilations_15.json"
    with open(out_path, "w", encoding="utf-8") as f:
        json.dump(results, f, indent=2, ensure_ascii=False)
    print(f"\nSaved: {out_path}", flush=True)

    # Print
    success = 0
    err_count = 0
    for addr, name in FUNCTIONS:
        entry = results.get(addr, {})
        code = entry.get("code")
        err = entry.get("error")

        print(f'\n{"="*80}')
        print(f"  {name} @ {addr}")
        print(f'{"="*80}')
        if err:
            print(f"  ERROR: {err}")
            err_count += 1
        elif code:
            if len(code) > 30000:
                print(code[:30000])
                print(f"\n  ... [{len(code)} total chars]")
            else:
                print(code)
            success += 1
        else:
            print(f"  No data. Keys: {list(entry.keys())}")
            err_count += 1

    print(f'\n{"="*80}')
    print(f"RESULTS: Total={total}, Success={success}, Errors={err_count}")
    client.close()

if __name__ == "__main__":
    main()
