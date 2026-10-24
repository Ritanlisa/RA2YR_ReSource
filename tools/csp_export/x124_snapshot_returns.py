#!/usr/bin/env python3
"""x124_snapshot_returns.py — CSP defect A fix, tracked generator (X125 W1).

Port of the X124 one-shot scripts `.omo/x124/w2_snapshot_returns.py` +
`.omo/x124/w2b_correct.py` (both untracked/local) into the tracked
generator tree, with the FINAL (post-correction) semantics baked in.

Defect A (docs/csp_defects.md §1): functions where
csp_functions.json.return_type == void while the IDA typed snapshot
(decompile-results/full_export/src/_addr_*.cpp `// proto:`) declares a
non-void return.  The snapshot prototype is FACTUAL IDA evidence (the
exported Hex-Rays prototype), not statistical voting — user CSP rule.
It is fed as a rank-2 input (same evidentiary tier the X120 sidecar used
for MEMBER_ACCESS), taking precedence only over "no evidence" (void =
absence of evidence; the solver never voted returns).

Final semantics (w2b_correct.py state):
  1. Annotation-aware calling-convention parse: `__usercall@<al>`,
     `__userpurge __spoils<ecx>@<eax>`, plain `__cdecl/__stdcall/...` —
     the `@<...>` / `__spoils<...>` annotations are CONSUMED, not
     captured into the return type (the first apply mangled 35 entries
     this way; w2b corrected them).
  2. signals.json dual-write with key normalization (csp keys are
     0x00XXXXXX, signals keys 0xXXXXXX — the first apply's dual-write
     was a silent no-op due to this mismatch) and a no-downgrade guard:
     signals values that are semantic (non placeholder) are NEVER
     overwritten by the snapshot proto (e.g. 0x4a40c0 signals
     LPDIRECTDRAW outranks snapshot `int`).
  3. Guards: reject decorated types (C4 rule: _csp/_Destru/_N/[N]
     suffix), reject placeholders (?, _UNKNOWN, empty), never touch
     already-typed returns (non-void entries without this pipeline's
     evidence marker).

Idempotence: on the current (already-fixed) artifacts the run performs
zero mutations and does NOT rewrite the files (byte-preserving).  Use
`--check` to assert this explicitly (exit 1 on unexpected mutation).

Outputs: tools/csp/full_report/csp_functions.json + signals.json
(only when changes exist) and a run report under .omo/x125/.

Usage:
  python tools/csp_export/x124_snapshot_returns.py             # census
  python tools/csp_export/x124_snapshot_returns.py --apply     # fix
  python tools/csp_export/x124_snapshot_returns.py --check     # assert no-op
"""
import argparse
import glob
import hashlib
import json
import re
import sys
from collections import Counter
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
CSP_PATH = ROOT / "tools" / "csp" / "full_report" / "csp_functions.json"
SIG_PATH = ROOT / "signals.json"
SNAPSHOT_DIR = ROOT / "decompile-results" / "full_export" / "src"
REPORT_DIR = ROOT / ".omo" / "x125"

EVIDENCE = "ida snapshot proto rank-2 (X124 W2)"
REVERT_EVID = "X124 W2b revert (proto unparseable/void)"
PLACEHOLDER = ("", "unknown", "?", None)

# C4 decoration rule (verify_csp.py): reject decorated class/type names
_RE_DECOR = re.compile(r"(_csp|_Destru|_\d+|\[\d+\])+$")

proto_re = re.compile(
    r"// addr=0x([0-9A-Fa-f]+) size=0x[0-9A-Fa-f]+\n// proto: (.+)")
# Annotation-aware CC: `__usercall@<al>`, `__userpurge __spoils<ecx>@<eax>`,
# plain `__cdecl/__stdcall/__thiscall/__fastcall`
CC_RE = re.compile(
    r"^(.*?)\s*__\w+(?:\s+__\w+)*(?:\s+__spoils<[^()]*>)*(?:@<[^()]*>)*\s*\(")


def proto_return(proto):
    """Return type = leading tokens up to the (annotation-aware) CC token."""
    mm = CC_RE.match(proto)
    ret = mm.group(1).strip() if mm else proto.split("(")[0].strip()
    ret = ret.strip()
    if "@" in ret or "usercall" in ret or "userpurge" in ret:
        return None  # unparseable -> not typed evidence
    return ret or "void"


def bad_type(t):
    if not t or not isinstance(t, str):
        return True
    s = t.strip()
    if not s or s in ("?", "_UNKNOWN", "unknown"):
        return True
    b = s.rstrip("*& ").strip()
    return _RE_DECOR.sub("", b) != b


def load_snapshot_returns():
    """addr(normalized 0x%08X) -> proto return (str or None if unparseable)."""
    ret_of = {}
    for f in glob.glob(str(SNAPSHOT_DIR / "_addr_*.cpp")):
        t = open(f, encoding="utf-8", errors="replace").read()
        for m in proto_re.finditer(t):
            ea = "0x" + m.group(1).upper().zfill(8)
            ret_of[ea] = proto_return(m.group(2).strip())
    return ret_of


