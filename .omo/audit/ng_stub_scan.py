#!/usr/bin/env python3
"""Scan the current NG pool for stub-shaped bodies (read-only)."""
import json, os, re, glob

REPO = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", ".."))
HERE = os.path.dirname(__file__)


def find_body(root, emitted, name):
    method = (emitted or name or "").split("::")[-1]
    cls = (emitted or name or "").split("::")[0] if "::" in (emitted or name or "") else None
    for dp, _, fns in os.walk(root):
        for fn in fns:
            if not fn.lower().endswith(".cpp"):
                continue
            p = os.path.join(dp, fn)
            try:
                t = open(p, encoding="utf-8", errors="replace").read()
            except Exception:
                continue
            needle = ("%s::%s(" % (cls, method)) if cls else (" %s(" % method)
            pos = t.find(needle)
            if pos < 0:
                pos = t.find("::%s(" % method)
            if pos < 0:
                continue
            b = t.find("{", pos)
            if b < 0:
                continue
            d = 0
            i = b
            while i < len(t):
                if t[i] == "{":
                    d += 1
                elif t[i] == "}":
                    d -= 1
                    if d == 0:
                        return t[b:i + 1], p
                i += 1
    return None, None


def main():
    led = json.load(open(os.path.join(REPO, ".omo", "codegen_match", "status.json"), encoding="utf-8"))
    latest = {}
    for p in glob.glob(os.path.join(REPO, ".omo", "decomp_batch", "**", "part_report.json"), recursive=True) + \
             glob.glob(os.path.join(REPO, ".omo", "decomp_batch", "**", "batch_report.json"), recursive=True):
        try:
            j = json.load(open(p, encoding="utf-8"))
        except Exception:
            continue
        for r in j.get("results", []):
            a = r.get("addr", "").lower()
            if led.get(a, {}).get("status") != "NG" or r.get("verdict") != "MISMATCH":
                continue
            mt = os.path.getmtime(p)
            cur = latest.get(a)
            if cur is None or mt > cur[0]:
                latest[a] = (mt, dict(dir=os.path.dirname(p), name=r.get("name"), emitted=r.get("emitted"), unit=r.get("unit"), path=r.get("pathology")))
    rows = []
    for a, (mt, rec) in sorted(latest.items()):
        body, p = find_body(rec["dir"], rec.get("emitted"), rec.get("name"))
        if body is None:
            rows.append({"addr": a, "name": rec["name"], "body": None, "stub": None})
            continue
        inner = body[1:-1].strip()
        noret = inner == "" or re.fullmatch(r"(?://[^\n]*\s*)*", inner) is not None
        constret = bool(re.fullmatch(r"return\s+[^;{}]+;", inner))
        todo = bool(re.search(r"TODO|FIXME|not implemented|unimplemented", inner, re.I))
        rows.append({"addr": a, "name": rec["name"], "path": rec.get("path"), "cpp": p,
                     "body": body, "inner": inner, "empty": noret, "constret": constret,
                     "todo": todo, "lines": inner.count("\n") + 1,
                     "semicolons": inner.count(";"), "ifs": len(re.findall(r"\bif\s*\(", inner)),
                     "loops": len(re.findall(r"\b(?:for|while|do)\b", inner))})
    json.dump(rows, open(os.path.join(HERE, "ng_scan.json"), "w", encoding="utf-8"), indent=1)
    print("NG scanned:", len(rows), "no body:", sum(1 for r in rows if r.get("body") is None))
    print("empty body:", sum(1 for r in rows if r.get("empty")))
    print("single-return body:", sum(1 for r in rows if r.get("constret")))
    print("TODO/FIXME:", sum(1 for r in rows if r.get("todo")))
    print("bodies with >=1 semicolon:", sum(1 for r in rows if (r.get("semicolons") or 0) >= 1))
    print("bodies with if/loop:", sum(1 for r in rows if (r.get("ifs") or 0) or (r.get("loops") or 0)))
    print("\nsingle-return bodies:")
    for r in rows:
        if r.get("constret"):
            print("  %-9s %-52s %s" % (r["addr"], r["name"], r["inner"]))
    print("\nempty bodies:")
    for r in rows:
        if r.get("empty"):
            print("  %-9s %-52s %s" % (r["addr"], r["name"], r.get("cpp")))


if __name__ == "__main__":
    main()
