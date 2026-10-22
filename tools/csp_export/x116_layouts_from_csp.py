#!/usr/bin/env python3
"""X116 W1 — CSP-driven class-layout aggregation (pipeline step 2.5).

The layout authority (`tools/class_layouts.json`) is generated from the IDA
til stub (`tools/f_enrich_layouts.py`); 641 of its 1,282 classes therefore
carry stub sizes while the binary accesses far beyond them.  This generator
builds a *sidecar* layout authority from the 86,969 `MEMBER_ACCESS`
constraints already present in `tools/type_infer/constraints/raw_constraints
.json` (each row is `{base:"0x<func>:this", offset, width, addr}`) and folds
in the X112 binary-rebuilt sidecar as equal-rank evidence.

Design (fixed by the X116 task):
  W1.1  stream-parse MEMBER_ACCESS rows (130 MB JSON, regex chunked);
  W1.2  resolve `<func>:this` -> class through, in order:
          a) tools/csp/full_report/csp_functions.json  inferred_real_class
          b) signals.json                              backfill.cls / cls
          c) anchors/vtable_authority.json             vtable slot claimant
          else -> <unresolved>;
  W1.3  aggregate per (class, offset): max width, access count, sample
        instruction anchors;
  W1.4  class size = align4(max(offset+width)), **add/extend only**:
        final = max(existing class_layouts size, csp size).  A class is
        never shrunk and an offset smaller than the existing size is never
        removed;
  W1.5  fold anchors/class_layouts_rebuilt.json (X112) as equal evidence;
  W1.6  emit anchors/class_layouts_csp.json + X116_DIFF.md.

Deterministic, evidence-only guards (documented in X116_DIFF.md):
  G1  only bases of the exact form `0x<func>:this`.  `...:this.member(0xN)`
      bases are *member-relative* (their offset is not this-relative; feeding
      them to the aggregator produced 1.5 MB phantom classes), and
      `::paramN` bases are not `this` at all.
  G2  CSP depth-upgrade: csp_functions stores `params[0].real_type`, which is
      the member-evidence-upgraded class.  When it is a proper descendant of
      `inferred_real_class` (RTTI full/direct + class_layouts parent edges)
      the row is attributed to the descendant (e.g. AbstractClass ->
      HouseClass for `AbstractClass::RemoveObjectFromHouse`).
  G3  inheritance upper bound: a base class cannot be larger than any of its
      known descendants.  When the computed size exceeds
      min(size of known descendants), offsets at/after the bound are dropped
      (they cannot be members of the base).  Existing sizes are never
      shrunk; the bound only caps the *extension*.
  G4  widths are 1/2/4 (verified over all 64,702 pure-this rows); width 0 or
      >8 rows are ignored.

Names/types for new offsets (so headers and bodies agree):
  existing class_layouts name  (never renamed)
  > tools/member_lookup.json[cls][off].name
  > anchors/csp_canon_members.json[cls].members[off].name   (the table the
    bodies were generated from; using it resolves C2039 without renaming)
  > deterministic `off_<HEX>`
  type = existing/canon/ml type when its width matches the access width,
  else the width type (unsigned char/unsigned short/unsigned int/...).

Usage:
  python tools/csp_export/x116_layouts_from_csp.py --apply
  python tools/csp_export/x116_layouts_from_csp.py --dry-run
  python tools/csp_export/x116_layouts_from_csp.py --check   # idempotence

No timestamp is written: two consecutive --apply runs are byte-identical
(`--check` exits 0 on the second run).
"""
import argparse
import collections
import json
import re
import sys
import time
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
CONSTRAINTS = ROOT / "tools/type_infer/constraints/raw_constraints.json"
CSP_FUNCS = ROOT / "tools/csp/full_report/csp_functions.json"
SIGNALS = ROOT / "signals.json"
VTABLE = ROOT / "anchors/vtable_authority.json"
CLASS_LAYOUTS = ROOT / "tools/class_layouts.json"
MEMBER_LOOKUP = ROOT / "tools/member_lookup.json"
CANON_MEMBERS = ROOT / "anchors/csp_canon_members.json"
X112_SIDECAR = ROOT / "anchors/class_layouts_rebuilt.json"
ALIGN = ROOT / "anchors/class_name_align.json"
MALIAS = ROOT / "anchors/mangled_alias.json"
RTTI_HIER = ROOT / "anchors/rtti_hierarchy.json"
OUT_SIDECAR = ROOT / "anchors/class_layouts_csp.json"
OUT_REPORT = ROOT / "X116_DIFF.md"
C2039_NAMES = ROOT / "anchors/x116_c2039_names.json"

C2039_RE = re.compile(
    r'error C2039:\s*"([^"]+)":\s*(?:不是|is not a member of)\s*"([^"]+)"')

MEMBER_RE = re.compile(
    r'\{"type":\s*"MEMBER_ACCESS",\s*"base":\s*"([^"]+)",\s*'
    r'"offset":\s*(-?\d+),\s*"width":\s*(\d+),\s*"addr":\s*"([^"]+)"\}')
THIS_BASE_RE = re.compile(r"^(0x[0-9A-Fa-f]+):this$")
HEX_NAME_RE = re.compile(r"^[A-Za-z_]\w*$")
PAD_RE = re.compile(r"^(?:__?pad|_pad|pad_|vfptr|vtable|vtbl|vt_)", re.I)
WIDTH_TYPE = {1: "unsigned char", 2: "unsigned short", 4: "unsigned int",
              8: "unsigned long long"}


def norm_addr(a):
    a = str(a).strip().lower()
    if a.startswith("0x"):
        a = a[2:]
    return int(a, 16)


