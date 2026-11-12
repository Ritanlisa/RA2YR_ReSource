"""W-series report statistics (READ-ONLY).

Companion to w_census.py. Produces every number quoted in report_w_series.md
from the predecessor's artifacts only:
  - w_census_rows.json   (3,746 NG rows, per-row first-diff class + flag counts)
  - .omo/codegen_match/status.json  (ledger, for stale-row provenance)
  - the on-disk orig_/ours_ artifacts referenced by each row (part_dir)
  - anchors/signed_default_ledger.json (W4 grain review)
  - tools/codegen_match/diffasm.py (D_RELOC taxonomy; imported, not modified)

No writes, no batch_run, no ledger mutation.
"""
import collections
import json
import os
import re
import struct
import sys

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", "..", ".."))
OUT = os.path.join(ROOT, ".omo", "agents", "decomp_batch")
sys.path.insert(0, os.path.join(ROOT, "tools", "codegen_match"))

import diffasm as dm  # noqa: E402

EXE = r"D:\RA2MD\gamemd.exe"
ROWS = json.load(open(os.path.join(OUT, "w_census_rows.json"), encoding="utf-8"))


def dims(r):
    return {k for k, v in (r.get("flags") or {}).items() if v}


def load_pair(r):
    h = r["addr"][2:].upper()
    d = os.path.join(ROOT, r["part_dir"])
    o = json.load(open(os.path.join(d, "orig_%s.json" % h), encoding="utf-8"))
    b = json.load(open(os.path.join(d, "ours_%s.json" % h), encoding="utf-8"))
    return o, b


def sec(name):
    print("\n" + "=" * 78)
    print(name)
    print("=" * 78)


