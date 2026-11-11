#!/usr/bin/env python3
"""r8_add_str_globals.py -- add IDA string-label globals to signals.json.

R8 evidence: `anchors/string_literals.json` (IDA Phase-1 export) carries the
address of every `aXxx` data label; the original function disassembly
(`mov eax, offset aXxx`) confirms the label is a data object reference.
The verdict's data normalizer can only name an original-side data address
when signals.globals contains it, so these labels are missing metadata.

Additive only: an address that already has a name is left untouched.
Idempotent: re-running adds nothing.
"""
import json
import os
import sys

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", "..",
                                    ".."))
SIG = os.path.join(ROOT, "signals.json")
LIT = os.path.join(ROOT, "anchors", "string_literals.json")


def main():
    apply = "--apply" in sys.argv
    sig = json.load(open(SIG, encoding="utf-8"))
    lit = json.load(open(LIT, encoding="utf-8"))
    globs = sig.setdefault("globals", {})
    by_addr = {}
    for n, v in globs.items():
        try:
            by_addr[int(v, 16) if isinstance(v, str) else int(v)] = n
        except (TypeError, ValueError):
            continue
    add = []
    for name, e in lit.items():
        if not name.startswith("a") or len(name) < 4 or not name[1].isupper():
            continue
        if name in globs:
            continue
        try:
            addr = int(e["addr"], 16)
        except (KeyError, TypeError, ValueError):
            continue
        if addr in by_addr:
            continue
        add.append((name, "0x%X" % addr))
    print("string labels to add: %d" % len(add))
    for n, a in add:
        print("  %-20s %s" % (n, a))
    if not apply:
        print("(dry run -- pass --apply to write)")
        return 0
    for n, a in add:
        globs[n] = a
    with open(SIG, "w", encoding="utf-8", newline="\n") as f:
        json.dump(sig, f, indent=2, ensure_ascii=False)
        f.write("\n")
    print("wrote %s (+%d globals)" % (SIG, len(add)))
    return 0


if __name__ == "__main__":
    sys.exit(main())
