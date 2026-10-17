#!/usr/bin/env python3
"""X64 — C2039 long-tail resolution (X62 ranks 31-52 + til-lacks family).

Mechanisms (X62-established + M4):
  M1        ref-spelling: decodable ref -> carrier member at decoded offset
  M2-NORM   vtable0/3/4 slot ref -> carrier slot member
  M4-REF    template-base ref -> carrier member at the template-instantiation
            offset (YRpp VectorClass/DynamicVectorClass layout; evidence in
            x64_p0_report.md).  int-context sites only.
  M4-BYTE   template bool member -> byte-shape forms only (B1/B2/B3/B4) into
            the 4B interior member (byte semantics preserved).
Gates (NO new casts; byte-exact or skip):
  G1 arithmetic operand: `*&NAME` directly preceded by + - * / -> skip
  G2 vt-install assign: RHS `&vt_X` requires array/pointer target -> skip
  G3 char*-context address-of on non-pointer scalar target -> skip
Line discipline (X62): every occurrence on the line must be rewritable or
the whole line is skipped (two-phase plan/apply; no partial rewrites).
Retypes (1-line hpp, name/type only, offset comment kept, struct-pinned):
  misc_ext.hpp  InfantryTypeVector_field_0x04[4] -> void*
                InfantryTypeVector_field_0x08[4] -> int
                InfantryTypeVector_field_0x0C[4] -> int
  SpawnManagerClass_25_e4.hpp  q004 int -> void*

Usage:
  python tools/csp_export/gen_x64_c2039_tail.py           # dry run
  python tools/csp_export/gen_x64_c2039_tail.py --apply
"""
import argparse, json, re, sys, collections
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
EV64 = ROOT / ".omo" / "evidence" / "optimization" / "x64"
TABLE = EV64 / "x64_p0_table.json"
LEDGER = EV64 / "x64_tail_ledger.json"

ap = argparse.ArgumentParser()
ap.add_argument("--apply", action="store_true")
ARGS = ap.parse_args()

TBL = json.loads(TABLE.read_text(encoding="utf-8"))

C2039_ROWS = [r for r in TBL["rows"] if r["verdict"] in
              ("M1", "M2-NORM", "M4-REF", "M4-BYTE")]

FREEZE_BANK = {
    # 0-7 region misparsed (no member start at 0x4): restructure deferred
    ("DynamicVector", "Items"),
    ("FilePipe_38", "Items"),
}
# twin-universe target overrides: (cls, name) -> (dir-marker, carrier_name, ty)
# misc_ext.cpp sees the misc_ext.hpp class twin, whose member spellings differ
# from the e4 hpp twin the classifier resolved against.
TWIN_TARGETS = {
    ("InfantryTypeVector", "Items"): ("misc", "InfantryTypeVector_field_0x04", "void *"),
    ("InfantryTypeVector", "Capacity"): ("misc", "InfantryTypeVector_field_0x08", "int"),
}
CUT = [r for r in C2039_ROWS if (r["cls"], r["name"]) not in FREEZE_BANK]
frozen = sum(r["count"] for r in C2039_ROWS) - sum(r["count"] for r in CUT)
print(f"rows in scope: {len(CUT)} ({frozen} lines frozen to BANK)")

CAST_TAIL = re.compile(r"\(\s*(?:const\s+)?[\w ]+\*+\s*\)\s*$")
VT_RHS = re.compile(r"^\s*=\s*&vt_\w+")
CHARPTR = re.compile(r"char\s*\*\s*[A-Za-z_]\w*|\(\s*char\s*\*\s*\)")

# ---------------------------------------------------------------- retypes
RETYPES = [
    (ROOT / "src/misc/misc_ext.hpp",
     "uint8_t InfantryTypeVector_field_0x04[4];",
     "void *InfantryTypeVector_field_0x04;"),
    (ROOT / "src/misc/misc_ext.hpp",
     "uint8_t InfantryTypeVector_field_0x08[4];",
     "int InfantryTypeVector_field_0x08;"),
    (ROOT / "src/e4/classes/SpawnManagerClass_25_e4.hpp",
     "int q004;", "void *q004;"),
]


