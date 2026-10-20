#!/usr/bin/env python3
"""check_qmark_members.py - reject IDA's unnamed-member token in src/.

IDA renders an unnamed struct member as `.?` / `->?`.  The text carries NO
offset (three consecutive `this->?` can be three different members), so the
token is not valid C++ and must be resolved from the binary instruction
displacement, never copied into the tree.

Exit 0 when clean.  Exit 1 and print one `FAIL: file:line: ...` per site
otherwise.  `--json PATH` writes the machine-readable site list.
`--bank PATH` accepts a JSON list of `{"file","line"}` banked sites; those
are reported as INFO, not failures (banked = no member/placeholder exists
without inventing a declaration).
"""
import argparse
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
PAT = re.compile(r"(?:->|\.)\?")
SUFFIXES = (".cpp", ".hpp", ".h", ".inl")


def scan():
    sites = []
    for p in (ROOT / "src").rglob("*"):
        if p.suffix not in SUFFIXES:
            continue
        try:
            lines = p.read_text(encoding="utf-8", errors="replace").split("\n")
        except OSError:
            continue
        in_block = False
        for i, line in enumerate(lines, 1):
            s = line.strip()
            if in_block:
                if "*/" in s:
                    in_block = False
                    s = s.split("*/", 1)[1]
                else:
                    continue
            if s.startswith("//"):
                continue
            if "/*" in s and "*/" not in s:
                in_block = True
            code = re.sub(r"/\*.*?\*/", "", s)
            code = code.split("//", 1)[0]
            if not PAT.search(code):
                continue
            anchors = re.findall(r"/\*0[xX]([0-9A-Fa-f]+)\*/", line)
            sites.append({
                "file": str(p.relative_to(ROOT)).replace("\\", "/"),
                "line": i,
                "anchor": anchors[0] if anchors else None,
                "text": s[:200],
            })
    return sites


def main():
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    ap.add_argument("--json", dest="json_out", default=None)
    ap.add_argument("--bank", dest="bank", default=None)
    args = ap.parse_args()
    sites = scan()
    banked = set()
    if args.bank:
        try:
            for b in json.loads(Path(args.bank).read_text(encoding="utf-8")):
                banked.add((b["file"], int(b["line"])))
        except (OSError, ValueError, KeyError) as ex:
            print("FAIL: cannot read bank file %s: %s" % (args.bank, ex), file=sys.stderr)
            return 2
    residual = [s for s in sites if (s["file"], s["line"]) not in banked]
    if args.json_out:
        Path(args.json_out).write_text(
            json.dumps({"schema": "qmark-members/v1", "sites": sites,
                        "residual": residual}, ensure_ascii=False, indent=1),
            encoding="utf-8")
    for s in sites:
        tag = "INFO" if (s["file"], s["line"]) in banked else "FAIL"
        print("%s: %s:%d: unnamed IDA member (anchor=%s): %s"
              % (tag, s["file"], s["line"], s["anchor"], s["text"]))
    if residual:
        print("qmark-members: %d residual site(s), %d banked, %d total"
              % (len(residual), len(sites) - len(residual), len(sites)),
              file=sys.stderr)
        return 1
    print("qmark-members: clean (%d banked)" % len(sites), file=sys.stderr)
    return 0


if __name__ == "__main__":
    sys.exit(main())
