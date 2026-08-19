#!/usr/bin/env python3
"""Fix functions.json: only mark truly completed functions."""
import json, os

JSON_PATH = os.path.join(os.path.dirname(os.path.abspath(__file__)), "functions.json")

# Truly completed functions (faithful IDA translations with non-trivial bodies)
COMPLETED = {
    0x52BA60, 0x52F620, 0x52D9A0, 0x48CCC0, 0x48C8B0,
    0x55D360, 0x55CFD0, 0x5301A0, 0x530000, 0x4739F0,
    0x473C50, 0x473CE0, 0x4A3890, 0x535AA0, 0x535B30,
    0x4741F0, 0x4B9DE0, 0x4B9F00, 0x4B9FE0, 0x4BA0C0,
    0x6BB9A0, 0x4A42F0, 0x4BA770, 0x6BB390, 0x42D470,
    0x4355B0, 0x52FC20, 0x54F000, 0x48D080, 0x4A38D0,
    0x5B40B0, 0x6C8C40, 0x52CB50, 0x410170, 0x410230,
    0x410260, 0x49F5C0, 0x49F620, 0x49F7A0,
}

RE_FILES = {
    0x52BA60: "src/core/init_game.cpp",
    0x52F620: "app/cmdline.cpp",
    0x52D9A0: "src/core/menu_select.cpp",
    0x48CCC0: "src/core/menu_select.cpp",
    0x48C8B0: "src/core/menu_select.cpp",
    0x55D360: "src/core/menu_select.cpp",
    0x55CFD0: "src/core/menu_select.cpp",
    0x5301A0: "src/system/mix_file.cpp",
    0x530000: "src/misc/rules.cpp",
    0x4739F0: "src/system/cc_file.cpp",
    0x473C50: "src/system/cc_file.cpp",
    0x473CE0: "src/system/cc_file.cpp",
    0x4A3890: "src/system/cc_file.cpp",
    0x535AA0: "src/system/ini_class.cpp",
    0x535B30: "src/system/ini_class.cpp",
    0x4741F0: "src/system/ini_class.cpp",
    0x4B9DE0: "src/system/mix_blowfish.cpp",
    0x4B9F00: "src/system/mix_blowfish.cpp",
    0x4B9FE0: "src/system/mix_blowfish.cpp",
    0x4BA0C0: "src/system/mix_blowfish.cpp",
    0x6BB9A0: "app/main.cpp",
    0x4A42F0: "app/ddraw_init.cpp",
    0x4BA770: "app/ddraw_init.cpp",
    0x6BB390: "src/core/com_register.cpp",
    0x42D470: "src/core/coordinate.cpp",
    0x4355B0: "src/core/init_game.cpp",
    0x52FC20: "src/core/init_game.cpp",
    0x54F000: "src/core/init_game.cpp",
    0x48D080: "src/core/init_game.cpp",
    0x4A38D0: "src/core/init_game.cpp",
    0x5B40B0: "src/core/init_game.cpp",
    0x6C8C40: "src/core/init_game.cpp",
    0x52CB50: "src/core/init_game.cpp",
    0x410170: "src/object/abstract.cpp",
    0x410230: "src/object/abstract.cpp",
    0x410260: "src/object/abstract.cpp",
    0x49F5C0: "src/core/copy_protection.cpp",
    0x49F620: "src/core/copy_protection.cpp",
    0x49F7A0: "src/core/copy_protection.cpp",
}

def main():
    with open(JSON_PATH) as f:
        data = json.load(f)
    
    fixed = 0
    for fn in data['functions']:
        addr_int = int(fn['address'], 16)
        was_completed = fn['hook']['completed']
        should_be = addr_int in COMPLETED
        
        fn['hook']['completed'] = should_be
        if should_be and addr_int in RE_FILES:
            fn['hook']['re_file'] = RE_FILES[addr_int]
        elif not should_be:
            fn['hook']['re_file'] = None
        
        if was_completed != should_be:
            fixed += 1
    
    with open(JSON_PATH, 'w') as f:
        json.dump(data, f, indent=2)
    
    print(f"Fixed {fixed} completion flags ({len(COMPLETED)} truly completed, rest → false)")
    for a in sorted(COMPLETED):
        print(f"  ✓ 0x{a:08X}")

if __name__ == '__main__':
    main()