def apply_retypes():
    n = 0
    for path, old, new in RETYPES:
        data = path.read_bytes().decode("latin-1")
        if new in data:
            continue
        if old not in data:
            print(f"  RETYPE MISS {path.name}: {old!r}")
            continue
        idx = data.index(old)
        line_end = data.index("\n", idx)
        line = data[idx:line_end]
        if "// 0x" not in line:
            print(f"  RETYPE GUARD (no offset anchor) {path.name}: {line.strip()!r}")
            continue
        data = data[:idx] + data[idx:line_end].replace(old, new) + data[line_end:]
        path.write_bytes(data.encode("latin-1"))
        n += 1
        print(f"  RETYPE {path.name}: {old!r} -> {new!r}")
    return n


# ---------------------------------------------------------------- rewriting
def _group_is_cast(group):
    residue = group[1:-1]
    while True:
        new = re.sub(r"\([^()]*\)", " ", residue)
        if new == residue:
            break
        residue = new
    return "*" in residue


def receiver_start(text, sep_pos):
    i = sep_pos
    depth = 0
    while i > 0:
        ch = text[i - 1]
        if depth > 0:
            if ch in (")", "]"):
                depth += 1
            elif ch in ("(", "["):
                depth -= 1
            i -= 1
            continue
        if ch in (")", "]"):
            d2 = 1
            j = i - 2
            while j >= 0 and d2 > 0:
                if text[j] == ")":
                    d2 += 1
                elif text[j] == "(":
                    d2 -= 1
                j -= 1
            group = text[j + 1:i + 1]
            if _group_is_cast(group):
                return i
            depth += 1
            i -= 1
            continue
        if ch in " \t":
            i -= 1
            continue
        if re.match(r"[\w.>\-]", ch):
            i -= 1
            continue
        break
    return i


