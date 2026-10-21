#!/usr/bin/env python3
"""X105 uncapped per-TU diagnostic.

Measures the REAL error count of every translation unit in the CMake/MSVC
compile set with clang-cl -ferror-limit=0 (no 100-error cap), using the same
preprocessor surface as the real build.

    clang-cl /nologo -fsyntax-only -ferror-limit=0 -fno-caret-diagnostics
             /std:c++20 /utf-8 /EHsc /W3
             /I<root>/src /I<root>/app
             /DWIN32 /D_WINDOWS /DWIN32_LEAN_AND_MEAN /DNOMINMAX
             /D_CRT_SECURE_NO_WARNINGS /DGAMEMD_DEBUG
             /FI<root>/src/core/ida_compat.h <TU>

The MSVC include/lib environment is taken from vcvarsall.bat x86 once and
inherited by every clang-cl child process (header resolution only).

Error taxonomy per TU (all diagnostics emitted while compiling the TU):
    own     -- located in the TU file itself (the actionable per-TU defects)
    e4hdr   -- located in e4 headers (shared universe; ambiguous / using-
               declaration noise that MSVC tolerates)
    other   -- located in every other project/system header

Outputs:
    .omo/x105_uncapped.json      full per-TU record
    .omo/x105_uncapped.md        ranked table
    .omo/x105_clang_logs/*.log   full per-TU diagnostics (never truncated)

Usage:
    python tools/x105_uncapped.py                # measure all TUs
    python tools/x105_uncapped.py --jobs 12
    python tools/x105_uncapped.py --reparse      # rebuild JSON/MD from logs
    python tools/x105_uncapped.py --limit N      # first N TUs only
"""
import argparse
import concurrent.futures as cf
import json
import os
import re
import subprocess
import sys
import time
import xml.etree.ElementTree as ET
from collections import Counter
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
VS = r"C:\Program Files\Microsoft Visual Studio\18\Community"
CLANGCL = str(Path(VS) / "VC/Tools/Llvm/x64/bin/clang-cl.exe")
VCVARS = str(Path(VS) / "VC/Auxiliary/Build/vcvarsall.bat")
VCXPROJ = ROOT / "build_win" / "gamemd.vcxproj"
MSVC_BUILD_JSON = ROOT / ".omo" / "x104_build_fin2.json"
OUT_JSON = ROOT / ".omo" / "x105_uncapped.json"
OUT_MD = ROOT / ".omo" / "x105_uncapped.md"
LOG_DIR = ROOT / ".omo" / "x105_clang_logs"

DISPLAY_FLAGS = [
    "-fsyntax-only", "-ferror-limit=0", "-fno-caret-diagnostics",
    "/std:c++20", "/utf-8", "/EHsc", "/W3",
    "/I" + str(ROOT / "src"), "/I" + str(ROOT / "app"),
    "/DWIN32", "/D_WINDOWS", "/DWIN32_LEAN_AND_MEAN", "/DNOMINMAX",
    "/D_CRT_SECURE_NO_WARNINGS", "/DGAMEMD_DEBUG",
    "/FI" + str(ROOT / "src/core/ida_compat.h").replace("\\", "/"),
]

ERR_RE = re.compile(r"^(.*?)\((\d+)(?:,\d+)?\): (fatal )?error: (.*)$")
CLANG_DRIVER_ERR = re.compile(r"^clang(-cl)?: error:")

