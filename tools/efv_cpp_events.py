#!/usr/bin/env python3
"""
efv_cpp_events.py -- Extract canonical execution-flow events from a C++ CFG.

Task T14 of the execution-flow-cfg pipeline. This is the C++-side MIRROR of T8's
`efv_ida_events.py`. T12's `efv_cpp_cfg.build_cpp_cfg` produces an `efv_model.CFG`
whose every block's `ordered_events` list holds RAW C++ statement fragments (in
source order) -- the synthesised branch tests (`"if (<cond>)"`,
`"while (<cond>)"`, `"for-cond (<cond>)"`, `"switch (<sel>)"`), `"return ..."`,
`"goto LABEL"`, the `"decl <name>"` local-declaration markers, and verbatim plain
statements. This module runs a leaf extractor over each of those raw fragments
and REPLACES the block's `ordered_events` with the canonical event strings
(`efv_model` grammar): member READ/WRITE, vtable CALL, named CALL, global
READ/WRITE, RET.

The whole point is that a FAITHFUL C++ translation produces the SAME events the
IDA side (T8) does for the same function, so T16/T18 can match the two CFGs.
Calibration target: BuildingClass::GetPowerOutput (`src/structure/building.cpp`,
the T13 golden) -> the SAME 13-event multiset T8 extracts for 0x44E7B0
(`READ(member,1312)` x3, `CALL(vfptr+468)`, `READ(member,1640)`,
`READ(member,276)`, `READ(member,1794)`, `READ(member,1632)`, `RET` x3,
`CALL(0x5F5C60)`, `CALL(0x7C5F00)`).

------------------------------------------------------------------------------
LEAF EXTRACTION -- token-driven (consumes T10's tokenizer), NOT regex
------------------------------------------------------------------------------
The IDA side (T8) scans pseudocode TEXT with regexes (`*(this + N)`,
`(*(*this + N))(...)`, ...). The C++ side is richer -- a member can be read as
`this->Member` OR as a bare `Member` (subject to local-variable shadowing) -- so
this leaf walks T10's `efv_cpp_lex.tokenize()` token stream. For every construct
it emits a `(start_pos, end_pos, event)` hit, then runs the SAME position-ordered
overlap de-dup the IDA side uses (`verify_execution_flow._order_hits`) so the two
producers order intra-block events identically.

WHAT EACH CONSTRUCT BECOMES (the grammar that makes/breaks a match):

  this->Method(...)      -> CALL(vfptr+N)  if Method is virtual (vtable index*4
                            via `get_vtable_byte_offset`, base-first inheritance
                            chain -- SAME function the T13 golden/legacy verifier
                            used, so C++ vfptr+N == IDA vfptr+N), else CALL(0xADDR)
                            (resolved as Class::Method via signals/functions.json).
  this->Member           -> READ/WRITE(member,N)  (member offset from signals.json;
                            `this->X` is UNAMBIGUOUSLY a member -- a Resolver with
                            EMPTY locals is used so a same-named local never
                            shadows it).
  Class::Method(...)     -> CALL(0xADDR)  (qualified direct call).
  Func(...)  [PascalCase]-> CALL(0xADDR)  (simple direct call).
  return                 -> RET.
  bare IDENT             -> T11 Resolver.resolve(IDENT) with the BLOCK's locals:
                              ("local",None)  -> NO event   (a local read is not an
                                                 observable side effect; SHADOWS a
                                                 same-named member)
                              ("member",off)  -> READ/WRITE(member,off)
                              ("global",addr) -> READ/WRITE(global,addr)
                              (None,None)     -> NO event   (type / keyword / callee)
  IDENT [ ... ]          -> NO event  (array subscript = base-ADDRESS + index; the
                            IDA side renders a variable-indexed member array as a
                            local pointer walk -- `v6 = this + 379; ... *v6` -- and
                            drops the read, so the C++ `Upgrades[slot]` must drop it
                            too. THIS is why the golden uses bare `Upgrades[slot]`:
                            `Upgrades` IS member 1516, but neither side counts it.)
  IDENT after `.`/`->`/`::` (not `this->`) -> NO event  (chained access on ANOTHER
                            object: `this->Type->PowerOutput` counts only the
                            `this`-relative `Type` read (1312); the trailing
                            `->PowerOutput` is on the `Type` pointer, not `this`).

LOCAL SHADOWING / SCOPE: the locals visible at a block = union of the `"decl
<name>"` markers (T12) in every block on a path from entry to it (computed here
by reverse-reachability over the CFG). `"decl <name>"` markers themselves are
plumbing -- they update the locals set and emit NO event (the raw declaration
statement that FOLLOWS the marker is still scanned for its initialiser's reads /
calls, e.g. `int power = this->Type->PowerOutput;` -> READ(member,1312)).

------------------------------------------------------------------------------
WHY IT REUSES T4/T11 + the legacy resolvers (does not re-implement)
------------------------------------------------------------------------------
* member/global offset resolution -> T11 `efv_cpp_resolve.Resolver` (which itself
  reuses T4's `load_signals.Signals`). Per task: "Use T11 Resolver for ALL
  identifier->offset (don't re-implement)."
* vtable index, direct-call address, write-detection, position ordering ->
  `verify_execution_flow.{get_vtable_byte_offset,_resolve_call,_is_write,
  _order_hits,Maps,load_all_maps,SKIP_NAMES}`, imported verbatim (that file is a
  REVERSE-pipeline protected file: imported, NEVER modified -- the same safe
  pattern T8 uses). Reusing the SAME vtable + call resolution is what GUARANTEES
  C++ vfptr+N == IDA vfptr+N and C++ CALL(0xADDR) == IDA CALL(0xADDR).
* event strings -> `efv_model` builders (single source of truth for the grammar).

This module does NOT modify efv_cpp_cfg.py / efv_model.py / efv_cpp_resolve.py.

Public API:
    extract_events_into(cfg, class_name, maps=None, signals=None) -> cfg  (in place)
    build_events_cfg(cpp_text, class_name, maps=None, signals=None)  -> cfg  (build+extract)
    make_cpp_leaf(class_name, locals_set, M, signals) -> leaf(fragment) -> [event]
    get_maps() / get_signals()  -> shared, cached symbol sources
"""

