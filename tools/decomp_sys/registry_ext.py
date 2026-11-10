#!/usr/bin/env python3
"""registry_ext.py -- DECOMP-2 view over the DECOMP-1 registry.

Interface contract (parallel development):
  * DECOMP-1 owns tools/decomp_sys/registry.py + gen_hpp.py and builds
    .omo/decomp_sys/decomp_registry.json.  DECOMP-2 consumes that JSON; if a
    piece is missing there, documented fallbacks to the raw anchors fire and
    the gap is REPORTED (never silently invented).

Member resolution order for a receiver class R:
    1. decomp_registry['classes'][R]['members']          (merged authority)
    2. member_lookup[R] / member_lookup[R + 'Class']     (legacy alias)
    3. class_layouts[R] / class_layouts[R + 'Class']
Every restore records which source supplied it.
"""
import json
import os

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", ".."))
REG_JSON = os.path.join(ROOT, ".omo", "decomp_sys", "decomp_registry.json")
MEMBER_LOOKUP = os.path.join(ROOT, "tools", "member_lookup.json")
CLASS_LAYOUTS = os.path.join(ROOT, "tools", "class_layouts.json")
SIGNALS = os.path.join(ROOT, "signals.json")
VSA = os.path.join(ROOT, "anchors", "vtable_slot_authority.json")
IG_JSON = os.path.join(ROOT, "anchors", "insn_granularity_types.json")


def _j(path):
    with open(path, encoding="utf-8") as f:
        return json.load(f)


