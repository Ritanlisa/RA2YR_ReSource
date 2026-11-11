#!/usr/bin/env python3
"""Build the NO_CLS-only patch (HEAD + own hooks) for entangled files.

The working tree also carries a parallel session's CW2 changes to
decompile.py / batch_run.py / hpp_pilot.py.  This script reconstructs
HEAD + ONLY the NO_CLS hooks, emits a unified diff, so the index can be
staged/committed without swallowing the other session's work.
"""
import os
import subprocess
import sys

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", "..", ".."))
TMP = os.path.join(ROOT, ".omo", "tmp_nocls_head")
FILES = ["tools/decomp_sys/decompile.py",
         "tools/decomp_sys/batch_run.py",
         "tools/decomp_sys/hpp_pilot.py"]

# (file, old, new) -- exact edit pairs applied to the HEAD blob
EDITS = [
    # ---------------- decompile.py ----------------
    ("tools/decomp_sys/decompile.py",
     '''    pm = re.search(r"\\(\\s*([A-Za-z_]\\w*)\\s*\\*\\s*_?this\\b", ex.proto or "")
    if pm:
        pty = pm.group(1)
        if pty in reg.classes and pty != cls:
            cls, cls_src = pty, "proto_this"
''',
     '''    pm = re.search(r"\\(\\s*([A-Za-z_]\\w*)\\s*\\*\\s*_?this\\b", ex.proto or "")
    if pm:
        pty = pm.group(1)
        if pty in reg.classes and pty != cls:
            cls, cls_src = pty, "proto_this"
    # NO_CLS recovery: a signals-cls-less function may still carry hard
    # class evidence (vtable-slot ownership / class-typed proto this /
    # qualified name).  The resolver canonicalizes aliases and namespaces,
    # so a class the registry knows under another spelling binds too.
    if cls is None:
        att = reg.resolve_function_class(ex.addr, ex.proto, name)
        if att["cls"]:
            cls, cls_src = att["cls"], "resolve:%s" % att["src"]
'''),
    ("tools/decomp_sys/decompile.py",
     '''    # arity cross-check vs the binary epilogue (D-fix: `ret` vs `ret 4`
''',
     '''    # NO_CLS-recovered members: signals carried an untyped all-`int` param
    # list (the very loss the vtable-slot attribution had to recover from),
    # while the export proto -- the same live-typing authority used for the
    # return type above -- spells the real pointer widths.  Re-spell ONLY
    # this recovered population; registry-typed signatures are never
    # touched (no blast radius on the 109 already byte-matching NO_CLS
    # free functions or on the historical MATCH pool).
    if cls_src and str(cls_src).startswith("resolve:") and params and \\
            all(t == "int" for t, _ in params):
        pp = _proto_params(ex.proto)
        if pp:
            params = pp
            ret_notes.append(
                ("proto_param_spell",
                 "NO_CLS-recovered member: all-int registry params -> "
                 "proto types (%d params)" % len(pp)))
    # arity cross-check vs the binary epilogue (D-fix: `ret` vs `ret 4`
'''),
    ("tools/decomp_sys/decompile.py",
     '''def run_function(addr, reg, views, idx):
    ex = pseudo.fetch(addr)
    sig = derive_signature(reg, ex)
    if sig["cls"] is None:
        raise SystemExit("no registry class for %s" % addr)
    ctx = FunctionCtx(ex, sig, reg, views)
    passes.pass_param_rename(ctx)
''',
     '''def run_function(addr, reg, views, idx):
    ex = pseudo.fetch(addr)
    sig = derive_signature(reg, ex)
    if sig["cls"] is None:
        # NO_CLS contract (2026-11-12): a function with no class evidence
        # is a GLOBAL function -- the emitter's file-level free channel is
        # the honest shape.  Previously this hard-failed ("no registry
        # class") and burned 26.8% of the census sample.
        #
        # Calling convention is preserved from the binary/registry:
        #   cdecl/unknown -> __cdecl, stdcall -> __stdcall,
        #   fastcall      -> __fastcall,
        #   thiscall      -> __fastcall with an explicit `this_` first
        #                    parameter (ECX == arg1; member-NESS without a
        #                    class identity cannot be spelled as a member).
        sig["free"] = True
        cc = sig.get("cc")
        if cc in ("thiscall", "__thiscall"):
            sig["cc"] = "__fastcall"
            sig["params"].insert(0, ("int", "this_"))
            sig["param_names"].insert(0, "this_")
            sig["free_this"] = True
        elif cc not in ("__cdecl", "__stdcall", "__fastcall"):
            sig["cc"] = "__cdecl"
        sig["this_at_a1"] = False
        sig["sig_notes"].append(
            ("free_no_cls",
             "no class evidence (vsa_slot/proto_this/name_prefix) -> global "
             "free function, cc %s%s" % (sig["cc"],
                                         " + explicit this_" if
                                         sig.get("free_this") else "")))
    ctx = FunctionCtx(ex, sig, reg, views)
    if sig.get("free_this"):
        # the raw pseudo-code receiver keyword is C++-reserved; the free
        # shell spells it as the explicit first parameter
        ctx.lines = [re.sub(r"\\bthis\\b", "this_", ln) for ln in ctx.lines]
    passes.pass_param_rename(ctx)
'''),
    ("tools/decomp_sys/decompile.py",
     '''def free_decl(sig):
    """`extern RET __cdecl Name(args);` for a cdecl-arbitrated free fn."""
    args = ", ".join("%s %s" % (t, n) for t, n in sig["params_spelled"])
    return "extern %s __cdecl %s(%s);" % (sig["ret"], sig["method"], args)
''',
     '''def _cc_token(sig, default="__cdecl"):
    """Emission calling-convention token for a free function."""
    return {"__fastcall": " __fastcall",
            "__stdcall": " __stdcall",
            "__cdecl": " __cdecl"}.get(sig.get("cc"), " " + default)


def free_decl(sig):
    """`extern RET __cdecl Name(args);` for a cdecl-arbitrated free fn."""
    args = ", ".join("%s %s" % (t, n) for t, n in sig["params_spelled"])
    return "extern %s %s %s(%s);" % (sig["ret"], _cc_token(sig).strip(),
                                     sig["method"], args)
'''),
    ("tools/decomp_sys/decompile.py",
     '''    if sig.get("free"):
        # R4 cdecl arbitration: the binary has no receiver register, so the
        # function is emitted at global scope with __cdecl (a thiscall
        # member would pop its arguments).
        head = "%s __cdecl %s(%s)" % (sig["ret"], sig["method"], args)
''',
     '''    if sig.get("free"):
        # R4 cdecl arbitration / NO_CLS global path: the binary has no
        # class identity (or no receiver register), so the function is
        # emitted at global scope with its registry calling convention
        # (a thiscall member would pop its arguments).
        head = "%s%s %s(%s)" % (sig["ret"], _cc_token(sig), sig["method"],
                                args)
'''),
    ("tools/decomp_sys/decompile.py",
     '''        for c in frontier:
            if c in by_cls or c in out:
                continue
''',
     '''        for c in frontier:
            if not c or c in by_cls or c in out:
                continue        # None == NO_CLS free function view bucket
'''),
    ("tools/decomp_sys/decompile.py",
     '''        # pilot hpp: all classes touched by this unit
        by_cls = OrderedDict()
        for ctx in ctxs:
            bucket = by_cls.setdefault(ctx.sig["cls"], [])
            if not ctx.sig.get("free"):
                bucket.append(ctx.sig)
''',
     '''        # pilot hpp: all classes touched by this unit
        by_cls = OrderedDict()
        for ctx in ctxs:
            if ctx.sig["cls"] is None:
                continue        # NO_CLS global: extern-only unit hpp
            bucket = by_cls.setdefault(ctx.sig["cls"], [])
            if not ctx.sig.get("free"):
                bucket.append(ctx.sig)
'''),
    ("tools/decomp_sys/decompile.py",
     '''            with open(hpp_path, "a", encoding="utf-8", newline="\\n") as f:
                f.write(hpp_text)
            members_by_cls[cls] = members
        unit_sigs = []
''',
     '''            with open(hpp_path, "a", encoding="utf-8", newline="\\n") as f:
                f.write(hpp_text)
            members_by_cls[cls] = members
        if not by_cls:
            # class-less unit (NO_CLS free functions only): the cpp still
            # includes <unit>.hpp, so it must exist with the extern block
            hpp_path = os.path.join(inc_dir, unit + ".hpp")
            with open(hpp_path, "a", encoding="utf-8", newline="\\n") as f:
                f.write(hpp_pilot.gen_free_hpp(
                    unit, used_globals=unit_globals,
                    extra_externs=unit_externs))
        unit_sigs = []
'''),
    ("tools/decomp_sys/decompile.py",
     '''            "emitted": "%s::%s" % (ctx.sig["cls"], ctx.sig["method"]),
''',
     '''            "emitted": ("%s::%s" % (ctx.sig["cls"], ctx.sig["method"])
                        if ctx.sig["cls"] else ctx.sig["method"]),
'''),
    # ---------------- batch_run.py ----------------
    ("tools/decomp_sys/batch_run.py",
     '''        r["emitted"] = "%s::%s" % key
''',
     '''        r["emitted"] = ("%s::%s" % key) if ctx.sig["cls"] else \\
            ctx.sig["method"]
'''),
    ("tools/decomp_sys/batch_run.py",
     '''        by_cls = OrderedDict()
        for ctx in ctxs:
            bucket = by_cls.setdefault(ctx.sig["cls"], [])
            if not ctx.sig.get("free"):
                bucket.append(ctx.sig)
''',
     '''        by_cls = OrderedDict()
        for ctx in ctxs:
            if ctx.sig["cls"] is None:
                continue        # NO_CLS global: extern-only unit hpp
            bucket = by_cls.setdefault(ctx.sig["cls"], [])
            if not ctx.sig.get("free"):
                bucket.append(ctx.sig)
'''),
    ("tools/decomp_sys/batch_run.py",
     '''            unit_members[(unit, cls)] = members

    # ---- rule self-check
''',
     '''            unit_members[(unit, cls)] = members
        if not by_cls:
            # class-less unit (NO_CLS free functions only): the cpp still
            # includes <unit>.hpp, so it must exist with the extern block
            with open(os.path.join(inc_dir, unit + ".hpp"), "a",
                      encoding="utf-8", newline="\\n") as f:
                f.write(hpp_pilot.gen_free_hpp(
                    unit, used_globals=unit_globals,
                    extra_externs=unit_externs, extra_fwd=unit_fwd))

    # ---- rule self-check
'''),
    ("tools/decomp_sys/batch_run.py",
     '''            by_cls2 = OrderedDict()
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
            for cls2, sigs2 in by_cls2.items():
                size2 = (reg.classes.get(cls2) or {}).get("size") or 0
                exts2 = list(getattr(ctx, "used_callee_exts", []))
                if ctx.sig.get("free"):
                    exts2.append(decompile.free_decl(ctx.sig))
                fwd2 = set()
                for _ln in ctx.lines:
                    for _m in re.finditer(r"\\b([A-Z]\\w+)\\s*\\*", _ln):
                        fwd2.add(_m.group(1))
                hpp2, _m2 = hpp_pilot.gen_class_hpp(
                    cls2, ctx.views, sigs2, size2,
                    used_globals=getattr(ctx, "used_globals", {}),
                    extra_externs=exts2, extra_fwd=fwd2)
                with open(os.path.join(inc_dir, iso_base + ".hpp"), "a",
                          encoding="utf-8", newline="\\n") as f:
                    f.write(hpp2)
''',
     '''            by_cls2 = OrderedDict()
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
                for _m in re.finditer(r"\\b([A-Z]\\w+)\\s*\\*", _ln):
                    fwd2.add(_m.group(1))
            for cls2, sigs2 in by_cls2.items():
                size2 = (reg.classes.get(cls2) or {}).get("size") or 0
                hpp2, _m2 = hpp_pilot.gen_class_hpp(
                    cls2, ctx.views, sigs2, size2,
                    used_globals=getattr(ctx, "used_globals", {}),
                    extra_externs=exts2, extra_fwd=fwd2)
                with open(os.path.join(inc_dir, iso_base + ".hpp"), "a",
                          encoding="utf-8", newline="\\n") as f:
                    f.write(hpp2)
            if not by_cls2:
                # class-less isolated unit (NO_CLS global): extern-only hpp
                with open(os.path.join(inc_dir, iso_base + ".hpp"), "a",
                          encoding="utf-8", newline="\\n") as f:
                    f.write(hpp_pilot.gen_free_hpp(
                        iso_base,
                        used_globals=getattr(ctx, "used_globals", {}),
                        extra_externs=exts2, extra_fwd=fwd2))
'''),
    # ---------------- hpp_pilot.py ----------------
    ("tools/decomp_sys/hpp_pilot.py",
     "_PRIM_TYPES = {",
     'def gen_free_hpp(unit, extra_notes=(), used_globals=None, extra_externs=None,\n                 extra_fwd=None):\n    """Extern-only unit hpp for a translation unit with NO class shells.\n\n    NO_CLS global functions are emitted at file scope (no owning class);\n    the cpp still `#include "<unit>.hpp"`, so the unit needs a mirror hpp\n    carrying the same guard/include/extern contract gen_class_hpp gives a\n    class-bearing unit -- just without a `class {...};` block.\n    """\n    guard = "DECOMP_PILOT_" + re.sub(r"[^A-Za-z0-9]", "_", unit).upper() \\\n        + "_HPP"\n    lines = []\n    lines.append("// GENERATED by tools/decomp_sys/hpp_pilot.py -- pilot "\n                 "stand-in")\n    lines.append("// global-function unit (NO_CLS free shell: no owning "\n                 "class).  DO NOT EDIT.")\n    for n in extra_notes:\n        lines.append("// %s" % n)\n\n    fwd = set()\n    if extra_fwd:\n        for n in extra_fwd:\n            if not n or _is_prim(n) or n in _PRIM_TYPES or n in WIDTH_OF:\n                continue\n            fwd.add(n)\n    if used_globals:\n        gnames = set(used_globals)\n        for name in list(used_globals):\n            ty = used_globals[name]\n            if ty.endswith("*"):\n                b = ty.replace("*", "").strip()\n                if b and not _is_prim(b) and b not in _PRIM_TYPES \\\n                        and b not in WIDTH_OF:\n                    if b in gnames:\n                        used_globals[name] = "void *"\n                        continue\n                    fwd.add(b)\n        fwd -= gnames\n    if fwd:\n        lines.append("// forward declarations")\n        lines.extend("class %s;" % f for f in sorted(fwd))\n        lines.append("")\n\n    lines.append("#ifndef %s" % guard)\n    lines.append("#define %s" % guard)\n    lines.append("")\n    lines.append("#include <string.h>   // memset (whole-object zero init)")\n    lines.append("#include <stdlib.h>   // qsort/abs/atoi (CRT calls in bodies)")\n    lines.append("#include <stdio.h>    // sprintf/sscanf/printf (R5)")\n    lines.append("#include <stdarg.h>   // va_list (R5)")\n    lines.append("")\n    if used_globals:\n        lines.append("// ---- globals used by this unit (registry names)")\n        for name in sorted(used_globals):\n            ty = used_globals[name]\n            if ty.endswith("[]"):\n                lines.append("extern %s %s[];" % (ty[:-2], name))\n            else:\n                lines.append("extern %s %s;" % (ty, name))\n        lines.append("")\n    if extra_externs:\n        lines.append("// ---- global callee prototypes (R3 non-leaf)")\n        for d in extra_externs:\n            lines.append(d.replace("__thiscall", "__stdcall"))\n        lines.append("")\n    lines.append("#endif  // %s" % guard)\n    lines.append("")\n    return "\\n".join(lines)\n\n\n' + "_PRIM_TYPES = {"),
]


