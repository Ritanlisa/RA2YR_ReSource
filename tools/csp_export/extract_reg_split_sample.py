#!/usr/bin/env python3
"""M14 prototype driver: reg-def split extraction for a function SAMPLE.

Reads tools/type_infer/constraints/raw_constraints.json (read-only), selects a
deterministic sample of 50-100 functions, asks IDA (via MCP py_exec_file) for a
per-function reaching-definition map, joins the two, and writes ONLY:

  tools/type_infer/constraints/raw_constraints_split_sample.json   (side file)

It NEVER touches raw_constraints.json, anchors/, or minclass_solver.py.

Key design (backward compatible):
  * parent key  R:<func_hex>:<reg>                (unchanged; existing solver
    and anchors keep working)
  * sub-def key R:<func_hex>:<reg>:d<def_site_hex> (new; one per unique
    reaching definition, including the function entry as d<entry>)
  * refs with no unique reaching definition (control-flow join / unreachable)
    stay on the parent key only (honest ambiguity, no invented evidence).

Determinism: identical raw_constraints.json + IDB -> byte-identical output
(sorted keys, no timestamps). Idempotent: rerunning overwrites the same files.

Usage:
  python tools/csp_export/extract_reg_split_sample.py [--dry-run]
                                                      [--mcp-url URL]

Exit codes: 0 = sample produced; 2 = IDA offline (fail closed); 1 = other fail.
"""
import argparse
import bisect
import collections
import hashlib
import json
import re
import sys
import time
import urllib.request
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
RAW = ROOT / "tools" / "type_infer" / "constraints" / "raw_constraints.json"
PROTOS = ROOT / "anchors" / "ida_function_protos.json"
WORKER = ROOT / "tools" / "csp_export" / "ida_regsplit_sample.py"

# Default (tag-less) paths are the frozen 71-function M14 prototype artifacts.
# --tag 500 (or any tag) switches every artifact to a *_<tag> sibling so the
# original sample is never overwritten.
OUT = ROOT / "tools" / "type_infer" / "constraints" / "raw_constraints_split_sample.json"
SPEC = ROOT / ".omo" / "agents" / "csp" / "m14_ida_spec.json"
IDA_OUT = ROOT / ".omo" / "agents" / "csp" / "m14_ida_regsplit_out.json"
WRAPPER = ROOT / ".omo" / "agents" / "csp" / "m14_ida_run.py"


def set_paths(tag):
    """Derive artifact paths from an optional tag (idempotent; no side effects)."""
    global OUT, SPEC, IDA_OUT, WRAPPER
    if not tag:
        return
    OUT = (ROOT / "tools" / "type_infer" / "constraints"
           / ("raw_constraints_split_%s.json" % tag))
    SPEC = ROOT / ".omo" / "agents" / "csp" / ("m14_ida_spec_%s.json" % tag)
    IDA_OUT = ROOT / ".omo" / "agents" / "csp" / ("m14_ida_regsplit_out_%s.json" % tag)
    WRAPPER = ROOT / ".omo" / "agents" / "csp" / ("m14_ida_run_%s.py" % tag)

MCP_URL = "http://127.0.0.1:13337/mcp"
PROBE_TIMEOUT = 10
RUN_TIMEOUT = 900

REGS = {"eax", "ebx", "ecx", "edx", "esi", "edi", "ebp", "esp"}
VAR_FIELDS = ("var", "from", "to", "receiver", "base")
SUB_DEF_MARK = ":d"

# ---- M14b: def-site source entity keys -----------------------------------
# src_eid must be spelled EXACTLY like minclass_solver.ent_id() would spell it
# (same 0x substring retention for member offsets, same S:/G:/RET: forms), so
# the solver can union the subdef with the entity that gave the value.
_DATA_LO, _DATA_HI = 0x812000, 0xB7A000          # .data (solver DATA_LO/HI)
_GNAME = None


def global_addr(tok):
    """Replica of minclass_solver.global_addr() (offset <token> -> G:<hex>)."""
    global _GNAME
    tok = tok.strip()
    if tok.startswith("0x"):
        a = hx(tok)
        return a if a is not None and _DATA_LO <= a < _DATA_HI else None
    m = re.search(r"([0-9A-Fa-f]{6,8})$", tok)
    if m and re.search(r"(dword|byte|word|stru|off|qword|flt)_", tok):
        a = int(m.group(1), 16)
        if _DATA_LO <= a < _DATA_HI:
            return a
    if _GNAME is None:
        _GNAME = {}
        for p in ("anchors/ida_global_types.json", "anchors/global_types.json"):
            q = ROOT / p
            if not q.exists():
                continue
            d = json.loads(q.read_text(encoding="utf-8"))
            for a, rec in d.items():
                aa = hx(a)
                nm = (rec or {}).get("name")
                if aa is not None and nm and _DATA_LO <= aa < _DATA_HI and nm not in _GNAME:
                    _GNAME[nm] = aa
    return _GNAME.get(tok)


