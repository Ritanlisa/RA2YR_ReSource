"""Test new IDA pseudocode cleaner"""
import json, os, re, sys

# Import the cleaner
from task17_generate import clean_ida, extract_func, translate_body, parse_sig

DECOMPILE_DIR = 'tools/sub_decompiles'

samples = ['00401190', '004011B0', '00401FB0', '00402430', '00403DF0',
           '00403E50', '004059F0', '00403E80', '00403CE0', '00405490',
           '00403D10', '00403D30']

for addr in samples:
    fpath = os.path.join(DECOMPILE_DIR, f'{addr}.json')
    if not os.path.exists(fpath):
        continue
    with open(fpath) as f:
        d = json.load(f)
    
    cleaned = clean_ida(d['pseudocode'])
    sig, body = extract_func(cleaned)
    
    print(f'=== {addr} ({d["name"]}) ===')
    print(f'  Sig: {sig[:120]}')
    print(f'  Body: {body[:300]}')
    print()
