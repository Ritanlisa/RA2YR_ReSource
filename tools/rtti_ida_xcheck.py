#!/usr/bin/env python3
"""Cross-check anchors/rtti_vtable_class.json against the live IDB via ida-pro-mcp.

For every vtable in the map, reads vtable[-1] (COL pointer) in IDA and compares
IDA's own RTTI label ('??_R4<Class>@@6B@', possibly '_N'-suffixed for MI
secondary COLs) with the class name derived offline by rtti_truth_extract.py.

Requires the ida-pro-mcp HTTP endpoint (default http://127.0.0.1:13337/mcp,
gamemd.exe IDB loaded).

Usage:
  python tools/rtti_ida_xcheck.py [--url http://127.0.0.1:13337/mcp]
"""
from __future__ import annotations

import argparse
import json
import os
import re
import urllib.request

IDA_CODE = r"""
import json, idc, re

path = r"%s"
mine = json.load(open(path))['vtables']
total = len(mine)
match = mismatch = no_col_name = 0
diffs = []
for va_s, info in mine.items():
    va = int(va_s, 16)
    col = idc.get_wide_dword(va - 4)
    nm = idc.get_name(col) if col else ''
    if not nm.startswith('??_R4'):
        no_col_name += 1
        continue
    s = nm[5:]
    s = re.sub(r'@\d+$', '', s) if re.search(r'@@6B@_\d+$', s) else s
    s = re.sub(r'_\d+$', '', s)          # IDA duplicate-name suffix
    if s.endswith('6B@'):
        s = s[:-3]
    if s.endswith('@@'):
        s = s[:-2]
    if s == info['class']:
        match += 1
    else:
        mismatch += 1
        if len(diffs) < 20:
            diffs.append((va_s, info['class'], nm))
print(json.dumps({'total': total, 'match': match, 'mismatch': mismatch,
                  'no_col_name': no_col_name, 'diffs': diffs}))
"""


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--url", default="http://127.0.0.1:13337/mcp")
    ap.add_argument("--map", default=None)
    args = ap.parse_args()

    repo = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
    map_path = args.map or os.path.join(repo, "anchors", "rtti_vtable_class.json")

    code = IDA_CODE % map_path
    payload = json.dumps(
        {
            "jsonrpc": "2.0",
            "id": 1,
            "method": "tools/call",
            "params": {"name": "py_eval", "arguments": {"code": code}},
        }
    ).encode()
    req = urllib.request.Request(
        args.url, data=payload,
        headers={"Content-Type": "application/json",
                 "Accept": "application/json, text/event-stream"},
    )
    resp = urllib.request.urlopen(req, timeout=300).read().decode()
    d = json.loads(resp)
    inner = json.loads(d["result"]["content"][0]["text"])
    result = json.loads(inner["stdout"])
    print(json.dumps(result, indent=1))
    ok = result["mismatch"] == 0 and result["no_col_name"] == 0
    print("RESULT:", "PASS" if ok else "FAIL")
    return 0 if ok else 1


if __name__ == "__main__":
    raise SystemExit(main())