import os
import sys

_HERE = os.path.dirname(os.path.abspath(__file__))
if _HERE not in sys.path:
    sys.path.insert(0, _HERE)

# Canonical event builders (T5 grammar). MUST use these -- never hand-spell event
# strings -- so the encoding stays identical across producers.
from efv_model import (
    read_member,
    write_member,
    call_direct,
    call_virtual,
    read_global,
    write_global,
    read_member_unresolved,   # P1.3: unresolved this->Member (advisory READ wildcard)
    write_member_unresolved,  # P1.3: unresolved this->Member (element-exempt WRITE wildcard)
    RET,
)

# T12 structural CFG builder (used by build_events_cfg + the self-test).
from efv_cpp_cfg import build_cpp_cfg

# T10 tokenizer + kinds (the required front end for the leaf walk).
from efv_cpp_lex import tokenize, KIND_IDENT, KIND_OP

# T11 identifier -> (member offset | global addr | local | unknown) resolver.
from efv_cpp_resolve import Resolver

# T4 query layer over signals.json (member offsets / globals for the Resolver).
from load_signals import Signals

# PROVEN vtable / call / write / ordering helpers, imported verbatim from the
# legacy verifier. `verify_execution_flow.py` is a REVERSE-pipeline protected
# file: imported, never modified. It has no import-time side effects (loaders are
# functions, `main()` is guarded by `if __name__ == "__main__"`), so importing is
# safe -- the same pattern T8 uses. Reusing the SAME functions is what guarantees
# C++ vfptr+N == IDA vfptr+N and C++ CALL(0xADDR) == IDA CALL(0xADDR).
from verify_execution_flow import (
    get_vtable_byte_offset,   # method name -> vtable byte offset (index*4), base-first chain
    _resolve_call,            # "Class::Method" / "Func" -> int addr (or None)
    _is_write,                # is the access at text[end] the target of `= ` ?
    _order_hits,              # position-ordered, overlap-de-duped event list
    Maps,                     # symbol-table container
    load_all_maps,            # functions.json + signals.json + globals + vtable parse
    SKIP_NAMES,               # keywords / CRT / intrinsics that never make an event
)

__all__ = [
    "extract_events_into",
    "build_events_cfg",
    "make_cpp_leaf",
    "get_maps",
    "get_signals",
]


# ============================================================
# Shared symbol sources (loaded once, cached)
# ============================================================

_MAPS = None
_SIGNALS = None
# Repo-root signals.json (this file lives in <repo>/tools/).
_SIGNALS_PATH = os.path.join(os.path.dirname(_HERE), "signals.json")


def get_maps():
    """Lazily build and cache the shared `Maps` (functions.json + signals.json +
    globals + member layout + vtable indices). Loading is heavy, so multi-function
    callers (T19 CLI) should load ONCE and pass it to `extract_events_into`."""
    global _MAPS
    if _MAPS is None:
        _MAPS = load_all_maps()
    return _MAPS