def main():
    os.makedirs(TMP, exist_ok=True)
    versions = {}
    for f in FILES:
        head = subprocess.run(["git", "show", "HEAD:%s" % f], cwd=ROOT,
                              capture_output=True, check=True).stdout.decode()
        versions[f] = head
    for f, old, new in EDITS:
        if old not in versions[f]:
            print("MISS %s: %r..." % (f, old.splitlines()[0][:60]))
            return 1
        if versions[f].count(old) != 1:
            print("AMBIGUOUS %s: %r..." % (f, old.splitlines()[0][:60]))
            return 2
        versions[f] = versions[f].replace(old, new)
    patch = []
    for f in FILES:
        tmp_path = os.path.join(TMP, os.path.basename(f))
        with open(tmp_path, "w", encoding="utf-8", newline="\n") as fh:
            fh.write(versions[f])
        r = subprocess.run(["git", "diff", "--no-index", "--no-color",
                            "-U6", tmp_path, os.path.join(ROOT, f)],
                           cwd=ROOT, capture_output=True)
        # keep only HEAD-vs-myhooks direction: regenerate via diff of
        # HEAD-blob content and myhooks content (tmp file) instead
        head_path = os.path.join(TMP, "head_" + os.path.basename(f))
        with open(head_path, "w", encoding="utf-8", newline="\n") as fh:
            fh.write(subprocess.run(
                ["git", "show", "HEAD:%s" % f], cwd=ROOT,
                capture_output=True, check=True).stdout.decode())
        r = subprocess.run(["git", "diff", "--no-index", "--no-color",
                            "-U6", head_path, tmp_path],
                           cwd=ROOT, capture_output=True)
        d = r.stdout.decode()
        if not d.strip():
            continue
        d = d.replace("a/" + head_path.replace("\\", "/"),
                      "a/" + f).replace("b/" + tmp_path.replace("\\", "/"),
                                        "b/" + f)
        d = d.replace(head_path, f).replace(tmp_path, f)
        # normalize the ---/+++ path prefixes git apply understands
        lines = []
        for ln in d.split("\n"):
            if ln.startswith("--- "):
                lines.append("--- a/%s" % f)
            elif ln.startswith("+++ "):
                lines.append("+++ b/%s" % f)
            elif ln.startswith("diff --git "):
                lines.append("diff --git a/%s b/%s" % (f, f))
            else:
                lines.append(ln)
        patch.append("\n".join(lines))
    out = os.path.join(ROOT, ".omo", "agents", "decomp_batch",
                       "nocls_hooks.patch")
    with open(out, "w", encoding="utf-8", newline="\n") as fh:
        fh.write("\n".join(patch) + "\n")
    print("wrote", out, os.path.getsize(out), "bytes")
    return 0


if __name__ == "__main__":
    sys.exit(main())
