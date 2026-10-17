#!/usr/bin/env python3
"""X62 — C2039 30-name closed-set resolution, Batch A (reference rewrites).

Rewrites member-reference spellings at the exact (file,line) sites the X60
build log flags as C2039, targeting the CURRENT carrier member that covers
the reference's offset.  Only shapes with provable memory-semantics
preservation are rewritten; every other site is skipped and recorded.

Shapes (occurrence = `RECV.R`, ctx = text immediately before the receiver):
  F1 `&RECV.R`            address-of idiom        -> plain rename (scalar tgt)
  F2 `(T *)RECV.R` /      pointer-cast idiom      -> old array: scalar tgt
     `*(T *)RECV.R`                                  = insert `&` (+'[K]' if
                                                     interior); array tgt = plain
                                                     old ptr/scalar: scalar tgt
                                                     = plain; array tgt = skip
  F3 `*&RECV.R`           scalar slot value idiom -> plain rename (scalar tgt)
  F4 `RECV.R = ...`       assignment LHS          -> plain rename (scalar tgt)
  F5 `sizeof(RECV.R)`                             -> plain rename
  else                    -> SKIP recorded

old category (semantic idiom source):
  __pad_* / til type with '['  -> array (address semantics, decay)
  ptr_* / vtable* / vfptr      -> pointer value semantics
  q*/u8_/u16_/u32_/semantic    -> scalar value semantics (til type if present)

Interior target (covering member starts before the offset) is only legal
under F2 with old=array: `&T[K]`.

Byte-preserving I/O (latin-1).  Idempotent: after apply the site spells T,
so a re-run finds no R occurrences on the (already-compiled) lines.

Usage:
  python tools/csp_export/gen_x62_c2039_closed_set.py            # dry run
  python tools/csp_export/gen_x62_c2039_closed_set.py --apply
"""
import argparse, json, re, sys, collections
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
EV62 = ROOT / ".omo" / "evidence" / "optimization" / "x62"
EV60 = ROOT / ".omo" / "evidence" / "optimization" / "x60"
LOG = EV60 / "x60_build_final5.out.txt"
TABLE = EV62 / "x62_p0_table.json"
LEDGER = EV62 / "x62_batchA_ledger.json"

ap = argparse.ArgumentParser()
ap.add_argument("--apply", action="store_true")
ARGS = ap.parse_args()

sys.path.insert(0, str(EV62))
exec((EV62 / "_x62_carrier_lib.py").read_text(encoding="utf-8"))
CARRIERS = load_carriers()
TIL = json.loads((EV60 / "x60_til.json").read_text(encoding="utf-8"))
TBL = json.loads(TABLE.read_text(encoding="utf-8"))

C2039_RE = re.compile(
    r"^(?P<file>[^(]+)\((?P<line>\d+)(?:,\d+)?\): error C2039:\s*[\"“”](?P<name>[^\"“”]+)[\"“”]:\s*不是\s*[\"“”](?P<cls>[^\"“”]+)[\"“”]\s*的成员")
CAST_TAIL = re.compile(r"\(\s*(?:const\s+)?[\w ]+\*+\s*\)\s*$")


def til_member_at(cls, off):
    e = TIL.get(cls)
    if not e:
        return None
    for m in e.get("members", []):
        if m["off"] <= off < m["off"] + m["size"]:
            return m
    return None


def old_category(cls, name, off):
    if name.startswith("__pad_") or name.startswith("__tail_"):
        return "array"
    if name.startswith("ptr_") or name.startswith(("vtable", "vfptr")):
        return "ptr"
    tm = til_member_at(cls, off)
    if tm is not None:
        t = (tm.get("type") or "")
        if "[" in t or tm["size"] > 8:
            return "array"
        return "scalar"
    return "scalar"


def target_cat(ty):
    return "array" if "[" in ty else "scalar"