def get_signals():
    """Lazily build and cache the shared `load_signals.Signals` (signals.json),
    used to construct per-block Resolvers. Heavy; pass it in to reuse."""
    global _SIGNALS
    if _SIGNALS is None:
        _SIGNALS = Signals(_SIGNALS_PATH)
    return _SIGNALS


# ============================================================
# Unresolved-member WARN + offset-TODO log (P1.3)
# ============================================================
#
# When `this->Member` is SYNTACTICALLY CERTAIN to be a member but signals.json has
# no byte offset for it, the leaf emits an efv_model wildcard (element-scoped
# exemption) INSTEAD of silently dropping the event, AND records it here: a stderr
# WARN naming class + member + access kind, plus an append to the offset-TODO log
# so P2 (address-mapping) can resolve it later. The unresolved member is NEVER
# silently swallowed. Per process we dedup by (class, member, verb) so a member
# touched across many blocks WARNs once; the file append additionally dedups
# against lines already present. Logging is BEST-EFFORT (never raises): a log
# failure must never break verification.

def _offset_todo_path():
    """Absolute, repo-root-anchored offset-TODO path (never relative -- the verifier
    / injected DLL may run from an unexpected CWD; project rule 12.7)."""
    return os.path.join(os.path.dirname(_HERE), ".omo", "evidence", "offset-todo.txt")


_UNRESOLVED_SEEN = set()        # (class, member, verb) already WARNed this process
_OFFSET_TODO_EXISTING = None    # set[str] of TODO lines already on disk (lazy-loaded)


def _load_offset_todo_existing():
    """The set of offset-TODO lines already on disk (for append dedup); lazy + cached.
    Missing/unreadable file -> empty set (never raises)."""
    global _OFFSET_TODO_EXISTING
    if _OFFSET_TODO_EXISTING is not None:
        return _OFFSET_TODO_EXISTING
    existing = set()
    try:
        with open(_offset_todo_path(), "r", encoding="utf-8", errors="replace") as fh:
            for ln in fh:
                existing.add(ln.rstrip("\n"))
    except OSError:
        pass
    _OFFSET_TODO_EXISTING = existing
    return existing


def _record_unresolved_member(class_name, member, verb):
    """WARN (stderr) + append one offset-TODO line for an unresolved `this->member`
    access of kind `verb` ('READ' / 'WRITE'). Deduped per process by
    (class, member, verb) and against existing file content. ASCII-only output
    (cp936 console safety). Best-effort I/O: never raises."""
    cls = class_name or "<free-function>"
    key = (cls, member, verb)
    if key in _UNRESOLVED_SEEN:
        return
    _UNRESOLVED_SEEN.add(key)
    sys.stderr.write(
        "WARN [efv_cpp_events] unresolved member offset: {}::{} ({}) -- "
        "element-scoped exemption applied; recorded to offset-TODO for P2\n"
        .format(cls, member, verb))
    line = "{}::{}\t{}\tunresolved-member-offset (signals.json has no entry)".format(
        cls, member, verb)
    existing = _load_offset_todo_existing()
    if line in existing:
        return
    existing.add(line)
    try:
        path = _offset_todo_path()
        os.makedirs(os.path.dirname(path), exist_ok=True)
        with open(path, "a", encoding="utf-8") as fh:
            fh.write(line + "\n")
    except OSError:
        pass


# ============================================================
# decl markers / scope (locals visible at each block)
# ============================================================

_DECL_PREFIX = "decl "


def _is_decl_marker(fragment):
    """True if `fragment` is a T12 `"decl <name>"` local-declaration marker
    (plumbing only -- it updates the locals set, it is NOT scanned for events)."""
    return isinstance(fragment, str) and fragment.startswith(_DECL_PREFIX)


def _own_decls(block):
    """Names declared (via `"decl <name>"` markers) directly in `block`."""
    names = set()
    for ev in block.ordered_events:
        if _is_decl_marker(ev):
            nm = ev[len(_DECL_PREFIX):].strip()
            if nm:
                names.add(nm)
    return names


