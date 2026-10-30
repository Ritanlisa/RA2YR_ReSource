#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""Supplementary CALL_ARG (this / ECX) constraint extractor — v2.

v2 changes (review fixes):
  D1 vocabulary: every emitted `from` is normalized into a form accepted by
     minclass_solver.ent_id():
         <reg8>                      (call-site scope)
         stack_+0xNN                 (positive offsets only — ent_id rejects "stack_-")
         vtable_slot_0xNN
         offset <global>             (IDA auto-name pattern, or hex addr in .data range)
         0xADDR:this / 0xADDR::paramN
         0xADDR:this.member(0xNN)    (M-entity: member/sub-object passed as this)
     Conversions performed:
       - mov/lea ecx,[reg+disp] / lea ecx,reg+disp where base reg traces to the
         function's own this (this-sink `mov reg, ecx`) -> M-entity form.
       - bare IDA data names / `name.field` expressions -> `offset <base>` (name
         form for auto-names, hex-address form otherwise).
     Everything unconvertible is DROPPED and counted (meta.dropped_vocabulary).
  D2 chain accounting: `ecx_insn` records the instruction that LAST writes ECX
     before the call; `chain` records every additional def hop (max 6 texts).
     Chains that resolve to a definite non-pointer def (xor/pop/imm/…) are
     dropped and counted (meta.dropped_chain).
  D3 `--validate N`: samples N edges and re-verifies them against the live IDB.

Read-only w.r.t. the IDB. Deterministic: reruns are byte-identical.
Output: anchors/supplementary_call_args.json
"""
import argparse
import datetime
import json
import os
import re
import sys

_HERE = os.path.dirname(os.path.abspath(__file__))
_ROOT = os.path.dirname(os.path.dirname(_HERE))  # repo root
_X201 = os.path.join(_ROOT, ".omo", "x201")
if _X201 not in sys.path:
    sys.path.insert(0, _X201)

from mcp_client import McpHttp  # noqa: E402

DEFAULT_OUTPUT = os.path.join(_ROOT, "anchors", "supplementary_call_args.json")
DEFAULT_CKPT = os.path.join(_ROOT, ".omo", "x502", "callargs_ckpt.jsonl")
DEFAULT_PROG = os.path.join(_ROOT, ".omo", "x502", "callargs_progress.json")

# ent_id() replication constants (tools/csp_export/minclass_solver.py — read-only reference)
SOLVER_REGS = frozenset(("eax", "ebx", "ecx", "edx", "esi", "edi", "ebp", "esp"))
DATA_LO, DATA_HI = 0x812000, 0xB7A000
_RE_AUTONAME = re.compile(r"^(?:dword|byte|word|stru|off|qword|flt)_[0-9A-Fa-f]{6,8}$")
_RE_VSTACK = re.compile(r"^stack_\+0x[0-9a-fA-F]+$")
_RE_VVT = re.compile(r"^vtable_slot_0x[0-9a-fA-F]+$")
_RE_VTHIS = re.compile(r"^0x[0-9A-F]{8}:this$")
_RE_VPARAM = re.compile(r"^0x[0-9A-F]{8}::param\d+$")
_RE_VMEM = re.compile(r"^0x[0-9A-F]{8}:this\.member\(0x[0-9a-fA-F]+\)$")
_RE_VMEMPARAM = re.compile(r"^0x[0-9A-F]{8}::param\d+\.member\(0x[0-9a-fA-F]+\)$")


def vocab_parseable(f):
    """Client-side replica of ent_id()'s accepted `from` forms."""
    if not isinstance(f, str):
        return False
    if f in SOLVER_REGS:
        return True
    if _RE_VSTACK.match(f):
        return True
    if _RE_VVT.match(f):
        return True
    if f.startswith("offset "):
        tok = f[7:].strip()
        if tok.startswith("0x"):
            try:
                a = int(tok, 16)
            except ValueError:
                return False
            return DATA_LO <= a < DATA_HI
        if _RE_AUTONAME.match(tok):
            return True
        return False  # named globals need the GLOBAL_NAME2ADDR map — not emitted by design
    if _RE_VTHIS.match(f) or _RE_VPARAM.match(f):
        return True
    if _RE_VMEM.match(f) or _RE_VMEMPARAM.match(f):
        return True
    return False


