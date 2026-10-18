#!/usr/bin/env python3
"""X73 Fix1 step 2: surgical carrier virtualizer for the 15 pad0-consistent
zero-virtual carriers in src/csp_canon/classes.hpp.

Per class (flat carrier, `void* vtable1; // 0x0` member):
  1. slots = anchors/vtable_authority.json primary slot table (binary order)
  2. carrier method lines matched by `// 0x<RVA>` comment (consume-once) ->
     `virtual ` + decl verbatim, moved into the slot-ordered block
  3. unmatched slots -> neutral placeholder `virtual void vt_slot_N();`
     (X72 precedent; sig-unresolved noted)
  4. dtor slot (signals name matches dtor vocab) -> comment line only (no
     `= default`: keeps the class vtable un-emitted -> inert in the rebuilt
     exe; binary slot position recorded)
  5. vtable1 member line removed (the compiler vptr takes the slot)
Everything else verbatim. Dry-run default; --apply writes; ledger JSON.

Usage: python tools/csp_export/x73_carrier_virt.py [--apply] [--limit N]
"""
import argparse
import json
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
AUTH = json.loads((ROOT / "anchors" / "vtable_authority.json").read_text(encoding="utf-8"))["classes"]
SIG = json.loads((ROOT / "signals.json").read_text(encoding="utf-8"))["symbols"]
CLASSES = [
    "Animate", "BlitTransXlatAlpha_ushort", "CNetUtilEventSink", "ConnManClass",
    "CreateTeamCommand", "DynamicVectorClass_uint", "FreeForAll", "MSEngine",
    "MSFrameAnim", "MultiplayerBattle", "NullModemConnClass", "ScorePrintClass",
    "TaskForceClass", "TextLabelClass", "VectorClass_ushort",
]
HPP = ROOT / "src" / "csp_canon" / "classes.hpp"
LEDGER = ROOT / ".omo" / "evidence" / "optimization" / "x73" / "x73_carrier_ledger.json"

CLS_RE = re.compile(r"^\s*class\s+([A-Za-z_]\w*)(\s*:\s*([^{]+))?\s*\{\s*$")
RVA_CMT = re.compile(r"//\s*0x([0-9A-Fa-f]{6,8})")
METH_RE = re.compile(r"^    (?!class\b|char __pad|char __tail|void\* vtable1|//)([A-Za-z_][^;]*;\s*//\s*0x[0-9A-Fa-f]{6,8}.*)$")
DTOR_VOCAB = re.compile(r"(::~|::DTOR|::[dd]?[Dd]tor|Destr|deleting destructor|scalar deleting)", re.I)
PH_NAME = re.compile(r"^(?:m_\d+|__pad_)")


def norm(a):
    return "0x%X" % int(str(a), 16)


def sig_name(rva):
    e = SIG.get(rva) or SIG.get(rva.lower())
    if isinstance(e, dict):
        return e.get("name") or ""
    if isinstance(e, str):
        return e
    return ""


def locate(lines, cls):
    for i, l in enumerate(lines):
        m = CLS_RE.match(l)
        if not m or m.group(1) != cls:
            continue
        depth = 1
        k = i + 1
        while k < len(lines) and depth > 0:
            depth += lines[k].count("{") - lines[k].count("}")
            if depth <= 0:
                return i, k
            k += 1
    return None