def type_width(t):
    """Width in bytes of a C type spelling (subset used by the anchors)."""
    c = re.sub(r"\s+", "", t or "")
    if not c:
        return 0
    if c.endswith("*") or c.endswith("&"):
        return 4
    if c in ("bool", "char", "unsignedchar", "signedchar", "uint8_t",
             "int8_t", "_BYTE", "BYTE"):
        return 1
    if c in ("short", "unsignedshort", "int16_t", "uint16_t", "wchar_t",
             "_WORD", "WORD"):
        return 2
    if c in ("double", "unsignedlonglong", "longlong", "int64_t", "uint64_t",
             "__int64", "_QWORD"):
        return 8
    if c.endswith("]"):
        m = re.match(r"^(.*?)\[(\d+)\]$", c)
        if m:
            ew = type_width(m.group(1))
            return ew * int(m.group(2)) if ew else 0
    return 4


# --------------------------------------------------------------------------
# resolution tables
# --------------------------------------------------------------------------
def load_resolution():
    csp = json.loads(CSP_FUNCS.read_text(encoding="utf-8"))["functions"]
    sig = json.loads(SIGNALS.read_text(encoding="utf-8"))["symbols"]
    vta = json.loads(VTABLE.read_text(encoding="utf-8"))["classes"]

    csp_map = {}
    for k, v in csp.items():
        fa = norm_addr(k)
        rt = None
        for p in v.get("params") or []:
            if p.get("name") == "this":
                rt = (p.get("real_type") or "").strip()
                while rt.endswith("*"):
                    rt = rt[:-1].rstrip()
                break
        csp_map[fa] = (v.get("inferred_real_class"), rt,
                       v.get("original_name") or "")

    sig_map = {}
    sig_name = {}
    for k, v in sig.items():
        if not isinstance(v, dict):
            continue
        try:
            fa = norm_addr(k)
        except ValueError:
            continue
        c = (v.get("backfill") or {}).get("cls") or v.get("cls")
        if c and c != "unknown":
            sig_map[fa] = c
        sig_name[fa] = v.get("name") or ""

    vt_map = {}
    for c, e in vta.items():
        for s in e.get("slots") or []:
            f = s.get("claimed") or s.get("func")
            if not f:
                continue
            vt_map.setdefault(norm_addr(f), c)
    return csp_map, sig_map, vt_map, sig_name


def load_layouts():
    cl = json.loads(CLASS_LAYOUTS.read_text(encoding="utf-8"))
    ml = json.loads(MEMBER_LOOKUP.read_text(encoding="utf-8"))
    canon = json.loads(CANON_MEMBERS.read_text(encoding="utf-8"))
    align = json.loads(ALIGN.read_text(encoding="utf-8"))["rtti_to_canon"]
    mal = json.loads(MALIAS.read_text(encoding="utf-8"))
    rtti = json.loads(RTTI_HIER.read_text(encoding="utf-8"))
    return cl, ml, canon, align, mal, rtti


class Namespace:
    """class-name alias resolution + inheritance relation."""

    def __init__(self, cl, align, mal, rtti):
        self.cl = cl
        self.align = align
        self.mal = mal
        self.parent = {c: e.get("parent") for c, e in cl.items()
                       if e.get("parent")}
        self.children = collections.defaultdict(list)
        for c, p in self.parent.items():
            self.children[p].append(c)
        self.rtti_direct = rtti.get("direct") or {}
        self.rtti_full = rtti.get("full") or {}
        self._anc = {}
        self._desc = {}

    # -- class name -> class_layouts key -----------------------------------
    def to_layout(self, raw):
        """(layout key, how) or (None, None).  Only 1:1-shaped aliases."""
        if not raw:
            return None, None
        if raw in self.cl:
            return raw, "exact"
        if raw.startswith("_") and raw[1:] in self.cl:
            return raw[1:], "underscore"
        if raw in self.mal and self.mal[raw] in self.cl:
            return self.mal[raw], "mangled-alias"
        a = self.align.get(raw)
        if a:
            canon = a.get("canon")
            if canon and canon in self.cl:
                return canon, "rtti-" + str(a.get("rule") or "canon")
        return None, None

    # -- inheritance --------------------------------------------------------
    def ancestors(self, c):
        if c in self._anc:
            return self._anc[c]
        out = set()
        seen = set()
        x = self.parent.get(c)
        while x and x not in seen:
            out.add(x)
            seen.add(x)
            x = self.parent.get(x)
        out |= set(self.rtti_full.get(c) or [])
        out |= set(self.rtti_direct.get(c) or [])
        self._anc[c] = out
        return out

    def descendants(self, c):
        if c in self._desc:
            return self._desc[c]
        out = set()
        stack = [c]
        while stack:
            x = stack.pop()
            for ch in self.children.get(x, ()):
                if ch not in out:
                    out.add(ch)
                    stack.append(ch)
        # RTTI edges (canon names may not be in class_layouts parent links)
        for d in self.cl:
            if c in (self.rtti_full.get(d) or []) or c in (self.rtti_direct.get(d) or []):
                if d != c:
                    out.add(d)
        self._desc[c] = out
        return out

    def is_descendant(self, child, parent):
        return child != parent and parent in self.ancestors(child)


# --------------------------------------------------------------------------
# streaming parse
# --------------------------------------------------------------------------
def stream_member_rows(path):
    """Yield (base, offset, width, addr) for every MEMBER_ACCESS row."""
    buf = ""
    with open(path, "r", encoding="utf-8", errors="replace") as f:
        while True:
            chunk = f.read(8 * 1024 * 1024)
            if not chunk:
                break
            buf += chunk
            last = 0
            for m in MEMBER_RE.finditer(buf):
                last = m.end()
                yield m.groups()
            buf = buf[last:]