def classify_occurrence(out, occ_start, occ_end, name, m, verdict, skips):
    """Decide the rewrite for one occurrence.  Returns
    (form, repl, insert_amp_at) or (None, None, False) with reason in skips."""
    tgt = m["carrier_name"]
    interior = m["carrier_off"] != m["off"]
    K = m["off"] - m["carrier_off"]
    tc = m.get("tgt_cat") or ("array" if "[" in (m.get("carrier_ty") or "") else "scalar")
    oc = m.get("old_cat") or "scalar"
    ty = (m.get("carrier_ty") or "")
    tgt_ptrish = ("*" in ty) or (tc == "array")

    r0 = receiver_start(out, occ_start)
    pre = out[:r0].rstrip()
    post = out[occ_end:]
    sep = out[occ_start] if out[occ_start] in ".->"[:1] else "->"
    # recover the actual separator token length: `.name` or `->name`
    seg = out[occ_start:occ_end]
    sep = "->" if seg.startswith("->") else "."

    form, repl, insert_amp_at = None, None, False
    cast_ctx = pre
    if cast_ctx.endswith("("):
        stripped = cast_ctx[:-1].rstrip()
        if CAST_TAIL.search(stripped):
            cast_ctx = stripped
    before_occ = out[:occ_start]
    charptr_ctx = bool(CHARPTR.search(before_occ[-90:]))
    before_recv = out[:r0].rstrip()

    if verdict == "M4-BYTE" and interior:
        # B1 byte-through-address idiom: `&(*&RECV.N))[K]`
        if pre.endswith("&(*&") and re.match(r"\s*\)\s*\)\s*\[", post):
            form, repl = "B1-bytepair", sep + tgt
        elif re.search(r"\*\s*&\s*$", pre) and post.startswith(")"):
            form, repl = "B1-inner", sep + tgt
        elif re.match(r"^\s*=\s*\(\(\s*" + re.escape(name),
                      post) or re.match(r"^\s*=\s*\(\s*" + re.escape(name), post):
            form, repl = "B2-rmw", sep + tgt
        elif re.match(r"^\s*&\s*~?\s*0x", post) or re.match(r"^\s*\)\s*&\s*~?\s*0x", post):
            form, repl = "B4-mask", sep + tgt
        elif re.match(r"^\s*\)\s*>>", post) or re.match(r"^\s*&\s", post):
            form, repl = "B4-mask", sep + tgt
        elif re.match(r"^(LOBYTE|BYTE1|BYTE2|HIBYTE)\s*\(", post):
            form, repl = "B3-bytemacro", sep + tgt
        else:
            skips.append("B-direct-widening")
    elif pre.endswith("&(*&"):
        # address-of wrapper around an exact-offset target: the inner `*&N`
        # is a plain lvalue address-of -> F3 rename
        stripped_pre0 = pre[:-2].rstrip()
        if charptr_ctx and not tgt_ptrish:
            skips.append("G3-charptr-context")
        elif stripped_pre0 and stripped_pre0[-1] in "+-*/":
            skips.append("G1-arith-operand")
        elif tc == "scalar" or (oc == "array" and tc == "array"):
            form, repl = "F3-rename", sep + tgt
        else:
            skips.append("F3-cat-mismatch")
    elif pre.endswith("*&"):
        stripped_pre = pre[:-2].rstrip()
        if VT_RHS.match(post) and not tgt_ptrish:
            skips.append("G2-vt-install-scalar-target")
        elif charptr_ctx and not tgt_ptrish:
            skips.append("G3-charptr-context")
        elif stripped_pre and stripped_pre[-1] in "+-*/":
            skips.append("G1-arith-operand")
        elif interior:
            skips.append("F3-interior")
        elif tc == "scalar":
            form, repl = "F3-rename", sep + tgt
        elif oc == "array" and tc == "array":
            form, repl = "F3-rename", sep + tgt
        else:
            skips.append("F3-cat-mismatch")
    elif CAST_TAIL.search(cast_ctx) or (cast_ctx.endswith("*") and not cast_ctx.endswith("*&")):
        # F2 slot-load under pointer cast / bare deref
        if interior:
            if oc == "array" and tc == "array":
                form, repl = "F2-interior", sep + tgt + "[%d]" % K
                insert_amp_at = True
            else:
                skips.append("F2-interior-gated")
        elif tc == "array":
            form, repl = "F2-array", sep + tgt
        else:
            form, repl = "F2-scalar", sep + tgt
            insert_amp_at = (oc == "array")
    elif cast_ctx.endswith(")"):
        if interior:
            skips.append("F2b-interior")
        elif oc == "array" and tc == "scalar":
            form, repl = "F2b-amp", sep + tgt
            insert_amp_at = True
        elif oc == tc:
            form, repl = "F2b-rename", sep + tgt
        else:
            skips.append("F2b-cat-mismatch")
    elif re.match(r"^(?:(?:\+\+|--|[+\-*/|&])?=|=(?!=))", post.lstrip()):
        # F4 assignment LHS
        if VT_RHS.match(post) and not tgt_ptrish:
            skips.append("G2-vt-install-scalar-target")
        elif charptr_ctx and not tgt_ptrish:
            skips.append("G3-charptr-context")
        elif interior:
            skips.append("F4-interior")
        else:
            form, repl = "F4-assign", sep + tgt
    elif post.startswith("["):
        if tc == "array" and not interior:
            form, repl = "F6-subscript", sep + tgt
        else:
            skips.append("subscript-nonscalar-target")
    elif post.startswith("."):
        skips.append("nested-struct-member")
    elif interior:
        skips.append("plain-interior")
    elif charptr_ctx and not tgt_ptrish and before_recv.endswith("&"):
        skips.append("G3-charptr-context")
    elif oc == tc:
        form, repl = "F6-rename", sep + tgt
    else:
        skips.append("cat-mismatch-plain")
    return form, repl, insert_amp_at, r0