# ---------------------------------------------------------------- plan
meta = {}
for r in TBL["rows"]:
    if r["verdict"] not in ("M1", "M2-NORM"):
        continue
    if r.get("off") is None:
        continue
    cm = r.get("carrier_at") or r.get("carrier_slot")
    if cm is None:
        continue
    key = (r["ns"] + "::" + r["cls"], r["name"])
    meta[key] = {
        "carrier_name": cm["name"], "carrier_off": cm["off"],
        "carrier_ty": cm["ty"], "off": r["off"],
        "tgt_cat": target_cat(cm["ty"]),
        "old_cat": old_category(r["cls"], r["name"], r["off"]),
    }

sites = collections.defaultdict(set)
with LOG.open("r", encoding="utf-8", errors="replace") as f:
    for raw in f:
        m = C2039_RE.match(raw.strip())
        if m:
            key = (m.group("cls").strip(), m.group("name").strip())
            if key in meta:
                sites[key].add((m.group("file"), int(m.group("line"))))

src_cache = {}


def get_lines(path):
    key = str(path)
    if key not in src_cache:
        try:
            src_cache[key] = Path(path).read_bytes().decode("latin-1").split("\n")
        except OSError:
            src_cache[key] = []
    return src_cache[key]


def _group_is_cast(group):
    """A paren group is a cast iff, after stripping all inner balanced
    groups, the residue still contains `*` (e.g. `(unsigned int *)`,
    `(int (**)(DSurface *))`, `(char **)`).  Call groups `(foo(x))` lose
    their inner groups and contain no star -> not a cast.  Multiplication
    groups `(a * b)` false-positive here, but such groups cannot legally
    be the receiver of a `.`/`->` member access, so no harm."""
    residue = group[1:-1]
    while True:
        new = re.sub(r"\([^()]*\)", " ", residue)
        if new == residue:
            break
        residue = new
    return "*" in residue


def receiver_start(text, sep_pos):
    """Walk backwards from the `->`/`.` separator to the receiver expression start.

    Balanced parens/brackets are consumed as part of the receiver chain
    (e.g. `foo(x)->m`, `arr[i].m`), EXCEPT when the group is itself a cast
    (`(unsigned int *)`, `(char **)`, ...) — a cast is not part of the
    receiver, so the walk stops right after it (this is also where a
    synthesized `&` must be inserted for the address-of forms).
    """
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
            # found a group end: is it a cast?
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
                return i  # stop after the cast: receiver begins here
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


