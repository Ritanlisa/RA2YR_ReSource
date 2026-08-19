import re

stubs_addrs = {0x52CB50, 0x52FC20, 0x532150, 0x49F5C0, 0x49F620, 0x49F7A0, 0x410230}

PATHS = [
    r"D:\RA2YR_ReSource\src\core\init_game.cpp",
    r"D:\RA2YR_ReSource\src\core\copy_protection.cpp",
    r"D:\RA2YR_ReSource\src\object\abstract.cpp",
]

for fp in PATHS:
    with open(fp) as f: c = f.read()
    for addr in stubs_addrs:
        hex_str = f"{addr:05x}"
        pattern = re.compile(
            rf'(REVERSE\(\s*0x{hex_str}\s*,\s*"[^"]*"\s*,\s*)true',
            re.IGNORECASE)
        c, n = pattern.subn(r'\1false /* not yet completed */', c)
    with open(fp, 'w', newline='\n') as f: f.write(c)
    print(f"Patched {fp}")
print("Done")
