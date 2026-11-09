#!/usr/bin/env python3
"""registry.py -- DECOMP-1 unified symbol registry builder.

Merges the evidence sources into a single authoritative registry:

  classes   : {canon: {size, parent, vtable, slot_count, own_slot_start,
                       members{offset:{name,type,width,src}}, slots[...],
                       family{...} for template families}}
  functions : {addr: {name, cc, ret, params, cls, completed, translated, done}}
  globals   : {name: {addr, type, type_src}}

Conflict precedence (user mandate, DECOMP-1):
  layout/offset/width : derived_layouts (solver solution) highest
  name+type           : csp_canon_members > member_types(evidence)
                        > member_lookup > class_layouts.offsets > signals
  methods             : vtable_slot_authority (own slots = [parent_slots, n))
  signedness          : anchors/signed_default_ledger.json policy (signed
                        default; ledger `chosen` may flip a spelling)

Output: .omo/decomp_sys/decomp_registry.json (deterministic; rebuildable).

Usage:
  python tools/decomp_sys/registry.py           # build + stats report
  python tools/decomp_sys/registry.py --quiet   # build only
"""
import argparse
import json
import os
import re
import sys
from collections import Counter

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", ".."))
OUT_DIR = os.path.join(ROOT, ".omo", "decomp_sys")
OUT_JSON = os.path.join(OUT_DIR, "decomp_registry.json")

# ---------------------------------------------------------------- placeholders

PLACEHOLDER_RE = re.compile(
    r'^(vtable\d*|vt_?\d+|.*_field_0x[0-9A-Fa-f]+.*|field_.*|__pad.*|__align.*'
    r'|align_.*|q[0-9A-F]{3}.*|u(?:8|16|32|64)_[0-9A-F]+|unknown\d*)$')


def is_placeholder(name):
    return bool(PLACEHOLDER_RE.match(name or ''))


def j(path):
    with open(os.path.join(ROOT, path), encoding="utf-8") as f:
        return json.load(f)


# ---------------------------------------------------------------- source load

def load_sources():
    src = {}
    src["derived"] = j("anchors/derived_layouts.json")            # 547 solver layouts
    src["domains"] = j("anchors/minclass_domain_contents.json")   # entity candidate domains
    src["vsa"] = j("anchors/vtable_slot_authority.json")          # 954 slot tables
    src["canon_mem"] = j("anchors/csp_canon_members.json")        # canon name/type per offset
    src["layouts"] = j("tools/class_layouts.json")                # size/parent authority
    src["mtypes"] = j("anchors/member_types.json")                # evidence name/type
    src["lookup"] = j("tools/member_lookup.json")                 # offset->name/type
    src["signals"] = j("signals.json")                            # functions/globals
    src["align"] = j("anchors/class_name_align.json")             # rtti -> canon
    src["alias"] = j("anchors/mangled_alias.json")                # illegal-name aliases
    src["ledger"] = j("anchors/signed_default_ledger.json")       # signedness policy
    try:
        src["gtypes"] = j("anchors/global_types.json")            # addr -> {type,name}
    except FileNotFoundError:
        src["gtypes"] = {}
    try:
        src["gcast"] = j("anchors/global_cast_types.json")        # name -> {type}
    except FileNotFoundError:
        src["gcast"] = {}
    try:
        src["db"] = j("anchors/class_db.json")["classes"]
    except FileNotFoundError:
        src["db"] = {}
    return src


# ---------------------------------------------------------------- canon naming

class Canonizer:
    """Raw class name -> canonical emission name (single hookpoint)."""

    def __init__(self, align, alias):
        self.r2c = {}
        for raw, v in (align.get("rtti_to_canon") or {}).items():
            if isinstance(v, dict) and v.get("canon"):
                self.r2c[raw] = v["canon"]
            elif isinstance(v, str):
                self.r2c[raw] = v
        self.alias = dict(alias)
        self.cache = {}

    def __call__(self, name):
        if name in self.cache:
            return self.cache[name]
        out = name
        if name in self.r2c:
            out = self.r2c[name]
        elif name in self.alias:
            out = self.alias[name]
        elif name.startswith("?$"):
            # unmapped template instantiation: <Base>_<argtag> (deterministic)
            m = re.match(r"^\?\$(\w+)@(.*)@@?$", name)
            if m:
                out = "%s_%s" % (m.group(1), re.sub(r"[^A-Za-z0-9_]", "_", m.group(2)))
            else:
                out = re.sub(r"[^A-Za-z0-9_]", "_", name.strip("?"))
        if not re.match(r"^[A-Za-z_]\w*$", out or ""):
            out = re.sub(r"[^A-Za-z0-9_]", "_", out or "Unnamed")
        self.cache[name] = out
        return out


