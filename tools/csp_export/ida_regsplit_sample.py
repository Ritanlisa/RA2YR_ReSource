#!/usr/bin/env python3
"""M14 IDA-side worker: reaching-definition map for a sample of functions.

Runs INSIDE IDA (driven by tools/csp_export/extract_reg_split_sample.py via
py_exec_file). Reads a spec JSON (sample function starts + output path),
builds a per-function reaching-def dataflow over x86 registers, and writes a
deterministic JSON map to the spec's out_path.

Spec JSON schema:
  {"spec_version": 1,
   "functions": ["0x66D530", ...],          # function start addresses
   "out_path": "D:/.../m14_ida_regsplit_out.json"}

Output JSON schema (all keys sorted; deterministic):
  {"status": "ok", "spec_sha256": ..., "idb_path": ..., "module": ...,
   "functions": {
     "0x66D530": {
        "start": "0x66D530", "end": "0x66D5FF", "name": "Foo::Bar",
        "insns": [{"a":"0x66D530","r":{"ecx":"0x66D530"},"w":{"eax":"0x66D532"}}...],
        "mem":  [{"a":"0x66D540","base":"eax","def":"0x66D532","off":12,"w":4,"idx":0}...]
     }}}

Definitions:
  * r[reg] = reaching-def instruction address for a read of reg at this insn,
    or null when the reaching def is not unique (control-flow join / unreachable).
  * w[reg] = instruction address that writes reg (def site of the new value).
  * entry state: every GPR is defined at the function entry (calling-convention
    values: this/ecx, params, callee-saved). A call clobbers eax/ecx/edx with
    def = call site (callee-returned value), callee-saved GPRs survive.
  * mem entries are member-like accesses [base+imm] (indexed forms flagged
    idx=1 and off=0) attributed to the reaching def of base.

This script is standalone (no repo imports) so it can run in IDA's Python.
"""
import hashlib
import json
import re
import sys

import idaapi
import idautils
import idc

try:
    import ida_funcs
except Exception:  # pragma: no cover
    ida_funcs = None

REGS = ("eax", "ebx", "ecx", "edx", "esi", "edi", "ebp", "esp")
SUB2PARENT = {
    "al": "eax", "ah": "eax", "ax": "eax",
    "bl": "ebx", "bh": "ebx", "bx": "ebx",
    "cl": "ecx", "ch": "ecx", "cx": "ecx",
    "dl": "edx", "dh": "edx", "dx": "edx",
    "si": "esi", "di": "edi", "bp": "ebp", "sp": "esp",
}
ALL_REGS = REGS + tuple(SUB2PARENT)
_REG_RX = re.compile(r"(?<![A-Za-z0-9_])(%s)(?![A-Za-z0-9_])" % "|".join(ALL_REGS), re.I)
_SIZE_RX = re.compile(r"^(?:byte|word|dword|qword|tbyte|xmmword|oword|ymmword|zmmword)\b", re.I)
_SIZE_W = {"byte": 1, "word": 2, "dword": 4, "qword": 8, "tbyte": 10,
           "xmmword": 16, "oword": 16, "ymmword": 32, "zmmword": 64}
_WRITE_ONLY_OP0 = frozenset({
    "mov", "movzx", "movsx", "movsxd", "lea", "pop", "seta", "setae", "setb",
    "setbe", "setg", "setge", "setl", "setle", "sete", "setne", "sets", "setns",
    "seto", "setno", "setp", "setnp", "setc", "setnc", "setz", "setnz",
})
_RMW_OP0 = frozenset({
    "add", "sub", "adc", "sbb", "and", "or", "xor", "inc", "dec", "neg", "not",
    "shl", "shr", "sal", "sar", "rol", "ror", "rcl", "rcr", "imul", "bts",
    "btr", "btc", "xadd", "xchg", "cmpxchg",
})
_IMPLIED = {
    "push": ({"esp"}, {"esp"}),
    "call": ({"esp"}, {"esp", "eax", "ecx", "edx"}),
    "ret": ({"esp", "eax"}, {"esp"}),
    "retn": ({"esp", "eax"}, {"esp"}),
    "leave": ({"ebp"}, {"esp", "ebp"}),
    "pushad": (set(REGS), {"esp"}),
    "popad": ({"esp"}, set(REGS)),
    "movs": ({"esi", "edi"}, {"esi", "edi"}),
    "movsb": ({"esi", "edi"}, {"esi", "edi"}),
    "movsw": ({"esi", "edi"}, {"esi", "edi"}),
    "stos": ({"edi", "eax"}, {"edi"}),
    "stosb": ({"edi", "eax"}, {"edi"}),
    "stosw": ({"edi", "eax"}, {"edi"}),
    "stosd": ({"edi", "eax"}, {"edi"}),
    "lods": ({"esi"}, {"esi", "eax"}),
    "lodsb": ({"esi"}, {"esi", "eax"}),
    "lodsw": ({"esi"}, {"esi", "eax"}),
    "lodsd": ({"esi"}, {"esi", "eax"}),
    "scas": ({"edi", "eax"}, {"edi"}),
}
_BRACKET = re.compile(r"\[([^\]]*)\]")


