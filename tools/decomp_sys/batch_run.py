#!/usr/bin/env python3
"""batch_run.py -- DECOMP-2 expansion batch driver (round 2, 2026-11-10).

Runs N functions through the full chain and accounts every verdict:

  1. pseudo.fetch (full_export block; empty Hex-Rays -> NO_PSEUDO)
  2. decompile.run_function (registry signature + passes)
  3. emission: cpp + pilot hpp per unit (unit = owning class, D-fix 1)
  4. checker.py rule 3/4 self-scan per function
  5. era cl compile per unit (VC6/SP3 .vc6-8447 + era_shim, /O2 /Gy /c)
  6. per-function COFF extraction from the unit .obj (one compile per unit)
  7. diffasm normalized byte-compare vs original gamemd.exe
  8. verdict + MISMATCH pathology classification
  9. ledger accounting (.omo/codegen_match/status.json) + batch report

CHUNKED / RESUMABLE (quota-interruption survival):
  * --chunk N (default 20) splits the address list into independent parts;
    each part gets its own output subdirectory part_XX.
  * after EVERY part: ledger flush + results.jsonl append + partial report.
  * --resume skips addresses whose verdict is already in results.jsonl.

Verdicts: MATCH | MISMATCH | COMPILE_FAIL | CONV_FAIL | NO_PSEUDO |
          NO_EXPORT | NO_CLS | DUP_SKIP | OBJ_EXTRACT_FAIL

Usage:
  python tools/decomp_sys/batch_run.py --batch .omo/agents/decomp_batch/batch100.json
  python tools/decomp_sys/batch_run.py --batch ... --chunk 20 --resume
  python tools/decomp_sys/batch_run.py 0x486380 0x4CA160       # ad-hoc addrs
  python tools/decomp_sys/batch_run.py --only family --max 10   # legacy batches
"""
import argparse
import json
import os
import re
import sys
import traceback
from collections import Counter, OrderedDict

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", ".."))
sys.path.insert(0, HERE)
sys.path.insert(0, ROOT)
sys.path.insert(0, os.path.join(ROOT, "tools", "codegen_match"))

import decompile                                     # noqa: E402
import pseudo                                        # noqa: E402
import checker                                       # noqa: E402
import hpp_pilot                                     # noqa: E402
from registry_ext import Registry                    # noqa: E402
from passes import ClassView                         # noqa: E402

from tools.codegen_match import extract as exmod     # noqa: E402
from tools.codegen_match import build_era as bemod   # noqa: E402
from tools.codegen_match import diffasm as dmod      # noqa: E402
from tools.codegen_match import ledger as lmod       # noqa: E402

OUT_DEFAULT = os.path.join(ROOT, ".omo", "decomp_batch", "run2")
STATE_DIR = os.path.join(ROOT, ".omo", "agents", "decomp_batch")
RESULTS_JSONL = os.path.join(STATE_DIR, "results.jsonl")
BATCHES = {
    "pilot": os.path.join(ROOT, ".omo", "agents", "phasea", "pilot_batch.json"),
    "family": os.path.join(ROOT, ".omo", "decomp_batch", "family_batch.json"),
}


# ---------------------------------------------------------------- obj side

