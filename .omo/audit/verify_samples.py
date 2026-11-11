#!/usr/bin/env python3
"""Independent re-verification of sampled functions (read-only w.r.t. generated trees)."""
import json, os, re, sys, glob

REPO = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", ".."))
sys.path.insert(0, os.path.join(REPO, "tools", "decomp_sys"))
try:
    import checker
except Exception as ex:
    checker = None
    print("checker import failed:", ex)

SAMPLES = os.path.join(os.path.dirname(__file__), "samples.json")


def hpp_members(hpp):
    if not hpp:
        return set()
    # identifiers appearing in a member-ish declaration position
    ids = set(re.findall(r"\b[A-Za-z_]\w*\b", hpp))
    return ids


def strip_sig(body):
    if not body:
        return ""
    i = body.find("{")
    return body[i + 1:body.rfind("}")] if i >= 0 and body.rfind("}") > i else body


def run_check(rec):
    if not checker or not rec.get("body"):
        return None
    members = hpp_members(rec.get("hpp_text"))
    rep = checker.check_function((rec.get("emitted") or rec.get("name") or "").split("::")[0], strip_sig(rec["body"]), {"this"}, members)
    return [v for v in rep.violations]


def byte_cmp(rec):
    o = rec.get("orig") or {}
    u = rec.get("ours") or {}
    ob = (o.get("bytes_hex") or "").lower().replace(" ", "")
    ub = (u.get("bytes_hex") or "").lower().replace(" ", "")
    if not ob or not ub:
        return None
    return ob == ub


def cpp_scan(rec):
    """R1/R2/R5/R6 + red-flag scan on emitted cpp text."""
    out = {}
    cpp = rec.get("cpp")
    if not cpp or not os.path.exists(cpp):
        return out
    txt = open(cpp, encoding="utf-8", errors="replace").read()
    out["cpp_basename"] = os.path.basename(cpp)
    out["hpp_basename"] = os.path.basename(rec.get("hpp") or "")
    out["r2_same_name"] = bool(rec.get("hpp")) and os.path.splitext(os.path.basename(cpp))[0].lower() == os.path.splitext(os.path.basename(rec["hpp"]))[0].lower()
    out["type_defs_in_cpp"] = re.findall(r"\b(?:class|struct|union|typedef|enum)\b", txt)
    out["if_empty"] = len(re.findall(r"\bif\s*\([^)]*\)\s*;", txt))
    out["uninit_use"] = None
    out["asm"] = len(re.findall(r"__asm\b", txt))
    out["pragma"] = len(re.findall(r"#pragma", txt))
    # width-mismatch levers
    out["goto"] = len(re.findall(r"\bgoto\s+LABEL_", txt))
    # R1 heuristic: definitions at file scope (lines starting at col 0 that declare a variable/function not in hpp)
    out["obj_exists"] = os.path.exists(os.path.splitext(cpp)[0] + ".obj")
    return out


def hpp_member_stats(rec):
    h = rec.get("hpp_text") or ""
    names = []
    for m in re.finditer(r"^\s{4}(?:union\s*\{)?\s*(?:[A-Za-z_][\w:<>]*[\s*&]+)+([A-Za-z_]\w*)\s*(?:\[[^\]]*\])?\s*;", h, re.M):
        names.append(m.group(1))
    # union members (8-space)
    for m in re.finditer(r"^\s{8}(?:[A-Za-z_][\w:<>]*[\s*&]+)+([A-Za-z_]\w*)\s*(?:\[[^\]]*\])?\s*;", h, re.M):
        names.append(m.group(1))
    pads = sum(1 for n in names if n.startswith("__pad_") or n.startswith("__mp_"))
    sem = sum(1 for n in names if not re.match(r"^(?:__pad_|__mp_|m\d|q\d|u\d|w\d|tail_|vfptr|field_)", n))
    return {"members": names, "pad": pads, "semanticish": sem, "union": len(re.findall(r"\bunion\b", h))}


def main():
    d = json.load(open(SAMPLES, encoding="utf-8"))
    report = {"ok": [], "ng": []}
    for grp in ("ok", "ng"):
        for r in d[grp]:
            rec = dict(addr=r["addr"], label=r["label"], name=r.get("name"), emitted=r.get("emitted"),
                       unit=r.get("unit"), orig_size=r.get("orig_size"), ours_size=r.get("ours_size"),
                       rv_recorded=r.get("rv"), cpp=r.get("cpp"), hpp=r.get("hpp"))
            rec["bytes_equal"] = byte_cmp(r)
            rec["recheck_violations"] = run_check(r)
            rec["cpp_scan"] = cpp_scan(r)
            rec["hpp_stats"] = hpp_member_stats(r)
            rec["flags"] = r.get("flags")
            rec["body"] = r.get("body")
            rec["pseudo"] = r.get("pseudo")
            rec["artifact"] = r.get("artifact")
            report[grp].append(rec)
    out = os.path.join(os.path.dirname(__file__), "verify.json")
    json.dump(report, open(out, "w", encoding="utf-8"), indent=1, default=str)
    print("wrote", out)
    for grp in ("ok", "ng"):
        print("\n=== %s ===" % grp)
        for r in report[grp]:
            print("%-9s bytes_eq=%-5s rv_rec=%-4s rv_re=%-3s goto=%-2s ifempty=%-2s r2=%-5s obj=%-5s pads=%s/%s union=%s" % (
                r["addr"], r["bytes_equal"], r["rv_recorded"],
                len(r["recheck_violations"] or []), (r["cpp_scan"] or {}).get("goto"),
                (r["cpp_scan"] or {}).get("if_empty"), (r["cpp_scan"] or {}).get("r2_same_name"),
                (r["cpp_scan"] or {}).get("obj_exists"),
                (r["hpp_stats"] or {}).get("pad"), len((r["hpp_stats"] or {}).get("members") or []),
                (r["hpp_stats"] or {}).get("union")))


if __name__ == "__main__":
    main()
