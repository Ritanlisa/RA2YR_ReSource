#!/usr/bin/env python3
"""
efv_cpp_resolve.py -- Resolve a C++ identifier to a byte offset / address.

Task T11 of the execution-flow-cfg pipeline. T14 (C++ event emission) walks each
CFG block's RAW C++ fragments and, for every bare identifier that names a data
location, must turn it into a canonical execution-flow event whose operand is a
byte OFFSET (this-relative member) or an ADDRESS (global) -- NEVER a name
(decisions.md D2 / learnings.md T5 grammar: comparison is by offset/address).
This module is the single place that performs that name -> numeric resolution.

------------------------------------------------------------------------------
RESOLUTION ORDER (scope shadowing is the whole point)
------------------------------------------------------------------------------
For an identifier `ident` seen inside a method of class `class_name`, with the
set of locals visible at that scope being `locals_set`:

  1. LOCAL  -- if `ident in locals_set` -> ("local", None).
               A local variable SHADOWS a same-named member, and a local read is
               NOT an observable side effect on `this` / globals, so it produces
               NO member/global event. This precedence is mandatory: a method
               body that declares `int power = Type->PowerOutput;` and later uses
               `power` must NOT emit a member event for `power`.
  2. MEMBER -- else, via Signals.member_offset(class_name, ident) (T4 API, which
               already does inheritance fallback up the parent chain) -> if found
               -> ("member", offset)  (offset is the DECIMAL byte offset int).
  3. GLOBAL -- else, via Signals.lookup(ident); if it is a `kind=="global"`
               symbol -> ("global", addr)  (addr is the global's memory ADDRESS
               as an int -- parsed from the symbol's "address" field).
  4. else   -- (None, None). Unknown identifier (a callee function name, a macro,
               a type, a parameter that is neither member nor global, ...). T14
               treats this as "not a data location" and emits no member/global
               event for it. (Function calls are handled by T14's call extractor,
               not here.)

Both numeric results are returned as PLAIN INTS so T14 can hand them straight to
the `efv_model` builders: `read_member(offset)/write_member(offset)` (decimal
operand) and `read_global(addr)/write_global(addr)` (uppercase-hex operand).

------------------------------------------------------------------------------
WHY THIS REUSES T4's API (does NOT re-read signals.json)
------------------------------------------------------------------------------
T4 (`load_signals.Signals`) is the canonical query layer over signals.json
(built by T1/T2: class layouts + `_member_by_name` + globals). This module MUST
NOT parse signals.json itself; it duck-types a Signals-like object exposing
`member_offset(cls, name) -> int|None` and `lookup(name) -> dict|None`. By
default it constructs a real `load_signals.Signals` (repo-root signals.json), but
T14 SHOULD inject its OWN already-loaded `Signals` instance (so signals.json is
read once for the whole run):

    from efv_cpp_resolve import Resolver
    r = Resolver("BuildingClass", locals_at_block, signals=my_signals)
    r.resolve("Type")          # -> ("member", 1312)
    r.resolve("HasPower")      # -> ("member", 1632)
    r.resolve("power")         # -> ("local",  None)   (when "power" in locals)
    r.resolve("g_SomeGlobal")  # -> ("global", 0x812345)
    r.resolve("notAThing")     # -> (None,     None)

`locals_set` is the per-scope locals T14 derives from the `"decl <name>"` markers
T12 leaves in each block's `ordered_events` (the union along every entry->block
path -- see learnings.md T12). This module does NOT compute scope itself; it is
handed the resolved set and only tests membership. (The scope-tracking shape --
locals as a name set -- mirrors `check_translated_functions._parse_declarations`,
which tracks `{name: is_func_level}`; here only the names matter.)

Dependencies: stdlib + `load_signals` ONLY (per task constraints).
"""

import os
import sys

_HERE = os.path.dirname(os.path.abspath(__file__))
if _HERE not in sys.path:
    sys.path.insert(0, _HERE)

# T4 query layer (the ONLY non-stdlib dependency). Importing it has no
# import-time side effects (it only loads signals.json when Signals() is
# constructed), so a caller that injects its own Signals never touches disk here.
from load_signals import Signals

__all__ = ["Resolver"]

# Repo-root signals.json (this file lives in <repo>/tools/). Used only when no
# Signals instance / path is injected.
_DEFAULT_SIGNALS_PATH = os.path.join(os.path.dirname(_HERE), "signals.json")


