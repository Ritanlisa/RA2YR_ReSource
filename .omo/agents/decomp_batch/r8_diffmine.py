#!/usr/bin/env python3
"""r8_diffmine.py -- R8 pathology deep-mine over the fresh NG census.

For every census function with saved orig_/ours_ artifacts:
  * normalize both sides with diffasm.Side (same normalization as the verdict)
  * align the canon sequences with difflib
  * record: instruction counts, prologue frame size, pushes (callee-saved),
    opcode multiset delta, aligned diff classes (subst/ins/del), first diff
Aggregates into r8_diffmine.json + prints the top families.
"""
import collections
import glob
import json
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", "..", ".."))
sys.path.insert(0, os.path.join(ROOT, "tools", "decomp_sys"))
sys.path.insert(0, ROOT)

from tools.codegen_match import diffasm as dmod  # noqa: E402

CENSUS = os.path.join(ROOT, ".omo", "decomp_batch", "r8_ng_census")


def mnem(dis):
    return dis.split()[0] if dis else ""


def frame_size(insns):
    for i in insns[:6]:
        m = re.match(r"^sub esp, (0x[0-9a-f]+|\d+)$", i["disasm"])
        if m:
            return int(m.group(1), 0)
    return 0


def pushes(insns):
    out = []
    for i in insns[:12]:
        m = re.match(r"^push (\w+)$", i["disasm"])
        if m:
            out.append(m.group(1))
    return out


def opbag(insns):
    return collections.Counter(mnem(i["disasm"]) for i in insns)


def canon_key(i):
    return i["canon"]


def load_pair(partdir, addr):
    tag = addr[2:].upper()
    oa = os.path.join(partdir, "orig_%s.json" % tag)
    sa = os.path.join(partdir, "ours_%s.json" % tag)
    if not (os.path.exists(oa) and os.path.exists(sa)):
        return None
    so, _ = dmod.load_orig_side(oa)
    sb, _ = dmod.load_obj_side(sa)
    return so.normalize(), sb.normalize()


def mine():
    verdicts = json.load(open(os.path.join(HERE, "r8_ng_census_verdicts.json"),
                              encoding="utf-8"))
    rows = {}
    for partdir in sorted(glob.glob(os.path.join(CENSUS, "p*", "part_*"))):
        for addr, v in verdicts.items():
            if v["verdict"] not in ("MISMATCH", "MATCH"):
                continue
            if not os.path.exists(os.path.join(partdir,
                                               "orig_%s.json" % addr[2:].upper())):
                continue
            pair = load_pair(partdir, addr)
            if pair is None:
                continue
            a, b = pair
            import difflib
            sm = difflib.SequenceMatcher(
                None, [canon_key(x) for x in a], [canon_key(x) for x in b],
                autojunk=False)
            subst, ins, dele, moves = [], [], [], 0
            for tag, i1, i2, j1, j2 in sm.get_opcodes():
                if tag == "replace":
                    for k in range(min(i2 - i1, j2 - j1)):
                        subst.append((a[i1 + k]["disasm"], b[j1 + k]["disasm"]))
                    if i2 - i1 > j2 - j1:
                        dele.extend(x["disasm"] for x in a[j1 + k + 1:i2])
                    elif j2 - j1 > i2 - i1:
                        ins.extend(x["disasm"] for x in b[i1 + k + 1:j2])
                elif tag == "insert":
                    ins.extend(x["disasm"] for x in b[j1:j2])
                elif tag == "delete":
                    dele.extend(x["disasm"] for x in a[i1:i2])
                elif tag == "equal":
                    moves += i2 - i1
            oa, ob = opbag(a), opbag(b)
            opdelta = {k: (oa.get(k, 0), ob.get(k, 0))
                       for k in set(oa) | set(ob) if oa.get(k, 0) != ob.get(k, 0)}
            rows[addr] = {
                "name": v.get("name"),
                "pathology": v.get("pathology"),
                "orig_n": len(a), "ours_n": len(b),
                "orig_size": v.get("orig_size"), "ours_size": v.get("ours_size"),
                "frame": [frame_size(a), frame_size(b)],
                "pushes": [pushes(a), pushes(b)],
                "opdelta": opdelta,
                "n_subst": len(subst), "n_ins": len(ins), "n_del": len(dele),
                "first_subst": subst[0] if subst else None,
                "ins_sample": ins[:6], "del_sample": dele[:6],
            }
    with open(os.path.join(HERE, "r8_diffmine.json"), "w",
              encoding="utf-8") as f:
        json.dump(rows, f, indent=1, ensure_ascii=False)

    # ---- aggregates
    mism = {k: v for k, v in rows.items() if v["pathology"]}
    print("mined %d rows (%d mismatch)" % (len(rows), len(mism)))
    print("\n== op-delta signatures (orig_missing/ours_extra), top 25 ==")
    sig = collections.Counter()
    for v in mism.values():
        missing = tuple(sorted(k for k, (o, b) in v["opdelta"].items() if o > b))
        extra = tuple(sorted(k for k, (o, b) in v["opdelta"].items() if b > o))
        sig[(missing, extra)] += 1
    for (missing, extra), n in sig.most_common(25):
        print("  %3d  missing=%s extra=%s" % (n, list(missing), list(extra)))

    print("\n== frame size deltas ==")
    fr = collections.Counter()
    for v in mism.values():
        fr[tuple(v["frame"])] += 1
    for k, n in fr.most_common(15):
        print("  %3d  frame orig=0x%x ours=0x%x" % (n, k[0], k[1]))

    print("\n== push-set deltas ==")
    pu = collections.Counter()
    for v in mism.values():
        pa = tuple(x for x in v["pushes"][0] if x in
                   ("ebx", "esi", "edi", "ebp"))
        pb = tuple(x for x in v["pushes"][1] if x in
                   ("ebx", "esi", "edi", "ebp"))
        pu[(pa, pb)] += 1
    for k, n in pu.most_common(12):
        print("  %3d  orig=%s ours=%s" % (n, list(k[0]), list(k[1])))

    print("\n== size delta distribution ==")
    sd = collections.Counter()
    for v in mism.values():
        sd[(v["ours_size"] or 0) - (v["orig_size"] or 0)] += 1
    for k, n in sorted(sd.items(), key=lambda x: -x[1])[:15]:
        print("  %3d  ours-orig=%+d B" % (n, k))

    print("\n== first substitution families ==")
    fam = collections.Counter()
    for v in mism.values():
        if not v["first_subst"]:
            continue
        o, b = v["first_subst"]
        mo, mb = mnem(o), mnem(b)
        key = (mo, mb)
        fam[key] += 1
    for k, n in fam.most_common(20):
        print("  %3d  %s -> %s" % (n, k[0], k[1]))


if __name__ == "__main__":
    mine()