# --------------------------------------------------------------------------
# member naming / typing
# --------------------------------------------------------------------------
def ml_entries(ml, cls):
    e = ml.get(cls)
    if not isinstance(e, dict):
        return {}
    out = {}
    for k, v in e.items():
        if not isinstance(v, dict):
            continue
        try:
            off = int(str(k), 0)
        except ValueError:
            continue
        out[off] = v
    return out


def canon_entries(canon, cls):
    e = canon.get(cls) or {}
    out = {}
    for k, v in (e.get("members") or {}).items():
        try:
            off = int(str(k), 0)
        except ValueError:
            continue
        out[off] = v or {}
    return out


def pick_name(cls, off, cands, used, width=4):
    """First valid, non-placeholder, unique candidate name."""
    for src, nm in cands:
        if not nm or not isinstance(nm, str):
            continue
        nm = nm.strip()
        if not HEX_NAME_RE.match(nm):
            continue
        if PAD_RE.match(nm):
            continue
        if nm in used:
            continue
        return nm, src
    # deterministic fallback: the width-encoded spelling is what the bodies
    # were generated with (`u32_C4`, `u8_2C5`, `ptr_18`); off_<HEX> is the
    # last resort when that name is taken.
    if width in (1, 2, 4, 8):
        base = "u%d_%X" % (width * 8, off)
    else:
        base = "off_%X" % off
    nm = base
    k = 2
    while nm in used:
        nm = "%s_%d" % (base, k)
        k += 1
    return nm, "derived"


# --------------------------------------------------------------------------
# body-name evidence (C2039 log -> pinned name map)
# --------------------------------------------------------------------------
NAME_OFF_PATTERNS = [
    (re.compile(r"^u(?:8|16|32|64)_([0-9A-Fa-f]+)$"), 16),
    (re.compile(r"^ptr_([0-9A-Fa-f]+)$"), 16),
    (re.compile(r"^q([0-9A-Fa-f]{2,6})$"), 16),
    (re.compile(r"^m_([0-9A-Fa-f]{1,6})$"), 16),
    (re.compile(r"^(?:\w+_)?field_0x([0-9A-Fa-f]+)$"), 16),
    (re.compile(r"^field_([0-9A-Fa-f]{2,6})$"), 16),
    (re.compile(r"^[A-Za-z]\w*_([0-9A-Fa-f]{2,6})$"), 16),
    (re.compile(r"^__pad_([0-9A-Fa-f]+)$"), 16),
]


def name_to_offset(nm):
    for rx, base in NAME_OFF_PATTERNS:
        m = rx.match(nm)
        if m:
            return int(m.group(1), base)
    return None


def extract_c2039_names(log_path, ns):
    """Build {layout_class: {off: most_common_body_name}} from a build log.

    The bodies name a missing member with its offset encoding (`q0D0`,
    `u32_C4`, `ptr_18`, `Tactical_E4`).  When the same class/offset has
    MEMBER_ACCESS evidence, declaring the member with the body's own name is
    the only way to resolve C2039 without renaming the body.
    """
    votes = collections.defaultdict(lambda: collections.defaultdict(collections.Counter))
    for line in open(log_path, "r", encoding="utf-8", errors="replace"):
        m = C2039_RE.search(line)
        if not m:
            continue
        member, cls = m.group(1), m.group(2).split("::")[-1]
        layout, _how = ns.to_layout(cls)
        if not layout:
            continue
        off = name_to_offset(member)
        if off is None:
            continue
        votes[layout][off][member] += 1
    out = {}
    for cls, offs in votes.items():
        out[cls] = {}
        for off, names in offs.items():
            # deterministic: most frequent, then lexicographic
            out[cls][str(off)] = sorted(names.items(),
                                        key=lambda kv: (-kv[1], kv[0]))[0][0]
    return out


def load_c2039_names():
    if not C2039_NAMES.exists():
        return {}
    d = json.loads(C2039_NAMES.read_text(encoding="utf-8"))
    return d.get("names") or {}


BUILTIN_TYPES = {
    "bool", "char", "signed char", "unsigned char", "short",
    "unsigned short", "int", "unsigned int", "long", "unsigned long",
    "long long", "unsigned long long", "float", "double", "wchar_t",
    "__int8", "__int16", "__int32", "__int64", "_BYTE", "_WORD", "_DWORD",
    "_QWORD", "BYTE", "WORD", "DWORD", "QWORD", "BOOL", "uint8_t",
    "uint16_t", "uint32_t", "uint64_t", "int8_t", "int16_t", "int32_t",
    "int64_t", "size_t", "time_t",
}
ARRAY_RE = re.compile(r"^(.*?)\[\s*(\d+)\s*\]$")


def safe_type(ty, w, known_classes):
    """C type safe to emit for a member of width w.

    Pointers (forward-declarable) and arrays of builtins are kept; a class
    name by value is replaced by a width scalar (an incomplete class cannot
    be a by-value member), and any non-trivial extent becomes a byte view.
    """
    ty = (ty or "").strip()
    if not ty:
        return WIDTH_TYPE.get(w, "char[%d]" % w if w > 8 else "unsigned char")
    m = ARRAY_RE.match(ty)
    if m:
        base, n = m.group(1).strip(), int(m.group(2))
        bw = type_width(base)
        if bw and bw * n == w and (base in BUILTIN_TYPES or base.endswith("*")):
            return ty
        return "char[%d]" % w if w > 0 else ty
    if ty.endswith("*") or ty.endswith("&"):
        return ty
    if ty in BUILTIN_TYPES:
        return ty if type_width(ty) == w else (
            WIDTH_TYPE.get(w, "char[%d]" % w))
    # class / typedef name by value: keep only if width is 1/2/4/8 and the
    # name is a scalar typedef, otherwise emit the width type.  A by-value
    # incomplete class is a guaranteed C2079.
    if w in WIDTH_TYPE:
        return WIDTH_TYPE[w]
    return "char[%d]" % w


