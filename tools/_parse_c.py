#!/usr/bin/env python3
"""Fast parse .c -> func_blocks.pkl for generator."""
import re, os, pickle, sys
from collections import defaultdict

C_FILE = r'H:\RA2YR_ReSource\decompile-results\gamemd.exe.c'
PKL = r'H:\RA2YR_ReSource\decompile-results\func_blocks.pkl'

print(f"Reading {C_FILE}...")
with open(C_FILE, encoding='utf-8') as f:
    lines = f.readlines()
print(f"  {len(lines)} lines")

# Find function signatures followed by {
funcs = []
i = 0
total = len(lines)
while i < total:
    s = lines[i].strip()
    if not s: i += 1; continue
    # Skip non-function lines
    if s.startswith(('//', '/*', '*', '#if', '#endif', '#include', '#define', 'typedef', 'struct', 'union', 'enum', '{', '}', 'if', 'while', 'for', 'switch', 'return', 'else', 'do', 'case', 'break', 'continue', 'goto', 'using', 'namespace')): 
        i += 1; continue
    # Must have balanced parens
    if '(' in s and ')' in s:
        sig_part = s.split('//')[0].strip()
        if sig_part.endswith(')'):
            j = i + 1
            while j < total and not lines[j].strip(): j += 1
            if j < total and lines[j].strip() == '{':
                body = [s]
                depth = 0; started = False
                j = i + 1
                while j < total:
                    for c in lines[j]:
                        if c == '{': depth += 1; started = True
                        elif c == '}': depth -= 1
                    body.append(lines[j].rstrip())
                    if started and depth == 0: j += 1; break
                    j += 1
                funcs.append(body)
                i = j; continue
    i += 1

print(f"  Found {len(funcs)} functions")

# Classify
cm = defaultdict(list)
gf = []
for body in funcs:
    m = re.match(r'.*?(\w+)::(\w+)', body[0])
    if m: cm[m.group(1)].append(body)
    else: gf.append(body)

print(f"  Methods: {sum(len(v) for v in cm.values())} in {len(cm)} classes")
print(f"  Global funcs: {len(gf)}")

with open(PKL, 'wb') as f:
    pickle.dump({'class_methods': dict(cm), 'global_funcs': gf}, f)
print(f"  Saved to {PKL}")