def _locals_per_block(cfg):
    """Map every block id -> the set of local names VISIBLE in it.

    A local is visible at block B iff it is declared on some path from entry to B,
    i.e. in a block that can REACH B (T11/T12 contract: "union along all entry->B
    paths"). Implemented by reverse-reachability: locals(B) = union of the `decl`
    markers in B and in every ancestor that can reach B (B itself included, so a
    block's own decls shadow uses that follow them in source order). This is a
    safe over-approximation -- it can only SHADOW (drop) a bare access, never
    fabricate one -- so an unexpectedly-shadowed bare member would only ever
    UNDER-emit (a faithful translation accesses members via `this->`, which is
    never shadowed)."""
    preds = {bid: [] for bid in cfg.blocks}
    for bid, blk in cfg.blocks.items():
        for (dst, _label) in blk.successors:
            if dst in preds:
                preds[dst].append(bid)

    own = {bid: _own_decls(blk) for bid, blk in cfg.blocks.items()}

    result = {}
    for bid in cfg.blocks:
        # backward BFS over predecessors -> every block that can reach `bid`
        seen = {bid}
        stack = [bid]
        while stack:
            x = stack.pop()
            for p in preds.get(x, ()):
                if p not in seen:
                    seen.add(p)
                    stack.append(p)
        loc = set()
        for a in seen:
            loc |= own[a]
        result[bid] = loc
    return result


# ============================================================
# Token helpers
# ============================================================

# An IDENT immediately PRECEDED by one of these operators is a member / scope
# access on ANOTHER object (or a qualified name) -- never a `this`-relative event.
_MEMBER_PREFIX_OPS = frozenset({".", "->", "::"})


def _is_ident(tok):
    return tok is not None and tok.kind == KIND_IDENT


def _is_op(tok, value):
    return tok is not None and tok.kind == KIND_OP and tok.value == value


def _tok_end(tok):
    """0-based char offset just past `tok` in the source fragment."""
    return tok.pos + len(tok.value)


def _is_pascal_case(name):
    """First character is an upper-case ASCII letter (a callable/type name shape;
    matches the legacy `[A-Z][A-Za-z0-9_]*` simple/qualified-call regexes)."""
    return bool(name) and "A" <= name[0] <= "Z"


# ============================================================
# C++ leaf extractor (token walk -> canonical events)
# ============================================================