def src_ent_id(s, fn=None):
    """Exact replica of minclass_solver.ent_id() for source expressions."""
    if not isinstance(s, str):
        return None
    s = s.strip()
    if s.endswith(".return"):
        _ar = hx(s[:-len(".return")])
        return ("RET:%X" % _ar) if _ar is not None else None
    if s in REGS:
        return ("R:%X:%s" % (fn, s)) if fn is not None else None
    if s.startswith("stack_+"):
        return ("S:%X:%s" % (fn, s[6:])) if fn is not None else None
    if s.startswith("vtable_slot_"):
        a = hx(s[len("vtable_slot_"):].split(":")[0])
        return ("V:%X" % a) if a is not None else None
    if s.startswith("offset "):
        g = global_addr(s[7:].strip())
        return ("G:%X" % g) if g is not None else None
    if s.startswith("0x") or re.match(r"^[0-9A-Fa-f]{6,8}:", s):
        a = hx(s.split(":")[0])
        if a is None:
            return None
        if ".member(" in s:
            off = s.split(".member(", 1)[1].rstrip(")")
            which = "this"
            if "::param" in s:
                which = "p" + s.split("::param", 1)[1].split(".")[0]
            return "M:%X:%s:%s" % (a, which, off)
        if s.endswith(".return"):
            return "RET:%X" % a
        if s.endswith(":this"):
            return "T:%X" % a
        if "::param" in s:
            return "P:%X:%s" % (a, s.split("::param", 1)[1])
    return None


def src_kind_of(eid):
    """Coarse source-rule label for coverage attribution."""
    if not isinstance(eid, str) or not eid:
        return None
    p = eid.split(":")
    if p[0] == "M":
        return "member_param" if len(p) > 2 and p[2].startswith("p") else "member_this"
    return {"T": "this", "P": "param", "G": "global",
            "S": "stack", "RET": "ret"}.get(p[0])

TARGET_SPREAD = 60          # deterministic spread across mixed functions
MAX_SAMPLE = 100


def hx(s):
    if not isinstance(s, str):
        return None
    try:
        return int(s, 16)
    except ValueError:
        return None


def mcp_call(url, name, args, timeout):
    req = urllib.request.Request(
        url,
        data=json.dumps({"jsonrpc": "2.0", "id": 1, "method": "tools/call",
                         "params": {"name": name, "arguments": args}}).encode(),
        headers={"Content-Type": "application/json"})
    with urllib.request.urlopen(req, timeout=timeout) as r:
        resp = json.load(r)
    d = resp.get("result") or {}
    if d.get("isError"):
        raise RuntimeError("%s: %s" % (name, str((d.get("content") or [{}])[0].get("text", ""))[:300]))
    return d, (d.get("structuredContent") or {})


def select_sample(raw, faddrs, target_count=0):
    """Deterministic sample.

    Legacy mode (target_count == 0): top-20 most-referenced R entities' functions
    plus a uniform spread of TARGET_SPREAD over functions with >=8 register refs
    (the frozen 71-function M14 prototype rule).

    Exact-count mode (target_count > 0): top-20 entities' functions plus a
    uniform spread over the *remaining* pool (functions with >=8 register refs,
    top functions excluded) so that the union is exactly `target_count` long.
    Selection depends only on raw_constraints.json + ida_function_protos.json
    (no RNG, no timestamps).
    """
    fn_at = lambda a: (faddrs[bisect.bisect_right(faddrs, a) - 1]
                       if faddrs and a is not None else None)
    ent_refs = collections.Counter()
    fn_refs = collections.Counter()
    for c in raw:
        a = hx(c.get("addr"))
        fn = fn_at(a) if a is not None else None
        if fn is None:
            continue
        for f in VAR_FIELDS:
            v = c.get(f)
            if isinstance(v, str) and v in REGS:
                ent_refs["R:%X:%s" % (fn, v)] += 1
                fn_refs[fn] += 1
    top_ents = [e for e, _n in sorted(ent_refs.items(), key=lambda kv: (-kv[1], kv[0]))[:20]]
    top_fns = sorted({int(e.split(":")[1], 16) for e in top_ents})
    pool = sorted(fn for fn, n in fn_refs.items() if n >= 8)
    if not pool:
        pool = sorted(fn_refs)
    extras = []
    if target_count > 0:
        need = max(0, target_count - len(top_fns))
        cand = [fn for fn in pool if fn not in set(top_fns)]
        if len(cand) < need:
            cand = [fn for fn in sorted(fn_refs) if fn not in set(top_fns)]
        k = min(need, len(cand))
        if k == 1:
            extras = [cand[0]]
        elif k > 1:
            idxs = sorted({int(round(i * (len(cand) - 1) / (k - 1))) for i in range(k)})
            extras = [cand[i] for i in idxs]
        sample = sorted(set(top_fns) | set(extras))[:target_count]
        rule = ("top-20 most-referenced R entities' functions + uniform spread over "
                "the remaining pool (functions with >=8 register refs) to reach "
                "exactly %d functions" % target_count)
    else:
        if pool:
            k = min(TARGET_SPREAD, len(pool))
            if k == 1:
                extras = [pool[0]]
            else:
                idxs = sorted({int(round(i * (len(pool) - 1) / (k - 1))) for i in range(k)})
                extras = [pool[i] for i in idxs]
        sample = sorted(set(top_fns) | set(extras))[:MAX_SAMPLE]
        rule = ("top-20 most-referenced R entities' functions + uniform spread "
                "over functions with >=8 register refs")
    return sample, {
        "rule": rule,
        "mode": "exact-count" if target_count > 0 else "legacy-spread",
        "target_count": target_count or None,
        "top_entities": top_ents,
        "top_entities_refs": [ent_refs[e] for e in top_ents],
        "top_functions": len(top_fns),
        "pool_size": len(pool),
        "spread_target": (max(0, target_count - len(top_fns)) if target_count > 0
                          else TARGET_SPREAD),
        "sample_size": len(sample),
    }


