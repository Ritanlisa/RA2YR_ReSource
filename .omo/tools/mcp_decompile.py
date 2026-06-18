import json, socket, select, http.client, time, re, sys, threading

HOST, PORT = "127.0.0.1", 13337

class MCP:
    def __init__(self):
        self.sock = None; self.msg_path = None; self._id = 0
        self._responses = {}; self._lock = threading.Lock()
        self._running = False

    def connect(self):
        self.sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        self.sock.settimeout(30)
        self.sock.connect((HOST, PORT))
        req = "GET /sse HTTP/1.1\r\nHost: {}:{}\r\nAccept: text/event-stream\r\nConnection: keep-alive\r\n\r\n".format(HOST, PORT)
        self.sock.sendall(req.encode())
        data = b""
        for _ in range(100):
            ready = select.select([self.sock], [], [], 0.5)
            if ready[0]:
                chunk = self.sock.recv(4096)
                if chunk: data += chunk
                if b"data:" in data: break
        text = data.decode("utf-8", errors="replace")
        m = re.search(r"data:\s*(/sse\?session=[^\s\r\n]+)", text)
        if not m: raise ConnectionError("No session: " + text[:300])
        self.msg_path = m.group(1)
        self.sock.setblocking(False)
        try:
            while True: _ = self.sock.recv(4096)
        except: pass
        self.sock.setblocking(True); self.sock.settimeout(60)
        self._running = True
        self._reader = threading.Thread(target=self._read_sse, daemon=True)
        self._reader.start()
        self._rpc("initialize", {"protocolVersion":"2024-11-05","capabilities":{},"clientInfo":{"name":"decompile","version":"1.0"}})
        self._rpc_notify("notifications/initialized")

    def _read_sse(self):
        buf = b""
        while self._running and self.sock:
            try:
                ready = select.select([self.sock], [], [], 1.0)
                if not ready[0]: continue
                chunk = self.sock.recv(16384)
                if not chunk: break
                buf += chunk
                while b"\n\n" in buf:
                    end = buf.index(b"\n\n") + 2
                    ev = buf[:end].decode("utf-8", errors="replace")
                    buf = buf[end:]
                    for line in ev.split("\n"):
                        if line.startswith("data: "):
                            try:
                                msg = json.loads(line[6:])
                                mid = msg.get("id")
                                if mid is not None:
                                    with self._lock: self._responses[mid] = msg
                            except: pass
            except socket.timeout: continue
            except: break

    def _next_id(self): self._id += 1; return self._id

    def _rpc(self, method, params=None, timeout=60):
        rid = self._next_id()
        if params is None: params = {}
        payload = {"jsonrpc":"2.0","id":rid,"method":method,"params":params}
        conn = http.client.HTTPConnection(HOST, PORT, timeout=10)
        conn.request("POST", self.msg_path, json.dumps(payload), {"Content-Type":"application/json"})
        conn.getresponse().read(); conn.close()
        deadline = time.time() + timeout
        while time.time() < deadline:
            with self._lock:
                if rid in self._responses:
                    resp = self._responses.pop(rid)
                    err = resp.get("error")
                    if err: raise RuntimeError("RPC: " + json.dumps(err))
                    return resp["result"]
            time.sleep(0.05)
        raise TimeoutError("timeout rid=%d method=%s" % (rid, method))

    def _rpc_notify(self, method, params=None):
        payload = {"jsonrpc":"2.0","method":method}
        if params: payload["params"] = params
        conn = http.client.HTTPConnection(HOST, PORT, timeout=10)
        conn.request("POST", self.msg_path, json.dumps(payload), {"Content-Type":"application/json"})
        conn.getresponse().read(); conn.close()

    def call_tool(self, name, args):
        return self._rpc("tools/call", {"name":name, "arguments":args})

    def close(self):
        self._running = False
        if self.sock:
            try: self.sock.close()
            except: pass

def get_decompile(client, ea):
    code = (
        'import json, ida_hexrays, ida_funcs\n'
        'ea = ' + str(ea) + '\n'
        'func = ida_funcs.get_func(ea)\n'
        'if func:\n'
        '    try:\n'
        '        cfunc = ida_hexrays.decompile(func)\n'
        '        if cfunc:\n'
        '            text = str(cfunc)\n'
        '            print(json.dumps({"ok":True,"code":text}))\n'
        '        else:\n'
        '            print(json.dumps({"ok":False,"error":"None"}))\n'
        '    except Exception as e:\n'
        '        print(json.dumps({"ok":False,"error":str(e)}))\n'
        'else:\n'
        '    print(json.dumps({"ok":False,"error":"no func"}))\n'
    )
    result = client.call_tool("py_eval", {"code": code})
    sc = result.get("structuredContent") or {}
    stdout = (sc.get("stdout") or "").strip()
    if stdout:
        try:
            p = json.loads(stdout)
            return p.get("ok"), p.get("code",""), p.get("error","")
        except Exception as ex:
            return False, "", "JSON parse: " + str(ex) + " out=" + stdout[:300]
    for c in (result.get("content") or []):
        if c.get("type") == "text":
            return False, "", "no stdout: " + c["text"][:300]
    return False, "", "result: " + str(result)[:300]

addrs = [
    ("0x41c010", 0x41c010), ("0x41c070", 0x41c070), ("0x459ee0", 0x459ee0),
    ("0x51faf0", 0x51faf0), ("0x6b4f20", 0x6b4f20), ("0x705d20", 0x705d20),
    ("0x70fbd0", 0x70fbd0), ("0x425260", 0x425260), ("0x449a40", 0x449a40),
    ("0x5220f0", 0x5220f0), ("0x41c020", 0x41c020), ("0x407b40", 0x407b40),
    ("0x407b50", 0x407b50), ("0x459ed0", 0x459ed0), ("0x70c5a0", 0x70c5a0)
]

print("Connecting to IDA MCP...")
client = MCP()
client.connect()
print("Connected.")

for h, ea in addrs:
    print()
    print("===== %s =====" % h)
    ok, code, err = get_decompile(client, ea)
    if ok and code:
        print(code)
    else:
        print("ERROR:", err)

client.close()
print(); print("Done.")