def rewrite_line(line, name, m):
    """Return (new_line, actions, skips). Right-to-left occurrence rewrite."""
    actions, skips = [], []
    out = line
    pat = re.compile(r"(->|\.)" + re.escape(name) + r"\b")
    while True:
        occs = list(pat.finditer(out))
        if not occs:
            break
        om = occs[-1]  # process rightmost first
        occ_start, occ_end = om.start(), om.end()
        sep_pos = occ_start
        r0 = receiver_start(out, sep_pos)
        pre = out[:r0].rstrip()
        post = out[occ_end:]

        sep = om.group(1)
        tgt = m["carrier_name"]
        interior = m["carrier_off"] != m["off"]
        K = m["off"] - m["carrier_off"]
        tc, oc = m["tgt_cat"], m["old_cat"]

        form, repl, insert_amp_at = None, None, False
        # cast-before-paren: `...(T *)(expr-with-occurrence)` -> treat the cast
        # as the operative context (strip the wrapping paren for the check)
        cast_ctx = pre
        if cast_ctx.endswith("("):
            stripped = cast_ctx[:-1].rstrip()
            if CAST_TAIL.search(stripped):
                cast_ctx = stripped
        if pre.endswith("&") and not pre.endswith("*&"):
            # F1 address-of: scalar-start target = plain; interior target = &[K]
            if tc == "scalar" and not interior:
                form, repl = "F1-rename", sep + tgt
            elif interior:
                form = "F1-interior"
                repl = sep + tgt + "[%d]" % K
            else:
                skips.append("F1-array-start-target")
        elif CAST_TAIL.search(cast_ctx) or (cast_ctx.endswith("*") and not cast_ctx.endswith("*&")):
            # F2 slot-load under pointer cast or bare deref
            if interior:
                if oc == "array":
                    form = "F2-interior"
                    repl = sep + tgt + "[%d]" % K
                    insert_amp_at = True
                else:
                    skips.append("F2-interior-nonarray-old")
            elif tc == "array":
                if oc == "array":
                    form, repl = "F2-array", sep + tgt
                else:
                    skips.append("F2-array-target-old-nonarray")
            else:
                form, repl = "F2-scalar", sep + tgt
                insert_amp_at = (oc == "array")
        elif cast_ctx.endswith(")"):
            # F2b non-pointer cast directly on the value: categories must match,
            # array->scalar becomes address-of
            if interior:
                skips.append("F2b-interior")
            elif oc == "array" and tc == "scalar":
                form, repl = "F2b-amp", sep + tgt
                insert_amp_at = True
            elif oc == tc:
                form, repl = "F2b-rename", sep + tgt
            else:
                skips.append("F2b-cat-mismatch")
        elif pre.endswith("*&"):
            # F3 scalar slot-value idiom
            if tc == "scalar" and not interior:
                form, repl = "F3-rename", sep + tgt
            else:
                skips.append("F3-nonscalar-or-interior-target")
        elif re.match(r"^(?:(?:\+\+|--|[+\-*/|&])?=|=(?!=))", post.lstrip()):
            # F4 assignment LHS
            if tc == "scalar" and not interior:
                form, repl = "F4-assign", sep + tgt
            else:
                skips.append("F4-nonscalar-or-interior-target")
        elif oc == tc and not interior:
            # F6 plain value use: same-category rename is slot-preserving
            form, repl = "F6-rename", sep + tgt
        elif post.startswith("["):
            skips.append("subscript")
        elif post.startswith("."):
            skips.append("nested-struct-member")
        else:
            skips.append("cat-mismatch-plain")

        if form is None:
            break  # rightmost occurrence unrewritable -> whole line skips this name

        if insert_amp_at:
            new_pre = out[:r0] + "&" + out[r0:occ_start]
            out = new_pre + repl + out[occ_end:]
            actions.append({"form": form, "amp": True})
        else:
            out = out[:occ_start] + repl + out[occ_end:]
            actions.append({"form": form, "amp": False})
    if not actions:
        return None, actions, skips
    return out, actions, skips


# ---------------------------------------------------------------- run
per_file = collections.defaultdict(list)
ledger = {"planned": 0, "rewrote": 0, "skips": collections.Counter(), "files": {}}
no_pair_line = 0
for (clsnss, name), ss in sorted(sites.items()):
    m = meta[(clsnss, name)]
    for fpath, ln in sorted(ss):
        lines = get_lines(fpath)
        if not (0 < ln <= len(lines)):
            no_pair_line += 1
            continue
        line = lines[ln - 1]
        ledger["planned"] += 1
        if name not in line:
            ledger["skips"]["name-gone-from-line"] += 1
            continue
        new_line, actions, skips = rewrite_line(line, name, m)
        for s in skips:
            ledger["skips"][s] += 1
        if new_line is None:
            continue
        per_file[fpath].append((ln, line, new_line, clsnss, name))
        ledger["rewrote"] += 1

print(f"pairs in scope: {len(meta)}; site lines planned: {ledger['planned']}; "
      f"rewrites: {ledger['rewrote']}; files: {len(per_file)}; unmatched: {no_pair_line}")
print("skip shapes:", dict(ledger["skips"]))

if ARGS.apply:
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
    print(f"APPLIED: {changed} lines across files")
    ledger["applied_lines"] = changed
else:
    print("DRY RUN (no writes)")

ledger["skips"] = dict(ledger["skips"])
ledger["files"] = {f: len(e) for f, e in per_file.items()}
LEDGER.write_text(json.dumps(ledger, ensure_ascii=False, indent=1), encoding="utf-8")
print(f"ledger -> {LEDGER}")