# --------------------------------------------------------------------------
# IDA-side scanner (executed via py_eval, once per batch).
# __FUNCS_JSON__ -> JSON list of function start EAs (hex str)
# __OUT_PATH__   -> scratch file path for the batch payload (py_eval caps ~1KB)
# __DATA_LO__ / __DATA_HI__ -> data section bounds (ent_id global_addr range)
# Read-only: idautils/idc/ida_ua/idaapi queries only; zero IDB mutation.
# --------------------------------------------------------------------------
IDA_SCANNER = r'''
import json, re
import idautils, idaapi, idc, ida_ua, ida_funcs

DATA_LO, DATA_HI = __DATA_LO__, __DATA_HI__
CANON_REGS = frozenset(("eax ebx ecx edx esi edi ebp esp").split())
X86_REGS = frozenset((
    "eax ecx edx ebx esp ebp esi edi "
    "ax cx dx bx sp bp si "
    "al cl dl bl ah ch dh bh eiz riz"
).split())
_RE_STACK = re.compile(r"^\[(esp|ebp)([+-][^\]]*)?\]$")
_RE_HEX_TAIL = re.compile(r"^([+-]?)(0[xX][0-9a-fA-F]+|[0-9a-fA-F]+[hH]|[0-9]+)$")
_RE_MEM_BASE = re.compile(r"^\[([a-z]{2,3})\b")
_RE_AUTONAME = re.compile(r"^(?:dword|byte|word|stru|off|qword|flt)_[0-9A-Fa-f]{6,8}$")
_RE_NAMEHEAD = re.compile(r"^[A-Za-z_?$@][A-Za-z0-9_?$@]*")
_RE_SEG = re.compile(r"^(ds|es|fs|gs|cs|ss):", re.I)

def _mnem(ea):
    return (idc.print_insn_mnem(ea) or "").lower()

def _op(ea, n):
    return (idc.print_operand(ea, n) or "").strip()

def _tagless(ea):
    t = idc.generate_disasm_line(ea, 0)
    if not t:
        return ""
    t = idaapi.tag_remove(t)
    i = t.find(";")
    if i >= 0:
        t = t[:i]
    return t.strip()

def _parse_num(s):
    s = s.strip()
    try:
        if s.lower().startswith("0x"):
            return int(s, 16)
        if s.lower().endswith("h"):
            return int(s[:-1], 16)
        return int(s)
    except Exception:
        return None

def _reg_indexed(txt, exclude=()):
    """Scaled-index / [reg+reg2] operands -> displacement unreliable.
    Hex numbers are stripped before tokenizing (so `2Ch` != `ch`); the
    operand's own base register is excluded."""
    i = txt.find("[")
    j = txt.rfind("]")
    if i < 0 or j <= i:
        return False
    inner = txt[i + 1:j].lower()
    inner = re.sub(r"0[xX][0-9a-fA-F]+", " ", inner)
    inner = re.sub(r"[0-9a-f]+[hH]", " ", inner)
    inner = re.sub(r"[0-9]+", " ", inner)
    if "*" in inner:
        return True
    for w in re.findall(r"[a-z][a-z0-9]*", inner):
        if w in X86_REGS and w not in exclude:
            return True
    return False

def _stack_name(ea, op_n, txt):
    """A2-normalized stack slot (`stack_{off:+#x}`), ebp base for EBP frames."""
    m = _RE_STACK.match(txt)
    if not m or _reg_indexed(txt, exclude=("esp", "ebp")):
        return None
    base = m.group(1)
    tail = m.group(2)
    if tail:
        h = _RE_HEX_TAIL.match(tail)
        if h:
            v = _parse_num(tail[1:])
            if v is None:
                return None
            if h.group(1) == "-":
                v = -v
        else:
            v = idc.get_operand_value(ea, op_n)  # named stack var -> architectural disp
            if v >= 0x80000000:
                v -= 0x100000000
    else:
        v = 0
    spd = idc.get_sp_delta(ea)
    if spd is None:
        spd = 0
    f = idaapi.get_func(ea)
    has_frame = bool(f.flags & getattr(ida_funcs, "FUNC_FRAME", 0x100)) if f is not None else False
    frsize = getattr(f, "frsize", None) if f is not None else None
    if base == "ebp":
        return "stack_%+#x" % (v if has_frame else v + spd)
    if has_frame and frsize is not None:
        return "stack_%+#x" % ((v + spd) + 4)
    return "stack_%+#x" % (v + spd)

def _name_addr(name):
    """IDA namespace lookup; None if absent or outside the data range ent_id accepts."""
    if not name:
        return None
    try:
        ea = idc.get_name_ea_simple(name)
    except Exception:
        return None
    if ea is None or ea == idaapi.BADADDR:
        return None
    if not (DATA_LO <= ea < DATA_HI):
        return None
    return ea

def _global_base(text):
    """Operand text -> (base_name, addr) for a global-ish expression, else (None, None).
    Handles `offset X`, `(offset X.f+3)`, `X.f`, bare names, segment prefixes."""
    t = text.strip()
    t = _RE_SEG.sub("", t).strip()
    if t.startswith("(") and t.endswith(")"):
        t = t[1:-1].strip()
    if t.lower().startswith("offset "):
        t = t[7:].strip()
    t = _RE_SEG.sub("", t).strip()
    m = _RE_NAMEHEAD.match(t)
    if not m:
        return (None, None)
    base = m.group(0)
    return (base, _name_addr(base))

def _classify(ea, mnem, op1):
    """Operand -> (kind, val):
       ('reg', name) | ('stack', name) | ('global', (base_name, addr))
       ('mem', (basereg, disp)) | ('lea', (basereg, disp)) | (None, None)."""
    low = op1.lower()
    if low.startswith("offset ") or (low.startswith("(") and "offset" in low):
        base, addr = _global_base(op1)
        if base is not None and addr is not None:
            return ("global", (base, addr))
        return (None, None)
    if low in X86_REGS:
        return ("reg", low)
    if low.startswith("["):
        sn = _stack_name(ea, 1, op1)
        if sn is not None:
            return ("stack", sn)
        m = _RE_MEM_BASE.match(low)
        if not m or m.group(1) not in X86_REGS:
            return (None, None)
        basereg = m.group(1)
        if _reg_indexed(op1, exclude=(basereg,)):
            return (None, None)
        inner = op1[op1.find("[") + 1:op1.rfind("]")]
        dtxt = inner[len(basereg):]
        disp = 0
        if dtxt:
            if dtxt[0] in "+-":
                h = _RE_HEX_TAIL.match(dtxt)
                if h:
                    d = _parse_num(dtxt[1:])
                    if d is None:
                        return (None, None)
                    disp = -d if dtxt[0] == "-" else d
                else:
                    d = idc.get_operand_value(ea, 1)
                    if d >= 0x80000000:
                        d -= 0x100000000
                    disp = d
            else:
                return (None, None)
        return ("mem", (basereg, disp))
    if low in CANON_REGS:
        return ("reg", low)
    # bare global name or name.field expression (global pointer load)
    if low and "[" not in low:
        first = low[0]
        if not first.isdigit() and first != "-":
            base, addr = _global_base(op1)
            if base is not None and addr is not None:
                return ("global", (base, addr))
    return (None, None)

def _is_flow(mn):
    return (mn == "call" or mn.startswith("j") or mn.startswith("loop")
            or mn in ("ret", "retn", "jmp"))

_REG_CANON = {
    "eax": "eax", "ax": "eax", "al": "eax", "ah": "eax", "eiz": "eax", "riz": "eax",
    "ecx": "ecx", "cx": "ecx", "cl": "ecx", "ch": "ecx",
    "edx": "edx", "dx": "edx", "dl": "edx", "dh": "edx",
    "ebx": "ebx", "bx": "ebx", "bl": "ebx", "bh": "ebx",
    "esp": "esp", "sp": "esp",
    "ebp": "ebp", "bp": "ebp",
    "esi": "esi", "si": "esi",
    "edi": "edi", "di": "edi",
}
CALLEE_SAVED = frozenset(("ebx", "esi", "edi", "ebp"))
_OP0_READ = frozenset(("cmp", "test", "push"))  # op0 is read, not written

def _trace_def(items, idx, reg, win=40):
    """Last def of `reg` strictly before items[idx]. Straight-line walk.
    - `call` does NOT clobber callee-saved regs (ebx/esi/edi/ebp): the walk
      continues past calls for those, stops for caller-saved (eax/ecx/edx).
    - `cmp/test/push` read op0 without writing: skipped.
    - sub-register writes (e.g. `mov si, x` for esi) = partial def -> 'nonptr'.
    status: 'def' (mov/lea full-reg, form=(kind,val)) | 'nonptr'
            | 'flow' | 'call' | 'window' | 'start'"""
    canon = _REG_CANON.get(reg, reg)
    j = idx - 1
    scanned = 0
    while j >= 0 and scanned < win:
        ea = items[j]
        mn = _mnem(ea)
        if not mn:
            return {"status": "start"}
        if mn == "call":
            if canon not in CALLEE_SAVED:
                return {"status": "call"}
            j -= 1
            scanned += 1
            continue
        if _is_flow(mn):
            return {"status": "flow"}
        o0 = _op(ea, 0).lower()
        if o0 in _OP0_READ:
            j -= 1
            scanned += 1
            continue
        oc = _REG_CANON.get(o0)
        if oc == canon:
            if mn in ("mov", "lea") and o0 == reg:
                return {"status": "def", "j": j, "insn": _tagless(ea),
                        "form": _classify(ea, mn, _op(ea, 1))}
            return {"status": "nonptr", "insn": _tagless(ea)}
        j -= 1
        scanned += 1
    return {"status": "window"}

def _trace_to_this(items, idx, reg, chain, max_hops=3):
    """True iff `reg`'s def chain reaches `mov X, ecx` (this-sink) within max_hops.
    Appends traced instruction texts to `chain`."""
    cur = reg
    j = idx
    for _ in range(max_hops):
        d = _trace_def(items, j, cur)
        if d["status"] != "def":
            return False
        kind, val = d["form"]
        chain.append(d["insn"])
        if kind == "reg":
            if val == "ecx":
                return True
            cur = val
            j = d["j"]
            continue
        if kind == "lea":
            # lea reg,[ecx+disp] -> this+disp: still this-derived base? Not a plain
            # `this` reference for member conversion — treat as not-this.
            return False
        return False
    return False

def _finalize_from(items, j, kind, val, chain, fstart):
    """Convert a classified final form into an ent_id-accepted `from`, or None."""
    if kind == "reg":
        return val if val in CANON_REGS else None
    if kind == "stack":
        return val if val.startswith("stack_+") else None  # ent_id rejects stack_-
    if kind == "mem" or kind == "lea":
        basereg, disp = val
        if disp < 0:
            return None
        if basereg != "ecx":
            if not _trace_to_this(items, j, basereg, chain):
                return None
        return "0x%08X:this.member(0x%x)" % (fstart, disp)
    if kind == "global":
        base, addr = val
        if _RE_AUTONAME.match(base):
            return "offset " + base
        return "offset 0x%X" % addr  # hex form: ent_id global_addr 0x-branch
    return None

def _trace_this_source(items, idx, fstart):
    """Full ECX-source resolution for one call.
    Returns {'ok': from, 'ecx_insn': t, 'chain': [...]}
         or {'drop': 'no_ecx_def'|'nonptr'|'chain'|'vocab', 'ecx_insn': t|None, 'chain': [...]}."""
    chain = []
    d0 = _trace_def(items, idx, "ecx")
    if d0["status"] != "def":
        return {"drop": "no_ecx_def", "ecx_insn": None, "chain": chain}
    ecx_insn = d0["insn"]
    kind, val = d0["form"]
    if kind is None:
        return {"drop": "nonptr", "ecx_insn": ecx_insn, "chain": chain}
    j = d0["j"]
    hops = 0
    while kind == "reg" and hops < 3:
        cur = val  # register whose def we are resolving
        d = _trace_def(items, j, cur)
        hops += 1
        if d["status"] == "def" and d["form"][0] is not None:
            chain.append(d["insn"])
            k2, v2 = d["form"]
            if k2 == "reg" and v2 == "ecx":
                # chain terminates at the function's this-sink (`mov cur, ecx`):
                # `cur` holds the caller's own this — emit that register.
                kind, val = "reg", cur
                break
            kind, val = k2, v2
            j = d["j"]
            continue
        if d["status"] == "def":
            return {"drop": "chain", "ecx_insn": ecx_insn, "chain": chain}
        # flow/call/window/start -> register passthrough: the bare register name
        # is the definite value at the call site (ent_id accepts it in scope).
        break
    if len(chain) > 6:
        chain = chain[:6]
    frm = _finalize_from(items, j, kind, val, chain, fstart)
    if frm is None:
        return {"drop": "vocab", "ecx_insn": ecx_insn, "chain": chain}
    return {"ok": frm, "ecx_insn": ecx_insn, "chain": chain}

def _callee_start(target):
    f = idaapi.get_func(target)
    return f.start_ea if f is not None else None

def _callee_name(ea):
    n = idaapi.get_name(ea) or idc.get_func_name(ea)
    return n or None

def scan_batch():
    FUNCS = __FUNCS_JSON__
    out = {"funcs": {}, "meta": {"functions": 0, "call_insns": 0,
                                 "resolved_direct": 0, "resolved_indirect": 0,
                                 "unresolved": 0, "edges": 0, "direct_nonfunc": 0,
                                 "dropped_vocabulary": 0, "dropped_chain": 0,
                                 "no_ecx_def": 0}}
    for fhex in FUNCS:
        fstart = int(fhex, 16)
        items = list(idautils.FuncItems(fstart))
        r = {"e": [], "c": 0, "d": 0, "i": 0, "u": 0, "nf": 0,
             "dv": 0, "dc": 0, "ne": 0}
        for idx, ea in enumerate(items):
            if _mnem(ea) != "call":
                continue
            r["c"] += 1
            insn = ida_ua.insn_t()
            if ida_ua.decode_insn(insn, ea) <= 0:
                r["u"] += 1
                continue
            op = insn.ops[0]  # IDA 9.x: insn.ops[]
            t = op.type
            target = None
            kind = None
            if t in (ida_ua.o_near, ida_ua.o_far):
                cs = _callee_start(op.addr)
                if cs is not None:
                    target = cs
                    kind = "direct"
                else:
                    r["nf"] += 1  # direct call outside any function
            elif t == ida_ua.o_mem:
                try:
                    val = idc.get_wide_dword(op.addr)
                except Exception:
                    val = None
                if val is not None:
                    cs = _callee_start(val)
                    if cs is not None:
                        target = cs
                        kind = "indirect"
            if kind is None:
                r["u"] += 1
                continue
            r.setdefault("ra", []).append("0x%X:0x%X" % (ea, target))
            if kind == "direct":
                r["d"] += 1
            else:
                r["i"] += 1
            res = _trace_this_source(items, idx, fstart)
            drop = res.get("drop")
            if drop == "no_ecx_def":
                r["ne"] += 1
                continue
            if drop in ("nonptr", "chain"):
                r["dc"] += 1
                continue
            if drop == "vocab":
                r["dv"] += 1
                continue
            nm = _callee_name(target)
            r["e"].append({
                "type": "CALL_ARG",
                "from": res["ok"],
                "to": "0x%08X:this" % target,
                "addr": "0x%X" % ea,
                "callee_name": nm,
                "ecx_insn": res["ecx_insn"],
                "chain": res["chain"],
                "source_insn": res["ecx_insn"],
            })
        out["funcs"][fhex] = r
        m = out["meta"]
        m["functions"] += 1
        m["call_insns"] += r["c"]
        m["resolved_direct"] += r["d"]
        m["resolved_indirect"] += r["i"]
        m["unresolved"] += r["u"]
        m["edges"] += len(r["e"])
        m["direct_nonfunc"] += r["nf"]
        m["dropped_vocabulary"] += r["dv"]
        m["dropped_chain"] += r["dc"]
        m["no_ecx_def"] += r["ne"]
    return out

# py_eval exec()s multi-statement code as exec(code, g, l) with SPLIT
# namespaces: top-level defs bind into `l`, but function bodies resolve
# names via their __globals__ (= `g`). Rebind l into g so helpers and
# scan_batch can see each other.
globals().update(locals())
RESULT_PAYLOAD = json.dumps(scan_batch())
# py_eval tool results are capped at ~1KB -> hand off the payload via a
# scratch file on disk (NOT the IDB; the IDB itself is never written).
with open(__OUT_PATH__, "w", encoding="utf-8") as _f:
    _f.write(RESULT_PAYLOAD)
RESULT = "ok:%d" % len(RESULT_PAYLOAD)
RESULT
'''