def _coerce_addr(addr):
    """Coerce a global's stored address to an int (or None if unusable).

    signals.json stores global addresses as hex strings (e.g. "0x812345", from
    the `data:` annotations build_signals.py scrapes out of globals_*.hpp). Accept
    a str ("0x..." hex, or plain decimal) or an int; anything else -> None.
    """
    if addr is None:
        return None
    if isinstance(addr, int):
        return addr
    s = str(addr).strip()
    if not s:
        return None
    try:
        if s[:2].lower() == "0x":
            return int(s, 16)
        return int(s, 10)
    except ValueError:
        # last resort: let Python auto-detect a 0o/0b/0x-prefixed literal
        try:
            return int(s, 0)
        except ValueError:
            return None


class Resolver:
    """Resolve a bare C++ identifier (in a method body) to ("member", offset) /
    ("global", addr) / ("local", None) / (None, None), in that scope order.

    Construct ONE Resolver per (class, scope) -- `class_name` fixes the member
    namespace and `locals_set` fixes the visible locals; both are immutable for
    the lifetime of the instance. `resolve()` is a pure lookup (no state change),
    so a Resolver is safe to query repeatedly / reuse across a block's idents.
    """

    __slots__ = ("class_name", "locals", "_sig")

    def __init__(self, class_name, locals_set, signals=None, signals_path=None):
        """
        class_name   : enclosing class for member resolution (e.g. "BuildingClass").
                       None / "" for a free (non-member) function -> member step skipped.
        locals_set   : iterable of local-variable names visible in this scope
                       (T14 computes it from T12 `decl` markers). None -> empty.
        signals      : an OPTIONAL Signals-like object (duck-typed: must provide
                       `member_offset(cls, name)` and `lookup(name)`). T14 should
                       inject its own so signals.json is read once. If None, a
                       real `load_signals.Signals` is constructed.
        signals_path : optional path for the default Signals (ignored if `signals`
                       is given). Defaults to <repo>/signals.json.
        """
        self.class_name = class_name or None
        self.locals = set(locals_set) if locals_set else set()
        if signals is not None:
            self._sig = signals
        else:
            self._sig = Signals(signals_path or _DEFAULT_SIGNALS_PATH)

    # ------------------------------------------------------------------
    # The one public operation.
    # ------------------------------------------------------------------

    def resolve(self, ident):
        """Resolve `ident` by scope: local -> member -> global -> unknown.

        Returns a 2-tuple:
          ("member", int_offset)  this-relative member byte offset (decimal int)
          ("global", int_addr)    global memory address (int)
          ("local",  None)        a local variable (shadows members; NOT an event)
          (None,     None)        not a resolvable data location

        Never raises for normal inputs (empty / None ident -> (None, None)).
        """
        if not ident:
            return (None, None)

        # 1. LOCAL shadow takes precedence over any same-named member/global.
        if ident in self.locals:
            return ("local", None)

        # 2. CLASS MEMBER (with inheritance fallback, handled inside T4's API).
        if self.class_name is not None:
            off = self._sig.member_offset(self.class_name, ident)
            if off is not None:
                return ("member", int(off))

        # 3. GLOBAL (only genuine kind=="global" symbols; a function/member name
        #    that happens to index in signals is NOT a global data location).
        entry = self._sig.lookup(ident)
        if entry is not None and entry.get("kind") == "global":
            iaddr = _coerce_addr(entry.get("address"))
            if iaddr is not None:
                return ("global", iaddr)

        # 4. Unknown -> not a data location (callee name / type / macro / ...).
        return (None, None)

    def __repr__(self):
        return "<Resolver class={!r} locals={}>".format(
            self.class_name, len(self.locals))


# ============================================================
# Self-test / evidence generator
# ============================================================

class _FakeSignals:
    """Minimal duck-typed Signals for deterministic branch tests (global path,
    precedence) that do NOT depend on signals.json contents."""

    def __init__(self, members=None, globals_=None):
        # members : {class: {name: offset}}   globals_ : {name: address}
        self._members = members or {}
        self._globals = globals_ or {}

    def member_offset(self, cls, name):
        return self._members.get(cls, {}).get(name)

    def lookup(self, name):
        if name in self._globals:
            return {"kind": "global", "address": self._globals[name]}
        return None