def extract_fn_from_obj(obj_path, cls, method):
    """Slice one function out of a compiled unit .obj (single compile per
    unit; per-function extraction). Returns the artifact dict or raises."""
    coff = bemod.Coff(obj_path)
    cands = bemod.find_functions(coff)
    cls_ident = re.sub(r"[^A-Za-z0-9_]", "_", cls or "Unnamed")
    want = "%s::%s" % (cls_ident, method)
    hits = [c for c in cands if bemod.undecorate_key(c[0]) == want]
    if not hits:
        hits = [c for c in cands if bemod.undecorate_key(c[0]) == method
                and "::" not in bemod.undecorate_key(c[0])]
    if len(hits) != 1:
        keys = [bemod.undecorate_key(c[0]) for c in cands]
        raise SystemExit("obj symbol not unique for %s: %s" %
                         (want, [k for k in keys if want.split("::")[-1] in k]))
    fname, fval, fsec = hits[0]
    sec_raw = coff.data[fsec["ro"]:fsec["ro"] + fsec["rsz"]]
    blob_all = sec_raw[fval:]
    relocs_raw = coff.relocs_of(fsec)
    reloc_rvas = frozenset(r["rva"] for r in relocs_raw)
    end = bemod.function_end(blob_all, base=fval, reloc_offs=reloc_rvas)
    if end is None:
        raise SystemExit("cannot locate function end in obj for %s" % want)
    relocs = []
    for r in relocs_raw:
        roff = r["rva"] - fval
        if 0 <= roff < end:
            relocs.append({"off": roff,
                           "type": bemod.REL_NAMES.get(r["type"],
                                                       "0x%X" % r["type"]),
                           "sym": r["sym"],
                           "sym_key": bemod.undecorate_key(r["sym"])})
    relocs.sort(key=lambda x: x["off"])
    return {
        "symbol": fname, "sym_key": want, "size": end, "link_base": 0,
        "bytes_hex": blob_all[:end].hex(), "relocs": relocs,
    }


# ---------------------------------------------------------------- pathology

def norm_addr(a):
    return "0x%x" % int(a, 16)


JCC_SIGNED = re.compile(r"^j(?:l|le|g|ge)$")
JCC_AFTER_CMP = re.compile(r"^j(?:a|ae|b|be)$")

# [esp], [esp + 4], [esp+0xc] -- normalized stack-slot operand (diffasm text)
ESP_SLOT = re.compile(r"\[esp\s*(?:\+\s*(0x[0-9a-fA-F]+|\d+))?\s*\]")


def esp_slot(disasm):
    """Stack-slot offset of an [esp(+N)] operand in disasm text, else None."""
    m = ESP_SLOT.search(disasm)
    if not m:
        return None
    return int(m.group(1) or "0", 0)