def _py(mcp, code):
    raw = mcp.py_eval(code)
    try:
        d = json.loads(raw)
    except Exception:
        raise RuntimeError("py_eval returned non-JSON: %r" % (raw[:400],))
    if isinstance(d, dict) and "result" in d:
        if d.get("stderr"):
            raise RuntimeError("IDA-side error: %s" % d["stderr"][:800])
        return d["result"]
    raise RuntimeError("unexpected py_eval payload: %r" % (str(d)[:400],))


def ida_function_list(mcp, out_path):
    p = json.dumps(out_path.replace("\\", "/"))
    code = (
        "import json, idautils\n"
        "_p = %s\n"
        "_l = ['0x%%X' %% f for f in idautils.Functions()]\n"
        "open(_p, 'w').write(json.dumps(_l))\n"
        "RESULT = 'ok:%%d' %% len(_l)\n"
        "RESULT" % p
    )
    res = _py(mcp, code)
    with open(out_path, "r", encoding="utf-8") as f:
        return json.load(f)


def run_batch(mcp, fhex_list, out_path):
    code = (IDA_SCANNER
            .replace("__FUNCS_JSON__", json.dumps(fhex_list))
            .replace("__OUT_PATH__", json.dumps(out_path.replace("\\", "/")))
            .replace("__DATA_LO__", hex(DATA_LO))
            .replace("__DATA_HI__", hex(DATA_HI)))
    res = _py(mcp, code)
    if not res.startswith("ok:"):
        raise RuntimeError("batch did not report ok: %r" % res[:200])
    with open(out_path, "r", encoding="utf-8") as f:
        return json.load(f)