def build_class_entry(cls, existing, csp_offs, x112, ml, canon, ns,
                      til_size=0, carrier=None, preferred=None):
    """Merge existing layout + til lower bound + X112 + CSP evidence.

    `carrier` maps off -> {name, type, width} from the *current* carrier
    declaration.  A carrier member is the tree's compiled truth: its name and
    type win at that offset (the body already uses them), so the sidecar can
    only add offsets / grow the struct, never rename a working declaration.
    """
    old_size = int(existing.get("size") or 0)
    old_offs = existing.get("offsets") or {}
    mle = ml_entries(ml, cls)
    cne = canon_entries(canon, cls)
    carrier = carrier or {}
    preferred = preferred or {}

    # ---- existing members (never renamed / never removed) ----------------
    members = {}
    for k, v in old_offs.items():
        try:
            off = int(str(k), 0)
        except ValueError:
            continue
        v = v if isinstance(v, dict) else {}
        nm = v.get("ida_name") or ""
        w = int(v.get("size") or 0)
        ty = v.get("type") or ""
        if w <= 0:
            w = (type_width(ty)
                 or type_width(mle.get(off, {}).get("type"))
                 or type_width(cne.get(off, {}).get("type")) or 4)
        cm = carrier.get(off)
        if cm and cm.get("name"):
            # compiled truth wins (including pad names the bodies use)
            nm = cm["name"]
            ty = cm.get("type") or ty
            w = max(w, int(cm.get("width") or 0))
        members[off] = {"off": off, "width": w, "type": ty, "name": nm,
                        "source": "existing", "count": 0, "evidence": []}

    # ---- carrier baseline: every declared member survives -----------------
    # The sidecar is a superset of the current carrier.  A carrier-only
    # member (not in class_layouts) must not be dropped by the authority
    # switch (e.g. ParticleTypeClass::BarrelVoxel[24] @0xB8).
    for off, cm in sorted(carrier.items()):
        if off in members:
            continue
        members[off] = {"off": off, "width": int(cm.get("width") or 0) or 1,
                        "type": cm.get("type") or "",
                        "name": cm.get("name") or "",
                        "source": "carrier", "count": 0, "evidence": []}

    # ---- X112 evidence (equal rank; fills what class_layouts lacks) ------
    x112_size = 0
    if x112:
        x112_size = int(x112.get("computed_size") or 0)
        for m in x112.get("members") or []:
            off = int(m.get("off") or 0)
            w = int(m.get("width") or m.get("size") or 0)
            if w <= 0:
                continue
            cur = members.get(off)
            if cur is None:
                cm = carrier.get(off)
                members[off] = {
                    "off": off, "width": max(w, int((cm or {}).get("width") or 0)),
                    "type": (cm or {}).get("type") or m.get("type") or "",
                    "name": (cm or {}).get("name") or m.get("name") or "",
                    "source": "x112", "count": 0,
                    "evidence": [e for e in (m.get("evidence") or [])][:4]}
            else:
                cur["width"] = max(cur["width"], w)
                if not cur.get("type"):
                    cur["type"] = m.get("type") or ""
                if not cur.get("name"):
                    cur["name"] = m.get("name") or ""
                cur["source"] = cur["source"] + "+x112"

    # ---- CSP evidence ----------------------------------------------------
    added = []
    for off, (w, cnt, addrs) in sorted(csp_offs.items()):
        cur = members.get(off)
        if cur is None:
            cm = carrier.get(off)
            members[off] = {
                "off": off, "width": max(w, int((cm or {}).get("width") or 0)),
                "type": (cm or {}).get("type") or "",
                "name": (cm or {}).get("name") or "",
                "source": "csp", "count": cnt,
                "evidence": sorted(addrs)[:4]}
            if cm is None and str(off) not in old_offs:
                added.append(off)
            continue
        # existing/X112 offset: max width wins, evidence accumulates
        if w > cur["width"]:
            cur["width"] = w
        if cur["source"] == "existing":
            cur["source"] = "existing+csp"
        elif "csp" not in cur["source"].split("+"):
            cur["source"] = cur["source"] + "+csp"
        cur["count"] = int(cur.get("count") or 0) + cnt
        ev = cur.setdefault("evidence", [])
        for a in sorted(addrs):
            if a not in ev and len(ev) < 4:
                ev.append(a)

    # ---- size: add/extend only ------------------------------------------
    # Lower bounds: existing class_layouts size (never shrink), the current
    # carrier authority (x60 til — the carrier must not shrink either), the
    # X112 sidecar, and the CSP-computed size.
    csp_size = 0
    if csp_offs:
        csp_size = ((max(o + w for o, (w, _, _) in csp_offs.items())) + 3) & ~3
    carrier_size = max((o + v.get("width", 0)
                        for o, v in carrier.items()), default=0)
    final = max(old_size, int(til_size or 0), csp_size, x112_size,
                carrier_size)
    if final <= 0:
        final = max((m["off"] + m["width"] for m in members.values()),
                    default=0)
        final = (final + 3) & ~3

    # ---- overlap trim (X112 rule): carrier truth wins, then clip ---------
    ordered = sorted(members)
    trimmed = {}
    for off in ordered:
        m = members[off]
        covered = None
        for po, pm in trimmed.items():
            if po <= off < po + pm["width"]:
                covered = (po, pm)
                break
        if covered is not None:
            po, pm = covered
            if carrier.get(po) and not carrier.get(off):
                continue          # interloper inside a carrier member
            pm["width"] = max(1, off - po)
        trimmed[off] = m
    ordered = sorted(trimmed)
    for i, off in enumerate(ordered):
        m = trimmed[off]
        if i + 1 < len(ordered):
            nxt = ordered[i + 1]
            if off + m["width"] > nxt:
                m["width"] = max(1, nxt - off)
    members = trimmed

    # ---- clip to final, resolve name/type --------------------------------
    used = set()
    out_members = []
    for off in sorted(members):
        m = members[off]
        w = m["width"]
        if off < 0 or off >= final:
            continue
        if w <= 0:
            w = 1
        if off + w > final:
            w = final - off
        ty = (m.get("type") or "").strip()
        # prefer an authority type whose width matches the member width
        if not ty or type_width(ty) != w:
            for cand in (mle.get(off, {}).get("type"),
                         cne.get(off, {}).get("type")):
                if cand and type_width(cand) == w:
                    ty = cand
                    break
        ty = safe_type(ty, w, ns.cl)
        nm = m.get("name") or ""
        pref = preferred.get(str(off))
        cands = []
        if pref:
            cands.append(("body-c2039", pref))
        cands.append(("member_lookup", mle.get(off, {}).get("name")))
        cands.append(("canon", cne.get(off, {}).get("name")))
        if not nm or not HEX_NAME_RE.match(nm):
            nm, src = pick_name(cls, off, cands, used, w)
            if m["source"] == "existing":
                m["source"] = "existing+" + src
        else:
            # keep the existing name; ensure uniqueness
            if nm in used:
                nm, src = pick_name(cls, off, cands, used, w)
                m["source"] = m["source"] + "+" + src
        used.add(nm)
        out_members.append({"off": off, "width": w, "type": ty, "name": nm,
                            "source": m["source"],
                            "count": int(m.get("count") or 0),
                            "evidence": m.get("evidence") or []})

    return {
        "class": cls,
        "computed_size": final,
        "csp_size": csp_size,
        "existing_size": old_size,
        "x112_size": x112_size,
        "added_offsets": sorted(added),
        "members": out_members,
        "evidence_counts": {
            "csp_accesses": sum(c[1] for c in csp_offs.values()),
            "csp_offsets": len(csp_offs),
            "x112_members": len(x112.get("members") or []) if x112 else 0,
            "existing_offsets": len(old_offs),
        },
    }