def main():
    sec("0. provenance")
    print("rows", len(ROWS))
    print("cls", collections.Counter(r.get("cls") for r in ROWS).most_common())
    av = collections.Counter(r.get("artifact_verdict") for r in ROWS)
    print("artifact verdict", av.most_common())
    print("stale (artifact MATCH) by cls",
          collections.Counter(r["cls"] for r in ROWS
                              if r.get("artifact_verdict") == "MATCH").most_common())
    print("stale by root",
          collections.Counter(r.get("root") for r in ROWS
                              if r.get("artifact_verdict") == "MATCH").most_common())
    print("roots", collections.Counter(str(r.get("root")) for r in ROWS).most_common(12))
    print("pathology", collections.Counter(str(r.get("pathology")) for r in ROWS).most_common())

    sec("1. flag-dimension multiplicity")
    mult = collections.Counter(len(dims(r)) for r in ROWS)
    print("dims per row", sorted(mult.items()))
    pure = collections.Counter()
    for r in ROWS:
        d = dims(r)
        if len(d) == 1:
            pure[next(iter(d))] += 1
    print("pure (single-dim) rows:")
    for k, n in pure.most_common():
        print("   %-14s %d" % (k, n))
    print("   total pure", sum(pure.values()))
    W = {"W1_TYPE", "W2_WIDTH", "W4_SIGNED"}
    wrows = [r for r in ROWS if dims(r) & W]
    print("rows with any W flag", len(wrows))
    print("   pure single W", sum(1 for r in wrows if len(dims(r)) == 1))
    print("   W-only multi", sum(1 for r in wrows if len(dims(r)) >= 2 and dims(r) <= W))
    print("   W + non-W dims", sum(1 for r in wrows if dims(r) - W))

    sec("2. per-class detail categories")
    def cats(cls, fn):
        c = collections.Counter()
        for r in ROWS:
            if r.get("cls") != cls:
                continue
            c[fn(r.get("detail") or "")] += 1
        return c
    print("W1:", dict(cats("W1_TYPE", lambda d:
                           "lea<->mov" if ("lea" in d and "mov" in d) else
                           "operand-kind" if "operand-kind" in d else
                           "deref-level" if "memcount" in d else
                           "element-scale" if "scale" in d else "other")))
    print("W2:", dict(cats("W2_WIDTH", lambda d:
                           "reg-width" if "regw" in d else
                           "width-ext" if "width-ext" in d else
                           "mem-other" if "mem" in d else "other")))
    c2 = collections.Counter()
    for r in ROWS:
        if r.get("cls") != "W2_WIDTH":
            continue
        m = re.search(r"mem (\d)->(\d)", r.get("detail") or "")
        if m:
            c2["mem %s->%s" % (m.group(1), m.group(2))] += 1
    print("W2 mem directions:", c2.most_common())
    print("W4:", dict(cats("W4_SIGNED", lambda d:
                           "jcc signed->unsigned" if d.startswith("jcc") else
                           "shr<->sar" if "sar" in d else "other")))
    print("D_IMM (all):", dict(cats("D_IMM", lambda d: "esp-frame" if "esp" in d else "other")))
    print("D_RET_ARITY:", dict(cats("D_RET_ARITY", lambda d:
                                    "ours-missing" if "''" in d else "both-nonzero")))
    print("R_STRUCTURAL:", dict(cats("R_STRUCTURAL", lambda d:
                                     "insert/delete" if "insert/delete" in d else d[:24])))

    sec("3. D_RELOC taxonomy via diffasm normalization (555 rows)")
    fm, gm = dm._load_maps()
    dranges = dm._data_ranges_from_exe(EXE)

    def mk(art):
        return {x["off"]: {"type": x.get("type"),
                           "key": x.get("sym_key") or x.get("sym")}
                for x in (art.get("relocs") or [])}

    tax = collections.Counter()
    ex = {}
    nodiff = 0
    for r in ROWS:
        if r.get("cls") != "D_RELOC":
            continue
        o, b = load_pair(r)
        so = dm.Side("orig", bytes.fromhex(o["bytes_hex"]), 0, o["size"], "orig",
                     mk(o), fm, gm, dranges)
        sb = dm.Side("obj", bytes.fromhex(b["bytes_hex"]), 0, b["size"], "obj",
                     mk(b), fm, gm, dranges)
        ao, ab = so.normalize(), sb.normalize()
        hit = False
        for i in range(min(len(ao), len(ab))):
            if not dm.Side.masked_equal(ao[i], ab[i]):
                hit = True
                co, cb = ao[i]["canon"], ab[i]["canon"]
                if "DATA:DATA:" in cb or re.search(r"DATA:0x[0-9A-Fa-f]*DATA:", cb):
                    k = "canon_replace_corruption"
                elif "_real@" in cb or "_real@" in str(list(mk(b).values())):
                    k = "fp_literal_symbol_key"
                elif "DATA:" in co and "DATA:" in cb:
                    k = "symbol_name_map"
                else:
                    k = "genuine_code_diff"
                tax[k] += 1
                ex.setdefault(k, (r["addr"], r.get("name"), co, cb))
                break
        if not hit:
            nodiff += 1
    for k, n in tax.most_common():
        print("  %-26s %d" % (k, n))
        print("      e.g.", ex[k])
    print("  %-26s %d" % ("no canonical diff (already MATCH)", nodiff))

    sec("4. FP constant families (D_CONST_FOLD / D_CONST_FP)")
    def consts(cls):
        op1 = collections.Counter()
        op2 = collections.Counter()
        n = 0
        for r in ROWS:
            if r.get("cls") != cls:
                continue
            o, _b = load_pair(r)
            bs = bytes.fromhex(o["bytes_hex"])
            trio = []
            for i in range(len(bs) - 6):
                if bs[i:i + 2] in (b"\xdd\x05", b"\xdd\x1d", b"\xdc\x0d", b"\xdc\x35"):
                    trio.append(struct.unpack_from("<I", bs, i + 2)[0])
            if len(trio) >= 3:
                op1[trio[0]] += 1
                op2[trio[1]] += 1
                n += 1
        return n, op1, op2
    for cls in ("D_CONST_FOLD", "D_CONST_FP"):
        n, o1, o2 = consts(cls)
        print("%s parsed %d rows; distinct op1 %d, distinct op2 %d"
              % (cls, n, len(o1), len(o2)))
        print("   op2 top:", [(hex(k), v) for k, v in o2.most_common(4)])
    # inlined probe result (era cl, /O2 /Gy[/Op]) recorded in the report
    print("era-cl probe (temp dir): plain /O2 -> fmul[1/60]; /Op -> fdiv[60.0];")
    print("literal*literal folds under BOTH -> FOLD family needs a symbol, not /Op.")

    sec("5. W4 grain: ledger coverage + CW4 trial yield")
    led = json.load(open(os.path.join(ROOT, "anchors", "signed_default_ledger.json"),
                         encoding="utf-8"))["entities"]
    by_fn = collections.defaultdict(list)
    for e in led:
        for t in e["ent"].split(":")[1:]:
            if re.fullmatch(r"[0-9A-Fa-f]{5,8}", t):
                by_fn[int(t, 16)].append(e)
                break
    print("ledger entities %d over %d functions" % (len(led), len(by_fn)))
    print("kind x flipped:",
          dict(collections.Counter((e["ent"].split(":")[0], e["chosen"] == e["alt"])
                                   for e in led)))
    w4first = [r for r in ROWS if r.get("cls") == "W4_SIGNED"]
    w4any = [r for r in ROWS if dims(r) & {"W4_SIGNED"}]
    for name, grp in (("W4-first (22)", w4first), ("W4-any (166)", w4any)):
        with_ents = sum(1 for r in grp if by_fn.get(int(r["addr"], 16)))
        nent = sum(len(by_fn.get(int(r["addr"], 16)) or []) for r in grp)
        print("%s: rows with ledger ents %d/%d, ents %d, chosen==alt %d"
              % (name, with_ents, len(grp), nent,
                 sum(1 for r in grp for e in (by_fn.get(int(r["addr"], 16)) or [])
                     if e["chosen"] == e["alt"])))
    cw4 = [json.loads(l) for l in open(os.path.join(OUT, "cw4_results.jsonl"),
                                       encoding="utf-8")]
    sig = [r for r in cw4 if any(v.get("vid") == "V_MICRO_SIGNED_CMP"
                                 for v in (r.get("variants") or []))]
    res = collections.Counter()
    for r in sig:
        for v in r["variants"]:
            if v["vid"] == "V_MICRO_SIGNED_CMP":
                res[v.get("result")] += 1
    print("CW4 V_MICRO_SIGNED_CMP tried %d funcs: %s" % (len(sig), dict(res)))
    print("   MATCH:", [(r["addr"], r["name"]) for r in sig
                        if any(v["vid"] == "V_MICRO_SIGNED_CMP"
                               and v.get("result") == "MATCH"
                               for v in r["variants"])])

    sec("6. bucket x pathology")
    for cls in ["D_RELOC", "D_CONST_FOLD", "D_CONST_FP", "D_IMM", "D_RET_ARITY",
                "W1_TYPE", "W2_WIDTH", "W4_SIGNED", "R_BRANCH", "R_REGALLOC",
                "R_STRUCTURAL"]:
        sub = [r for r in ROWS if r.get("cls") == cls]
        print("  %-13s n=%-5d %s" % (cls, len(sub),
              collections.Counter(r.get("pathology") for r in sub).most_common(4)))


if __name__ == "__main__":
    main()