def load_progress(path):
    if os.path.exists(path):
        with open(path, "r", encoding="utf-8") as f:
            return set(json.load(f).get("done", []))
    return set()


def save_progress(path, done):
    tmp = path + ".tmp"
    os.makedirs(os.path.dirname(path), exist_ok=True)
    with open(tmp, "w", encoding="utf-8") as f:
        json.dump({"done": sorted(done)}, f)
    os.replace(tmp, path)


def append_checkpoint(path, fhex, record):
    os.makedirs(os.path.dirname(path), exist_ok=True)
    with open(path, "a", encoding="utf-8") as f:
        f.write(json.dumps({"f": fhex, "r": record}, ensure_ascii=True) + "\n")
        f.flush()
        os.fsync(f.fileno())


def finalize(output, ckpt_path, func_count):
    """Merge checkpoint -> deterministic output. Counters deduped by function
    start (last wins); vocabulary self-check re-runs client-side over the
    final edge set (ent_id accepted-forms replica)."""
    per_func = {}
    with open(ckpt_path, "r", encoding="utf-8") as f:
        for line in f:
            line = line.strip()
            if not line:
                continue
            rec = json.loads(line)
            per_func[rec["f"]] = rec["r"]
    edges = []
    seen = set()
    meta = {"functions": func_count, "call_insns": 0, "resolved_direct": 0,
            "resolved_indirect": 0, "unresolved": 0, "edges": 0,
            "call_sites": 0, "direct_nonfunc": 0,
            "dropped_vocabulary": 0, "dropped_chain": 0, "no_ecx_def": 0}
    for fhex in sorted(per_func, key=lambda h: int(h, 16)):
        r = per_func[fhex]
        meta["call_insns"] += r["c"]
        meta["resolved_direct"] += r["d"]
        meta["resolved_indirect"] += r["i"]
        meta["unresolved"] += r["u"]
        meta["direct_nonfunc"] += r.get("nf", 0)
        meta["dropped_vocabulary"] += r.get("dv", 0)
        meta["dropped_chain"] += r.get("dc", 0)
        meta["no_ecx_def"] += r.get("ne", 0)
        for e in r["e"]:
            k = (e["addr"], e["to"])
            if k in seen:
                continue
            seen.add(k)
            edges.append(e)
    edges.sort(key=lambda e: (int(e["addr"], 16), e["to"]))
    meta["edges"] = len(edges)
    meta["call_sites"] = len({e["addr"] for e in edges})
    parseable = sum(1 for e in edges if vocab_parseable(e["from"]))
    meta["parseable"] = parseable
    meta["parseable_pct"] = round(100.0 * parseable / len(edges), 1) if edges else 0.0
    doc = {"meta": {"generated": datetime.date.today().isoformat(), **meta},
           "edges": edges}
    os.makedirs(os.path.dirname(output), exist_ok=True)
    tmp = output + ".tmp"
    with open(tmp, "w", encoding="utf-8", newline="\n") as f:
        json.dump(doc, f, ensure_ascii=True, separators=(",", ":"))
        f.flush()
        os.fsync(f.fileno())
    os.replace(tmp, output)
    print("[vocab] parseable=%d/%d (%.1f%%)" % (parseable, len(edges), meta["parseable_pct"]))
    return doc