CATEGORIES = [
    ("no member named", "no-member"),
    ("no matching function", "no-matching-function"),
    ("no matching constructor", "no-matching-constructor"),
    ("no matching member function", "no-matching-member-function"),
    ("no viable", "no-viable"),
    ("cannot initialize", "cannot-initialize"),
    ("cannot convert", "cannot-convert"),
    ("cannot be used with", "cannot-be-used-with"),
    ("use of undeclared identifier", "undeclared-identifier"),
    ("unknown type name", "unknown-type-name"),
    ("expected", "expected-token"),
    ("invalid operands to binary", "invalid-operands"),
    ("invalid use of", "invalid-use"),
    ("member reference base type", "member-ref-base"),
    ("call to non-static member function", "call-nonstatic"),
    ("too few arguments", "too-few-arguments"),
    ("too many arguments", "too-many-arguments"),
    ("incomplete type", "incomplete-type"),
    ("no type named", "no-type-named"),
    ("does not name a template type", "not-a-template-type"),
    ("reference to non-static member", "non-static-member-ref"),
    ("out-of-line definition", "out-of-line-def"),
    ("excess elements in", "excess-elements"),
    ("redefinition of", "redefinition"),
    ("duplicate", "duplicate"),
    ("not a member of", "not-a-member-of"),
    ("private member", "private-member"),
    ("protected member", "protected-member"),
    ("ambiguous", "ambiguous"),
    ("array size", "array-size"),
    ("division by zero", "division-by-zero"),
    ("static assertion failed", "static-assert"),
    ("extraneous closing brace", "extra-brace"),
    ("declaration conflicts with target of using declaration",
     "using-decl-conflict"),
    ("namespaces can only be defined in global", "nested-namespace"),
]


def classify(msg):
    low = msg.lower()
    for key, cat in CATEGORIES:
        if key in low:
            return cat
    return re.sub(r"[^a-z0-9]+", "-", low[:40]).strip("-")


def vcvars_env():
    script = 'call "%s" x86 >nul 2>&1\r\nset\r\n' % VCVARS
    out = subprocess.run(["cmd"], input=script.encode("mbcs"), capture_output=True)
    env = dict(os.environ)
    for line in out.stdout.decode("utf-8", "replace").splitlines():
        if "=" in line:
            k, v = line.split("=", 1)
            env[k] = v
    if not env.get("INCLUDE"):
        print("WARN: vcvarsall env capture failed; relying on clang-cl auto-detect")
    return env


def tu_list():
    ns = "{http://schemas.microsoft.com/developer/msbuild/2003}"
    r = ET.parse(str(VCXPROJ)).getroot()
    tus = []
    for ig in r.findall(ns + "ItemGroup"):
        for c in ig.findall(ns + "ClCompile"):
            p = Path(c.get("Include"))
            if p.suffix.lower() == ".cpp":
                tus.append(str(p))
    return tus


def classify_loc(path, tu_rel):
    """Bucket a diagnostic location: own TU / e4 header / other."""
    p = path.replace("\\", "/").lower()
    rootp = str(ROOT).replace("\\", "/").lower()
    if p.endswith("/" + tu_rel.lower()) or p == tu_rel.lower():
        return "own"
    if "/src/e4/" in p:
        return "e4hdr"
    return "other"


def parse_log(text, tu_rel):
    own = e4hdr = other = 0
    own_errs = []
    cats = Counter()
    own_cats = Counter()
    driver_err = []
    for line in text.splitlines():
        m = ERR_RE.match(line)
        if m:
            f, ln, msg = m.group(1), int(m.group(2)), m.group(4)
            bucket = classify_loc(f, tu_rel)
            cats[classify(msg)] += 1
            if bucket == "own":
                own += 1
                own_cats[classify(msg)] += 1
                if len(own_errs) < 5:
                    own_errs.append("%s(%d): %s" % (Path(f).name, ln, msg))
            elif bucket == "e4hdr":
                e4hdr += 1
            else:
                other += 1
            continue
        if CLANG_DRIVER_ERR.match(line):
            driver_err.append(line)
    return {
        "own": own, "e4hdr": e4hdr, "other_hdr": other,
        "total": own + e4hdr + other,
        "top_categories": dict(cats.most_common(8)),
        "top_own_categories": dict(own_cats.most_common(8)),
        "first_own_errors": own_errs,
        "driver_err": driver_err,
    }


def log_path_for(tu_rel):
    """Unique per-TU log name (bare basenames collide across directories)."""
    return LOG_DIR / (tu_rel.replace("/", "__") + ".log")