def build_class_plan(cls, lines, start, end):
    arec = AUTH.get(cls) or {}
    slots = arec.get("slots") or []
    if not slots:
        return None, "no-authority-slots"
    # vtable1 member line
    vt1 = [i for i in range(start + 1, end)
           if re.match(r"^\s*void\* vtable1;\s*//\s*0x0\s*$", lines[i])]
    if len(vt1) != 1:
        return None, "vtable1-member-not-unique(%d)" % len(vt1)
    # bases guard
    if CLS_RE.match(lines[start]).group(3):
        return None, "has-bases"
    # method lines with RVA comments (candidates for slot binding)
    meths = {}
    others = []
    for i in range(start + 1, end):
        m = METH_RE.match(lines[i])
        if m:
            rv = RVA_CMT.search(lines[i])
            meths.setdefault(norm(rv.group(1)), []).append(i)
        else:
            others.append(i)
    # build slot-ordered block
    vblock = []
    consumed = set()
    unmatched_named = 0
    for s in slots:
        n = s["slot"]
        rva = norm(s["func"])
        nm = sig_name(rva)
        is_dtor = bool(DTOR_VOCAB.search(nm or ""))
        cands = [i for i in meths.get(rva, []) if i not in consumed]
        if cands:
            i = cands[0]
            consumed.add(i)
            line = lines[i]
            # virtual prefix (keep indent + trailing comment verbatim)
            line = re.sub(r"^    ", "    virtual ", line, count=1)
            vblock.append((line, "moved-method"))
        elif is_dtor:
            vblock.append(("    // X73: slot %d (%s) = dtor slot (%s) — compiler-generated when polymorphic; no declaration"
                           % (n, rva, nm[:60]), "dtor-comment"))
        else:
            sig = s.get("sig")
            ret, params = "void", ""
            if sig:
                ret = {"_DWORD": "unsigned int", "_WORD": "unsigned short",
                       "_BYTE": "unsigned char", "_QWORD": "unsigned long long",
                       "BOOL": "BOOL", "int": "int", "char": "char",
                       "void": "void"}.get(str(sig.get("ret")), "void*")
                ps = sig.get("params") or []
                pmap = lambda p: {"_DWORD": "unsigned int", "_WORD": "unsigned short",
                                  "_BYTE": "unsigned char", "int": "int",
                                  "char": "char"}.get(str(p), "void*")
                params = ", ".join(pmap(p) for p in ps)
            vblock.append(("    virtual %s vt_slot_%d(%s);  // X73: slot %d (%s) unresolved%s"
                           % (ret, n, params, n, rva,
                              (" name=" + nm[:48]) if nm else ""), "placeholder"))
    leftover_methods = [i for idxs in meths.values() for i in idxs if i not in consumed]
    return {
        "vt1": vt1[0], "vblock": vblock, "consumed": consumed,
        "leftover_methods": leftover_methods, "others": others,
        "n_slots": len(slots),
    }, None


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--apply", action="store_true")
    ap.add_argument("--limit", type=int, default=0)
    args = ap.parse_args()

    raw = HPP.read_text(encoding="utf-8", errors="replace")
    lines = raw.split("\n")
    ledger = []
    todo = CLASSES[: args.limit] if args.limit else CLASSES
    for cls in todo:
        loc = locate(lines, cls)
        if not loc:
            ledger.append({"class": cls, "status": "not-found"})
            continue
        start, end = loc
        plan, why = build_class_plan(cls, lines, start, end)
        if plan is None:
            ledger.append({"class": cls, "status": "banked:" + why})
            continue
        # rebuild the body: [start] public:? virtual-block + non-consumed lines - vt1
        body = [lines[i] for i in range(start + 1, end)]
        keep = []
        for i in range(start + 1, end):
            if i == plan["vt1"]:
                continue
            if i in plan["consumed"]:
                continue
            keep.append(lines[i])
        newbody = ["public:"] + [l for l, _ in plan["vblock"]] + keep
        out = lines[:start + 1] + newbody + [lines[end]] + lines[end + 1:]
        delta = len(out) - len(lines)
        ledger.append({
            "class": cls, "status": "planned", "lines": [start + 1, end + 1],
            "slots": plan["n_slots"],
            "moved": len([1 for _, k in plan["vblock"] if k == "moved-method"]),
            "placeholders": len([1 for _, k in plan["vblock"] if k == "placeholder"]),
            "dtor_comments": len([1 for _, k in plan["vblock"] if k == "dtor-comment"]),
            "leftover_methods": len(plan["leftover_methods"]),
            "line_delta": delta,
            "vblock": [l.strip()[:110] for l, _ in plan["vblock"][:6]],
        })
        lines = out

    print("planned:", sum(1 for r in ledger if r["status"] == "planned"), "/", len(todo))
    for r in ledger:
        if r["status"] != "planned":
            print("  ", r["class"], r["status"])
    for r in ledger:
        if r["status"] == "planned":
            print("  %-28s slots=%-3d moved=%-2d ph=%-3d dtor=%d leftover=%d delta=%+d"
                  % (r["class"], r["slots"], r["moved"], r["placeholders"],
                     r["dtor_comments"], r["leftover_methods"], r["line_delta"]))
    if args.apply:
        HPP.write_text("\n".join(lines), encoding="utf-8", newline="\n")
        print("APPLIED ->", HPP)
    LEDGER.write_text(json.dumps(ledger, indent=1), encoding="utf-8")


if __name__ == "__main__":
    main()
