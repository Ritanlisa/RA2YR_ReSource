#!/usr/bin/env python3
"""decompile.py -- DECOMP-2 driver: IDA pseudocode -> six-rule compliant C++.

Pipeline per function address:
  1. fetch      full_export block (pseudocode + disasm + proto)
  2. signature  DECOMP-1 registry JSON (signals-authoritative) with export
                proto fallback; era type spelling
  3. passes     param rename -> globals -> intrinsics (abs/LOBYTE) ->
                vtable dispatch -> member shapes (rules 3/4) ->
                BYREF widen -> scope shrink (rule 5) -> era normalize
  4. emit       `RET Cls::Method(args) { ... }` into <Name>.cpp grouped by the
                full_export hpp name (rule 2)
  5. hpp        pilot stand-in registry (hpp_pilot.py) from the same ledger
  6. self-check checker.py rule 3/4 scan on the emitted body
  7. compile    era cl (VC6/SP3 via .vc6-8447 + era_shim) -- rule 6
  8. report     restoration ledger (sites N -> restored M), notes, defects

Usage:
  python tools/decomp_sys/decompile.py --pilot            # the 5 pilot fns
  python tools/decomp_sys/decompile.py 0x5B2990 [...]     # ad-hoc
  python tools/decomp_sys/decompile.py --out .omo/decomp_pilot
"""
import argparse
import json
import os
import re
import sys
from collections import OrderedDict

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", ".."))
sys.path.insert(0, HERE)
sys.path.insert(0, ROOT)

import pseudo  # noqa: E402
import passes  # noqa: E402
import checker  # noqa: E402
import hpp_pilot  # noqa: E402
from registry_ext import Registry  # noqa: E402
from passes import ClassView, FunctionCtx, spell_type, WIDTH_OF as WIDTH_TY  # noqa: E402

DEFAULT_OUT = os.path.join(ROOT, ".omo", "decomp_pilot")

PILOT = [
    ("0x5B2990", "math"),     # Math::Abs16Cmp   -- word member view + abs16
    ("0x5F6560", "math"),     # Math::DistSq2D   -- vt slot-18 dispatch + coords
    ("0x401940", "getter"),   # ObjectClass::GetMember06 -> RawFileClass dword
    ("0x486380", "getter"),   # Cell::IsEmpty    -- dword member + LOBYTE bool
    ("0x4870D0", "cell"),     # Cell::IsPassableOffset -- pad-array restore
    ("0x50B6F0", "gran"),     # House::IsHumanPlayer -- IG narrow reads demo
]


# ---------------------------------------------------------------- signature

