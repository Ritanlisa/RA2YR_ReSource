import json, urllib.request, threading, time

SSE_URL = "http://127.0.0.1:13337/sse"
session_url = None
lock = threading.Lock()
responses = {}
req_id = 0

def sse_thread():
    global session_url
    req = urllib.request.Request(SSE_URL, headers={"Accept": "text/event-stream"})
    resp = urllib.request.urlopen(req, timeout=30)
    while True:
        try:
            line = resp.readline().decode("utf-8").strip()
            if not line:
                continue
            if line.startswith("data: "):
                data = line[6:]
                if session_url is None:
                    session_url = "http://127.0.0.1:13337" + data
                    print(f"SSE session: {session_url}", flush=True)
                else:
                    try:
                        msg = json.loads(data)
                        with lock:
                            responses[msg.get("id")] = msg
                            print(f"Got response for id={msg.get('id')}", flush=True)
                    except Exception as e:
                        print(f"Parse err: {e}", flush=True)
        except:
            break

t = threading.Thread(target=sse_thread, daemon=True)
t.start()
time.sleep(1)

def call(method, params):
    global req_id
    req_id += 1
    body = json.dumps({"jsonrpc":"2.0","id":req_id,"method":method,"params":params}).encode()
    r = urllib.request.Request(session_url, data=body, headers={"Content-Type":"application/json"})
    resp = urllib.request.urlopen(r)
    resp.read()
    print(f"Sent {method} id={req_id}", flush=True)

call("tools/list", {})
time.sleep(2)
with lock:
    if req_id in responses:
        tools = responses[req_id].get("result", {}).get("tools", [])
        names = [t["name"] for t in tools]
        print(f"Tools ({len(tools)}): {names[:20]}", flush=True)

call("server_health", {})
time.sleep(2)
with lock:
    if req_id in responses:
        print(f"server_health OK: {json.dumps(responses[req_id].get('result',{}))[:200]}", flush=True)
    else:
        print(f"No server_health response for id={req_id}", flush=True)

call("decompile", {"addr": "0x51D6F0"})
time.sleep(3)
with lock:
    if req_id in responses:
        print(f"decompile result: {json.dumps(responses[req_id])[:500]}", flush=True)
    else:
        print(f"No decompile response. Available IDs: {list(responses.keys())}", flush=True)
