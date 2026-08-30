"""SSA-based variable scoping for type inference.

Replaces name-pattern-based variable scoping in both engine.py and ac3_domains.py
with SSA-based register scoping (write-driven live ranges). Each register write
creates a new SSA version, eliminating false TOP/conflict from cross-live-range
hub contamination.

Stack-slot reuse detection is deferred — this module covers SSA registers only.

Public API:
    X86_REGISTERS              — frozenset of 24 x86 register names
    is_register(name)          — check if name is an x86 register
    load_function_addresses()  — extract+sort func start addresses from call graph
    find_containing_func()     — binary search for containing function
    build_scoped_index()       — Pass 1+2: build scoped_name mapping from constraints
    build_adjacency()          — Pass 3: build adjacency graph along data-flow edges

Usage:
    from tools.type_infer.scope_vars import build_scoped_index, build_adjacency
    result = build_scoped_index(constraints, call_graph)
    adj = build_adjacency(constraints, result)
"""

from bisect import bisect_right
from collections import defaultdict


# ── X86 register set (must match engine.py _X86_REGISTERS) ──────────────────

X86_REGISTERS = frozenset({
    # 32-bit general purpose
    "eax", "ebx", "ecx", "edx", "esi", "edi", "ebp", "esp",
    # 8-bit (common in MSVC byte/char ops: mov al, [esi]; cmp cl, 0)
    "al", "ah", "bl", "bh", "cl", "ch", "dl", "dh",
    # 16-bit (less common but present: mov ax, word ptr [...])
    "ax", "bx", "cx", "dx", "si", "di", "bp", "sp",
})

# IDA auto-name prefixes for raw-offset globals/hole fills
_IDA_PREFIXES = (
    "dword_", "byte_", "word_", "flt_", "off_", "qword_", "unk_",
)


# ── helpers ────────────────────────────────────────────────────────────────

def is_register(name: str) -> bool:
    """Check if *name* is an x86 register (after stripping IDA '*' prefix).

    Case-insensitive: 'EAX', 'eax', 'Eax' all return True.
    Names like ``dword_815DA8`` or ``stack_+0x4`` return False.
    """
    return name.lstrip("*").lower() in X86_REGISTERS


def load_function_addresses(call_graph: dict) -> list[int]:
    """Extract and sort all unique function start addresses from call graph.

    Collects from both keys (callers) and values→'to' (callees) so we get
    functions that only call or only get called.

    Args:
        call_graph: ``call_graph.json["graph"]`` — ``{caller_hex: [{to, type}]}``

    Returns:
        Sorted list of integer function start addresses (ascending).
    """
    addrs: set[int] = set()
    for key in call_graph:
        try:
            addrs.add(int(key, 16))
        except (ValueError, TypeError):
            pass
        for edge in call_graph[key]:
            try:
                addrs.add(int(edge["to"], 16))
            except (ValueError, TypeError, KeyError):
                pass
    return sorted(addrs)


def find_containing_func(addr: int, func_addrs: list[int]) -> int:
    """Binary search: find function start address that contains *addr*.

    Returns the largest function start address <= *addr*, or 0 if not found.

    Args:
        addr: Instruction address as integer.
        func_addrs: Sorted list of function start addresses (from load_function_addresses).
    """
    if not func_addrs:
        return 0
    idx = bisect_right(func_addrs, addr) - 1
    return func_addrs[idx] if idx >= 0 else 0


# ── internal ───────────────────────────────────────────────────────────────

