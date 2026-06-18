import json, urllib.request, threading, time, sys, os

SSE_URL = "http://127.0.0.1:13337/sse"

FUNCTIONS = [
    ("0x51D6F0", "ProcessDeployAction"),
    ("0x5200B0", "ProcessIdleDeploy"),
    ("0x521B60", "CanInitiateDeploy"),
    ("0x5221D0", "CanDeployAtCell"),
    ("0x521EB0", "CheckDeployPath"),
    ("0x522FE0", "CreateDeployLocomotor"),
    ("0x522C00", "StartBombDeploy"),
    ("0x5228D0", "IsBombDeployMission"),
    ("0x514310", "DeployAnimation"),
    ("0x521D80", "ComputeDeploySpeedFactor"),
    ("0x5218E0", "GetDeployWeaponIndex"),
    ("0x4598A0", "updateDeployAnimation"),
    ("0x522600", "FireAtTargetPos"),
    ("0x51DF60", "FireWeaponWithCleanup"),
    ("0x51C8B0", "GetFireError"),
    ("0x5227F0", "CanAttackTarget"),
    ("0x51CDB0", "ProcessIdleAction"),
    ("0x5239D0", "ProcessAnimation"),
    ("0x521320", "GetIdleTimer"),
    ("0x5216D0", "CanMoveFreely"),
    ("0x484D60", "CanMoveThroughCell"),
    ("0x51DFF0", "MoveToCell"),
    ("0x51DF10", "CancelMovement"),
    ("0x51B350", "CalcMoveTarget"),
    ("0x51D0D0", "FindMoveTarget"),
    ("0x418E20", "FindNearbyCell"),
    ("0x51F330", "FindPathToBuilding"),
    ("0x51F3E0", "EnterBuilding"),
    ("0x51F540", "ProcessEnterOrRepair"),
    ("0x522BC0", "CanEnterBuilding"),
    ("0x51F620", "FindIdleMovePosition"),
    ("0x51F640", "FindIdleAITarget"),
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
            raise RuntimeError("No session URL")

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
        return None, {"message": f"Timeout rid={rid}"}

    def decompile_one(self, addr_hex):
        """Decompile one function, returns (code_or_None, error_or_None)."""
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
            return text, None  # raw text
        code = parsed.get("code")
        err = parsed.get("error")
        if err:
            return None, err
        return code, None

    def close(self):
        self._running = True

def main():
    client = IdaMCPClient()
    print("Connecting to IDA MCP...", flush=True)
    client.connect()
    print("Connected.", flush=True)

    # Warmup
    print("Warming up...", flush=True)
    client.call_tool("server_warmup", {"wait_auto_analysis": True, "init_hexrays": True, "build_caches": True})
    print("Warmup done.", flush=True)

    # Decompile all
    results = {}
    total = len(FUNCTIONS)
    for idx, (addr, name) in enumerate(FUNCTIONS):
        print(f"[{idx+1}/{total}] {name} @ {addr}...", end=" ", flush=True)
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

    # Save to JSON
    out_path = r"D:\RA2YR_ReSource\.omo\evidence\infantry_decompilations.json"
    with open(out_path, "w", encoding="utf-8") as f:
        json.dump(results, f, indent=2, ensure_ascii=False)
    print(f"\nSaved: {out_path}", flush=True)

    # Print all pseudocode
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
            if len(code) > 25000:
                print(code[:25000])
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