def make_cpp_leaf(class_name, locals_set, M, signals):
    """Return `leaf(fragment_text) -> list[event_str]` for a method of
    `class_name` whose visible locals are `locals_set`.

    `M`       : a `verify_execution_flow.Maps` (vtable indices + call addresses).
    `signals` : a `load_signals.Signals` (member offsets + globals, via Resolver).

    Two Resolvers are built once per leaf:
      * `bare_resolver`  -- carries `locals_set`; used for BARE identifiers so a
        local SHADOWS a same-named member/global (no event).
      * `member_resolver`-- EMPTY locals; used for `this->Member` (a member access
        is never shadowed by a local of the same name).
    Both go through T11's `Resolver` -> all identifier->offset resolution is T11's,
    never re-implemented here."""
    bare_resolver = Resolver(class_name, locals_set, signals=signals)
    member_resolver = Resolver(class_name, set(), signals=signals)
    has_class = bool(class_name)

    def _member_or_global_event(kind_tuple, text, end_pos):
        """Turn a Resolver result into a member/global READ or WRITE event (or
        None). `end_pos` is the char offset just past the identifier (for
        `_is_write` -- it skips trailing `[...]` and looks for `= `)."""
        kind, val = kind_tuple
        if kind == "member":
            return (write_member(val) if _is_write(text, end_pos)
                    else read_member(val))
        if kind == "global":
            return (write_global(val) if _is_write(text, end_pos)
                    else read_global(val))
        return None  # "local" / unknown -> not an observable event

    def _this_member_event(member_name, text, end_pos):
        """Resolve a SYNTACTICALLY-CERTAIN `this->member_name` access (the caller has
        already established the `this->` prefix and that no `(` follows -> a value
        access, not a method call) to a member / global READ or WRITE event.

        Because `this->X` is UNAMBIGUOUSLY a `this`-relative member, a Resolver miss
        here means an UNRESOLVED member -- signals.json has no byte offset for it --
        NOT a non-data identifier. The OLD behaviour silently DROPPED it (returned
        None), so the C++ block MISSED a READ/WRITE the IDA side has -> the block
        sets differ -> the bijection FAILs -> a FALSE-POSITIVE on faithful code that
        merely touches a not-yet-mapped member. Instead, emit an element-scoped
        WILDCARD (efv_model) and record the member (WARN + offset-TODO for P2):
          * READ  -> read_member_unresolved()  (advisory; never gates)
          * WRITE -> write_member_unresolved() (excused 1-for-1 by STEP3(0); the
                     bijection treats the member-write dimension identity-free when
                     a wildcard is present). CALLs / resolvable members keep gating.
        Never returns None (the access is always a member event of some shape)."""
        kind, val = member_resolver.resolve(member_name)
        if kind == "member":
            return (write_member(val) if _is_write(text, end_pos)
                    else read_member(val))
        if kind == "global":
            return (write_global(val) if _is_write(text, end_pos)
                    else read_global(val))
        # UNRESOLVED member: `this->` guarantees member-ness, but no signals offset.
        is_wr = _is_write(text, end_pos)
        _record_unresolved_member(class_name, member_name, "WRITE" if is_wr else "READ")
        return write_member_unresolved() if is_wr else read_member_unresolved()

    def leaf(text):
        if not text:
            return []
        toks = tokenize(text)
        n = len(toks)
        hits = []  # (start_pos, end_pos, event)
        i = 0
        while i < n:
            t = toks[i]

            # -- non-identifier tokens carry no event on their own -----------
            if t.kind != KIND_IDENT:
                i += 1
                continue

            val = t.value

            # -- return -> RET ----------------------------------------------
            if val == "return":
                hits.append((t.pos, _tok_end(t), RET))
                i += 1
                continue

            # -- this->[~]Method(...)  /  this->Member ----------------------
            if val == "this" and _is_op(toks[i + 1] if i + 1 < n else None, "->"):
                j = i + 2
                # optional destructor tilde: this->~Dtor(...)
                tilde = ""
                if _is_op(toks[j] if j < n else None, "~"):
                    tilde = "~"
                    j += 1
                if _is_ident(toks[j] if j < n else None):
                    mtok = toks[j]
                    method = tilde + mtok.value
                    after = toks[j + 1] if j + 1 < n else None
                    if _is_op(after, "("):
                        # method call on `this`: virtual -> vfptr, else direct
                        off = (get_vtable_byte_offset(method, class_name, M)
                               if has_class else None)
                        if off is not None:
                            hits.append((t.pos, _tok_end(mtok), call_virtual(off)))
                        elif has_class:
                            addr = _resolve_call(class_name + "::" + method, M)
                            if addr:
                                hits.append((t.pos, _tok_end(mtok), call_direct(addr)))
                    else:
                        # this->Member value access (member never shadowed). A
                        # Resolver MISS here is an UNRESOLVED member, not a non-data
                        # identifier -> element-scoped wildcard + WARN + offset-TODO
                        # (never a silent drop -> no false-positive on faithful code).
                        ev = _this_member_event(mtok.value, text, _tok_end(mtok))
                        if ev is not None:
                            hits.append((t.pos, _tok_end(mtok), ev))
                    i = j + 1
                    continue
                # malformed `this->` (no method/member) -> skip the `this`
                i += 1
                continue

            # -- a `this` not used as `this->...` is just the keyword --------
            if val == "this":
                i += 1
                continue

            # -- skip keywords / CRT / intrinsics ---------------------------
            if val in SKIP_NAMES:
                i += 1
                continue

            # -- an IDENT after `.`/`->`/`::` is a chained / scoped access ----
            #    (`Type->PowerOutput`: only the `this`-relative Type read counts).
            prev = toks[i - 1] if i > 0 else None
            if prev is not None and prev.kind == KIND_OP and prev.value in _MEMBER_PREFIX_OPS:
                i += 1
                continue

            nxt = toks[i + 1] if i + 1 < n else None

            # -- qualified name  A :: B (:: C)*  -> direct call if `(` follows --
            if _is_op(nxt, "::"):
                k = i
                last_ident = t
                while (_is_op(toks[k + 1] if k + 1 < n else None, "::")
                       and _is_ident(toks[k + 2] if k + 2 < n else None)):
                    last_ident = toks[k + 2]
                    k += 2
                after = toks[k + 1] if k + 1 < n else None
                if _is_op(after, "("):
                    qual_name = text[t.pos:_tok_end(last_ident)]
                    addr = _resolve_call(qual_name, M)
                    if addr:
                        hits.append((t.pos, _tok_end(last_ident), call_direct(addr)))
                # qualified name (call or not) is consumed as one unit; its inner
                # idents are scope-qualified (never `this`-relative reads).
                i = k + 1
                continue

            # -- simple PascalCase call  Func(...) --------------------------
            if _is_op(nxt, "(") and _is_pascal_case(val):
                addr = _resolve_call(val, M)
                if addr:
                    hits.append((t.pos, _tok_end(t), call_direct(addr)))
                i += 1
                continue

            # -- array subscript  IDENT[...]  -> base ADDRESS, NO read --------
            #    (IDA renders a variable-indexed member array as a local pointer
            #    walk and drops the read; `Upgrades[slot]` (member 1516) is dropped
            #    on BOTH sides. The `[...]` body tokenizes normally afterwards.)
            if _is_op(nxt, "["):
                i += 1
                continue

            # -- bare identifier -> Resolver (local shadows member/global) ----
            ev = _member_or_global_event(bare_resolver.resolve(val), text, _tok_end(t))
            if ev is not None:
                hits.append((t.pos, _tok_end(t), ev))
            i += 1

        return _order_hits(hits)

    return leaf