def classify_diff(first):
    """first = (orig_insn_dict|None, ours_insn_dict|None) from dmod.compare.

    Pathology taxonomy (round-2 extension of the original three families;
    cc_mismatch criteria narrowed per R4 ruling, report_r4.md §1.1):
      cc_mismatch     param slot offset diff ([esp+4] vs [esp+8] at the same
                      param position) or retn-N disagreement. NOT a
                      "first insn reads stack vs reads ECX" form difference.
      eval_order      evaluation order / first-insn form difference (one side
                      reads a stack slot, the other reads ECX/a register)
      frame_sched     prologue/epilogue stack-frame scheduling
      ret_norm        bool/char return-width normalization (al vs eax)
      extern_reloc    OBJ reloc symbol key vs absolute orig address
      branch_polarity jcc taken/not-taken inverted
      branch_order    intra-function layout / block ordering
      regalloc        same op, different register assignment
      width_mismatch  load/store width disagreement (byte/word/dword)
      signedness      same width, signed vs unsigned compare/branch
      const_fold      same shape, different immediate constant
      codegen_shape   instruction-count divergence (no paired insn)
    """
    if not first or first[0] is None or first[1] is None:
        return "codegen_shape"          # instruction-count divergence
    o = first[0]["disasm"]
    b = first[1]["disasm"]
    om = o.split()[0] if o else ""
    bm = b.split()[0] if b else ""
    off0 = first[0]["off"] == 0

    # signedness: jl/jb, jg/ja, setl/setb pairs over the same cmp
    if (JCC_SIGNED.match(om) and JCC_AFTER_CMP.match(bm)) or \
       (JCC_AFTER_CMP.match(om) and JCC_SIGNED.match(bm)) or \
       (om in ("setl", "setle", "setg", "setge") and
        bm in ("setb", "setbe", "seta", "setae")) or \
       (bm in ("setl", "setle", "setg", "setge") and
        om in ("setb", "setbe", "seta", "setae")):
        return "signedness"

    # stdcall/callee-cleanup arity: same `ret`, different stack operand
    if om.startswith("ret") and bm.startswith("ret") and o != b:
        return "cc_mismatch"

    if "esp" in o and "esp" in b and (off0 or "sub esp" in o or "sub esp" in b):
        if om in ("mov", "movzx", "lea") and bm in ("mov", "movzx", "lea"):
            if off0 and ("[esp" in o) and ("[esp" in b):
                # R4 ruling: cc_mismatch ONLY when the same parameter
                # position is read from a DIFFERENT stack slot
                # ([esp+4] vs [esp+8]). Same slot in a different
                # register is plain regalloc.
                so_, sb_ = esp_slot(o), esp_slot(b)
                if so_ is not None and sb_ is not None and so_ != sb_:
                    return "cc_mismatch"
                return "regalloc"
        return "frame_sched"
    # frame introduced by an over-wide return/local: orig bare `mov al,[..]`
    # vs ours `push ecx` (int-result frame around a char return)
    if om == "mov" and (" al," in o) and bm == "push":
        return "ret_norm"
    # bool/char return normalization: al vs eax width games near tail
    if {om, bm} & {"set"} or ("al" in o and "eax" in b) or \
       ("eax" in o and "al" in b) or "movzx" in (om + bm):
        if om == bm or {om, bm} <= {"xor", "mov", "movzx", "cmp", "test",
                                    "set", "and"}:
            return "ret_norm"
    # OBJ extern relocation placeholder vs absolute address
    if re.search(r"\[0[x]?0*\]", b) and not re.search(r"\[0[x]?0*\]", o):
        return "extern_reloc"
    if om == bm:
        if re.fullmatch(r"j(n?e|n?z)", om) and re.fullmatch(r"j(n?e|n?z)", bm):
            return "branch_polarity"
        if ("esp" in o) != ("esp" in b):
            # R4 ruling: "first insn reads stack vs reads ECX" is an
            # evaluation-order / first-insn form difference, NOT a
            # calling-convention mismatch.
            return "eval_order"
        if om in ("jmp",) or om.startswith("j"):
            return "branch_order"
        # width differential only meaningful when both sides carry a memory
        # operand (avoids labelling a mov-vs-push pair "width_mismatch")
        op_has_ptr = " ptr " in o and " ptr " in b
        if op_has_ptr:
            for w in ("byte", "word", "dword"):
                if ("%s ptr" % w in o) != ("%s ptr" % w in b):
                    return "width_mismatch"
        # same mnemonic + same operand text but different imm -> const fold
        om_num = re.sub(r"(?:0x[0-9a-f]+|\b\d+\b)", "#", o)
        bm_num = re.sub(r"(?:0x[0-9a-f]+|\b\d+\b)", "#", b)
        if om_num == bm_num and o != b:
            return "const_fold"
        return "regalloc"
    if om.startswith("j") and bm.startswith("j"):
        return "branch_order"
    if " ptr " in o and " ptr " in b:
        for w in ("byte", "word", "dword"):
            if ("%s ptr" % w in o) != ("%s ptr" % w in b):
                return "width_mismatch"
    return "codegen_shape"


# ---------------------------------------------------------------- one part