def run_one(tu, env, timeout):
    tu_rel = os.path.relpath(tu, str(ROOT)).replace("\\", "/")
    log_path = log_path_for(tu_rel)
    args = [CLANGCL, "/nologo"] + DISPLAY_FLAGS + [tu]
    t0 = time.time()
    try:
        p = subprocess.run(args, capture_output=True, env=env, timeout=timeout)
        rc, text = p.returncode, (p.stderr + p.stdout).decode("utf-8", "replace")
    except subprocess.TimeoutExpired as e:
        rc = -9
        text = "TIMEOUT after %ss\n" % timeout + ((e.stderr or b"").decode("utf-8", "replace"))
    wall = time.time() - t0
    log_path.write_text(text, encoding="utf-8")
    rec = parse_log(text, tu_rel)
    unparseable = None
    if rc not in (0, 1):
        unparseable = "rc=%s" % rc
    elif "PLEASE submit a bug report" in text or "Stack dump" in text:
        unparseable = "clang-crash"
    elif any("file not found" in e for e in rec["first_own_errors"]):
        unparseable = "missing-include"
    elif rec["driver_err"]:
        unparseable = "driver:" + rec["driver_err"][0][:80]
    return {
        "tu": tu_rel, "rc": rc, "wall_s": round(wall, 2),
        "errors": rec["total"], "own": rec["own"], "e4hdr": rec["e4hdr"],
        "other_hdr": rec["other_hdr"],
        "top_categories": rec["top_categories"],
        "top_own_categories": rec["top_own_categories"],
        "first_own_errors": rec["first_own_errors"],
        "unparseable": unparseable,
        "log": str(log_path.relative_to(ROOT)).replace("\\", "/"),
    }


def reparse_one(tu):
    tu_rel = os.path.relpath(tu, str(ROOT)).replace("\\", "/")
    log_path = log_path_for(tu_rel)
    if not log_path.exists():
        return None
    text = log_path.read_text(encoding="utf-8", errors="replace")
    rec = parse_log(text, tu_rel)
    unparseable = None
    if any("file not found" in e for e in rec["first_own_errors"]):
        unparseable = "missing-include"
    elif rec["driver_err"]:
        unparseable = "driver:" + rec["driver_err"][0][:80]
    return {
        "tu": tu_rel, "rc": None, "wall_s": None,
        "errors": rec["total"], "own": rec["own"], "e4hdr": rec["e4hdr"],
        "other_hdr": rec["other_hdr"],
        "top_categories": rec["top_categories"],
        "top_own_categories": rec["top_own_categories"],
        "first_own_errors": rec["first_own_errors"],
        "unparseable": unparseable,
        "log": str(log_path.relative_to(ROOT)).replace("\\", "/"),
    }