def canon(reg):
    return SUB2PARENT.get(reg, reg)


def _strip_size(txt):
    t = (txt or "").strip()
    while True:
        m = _SIZE_RX.match(t)
        if not m:
            break
        t = t[m.end():].lstrip()
        if t.lower().startswith("ptr"):
            t = t[3:].lstrip()
    return t


def parse_mem(txt):
    """Return (base, off, width, indexed) for a memory operand text, else None."""
    t = (txt or "").strip()
    if "[" not in t:
        return None
    low = t.lower()
    w = 0
    for nm, ww in _SIZE_W.items():
        if re.search(r"(?<![A-Za-z0-9_])%s(?![A-Za-z0-9_])" % nm, low):
            w = ww
            break
    m = _BRACKET.search(t)
    if not m:
        return None
    inner = m.group(1).strip().lower()
    regs = [x.lower() for x in _REG_RX.findall(inner)]
    if not regs:
        return None
    base = canon(regs[0])
    indexed = len(regs) > 1
    off = 0
    mm = re.search(r"([+-])\s*(0x[0-9a-f]+|[0-9a-f]+h|\d+)\s*$", inner)
    if mm:
        sv = mm.group(2)
        try:
            v = int(sv, 16) if (sv.startswith("0x") or sv.endswith("h")) else int(sv, 10)
        except ValueError:
            v = 0
        off = v if mm.group(1) == "+" else -v
    if indexed:
        off = 0
    return base, off, w, 1 if indexed else 0


def insn_rw(ea):
    mnem = (idc.print_insn_mnem(ea) or "").lower()
    ops = [idc.print_operand(ea, i) or "" for i in range(3)]
    reads, writes = set(), set()
    mems = []

    if mnem in _IMPLIED:
        r, w = _IMPLIED[mnem]
        reads |= r
        writes |= w

    t0 = _strip_size(ops[0])
    if t0:
        m0 = parse_mem(ops[0])
        if m0:
            b, off, w, idx = m0
            reads.add(b)
            mems.append((b, off, w, idx))
        else:
            toks = [x.lower() for x in _REG_RX.findall(t0)]
            if toks:
                reg = canon(toks[0])
                if mnem in _WRITE_ONLY_OP0:
                    writes.add(reg)
                elif mnem in _RMW_OP0:
                    reads.add(reg)
                    writes.add(reg)
                elif mnem in ("cmp", "test", "bt", "push", "ret", "retn"):
                    reads.add(reg)
                else:
                    reads.add(reg)
                    if mnem not in ("nop", "int3", "int"):
                        writes.add(reg)
    for op in ops[1:]:
        t = _strip_size(op)
        if not t:
            continue
        mm = parse_mem(op)
        if mm:
            b, off, w, idx = mm
            reads.add(b)
            mems.append((b, off, w, idx))
        else:
            for tok in _REG_RX.findall(t):
                reads.add(canon(tok.lower()))

    if mnem == "push" and t0:
        mm = parse_mem(ops[0])
        if mm:
            reads.add(mm[0])
        else:
            for tok in _REG_RX.findall(t0):
                reads.add(canon(tok.lower()))
    if mnem == "pop" and t0 and not parse_mem(ops[0]):
        for tok in _REG_RX.findall(t0):
            writes.add(canon(tok.lower()))

    if mnem in ("mul", "div", "idiv"):
        reads.add("eax")
        writes |= {"eax", "edx"}
    if mnem == "imul" and len([o for o in ops if o]) == 1:
        reads.add("eax")
        writes |= {"eax", "edx"}

    return mnem, reads, writes, mems


def _blocks_of(func):
    blocks = []
    try:
        fc = idaapi.FlowChart(func)
        for b in fc:
            blocks.append((b.start_ea, b.end_ea, sorted(s.start_ea for s in b.succs())))
    except Exception:
        blocks = []
    if not blocks:
        insns = list(idautils.FuncItems(func.start_ea))
        if not insns:
            return []
        blocks = [(insns[0], func.end_ea, [])]
    blocks.sort()
    return blocks


