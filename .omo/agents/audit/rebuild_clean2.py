#!/usr/bin/env python3
"""Rebuild 'HEAD + audit-remediation edits only' copies of passes.py and
decompile.py into .omo/agents/audit/rebuilt/.

The worktree also carries a concurrent session's uncommitted CW2 changes in
these files; they are intentionally excluded from the remediation commit.
My additions are extracted from the worktree by marker and re-inserted into
the HEAD content at the HEAD anchors (same edits I applied interactively).
"""
import os
import subprocess
import sys

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", "..", ".."))
DST = os.path.join(ROOT, ".omo", "agents", "audit", "rebuilt")
os.makedirs(DST, exist_ok=True)


def read(p):
    with open(os.path.join(ROOT, p), encoding="utf-8", errors="replace") as f:
        return f.read()


def head(p):
    return subprocess.check_output(
        ["git", "show", "HEAD:" + p], cwd=ROOT).decode("utf-8")


def grab(text, start_marker, end_marker):
    i = text.find(start_marker)
    if i < 0:
        raise SystemExit("start marker missing: %r" % start_marker)
    j = text.find(end_marker, i)
    if j < 0:
        raise SystemExit("end marker missing after %r: %r"
                         % (start_marker, end_marker))
    return text[i:j]


def insert_before(dst, anchor, block):
    n = dst.count(anchor)
    if n != 1:
        raise SystemExit("anchor count %d != 1: %r" % (n, anchor[:80]))
    return dst.replace(anchor, block + anchor)


def insert_after(dst, anchor, block):
    n = dst.count(anchor)
    if n != 1:
        raise SystemExit("anchor count %d != 1: %r" % (n, anchor[:80]))
    return dst.replace(anchor, anchor + block)


def replace(dst, old, new):
    n = dst.count(old)
    if n != 1:
        raise SystemExit("replace count %d != 1: %r" % (n, old[:80]))
    return dst.replace(old, new)


def rebuild_passes():
    cur = read("tools/decomp_sys/passes.py")
    head_txt = head("tools/decomp_sys/passes.py")

    block1 = grab(cur,
                  "# Audit-rem ② (2026-11-12): the NESTED cast spellings",
                  "_ROLE_OF_W = {1:")
    # block contains the three regexes then the role map anchor -- cut at the
    # first blank line after _BARE_THIS_ADDR
    end = block1.find("_BARE_THIS_ADDR = re.compile")
    end = block1.find("\n", end) + 1
    block1 = block1[:end]

    block2 = grab(cur,
                  "    # ---- audit-rem ②: `*((T *)this + N)`",
                  "    # R4: bare `*this`")
    block3 = grab(cur,
                  "# ---------------------------------------------------------------- member addr",
                  "# ---------------------------------------------------------------- unknown syms")

    head_txt = insert_after(head_txt,
                            '_THIS_SUB = re.compile(r"\\bthis\\s*\\[\\s*(?P<off>\\d+)\\s*\\]")\n',
                            "\n" + block1)
    head_txt = insert_after(head_txt,
                            "    text = _THIS_SUB.sub(bare_repl, text)\n",
                            "\n" + block2 + "\n")
    head_txt = insert_before(head_txt,
                             "# ---------------------------------------------------------------- unknown syms",
                             block3)

    out = os.path.join(DST, "passes.py")
    with open(out, "w", encoding="utf-8", newline="\n") as f:
        f.write(head_txt)
    print("rebuilt", out)