# --------------------------------------------------------------------------
# carrier declarations (the tree's compiled truth)
# --------------------------------------------------------------------------
CARRIER_FILES = [
    "src/e4/classes/*_e4.hpp",
    "src/e4/classes/_tree_full_e4.hpp",
    "src/_gap2/gap2_global_decls.hpp",
]
STRUCT_RE = re.compile(r"\bstruct\s+([A-Za-z_]\w*)\s*(?::[^;{]*)?\{")


def _strip_comments(s):
    out = []
    i, n = 0, len(s)
    while i < n:
        if s.startswith("//", i):
            break
        if s.startswith("/*", i):
            j = s.find("*/", i + 2)
            if j < 0:
                break
            i = j + 2
            continue
        out.append(s[i])
        i += 1
    return "".join(out)


def _parse_member(line):
    """X60-compatible member line parser (handles `T *name`, arrays, offsets
    from the `// 0xNN` comment or from the name encoding)."""
    s = line.rstrip("\n")
    decl = _strip_comments(s).rstrip()
    if "(" in decl or "=" in decl or "#" in decl:
        return None
    if not decl.endswith(";"):
        return None
    mcom = re.search(r"//|/\*", s)
    comment = s[mcom.start():].strip() if mcom else ""
    core = decl[:-1].strip()
    if not core or core.startswith(("//", "typedef", "using", "friend",
                                    "public", "private", "protected",
                                    "template", "return", "static", "goto")):
        return None
    arr = ""
    ma = re.search(r"\[\s*(0[xX][0-9A-Fa-f]+|\d*)\s*\]\s*$", core)
    if ma:
        b = ma.group(1)
        if not b:
            return None
        arr = "[%d]" % int(b, 0)
        core = core[:ma.start()].strip()
        if not core:
            return None
    mn = re.search(r"([A-Za-z_]\w*)\s*\**\s*$", core)
    if not mn:
        return None
    name = mn.group(1)
    ty = core[:mn.start()].rstrip()
    stars = core[mn.start():][len(name):].replace(" ", "")
    ty = (ty + stars).strip()
    if not ty:
        return None
    if ty.split()[0] in ("return", "else", "case", "goto", "if", "while",
                         "switch", "for", "do"):
        return None
    ty = re.sub(r"\s+", " ", ty)
    off = None
    mo = re.search(r"0x([0-9A-Fa-f]+)", comment or "")
    if mo:
        off = int(mo.group(1), 16)
    else:
        for rx, base in ((r"^q([0-9A-Fa-f]{2,6})$", 16),
                         (r"^u(?:8|16|32|64)_([0-9A-Fa-f]+)$", 16),
                         (r"^(?:ptr|__pad)_([0-9A-Fa-f]+)$", 16),
                         (r"^(?:\w*_)?field_([0-9A-Fa-f]{1,6})$", 16)):
            m2 = re.match(rx, name)
            if m2:
                off = int(m2.group(1), base)
                break
        else:
            m3 = re.match(r"^M(\d+)$", name)
            if m3:
                off = int(m3.group(1), 10)
    size = type_width(ty)
    if arr:
        ma2 = re.match(r"\[(\d+)\]", arr)
        size = size * (int(ma2.group(1)) if ma2 else 0)
    return {"ty": ty, "name": name, "arr": arr, "off": off, "size": size}


def _struct_bodies(text):
    """Yield (name, body) for every struct definition (brace matched)."""
    for m in STRUCT_RE.finditer(text):
        i = m.end()
        depth = 1
        j = i
        n = len(text)
        while j < n and depth:
            ch = text[j]
            if ch == "{":
                depth += 1
            elif ch == "}":
                depth -= 1
            j += 1
        if depth == 0:
            yield m.group(1), text[i:j - 1]