def derive_signature(reg, ex):
    fn = reg.function(ex.addr) or {}
    name = fn.get("name") or ex.name
    cls = fn.get("cls")
    cls_src = fn.get("cls_src")
    # proto this-type cross-check (D-fix 1 extension): the export proto is
    # IDA's live typing of THIS function; a class-typed `T *this` carries
    # its own layout (e.g. VectorClass::GetCount is really
    # DynamicVectorClass -- Count@0x10) and overrides the fleet cls.
    pm = re.search(r"\(\s*([A-Za-z_]\w*)\s*\*\s*_?this\b", ex.proto or "")
    if pm:
        pty = pm.group(1)
        if pty in reg.classes and pty != cls:
            cls, cls_src = pty, "proto_this"
    method = fn.get("method") or (name.split("::")[-1] if "::" in name else name)
    ret = spell_type(fn.get("ret") or "int")
    # registry spells conventions without the leading underscores
    # ("fastcall"/"stdcall"/"cdecl"); the emitter and every downstream
    # pass key on the C++ spelling with underscores.  Without this
    # normalization a fastcall member was emitted as a default-convention
    # member (0x406540 family: `mov [ecx+off], edx; retn` bodies came out
    # as `(int p0, int p1)` thiscall signatures -> cc_mismatch).
    cc_raw = fn.get("cc") or "thiscall"
    cc = {"fastcall": "__fastcall", "stdcall": "__stdcall",
          "cdecl": "__cdecl"}.get(cc_raw, cc_raw)
    params = []
    if fn.get("params"):
        for p in fn["params"]:
            params.append((spell_type(p.get("type") or "int"), p.get("name") or "p0"))
    else:
        # export proto fallback: strip cc + this
        proto = ex.proto
        for c in ("__thiscall", "__stdcall", "__cdecl", "__fastcall"):
            proto = proto.replace(c, " ")
        m = re.search(r"\((.*)\)\s*$", proto)
        if m:
            inner = m.group(1).strip()
            if inner:
                for i, part in enumerate(inner.split(",")):
                    part = part.strip()
                    if not part or part.endswith("this") or part == "this":
                        continue
                    params.append((spell_type(part), "p%d" % i))
    # arity cross-check vs the binary epilogue (D-fix: `ret` vs `ret 4`
    # cluster): the disasm's `retn N` is the callee's own stack cleanup --
    # for thiscall, N == sum(param widths). Excess signature params produce
    # `ret 4` shapes the original never had.
    dropped = []
    if cc == "thiscall":
        retn_bytes = 0
        dis = ex.disasm_lines
        for dl in reversed(dis[-4:]):
            m2 = re.match(r"^\s*[0-9A-Fa-f]+:\s*retn\s+(?:0x)?([0-9A-Fa-f]+)",
                          dl)
            if m2:
                retn_bytes = int(m2.group(1), 16)
                break
            if re.match(r"^\s*[0-9A-Fa-f]+:\s*retn\b", dl):
                break
        # fastcall detection (binary-authoritative): tiny setters whose
        # data movement stores EDX through ECX (`mov [ecx+off], edx`)
        # with a bare `retn` take the value in EDX, not on the stack --
        # a thiscall+param signature is a mis-typing for them.
        head = [re.sub(r"^\s*[0-9A-Fa-f]+:\s*", "", d) for d in dis[:3]]
        edx_store = any(
            re.match(r"mov\s+(?:(?:dword|word|byte|qword)\s+)?(?:ptr\s+)?"
                     r"\[ecx[^\]]*\],\s*edx$", h) for h in head)
        no_stack_read = not any("[esp" in d for d in dis)
        if retn_bytes == 0 and params and edx_store and no_stack_read \
                and len(dis) <= 6:
            cc = "__fastcall"
        elif not no_stack_read:
            pass   # body reads stack args: signature arity is real (static
            # member / mislabelled calling convention -- pathology, not fix)
        else:
            while params and sum(
                    (WIDTH_TY.get(t, 4) or 4) for t, _ in params) > retn_bytes:
                dropped.append(params.pop())
    return {
        "addr": ex.addr,
        "cls": cls,
        "method": method,
        "orig_name": name,
        "name_placeholder": bool(fn.get("name_placeholder")),
        "cls_src": cls_src,
        "cls_proto_override": bool(pm and pm.group(1) == cls
                                   and fn.get("cls") != cls),
        "ret": ret,
        "cc": cc,
        "params": params,                      # [(era_type, name)]
        "arity_dropped": ["%s %s" % (t, n) for t, n in dropped],
        "param_names": [n for _, n in params],
        "params_spelled": params,
    }


# ---------------------------------------------------------------- byref widen

def widen_byref_for_dispatch(ctx):
    """Widen BYREF byte arrays that feed a dispatch whose returned pointer is
    indexed (callee writes through the buffer beyond the declared size)."""
    text = "\n".join(ctx.lines)
    decl = re.search(r"^\s*(unsigned char|_BYTE|char)\s+(\w+)\[(\d+)\]",
                     text, re.M)
    if not decl:
        return
    ty, arr, n = decl.group(1), decl.group(2), int(decl.group(3))
    # member-ptr dispatch form: V = (this->*(...)m[K])(..., ARR)
    dm = re.search(r"(\w+)\s*=\s*\(this->\*.*?\[\d+\]\)\([^)]*\b%s\b"
                   r"[^)]*\)" % re.escape(arr), text)
    if not dm:
        return
    var = dm.group(1)
    idxs = [int(i) for i in
            re.findall(r"\b%s\s*\[\s*(\d+)\s*\]" % re.escape(var), text)]
    if not idxs:
        return
    need = (max(idxs) + 1) * 4
    if need > n:
        text = text.replace("%s[%d]" % (arr, n), "%s[%d]" % (arr, need), 1)
        ctx.lines = text.split("\n")
        ctx.note("array_widen",
                 "%s[%d] -> %s[%d]: dispatch callee writes %d bytes through "
                 "the buffer (indexed-return evidence %s[0..%d])"
                 % (arr, n, arr, need, need, var, max(idxs)))