def _detect_writes(constraints: list[dict], func_addrs: list[int]) -> dict:
    """Pass 1: Detect register and stack writes from constraint edges.

    Each constraint ``{from, to, type, addr}`` is examined to determine if
    ``to`` represents a *write* (new SSA version begins here).

    Register write rules (``to`` is an x86 register):
        ASSIGN       — register ← register/member  (mov ecx, esi)
        FUNC_PARAM   — parameter loaded into register (mov ecx, [esp+4] at entry)
        RETURN_TO    — call return value stored in register (mov eax, call_result)
        STACK_ACCESS — stack load into register (mov ecx, [ebp+8])

    Stack write rules (``to`` starts with ``stack_``):
        FUNC_PARAM   — parameter stored to stack slot
        STACK_VAR    — local stack variable initialization
        STACK_ACCESS — store to stack slot

    Args:
        constraints: List from ``raw_constraints.json["constraints"]``.
        func_addrs: Sorted function address list for containment lookup.

    Returns:
        ``dict[tuple[int, str], list[int]]`` mapping
        ``(func_addr, reg_or_stack_name) → sorted list of write instruction addresses``.
    """
    writes: dict[tuple[int, str], list[int]] = defaultdict(list)

    for c in constraints:
        c_to = c.get("to", "")
        c_type = c.get("type", "")
        c_addr_str = c.get("addr", "")

        if not c_addr_str:
            continue
        try:
            c_addr = int(c_addr_str, 16)
        except (ValueError, TypeError):
            continue

        clean_to = c_to.lstrip("*").lower()

        # Register write detection
        if clean_to in X86_REGISTERS and c_type in (
            "ASSIGN", "FUNC_PARAM", "RETURN_TO", "STACK_ACCESS"
        ):
            func = find_containing_func(c_addr, func_addrs)
            if func:
                writes[(func, clean_to)].append(c_addr)

        # Stack write detection
        elif c_to.startswith("stack_") and c_type in (
            "FUNC_PARAM", "STACK_VAR", "STACK_ACCESS"
        ):
            func = find_containing_func(c_addr, func_addrs)
            if func:
                writes[(func, c_to)].append(c_addr)

    # Sort each write list and deduplicate for bisect lookup
    for key in writes:
        writes[key] = sorted(set(writes[key]))

    return writes


def _scope_edge_vars(
    c_from: str,
    c_to: str,
    c_addr: int,
    func_addrs: list[int],
    writes: dict,
) -> tuple[str, str]:
    """Apply SSA scoping to both sides of a constraint edge.

    For registers: uses bisect_right to find the most recent write at or before
    the instruction address. Returns SSA version ``{func}::{reg}_v{write_addr}``.
    Reads before first write get ``_v0`` (entry block parameter / leftover register).

    For stack slots: scoped to containing function.

    For everything else: returned unchanged (names already carry unique context).

    Args:
        c_from: Raw ``from`` variable name.
        c_to: Raw ``to`` variable name.
        c_addr: Instruction address (integer).
        func_addrs: Sorted function address list.
        writes: Write map from ``_detect_writes``.

    Returns:
        ``(scoped_from, scoped_to)`` — SSA-scoped variable names.
    """
    sf = _scope_one_var(c_from, c_addr, func_addrs, writes)
    st = _scope_one_var(c_to, c_addr, func_addrs, writes)
    return sf, st


def _scope_one_var(
    raw_name: str,
    c_addr: int,
    func_addrs: list[int],
    writes: dict,
) -> str:
    """Scope a single variable name at a given instruction address."""
    clean = raw_name.lstrip("*")
    clean_lower = clean.lower()

    # ── Register: SSA version by most-recent-write ──
    if clean_lower in X86_REGISTERS:
        func = find_containing_func(c_addr, func_addrs)
        if func:
            write_addrs = writes.get((func, clean_lower))
            if write_addrs:
                idx = bisect_right(write_addrs, c_addr) - 1
                if idx >= 0:
                    return f"0x{func:08X}::{clean_lower}_v0x{write_addrs[idx]:X}"
            # Read before first write: entry-block read of uninitialized register.
            # For stdcall/cdecl, eax/edx at entry hold caller's leftover → VOID_PTR.
            return f"0x{func:08X}::{clean_lower}_v0"
        # Fallback: instruction address (shouldn't happen with complete func_addrs)
        return f"0x{c_addr:08X}::{clean_lower}"

    # ── Stack: scoped to containing function ──
    if clean.startswith("stack_"):
        func = find_containing_func(c_addr, func_addrs)
        if func:
            return f"0x{func:08X}::{clean}"
        return f"0x{c_addr:08X}::{clean}"

    # ── Everything else: already unique (member vars, globals, params, etc.) ──
    return raw_name


# ── public API ─────────────────────────────────────────────────────────────

