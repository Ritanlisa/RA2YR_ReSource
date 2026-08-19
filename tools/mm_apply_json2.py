"""mm_apply_json2.py — name-field-only edits. functions.json via unique raw-replace; ida_db via json round-trip."""
import json, sys
sys.path.insert(0, 'tools')
import audit_consistency as ac

dry = '--apply' not in sys.argv

# --- functions.json: unique raw string replacements (name values verified count==1) ---
FN_RAW = [
    ('"TeleportLocomotionClass::Release"', '"TeleportLocomotionClass::TeleportLocomotionClass"'),
    ('"House::IsAlliedWith"', '"HouseClass::IsAlliedWith"'),
]
fp = 'injectFunctionTest/functions.json'
raw = open(fp, encoding='utf-8').read()
fn_ok = True
for old, new in FN_RAW:
    c = raw.count(old)
    print(f'functions.json: {old} count={c} -> {new}')
    if c != 1:
        print('  !! NOT UNIQUE — aborting functions.json edit')
        fn_ok = False
if fn_ok and not dry:
    for old, new in FN_RAW:
        raw = raw.replace(old, new)
    open(fp, 'w', encoding='utf-8', newline='').write(raw)
    print('WROTE functions.json (raw replace)')

# --- ida_function_db.json: edit by normalized key, round-trip dump (verified byte-identical) ---
IDA_EDITS = [
    ('0x4151e0', 'UnitClass::Mission_Harvest'),
    ('0x4f9a50', 'HouseClass::IsAlliedWith'),
]
ip = 'tools/ida_function_db.json'
db = json.load(open(ip, encoding='utf-8'))
keymap = {}
for k in db.keys():
    keymap.setdefault(ac.normalize_addr(k), []).append(k)
ichanged = 0
for ta, new in IDA_EDITS:
    for k in keymap.get(ac.normalize_addr(ta), []):
        cur = db[k].get('name')
        if cur != new:
            print(f'ida_db: {k} {cur!r} -> {new!r}')
            if not dry:
                db[k]['name'] = new
            ichanged += 1
        else:
            print(f'ida_db: {k} already {new!r}')
if not dry:
    open(ip, 'w', encoding='utf-8', newline='').write(json.dumps(db, indent=2, ensure_ascii=False))
    print(f'WROTE ida_function_db.json ({ichanged} name changes)')
else:
    print('(dry-run)')
