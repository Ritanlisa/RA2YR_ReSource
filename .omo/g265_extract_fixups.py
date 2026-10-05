#!/usr/bin/env python3
"""g265 v4 - Backport direct edits on gap2 generator OUTPUTS into
tools/gap2_post_fixups.json, consumed by tools/gen_gap2_defs.py after each
write so `--apply` regen reproduces the current files byte-identically
(script supremacy).

Architecture v4 (duplicated-function-safe):
  per file = {"pairs": [[old, new], ...], "ops": [literal ops]}
  - PAIRS: globally-consistent token-level substitutions extracted from the
    diff (aligned line pairs, common prefix/suffix stripped). Applied as
    whole-text replaces => no positional ambiguity across duplicated bodies.
  - OPS: residual structural edits (insertions/deletions/moves) as literal
    context-prefixed sub / idempotent ins ops.
Verification:
  REPROD: head + pairs + ops == current   (the regen semantics)
  FWD:    current + pairs + ops == current (idempotent)

Scope NOW: C-domain outputs; B-domain gap2 files backported at end-game.
"""
import json
import subprocess
import sys
from pathlib import Path

ROOT = Path(r"D:\RA2YR_ReSource")
FILES = [
    "src/_gap2/gap2_global_defs.cpp",
    "src/core/gap2_defs.cpp",
    "src/core/gap2_defs_2.cpp",
    "src/misc/gap2_defs.cpp",
    "src/system/gap2_defs.cpp",
    "src/ui/gap2_defs.cpp",
    # B-domain (backported after Agent B landed):
    "src/structure/gap2_defs.cpp",
    "src/entity/gap2_defs.cpp",
    "src/house/gap2_defs.cpp",
    "src/object/gap2_defs.cpp",
]
OUT = ROOT / "tools" / "gap2_post_fixups.json"
MAX_CTX = 5


def git(args):
    return subprocess.run(["git", "-C", str(ROOT)] + args, capture_output=True,
                          text=True, encoding="utf-8", errors="surrogateescape",
                          check=True).stdout


def parse_body(diff_text):
    """-U5 diff for ONE file -> ordered raw changes [(minus, plus, pre_ctx)]."""
    changes = []
    lines = diff_text.splitlines()
    i = 0
    while i < len(lines):
        if not lines[i].startswith("@@"):
            i += 1
            continue
        i += 1
        body = []
        while i < len(lines) and not lines[i].startswith("@@"):
            l = lines[i]
            if l.startswith(("---", "+++")):
                i += 1
                continue
            if l.startswith("-"):
                body.append(("-", l[1:]))
            elif l.startswith("+"):
                body.append(("+", l[1:]))
            else:
                body.append((" ", l[1:] if l.startswith(" ") else l))
            i += 1
        j = 0
        ctx_hist = []
        while j < len(body):
            if body[j][0] == " ":
                ctx_hist.append(body[j][1])
                ctx_hist = ctx_hist[-MAX_CTX:]
                j += 1
                continue
            kind = body[j][0]
            run = []
            while j < len(body) and body[j][0] == kind:
                run.append(body[j][1])
                j += 1
            if kind == "-":
                plus = []
                if j < len(body) and body[j][0] == "+":
                    while j < len(body) and body[j][0] == "+":
                        plus.append(body[j][1])
                        j += 1
                changes.append((run, plus, list(ctx_hist)))
            else:
                changes.append(([], run, list(ctx_hist)))
    return changes


def line_midpair(a, b):
    """Common prefix/suffix strip -> (mid_a, mid_a_ok). Returns None when the
    change is not a single contiguous span."""
    if a == b:
        return None
    p = 0
    while p < len(a) and p < len(b) and a[p] == b[p]:
        p += 1
    s = 0
    while (s < len(a) - p and s < len(b) - p
           and a[len(a) - 1 - s] == b[len(b) - 1 - s]):
        s += 1
    return a[p:len(a) - s], b[p:len(b) - s]


def build_pairs(changes, head, cur):
    """Extract globally-consistent token pairs from aligned line pairs.
    Admission test: the old span must be ABSENT from cur (all its sites were
    rewritten) — otherwise the change was positional, not a token rewrite,
    and belongs to residual ops."""
    cand = {}
    for minus, plus, _ in changes:
        if len(minus) != len(plus) or not minus:
            continue
        for a, b in zip(minus, plus):
            mp = line_midpair(a, b)
            if mp is None:
                continue
            old, new = mp
            if not old or not new:
                continue
            cand.setdefault(old, set()).add(new)
    pairs = []
    ambiguous = []
    rejected = 0
    for old, news in cand.items():
        if len(news) != 1:
            ambiguous.append((old, sorted(news)))
            continue
        new = next(iter(news))
        if len(old) < 2:
            rejected += 1
            continue
        if old in cur:
            # still occurs un-rewritten -> positional change, not global
            rejected += 1
            continue
        pairs.append([old, new])
    return pairs, ambiguous, rejected


def apply_pairs(text, pairs):
    for old, new in pairs:
        text = text.replace(old, new)
    return text


def find_block_from(text, block, start=0):
    if not block:
        return None
    first = block[0]
    for j in range(start, len(text) - len(block) + 1):
        if text[j] == first and text[j:j + len(block)] == block:
            return j
    return None


def find_block_last(text, block):
    k, start = None, 0
    while True:
        j = find_block_from(text, block, start)
        if j is None:
            return k
        k, start = j, j + 1