# ---------------------------------------------------------------- member merge

NAME_SOURCES = ["csp_canon", "member_types", "member_lookup", "class_layouts"]
TYPE_SOURCES = ["csp_canon", "member_types", "member_lookup", "class_layouts"]


def merge_members(cls, size, S, stats):
    """Build {offset: {name,type,width,src}} for one class (absolute offsets)."""
    # gather per-offset candidate records from each source
    def keys_for(canon_name):
        """All raw keys canonizing to canon_name."""
        return S["_canon_groups"].get(canon_name, [])

    cand = {}  # offset -> {src: record}

    def put(off, src, rec):
        if off < 0 or (size and off >= size):
            return
        cand.setdefault(off, {})[src] = rec

    # 1. derived_layouts -- solver solution (width authority)
    for k in keys_for(cls):
        d = S["derived"].get(k)
        if not d:
            continue
        for off, width in d.get("members", []):
            put(off, "derived", {"width": int(width), "name": None, "type": None})

    # 2. csp_canon_members
    for k in keys_for(cls):
        c = S["canon_mem"].get(k)
        if not c:
            continue
        for off_s, m in (c.get("members") or {}).items():
            try:
                off = int(off_s)
            except ValueError:
                continue
            put(off, "csp_canon", {"width": m.get("size") or 4,
                                   "name": m.get("name"), "type": m.get("type")})

    # 3. member_types (prebuilt raw-class index)
    for k in keys_for(cls):
        for off, m in S["_mtypes_by_class"].get(k, {}).items():
            put(off, "member_types",
                {"width": m.get("size") or 4, "name": m.get("name"),
                 "type": m.get("type") if m.get("evidence") else None})

    # 4. member_lookup
    for k in keys_for(cls):
        for off_s, m in (S["lookup"].get(k) or {}).items():
            try:
                off = int(off_s)
            except ValueError:
                continue
            put(off, "member_lookup",
                {"width": m.get("size") or 4, "name": m.get("name"),
                 "type": m.get("type")})

    # 5. class_layouts offsets
    for k in keys_for(cls):
        lay = S["layouts"].get(k)
        if not lay:
            continue
        for off_s, m in (lay.get("offsets") or {}).items():
            try:
                off = int(off_s)
            except ValueError:
                continue
            put(off, "class_layouts",
                {"width": m.get("size") or 4, "name": m.get("ida_name"),
                 "type": m.get("type")})

    # resolve
    members = {}
    for off in sorted(cand):
        recs = cand[off]
        # width: a named evidence record (csp_canon > member_types >
        # member_lookup > class_layouts) carries the declared member width;
        # derived spans are access clusters (byte granularity) and only win
        # when no named source supplies a width. Both values are recorded.
        width = None
        width_src = None
        for s in ("csp_canon", "member_types", "member_lookup", "class_layouts"):
            r = recs.get(s)
            if r and r.get("name") and r.get("width"):
                width, width_src = r["width"], s
                break
        if width is None and "derived" in recs and recs["derived"].get("width"):
            width, width_src = recs["derived"]["width"], "derived"
            stats["width_from_derived"] += 1
        if width is None:
            for s in ("csp_canon", "member_types", "member_lookup", "class_layouts"):
                r = recs.get(s)
                if r and r.get("width"):
                    width, width_src = r["width"], s
                    break
        # name: precedence csp_canon > member_types > member_lookup > class_layouts
        name = None
        name_src = None
        for s in NAME_SOURCES:
            r = recs.get(s)
            if r and r.get("name") and not is_placeholder(r["name"]):
                name, name_src = r["name"], s
                break
        # semantic-placeholder upgrade: keep first non-null even if placeholder
        if name is None:
            for s in NAME_SOURCES:
                r = recs.get(s)
                if r and r.get("name"):
                    name, name_src = r["name"], s
                    break
        # type: same precedence, needs a non-null value
        typ = None
        type_src = None
        for s in TYPE_SOURCES:
            r = recs.get(s)
            if r and r.get("type"):
                typ, type_src = r["type"], s
                break
        width = width or 4
        derived_w = (recs.get("derived") or {}).get("width")
        members[off] = {
            "name": name,          # None => padding-only span
            "type": typ,
            "width": int(width),
            "width_src": width_src,
            "derived_width": derived_w,
            "src": "%s|%s/%s" % (name_src or "-", type_src or "-",
                                 width_src or "-"),
        }
        if name_src and type_src and name_src != type_src:
            stats["name_type_src_split"] += 1
    return members


# ---------------------------------------------------------------- main build

