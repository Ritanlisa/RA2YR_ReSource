#!/usr/bin/env python3
"""Generate audit tables from samples.json + manual verdicts."""
import json, os, collections

HERE = os.path.dirname(__file__)
d = json.load(open(os.path.join(HERE, "samples.json"), encoding="utf-8"))

# manual five-dimension verdicts: a=semantics, b=cc/signedness, c=readability,
# d=rule-compliance, e=red-flags. P=pass, W=warn, F=fail.
V = {
    "0x401940": ("P", "P", "W", "P", "W", "dword read coherent; GetMember06 placeholder; ledger class ObjectClass vs emitted RawFileClass"),
    "0x4ca160": ("W", "P", "F", "F", "W", "raw this+22 offset, no member; R4 x2"),
    "0x50e370": ("W", "P", "F", "F", "W", "raw this+12 offset; R4 x2"),
    "0x48ba80": ("W", "P", "W", "P", "W", "pointer member rubble -> int return; name/member conflict"),
    "0x4722d0": ("W", "P", "W", "P", "W", "pointer member attachedTag -> int; name/member conflict"),
    "0x4389f0": ("W", "P", "W", "P", "W", "IsDeathBomb returns audioController[0]; domain conflict"),
    "0x408d50": ("W", "P", "W", "P", "P", "m014[0] offset-style member"),
    "0x411630": ("P", "P", "P", "P", "P", "clean semantic getter"),
    "0x540f90": ("W", "P", "F", "F", "W", "raw this+17; ledger Network vs emitted IPXManagerClass; R4 x2"),
    "0x5c0f30": ("F", "W", "F", "P", "W", "initTeams returns -1; const return, this unobservable"),
    "0x4886a0": ("W", "P", "W", "P", "W", "(char)Image; GetStateFlag vs Image; ledger ObjectClass vs ShpButtonClass"),
    "0x6241c0": ("W", "P", "F", "P", "W", "Release returns a data byte; byte-driven return type; ledger ObjectClass vs SimpleDialogControl"),
    "0x55ab70": ("P", "P", "W", "P", "W", "faithful stdcall stub; ledger Jumpjet vs IUnknown"),
    "0x55ac60": ("P", "P", "W", "P", "P", "faithful const-true stub"),
    "0x4ca750": ("P", "W", "W", "P", "P", "faithful const return; this/free unobservable"),
    "0x5b2e40": ("P", "W", "W", "P", "W", "faithful const 450; ledger Techno vs Mission"),
    "0x5d6310": ("F", "P", "F", "P", "W", "name says ReturnZero2 but body returns 1"),
    "0x642ad0": ("P", "P", "W", "P", "P", "byte store natural; m060 placeholder"),
    "0x65c600": ("P", "P", "W", "P", "P", "faithful stub"),
    "0x5f3530": ("P", "P", "W", "P", "P", "faithful stub"),
    "0x7b1750": ("P", "P", "W", "P", "W", "ledger IPXInterfaceClass vs emitted WinsockInterfaceClass"),
    "0x4b4c60": ("P", "W", "W", "P", "W", "proto stdcall vs emitted thiscall member; retn4 only evidence"),
    "0x7bab70": ("W", "P", "F", "P", "F", "10 fictional params to justify retn 0x2C; entry_3C_ placeholder"),
    "0x408070": ("P", "P", "W", "P", "P", "bit test coherent; m00C placeholder"),
    "0x408520": ("W", "P", "W", "P", "W", "member type-pun (Queue*)&this->field; faithful to pseudo"),
    "0x40d230": ("P", "P", "W", "P", "W", "ledger InputManager_ProcessEvents vs GScreenClass"),
    "0x40d240": ("P", "P", "W", "P", "W", "same identity drift"),
    "0x41c010": ("P", "P", "P", "P", "P", "isDisguisedFlag semantic name, width faithful"),
    "0x681100": ("W", "P", "F", "F", "W", "this+264 raw offset; R4 x2"),
    "0x746d80": ("W", "P", "F", "F", "W", "this+1760 raw byte; R4 x2"),
    "0x759f70": ("W", "P", "F", "F", "W", "this+326 raw dword; R4 x2"),
    "0x600670": ("P", "P", "W", "P", "P", "product of two fields; m000/m004 placeholders"),
    "0x70c5b0": ("W", "P", "W", "P", "W", "GetShroudByte returns isBeingWarpedOut; ledger ObjectClass vs TechnoClass"),
    "0x406520": ("P", "P", "W", "P", "P", "fastcall setter, ECX+EDX proven; sub_ name"),
    "0x425270": ("W", "P", "F", "F", "W", "raw byte write this+414; VtableStub pseudo-class; R4 x2"),
    "0x557b00": ("W", "P", "F", "F", "W", "this+91 raw dword; ledger CheckListClass vs ListClass; R4 x2"),
    "0x4722c0": ("W", "P", "W", "P", "W", "mirror src; *&this->attached3 idiom"),
    "0x4870d0": ("P", "P", "P", "P", "P", "named array member, scale/width faithful"),
    "0x486380": ("P", "P", "W", "P", "P", "bool predicate faithful; m038 placeholder"),
    "0x602ae0": ("F", "W", "F", "P", "F", "pointer compared to 18 dialog IDs; ECX evidence proves thiscall but not that ECX is an object pointer"),
}

rows = []
for r in d["ok"]:
    a = r["addr"]
    v = V[a]
    rows.append((a, r.get("orig_size"), r.get("name"), r.get("emitted"), *v))
order = {r["addr"]: i for i, r in enumerate(d["ok"])}
rows.sort(key=lambda x: order[x[0]])

print("| # | addr | B | ledger name | emitted | 语义 a | cc/宽度 b | 可读 c | 规则 d | 红旗 e | 依据 |")
print("|---|------|---|-------------|----------|--------|-----------|--------|--------|--------|------|")
for i, x in enumerate(rows, 1):
    a, sz, name, em, va, vb, vc, vd, ve, why = x
    print("| %d | `%s` | %s | `%s` | `%s` | %s | %s | %s | %s | %s | %s |" % (i, a, sz, name, em, va, vb, vc, vd, ve, why))

cnt = collections.Counter()
for x in rows:
    for k, v in zip("abcde", x[4:9]):
        cnt[k + v] += 1
print("\nSTATS", dict(cnt))
print("TOTAL", len(rows))