def sha256(path):
    h = hashlib.sha256()
    with open(path, "rb") as f:
        for chunk in iter(lambda: f.read(1 << 20), b""):
            h.update(chunk)
    return h.hexdigest().upper()


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--apply", action="store_true")
    ap.add_argument("--check", action="store_true",
                    help="assert the run is a no-op (byte-idempotent)")
    args = ap.parse_args()

    ret_of = load_snapshot_returns()

    csp_doc = json.loads(CSP_PATH.read_text(encoding="utf-8"))
    funcs = csp_doc["functions"]
    sig_doc = json.loads(SIG_PATH.read_text(encoding="utf-8"))
    sigs = sig_doc["symbols"]
    sig_norm = {}
    for k, v in sigs.items():
        try:
            sig_norm["0x%08X" % int(v.get("address"), 16)] = v
        except (TypeError, ValueError):
            pass

    changed = {}
    reverted = {}
    stat = Counter()
    by_type = Counter()
    sig_fixed = {}
    sig_skipped_semantic = []

    for ea, v in funcs.items():
        rt = v.get("return_type")
        ev = v.get("return_evidence")
        in_scope = rt in (None, "", "void") or ev == EVIDENCE
        if not in_scope:
            stat["already_typed_kept"] += 1
            continue
        corr = ret_of.get(ea)
        if corr is None:
            stat["no_proto_stays" if ev not in (EVIDENCE,) else
                 "marker_without_proto"] += 1
            # stale marker without a proto: leave untouched (audit trail)
            continue
        if corr == "void" or corr.startswith("void"):
            # void family: stays void.  If an earlier apply had marked it,
            # keep/normalize the revert marker (w2b semantics).
            if ev == EVIDENCE and rt != "void":
                v["return_type"] = "void"
                v["return_evidence"] = REVERT_EVID
                reverted[ea] = (rt, "void")
                stat["revert_void_family"] += 1
            elif ev == EVIDENCE and rt == "void":
                v["return_evidence"] = REVERT_EVID
                reverted[ea] = (rt, "void")
                stat["revert_void_family"] += 1
            else:
                stat["legit_void_kept" if corr == "void" else
                     "void_star_baseline_band"] += 1
            continue
        if corr is None or bad_type(corr):
            stat["bad_type_skipped"] += 1
            continue
        # typed value from snapshot proto
        if rt != corr:
            v["return_type"] = corr
            if ev != EVIDENCE:
                v["return_evidence"] = EVIDENCE
            changed[ea] = (rt, corr)
            by_type[corr] += 1
            stat["apply_return_from_proto"] += 1
        else:
            stat["confirmed_typed"] += 1
        # signals dual-write (normalized keys, placeholder-fill only)
        sv = sig_norm.get(ea)
        if sv is not None and sv.get("kind") == "function":
            cur = sv.get("return_type")
            if cur in PLACEHOLDER:
                if cur != corr:
                    sv["return_type"] = corr
                    sig_fixed[ea] = (cur, corr)
            elif cur != corr:
                sig_skipped_semantic.append((ea, cur, corr))

    report = {
        "apply": args.apply,
        "stats": dict(stat),
        "changed_total": len(changed),
        "changed_by_type": dict(by_type.most_common(15)),
        "reverted": {k: v for k, v in list(reverted.items())[:10]},
        "signals_placeholder_filled": len(sig_fixed),
        "signals_semantic_kept": len(sig_skipped_semantic),
        "semantic_kept_samples": sig_skipped_semantic[:6],
    }

    total_mut = len(changed) + len(reverted) + len(sig_fixed)
    if args.apply and total_mut:
        CSP_PATH.write_text(
            json.dumps(csp_doc, indent=1, ensure_ascii=False),
            encoding="utf-8")
        SIG_PATH.write_text(
            json.dumps(sig_doc, indent=2, ensure_ascii=False),
            encoding="utf-8")
        print("APPLIED: %d csp + %d signals fills"
              % (len(changed) + len(reverted), len(sig_fixed)))
    elif args.check and total_mut:
        report["check"] = "FAIL: %d pending mutations (expected 0)" % total_mut
        print(json.dumps(report, indent=1, ensure_ascii=False))
        sys.exit(1)

    REPORT_DIR.mkdir(parents=True, exist_ok=True)
    (REPORT_DIR / "w1_snapshot_returns_report.json").write_text(
        json.dumps(report, indent=1, ensure_ascii=False), encoding="utf-8")
    report["csp_sha256_after"] = sha256(CSP_PATH)
    print(json.dumps({k: report[k] for k in (
        "apply", "stats", "changed_total", "signals_placeholder_filled",
        "signals_semantic_kept", "csp_sha256_after")}, indent=1,
        ensure_ascii=False))


if __name__ == "__main__":
    main()