# ---------------------------------------------------------------- pipeline

def run_function(addr, reg, views, idx):
    ex = pseudo.fetch(addr)
    sig = derive_signature(reg, ex)
    if sig["cls"] is None:
        raise SystemExit("no registry class for %s" % addr)
    ctx = FunctionCtx(ex, sig, reg, views)
    passes.pass_param_rename(ctx)
    passes.pass_globals(ctx)
    passes.pass_thislike_param(ctx)
    passes.pass_this_ptr_math(ctx)
    passes.pass_intrinsics_abs(ctx)
    passes.pass_intrinsics_lobyte(ctx)
    passes.pass_narrow_macro_reads(ctx)
    passes.pass_macro_residual_sweep(ctx)
    passes.pass_vt_dispatch(ctx)
    passes.pass_member_shapes(ctx)
    widen_byref_for_dispatch(ctx)
    passes.pass_scope_shrink(ctx)
    passes.pass_branch_polarity(ctx)
    passes.pass_ret_view_align(ctx)
    passes.pass_era_normalize(ctx)

    # unit selection (rule 2: cpp <-> hpp same name):
    # D-fix 1 -- the OWNING CLASS names the unit so a corrected fn->cls
    # attribution (e.g. RawFileClass::GetMember06, backfill-corrected out of
    # an ICF-folded ObjectClass name) lands in RawFileClass.cpp/hpp instead
    # of the stale export-file class. Global functions keep the export stem.
    key = addr.lower().replace("0x", "").zfill(8).upper()
    entry = idx.get(key) or {}
    if sig["cls"]:
        unit = re.sub(r"[^A-Za-z0-9_]", "_", sig["cls"])
    else:
        unit = os.path.splitext(os.path.basename(entry.get("file", "misc.cpp")))[0]
    return ctx, unit


# ---------------------------------------------------------------- emission

def emit_cpp(ctx, unit, hpp_name=None):
    from pseudo import render
    sig = ctx.sig
    args = ", ".join("%s %s" % (t, n) for t, n in sig["params"])
    cls_ident = re.sub(r"[^A-Za-z0-9_]", "_", sig["cls"] or "Unnamed")
    cc_tok = " __fastcall" if sig.get("cc") == "__fastcall" else ""
    head = "%s%s %s::%s(%s)" % (sig["ret"], cc_tok, cls_ident,
                                sig["method"], args)
    if ctx.stmts is not None:
        body = render(ctx.stmts, indent=1)
    else:
        body = ["    " + ln for ln in ctx.lines]
    lines = ["// GENERATED by tools/decomp_sys/decompile.py -- DO NOT EDIT.",
             "// source: decompile-results/full_export  fn 0x%s (%s)"
             % (ctx.sig["addr"][2:].upper().lstrip("0").zfill(6),
                ctx.sig["orig_name"]),
             '#include "%s.hpp"' % (hpp_name or unit),
             "",
             head]
    lines.append("{")
    nonempty = [ln for ln in body if ln.strip()]
    if nonempty:
        lines.extend(nonempty)
    lines.append("}")
    return "\n".join(lines) + "\n"


# ---------------------------------------------------------------- era compile

