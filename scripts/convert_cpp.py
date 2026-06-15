#!/usr/bin/env python3
"""Apply the same renames from convert_headers.py to .cpp files in src/"""
import os, re, sys
sys.path.insert(0, os.path.dirname(__file__))
from convert_headers import RENAMES, convert_file

BASE = r"D:\RA2YR_ReSource"
SRC = os.path.join(BASE, "src")

def convert_cpp(src_path):
    """Read a .cpp file, apply renames, write back."""
    with open(src_path, 'r', encoding='utf-8') as f:
        content = f.read()
    original = content
    for old, new in RENAMES:
        content = content.replace(old, new)
    if content != original:
        with open(src_path, 'w', encoding='utf-8', newline='\n') as f:
            f.write(content)
        return True
    return False

def main():
    converted = 0
    for root, dirs, files in os.walk(SRC):
        for fn in files:
            if not fn.endswith('.cpp'):
                continue
            fp = os.path.join(root, fn)
            if convert_cpp(fp):
                rel = os.path.relpath(fp, SRC)
                print(f"  {rel}")
                converted += 1
    print(f"\nConverted {converted} .cpp files in src/")

if __name__ == "__main__":
    main()