def write_spec_to(sample, spec_path, out_path):
    spec = {
        "spec_version": 1,
        "functions": ["0x%X" % a for a in sample],
        "out_path": str(out_path).replace("\\", "/"),
    }
    spec_path.parent.mkdir(parents=True, exist_ok=True)
    data = (json.dumps(spec, ensure_ascii=False, sort_keys=True, indent=1) + "\n").encode("utf-8")
    spec_path.write_bytes(data)
    return data


def write_spec(sample):
    return write_spec_to(sample, SPEC, IDA_OUT)


def write_wrapper_to(spec_path, wrapper_path):
    src = (
        "# generated by tools/csp_export/extract_reg_split_sample.py (idempotent)\n"
        "import os, runpy, sys\n"
        "os.environ['IDA_MCP_TOOL_TIMEOUT_SEC'] = '900'\n"
        "sys.argv = [%r, %r]\n"
        "runpy.run_path(%r, run_name='__main__')\n"
    ) % (str(WORKER), str(spec_path), str(WORKER))
    wrapper_path.parent.mkdir(parents=True, exist_ok=True)
    wrapper_path.write_text(src, encoding="utf-8", newline="\n")
    return hashlib.sha256(wrapper_path.read_bytes()).hexdigest()


def write_wrapper():
    return write_wrapper_to(SPEC, WRAPPER)