def run_part(addrs, batch_src, out, reg, idx):
    """Full chain for one chunk of addresses. Returns OrderedDict addr->result."""
    inc_dir = os.path.join(out, "include")
    os.makedirs(inc_dir, exist_ok=True)
    for stale in os.listdir(inc_dir):
        if stale.endswith((".hpp", ".h")):
            os.remove(os.path.join(inc_dir, stale))
    for stale in os.listdir(out):
        if stale.endswith((".cpp", ".obj", ".hpp")):
            os.remove(os.path.join(out, stale))

    results = OrderedDict()
    contexts = []
    seen_emitted = set()

    print("=== convert (%d addrs) ===" % len(addrs))
    for addr in addrs:
        a_low = addr.lower()
        r = {"addr": a_low, "batch": batch_src.get(a_low, "adhoc"),
             "verdict": None, "note": None, "first_diff": None,
             "pathology": None}
        results[a_low] = r
        try:
            ex = pseudo.fetch(addr)
        except (KeyError, AttributeError, IndexError) as e:
            r.update(verdict="NO_EXPORT",
                     note="%s: %s" % (type(e).__name__, e))
            continue
        if not ex.body_lines:
            r.update(verdict="NO_PSEUDO",
                     note="empty Hex-Rays body (%dB disasm)" % ex.size)
            continue
        try:
            views = ClassView()
            ctx, unit = decompile.run_function(addr, reg, views, idx)
        except SystemExit as e:
            r.update(verdict="NO_CLS", note=str(e))
            continue
        except Exception:
            r.update(verdict="CONV_FAIL",
                     note=traceback.format_exc(limit=3).splitlines()[-1])
            continue
        key = (ctx.sig["cls"], ctx.sig["method"])
        if key in seen_emitted:
            r.update(verdict="DUP_SKIP",
                     note="duplicate %s::%s in part" % key)
            continue
        seen_emitted.add(key)
        ctx.batch = r["batch"]
        contexts.append((ctx, unit))
        r["name"] = ctx.sig["orig_name"]
        r["emitted"] = ("%s::%s" % key) if ctx.sig["cls"] else \
            ctx.sig["method"]
        r["unit"] = unit
        r["name_placeholder"] = ctx.sig.get("name_placeholder", False)
        r["cls_src"] = ctx.sig.get("cls_src")
        r["this_as_id"] = bool(ctx.sig.get("this_as_id"))
        r["sites"] = "%d/%d" % (sum(1 for s in ctx.sites if s.restored),
                                len(ctx.sites))
        print("[conv] %s %s -> %s" % (a_low, r["emitted"], unit))

    # ---- emission grouped per unit (mirrors decompile.main)
    def merge_views(dst, src):
        for cls, offs in src.scalars.items():
            for off, roles in offs.items():
                dst.scalars.setdefault(cls, {}).setdefault(off, {}) \
                    .update(roles)
        for cls, offs in src.arrays.items():
            for off, a in offs.items():
                dst.arrays.setdefault(cls, {}).setdefault(off, a)
        for cls, slots in src.virtuals.items():
            dst.virtuals.setdefault(cls, {}).update(slots)

    units = OrderedDict()
    for ctx, unit in contexts:
        units.setdefault(unit, []).append(ctx)

    print("=== emit %d units ===" % len(units))
    unit_members = {}
    for unit, ctxs in units.items():
        views = ClassView()
        for ctx in ctxs:
            merge_views(views, ctx.views)
        cpp_parts = []
        for ctx in ctxs:
            cpp_parts.append("")
            cpp_parts.append(decompile.emit_cpp(ctx, unit).rstrip())
        cpp_path = os.path.join(out, unit + ".cpp")
        with open(cpp_path, "w", encoding="utf-8", newline="\n") as f:
            f.write("\n".join(cpp_parts) + "\n")
        by_cls = OrderedDict()
        for ctx in ctxs:
            if ctx.sig["cls"] is None:
                continue        # NO_CLS global: extern-only unit hpp
            bucket = by_cls.setdefault(ctx.sig["cls"], [])
            if not ctx.sig.get("free"):
                bucket.append(ctx.sig)
        # R3 non-leaf: callee pseudo-sigs ride the by_cls mechanism -- a
        # called member gets its declaration inside the owner class block
        # (stub class when the owner has no functions of its own here)
        for ctx in ctxs:
            for owner, csigs in getattr(ctx, "used_callees", {}).items():
                bucket = by_cls.setdefault(owner, [])
                for cs in csigs:
                    if not any(s.get("method") == cs.get("method")
                               for s in bucket):
                        bucket.append(cs)
        # R7: foreign-class shells (member-type supply: through-pointer
        # views / `v11[1].field` records need DEFINED classes in the hpp)
        for cls, bucket in decompile.shell_augment(by_cls, views, reg).items():
            by_cls.setdefault(cls, bucket)
        unit_globals = {}
        unit_externs = []
        unit_fwd = set()
        for ctx in ctxs:
            for _ln in ctx.lines:
                for _m in re.finditer(r"\b([A-Z]\w+)\s*\*", _ln):
                    unit_fwd.add(_m.group(1))
            unit_globals.update(getattr(ctx, "used_globals", {}))
            for d in getattr(ctx, "used_callee_exts", []):
                if d not in unit_externs:
                    unit_externs.append(d)
            if ctx.sig.get("free"):
                d = decompile.free_decl(ctx.sig)
                if d not in unit_externs:
                    unit_externs.append(d)
        for cls, sigs in by_cls.items():
            size = (reg.classes.get(cls) or {}).get("size") or 0
            hpp_text, members = hpp_pilot.gen_class_hpp(
                cls, views, sigs, size, used_globals=unit_globals,
                extra_externs=unit_externs, extra_fwd=unit_fwd)
            with open(os.path.join(inc_dir, unit + ".hpp"), "a",
                      encoding="utf-8", newline="\n") as f:
                f.write(hpp_text)
            unit_members[(unit, cls)] = members
        if not by_cls:
            # class-less unit (NO_CLS free functions only): the cpp still
            # includes <unit>.hpp, so it must exist with the extern block
            with open(os.path.join(inc_dir, unit + ".hpp"), "a",
                      encoding="utf-8", newline="\n") as f:
                f.write(hpp_pilot.gen_free_hpp(
                    unit, used_globals=unit_globals,
                    extra_externs=unit_externs, extra_fwd=unit_fwd))

    # ---- rule self-check
    print("=== rule self-check ===")
    check_viol = 0
    for ctx, unit in contexts:
        body = "\n".join(ctx.lines)
        ct = {"this"}
        for t, n in ctx.sig["params"]:
            if t.replace("*", "").strip() in reg.classes:
                ct.add(n)
        members = unit_members.get((unit, ctx.sig["cls"]))
        rep = checker.check_function(ctx.sig["cls"], body, ct, members)
        r = results[norm_addr(ctx.sig["addr"])]
        r["rule_violations"] = len(rep.violations)
        if rep.violations:
            check_viol += 1
            r["note"] = (r["note"] or "") + "rule:%s" % rep.violations[0]["pattern"]

    # ---- era compile per unit (+ per-function isolation fallback)
    print("=== era compile ===")
    unit_rc = {}
    unit_objs = {}
    for unit in units:
        cpp_path = os.path.join(out, unit + ".cpp")
        cr = decompile.era_compile(cpp_path, out)
        unit_rc[unit] = cr
        print("[era] %-24s rc=%d" % (unit, cr.returncode))
        if cr.returncode == 0:
            unit_objs[unit] = os.path.join(out, unit + ".obj")
            continue
        err = (cr.stdout + cr.stderr).strip().splitlines()
        errtxt = "; ".join(x for x in err if "error" in x.lower())[:200]
        good = []
        for ctx in units[unit]:
            a_tag = norm_addr(ctx.sig["addr"])[2:]
            iso_base = "%s_%s" % (unit, a_tag)
            iso = os.path.join(out, iso_base + ".cpp")
            with open(iso, "w", encoding="utf-8", newline="\n") as f:
                f.write(decompile.emit_cpp(ctx, unit,
                                           hpp_name=iso_base) + "\n")
            by_cls2 = OrderedDict()
            if ctx.sig["cls"] is not None:
                bucket2 = by_cls2.setdefault(ctx.sig["cls"], [])
                if not ctx.sig.get("free"):
                    bucket2.append(ctx.sig)
            for owner, csigs in getattr(ctx, "used_callees", {}).items():
                bucket = by_cls2.setdefault(owner, [])
                for cs in csigs:
                    if not any(s.get("method") == cs.get("method")
                               for s in bucket):
                        bucket.append(cs)
            for cls2, bucket2 in decompile.shell_augment(
                    by_cls2, ctx.views, reg).items():
                by_cls2.setdefault(cls2, bucket2)
            exts2 = list(getattr(ctx, "used_callee_exts", []))
            if ctx.sig.get("free"):
                exts2.append(decompile.free_decl(ctx.sig))
            fwd2 = set()
            for _ln in ctx.lines:
                for _m in re.finditer(r"\b([A-Z]\w+)\s*\*", _ln):
                    fwd2.add(_m.group(1))
            for cls2, sigs2 in by_cls2.items():
                size2 = (reg.classes.get(cls2) or {}).get("size") or 0
                hpp2, _m2 = hpp_pilot.gen_class_hpp(
                    cls2, ctx.views, sigs2, size2,
                    used_globals=getattr(ctx, "used_globals", {}),
                    extra_externs=exts2, extra_fwd=fwd2)
                with open(os.path.join(inc_dir, iso_base + ".hpp"), "a",
                          encoding="utf-8", newline="\n") as f:
                    f.write(hpp2)
            if not by_cls2:
                # class-less isolated unit (NO_CLS global): extern-only hpp
                with open(os.path.join(inc_dir, iso_base + ".hpp"), "a",
                          encoding="utf-8", newline="\n") as f:
                    f.write(hpp_pilot.gen_free_hpp(
                        iso_base,
                        used_globals=getattr(ctx, "used_globals", {}),
                        extra_externs=exts2, extra_fwd=fwd2))
            icr = decompile.era_compile(iso, out)
            if icr.returncode == 0:
                good.append((ctx, os.path.splitext(iso)[0] + ".obj"))
            else:
                ierr = (icr.stdout + icr.stderr).strip().splitlines()
                itxt = "; ".join(x for x in ierr
                                 if "error" in x.lower())[:200]
                r = results[norm_addr(ctx.sig["addr"])]
                r.update(verdict="COMPILE_FAIL",
                         note=itxt or errtxt or "cl rc=%d" % icr.returncode)
        if good:
            unit_objs[unit] = None
            units[unit] = good
        else:
            for ctx in units[unit]:
                r = results[norm_addr(ctx.sig["addr"])]
                r.update(verdict="COMPILE_FAIL",
                         note=errtxt or "cl rc=%d" % cr.returncode)

    # ---- byte compare per function
    print("=== diffasm byte-compare ===")
    for unit in units:
        if unit_rc[unit].returncode != 0 and unit not in unit_objs:
            continue
        obj_path = unit_objs.get(unit)
        per_fn_objs = None
        if obj_path is None:
            per_fn_objs = {norm_addr(c.sig["addr"]): p for c, p in units[unit]}
        elif not os.path.exists(obj_path):
            alt = os.path.join(out, unit + ".obj")
            obj_path = alt if os.path.exists(alt) else obj_path
        for entry in units[unit]:
            if per_fn_objs is not None:
                ctx, fobj = entry
            else:
                ctx, fobj = entry, obj_path
            addr = norm_addr(ctx.sig["addr"])
            r = results[addr]
            tag = addr[2:].upper()
            try:
                orig_art = exmod.extract_function(addr, verbose=False)
            except SystemExit as e:
                r.update(verdict="NO_EXPORT", note="orig extract: %s" % e)
                continue
            with open(os.path.join(out, "orig_%s.json" % tag), "w",
                      encoding="utf-8") as f:
                json.dump(orig_art, f, indent=1)
            try:
                ours_art = extract_fn_from_obj(
                    fobj, ctx.sig["cls"], ctx.sig["method"])
            except SystemExit as e:
                r.update(verdict="OBJ_EXTRACT_FAIL", note=str(e)[:200])
                continue
            with open(os.path.join(out, "ours_%s.json" % tag), "w",
                      encoding="utf-8") as f:
                json.dump(ours_art, f, indent=1)
            sa, _ = dmod.load_orig_side(os.path.join(
                out, "orig_%s.json" % tag))
            sb = dmod.Side("ours", bytes.fromhex(ours_art["bytes_hex"]),
                           0, ours_art["size"], "obj",
                           relocs={rl["off"]: {"type": rl["type"],
                                               "key": rl["sym_key"]}
                                   for rl in ours_art["relocs"]})
            ok, first = dmod.compare(sa, sb, verbose=False)
            r["orig_size"] = orig_art["size"]
            r["ours_size"] = ours_art["size"]
            if ok:
                r.update(verdict="MATCH", note="%dB" % orig_art["size"])
            else:
                fd = None
                if first and first[0] and first[1]:
                    fd = {"orig": "+%d %s" % (first[0]["off"],
                                              first[0]["disasm"]),
                          "ours": "+%d %s" % (first[1]["off"],
                                              first[1]["disasm"])}
                r.update(verdict="MISMATCH", first_diff=fd,
                         pathology=classify_diff(first),
                         note="orig %dB ours %dB" % (orig_art["size"],
                                                     ours_art["size"]))
            print("[diff] %-10s %-16s %s" % (
                addr, r["verdict"], r.get("emitted") or r.get("note", "")))

    for r in results.values():
        if not r["verdict"]:
            r.update(verdict="INTERNAL_ERROR", note="no verdict assigned")
        # Audit-rem ②: "clean" = byte MATCH + zero rule violations.  A
        # this-as-id emission that could not be re-typed (param-carrying
        # family) still trips checker R7, so it is not clean either.
        r["clean"] = bool(r["verdict"] == "MATCH"
                          and not r.get("rule_violations"))
    return results, check_viol