def era_compile(cpp_path, outdir):
    sys.path.insert(0, os.path.join(ROOT, "tools", "codegen_match"))
    from build_era import era_env
    import subprocess
    vc_dir, env = era_env()
    cl = os.path.join(vc_dir, "BIN", "cl.exe")
    cpp_path = os.path.abspath(cpp_path)
    outdir = os.path.abspath(outdir)
    inc = os.path.join(os.path.dirname(cpp_path), "include")
    r = subprocess.run(
        [cl, "/nologo", "/O2", "/Gy", "/c", "/I" + inc,
         "/Fo" + os.path.join(outdir, os.path.splitext(
             os.path.basename(cpp_path))[0] + ".obj"), cpp_path],
        env=env, capture_output=True, text=True, cwd=outdir)
    return r


# ---------------------------------------------------------------- driver

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("addrs", nargs="*")
    ap.add_argument("--pilot", action="store_true")
    ap.add_argument("--out", default=DEFAULT_OUT)
    ap.add_argument("--no-compile", action="store_true")
    ap.add_argument("--codegen-match", action="store_true",
                    help="bonus: byte-compare era output vs original exe")
    args = ap.parse_args()

    addrs = list(args.addrs)
    if args.pilot:
        addrs = [a for a, _ in PILOT]
    if not addrs:
        ap.error("give addresses or --pilot")

    reg = Registry.get()
    views = ClassView()
    idx = pseudo.load_index()

    os.makedirs(args.out, exist_ok=True)
    inc_dir = os.path.join(args.out, "include")
    os.makedirs(inc_dir, exist_ok=True)

    contexts = []
    for addr in addrs:
        ctx, unit = run_function(addr, reg, views, idx)
        contexts.append((ctx, unit))
        print("[decomp] %s %s::%s -> unit %s" % (
            ctx.sig["addr"], ctx.sig["cls"], ctx.sig["method"], unit))

    # ---- group by unit (rule 2: one cpp per hpp name)
    units = OrderedDict()
    for ctx, unit in contexts:
        units.setdefault(unit, []).append(ctx)

    report = {"functions": [], "units": {}, "stats": {}}
    for unit, ctxs in units.items():
        cpp_parts = []
        for ctx in ctxs:
            cpp_parts.append("")
            cpp_parts.append(emit_cpp(ctx, unit).rstrip())
        cpp_path = os.path.join(args.out, unit + ".cpp")
        with open(cpp_path, "w", encoding="utf-8", newline="\n") as f:
            f.write("\n".join(cpp_parts) + "\n")
        print("[emit] %s" % cpp_path)

        # pilot hpp: all classes touched by this unit
        by_cls = OrderedDict()
        for ctx in ctxs:
            by_cls.setdefault(ctx.sig["cls"], []).append(ctx.sig)
        members_by_cls = {}
        unit_globals = {}
        for ctx in ctxs:
            unit_globals.update(getattr(ctx, "used_globals", {}))
        for cls, sigs in by_cls.items():
            size = (reg.classes.get(cls) or {}).get("size") or 0
            hpp_text, members = hpp_pilot.gen_class_hpp(
                cls, views, sigs, size, used_globals=unit_globals)
            hpp_path = os.path.join(inc_dir, unit + ".hpp")
            with open(hpp_path, "a", encoding="utf-8", newline="\n") as f:
                f.write(hpp_text)
            members_by_cls[cls] = members
        unit_sigs = []
        for cls, sigs in by_cls.items():
            unit_sigs.extend(sigs)
        report["units"][unit] = {
            "cpp": cpp_path,
            "hpp": os.path.join(inc_dir, unit + ".hpp"),
            "classes": list(by_cls.keys()),
            "members": {c: sorted(m) for c, m in members_by_cls.items()},
        }

    # ---- self-check per function
    all_ok = True
    for ctx, unit in contexts:
        body = "\n".join(ctx.lines)
        # class-typed identifiers: this + registry-class params
        ct = {"this"}
        for t, n in ctx.sig["params"]:
            base = t.replace("*", "").strip()
            if base in reg.classes:
                ct.add(n)
        members = set()
        for cl in report["units"][unit]["classes"]:
            members.update(report["units"][unit]["members"].get(cl, []))
        rep = checker.check_function(ctx.sig["cls"], body, ct, members)
        entry = {
            "addr": ctx.sig["addr"],
            "orig_name": ctx.sig["orig_name"],
            "emitted": "%s::%s" % (ctx.sig["cls"], ctx.sig["method"]),
            "name_placeholder": ctx.sig.get("name_placeholder", False),
            "cls_src": ctx.sig.get("cls_src"),
            "ret": ctx.sig["ret"],
            "params": ["%s %s" % (t, n) for t, n in ctx.sig["params"]],
            "sites": [s.as_dict() for s in ctx.sites],
            "sites_total": len(ctx.sites),
            "sites_restored": sum(1 for s in ctx.sites if s.restored),
            "notes": ctx.notes,
            "rule_violations": rep.violations,
            "rule_patterns_checked": rep.checked_patterns,
        }
        report["functions"].append(entry)
        status = "PASS" if rep.ok() else "FAIL"
        if not rep.ok():
            all_ok = False
        print("[check] %s %s %s/%s restored; %d violations"
              % (status, ctx.sig["addr"],
                 entry["sites_restored"], entry["sites_total"],
                 len(rep.violations)))

    # ---- era compile
    compile_results = {}
    if not args.no_compile:
        for unit in units:
            cpp_path = os.path.join(args.out, unit + ".cpp")
            r = era_compile(cpp_path, args.out)
            compile_results[unit] = {
                "rc": r.returncode, "stdout": r.stdout, "stderr": r.stderr}
            print("[era] %s rc=%d" % (unit, r.returncode))
            if r.stdout.strip():
                print(r.stdout.rstrip())
            if r.stderr.strip():
                print(r.stderr.rstrip())
            if r.returncode != 0:
                all_ok = False
    report["compile"] = {k: {"rc": v["rc"]} for k, v in compile_results.items()}

    # ---- narrow-macro witness backflow (IG-aligned, solver-feedable)
    all_sightings = []
    for ctx, _unit in contexts:
        all_sightings.extend(getattr(ctx, "sightings", []))
    sight_path = os.path.join(args.out, "granularity_sightings.json")
    with open(sight_path, "w", encoding="utf-8") as f:
        json.dump({
            "meta": {
                "generated": None,
                "generator": "tools/decomp_sys/decompile.py "
                             "(narrow-macro witness backflow)",
                "method": {
                    "MACRO": "LOBYTE/HIBYTE/LOWORD/HIWORD store/read on "
                             "member or member-sourced local == IDA "
                             "dword-placeholder symptom; witness offset/"
                             "width recorded in IG entity format "
                             "(M:FN:this:0xOFF) for solver consumption",
                },
                "note": "format aligned with "
                        "anchors/insn_granularity_types.json",
            },
            "evidence": all_sightings,
        }, f, indent=1, ensure_ascii=False)
    print("[gran] %d narrow-macro sightings -> %s" % (
        len(all_sightings), sight_path))

    # ---- stats
    tot = sum(f["sites_total"] for f in report["functions"])
    res = sum(f["sites_restored"] for f in report["functions"])
    gran_nat = sum(1 for c, _u in contexts for s in c.sites
                   if s.action.startswith("GRANULARITY NATURAL"))
    gran_fbk = sum(1 for c, _u in contexts for s in c.sites
                   if "fallback" in s.action and s.kind == "intrinsic")
    report["stats"] = {
        "functions": len(report["functions"]),
        "offset_sites_identified": tot,
        "offset_sites_restored": res,
        "restoration_rate": (round(100.0 * res / tot, 1) if tot else None),
        "all_rule_checks_pass": all_ok,
        "granularity_natural_assignments": gran_nat,
        "granularity_bitsurgery_fallbacks": gran_fbk,
        "narrow_macro_sightings": len(all_sightings),
    }
    with open(os.path.join(args.out, "report.json"), "w", encoding="utf-8") as f:
        json.dump(report, f, indent=1, ensure_ascii=False)
    print("[stats] sites %d/%d restored (%.1f%%)" % (
        res, tot, (100.0 * res / tot if tot else 0.0)))
    return 0 if all_ok else 1


if __name__ == "__main__":
    sys.exit(main())