# ============================================================
# CFG event extraction (the public entry point)
# ============================================================

def extract_events_into(cfg, class_name, maps=None, signals=None):
    """Replace every block's RAW C++ `ordered_events` (T12 markers + fragments)
    with the extracted CANONICAL events, in source order, IN PLACE.

    For each block: compute the locals visible there (union of `decl` markers
    along every entry->block path), build a leaf for that scope, run it over each
    raw fragment (SKIPPING `"decl <name>"` markers -- they only fed the locals
    set), and concatenate the per-fragment events in fragment order. The
    synthesised condition markers (`"if (<cond>)"`, `"while (<cond>)"`,
    `"for-cond (<cond>)"`, `"switch (<sel>)"`) contribute their condition's own
    reads / calls automatically (the keyword is lower-case and in SKIP_NAMES, so
    it never makes a spurious CALL); `"goto L"` / structural fragments yield none.

    `class_name` fixes the member namespace + vtable chain (None / "" for a free
    function -> member step skipped, vtable calls become direct-call fallbacks).
    `maps` / `signals` may be injected (load once, reuse) -- otherwise the cached
    shared instances are used. Returns the same `cfg` (mutated)."""
    if maps is None:
        maps = get_maps()
    if signals is None:
        signals = get_signals()

    block_locals = _locals_per_block(cfg)

    for block in cfg:
        leaf = make_cpp_leaf(class_name, block_locals.get(block.id, set()),
                             maps, signals)
        events = []
        for fragment in block.ordered_events:
            if _is_decl_marker(fragment):
                continue  # plumbing only -- not an event
            events.extend(leaf(fragment))
        # `ordered_events` is a declared slot on efv_model.Block -> assignable.
        block.ordered_events = events
    return cfg


def build_events_cfg(cpp_text, class_name, maps=None, signals=None):
    """Convenience: build the structural CFG (T12) from C++ function text and
    extract canonical events into it (T14). Returns a ready-to-normalize/match
    `efv_model.CFG`."""
    cfg = build_cpp_cfg(cpp_text)
    return extract_events_into(cfg, class_name, maps=maps, signals=signals)


# ============================================================
# CLI / self-test
# ============================================================

def _extract_golden_function(cpp_path, signature_fragment):
    """Slice the full text of the function whose definition contains
    `signature_fragment` (e.g. "BuildingClass::GetPowerOutput()") out of a .cpp
    file by brace-matching from the first `{` after the signature. Returns the
    function text (signature + body) or None if not found."""
    try:
        with open(cpp_path, "r", encoding="utf-8", errors="replace") as f:
            src = f.read()
    except OSError:
        return None
    sig = src.find(signature_fragment)
    if sig < 0:
        return None
    # back up to the start of the line carrying the signature (for readability)
    line_start = src.rfind("\n", 0, sig) + 1
    brace = src.find("{", sig)
    if brace < 0:
        return None
    depth = 0
    i = brace
    n = len(src)
    while i < n:
        c = src[i]
        if c == "{":
            depth += 1
        elif c == "}":
            depth -= 1
            if depth == 0:
                return src[line_start:i + 1]
        i += 1
    return None


# The exact T8 IDA-side flattened event multiset for 0x44E7B0 (from
# .omo/evidence/task-8-events.txt) -- the C++ side MUST reproduce it.
_T8_GETPOWEROUTPUT_FLAT = [
    "READ(member,1312)",
    "CALL(vfptr+468)",
    "RET",
    "READ(member,1640)",
    "READ(member,1312)",
    "READ(member,1312)",
    "READ(member,276)",
    "READ(member,1794)",
    "READ(member,1632)",
    "RET",
    "CALL(0x5F5C60)",
    "RET",
    "CALL(0x7C5F00)",
]

# Fallback golden text (byte-identical to src/structure/building.cpp lines
# 590-623) used only if the source file cannot be read.
_GOLDEN_FALLBACK = """\
int BuildingClass::GetPowerOutput()
{
    int power = this->Type->PowerOutput;
    if (this->Mission_Harvest())
        return 0;
    if (this->HasExtraPowerBonus)
        power += this->Type->PowerBonus;
    BuildingTypeClass* type = this->Type;
    if (type->Overpowerable || type->PoweredSpecial)
    {
        int bonus = type->PowerBonus;
        if (bonus > 0)
        {
            int overpowerers = this->secondaryTurretIndex;
            if (overpowerers > 0)
                power += overpowerers * bonus;
        }
    }
    if (this->UpgradeLevel)
    {
        int slot = 0;
        do
        {
            if (Upgrades[slot])
                power += Upgrades[slot]->PowerOutput;
            ++slot;
        }
        while (slot < 3);
    }
    if (power <= 0 || !this->HasPower)
        return 0;
    double healthRatio = this->GetHealthRatio();
    return Math::RoundToInt(healthRatio * (double)power);
}
"""