def build_scoped_index(constraints: list[dict], call_graph: dict) -> dict:
    """Pass 1+2: Build SSA scoped-name mapping from constraints.

    Detects all register/stack writes, then assigns SSA versions to every
    variable reference in every constraint. Returns a result dict containing
    multiple lookup tables for different access patterns.

    Constraints format:
        ``{"from": str, "to": str, "type": str, "addr": str}``

    Call graph format:
        ``{"graph": {"0xADDR": [{"to": "0xADDR", "type": "direct"}, ...]}}``

    Args:
        constraints: List from ``raw_constraints.json["constraints"]``.
        call_graph: Dict from ``call_graph.json["graph"]``.

    Returns:
        Dict with keys:

        ``scoped_to_name``
            ``list[tuple[str, str]]`` — ``(scoped_from, scoped_to)`` per constraint.
            Primary access pattern: ``for i, c in enumerate(constraints): sf, st = r["scoped_to_name"][i]``.

        ``name_to_addrs``
            ``dict[str, set[int]]`` — scoped_name → set of instruction addresses
            where it appears. Used by ``build_adjacency``.

        ``scoped_to_original``
            ``dict[str, str]`` — scoped_name → original raw name (for anchor matching).

        ``func_addrs``
            ``list[int]`` — sorted function start addresses (for downstream use).

        ``writes``
            ``dict[tuple[int, str], list[int]]`` — write map
            (for diagnostics / write-count verification).
    """
    # ── Load function addresses ──
    func_addrs = load_function_addresses(call_graph)

    # ── Pass 1: Detect writes ──
    writes = _detect_writes(constraints, func_addrs)

    # ── Pass 2: SSA scoping ──
    scoped_names: list[tuple[str, str]] = []
    name_to_addrs: dict[str, set[int]] = defaultdict(set)
    scoped_to_original: dict[str, str] = {}

    for c in constraints:
        c_addr_str = c.get("addr", "0x0")
        try:
            c_addr = int(c_addr_str, 16)
        except (ValueError, TypeError):
            c_addr = 0

        c_from = c.get("from")
        c_to = c.get("to")
        if c_from is None or c_to is None:
            # TYPE_SEED 等无向条目：占位保持与 constraints 的索引对齐，
            # engine 侧 var_to_id.get(None) → None → skip，不会产生变量
            scoped_names.append((None, None))
            continue
        sf, st = _scope_edge_vars(c_from, c_to, c_addr, func_addrs, writes)
        scoped_names.append((sf, st))
        name_to_addrs[sf].add(c_addr)
        name_to_addrs[st].add(c_addr)
        scoped_to_original[sf] = c_from
        scoped_to_original[st] = c_to

    unique_vars = len(name_to_addrs)
    total_writes = sum(len(v) for v in writes.values())
    reg_writes = sum(
        len(v) for (f, r) in writes if r in X86_REGISTERS
        for v in [writes[(f, r)]]
    )
    print(
        f"  SSA: {unique_vars} vars from {len(constraints)} constraints, "
        f"{len(writes)} (reg,stack) targets, {total_writes} total writes"
        f" ({reg_writes} register + {total_writes - reg_writes} stack)",
        flush=True,
    )

    return {
        "scoped_to_name": scoped_names,
        "name_to_addrs": dict(name_to_addrs),
        "scoped_to_original": scoped_to_original,
        "func_addrs": func_addrs,
        "writes": dict(writes),
    }


def build_adjacency(constraints: list[dict], result: dict) -> dict[str, set[str]]:
    """Pass 3: Build adjacency graph along constraint data-flow edges.

    For each constraint, connects the scoped ``from`` variable to the scoped
    ``to`` variable (bidirectional). CALL edges are handled specially:
    ``from`` connects to ``callee_name.return`` instead of ``to``.

    This produces unweighted undirected adjacency suitable for type propagation.
    Engine-specific logic (CALL return resolution, anchor labeling, lattice meet,
    confidence scoring) stays in the respective engine files.

    Args:
        constraints: Same list as passed to ``build_scoped_index``.
        result: Output of ``build_scoped_index``.

    Returns:
        ``dict[str, set[str]]`` — scoped_name → set of adjacent scoped_names.
    """
    scoped_names = result["scoped_to_name"]
    adj: dict[str, set[str]] = defaultdict(set)

    for i, c in enumerate(constraints):
        sf, st = scoped_names[i]
        if sf is None or st is None:
            continue  # TYPE_SEED 占位条目，无变量边
        if sf.startswith("vtable_slot_") or st.startswith("vtable_slot_"):
            continue  # 共享槽位枢纽防污染（见 engine.py 同名防护）
        ctype = c.get("type", "")

        if ctype == "CALL":
            # CALL: from connects to callee's .return variable (not to)
            callee_name = c.get("callee_name", "")
            if callee_name:
                ret_var = f"{callee_name}.return"
                adj[sf].add(ret_var)
                adj[ret_var].add(sf)
        elif ctype == "CALL_VTABLE":
            # vtable dispatch: no direct variable connection
            pass
        else:
            # ASSIGN, RETURN, STACK_VAR, FUNC_PARAM, CALL_ARG,
            # RETURN_TO, STACK_ACCESS — all bidirectional adjacency
            adj[sf].add(st)
            adj[st].add(sf)

    print(
        f"  adjacency: {len(adj)} vars, "
        f"{sum(len(v) for v in adj.values()) // 2} undirected edges"
    )
    return dict(adj)