def probe(mcp, n, scratch):
    funcs = ida_function_list(mcp, os.path.join(scratch, "funcs.json"))
    print("IDA functions total: %d" % len(funcs))
    res = run_batch(mcp, funcs[:n], os.path.join(scratch, "probe_batch.json"))
    print("meta:", json.dumps(res["meta"]))
    shown = 0
    for fhex, r in sorted(res["funcs"].items(), key=lambda kv: int(kv[0], 16)):
        for e in r["e"][:2]:
            print("  [%s] %s -> %s  from=%r  ecx=%r  chain=%r"
                  % (fhex, e["addr"], e["to"], e["from"], e["ecx_insn"], e["chain"]))
            shown += 1
            if shown >= 10:
                break
        if shown >= 10:
            break


def validate(mcp, output, n):
    """--validate N: re-verify N sampled edges against the live IDB."""
    doc = json.load(open(output, encoding="utf-8"))
    edges = doc["edges"]
    if not edges:
        print("no edges to validate")
        return
    step = max(1, len(edges) // n)
    sample = [edges[i] for i in range(0, len(edges), step)][:n]
    payload = [{"edge": e} for e in sample]
    code = """
import json, idautils, idaapi, idc

BATCH = json.loads(r%r)

def dis(ea):
    t = idc.generate_disasm_line(ea, 0)
    return idaapi.tag_remove(t) if t else ""

out = []
for item in BATCH:
    e = item["edge"]
    site = int(e["addr"], 16)
    callee = int(e["to"].split(":")[0], 16)
    cf = idaapi.get_func(callee)
    sf = idaapi.get_func(site)
    rec = {
        "site": "0x%%X" %% site,
        "site_disasm": dis(site),
        "site_mnem": (idc.print_insn_mnem(site) or "").lower(),
        "caller": ("0x%%X" %% sf.start_ea) if sf is not None else None,
        "callee_exists": cf is not None,
        "callee_start": ("0x%%X" %% cf.start_ea) if cf is not None else None,
        "callee_name_idb": (idaapi.get_name(cf.start_ea) or idc.get_func_name(cf.start_ea)) if cf is not None else None,
        "ecx_insn": e.get("ecx_insn"),
        "chain": e.get("chain", []),
        "from": e["from"],
    }
    # locate ecx_insn text in the same function before the call
    where = None
    if sf is not None:
        items = list(idautils.FuncItems(sf.start_ea))
        try:
            idx = items.index(site)
        except ValueError:
            idx = -1
        needle = " ".join((e.get("ecx_insn") or "").split())
        for j in range(idx - 1, max(-1, idx - 45), -1):
            if needle and needle in " ".join(dis(items[j]).split()):
                where = "0x%%X" %% items[j]
                break
    rec["ecx_insn_found_before_call"] = where
    # chain[0] must sit before ecx_insn if present
    chain_ok = True
    if e.get("chain"):
        n0 = " ".join(e["chain"][0].split())
        if needle and where is not None:
            wid = int(where, 16)
            found = False
            for j in range(idx - 1, max(-1, idx - 90), -1):
                ea2 = items[j]
                if ea2 == wid:
                    found = True
                    break
                if n0 and n0 in " ".join(dis(ea2).split()) and ea2 < wid:
                    found = True
                    break
            chain_ok = found
    rec["chain0_before_ecx"] = chain_ok
    out.append(rec)
RESULT = json.dumps(out)
RESULT
""" % (json.dumps(payload),)
    raw = _py(mcp, code)
    res = json.loads(raw)
    print("=== --validate %d ===" % len(res))
    all_ok = True
    for r in res:
        ok = (r["site_mnem"] == "call" and r["callee_exists"]
              and r["ecx_insn_found_before_call"] is not None and r["chain0_before_ecx"])
        all_ok &= ok
        print("site=%s (%s)" % (r["site"], r["site_disasm"]))
        print("  from=%r" % r["from"])
        print("  ecx_insn=%r  found_before_call=%s" % (r["ecx_insn"], r["ecx_insn_found_before_call"]))
        print("  chain=%r  chain0_before_ecx=%s" % (r["chain"], r["chain0_before_ecx"]))
        print("  callee=%s exists=%s name=%s  caller=%s"
              % (r["callee_start"], r["callee_exists"], r["callee_name_idb"], r["caller"]))
        print("  -> %s" % ("PASS" if ok else "FAIL"))
    print("VALIDATION: %s" % ("ALL PASS" if all_ok else "FAIL"))


def main():
    ap = argparse.ArgumentParser(description="Supplementary CALL_ARG (this/ECX) extractor v2")
    ap.add_argument("--resume", action="store_true")
    ap.add_argument("--batch", type=int, default=300)
    ap.add_argument("--limit", type=int, default=0)
    ap.add_argument("--probe", type=int, default=0)
    ap.add_argument("--validate", type=int, default=0, metavar="N",
                    help="re-verify N sampled edges against the live IDB and exit")
    ap.add_argument("--output", default=DEFAULT_OUTPUT)
    ap.add_argument("--checkpoint", default=DEFAULT_CKPT)
    ap.add_argument("--progress", default=DEFAULT_PROG)
    ap.add_argument("--scratch-dir", default=os.path.dirname(DEFAULT_CKPT))
    args = ap.parse_args()

    mcp = McpHttp()
    mcp.initialize()
    print("[+] IDA MCP connected")

    if args.validate:
        validate(mcp, args.output, args.validate)
        return

    if args.probe:
        probe(mcp, args.probe, args.scratch_dir)
        return

    funcs = ida_function_list(mcp, os.path.join(args.scratch_dir, "funcs.json"))
    print("[+] IDA functions: %d" % len(funcs))
    if args.limit:
        funcs = funcs[:args.limit]

    done = load_progress(args.progress) if args.resume else set()
    if args.resume:
        print("[+] resume: %d functions already done" % len(done))
    pending = [f for f in funcs if f not in done]
    print("[+] pending: %d functions (batch=%d) -> %d requests"
          % (len(pending), args.batch, (len(pending) + args.batch - 1) // args.batch))

    t0 = datetime.datetime.now()
    for bi in range(0, len(pending), args.batch):
        batch = pending[bi:bi + args.batch]
        res = run_batch(mcp, batch, os.path.join(args.scratch_dir, "batch_result.json"))
        for fhex in batch:
            r = res["funcs"].get(fhex)
            if r is None:
                r = {"e": [], "c": 0, "d": 0, "i": 0, "u": 0, "nf": 0,
                     "dv": 0, "dc": 0, "ne": 0}
            append_checkpoint(args.checkpoint, fhex, r)
            done.add(fhex)
        save_progress(args.progress, done)
        m = res["meta"]
        el = (datetime.datetime.now() - t0).total_seconds()
        print("[%3d/%3d] batch: funcs=%d calls=%d direct=%d indirect=%d unres=%d "
              "edges=%d dvoc=%d dchain=%d noecx=%d (%.1fs, %d done)"
              % (bi // args.batch + 1,
                 (len(pending) + args.batch - 1) // args.batch,
                 m["functions"], m["call_insns"], m["resolved_direct"],
                 m["resolved_indirect"], m["unresolved"], m["edges"],
                 m["dropped_vocabulary"], m["dropped_chain"], m["no_ecx_def"],
                 el, len(done)),
              flush=True)

    doc = finalize(args.output, args.checkpoint, len(funcs))
    print("[+] wrote %s" % args.output)
    print("[+] meta: %s" % json.dumps(doc["meta"], sort_keys=True))


if __name__ == "__main__":
    main()