def build_ops(base_lines, cur_lines):
    """Residual literal ops taking pair-applied base -> cur.
    Every op is a symmetric positional sub, context-extended so both forms
    are non-degenerate:
      - replace opcode: find=base block, replace=cur block (as-is)
      - delete opcode:  find=[prev]+del, replace=[prev]
      - insert opcode:  find=ctx2, replace=ctx2+new
    Anchors are exact base-coords; application is bottom-up (larger `at`
    first) so earlier-line mutations never shift later anchors."""
    import difflib
    ops = []
    sm = difflib.SequenceMatcher(None, base_lines, cur_lines, autojunk=False)
    for tag, i1, i2, j1, j2 in sm.get_opcodes():
        if tag == "equal":
            continue
        if tag == "delete":
            # extend with the FOLLOWING base line: deleting one of identical
            # siblings (e.g. one '}') then becomes the discriminating
            # [del, next] -> [next] form (['}','}'] -> ['}']).
            if i2 < len(base_lines):
                ops.append({"op": "sub", "at": i1,
                            "find": base_lines[i1:i2 + 1],
                            "replace": [base_lines[i2]]})
            else:  # EOF deletion: preceding form
                ctx = base_lines[max(0, i1 - 1):i1]
                ops.append({"op": "sub", "at": max(0, i1 - 1),
                            "find": ctx + base_lines[i1:i2],
                            "replace": ctx})
        elif tag == "insert":
            ctx = base_lines[max(0, i1 - 2):i1]
            ops.append({"op": "sub", "at": max(0, i1 - 2),
                        "find": ctx,
                        "replace": ctx + cur_lines[j1:j2]})
        else:
            ops.append({"op": "sub", "at": i1,
                        "find": base_lines[i1:i2],
                        "replace": cur_lines[j1:j2]})
    return ops


def apply_ops(text_lines, ops):
    out = list(text_lines)
    for op in sorted(ops, key=lambda o: o["at"], reverse=True):
        at, find, new = op["at"], op["find"], op["replace"]
        # longer form first: insert-form -> already-applied detect;
        # delete-form -> old-form detect. Guards against prefix traps.
        if len(find) >= len(new):
            first, second = find, new
            first_is_find = True
        else:
            first, second = new, find
            first_is_find = False
        if out[at:at + len(first)] == first:
            if not first_is_find:
                continue  # already applied
            out[at:at + len(find)] = new
        elif new and out[at:at + len(second)] == second:
            if second is find:
                out[at:at + len(find)] = new
            # else: half-state; conservative skip
    return out
    return out


def pipeline(head_text, spec):
    t = apply_pairs(head_text, spec["pairs"])
    return "\n".join(apply_ops(t.split("\n"), spec["ops"]))


def build():
    table = {}
    for f in FILES:
        d = git(["diff", "-U5", "--", f])
        if not d.strip():
            continue
        head = git(["show", "HEAD:" + f])
        cur = (ROOT / f).read_text(encoding="utf-8",
                                   errors="surrogateescape")
        changes = parse_body(d)
        pairs, ambiguous, rejected = build_pairs(changes, head, cur)
        paired = apply_pairs(head, pairs)
        ops = build_ops(paired.split("\n"), cur.split("\n"))
        table[f] = {"pairs": pairs, "ops": ops}
        n_pair_sites = sum(head.count(o) for o, _ in pairs)
        print(f"  {f}: pairs={len(pairs)} (sites~{n_pair_sites}) "
              f"residual_ops={len(ops)} ambiguous={len(ambiguous)} "
              f"positional_rejected={rejected}")
        for old, news in ambiguous[:5]:
            print(f"    ambiguous: {old!r} -> {len(news)} variants")
    OUT.write_text(json.dumps(table, indent=1, ensure_ascii=False),
                   encoding="utf-8")
    print("wrote", OUT, "files:", len(table))
    return True


def verify():
    table = json.loads(OUT.read_text(encoding="utf-8"))
    ok = True
    for f, spec in table.items():
        head = git(["show", "HEAD:" + f])
        cur = (ROOT / f).read_text(encoding="utf-8",
                                   errors="surrogateescape")
        reprod = pipeline(head, spec)
        fwd = pipeline(cur, spec)
        if reprod != cur:
            ok = False
            print(f"  REPROD-FAIL {f}")
            a, b = reprod.split("\n"), cur.split("\n")
            n = min(len(a), len(b))
            d0 = next((x for x in range(n) if a[x] != b[x]), n)
            print(f"    diverges line {d0+1} ({len(a)} vs {len(b)})")
            for x in range(max(0, d0 - 1), min(n, d0 + 2)):
                print(f"      got={a[x]!r}")
                print(f"      exp={b[x]!r}")
        elif fwd != cur:
            ok = False
            print(f"  FWD-FAIL {f}")
            a, b = fwd.split("\n"), cur.split("\n")
            n = min(len(a), len(b))
            d0 = next((x for x in range(n) if a[x] != b[x]), n)
            print(f"    diverges line {d0+1} ({len(a)} vs {len(b)})")
            for x in range(max(0, d0 - 1), min(n, d0 + 2)):
                print(f"      got={a[x]!r}")
                print(f"      exp={b[x]!r}")
        else:
            print(f"  OK {f} (pairs={len(spec['pairs'])} "
                  f"ops={len(spec['ops'])})")
    return ok


if __name__ == "__main__":
    if "--verify" in sys.argv:
        sys.exit(0 if verify() else 1)
    build()
    sys.exit(0 if verify() else 1)
