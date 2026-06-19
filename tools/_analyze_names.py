#!/usr/bin/env python3
"""Analyze functions.json naming patterns for specific missing .hpp functions."""
import json

with open('injectFunctionTest/functions.json', 'r') as f:
    data = json.load(f)

funcs = data['functions']

targets = ['direction8', 'direction32', 'coordmove', 'adjacentcell', 'iscloseenough',
           'hashstring', 'add_word', 'add_float', 'add_double', 'add_buffer',
           'sessionclass', 'registerclasscom', 'registerallclasses',
           'spawnmodeenter', 'gameloopinit', 'gamelooprun', 'gameloopshutdown',
           'translatemessagedispatch', 'audiovideoupdate',
           'ddrawinitialize', 'ddrawinit', 'ddrawshutdown', 'ddrawflip', 'ddrawgetcontext']

for t in targets:
    matches = []
    for func in funcs:
        name = func.get('name', '').lower()
        call = func.get('call', {})
        cn = (call.get('class_name') or '').lower()
        mn = (call.get('method_name') or '').lower()
        if t in name or t in cn or t in mn:
            matches.append({
                'name': func.get('name'),
                'addr': func.get('address'),
                'cn': call.get('class_name'),
                'mn': call.get('method_name')
            })
    if matches:
        print(f'--- {t} ---')
        for m in matches[:5]:
            print(f'  {m["name"]:45s} addr={m["addr"]:10s} cn={str(m["cn"]):30s} mn={m["mn"]}')
    else:
        print(f'--- {t} --- NOT FOUND')