def load_carrier_members():
    """(cls, off) -> {name, type, width} from the current carriers.

    Mirrors the X60 parser: offsets come from the `// 0xNN` comment or the
    name encoding (qNNN / u32_NNN / ptr_NN / field_NN / M<N>).  Members with
    no resolvable offset are skipped (they cannot be placed).
    """
    out = collections.defaultdict(dict)
    for pat in CARRIER_FILES:
        for path in sorted(ROOT.glob(pat)):
            try:
                text = path.read_text(encoding="utf-8", errors="replace")
            except OSError:
                continue
            for cls, body in _struct_bodies(text):
                rows = []
                for line in body.split("\n"):
                    pm = _parse_member(line)
                    # G5: a carrier member beyond 0x40000 is a bogus
                    # address-as-offset artifact (e.g. WTFMode q479250);
                    # the largest real class (Network) ends at 0x3F568.
                    if pm and pm["off"] is not None and pm["size"] \
                            and 0 <= pm["off"] <= 0x40000:
                        rows.append(pm)
                rows.sort(key=lambda r: r["off"])
                for k, pm in enumerate(rows):
                    off = pm["off"]
                    width = pm["size"]
                    if not width:
                        nxt = next((r["off"] for r in rows[k + 1:]
                                    if r["off"] > off), None)
                        if nxt is not None and 0 < nxt - off <= 4096:
                            width = nxt - off
                    if width and width > 0:
                        out[cls].setdefault(off, {
                            "name": pm["name"],
                            "type": pm["ty"] + pm["arr"],
                            "width": width})
    return out