def msvc_stats():
    """Per-TU MSVC counts from the recorded X104 baseline build log."""
    if not MSVC_BUILD_JSON.exists():
        return {}
    d = json.load(open(MSVC_BUILD_JSON, encoding="utf-8"))
    per = {k.replace("\\", "/").lower(): v for k, v in d["per_file"].items()}
    logp = Path(str(MSVC_BUILD_JSON).replace(".json", ".out.txt"))
    rows = set()
    capped = set()
    row_re = re.compile(r"^(.*?)\((\d+)(?:,\d+)?\): (?:fatal )?error (C\d+):")
    if logp.exists():
        for line in open(logp, encoding="utf-8", errors="replace"):
            m = row_re.match(line.strip())
            if not m:
                continue
            f = os.path.normcase(os.path.relpath(m.group(1), str(ROOT))).replace("\\", "/")
            rows.add((f, m.group(2), m.group(3)))
            if m.group(3) == "C1003":
                capped.add(f)
    uniq = Counter(r[0] for r in rows)
    res = {}
    for tu in uniq:
        res[tu] = {"raw": uniq[tu], "uniques": uniq[tu],
                   "capped": tu in capped,
                   "status": "capped" if tu in capped else "measured"}
    return {"per_tu": res, "build_total": d.get("errors"),
            "build_files": len(d.get("per_file", {})),
            "build_unique": d.get("unique"),
            "per_file": per}


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--jobs", type=int, default=12)
    ap.add_argument("--limit", type=int, default=0)
    ap.add_argument("--timeout", type=int, default=180)
    ap.add_argument("--reparse", action="store_true")
    a = ap.parse_args()

    LOG_DIR.mkdir(parents=True, exist_ok=True)
    tus = tu_list()
    missing = [t for t in tus if not Path(t).exists()]
    tus = [t for t in tus if Path(t).exists()]
    if a.limit:
        tus = tus[:a.limit]
    print("TUs=%d missing=%d jobs=%d clang=%s" % (len(tus), len(missing), a.jobs, CLANGCL))
    print("invocation template: %s /nologo %s <TU>" % (CLANGCL, " ".join(DISPLAY_FLAGS)))

    t0 = time.time()
    results = []
    if a.reparse:
        for tu in tus:
            r = reparse_one(tu)
            if r:
                results.append(r)
    else:
        env = vcvars_env()
        with cf.ThreadPoolExecutor(max_workers=a.jobs) as ex:
            futs = {ex.submit(run_one, tu, env, a.timeout): tu for tu in tus}
            done = 0
            for f in cf.as_completed(futs):
                results.append(f.result())
                done += 1
                if done % 100 == 0:
                    print("  %d/%d  %.0fs" % (done, len(tus), time.time() - t0))

    ms = msvc_stats()
    per = ms.get("per_tu", {})
    for r in results:
        m = per.get(r["tu"].lower())
        if m:
            r["msvc_raw"] = m["raw"]
            r["msvc_unique"] = m["uniques"]
            r["msvc_capped"] = m["capped"]
            r["msvc_status"] = m["status"]
        else:
            r["msvc_raw"] = 0
            r["msvc_unique"] = 0
            r["msvc_capped"] = False
            r["msvc_status"] = "no-msvc-row"
        r["hidden"] = (max(0, r["errors"] - (r["msvc_unique"] or 0))
                       if not r["unparseable"] else None)
        # clang-vs-MSVC divergence: clang keeps recovering where MSVC gives up
        r["clang_divergent"] = bool(
            not r["unparseable"] and (
                (r["msvc_status"] == "no-msvc-row" and r["own"] > 0) or
                (r["msvc_unique"] and not r["msvc_capped"]
                 and r["errors"] / max(1, r["msvc_unique"]) > 10)
            )
        )
    results.sort(key=lambda r: (-r["own"], -r["errors"], r["tu"]))

    ok = [r for r in results if not r["unparseable"]]
    bad = [r for r in results if r["unparseable"]]
    total_msvc = ms.get("build_total") or sum(r["msvc_raw"] for r in results)
    total_real = sum(r["errors"] for r in ok)
    total_own = sum(r["own"] for r in ok)
    capped = [r for r in ok if r["msvc_capped"]]
    notcomp = [r for r in ok if r["msvc_status"] == "no-msvc-row"]
    # number of TUs the recorded MSVC build actually started (per-file echoes)
    attempted = 0
    logp = Path(str(MSVC_BUILD_JSON).replace(".json", ".out.txt"))
    if logp.exists():
        echo_re = re.compile(r"^  [A-Za-z0-9_.\-]+\.(cpp|rc)$")
        attempted = sum(1 for line in open(logp, encoding="utf-8", errors="replace")
                        if echo_re.match(line.rstrip("\r\n")))
    divergent = [r for r in ok if r["clang_divergent"]]
    trusted = [r for r in ok if not r["clang_divergent"]]
    top10 = trusted[:10]
    payload = {
        "generated": time.strftime("%Y-%m-%d %H:%M:%S"),
        "clang": (subprocess.run([CLANGCL, "--version"], capture_output=True,
                                 text=True).stdout.splitlines() or [""])[0],
        "invocation": {
            "binary": CLANGCL, "driver": "clang-cl",
            "flags": DISPLAY_FLAGS,
            "env": "vcvarsall.bat x86 (INCLUDE/LIB only)",
            "error_limit": 0,
            "msvc_baseline": str(MSVC_BUILD_JSON.relative_to(ROOT)).replace("\\", "/"),
        },
        "counts": {
            "tus_project": len(tus) + len(missing),
            "tus_measured": len(results),
            "unparseable": len(bad),
            "clang_divergent": len(divergent),
            "msvc_build_total": total_msvc,
            "msvc_build_files": ms.get("build_files"),
            "msvc_tus_with_errors": sum(1 for r in results if r["msvc_status"] != "no-msvc-row"),
            "msvc_tus_attempted": attempted,
            "msvc_tus_no_row": len(notcomp),
            "msvc_tus_capped": len(capped),
            "clang_total": total_real,
            "clang_own_total": total_own,
            "ratio_total": round(total_real / total_msvc, 3) if total_msvc else None,
            "ratio_own": round(total_own / total_msvc, 3) if total_msvc else None,
            "clang_in_capped": sum(r["errors"] for r in capped),
            "clang_own_in_capped": sum(r["own"] for r in capped),
            "clang_in_capped_msvc_unique": sum(r["msvc_unique"] for r in capped),
            "clang_in_no_msvc_row": sum(r["errors"] for r in notcomp),
            "clang_own_in_no_msvc_row": sum(r["own"] for r in notcomp),
            "projected_total_if_top10_zeroed": total_real - sum(r["errors"] for r in top10),
            "projected_own_if_top10_zeroed": total_own - sum(r["own"] for r in top10),
            "top10_tus": [r["tu"] for r in top10],
        },
        "missing_tus": missing,
        "tus": results,
    }
    OUT_JSON.write_text(json.dumps(payload, indent=1), encoding="utf-8")

    lines = []
    lines.append("# X105 uncapped per-TU diagnostic (clang-cl -ferror-limit=0)")
    lines.append("")
    lines.append("Generated: %s" % payload["generated"])
    lines.append("")
    lines.append("`%s /nologo %s <TU>`" % (CLANGCL, " ".join(DISPLAY_FLAGS)))
    lines.append("")
    lines.append("`own` = diagnostics located in the TU file itself (actionable per-TU "
                 "defects); `e4hdr` = shared e4-universe header noise; `total` = all "
                 "diagnostics emitted for the TU.")
    lines.append("")
    c = payload["counts"]
    lines.append("| metric | value |")
    lines.append("|---|---|")
    for k in ("tus_project", "tus_measured", "unparseable", "clang_divergent",
              "msvc_build_total", "msvc_tus_with_errors", "msvc_tus_attempted",
              "msvc_tus_no_row",
              "msvc_tus_capped", "clang_total", "clang_own_total", "ratio_total",
              "ratio_own", "clang_in_capped", "clang_own_in_capped",
              "clang_in_capped_msvc_unique", "clang_in_no_msvc_row",
              "clang_own_in_no_msvc_row", "projected_total_if_top10_zeroed",
              "projected_own_if_top10_zeroed"):
        lines.append("| %s | %s |" % (k, c[k]))
    lines.append("")
    lines.append("## Ranked TUs by own-file real errors (mind the cap)")
    lines.append("")
    lines.append("| # | TU | own | total | MSVC uniq | MSVC status | divergent | top own codes |")
    lines.append("|---|---|---|---|---|---|---|---|")
    for i, r in enumerate(results[:90], 1):
        tops = ", ".join("%s:%d" % (k, v) for k, v in list(r["top_own_categories"].items())[:3])
        lines.append("| %d | %s | %d | %d | %s | %s | %s | %s |" % (
            i, r["tu"], r["own"], r["errors"], r["msvc_unique"],
            r["msvc_status"], "yes" if r["clang_divergent"] else "no", tops))
    lines.append("")
    lines.append("## Ranked TUs by all diagnostics (uncapped)")
    lines.append("")
    lines.append("| # | TU | total | own | MSVC uniq | MSVC status |")
    lines.append("|---|---|---|---|---|---|")
    for i, r in enumerate(ok[:60], 1):
        lines.append("| %d | %s | %d | %d | %s | %s |" % (
            i, r["tu"], r["errors"], r["own"], r["msvc_unique"], r["msvc_status"]))
    if bad:
        lines.append("")
        lines.append("## clang-unparseable (MSVC fallback)")
        lines.append("")
        for r in bad:
            lines.append("- %s — %s (MSVC raw %s)" % (r["tu"], r["unparseable"], r["msvc_raw"]))
    OUT_MD.write_text("\n".join(lines) + "\n", encoding="utf-8")

    print("DONE %.0fs  clang_total=%d own=%d msvc_build=%d ratio_total=%s ratio_own=%s "
          "unparseable=%d divergent=%d" % (
              time.time() - t0, total_real, total_own, total_msvc,
              payload["counts"]["ratio_total"], payload["counts"]["ratio_own"],
              len(bad), len(divergent)))
    print("wrote", OUT_JSON)
    print("wrote", OUT_MD)


if __name__ == "__main__":
    main()