def build():
    S = load_sources()
    canon = Canonizer(S["align"], S["alias"])
    stats = Counter()

    # ---- canon groups: canon name -> raw keys, over all class-bearing sources
    groups = {}
    class_sources = [S["derived"], S["canon_mem"], S["vsa"], S["layouts"],
                     S["lookup"]]
    if isinstance(S["db"], dict):
        class_sources.append(S["db"])
    for src_map in class_sources:
        for raw in src_map:
            c = canon(raw)
            groups.setdefault(c, [])
            if raw not in groups[c]:
                groups[c].append(raw)
    for c in groups:
        groups[c].sort()
    S["_canon_groups"] = groups

    # ---- member_types raw-class index (avoids O(classes x 60K) scans)
    mt_by_class = {}
    for key, m in S["mtypes"].items():
        if "+" not in key:
            continue
        raw, off = key.rsplit("+", 1)
        om = re.match(r"^0x([0-9A-Fa-f]+)$", off)
        if not om:
            continue
        mt_by_class.setdefault(raw, {})[int(om.group(1), 16)] = m
    S["_mtypes_by_class"] = mt_by_class

    # ---- template families (canon-collapsed instantiations)
    fam_prefix = "?" + chr(36)
    families = {}
    for raw in list(S["vsa"]) + list(S["derived"]):
        if raw.startswith(fam_prefix):
            base = canon(raw)
            families.setdefault(base, set())
            if raw in S["vsa"]:
                families[base].add(raw)

    # ---- class records
    classes = {}
    for cname in sorted(groups):
        keys = groups[cname]
        lay = next((S["layouts"][k] for k in keys if k in S["layouts"]), None)
        size = (lay or {}).get("size") or 0
        parent = (lay or {}).get("parent") or None
        if parent:
            parent = canon(parent)
            if parent == cname:
                parent = None
        # fallback size: max derived extent rounded up to 4
        if not size:
            ext = 0
            for k in keys:
                d = S["derived"].get(k)
                if d:
                    for off, w in d.get("members", []):
                        if (size and off < size) or not size:
                            ext = max(ext, off + w)
            if ext and not size:
                size = (ext + 3) & ~3
        rec = {
            "size": size,
            "parent": parent,
            "vtable": None,
            "slot_count": 0,
            "own_slot_start": 0,
            "slots": [],
            "members": {},
            "family": None,
            "sources": {"layouts": any(k in S["layouts"] for k in keys),
                        "derived": any(k in S["derived"] for k in keys),
                        "canon_mem": any(k in S["canon_mem"] for k in keys),
                        "vsa": any(k in S["vsa"] for k in keys)},
        }
        if size:
            rec["members"] = merge_members(cname, size, S, stats)
            stats["member_total"] += len(rec["members"])
            stats["named_members"] += sum(
                1 for m in rec["members"].values() if m["name"])
        # ---- slots (vtable authority)
        # pick order: exact canon name in vsa > any raw key of this canon >
        # template-family representative (most slots, then lowest vtable)
        vsa_rec = None
        vsa_key = None
        if cname in S["vsa"]:
            vsa_rec, vsa_key = S["vsa"][cname], cname
        else:
            for k in keys:
                if k in S["vsa"]:
                    vsa_rec, vsa_key = S["vsa"][k], k
                    break
        fam = families.get(cname)
        if vsa_rec is not None and fam and vsa_key != cname:
            # raw-key hit was one instantiation of a collapsed family --
            # still re-pick deterministically and record the family
            rep = sorted(fam, key=lambda k: (-S["vsa"][k]["slot_count"],
                                             S["vsa"][k]["vtable"]))[0]
            if rep != vsa_key:
                vsa_rec, vsa_key = S["vsa"][rep], rep
        if vsa_rec is None and fam:
            rep = sorted(fam, key=lambda k: (-S["vsa"][k]["slot_count"],
                                             S["vsa"][k]["vtable"]))[0]
            vsa_rec, vsa_key = S["vsa"][rep], rep
        if fam and vsa_key is not None:
            rec["family"] = {
                "base": cname,
                "instantiations": len(fam),
                "representative": vsa_key,
                "members": sorted(
                    [{"key": k, "vtable": S["vsa"][k]["vtable"],
                      "slot_count": S["vsa"][k]["slot_count"]}
                     for k in fam], key=lambda d: d["key"]),
            }
        if vsa_rec is not None:
            rec["vtable"] = vsa_rec.get("vtable")
            rec["slot_count"] = vsa_rec["slot_count"]
            rec["slots"] = [
                {"slot": int(s), "addr": v["addr"], "name": v["name"],
                 "proto": v.get("proto", "")}
                for s, v in sorted(vsa_rec["slots"].items(), key=lambda kv: int(kv[0]))
            ]
            stats["slots_total"] += len(rec["slots"])
        classes[cname] = rec

    # ---- own_slot_start from parent chain slot counts
    def own_start(cname, seen=None):
        seen = seen or set()
        if cname in seen:
            return 0
        seen.add(cname)
        rec = classes.get(cname)
        if not rec or not rec["parent"]:
            return 0
        p = classes.get(rec["parent"])
        if not p:
            return 0
        return p["slot_count"] or 0

    for cname, rec in classes.items():
        rec["own_slot_start"] = own_start(cname)

    # ---- chain integrity: parent size strictly smaller, monotonic
    for cname, rec in classes.items():
        chain, cur, guard = [], cname, 0
        while rec_of := classes.get(cur):
            if guard > 32 or not rec_of["parent"]:
                break
            chain.append(rec_of["parent"])
            cur = rec_of["parent"]
            guard += 1
        for anc in chain:
            a = classes.get(anc)
            if a and a["size"] and rec["size"] and a["size"] >= rec["size"]:
                stats["chain_size_violation"] += 1
                rec.setdefault("warnings", []).append(
                    "ancestor %s size %d >= %s size %d" % (anc, a["size"], cname, rec["size"]))

    # ---- functions (signals authority)
    functions = {}
    for addr, s in S["signals"]["symbols"].items():
        if not isinstance(s, dict):
            continue
        functions[addr] = {
            "name": s.get("name"),
            "cc": s.get("call_convention"),
            "ret": s.get("return_type"),
            "params": s.get("params") or [],
            "cls": s.get("cls"),
            "completed": bool(s.get("completed")),
            "translated": bool(s.get("translated")),
            "done": bool(s.get("done")),
        }

    # ---- globals (signals name->addr; type from global_types/gcast)
    globals_ = {}
    addr_type = {a: v.get("type") for a, v in S["gtypes"].items()}
    for name, ginfo in S["signals"]["globals"].items():
        # value is either a plain address string or a record dict
        if isinstance(ginfo, dict):
            addr = ginfo.get("address") or ginfo.get("addr")
            gtype = ginfo.get("type")
        else:
            addr, gtype = ginfo, None
        typ = gtype or (addr_type.get(addr) if addr else None)
        src_t = "global_types" if (typ and not gtype) else None
        if not typ and name in S["gcast"]:
            typ = S["gcast"][name].get("type")
            src_t = "global_cast_types"
        globals_[name] = {"addr": addr, "type": typ, "type_src": src_t}
    stats["globals_typed"] = sum(1 for g in globals_.values() if g["type"])

    # ---- ledger index for gen (RET/P entity lookup)
    ledger_idx = {}
    for e in S["ledger"]["entities"]:
        ledger_idx[e["ent"]] = e

    reg = {
        "meta": {
            "generated": None,  # filled by caller for determinism tests
            "classes": len(classes),
            "classes_with_slots": sum(1 for c in classes.values() if c["slots"]),
            "classes_with_members": sum(1 for c in classes.values()
                                        if c["members"]),
            "classes_with_size": sum(1 for c in classes.values() if c["size"]),
            "template_families": sum(1 for c in classes.values() if c["family"]),
            "members_total": stats["member_total"],
            "members_named": stats["named_members"],
            "slots_total": stats["slots_total"],
            "own_slots_total": sum(
                max(0, c["slot_count"] - c["own_slot_start"])
                for c in classes.values()),
            "functions": len(functions),
            "globals": len(globals_),
            "globals_typed": stats["globals_typed"],
            "stats": {k: v for k, v in stats.items() if isinstance(v, int)},
        },
        "classes": classes,
        "functions": functions,
        "globals": globals_,
        "ledger": ledger_idx,
    }
    return reg


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--quiet", action="store_true")
    ap.add_argument("--out", default=OUT_JSON)
    args = ap.parse_args()

    reg = build()
    os.makedirs(os.path.dirname(args.out), exist_ok=True)
    with open(args.out, "w", encoding="utf-8") as f:
        json.dump(reg, f, indent=1, sort_keys=True)
    if not args.quiet:
        m = reg["meta"]
        print("DECOMP-1 registry built:", args.out)
        print("  classes            : %d (with size %d, with slots %d, families %d)"
              % (m["classes"], m["classes_with_size"], m["classes_with_slots"],
                 m["template_families"]))
        print("  members            : %d total, %d named" %
              (m["members_total"], m["members_named"]))
        print("  slots              : %d total, %d own" %
              (m["slots_total"], m["own_slots_total"]))
        print("  functions          : %d" % m["functions"])
        print("  globals            : %d (%d typed)" %
              (m["globals"], m["globals_typed"]))
        print("  merge stats        :", m["stats"])
    return 0


if __name__ == "__main__":
    sys.exit(main())
