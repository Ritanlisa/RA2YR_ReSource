"""mm_apply_json.py — Apply name-field-only edits to functions.json + ida_function_db.json.
Matches by address + expected old name (idempotent, safe). Never touches hook/call/other fields.
"""
import json, sys
sys.path.insert(0, 'tools')
import audit_consistency as ac

# (normalized_addr, old_name_expected_or_None, new_name)
FN_EDITS = [
    ('0X00718000', 'TeleportLocomotionClass::Release', 'TeleportLocomotionClass::TeleportLocomotionClass'),
    ('0X004F9A50', 'House::IsAlliedWith', 'HouseClass::IsAlliedWith'),
]
IDA_EDITS = [
    ('0x4151e0', 'UnitClass::Mission_Harvest'),
    ('0x4f9a50', 'HouseClass::IsAlliedWith'),
    ('0x718000', 'TeleportLocomotionClass::TeleportLocomotionClass'),
    ('0x773070', 'TechnoClass::GetWeaponRange'),
]

dry = '--apply' not in sys.argv

# functions.json
fp = 'injectFunctionTest/functions.json'
d = json.load(open(fp, encoding='utf-8'))
changed = 0
for e in d['functions']:
    na = ac.normalize_addr(e.get('address', ''))
    for (ta, old, new) in FN_EDITS:
        if na == ta and e.get('name') == old:
            print(f'functions.json: {e["address"]} name {e["name"]!r} -> {new!r}')
            if not dry:
                e['name'] = new
            changed += 1
print(f'functions.json edits: {changed}')

# ida_function_db.json
ip = 'tools/ida_function_db.json'
db = json.load(open(ip, encoding='utf-8'))
ichanged = 0
# keys could be various case; build normalized index
keymap = {}
for k in db.keys():
    keymap.setdefault(ac.normalize_addr(k), []).append(k)
for (ta, new) in IDA_EDITS:
    na = ac.normalize_addr(ta)
    for k in keymap.get(na, []):
        cur = db[k].get('name') if isinstance(db[k], dict) else None
        if cur != new:
            print(f'ida_db: {k} name {cur!r} -> {new!r}')
            if not dry:
                db[k]['name'] = new
            ichanged += 1
        else:
            print(f'ida_db: {k} already {new!r} (no change)')
print(f'ida_db edits: {ichanged}')

if not dry:
    json.dump(d, open(fp, 'w', encoding='utf-8'), indent=1, ensure_ascii=False)
    json.dump(db, open(ip, 'w', encoding='utf-8'), indent=1, ensure_ascii=False)
    print('WROTE functions.json + ida_function_db.json')
else:
    print('(dry-run; pass --apply to write)')