def rebuild_decompile():
    cur = read("tools/decomp_sys/decompile.py")
    head_txt = head("tools/decomp_sys/decompile.py")

    helpers = grab(cur,
                   "# ---------------------------------------------------------------- this-as-id",
                   "def _proto_params(proto, keep_this=False):")

    proto_gate = grab(cur,
                      "    # Audit-rem ③: proto `T *this` is accepted only when T derives",
                      "    # R3: a registry `unknown` return is not a type")

    asid = grab(cur,
                "    # Audit-rem ①: this-as-id arbitration",
                "    # R3 ret-width narrowing")

    # 1) helpers before _proto_params
    head_txt = insert_before(head_txt,
                             "def _proto_params(proto, keep_this=False):",
                             helpers)

    # 2) proto block rewrite (same as the interactive edit)
    head_txt = replace(head_txt,
'''    pm = re.search(r"\\(\\s*([A-Za-z_]\\w*)\\s*\\*\\s*_?this\\b", ex.proto or "")
    if pm:
        pty = pm.group(1)
        if pty in reg.classes and pty != cls:
            cls, cls_src = pty, "proto_this"''',
'''    # Audit-rem ③: applied below as a NARROWING only (see _class_ancestors).
    pm = re.search(r"\\(\\s*([A-Za-z_]\\w*)\\s*\\*\\s*_?this\\b", ex.proto or "")
    pty = pm.group(1) if pm else None''')

    # 3) proto gate after ret_notes
    head_txt = insert_after(head_txt, "    ret_notes = []\n", proto_gate)

    # 4) stdcall free arity
    head_txt = replace(head_txt,
'''        if retn_bytes and no_stack_read and retn_bytes % 4 == 0:
            have = sum((WIDTH_TY.get(t, 4) or 4) for t, _ in params)
            want = max(0, retn_bytes // 4 - 1)''',
'''        if retn_bytes and no_stack_read and retn_bytes % 4 == 0:
            have = sum((WIDTH_TY.get(t, 4) or 4) for t, _ in params)
            # Audit-rem ③: a FREE __stdcall function has no implicit
            # `this` slot -- the whole retn cleanup belongs to explicit
            # params (0x48ACE0 Return::HRESULT_Fail: retn 0Ch = 3 params,
            # not 2 + a phantom receiver).
            want = max(0, retn_bytes // 4 - (1 if cls else 0))''')

    head_txt = replace(head_txt,
'''                    ret_notes.append(
                        ("cc_stdcall_arity",
                         "stdcall member retn 0x%X -> arity %d padded"
                         % (retn_bytes, want)))''',
'''                    ret_notes.append(
                        ("cc_stdcall_arity",
                         "stdcall %s retn 0x%X -> arity %d padded"
                         % ("member" if cls else "free", retn_bytes, want)))''')

    # 5) this-as-id block before ret-width narrowing
    head_txt = insert_before(head_txt,
                             "    # R3 ret-width narrowing from the binary's return paths: when EVERY",
                             asid)

    # 6) return dict: this_as_id field
    head_txt = replace(head_txt,
'''        "ret": ret,
        "cc": cc,
        "free": free_fn,''',
'''        "ret": ret,
        "cc": cc,
        "free": free_fn,
        # Audit-rem ①: receiver is an integer ID (see _this_as_id_evidence);
        # emitted as a STATIC __fastcall member with int p0.
        "this_as_id": this_as_id,''')

    # 7) this_at_a1
    head_txt = replace(head_txt,
'''        "this_at_a1": (not free_fn) and (
            cc in ("thiscall", "__thiscall") or''',
'''        "this_at_a1": (not free_fn) and (not this_as_id) and (
            cc in ("thiscall", "__thiscall") or''')

    # 8) run_function body rename
    head_txt = replace(head_txt,
'''    if sig.get("free_this"):
        # the raw pseudo-code receiver keyword is C++-reserved; the free
        # shell spells it as the explicit first parameter
        ctx.lines = [re.sub(r"\\bthis\\b", "this_", ln) for ln in ctx.lines]''',
'''    if sig.get("free_this"):
        # the raw pseudo-code receiver keyword is C++-reserved; the free
        # shell spells it as the explicit first parameter
        ctx.lines = [re.sub(r"\\bthis\\b", "this_", ln) for ln in ctx.lines]
    if sig.get("this_as_id"):
        # audit-rem ①: the receiver is an integer ID -- the honest body
        # compares the explicit parameter, never the object pointer.  The
        # pseudo-code's pointer cast around the id literal is meaningless
        # for an int parameter (strip it; the codegen is unchanged).
        pname = sig["param_names"][0]
        out = []
        for ln in ctx.lines:
            ln = re.sub(r"\\bthis\\b", pname, ln)
            ln = re.sub(
                r"\\(\\s*(?:[A-Za-z_]\\w*(?:\\s+[A-Za-z_]\\w+)*)\\s*\\*\\s*\\)\\s*"
                r"(?=(?:0x[0-9A-Fa-f]+|\\d+)\\b)", "", ln)
            out.append(ln)
        ctx.lines = out''')

    # 9) pass_member_addr_view call after widen_byref
    head_txt = replace(head_txt,
'''    passes.pass_member_shapes(ctx)
    widen_byref_for_dispatch(ctx)''',
'''    passes.pass_member_shapes(ctx)
    widen_byref_for_dispatch(ctx)
    # audit-rem ②: `(T*)&this->m` member-address puns -> offset-true
    # char-array view (checker R3 contract; codegen-neutral `lea`)
    passes.pass_member_addr_view(ctx)''')

    out = os.path.join(DST, "decompile.py")
    with open(out, "w", encoding="utf-8", newline="\n") as f:
        f.write(head_txt)
    print("rebuilt", out)


if __name__ == "__main__":
    rebuild_passes()
    rebuild_decompile()