def _block_insns(blocks):
    out = {}
    for (bs, be, _succ) in blocks:
        lst = []
        ea = bs
        guard = 0
        while ea < be and ea != idaapi.BADADDR and guard < 50000:
            lst.append(ea)
            ea = idc.next_head(ea, be)
            guard += 1
        out[bs] = lst
    return out


def analyze_function(func_ea):
    func = idaapi.get_func(func_ea)
    if func is None:
        return None
    start, end = func.start_ea, func.end_ea
    name = ""
    try:
        name = idc.get_func_name(start) or ""
    except Exception:
        name = ""
    if not name and ida_funcs is not None:
        try:
            name = ida_funcs.get_func_name(start) or ""
        except Exception:
            name = ""

    blocks = _blocks_of(func)
    if not blocks:
        return {"start": "0x%X" % start, "end": "0x%X" % end, "name": name,
                "insns": [], "mem": []}
    binss = _block_insns(blocks)
    succs = {bs: list(succ) for (bs, be, succ) in blocks}

    # ---- phase 1: fixpoint over unique-reaching-def states ----
    entry = blocks[0][0]
    in_state = {entry: {r: start for r in REGS}}
    work = [entry]
    queued = {entry}
    guard = 0
    while work and guard < 300000:
        guard += 1
        bs = work.pop(0)
        queued.discard(bs)
        st = dict(in_state.get(bs) or {r: None for r in REGS})
        for ea in binss.get(bs, []):
            _mnem, _reads, writes, _mems = insn_rw(ea)
            for r in writes:
                st[canon(r)] = ea
        for sn in succs.get(bs, ()):
            if sn not in binss:
                continue
            prev = in_state.get(sn)
            if prev is None:
                in_state[sn] = dict(st)
                if sn not in queued:
                    work.append(sn)
                    queued.add(sn)
            else:
                merged = {}
                changed = False
                for r in REGS:
                    a, b = prev.get(r), st.get(r)
                    v = a if a == b else None
                    merged[r] = v
                    if prev.get(r) != v:
                        changed = True
                if changed:
                    in_state[sn] = merged
                    if sn not in queued:
                        work.append(sn)
                        queued.add(sn)

    # ---- phase 2: deterministic replay (records reads/writes/mem once) ----
    def hx(v):
        return ("0x%X" % v) if isinstance(v, int) else None

    insns_out = []
    mem_out = []
    for (bs, _be, _succ) in blocks:
        st = dict(in_state.get(bs) or {r: None for r in REGS})
        for ea in binss.get(bs, []):
            _mnem, reads, writes, mems = insn_rw(ea)
            rmap = {r: hx(st.get(r)) for r in sorted(reads)}
            wmap = {r: hx(ea) for r in sorted(writes)}
            insns_out.append({"a": hx(ea), "m": _mnem, "r": rmap, "w": wmap})
            for (b, off, w, idx) in mems:
                mem_out.append({"a": hx(ea), "base": b, "def": hx(st.get(b)),
                                "off": off, "w": w, "idx": idx})
            for r in writes:
                st[canon(r)] = ea

    return {
        "start": hx(start),
        "end": hx(end),
        "name": name,
        "insns": insns_out,
        "mem": mem_out,
    }


def main():
    if len(sys.argv) < 2:
        print("M14_WORKER_ERROR no spec path")
        return 2
    spec_path = sys.argv[1]
    with open(spec_path, "rb") as f:
        raw = f.read()
    spec = json.loads(raw.decode("utf-8"))
    spec_sha = hashlib.sha256(raw).hexdigest()

    funcs = {}
    errors = {}
    for s in spec.get("functions") or []:
        try:
            fa = int(str(s), 16)
        except ValueError:
            continue
        try:
            rec = analyze_function(fa)
        except Exception as e:
            rec = None
            errors["0x%X" % fa] = "%s: %s" % (type(e).__name__, e)
        if rec is not None:
            funcs["0x%X" % fa] = rec

    try:
        idb_path = idaapi.get_input_file_path() or ""
    except Exception:
        idb_path = ""
    try:
        module = idaapi.get_root_filename() or ""
    except Exception:
        module = ""
    out = {
        "status": "ok",
        "spec_version": spec.get("spec_version"),
        "spec_sha256": spec_sha,
        "idb_path": idb_path,
        "module": module,
        "functions": funcs,
        "errors": errors,
    }
    op = spec.get("out_path")
    if not op:
        print("M14_WORKER_ERROR no out_path")
        return 2
    with open(op, "w", encoding="utf-8", newline="\n") as f:
        json.dump(out, f, ensure_ascii=False, indent=1, sort_keys=True)
        f.write("\n")
    print("M14_WORKER_OK functions=%d errors=%d out=%s spec_sha=%s"
          % (len(funcs), len(errors), op, spec_sha[:16]))
    return 0


main()