def run_ida_chunked(sample, spec_bytes, chunk):
    """Run the IDA worker in <=chunk-sized calls and merge the outputs.

    The MCP tool call has a hard ~60 s budget that the in-IDA env var cannot
    extend for the running call; 500 functions can exceed it.  Chunking is
    deterministic: per-chunk specs are generated from the sorted sample and the
    merged output is written with the same json settings as the worker.
    """
    merged = {"status": "ok", "spec_version": 1,
              "spec_sha256": hashlib.sha256(spec_bytes).hexdigest(),
              "idb_path": None, "module": None, "functions": {}, "errors": {}}
    base = SPEC.with_suffix("")
    for i in range(0, len(sample), chunk):
        part = sample[i:i + chunk]
        cspec = base.with_name(base.name + "_c%03d.json" % i)
        cout = IDA_OUT.with_name(IDA_OUT.stem + "_c%03d.json" % i)
        cwrap = WRAPPER.with_name(WRAPPER.stem + "_c%03d.py" % i)
        write_spec_to(part, cspec, cout)
        write_wrapper_to(cspec, cwrap)
        if cout.exists():
            cout.unlink()
        t0 = time.time()
        try:
            _d, sc = mcp_call(MCP_URL, "py_exec_file", {"file_path": str(cwrap)}, RUN_TIMEOUT)
        except Exception as e:
            print("[m14] py_exec_file failed (chunk %d): %s: %s"
                  % (i, type(e).__name__, e), file=sys.stderr)
            return None, None
        print("[m14] chunk %d/%d wall=%.1fs" % (i // chunk + 1,
              (len(sample) + chunk - 1) // chunk, time.time() - t0))
        if not cout.exists():
            print("[m14] chunk produced no output:", cout, file=sys.stderr)
            return None, None
        part_doc = json.loads(cout.read_text(encoding="utf-8"))
        if part_doc.get("status") != "ok":
            print("[m14] chunk status != ok:", part_doc.get("status"), file=sys.stderr)
            return None, None
        merged["idb_path"] = merged["idb_path"] or part_doc.get("idb_path")
        merged["module"] = merged["module"] or part_doc.get("module")
        merged["functions"].update(part_doc.get("functions") or {})
        merged["errors"].update(part_doc.get("errors") or {})
    data = (json.dumps(merged, ensure_ascii=False, indent=1, sort_keys=True) + "\n").encode("utf-8")
    IDA_OUT.write_bytes(data)
    return merged, data



def join_and_measure(raw, faddrs, sample, ida_out):
    sample_set = set(sample)
    fn_at = lambda a: (faddrs[bisect.bisect_right(faddrs, a) - 1]
                       if faddrs and a is not None else None)

    insn_map = {}     # fn -> {addr:int -> rec}
    mem_obs = {}      # (fn, reg, def) -> set((off,width))
    member_width = {}  # (fn, member_off) -> max width from MEMBER_ACCESS
    missing = []
    for s in sample:
        key = "0x%X" % s
        rec = (ida_out.get("functions") or {}).get(key)
        if not rec:
            missing.append(key)
            continue
        m = {}
        for it in rec.get("insns") or []:
            a = hx(it.get("a"))
            if a is not None:
                m[a] = it
        insn_map[s] = m
        for mo in rec.get("mem") or []:
            if int(mo.get("idx") or 0) != 0:
                continue
            d = hx(mo.get("def"))
            base = mo.get("base")
            if d is None or not isinstance(base, str):
                continue
            if base in ("esp", "ebp"):
                continue      # stack-frame access, not an object member fingerprint
            k = (s, base, d)
            mem_obs.setdefault(k, set()).add((int(mo.get("off") or 0), int(mo.get("w") or 0)))

    # linear instruction order per function (worker emits blocks sorted; sort by
    # address for backward scans) + index for call-argument def resolution.
    order = {}
    index = {}
    for fn, m in insn_map.items():
        seq = sorted(m.values(), key=lambda it: hx(it.get("a")) or 0)
        order[fn] = seq
        index[fn] = {hx(it.get("a")): i for i, it in enumerate(seq)}

    def callarg_def(fn, a, reg, to):
        """Reaching def of a CALL_ARG `from` register.

        The extractor emits CALL_ARG at the call address, but the register value
        is read at the earlier `push reg` (or `mov ecx, reg` for the this
        argument). Scan back like tools/type_infer/ida_extract.py::_scan_call_args
        (<=32 insns, stop at call/jump/ret). Multiple distinct defs -> ambiguous.
        """
        seq = order.get(fn) or []
        i = (index.get(fn) or {}).get(a)
        if i is None:
            return None
        is_this = isinstance(to, str) and to.endswith(":this")
        cands = set()
        for j in range(i - 1, max(-1, i - 33), -1):
            it = seq[j]
            m = (it.get("m") or "").lower()
            if m in ("call", "ret", "retn") or m.startswith("j"):
                break
            rmap = it.get("r") or {}
            if is_this:
                if "ecx" in (it.get("w") or {}) and reg in rmap:
                    cands.add(hx(rmap.get(reg)))   # nearest mov ecx, reg wins
                    break
            elif m == "push" and reg in rmap:
                cands.add(hx(rmap.get(reg)))
        if len(cands) == 1:
            v = next(iter(cands))
            return v
        return None

    # member offset -> width, for turning ASSIGN source member names into
    # (offset,width) fingerprints (MEMBER_ACCESS carries the width).
    member_width = {}
    for c in raw:
        if c.get("type") != "MEMBER_ACCESS":
            continue
        b = c.get("base")
        if not isinstance(b, str):
            continue
        mm = re.match(r"^0x([0-9A-Fa-f]{6,8})(?::this|::param\d+)$", b)
        if not mm:
            continue
        try:
            off = int(c.get("offset") or 0)
        except (TypeError, ValueError):
            continue
        w = c.get("width")
        w = int(w) if isinstance(w, (int, float)) and w > 0 else 0
        k = (int(mm.group(1), 16), off)
        member_width[k] = max(member_width.get(k, 0), w)

    # ---- M14b: value-source lookup tables (sample functions only) ---------
    # A subdef is R:<fn>:<reg>:dd<site>.  The giving side of the value is the
    # source expression of the instruction that defines the register at <site>:
    #   ASSIGN to=reg       -> from expression (member/this/param/global/stack/reg)
    #   STACK_ACCESS to=reg -> stack slot read (mov reg, [esp+X])
    #   FUNC_PARAM  at entry-> this/param (entry definition)
    #   RETURN_TO   at call -> callee .return (eax clobbered by call)
    #   TYPE_SEED   at site -> immediate (no entity by design)
    assign_src = collections.defaultdict(set)     # (addr, to_reg) -> {from}
    seed_sites = collections.defaultdict(set)     # (addr, var) -> {itype}
    fparam_src = collections.defaultdict(set)     # (addr, to_reg) -> {from}
    stack_src = collections.defaultdict(set)      # (addr, to_reg) -> {from}
    ret_to = collections.defaultdict(set)         # addr -> {callee addr}
    for c in raw:
        a = hx(c.get("addr"))
        if a is None:
            continue
        fn = fn_at(a)
        if fn is None or fn not in sample_set:
            continue
        t = c.get("type")
        if t == "ASSIGN":
            to = c.get("to")
            if isinstance(to, str) and to in REGS:
                assign_src[(a, to)].add(c.get("from"))
        elif t == "TYPE_SEED":
            v = c.get("var")
            if isinstance(v, str) and v in REGS:
                seed_sites[(a, v)].add(c.get("itype") or "?")
        elif t == "FUNC_PARAM":
            to = c.get("to")
            if isinstance(to, str) and to in REGS:
                fparam_src[(a, to)].add(c.get("from"))
        elif t == "STACK_ACCESS":
            to, fr = c.get("to"), c.get("from")
            if isinstance(to, str) and to in REGS and isinstance(fr, str):
                stack_src[(a, to)].add(fr)
        elif t == "RETURN_TO":
            fr = c.get("from")
            if isinstance(fr, str) and fr.endswith(".return"):
                cl = hx(fr[:-len(".return")])
                if cl is not None:
                    ret_to[a].add(cl)

    def src_entity(text, fn):
        """(entity-key, rule-label) for a non-register source expression."""
        if not isinstance(text, str):
            return None, "nonstr"
        if text.startswith("*def@"):
            return None, "immediate_marker"
        if text.startswith("vtable_slot_"):
            return None, "vtable_slot"          # V: is a cross-class hub; not a value entity
        e = src_ent_id(text, fn)
        if e is None:
            return None, "unmapped_text"
        kind = src_kind_of(e)
        if kind is None:
            return None, "unmapped_ent"
        return e, kind

    def resolve_src(fn, site, reg, seen):
        """Walk `site`'s defining instruction to the entity that gave the value.

        Register sources (`mov eax, ecx`) follow the source register's unique
        reaching def and repeat; cycle / ambiguity -> no src.  `lea` is an
        address computation (not a value alias) -> no src.
        """
        key = (site, reg)
        if key in seen:
            return None, "cycle"
        seen = seen | {key}
        it = (insn_map.get(fn) or {}).get(site)
        if it is None:
            return None, "no_insn"
        mnem = (it.get("m") or "").lower()
        if mnem == "lea":
            return None, "lea_address"
        exprs = sorted(x for x in (assign_src.get((site, reg)) or ())
                       if isinstance(x, str) and not x.startswith("*def@"))
        if len(exprs) > 1:
            return None, "multi_assign"
        if len(exprs) == 1:
            s = exprs[0]
            if s in REGS:
                d2 = hx((it.get("r") or {}).get(s))
                if d2 is None:
                    return None, "reg_ambig"
                if d2 == fn:
                    # entry definition of the source register: this/param only
                    fps = sorted(x for x in (fparam_src.get((fn, s)) or ())
                                 if isinstance(x, str))
                    if len(fps) == 1:
                        e, kind = src_entity(fps[0], fn)
                        return (e, "reg_entry_" + kind) if e else (None, "reg_entry_" + kind)
                    return None, ("reg_entry_param_ambig" if len(fps) > 1
                                  else "reg_entry")
                return resolve_src(fn, d2, s, seen)
            return src_entity(s, fn)
        stk = sorted(x for x in (stack_src.get((site, reg)) or ())
                     if isinstance(x, str))
        if len(stk) > 1:
            return None, "multi_stack"
        if len(stk) == 1:
            return src_entity(stk[0], fn)
        if (site, reg) in seed_sites:
            return None, "immediate_seed"
        if mnem == "call" and reg == "eax":
            cls = sorted(ret_to.get(site) or ())
            if len(cls) == 1:
                return "RET:%X" % cls[0], "call_return"
            return None, ("call_return_ambig" if cls else "call_no_ret")
        return None, "no_source"

    def src_token(s):
        """Fingerprint of an ASSIGN source (one value expression)."""
        if not isinstance(s, str):
            return None
        mm = re.match(r"^0x([0-9A-Fa-f]{6,8}):this(?:\.member\((0x[0-9A-Fa-f]+)\))?$", s)
        if mm:
            if mm.group(2):
                off = int(mm.group(2), 16)
                return "M:%X:%d" % (off, member_width.get((int(mm.group(1), 16), off), 0))
            return "T:%s" % mm.group(1)
        mm = re.match(r"^0x([0-9A-Fa-f]{6,8})::param\d+(?:\.member\((0x[0-9A-Fa-f]+)\))?$", s)
        if mm:
            if mm.group(2):
                off = int(mm.group(2), 16)
                return "PM:%X:%d" % (off, member_width.get((int(mm.group(1), 16), off), 0))
            return "P:%s" % mm.group(1)
        if s.startswith("stack_+"):
            return "S:" + s[6:]
        if s.startswith("offset "):
            return "G:" + s[7:].strip()
        if re.match(r"^0x[0-9A-Fa-f]{6,8}$", s):
            return "GA:" + s
        if s.endswith(".return"):
            return "RET"
        return None

    ents = {}
    ref_map = []
    refs_total = refs_resolved = refs_ambig = 0
    refs_ambig_no_insn = refs_ambig_join = 0
    refs_entry = refs_nonentry = 0
    refs_by_field = collections.Counter()
    for ci, c in enumerate(raw):
        a = hx(c.get("addr"))
        fn = fn_at(a) if a is not None else None
        if fn is None or fn not in sample_set:
            continue
        insn = (insn_map.get(fn) or {}).get(a)
        t = c.get("type")
        for f in VAR_FIELDS:
            v = c.get(f)
            if not (isinstance(v, str) and v in REGS):
                continue
            reg = v
            defsite = None
            if t == "FUNC_PARAM" and a == fn:
                # callee parameter register at function entry: by definition the
                # value is the entry-state value (d<entry>), regardless of the
                # entry instruction's own operands.
                defsite = fn
            elif insn is not None:
                if f in ("from", "base", "receiver"):
                    defsite = hx((insn.get("r") or {}).get(reg))
                elif f == "to":
                    defsite = hx((insn.get("w") or {}).get(reg))
                    if defsite is None:
                        defsite = hx((insn.get("r") or {}).get(reg))
                elif f == "var":
                    defsite = hx((insn.get("w") or {}).get(reg))
                    if defsite is None:
                        defsite = hx((insn.get("r") or {}).get(reg))
            if defsite is None and t == "CALL_ARG" and f == "from" and insn is not None:
                defsite = callarg_def(fn, a, reg, c.get("to"))
            parent = "R:%X:%s" % (fn, reg)
            sub = ("%s%sd%X" % (parent, SUB_DEF_MARK, defsite)) if defsite is not None else None
            e = ents.setdefault(parent, {
                "fn": "0x%X" % fn, "reg": reg, "refs_total": 0, "refs_resolved": 0,
                "refs_ambiguous": 0, "subdefs": {},
            })
            e["refs_total"] += 1
            refs_total += 1
            refs_by_field[f] += 1
            if defsite is None:
                e["refs_ambiguous"] += 1
                refs_ambig += 1
                if insn is None:
                    refs_ambig_no_insn += 1
                else:
                    refs_ambig_join += 1
            else:
                e["refs_resolved"] += 1
                refs_resolved += 1
                if defsite == fn:
                    refs_entry += 1
                else:
                    refs_nonentry += 1
                sd = e["subdefs"].setdefault(sub, {
                    "def_site": "0x%X" % defsite, "refs": 0, "types": {},
                    "itypes": {}, "fields": {}, "_src": set(),
                })
                if "src_eid" not in sd:
                    if defsite == fn:
                        fps = sorted(x for x in (fparam_src.get((fn, reg)) or ())
                                     if isinstance(x, str))
                        if len(fps) == 1:
                            _se, _kind = src_entity(fps[0], fn)
                            _kind = "entry_" + _kind
                        else:
                            _se, _kind = None, ("entry_param_ambig" if len(fps) > 1
                                                else "entry_no_param")
                    else:
                        _se, _kind = resolve_src(fn, defsite, reg, frozenset())
                    sd["src_eid"] = _se
                    sd["src_kind"] = _kind
                sd["refs"] += 1
                sd["types"][t] = sd["types"].get(t, 0) + 1
                sd["fields"][f] = sd["fields"].get(f, 0) + 1
                if t == "TYPE_SEED" and f == "var":
                    ity = c.get("itype") or "?"
                    sd["itypes"][ity] = sd["itypes"].get(ity, 0) + 1
                    sd["_src"].add("SEED:" + ity)
                elif t == "ASSIGN" and f == "to":
                    tok = src_token(c.get("from"))
                    if tok:
                        sd["_src"].add(tok)
            ref_map.append({
                "c": ci, "addr": "0x%X" % a if a is not None else None,
                "type": t, "field": f, "reg": reg,
                "parent": parent, "subdef": sub,
            })

    # attach obs + narrowing proxy
    ent_with_obs = 0
    ent_2plus_obs = 0
    ent_disjoint = 0
    ent_differing = 0
    subdef_total = 0
    for parent in sorted(ents):
        e = ents[parent]
        fn = hx(e["fn"])
        obs_sets = []
        for sub in sorted(e["subdefs"]):
            sd = e["subdefs"][sub]
            d = hx(sd["def_site"])
            obs = sorted([list(x) for x in mem_obs.get((fn, e["reg"], d), set())])
            sd["obs"] = obs
            sd["obs_count"] = len(obs)
            subdef_total += 1
            if obs:
                obs_sets.append(frozenset((o, w) for (o, w) in obs))
        e["subdef_count"] = len(e["subdefs"])
        e["subdefs_le1"] = e["subdef_count"] <= 1
        total_obs = sorted({x for s in obs_sets for x in s})
        e["obs_total"] = len(total_obs)
        if total_obs:
            ent_with_obs += 1
        if len(obs_sets) >= 2:
            ent_2plus_obs += 1
            pair_ok = True
            for i in range(len(obs_sets)):
                for j in range(i + 1, len(obs_sets)):
                    if obs_sets[i] & obs_sets[j]:
                        pair_ok = False
                        break
                if not pair_ok:
                    break
            if pair_ok:
                ent_disjoint += 1
            if len(set(obs_sets)) >= 2:
                ent_differing += 1

    # TYPE_SEED itype narrowing proxy (TYPE_SEED var=reg carries an itype at the
    # defining instruction; per-subdef itype sets show whether the split separates
    # incompatible seed types that the parent entity currently merges).
    ent_with_itypes = 0
    ent_2plus_itypes = 0
    ent_disjoint_itypes = 0
    ent_differing_itypes = 0
    ent_with_src = 0
    ent_2plus_src = 0
    ent_disjoint_src = 0
    ent_differing_src = 0
    for parent in sorted(ents):
        e = ents[parent]
        isets = []
        for sub in sorted(e["subdefs"]):
            sd = e["subdefs"][sub]
            sd["src"] = sorted(sd.pop("_src", set()))
            it = sd.get("itypes") or {}
            if it:
                isets.append(frozenset(it))
        if not isets:
            continue
        ent_with_itypes += 1
        if len(isets) >= 2:
            ent_2plus_itypes += 1
            pair_ok = True
            for i in range(len(isets)):
                for j in range(i + 1, len(isets)):
                    if isets[i] & isets[j]:
                        pair_ok = False
                        break
                if not pair_ok:
                    break
            if pair_ok:
                ent_disjoint_itypes += 1
            if len(set(isets)) >= 2:
                ent_differing_itypes += 1

    # def-source fingerprint disjointness (ASSIGN from-expr / TYPE_SEED / ...):
    # measures whether the split separates the data sources that flow into the
    # same register name (the strongest narrowing proxy available in raw data).
    for parent in sorted(ents):
        e = ents[parent]
        ssets = []
        for sub in sorted(e["subdefs"]):
            src = e["subdefs"][sub].get("src") or []
            if src:
                ssets.append(frozenset(src))
        if not ssets:
            continue
        ent_with_src += 1
        if len(ssets) >= 2:
            ent_2plus_src += 1
            pair_ok = True
            for i in range(len(ssets)):
                for j in range(i + 1, len(ssets)):
                    if ssets[i] & ssets[j]:
                        pair_ok = False
                        break
                if not pair_ok:
                    break
            if pair_ok:
                ent_disjoint_src += 1
            if len(set(ssets)) >= 2:
                ent_differing_src += 1

    # M14b: src_eid coverage (subdefs whose value source is entity-classifiable)
    sub_with_src = sub_without_src = 0
    src_rule_hist = collections.Counter()
    src_prefix_hist = collections.Counter()
    src_eids = set()
    for parent in sorted(ents):
        for sub in sorted(ents[parent]["subdefs"]):
            sd = ents[parent]["subdefs"][sub]
            src_rule_hist[sd.get("src_kind") or "?"] += 1
            se = sd.get("src_eid")
            if se:
                sub_with_src += 1
                src_eids.add(se)
                src_prefix_hist[se.split(":")[0]] += 1
            else:
                sub_without_src += 1

    sample_functions = []
    for s in sample:
        rec = (ida_out.get("functions") or {}).get("0x%X" % s) or {}
        sample_functions.append({
            "start": "0x%X" % s,
            "name": rec.get("name") or "",
            "insns": len(rec.get("insns") or []),
            "mem": len(rec.get("mem") or []),
            "analyzed": bool(rec),
        })

    measurements = {
        "functions_requested": len(sample),
        "functions_analyzed": len(insn_map),
        "functions_missing": sorted(missing),
        "r_entities": len(ents),
        "refs_total": refs_total,
        "refs_resolved": refs_resolved,
        "refs_ambiguous": refs_ambig,
        "refs_ambiguous_no_insn": refs_ambig_no_insn,
        "refs_ambiguous_join": refs_ambig_join,
        "refs_by_field": dict(sorted(refs_by_field.items())),
        "refs_entry_def": refs_entry,
        "refs_nonentry_def": refs_nonentry,
        "subdefs_total": subdef_total,
        "entities_split_gt1": sum(1 for e in ents.values() if e["subdef_count"] > 1),
        "entities_ambiguous_refs": sum(1 for e in ents.values() if e["refs_ambiguous"]),
        "subdef_count_histogram": dict(sorted(collections.Counter(
            e["subdef_count"] for e in ents.values()).items())),
        "entities_with_obs": ent_with_obs,
        "entities_2plus_obs_subdefs": ent_2plus_obs,
        "entities_disjoint_obs": ent_disjoint,
        "entities_differing_obs": ent_differing,
        "entities_with_seed_itypes": ent_with_itypes,
        "entities_2plus_itype_subdefs": ent_2plus_itypes,
        "entities_disjoint_itypes": ent_disjoint_itypes,
        "entities_differing_itypes": ent_differing_itypes,
        "entities_with_src": ent_with_src,
        "entities_2plus_src_subdefs": ent_2plus_src,
        "entities_disjoint_src": ent_disjoint_src,
        "entities_differing_src": ent_differing_src,
        # ---- M14b def-site source union coverage ----
        "subdefs_with_src_eid": sub_with_src,
        "subdefs_without_src_eid": sub_without_src,
        "subdefs_with_src_eid_pct": (round(100.0 * sub_with_src / subdef_total, 2)
                                     if subdef_total else 0.0),
        "src_eid_distinct": len(src_eids),
        "src_eid_prefix_histogram": dict(sorted(src_prefix_hist.items())),
        "src_rule_histogram": dict(sorted(src_rule_hist.items())),
        "top_split_entities": [
            {"entity": p, "refs": ents[p]["refs_total"],
             "subdefs": ents[p]["subdef_count"],
             "ambiguous": ents[p]["refs_ambiguous"],
             "obs": ents[p]["obs_total"]}
            for p in sorted(ents, key=lambda x: (-ents[x]["refs_total"], x))[:20]
        ],
    }
    return {
        "meta": {
            "description": "M14 reg-def split prototype sample (side file; not the production ledger)",
            "generated_by": "tools/csp_export/extract_reg_split_sample.py",
            "worker": "tools/csp_export/ida_regsplit_sample.py",
            "source_constraints": str(RAW.relative_to(ROOT)),
            "parent_key_format": "R:<func_hex>:<reg>",
            "subdef_key_format": "R:<func_hex>:<reg>:d<def_site_hex>",
            "src_eid": "entity key (ent_id-exact) of the giving side, unioned by the solver: "
                       "M:/T:/P:/G:/S:/RET:; register chains are followed to the final "
                       "source; lea address computation, immediates (TYPE_SEED int), "
                       "sub-register arithmetic and unmapped text get no src_eid",
            "src_eid_prefixes": "M: member, T: this, P: param, G: global, S: stack, RET: return",
            "entry_def": "reads whose value was never redefined resolve to d<func_start>",
            "ambiguous_policy": "no unique reaching def -> parent key only (no subdef)",
            "regs": sorted(REGS),
            "idb_path": ida_out.get("idb_path"),
            "module": ida_out.get("module"),
            "spec_sha256": ida_out.get("spec_sha256"),
            "deterministic": True,
        },
        "sample_selection": SELECTION,
        "sample_functions": sample_functions,
        "measurements": measurements,
        "entities": ents,
        "ref_map": ref_map,
    }


def main():
    global MCP_URL, SELECTION
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    ap.add_argument("--mcp-url", default=MCP_URL)
    ap.add_argument("--dry-run", action="store_true",
                    help="select + write spec/wrapper only, no IDA call")
    ap.add_argument("--functions", type=int, default=0,
                    help="exact sample size (>0 switches to exact-count selection); "
                         "0 = frozen 71-function legacy rule")
    ap.add_argument("--tag", default="",
                    help="artifact suffix (e.g. 500 -> raw_constraints_split_500.json); "
                         "empty = legacy 71-function artifact paths")
    ap.add_argument("--chunk", type=int, default=0,
                    help="split the IDA worker call into N-function chunks and merge "
                         "(needed when the MCP tool call exceeds its ~60s budget); "
                         "0 = one call")
    args = ap.parse_args()
    MCP_URL = args.mcp_url
    set_paths(args.tag)
    print("[m14] artifacts: out=%s spec=%s" % (OUT.name, SPEC.name))

    if not RAW.exists():
        print("[m14] missing:", RAW, file=sys.stderr)
        return 1
    if not WORKER.exists():
        print("[m14] missing:", WORKER, file=sys.stderr)
        return 1

    raw_doc = json.loads(RAW.read_text(encoding="utf-8"))
    raw = raw_doc["constraints"]
    protos = json.loads(PROTOS.read_text(encoding="utf-8"))
    faddrs = sorted(int(a, 16) for a in protos)

    sample, selection = select_sample(raw, faddrs, target_count=args.functions)
    SELECTION = selection
    spec_bytes = write_spec(sample)
    wrapper_sha = write_wrapper()
    print("[m14] sample functions=%d (top_fns=%d spread=%d pool=%d) spec_sha=%s"
          % (len(sample), selection["top_functions"],
             selection["sample_size"] - selection["top_functions"],
             selection["pool_size"],
             hashlib.sha256(spec_bytes).hexdigest()[:16]))
    if args.dry_run:
        print("[m14] dry-run: wrote spec/wrapper only")
        return 0

    # ---- probe IDA immediately before use ----
    try:
        _d, health = mcp_call(MCP_URL, "server_health", {}, PROBE_TIMEOUT)
        if not health.get("hexrays_ready", False) and not health.get("auto_analysis_ready", False):
            print("[m14] IDA reachable but not ready:", health, file=sys.stderr)
    except Exception as e:
        print("[m14] IDA OFFLINE (%s): %s" % (MCP_URL, e), file=sys.stderr)
        return 2
    print("[m14] IDA online: idb=%s hexrays=%s" %
          (health.get("idb_path"), health.get("hexrays_ready")))

    if IDA_OUT.exists():
        IDA_OUT.unlink()
    t0 = time.time()
    if args.chunk and len(sample) > args.chunk:
        ida_out, _merged_bytes = run_ida_chunked(sample, spec_bytes, args.chunk)
        if ida_out is None:
            return 1
    else:
        try:
            _d, sc = mcp_call(MCP_URL, "py_exec_file", {"file_path": str(WRAPPER)}, RUN_TIMEOUT)
            stdout = str(sc.get("stdout", ""))
        except Exception as e:
            print("[m14] py_exec_file failed: %s: %s" % (type(e).__name__, e), file=sys.stderr)
            return 1
        if not IDA_OUT.exists():
            print("[m14] worker produced no output file:", IDA_OUT, file=sys.stderr)
            return 1
        ida_out = json.loads(IDA_OUT.read_text(encoding="utf-8"))
    wall = time.time() - t0
    print("[m14] worker wall=%.1fs" % wall)
    if ida_out.get("status") != "ok":
        print("[m14] worker status != ok:", ida_out.get("status"), file=sys.stderr)
        return 1
    spec_sha = hashlib.sha256(spec_bytes).hexdigest()
    if ida_out.get("spec_sha256") != spec_sha:
        print("[m14] stale worker output (spec sha mismatch): %s != %s"
              % (ida_out.get("spec_sha256"), spec_sha), file=sys.stderr)
        return 1
    idb = (ida_out.get("idb_path") or "")
    if idb and idb.replace("\\", "/").lower() != str(ROOT / "decompile-results" / "gamemd.exe.i64").replace("\\", "/").lower():
        print("[m14][warn] worker idb differs from expected:", idb)

    doc = join_and_measure(raw, faddrs, sample, ida_out)
    OUT.parent.mkdir(parents=True, exist_ok=True)
    data = (json.dumps(doc, ensure_ascii=False, indent=1, sort_keys=True) + "\n").encode("utf-8")
    OUT.write_bytes(data)
    m = doc["measurements"]
    print("[m14] wrote %s (%d bytes, sha256=%s)" %
          (OUT.relative_to(ROOT), len(data), hashlib.sha256(data).hexdigest()[:16]))
    print("[m14] entities=%d refs=%d resolved=%d ambiguous=%d (entry=%d nonentry=%d)"
          % (m["r_entities"], m["refs_total"], m["refs_resolved"],
             m["refs_ambiguous"], m["refs_entry_def"], m["refs_nonentry_def"]))
    print("[m14] split>1=%d subdefs=%d obs: entities=%d 2+subdefs=%d disjoint=%d differing=%d"
          % (m["entities_split_gt1"], m["subdefs_total"], m["entities_with_obs"],
             m["entities_2plus_obs_subdefs"], m["entities_disjoint_obs"],
             m["entities_differing_obs"]))
    return 0


if __name__ == "__main__":
    sys.exit(main())