# ---------------------------------------------------------------- report

def summarize(results):
    vc = Counter(r["verdict"] for r in results.values() if r["verdict"])
    pc = Counter(r["pathology"] for r in results.values()
                 if r.get("pathology"))
    decided = vc.get("MATCH", 0) + vc.get("MISMATCH", 0)
    match_rate = (100.0 * vc.get("MATCH", 0) / decided) if decided else 0.0
    return {
        "total": len(results),
        "verdicts": dict(vc),
        "pathologies": dict(pc),
        "match_rate_of_decided_pct": round(match_rate, 1),
        "match_rate_of_total_pct": round(
            100.0 * vc.get("MATCH", 0) / max(1, len(results)), 1),
    }


def append_results(results):
    os.makedirs(STATE_DIR, exist_ok=True)
    with open(RESULTS_JSONL, "a", encoding="utf-8") as f:
        for r in results.values():
            f.write(json.dumps(r, ensure_ascii=False) + "\n")


def load_done():
    done = {}
    if not os.path.exists(RESULTS_JSONL):
        return done
    with open(RESULTS_JSONL, encoding="utf-8") as f:
        for line in f:
            line = line.strip()
            if not line:
                continue
            try:
                r = json.loads(line)
            except ValueError:
                continue
            if r.get("verdict"):
                done[r["addr"].lower()] = r
    return done