class Registry(object):
    _inst = None

    def __init__(self):
        self.reg = _j(REG_JSON)
        self._ml = None
        self._cl = None
        self._sig = None
        self._vsa = None
        self._g_by_addr = None
        self._ig = None          # (cls, off) -> {width, types, count}
        self._fn_by_name = None  # qualified name -> addr
        self.notes = []          # registry-gap reports

    @classmethod
    def get(cls):
        if cls._inst is None:
            cls._inst = Registry()
        return cls._inst

    # ------------------------------------------------------------ classes
    @property
    def classes(self):
        return self.reg["classes"]

    @property
    def functions(self):
        return self.reg["functions"]

    def class_keys(self, cls):
        """Lookup keys for a receiver class name (canon + legacy alias)."""
        keys = [cls]
        if cls + "Class" != cls:
            keys.append(cls + "Class")
        return keys

    _PLACEHOLDER = None

    @classmethod
    def _is_placeholder(cls, name):
        import re
        if cls._PLACEHOLDER is None:
            cls._PLACEHOLDER = re.compile(
                r"^(vtable\d*|vt_?\d+|.*_field_0x[0-9A-Fa-f]+.*|field_.*"
                r"|__pad.*|__align.*|align_.*|q[0-9A-F]{3}.*|u\d+_.*|"
                r"unknown\d*|tail_?.*)$")
        return bool((name or "") == "" or cls._PLACEHOLDER.match(name or ""))

    def member_at(self, cls, off, min_span=1, prefer="exact"):
        """Best member record covering byte offset `off`.

        prefer='exact' (scalar reads): exact-offset match dominates, then
            semantic name, then source priority, then width.
        prefer='span' (array restoration): semantic spanning members (e.g.
            member_lookup CellClass@0x7C sensorsOfHouses w48) beat exact
            placeholder hits (decomp_registry Cell@0x7C __pad_7C w4).

        Returns (member_dict, source) or (None, None).
        """
        cands = []

        def add(o, name, typ, width, srcp, prio):
            if o <= off < o + max(width, 1) and width >= min_span:
                cands.append({
                    "offset": o, "name": name, "type": typ, "width": width,
                    "spans": o != off, "_src": srcp, "_prio": prio,
                    "_semantic": 0 if self._is_placeholder(name) else 1,
                    "_exact": 1 if o == off else 0,
                })

        for k in self.class_keys(cls):
            rec = self.classes.get(k)
            if rec:
                for o_s, mm in rec.get("members", {}).items():
                    add(int(o_s), mm.get("name"), mm.get("type"),
                        int(mm.get("width") or 4), "decomp_registry:%s" % k, 3)
        if self._ml is None:
            self._ml = _j(MEMBER_LOOKUP)
        for k in self.class_keys(cls):
            grp = self._ml.get(k)
            if grp:
                for o_s, mm in grp.items():
                    add(int(o_s), mm.get("name"), mm.get("type"),
                        int(mm.get("size") or 4), "member_lookup:%s" % k, 2)
        if self._cl is None:
            self._cl = _j(CLASS_LAYOUTS)
        for k in self.class_keys(cls):
            lay = self._cl.get(k)
            if lay:
                for o_s, mm in (lay.get("offsets") or {}).items():
                    add(int(o_s), mm.get("ida_name"), mm.get("type"),
                        int(mm.get("size") or 4), "class_layouts:%s" % k, 1)
        if not cands:
            return (None, None)
        if prefer == "span":
            best = max(cands, key=lambda c: (c["_semantic"], c["_exact"],
                                             c["width"], c["_prio"]))
        else:
            # scalar reads: among equally-exact records prefer the one whose
            # width matches a single slot (|w-4|), so a 4B dword view does
            # not swallow 20B pads and corrupt hpp layout cursors
            best = max(cands, key=lambda c: (c["_exact"], c["_semantic"],
                                             c["_prio"], -abs(c["width"] - 4)))
        return ({k: v for k, v in best.items() if not k.startswith("_")},
                best["_src"])

    def member_offset_by_ida_name(self, cls, ida_name):
        """Reverse map: IDA til member name (e.g. 'Cell_field_0x38',
        '__pad_70', 'FileNameAllocated') -> (offset, record, source).

        Recognises offset-encoding names and falls back to exact name match.
        """
        import re
        m = re.search(r"0x([0-9A-Fa-f]+)", ida_name)
        if m:
            off = int(m.group(1), 16)
            rec, src = self.member_at(cls, off)
            if rec:
                return off, rec, src
        m = re.match(r"^__pad_?([0-9A-Fa-f]+)$", ida_name)
        if m:
            off = int(m.group(1), 16)
            rec, src = self.member_at(cls, off)
            if rec:
                return off, rec, src
        # exact-name scan (registry then member_lookup)
        for k in self.class_keys(cls):
            rec = self.classes.get(k)
            if rec:
                for o_s, mm in rec.get("members", {}).items():
                    if mm.get("name") == ida_name:
                        return int(o_s), {"offset": int(o_s), "name": ida_name,
                                          "type": mm.get("type"),
                                          "width": mm.get("width") or 4}, \
                            "decomp_registry:%s" % k
        if self._ml is None:
            self._ml = _j(MEMBER_LOOKUP)
        for k in self.class_keys(cls):
            grp = self._ml.get(k)
            if grp:
                for o_s, mm in grp.items():
                    if mm.get("name") == ida_name:
                        return int(o_s), {"offset": int(o_s),
                                          "name": ida_name,
                                          "type": mm.get("type"),
                                          "width": mm.get("size") or 4}, \
                            "member_lookup:%s" % k
        return None, None, None

    def member_offset_inherited(self, cls, ida_name):
        """R5: member_lookup parks inherited members on DERIVED classes
        with `inherited_from=<base>`; the base's own table misses them
        (planningPathIdx/unknownShort524/528 live on AircraftClass with
        inherited_from=FootClass).  Absolute offsets stand, so a name hit
        with inherited_from == cls resolves the base-class offset.

        Tier 2 (deep base chain, e.g. BuildingClass body referencing the
        ObjectClass-level `nextObject`): every derived class of the true
        owner parks the SAME absolute offset.  Accept only when ALL
        candidates agree (unambiguous name).

        Returns (offset, record, source) or (None, None, None).
        """
        if self._ml is None:
            self._ml = _j(MEMBER_LOOKUP)
        keys = set(self.class_keys(cls))
        agree = {}
        for grp_cls, grp in self._ml.items():
            for o_s, mm in grp.items():
                if mm.get("name") != ida_name or not mm.get("inherited_from"):
                    continue
                o = int(o_s)
                if mm.get("inherited_from") in keys:
                    # tier 1: parked on a derivative of THIS class
                    return o, {
                        "offset": o, "name": ida_name,
                        "type": mm.get("type"),
                        "width": mm.get("size") or 4,
                    }, "member_lookup_inherited:%s" % grp_cls
                agree.setdefault(o, []).append(grp_cls)
        if len(agree) == 1:
            o = next(iter(agree))
            return o, {
                "offset": o, "name": ida_name, "type": None,
                "width": 4,
            }, "member_lookup_inherited_agree:%dcls" % len(agree[o])
        return None, None, None

    def member_all_offsets(self, cls, name):
        """Every (offset, source) claiming this member name, across
        decomp_registry / member_lookup / class_layouts. Used for disasm-
        validated arbitration when the primary resolution disagrees with
        the binary."""
        outs = []
        if self._ml is None:
            self._ml = _j(MEMBER_LOOKUP)
        if self._cl is None:
            self._cl = _j(CLASS_LAYOUTS)
        for k in self.class_keys(cls):
            rec = self.classes.get(k)
            if rec:
                for o_s, mm in rec.get("members", {}).items():
                    if mm.get("name") == name:
                        outs.append((int(o_s), "decomp_registry:%s" % k,
                                     {"offset": int(o_s), "name": name,
                                      "type": mm.get("type"),
                                      "width": mm.get("width") or 4}))
            grp = self._ml.get(k)
            if grp:
                for o_s, mm in grp.items():
                    if mm.get("name") == name:
                        outs.append((int(o_s), "member_lookup:%s" % k,
                                     {"offset": int(o_s), "name": name,
                                      "type": mm.get("type"),
                                      "width": mm.get("size") or 4}))
            lay = self._cl.get(k)
            if lay:
                for o_s, mm in (lay.get("offsets") or {}).items():
                    if mm.get("ida_name") == name:
                        outs.append((int(o_s), "class_layouts:%s" % k,
                                     {"offset": int(o_s), "name": name,
                                      "type": mm.get("type"),
                                      "width": mm.get("size") or 4}))
        return outs

    # ------------------------------------------------------------ functions
    def function(self, addr):
        key = addr.lower()
        if key in self.functions:
            return self.functions[key]
        for a, v in self.functions.items():
            if a.lower() == key:
                return v
        # zero-padding variants: '0x00401940' vs '0x401940'
        try:
            norm = "0x%x" % int(key, 16)
        except ValueError:
            return None
        if norm in self.functions:
            return self.functions[norm]
        for a, v in self.functions.items():
            if a.lower() == norm:
                return v
        return None

    def function_by_name(self, qual_name):
        """('Owner::Method' or global name) -> (addr, registry record) or
        (None, None).  First address wins on ICF-folded duplicate names."""
        if self._fn_by_name is None:
            idx = {}
            for a, v in self.functions.items():
                nm = v.get("name")
                if nm:
                    idx.setdefault(nm, a)
            self._fn_by_name = idx
        a = self._fn_by_name.get(qual_name)
        return (a, self.functions.get(a)) if a else (None, None)

    # ------------------------------------------------------------ globals
    @property
    def globals_by_addr(self):
        if self._g_by_addr is None:
            gmap = {}
            for name, g in self.reg.get("globals", {}).items():
                a = g.get("addr")
                if isinstance(a, int):
                    a = "0x%x" % a
                if a:
                    gmap[a.lower()] = {"name": name, "type": g.get("type"),
                                       "type_src": g.get("type_src")}
            self._g_by_addr = gmap
        return self._g_by_addr

    def global_for_ida_name(self, ida_name):
        """'dword_AA0E18' -> registry global record or None."""
        m = None
        import re
        m = re.match(r"^(dword|word|byte|qword|flt|dbl|unk|stru|off)_[0-9A-Fa-f]+$",
                     ida_name)
        if not m:
            return None
        addr = "0x" + ida_name.split("_")[1]
        g = self.globals_by_addr.get(addr.lower())
        if g:
            prefix_type = {
                "dword": "unsigned int", "word": "unsigned short",
                "byte": "unsigned char", "qword": "__int64",
                "flt": "float", "dbl": "double", "unk": "unsigned char",
                "stru": None, "off": None,
            }
            if not g.get("type"):
                g = dict(g)
                g["type"] = prefix_type.get(m.group(1))
                g["type_src"] = "ida-prefix"
            return g
        return None

    # ------------------------------------------------------------ vtables
    @property
    def vsa(self):
        if self._vsa is None:
            self._vsa = _j(VSA)
        return self._vsa

    def vtable_slot(self, cls, slot):
        """(slot_name, proto) from vtable_slot_authority, or (None, None)."""
        for k in self.class_keys(cls):
            e = self.vsa.get(k)
            if not e:
                continue
            s = (e.get("slots") or {}).get(str(slot))
            if s:
                return s.get("name"), s.get("proto")
        return None, None

    # ------------------------------------------------------------ granularity
    def _ig_index(self):
        """Lazy (cls, off) -> {width, types, count} from IG M: entities."""
        if self._ig is not None:
            return self._ig
        idx = {}
        try:
            ig = _j(IG_JSON)
        except FileNotFoundError:
            self._ig = idx
            return idx
        fn_cls = {}
        for addr, f in self.functions.items():
            if f.get("cls"):
                fn_cls[addr.lower().replace("0x", "")] = f["cls"]
        for e in ig.get("evidence") or []:
            ent = e.get("ent") or ""
            if not ent.startswith("M:"):
                continue
            parts = ent.split(":")
            if len(parts) != 4 or parts[2] != "this":
                continue
            cls = fn_cls.get(parts[1].lower())
            if not cls:
                continue
            try:
                off = int(parts[3], 16)
            except ValueError:
                continue
            t0 = (e.get("types") or [""])[0]
            w = 1 if "char" in t0 else (2 if "short" in t0 else 4)
            rec = idx.setdefault((cls, off),
                                 {"width": 4, "types": set(), "count": 0})
            rec["types"].update(e.get("types") or [])
            rec["count"] += 1
            if w < rec["width"]:
                rec["width"] = w
        self._ig = idx
        return idx

    def ig_granularity(self, cls, off):
        """IG partial-register evidence for a member slot.

        Returns {'width':1|2, 'types':[...], 'count':N} or None.
        Checks cls and cls+'Class' aliases.
        """
        idx = self._ig_index()
        for k in self.class_keys(cls):
            rec = idx.get((k, off))
            if rec:
                return {"width": rec["width"],
                        "types": sorted(rec["types"]),
                        "count": rec["count"]}
        return None
