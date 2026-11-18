"""ig-fix static verification: 30 arbitrated ledger rows, replayed against the
regenerated IG evidence (anchors/insn_granularity_types.json).

Layers (deterministic stratification, no heuristics):
  P1a: MR domain truth = 'bool'          -> 10 rows (sorted first)
  P1b: MR domain truth = 'char[N]'       -> 10 rows (sorted first)
  P2 : cluster entity is M-base fold product (all its IG events originate from
       an M:-prefixed base entity in full.json) -> 10 rows (sorted first)

PASS criteria:
  P1 rows: fixed IG domain (new evidence types) contains the MR-domain token
           -> MR∩IG join non-empty -> arbitration no longer needed
  P2 rows: entity absent from new evidence (fold dropped) -> phantom resolved
"""
import json, collections

LEDGER = r"D:\RA2YR_ReSource\.omo\solve_cache\strict\dc3e1e6fc9492eda\minclass_conflict_resolution.json"
NEW_IG = r"D:\RA2YR_ReSource\anchors\insn_granularity_types.json"
FULL = r"D:\RA2YR_ReSource\.omo\ffl9\full.json"

led = json.load(open(LEDGER))
arb = [x for x in led if x.get("status") == "arbitrated_mr_over_ig"]

new_ig = {}
for x in json.load(open(NEW_IG))["evidence"]:
    new_ig[x["ent"]] = set(x["types"])

# replay full.json: which M:-form clusters are fold products?
evs = json.load(open(FULL))["events"]
fold_events = collections.defaultdict(int)
t_events = collections.defaultdict(int)
for e in evs:
    E, off = e[2], e[3]
    p = E.split(":")
    if p[0] == "M":
        m = int(p[3], 16) + off
        if m > 0:
            fold_events["M:%s:this:0x%X" % (p[1], m)] += 1
    elif p[0] == "T":
        if off > 0:
            t_events["M:%s:this:0x%X" % (p[1], off)] += 1

def is_fold_product(ent):
    return fold_events.get(ent, 0) > 0 and t_events.get(ent, 0) == 0

p1a, p1b, p2 = [], [], []
for r in arb:
    mrd = set(r["family_domains"].get("MR") or [])
    ent = r["cluster"]
    if mrd == {"bool"}:
        p1a.append(r)
    elif mrd and all(t.startswith("char[") for t in mrd) and len(mrd) == 1:
        p1b.append(r)
    elif is_fold_product(ent):
        p2.append(r)
p1a.sort(key=lambda r: r["cluster"]); p1b.sort(key=lambda r: r["cluster"]); p2.sort(key=lambda r: r["cluster"])

sel = [("P1a bool", p1a[:10]), ("P1b char[N]", p1b[:10]), ("P2 fold", p2[:10])]
print("layer pools: bool=%d charN=%d fold=%d (of %d arbitrated)" % (len(p1a), len(p1b), len(p2), len(arb)))
print()

rows = []
npass = 0
for name, rs in sel:
    for r in rs:
        ent = r["cluster"]
        mrd = r["family_domains"].get("MR") or []
        old_ig = r["family_domains"].get("IG") or []
        new = new_ig.get(ent)
        if name.startswith("P1"):
            mrtok = mrd[0]
            ok = new is not None and mrtok in new
            verdict = "PASS" if ok else "FAIL"
            detail = ("IG[%d] contains %s" % (len(new), mrtok)) if new else "entity ABSENT"
        else:
            ok = new is None
            verdict = "PASS" if ok else "FAIL"
            detail = "entity removed (was fold M+%s events)" % fold_events.get(ent, "?") if ok \
                else "STILL PRESENT with %d types" % len(new)
        npass += ok
        rows.append((name, ent, "|".join(mrd), "|".join(old_ig), detail, verdict))

print("%-12s %-28s %-14s %-22s %-34s %s" % ("layer", "cluster", "MR dom", "IG dom (pre-fix)", "post-fix check", "verdict"))
print("-" * 140)
for r in rows:
    print("%-12s %-28s %-14s %-22s %-34s %s" % r)
print()
print("PASS %d / %d" % (npass, len(rows)))
json.dump(rows, open(r"D:\RA2YR_ReSource\.omo\agents\bm\ig_fix_verify30.json", "w"), indent=1)
print("[out] .omo/agents/bm/ig_fix_verify30.json")