def _selftest():
    out = []

    def line(s=""):
        out.append(s)

    checks = []

    def check(name, got, expected):
        ok = (got == expected)
        checks.append((name, ok))
        line("  [{}] {:<46} got={!r:<22} expected={!r}".format(
            "PASS" if ok else "FAIL", name, got, expected))
        return ok

    line("=" * 78)
    line("T11 efv_cpp_resolve -- identifier -> (member offset | global addr | local)")
    line("=" * 78)

    # ---- REQUIRED 4 CASES : real signals.json, BuildingClass context ----------
    line("")
    line("Real signals.json @ {}".format(_DEFAULT_SIGNALS_PATH))
    line("BuildingClass context, locals_set = {'power'}:")
    real_ok = True
    try:
        r = Resolver("BuildingClass", {"power"})
    except Exception as exc:  # signals.json missing / unreadable
        real_ok = False
        line("  !! could not construct real Resolver: {!r}".format(exc))
        r = None

    if r is not None:
        check("BuildingClass::Type     -> member 1312", r.resolve("Type"),
              ("member", 1312))
        check("BuildingClass::HasPower -> member 1632", r.resolve("HasPower"),
              ("member", 1632))
        check("BuildingClass::IsOverpowered -> member 1633",
              r.resolve("IsOverpowered"), ("member", 1633))
        check("local 'power' -> ('local', None)", r.resolve("power"),
              ("local", None))
    else:
        # Record explicit failures so a missing signals.json is never a silent pass.
        check("BuildingClass::Type     -> member 1312", None, ("member", 1312))
        check("BuildingClass::HasPower -> member 1632", None, ("member", 1632))
        check("BuildingClass::IsOverpowered -> member 1633", None, ("member", 1633))
        check("local 'power' -> ('local', None)", None, ("local", None))

    # ---- PRECEDENCE: a local that SHADOWS a real member resolves as local -----
    line("")
    line("Shadowing precedence (real signals): 'Type' declared as a local:")
    if r is not None:
        r_shadow = Resolver("BuildingClass", {"Type"})
        check("local 'Type' shadows member -> ('local', None)",
              r_shadow.resolve("Type"), ("local", None))
    else:
        check("local 'Type' shadows member -> ('local', None)", None,
              ("local", None))

    # ---- GLOBAL path + edge cases : FAKE signals (deterministic) --------------
    line("")
    line("Fake signals (deterministic global / precedence / unknown checks):")
    fake = _FakeSignals(
        members={"BuildingClass": {"Type": 1312, "HasPower": 1632}},
        globals_={"g_Scenario": "0x812345", "g_DecimalAddr": "8462661"},
    )
    fr = Resolver("BuildingClass", {"power", "i"}, signals=fake)
    check("global 'g_Scenario' -> ('global', 0x812345)",
          fr.resolve("g_Scenario"), ("global", 0x812345))
    check("global decimal address parses", fr.resolve("g_DecimalAddr"),
          ("global", 8462661))
    check("member via fake -> ('member', 1632)", fr.resolve("HasPower"),
          ("member", 1632))
    check("local via fake -> ('local', None)", fr.resolve("power"),
          ("local", None))
    check("unknown ident -> (None, None)", fr.resolve("totallyUnknownXyz"),
          (None, None))
    check("empty ident -> (None, None)", fr.resolve(""), (None, None))
    check("None ident -> (None, None)", fr.resolve(None), (None, None))

    # local shadow beats global+member even when all three could match
    fake2 = _FakeSignals(members={"C": {"x": 8}}, globals_={"x": "0x900000"})
    fr2 = Resolver("C", {"x"}, signals=fake2)
    check("local shadows BOTH member and global", fr2.resolve("x"),
          ("local", None))

    # free function (class_name=None): member step skipped, global still works
    ffree = Resolver(None, set(), signals=fake)
    check("free-fn: member skipped, 'Type' not a global -> (None,None)",
          ffree.resolve("Type"), (None, None))
    check("free-fn: global still resolves", ffree.resolve("g_Scenario"),
          ("global", 0x812345))

    # member miss falls through to global; member-and-global both miss -> None
    check("member miss + not global -> (None,None)", fr.resolve("NoSuchMember"),
          (None, None))

    # ---- summary --------------------------------------------------------------
    line("")
    line("=" * 78)
    line("CHECKS")
    line("=" * 78)
    all_pass = True
    for name, ok in checks:
        all_pass = all_pass and ok
    line("RESULT: {} ({} checks)".format(
        "ALL PASS" if all_pass else "FAILURE", len(checks)))

    report = "\n".join(out)
    print(report)

    # Write evidence (the 4 required cases + the extra branch coverage).
    try:
        ev_dir = os.path.join(os.path.dirname(_HERE), ".omo", "evidence")
        os.makedirs(ev_dir, exist_ok=True)
        with open(os.path.join(ev_dir, "task-11-resolve.txt"),
                  "w", encoding="utf-8") as f:
            f.write(report + "\n")
    except OSError:
        pass

    return 0 if all_pass else 1


if __name__ == "__main__":
    sys.exit(_selftest())