# --------------------------------------------------------------------------
# main
# --------------------------------------------------------------------------
def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--apply", action="store_true",
                    help="write the sidecar + X116_DIFF.md (default unless "
                         "--dry-run/--check/--report-only)")
    ap.add_argument("--dry-run", action="store_true")
    ap.add_argument("--check", action="store_true",
                    help="write nothing; exit 0 if the sidecar is unchanged")
    ap.add_argument("--report-only", action="store_true")
    ap.add_argument("--extract-c2039-names", default="",
                    help="parse a build log into anchors/x116_c2039_names.json "
                         "(body-name evidence; pinned, deterministic input)")
    args = ap.parse_args()
    t0 = time.time()

    cl, ml, canon, align, mal, rtti = load_layouts()
    ns = Namespace(cl, align, mal, rtti)
    if args.extract_c2039_names:
        names = extract_c2039_names(args.extract_c2039_names, ns)
        C2039_NAMES.write_text(json.dumps(
            {"meta": {"generated_by": "x116_layouts_from_csp.py "
                                     "--extract-c2039-names",
                      "source_log": str(args.extract_c2039_names),
                      "rule": "body member name encodes the byte offset; "
                              "most frequent wins, ties lexicographic"},
             "names": names}, indent=1, sort_keys=True,
            ensure_ascii=False) + "\n", encoding="utf-8")
        print("wrote %s (%d classes)" % (C2039_NAMES, len(names)))
        return 0
    csp_map, sig_map, vt_map, sig_name = load_resolution()
    x112_all = json.loads(X112_SIDECAR.read_text(encoding="utf-8"))
    x112 = x112_all.get("classes") or {}
    # Current carrier authority (the generator the sidecar overrides).
    # It is a *lower bound* only: the sidecar must never shrink a carrier.
    try:
        TIL = json.loads((ROOT / ".omo/evidence/optimization/x60/"
                          "x60_til.json").read_text(encoding="utf-8"))
    except OSError:
        TIL = {}
    # Current carrier declarations: a working carrier member's name/type is
    # the tree's compiled truth and wins at its offset (no gratuitous renames).
    CARRIER = load_carrier_members()
    PREFERRED = load_c2039_names()
    print("carrier declarations: %d classes; body-name map: %d classes"
          % (len(CARRIER), len(PREFERRED)))

    stats = collections.Counter()
    unresolved = collections.Counter()
    depth_up = collections.Counter()
    alias_hits = collections.Counter()
    agg = collections.defaultdict(dict)

    for base, off_s, w_s, addr in stream_member_rows(CONSTRAINTS):
        stats["rows_total"] += 1
        m = THIS_BASE_RE.match(base)
        if not m:
            if ".member(" in base:
                stats["skip_member_relative"] += 1
            elif "::param" in base:
                stats["skip_param"] += 1
            else:
                stats["skip_other_base"] += 1
            continue
        stats["rows_this"] += 1
        w = int(w_s)
        if w not in (1, 2, 4, 8):
            stats["skip_width"] += 1
            continue
        fa = norm_addr(m.group(1))
        raw = rt = None
        src = None
        ent = csp_map.get(fa)
        if ent:
            raw, rt, _name = ent
            src = "csp"
        elif fa in sig_map:
            raw = sig_map[fa]
            src = "signals"
        elif fa in vt_map:
            raw = vt_map[fa]
            src = "vtable"
        if not raw or raw == "unknown":
            stats["unresolved"] += 1
            unresolved[fa] += 1
            continue
        stats["resolved_" + src] += 1
        cls, how = ns.to_layout(raw)
        if not cls:
            stats["no_layout_record"] += 1
            continue
        stats["mapped_" + how] += 1
        if how != "exact":
            alias_hits[(raw, cls, how)] += 1
        # G2 depth-upgrade: a derived `this` also accesses every base member,
        # so the row is attributed to BOTH the (declared) class and the
        # upgraded descendant.  The ancestor's G3 inheritance bound later
        # drops the descendant-only offsets, so base layouts get exactly the
        # inherited evidence their bound allows.
        targets = [cls]
        if rt and rt != raw and ns.is_descendant(rt, raw):
            layout_rt, _ = ns.to_layout(rt)
            if layout_rt and layout_rt != cls:
                depth_up[(raw, layout_rt)] += 1
                targets.append(layout_rt)
        off = int(off_s)
        for tgt in targets:
            cur = agg[tgt].get(off)
            if cur is None or w > cur[0]:
                agg[tgt][off] = [w, 1, [addr]]
            else:
                cur[1] += 1
                if len(cur[2]) < 4:
                    cur[2].append(addr)

    # G3 inheritance bound.  The effective size uses the *stable* layout
    # tables only (class_layouts + til + X112): feeding the carrier size back
    # in makes the bound depend on the sidecar's own output and oscillate.
    # A class_layouts stub of 4 bytes (IsometricTileClass) must not cap its
    # base class: descendants smaller than the base's own size are stubs and
    # are ignored (a derived object cannot be smaller).
    def _eff_size(c):
        return max(int((cl.get(c) or {}).get("size") or 0),
                   int((TIL.get(c) or {}).get("size") or 0),
                   int((x112.get(c) or {}).get("computed_size") or 0))

    clamp_report = []
    for cls in list(agg):
        offs = agg[cls]
        desc = ns.descendants(cls)
        base_old = max(int((cl.get(cls) or {}).get("size") or 0),
                       int((TIL.get(cls) or {}).get("size") or 0),
                       int((x112.get(cls) or {}).get("computed_size") or 0))
        sizes = [_eff_size(d) for d in desc]
        sizes = [s for s in sizes if s >= base_old and s > 0]
        if not sizes:
            continue
        bound = min(sizes)
        keep = {o: v for o, v in offs.items() if o + v[0] <= bound}
        dropped = len(offs) - len(keep)
        if dropped:
            clamp_report.append({"class": cls, "bound": bound,
                                 "dropped_offsets": dropped,
                                 "old_csp_max": max(o + v[0] for o, v in offs.items())})
            if keep:
                agg[cls] = keep
            else:
                del agg[cls]

    # exclude classes with no layout record (already done by to_layout) and
    # classes whose evidence adds nothing to the existing/X112 layout
    classes_out = {}
    extended = []
    stale = []
    for cls in sorted(agg):
        if cls not in cl and cls not in x112:
            continue
        old_entry = cl.get(cls) or {}
        old = int(old_entry.get("size") or 0)
        til_size = int((TIL.get(cls) or {}).get("size") or 0)
        entry = build_class_entry(cls, old_entry, agg[cls],
                                  x112.get(cls), ml, canon, ns, til_size,
                                  CARRIER.get(cls), PREFERRED.get(cls))
        # Include a class when the CSP evidence extends it, adds offsets, or
        # when the carrier authority (til) is stale versus the layout table
        # (class_layouts).  Classes whose class_layouts layout equals the til
        # and gains nothing are left untouched (their carriers are already
        # consistent with the authority).
        if not entry["added_offsets"] and entry["computed_size"] == old \
                and old == til_size:
            continue
        classes_out[cls] = entry
        if entry["computed_size"] > old:
            extended.append(entry)
        elif old > til_size:
            stale.append(entry)

    sidecar = {
        "meta": {
            "task": "X116 W1 — CSP-driven class-layout aggregation "
                    "(pipeline step 2.5)",
            "generated_by": "tools/csp_export/x116_layouts_from_csp.py",
            "authority": "MEMBER_ACCESS constraints + X112 binary sidecar",
            "input": "tools/type_infer/constraints/raw_constraints.json",
            "rules": [
                "G1 only exact '<func>:this' bases (member-relative and "
                "parameter bases excluded)",
                "class = csp inferred_real_class > signals backfill.cls > "
                "vtable_authority slot claimant",
                "G2 CSP depth-upgrade: a derived this also contributes to the "
                "declared base (the base's bound drops derived-only offsets)",
                "size = align4(max(offset+width)); add/extend only (never shrink)",
                "G3 inheritance upper bound = min(effective size of known "
                "descendants; class_layouts/til/X112 only, stable inputs)",
                "G4 widths restricted to 1/2/4/8",
                "G5 carrier members beyond 0x40000 are ignored (address-as-"
                "offset artifacts)",
                "X112 sidecar folded as equal-rank evidence",
                "names: carrier member (compiled truth) > body C2039 name "
                "(pinned offset-encoded evidence) > member_lookup > "
                "csp_canon_members > u<width>_<HEX> > off_<HEX>",
            ],
            "counts": {
                "rows_total": stats["rows_total"],
                "rows_this": stats["rows_this"],
                "rows_mapped": stats["rows_this"] - stats["unresolved"] -
                               stats["no_layout_record"] - stats["skip_width"],
                "unresolved_rows": stats["unresolved"],
                "no_layout_record_rows": stats["no_layout_record"],
                "classes_in_sidecar": len(classes_out),
                "classes_extended": len(extended),
                "classes_stale_authority": len(stale),
                "offsets_added": sum(len(e["added_offsets"])
                                     for e in classes_out.values()),
            },
        },
        "classes": classes_out,
    }

    text = json.dumps(sidecar, indent=1, sort_keys=True,
                      ensure_ascii=False) + "\n"
    changed = True
    if OUT_SIDECAR.exists():
        changed = OUT_SIDECAR.read_text(encoding="utf-8") != text

    print("rows total=%d this=%d resolved(csp=%d sig=%d vtable=%d) "
          "no-layout=%d unresolved=%d(rows) / %d(funcs)"
          % (stats["rows_total"], stats["rows_this"],
             stats["resolved_csp"], stats["resolved_signals"],
             stats["resolved_vtable"], stats["no_layout_record"],
             stats["unresolved"], len(unresolved)))
    print("classes extended=%d stale-authority=%d sidecar=%d "
          "offsets_added=%d clamps=%d"
          % (len(extended), len(stale), len(classes_out),
             sum(len(e["added_offsets"]) for e in classes_out.values()),
             len(clamp_report)))
    for e in sorted(extended, key=lambda x: -(x["computed_size"] -
                                             x["existing_size"]))[:10]:
        print("  %-30s %6d -> %6d  +%d offsets"
              % (e["class"], e["existing_size"], e["computed_size"],
                 len(e["added_offsets"])))

    if args.check:
        print("check: %s" % ("CHANGED" if changed else "UNCHANGED"))
        return 0 if not changed else 1
    if args.dry_run or args.report_only:
        write_report(sidecar, extended, clamp_report, unresolved, sig_name,
                     depth_up, alias_hits, stats, dry=True)
        print("dry-run: no write (sidecar would %s)"
              % ("change" if changed else "stay identical"))
        return 0
    OUT_SIDECAR.parent.mkdir(parents=True, exist_ok=True)
    if changed:
        OUT_SIDECAR.write_text(text, encoding="utf-8")
    write_report(sidecar, extended, clamp_report, unresolved, sig_name,
                 depth_up, alias_hits, stats, dry=False)
    print("wrote %s (changed=%s) in %.1fs"
          % (OUT_SIDECAR, changed, time.time() - t0))
    return 0