def _selftest():
    out = []

    def line(s=""):
        out.append(s)

    checks = []

    def check(name, cond):
        checks.append((name, bool(cond)))
        return bool(cond)

    line("=" * 78)
    line("T14 efv_cpp_events -- canonical events from a C++ CFG")
    line("=" * 78)

    # ---- load the FAITHFUL GetPowerOutput from building.cpp (the T13 golden) --
    building_cpp = os.path.normpath(
        os.path.join(os.path.dirname(_HERE), "src", "structure", "building.cpp"))
    golden = _extract_golden_function(building_cpp, "BuildingClass::GetPowerOutput()")
    source_note = "src/structure/building.cpp (golden)"
    if golden is None:
        golden = _GOLDEN_FALLBACK
        source_note = "embedded fallback (building.cpp unreadable)"
    line("function : BuildingClass::GetPowerOutput   [{}]".format(source_note))
    line("")

    try:
        maps = get_maps()
        signals = get_signals()
    except Exception as exc:  # signals.json / functions.json missing
        line("!! could not load symbol sources: {!r}".format(exc))
        check("symbol sources (signals.json / functions.json) load", False)
        _emit(out, checks)
        return 1

    cfg = build_cpp_cfg(golden)
    extract_events_into(cfg, "BuildingClass", maps=maps, signals=signals)

    line("CFG      : entry={} blocks={}".format(cfg.entry_id, len(cfg)))
    line("")
    line("--- per-block canonical events (DFS pre-order) ---")
    flat = []
    for bid in cfg.traverse(order="dfs"):
        b = cfg.get_block(bid)
        evs = list(b.ordered_events)
        flat.extend(evs)
        if evs:
            line("  block {:>2} -> {} : {}".format(bid, b.successors, evs))
        else:
            line("  block {:>2} -> {} : (no events)".format(bid, b.successors))

    line("")
    line("--- flattened event list ({}) ---".format(len(flat)))
    for e in flat:
        line("    " + e)

    # ---- REQUIRED key-event containment (the task's verify list) -------------
    line("")
    line("--- required key events (must match T8's IDA-side 0x44E7B0) ---")
    required = ["READ(member,1312)", "CALL(vfptr+468)",
               "CALL(0x5F5C60)", "CALL(0x7C5F00)", "RET"]
    for ev in required:
        present = ev in flat
        line("  [{}] {} present".format("PASS" if present else "FAIL", ev))
        check("required event {} present".format(ev), present)

    # ---- the trailing chained / array accesses are correctly DROPPED ---------
    line("")
    line("--- chained / array accesses dropped (mirror IDA) ---")
    # Upgrades IS member 1516, but it is accessed as Upgrades[slot] (array base ->
    # IDA local pointer walk) -> NEITHER side emits a read for it.
    no_upg = "READ(member,1516)" not in flat and "WRITE(member,1516)" not in flat
    line("  [{}] no spurious READ/WRITE(member,1516) for bare Upgrades[slot]"
         .format("PASS" if no_upg else "FAIL"))
    check("array-indexed bare member Upgrades[slot] emits no event", no_upg)
    # Type->PowerOutput etc: only the this-relative Type read (1312) is counted;
    # the trailing ->PowerOutput on the Type pointer is not in the vocabulary.
    only_member_reads = {e for e in flat if e.startswith("READ(member,")}
    expected_member_reads = {"READ(member,1312)", "READ(member,1640)",
                             "READ(member,276)", "READ(member,1794)",
                             "READ(member,1632)"}
    line("  member reads seen : {}".format(sorted(only_member_reads)))
    check("member-read SET equals T8's (chained ->X dropped)",
          only_member_reads == expected_member_reads)

    # ---- full multiset equality with T8 (the strong "matching T8" claim) -----
    line("")
    line("--- full event multiset vs T8 (0x44E7B0) ---")
    cpp_sorted = sorted(flat)
    t8_sorted = sorted(_T8_GETPOWEROUTPUT_FLAT)
    line("  C++ ({:>2}) : {}".format(len(cpp_sorted), cpp_sorted))
    line("  T8  ({:>2}) : {}".format(len(t8_sorted), t8_sorted))
    check("C++ flattened event MULTISET == T8 IDA-side multiset (0x44E7B0)",
          cpp_sorted == t8_sorted)

    # ---- every emitted event is canonical (no raw C++ text leaked) -----------
    import re as _re
    grammar = _re.compile(
        r'^(?:CALL\(0x[0-9A-F]+\)|CALL\(vfptr\+\d+\)|'
        r'READ\(member,\d+\)|WRITE\(member,\d+\)|'
        r'READ\(global,0x[0-9A-F]+\)|WRITE\(global,0x[0-9A-F]+\)|RET)$')
    all_canonical = all(grammar.match(e) for e in flat)
    check("all emitted events match the canonical grammar (no raw text left)",
          all_canonical)
    # no `decl` marker survived into the events
    check("no 'decl ' marker leaked into events",
          not any(_is_decl_marker(e) for e in flat))

    # ---- micro-tests: shadow, WRITE, global, free-function ------------------
    line("")
    line("--- leaf micro-tests (shadow / WRITE / global / free fn) ---")
    leaf = make_cpp_leaf("BuildingClass", {"power"}, maps, signals)
    # local 'power' shadows nothing (not a member) and 'Type' bare resolves
    e_bare = leaf("power = this->Type->PowerOutput")
    check("bare local 'power' -> no event; this->Type -> READ(member,1312)",
          e_bare == ["READ(member,1312)"])
    # WRITE: this->HasPower = false  -> WRITE(member,1632)
    e_wr = leaf("this->HasPower = false")
    check("this->HasPower = false -> WRITE(member,1632)",
          e_wr == ["WRITE(member,1632)"])
    # shadow: a LOCAL named like a member is dropped
    leaf_sh = make_cpp_leaf("BuildingClass", {"Type"}, maps, signals)
    e_sh = leaf_sh("int x = Type")
    check("bare 'Type' SHADOWED by a local -> no member event", e_sh == [])
    # bare member (no this->, scalar) DOES resolve via the Resolver
    leaf_bm = make_cpp_leaf("BuildingClass", set(), maps, signals)
    e_bm = leaf_bm("if (HasPower)")
    check("bare scalar member 'HasPower' -> READ(member,1632)",
          e_bm == ["READ(member,1632)"])
    # qualified + simple direct calls
    e_call = leaf("Math::RoundToInt(x)")
    check("Math::RoundToInt(x) -> CALL(0x7C5F00)", e_call == ["CALL(0x7C5F00)"])
    # free function (class_name=None): member step skipped, this->X -> nothing
    leaf_free = make_cpp_leaf(None, set(), maps, signals)
    e_free = leaf_free("return Type")
    check("free fn (no class): bare 'Type' not a member -> only RET",
          e_free == ["RET"])

    _emit(out, checks)

    report = "\n".join(out)
    print(report)

    # ---- write evidence -----------------------------------------------------
    ev_dir = os.path.normpath(os.path.join(os.path.dirname(_HERE), ".omo", "evidence"))
    try:
        os.makedirs(ev_dir, exist_ok=True)
        with open(os.path.join(ev_dir, "task-14-cpp-events.txt"),
                  "w", encoding="utf-8") as f:
            f.write(report + "\n")
    except OSError:
        pass

    return 0 if all(ok for _n, ok in checks) else 1


def _emit(out, checks):
    out.append("")
    out.append("=" * 78)
    out.append("CHECKS")
    out.append("=" * 78)
    all_pass = True
    for name, ok in checks:
        out.append("  [{}] {}".format("PASS" if ok else "FAIL", name))
        all_pass = all_pass and ok
    out.append("")
    out.append("RESULT: {} ({} checks)".format(
        "ALL PASS" if all_pass else "FAILURE", len(checks)))


def _main(argv):
    if not argv or argv[0] in ("--selftest", "-t"):
        return _selftest()
    # Dump canonical events for a C++ function file (raw .cpp / function text).
    import json
    path = argv[0]
    class_name = argv[1] if len(argv) > 1 else ""
    with open(path, "r", encoding="utf-8") as f:
        raw = f.read()
    try:
        data = json.loads(raw)
        text = data.get("code") or data.get("source") or ""
    except json.JSONDecodeError:
        text = raw
    cfg = build_events_cfg(text, class_name)
    print("CFG entry={} blocks={}".format(cfg.entry_id, len(cfg)))
    for b in cfg:
        print("  block {} -> {} : {}".format(b.id, b.successors, b.ordered_events))
    return 0


if __name__ == "__main__":
    sys.exit(_main(sys.argv[1:]))
