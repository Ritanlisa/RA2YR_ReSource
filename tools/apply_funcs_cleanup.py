#!/usr/bin/env python3
r"""apply_funcs_cleanup.py — Clean active residual declarations in the 6 dirty
src/<mod>/_funcs.hpp files, using decisions from .omo/funcs_residual_analysis.json.

Per-line action:
  DELETE_SAFE_no_competitor        -> COMMENT (sole hpp annotation = no_class doc)
  DELETE_SAFE_class_correct        -> DELETE  (a class body already annotates the addr)
  DELETE_SAFE_class_matches_funcs  -> DELETE  (redundant duplicate)
  CONFLICT @0X0046C4F0 (BulletTypeClass::GetROF) -> COMMENT
        (techno.hpp's wrong addr removed separately; this is now the sole correct
         annotation, kept as no_class documentation -> preserves coverage)
  CONFLICT @0X0041CBF0 (ObjectTypeClass::vt_entry_7C) -> DELETE
        (object_type.hpp:49 now annotates the addr canonically -> redundant)

COMMENT inserts `// ` after the leading whitespace (idempotent). DELETE drops the line.
Originals are backed up to .omo/funcs_cleanup_backup/.

Usage:
  python tools/apply_funcs_cleanup.py            # dry-run report
  python tools/apply_funcs_cleanup.py --apply
"""
import json, sys, shutil
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
SRC = ROOT / "src"
ANALYSIS = ROOT / ".omo" / "funcs_residual_analysis.json"
BACKUP = ROOT / ".omo" / "funcs_cleanup_backup"
MODULES = ["core", "entity", "misc", "object", "render", "structure", "system"]

CONFLICT_COMMENT_ADDRS = {"0X0046C4F0"}   # BulletTypeClass::GetROF (sole correct annotation)
CONFLICT_DELETE_ADDRS = {"0X0041CBF0"}    # ObjectTypeClass::vt_entry_7C (class body now annotates)


def decide(rec):
    d = rec["decision"]
    if d == "DELETE_SAFE_no_competitor":
        return "COMMENT"
    if d in ("DELETE_SAFE_class_correct", "DELETE_SAFE_class_matches_funcs"):
        return "DELETE"
    if d == "CONFLICT":
        a = rec["addr"]
        if a in CONFLICT_COMMENT_ADDRS:
            return "COMMENT"
        if a in CONFLICT_DELETE_ADDRS:
            return "DELETE"
        raise SystemExit(f"Unhandled CONFLICT at {a}: {rec['raw']}")
    raise SystemExit(f"Unknown decision {d!r}: {rec['raw']}")


def comment_line(line):
    """Insert '// ' after leading whitespace; idempotent."""
    stripped = line.lstrip()
    if stripped.startswith("//"):
        return line  # already a comment
    indent = line[:len(line) - len(stripped)]
    return f"{indent}// {stripped}"


def main():
    apply = "--apply" in sys.argv
    analysis = json.load(open(ANALYSIS, encoding="utf-8"))
    BACKUP.mkdir(parents=True, exist_ok=True)

    grand = {"COMMENT": 0, "DELETE": 0}
    for mod in MODULES:
        recs = analysis.get(mod, [])
        if not recs:
            print(f"{mod}: (no active residuals)")
            continue
        actions = {}  # lineno(1-based) -> ('COMMENT'|'DELETE', addr, raw)
        for r in recs:
            actions[r["lineno"]] = (decide(r), r["addr"], r["raw"])

        path = SRC / mod / "_funcs.hpp"
        orig = path.read_text(encoding="utf-8", errors="replace").splitlines(keepends=False)

        out = []
        ncomment = ndelete = 0
        for i, line in enumerate(orig, start=1):
            act = actions.get(i)
            if act is None:
                out.append(line)
                continue
            kind, addr, raw = act
            # Safety: the targeted line must still be the parsed active decl
            if line.strip() != raw:
                raise SystemExit(
                    f"{mod}:{i} line drift!\n  expected: {raw!r}\n  found:    {line.strip()!r}")
            if kind == "COMMENT":
                out.append(comment_line(line))
                ncomment += 1
            elif kind == "DELETE":
                ndelete += 1
                # drop the line (do not append)
        grand["COMMENT"] += ncomment
        grand["DELETE"] += ndelete
        print(f"{mod}: COMMENT {ncomment}, DELETE {ndelete}  (active residuals were {len(recs)})")

        if apply:
            shutil.copy2(path, BACKUP / f"{mod}_funcs.hpp")
            path.write_text("\n".join(out) + "\n", encoding="utf-8")

    print(f"\nTOTAL: COMMENT {grand['COMMENT']}, DELETE {grand['DELETE']}")
    if not apply:
        print("(dry-run; pass --apply to write)")


if __name__ == "__main__":
    main()