def rewrite_line(line, name, m, verdict):
    """Two-phase: pass 1 verifies ALL occurrences on the PRISTINE line
    (right-to-left, never mutating), pass 2 applies right-to-left.  Coords
    therefore always refer to the pristine text (X62: one unrewritable
    occurrence skips the whole line)."""
    skips = []
    pat = re.compile(r"(->|\.)" + re.escape(name) + r"\b")
    edits = []
    limit = len(line)
    while True:
        # rightmost occurrence strictly left of `limit` in the pristine line
        occs = [om for om in pat.finditer(line) if om.end() <= limit]
        if not occs:
            break
        om = occs[-1]
        form, repl, amp, r0 = classify_occurrence(
            line, om.start(), om.end(), name, m, verdict, skips)
        if form is None:
            return None, [], skips
        edits.append((om.start(), om.end(), r0, repl, amp))
        limit = om.start()
    if not edits:
        return None, [], skips
    # apply on the pristine line, rightmost first (left offsets stay valid);
    # edits[] was collected right-to-left, so iterate in collection order
    out = line
    for occ_start, occ_end, r0, repl, amp in edits:
        if amp:
            out = out[:r0] + "&" + out[r0:occ_start] + repl + out[occ_end:]
        else:
            out = out[:occ_start] + repl + out[occ_end:]
    actions = [{"form": "amp-form", "amp": True} if e[4] else {"form": "swap", "amp": False}
               for e in edits]
    return out, actions, skips


# ---------------------------------------------------------------- run
src_cache = {}


def get_lines(path):
    key = str(path)
    if key not in src_cache:
        try:
            src_cache[key] = Path(path).read_bytes().decode("latin-1").split("\n")
        except OSError:
            src_cache[key] = []
    return src_cache[key]


per_file = collections.defaultdict(list)
ledger = {"planned": 0, "rewrote": 0, "skips": collections.Counter(),
          "files": {}, "by_mech": collections.Counter()}
for r in CUT:
    name = r["name"]
    m0 = r.get("mech")
    if m0 is None:
        continue
    for site in r["sites"]:
        fpath, ln = site.rsplit(":", 1)
        ln = int(ln)
        m = dict(m0)
        tw = TWIN_TARGETS.get((r["cls"], name))
        if tw and tw[0] in fpath:
            m["carrier_name"] = tw[1]
            m["carrier_ty"] = tw[2]
            m["tgt_cat"] = "array" if "[" in tw[2] else "scalar"
            m["carrier_off"] = m["off"]
        lines = get_lines(fpath)
        ledger["planned"] += 1
        ledger["by_mech"][r["verdict"]] += 1
        if not (0 < ln <= len(lines)):
            ledger["skips"]["line-gone"] += 1
            continue
        line = lines[ln - 1]
        if name not in line:
            ledger["skips"]["name-gone-from-line"] += 1
            continue
        new_line, actions, skips = rewrite_line(line, name, m, r["verdict"])
        for s in skips:
            ledger["skips"][s] += 1
        if new_line is None:
            continue
        per_file[fpath].append((ln, line, new_line, r["cls"], name))
        ledger["rewrote"] += 1

print(f"sites planned: {ledger['planned']}; line-rewrites: {ledger['rewrote']}; "
      f"files: {len(per_file)}")
print("skip shapes:", dict(ledger["skips"]))

if ARGS.apply:
    n_retype = apply_retypes()
    changed = 0
    for fpath, edits in per_file.items():
        p = Path(fpath)
        lines = get_lines(fpath)
        file_changed = 0
        for ln, old, new, clsnss, name in edits:
            if lines[ln - 1] != old:
                print(f"  STALE SKIP {fpath}:{ln}")
                continue
            lines[ln - 1] = new
            changed += 1
            file_changed += 1
        if file_changed:
            data = "\n".join(lines)
            p.write_bytes(data.encode("latin-1"))
    print(f"APPLIED: {changed} lines across {len(per_file)} files + {n_retype} hpp retypes")
    ledger["applied_lines"] = changed
    ledger["applied_retypes"] = n_retype
else:
    print("DRY RUN (no writes)")

ledger["skips"] = dict(ledger["skips"])
ledger["files"] = {f: len(e) for f, e in per_file.items()}
ledger["by_mech"] = dict(ledger["by_mech"])
LEDGER.write_text(json.dumps(ledger, ensure_ascii=False, indent=1), encoding="utf-8")
print(f"ledger -> {LEDGER}")