def record_ledger(results):
    for addr, r in results.items():
        if not r["verdict"]:
            continue
        # Ledger semantics alignment (R5): COMPILE_FAIL is a decided
        # terminal verdict for a run, not "still pending" -- recording it
        # as PENDING is what inflated the pending pool (511 entries).
        status = {"MATCH": "OK", "MISMATCH": "NG",
                  "COMPILE_FAIL": "COMPILE_FAIL"}.get(r["verdict"], "PENDING")
        # Audit-rem ③: the ledger records the EFFECTIVE (emitted) identity,
        # not the stale signals display name.  orig_name/cls_src keep the
        # provenance so identity drift is auditable instead of invisible.
        emitted = r.get("emitted") or r.get("name") or addr
        lmod.record(addr, name=emitted,
                    status=status,
                    first_diff=(r.get("first_diff") or {}).get("orig"),
                    note="decomp_batch r2: %s%s" % (
                        r["verdict"],
                        "/" + r["pathology"] if r.get("pathology") else ""),
                    extra={"orig_name": r.get("name"),
                           "cls_src": r.get("cls_src"),
                           "rule_violations": r.get("rule_violations"),
                           "clean": r.get("clean"),
                           "this_as_id": r.get("this_as_id")})


# ---------------------------------------------------------------- driver

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("addrs", nargs="*")
    ap.add_argument("--batch", default=None, help="JSON list of {addr,...}")
    ap.add_argument("--only", default=None,
                    help="legacy: comma list of batch names (pilot,family)")
    ap.add_argument("--max", type=int, default=0)
    ap.add_argument("--out", default=OUT_DEFAULT)
    ap.add_argument("--chunk", type=int, default=20)
    ap.add_argument("--resume", action="store_true",
                    help="skip addresses already decided in results.jsonl")
    ap.add_argument("--no-ledger", action="store_true")
    args = ap.parse_args()

    addrs = [a.lower() for a in args.addrs]
    batch_src = {}
    if args.batch:
        for e in json.load(open(args.batch, encoding="utf-8")):
            a = e["addr"].lower()
            if a not in addrs:
                addrs.append(a)
                batch_src[a] = e.get("family") or e.get("batch") or "batch"
    only = args.only
    if only is None and not args.addrs and not args.batch:
        only = "pilot,family"
    if only:
        for bname in [b.strip() for b in only.split(",") if b.strip()]:
            path = BATCHES.get(bname)
            if not path or not os.path.exists(path):
                continue
            for e in json.load(open(path, encoding="utf-8")):
                a = e["addr"].lower()
                if a not in addrs:
                    addrs.append(a)
                    batch_src[a] = bname
    if args.max:
        addrs = addrs[:args.max]
    if not addrs:
        ap.error("no addresses (pass addrs / --batch / --only)")

    done = load_done() if args.resume else {}
    if done:
        before = len(addrs)
        addrs = [a for a in addrs if a not in done]
        print("[resume] %d/%d already decided, %d to run"
              % (before - len(addrs), before, len(addrs)))
    if not addrs:
        print("[resume] nothing to do")
        return 0

    out_root = os.path.abspath(args.out)
    os.makedirs(out_root, exist_ok=True)
    reg = Registry.get()
    idx = pseudo.load_index()

    all_results = OrderedDict()
    check_viol_total = 0
    nparts = (len(addrs) + args.chunk - 1) // args.chunk
    for pi in range(nparts):
        part = addrs[pi * args.chunk:(pi + 1) * args.chunk]
        if not part:
            continue
        pout = os.path.join(out_root, "part_%02d" % pi)
        print("=" * 70)
        print("PART %d/%d  (%d fns) -> %s" % (pi + 1, nparts, len(part), pout))
        results, cv = run_part(part, batch_src, pout, reg, idx)
        check_viol_total += cv
        all_results.update(results)
        append_results(results)
        if not args.no_ledger:
            record_ledger(results)
        with open(os.path.join(pout, "part_report.json"), "w",
                  encoding="utf-8") as f:
            json.dump({"summary": summarize(results),
                       "results": list(results.values())},
                      f, indent=1, ensure_ascii=False)

    # ---- cumulative over this invocation + everything decided before
    merged = dict(done)
    merged.update(all_results)
    summary = summarize(merged)
    summary["rule_violation_fns"] = check_viol_total
    summary["parts"] = nparts
    print("=" * 70)
    print(json.dumps(summary, indent=1))
    with open(os.path.join(out_root, "batch_report.json"), "w",
              encoding="utf-8") as f:
        json.dump({"summary": summary,
                   "results": list(merged.values())},
                  f, indent=1, ensure_ascii=False)
    print("report -> %s" % os.path.join(out_root, "batch_report.json"))
    return 0


if __name__ == "__main__":
    sys.exit(main())
