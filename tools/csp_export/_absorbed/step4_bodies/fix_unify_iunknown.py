#!/usr/bin/env python3
"""G42.1 wave-1: IUnknown identity unification.

Research consensus (g131, four independent agent reports):
  - `_fwd_e4.hpp:5` includes <windows.h> FIRST in every e4 TU  -> decl-side
    (header prototypes) parse `IUnknown` as `::IUnknown`.
  - 4 gamemd-internal forward declarations (`class/struct IUnknown;`) shadow
    it -> def-side parses `gamemd::IUnknown`.  ::IUnknown != gamemd::IUnknown
    -> C2511 binding failure -> C2671 cascade (291) + C2027 (101) + C2664 (91).

Surgery (truth-anchored, zero invention):
  1. Replace the e4_protos.h fwd line with `using ::IUnknown;`
     (re-declaration of the same entity via using-decl is legal and makes the
     identity explicit regardless of include order).
  2. Delete the 3 per-class hpp fwd lines (natural namespace fallback then
     resolves to ::IUnknown).

Usage: python fix_unify_iunknown.py [--apply]   (default dry-run)
"""
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]

# (file, expected-line-content-fragment) -- script aborts if the line moved.
SITES = [
    ("src/e4/e4_protos.h", "class IUnknown;", "using ::IUnknown;"),
    ("src/e4/classes/Rules_e4.hpp", "struct IUnknown;", None),
    ("src/e4/classes/Math_e4.hpp", "struct IUnknown;", None),
    ("src/e4/classes/CCINIClass_e4.hpp", "struct IUnknown;", None),
]


def main():
    apply = "--apply" in sys.argv
    edits = []
    for rel, frag, repl in SITES:
        p = ROOT / rel
        with open(p, "r", encoding="utf-8", errors="replace", newline="") as f:
            lines = f.read().splitlines(keepends=True)
        def is_decl_line(ln):
            t = ln.rstrip("\r\n").strip()
            if t.endswith("// fix_fwd_type_supply"):
                t = t[: t.index("//")].strip()
            return t == frag

        hits = [i for i, ln in enumerate(lines) if is_decl_line(ln)]
        if repl is None and len(hits) != 1:
            print(f"ABORT {rel}: expected exactly 1 line {frag!r}, found {len(hits)}")
            return 1
        if repl is not None and len(hits) != 1:
            print(f"ABORT {rel}: expected exactly 1 line {frag!r}, found {len(hits)}")
            return 1
        i = hits[0]
        edits.append((p, lines, i, frag, repl))
        new = repl if repl else "(delete)"
        print(f"{'EDIT' if apply else 'DRY '} {rel}:{i+1}  {frag!r} -> {new!r}")
    if not apply:
        print("\ndry-run only; pass --apply to write")
        return 0
    for p, lines, i, frag, repl in edits:
        if repl:
            lines[i] = lines[i].replace(frag, repl)
        else:
            # trailing annotation like `  // fix_fwd_type_supply` is expected
            # and dropped together with the decl line
            tail = lines[i].rstrip("\r\n")
            if tail.endswith("  // fix_fwd_type_supply"):
                tail = tail[: -len("  // fix_fwd_type_supply")]
            assert tail.strip() == frag, (tail, frag)
            del lines[i]
        p.write_text("".join(lines), encoding="utf-8", errors='replace', newline="")
    print("\napplied. 4 files edited.")
    return 0


if __name__ == "__main__":
    sys.exit(main())