def write_report(sidecar, extended, clamp_report, unresolved, sig_name,
                 depth_up, alias_hits, stats, dry):
    m = sidecar["meta"]["counts"]
    lines = []
    lines.append("# X116 — CSP-driven class layouts (pipeline step 2.5)\n")
    lines.append("Generated by `tools/csp_export/x116_layouts_from_csp.py` "
                 "from `raw_constraints.json` MEMBER_ACCESS rows "
                 "(sidecar: `anchors/class_layouts_csp.json`).\n")
    lines.append("## Evidence counts\n")
    lines.append("| item | value |")
    lines.append("|---|---:|")
    for k in ("rows_total", "rows_this", "rows_mapped", "unresolved_rows",
              "no_layout_record_rows", "classes_in_sidecar",
              "classes_extended", "offsets_added"):
        lines.append("| %s | %d |" % (k, m[k]))
    lines.append("")
    lines.append("Resolution: `csp` %d / `signals` %d / `vtable` %d rows; "
                 "member-relative bases excluded %d; param bases excluded %d."
                 % (stats["resolved_csp"], stats["resolved_signals"],
                    stats["resolved_vtable"], stats["skip_member_relative"],
                    stats["skip_param"]))
    lines.append("")
    lines.append("## Classes extended (old size -> computed size)\n")
    lines.append("| class | old | csp | final | +offsets | accesses |")
    lines.append("|---|---:|---:|---:|---:|---:|")
    for e in sorted(extended, key=lambda x: (-(x["computed_size"] -
                                              x["existing_size"]), x["class"])):
        lines.append("| %s | %d | %d | %d | %d | %d |"
                     % (e["class"], e["existing_size"], e["csp_size"],
                        e["computed_size"], len(e["added_offsets"]),
                        e["evidence_counts"]["csp_accesses"]))
    lines.append("")
    if clamp_report:
        lines.append("## Inheritance-bound clamps (impossible base sizes)\n")
        lines.append("| class | bound | dropped offsets | raw max |")
        lines.append("|---|---:|---:|---:|")
        for c in sorted(clamp_report, key=lambda x: -x["dropped_offsets"]):
            lines.append("| %s | %d | %d | %d |"
                         % (c["class"], c["bound"], c["dropped_offsets"],
                            c["old_csp_max"]))
        lines.append("")
    if depth_up:
        lines.append("## CSP depth-upgrades (real_type proper descendant)\n")
        lines.append("| inferred | upgraded | rows |")
        lines.append("|---|---|---:|")
        for (a, b), n in depth_up.most_common(25):
            lines.append("| %s | %s | %d |" % (a, b, n))
        lines.append("")
    if alias_hits:
        lines.append("## Class-name aliases used\n")
        lines.append("| raw | layout key | rule | rows |")
        lines.append("|---|---|---|---:|")
        for (raw, cls, how), n in alias_hits.most_common(30):
            lines.append("| %s | %s | %s | %d |" % (raw, cls, how, n))
        lines.append("")
    # unresolved pool
    lines.append("## Unresolved pool (functions with no class)\n")
    lines.append("Total: **%d rows / %d functions**.\n"
                 % (stats["unresolved"], len(unresolved)))
    if unresolved:
        lines.append("| function | name | rows |")
        lines.append("|---|---|---:|")
        for fa, n in unresolved.most_common(30):
            lines.append("| 0x%06X | %s | %d |"
                         % (fa, sig_name.get(fa) or "", n))
        lines.append("")
    # before/after samples
    lines.append("## Before / after samples\n")
    samples = ["AudioSettings", "ConnectionClass", "FileClass",
               "TiberiumClass", "HouseClass", "ObjectTypeClass"]
    for cls in samples:
        e = sidecar["classes"].get(cls)
        if not e:
            continue
        all_offs = ", ".join("%s@%d" % (mm["name"], mm["off"])
                             for mm in e["members"][:14])
        lines.append("* **%s** %d -> %d bytes; added %d offsets: %s"
                     % (cls, e["existing_size"], e["computed_size"],
                        len(e["added_offsets"]),
                        ", ".join("0x%X" % o for o in e["added_offsets"][:24])
                        or "-"))
        lines.append("  - members: %s" % all_offs)
    lines.append("")
    lines.append("## Rules applied\n")
    for r in sidecar["meta"]["rules"]:
        lines.append("* %s" % r)
    lines.append("")
    text = "\n".join(lines) + "\n"
    if not dry:
        OUT_REPORT.write_text(text, encoding="utf-8")


if __name__ == "__main__":
    sys.exit(main())
