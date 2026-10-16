#!/usr/bin/env python3
"""X45 subtask B: vtable dispatch-call census + resolver for gap2_global_defs.cpp.

Target forms (true vtable dispatch operations, X11-keep family is NOT touched):
    (*(ret (**)(RecvT *, ...))(recv->vfptr + BYTE))(recv, args)     byte-offset dispatch
    (*((ret (**)(RecvT *, ...))recv->vfptr + SLOT))(recv, args)     slot-index dispatch
    (*(ret (**)(RecvT *, ...))(*(unsigned int *)p + BYTE))(p, args) load-then-dispatch

Resolution per site (binary as sole truth, Q1):
  1. class hint  := first parameter type of the fn-ptr cast (IDA-resolved receiver class)
  2. slot byte   := constant byte offset (index form * 4)
  3. vtable_authority.json[hint].slots[byte] -> func address (binary-verified entries only)
  4. signals.json name for func -> KNOWN (semantic `Cls::Meth`) vs UNNAMED (`sub_XXXXXX`)
BANK = any of: no hint / hint class absent / unaligned byte / slot unverified / func unnamed
     / receiver is synthetic (Gap2Recv_*::this — flat class lacks the virtual).
Do-not-invent rule: only KNOWN + non-synthetic receiver would be replaceable; this run
REPLACES NOTHING (replaced=0) and emits the evidence ledger for the follow-up lane.

Outputs:
    .omo/evidence/optimization/x45/vtable_dispatch_census.json
"""
import json
import re
import sys
from collections import Counter
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
TARGET = ROOT / 'src' / '_gap2' / 'gap2_global_defs.cpp'
AUTH = ROOT / 'anchors' / 'vtable_authority.json'
SIGNALS = ROOT / 'signals.json'
OUT = ROOT / '.omo' / 'evidence' / 'optimization' / 'x45' / 'vtable_dispatch_census.json'

# a call-statement-ish line containing a fn-ptr cast through a vtable slot
RE_SITE = re.compile(
    r'\(\s*\*\s*\(\s*(?P<ret>[A-Za-z_][\w \t]*?)\s*\(\*\*\)\s*'
    r'\(\s*(?P<sig>[^()]*)\)\s*\)\s*'
    r'(?P<vexpr>[^;]*?)\s*\)\s*\(')
RE_PARAM1 = re.compile(r'^\s*(?:unsigned\s+|signed\s+|const\s+)*([A-Za-z_]\w*)\s*(?:\*|\s*,|\s*\))')
RE_BYTE = re.compile(r'(?:vfptr\d*|vtable\d*)\s*\+\s*(\d+)')
RE_SLOTIDX = re.compile(r'(?:vfptr\d*|vtable\d*)\s*\+\s*(\d+)\s*\)\s*\)\s*\(')
RE_SLOTSUB = re.compile(r'\(\s*\*\s*\(\s*[^()]*\(\*\*\)\s*\)\s*([^()]*?)\s*\+\s*(\d+)\s*\)\s*\)\s*\(')


def load_signals_names():
    d = json.loads(SIGNALS.read_bytes().decode('utf-8', 'replace'))
    syms = d.get('symbols') or d
    out = {}
    for k, v in syms.items():
        try:
            key = int(k, 16)
        except (TypeError, ValueError):
            continue
        if isinstance(v, dict):
            name = v.get('name') or v.get('id')
            if name:
                out[key] = name
        elif isinstance(v, str):
            out[key] = v
    return out


def main():
    auth = json.loads(AUTH.read_bytes().decode('utf-8', 'replace'))
    sig_names = load_signals_names()
    raw = TARGET.read_bytes().decode('latin-1')
    lines = raw.split('\n')

    # class -> byte -> (func, name, verified)
    slot_maps = {}
    for cls, cd in auth['classes'].items():
        m = {}
        for s in cd.get('slots', []):
            m[s['byte']] = (s.get('func') or s.get('claimed'), s.get('name') or '', bool(s.get('verified')))
        slot_maps[cls] = m

    sites = []
    for lineno, ln in enumerate(lines, 1):
        m = RE_SITE.search(ln)
        if not m:
            continue
        vexpr = m.group('vexpr')
        sig = m.group('sig')
        pm = RE_PARAM1.match(sig)
        hint = pm.group(1) if pm else None
        # receiver expression text (before ->vfptr/vtableN)
        recv = None
        rm = re.search(r'([A-Za-z_][\w\[\]\.]*|(?:\w+)->\w+)\s*->\s*(?:vfptr\d*|vtable\d*)', vexpr)
        if rm:
            recv = rm.group(1)
        # byte offset: prefer "recv->vfptr + N" style; else (*(unsigned int *)p + N) load form
        bm = re.search(r'(?:vfptr\d*|vtable\d*)\s*\+\s*(\d+)', vexpr)
        if bm:
            byte = int(bm.group(1))
            form = 'byte-offset'
        else:
            lm = re.search(r'\*\s*\(\s*unsigned\s+int\s*\*\s*\)\s*([A-Za-z_][\w\.]*)\s*\+\s*(\d+)', vexpr)
            if lm:
                byte = int(lm.group(2))
                form = 'load+byte'
            else:
                byte = None
                form = 'unknown'
        verdict = None
        detail = {}
        if hint not in slot_maps:
            verdict = 'BANK:no-class-in-authority' if hint else 'BANK:no-hint'
        elif byte is None:
            verdict = 'BANK:no-byte'
        elif byte % 4 != 0:
            verdict = 'BANK:unaligned-byte'
        else:
            ent = slot_maps[hint].get(byte)
            if not ent:
                verdict = 'BANK:slot-not-in-authority'
            else:
                func, aname, verified = ent
                detail['func'] = func
                detail['authority_name'] = aname
                try:
                    sname = sig_names.get(int(func, 16))
                except (TypeError, ValueError):
                    sname = None
                detail['signals_name'] = sname
                if not verified:
                    verdict = 'BANK:slot-unverified'
                elif aname:
                    verdict = 'KNOWN:authority-named'
                elif sname and 'sub_' not in sname.split('@')[0]:
                    verdict = 'KNOWN:signals-named'
                elif sname:
                    verdict = 'BANK:func-unnamed'
                else:
                    verdict = 'BANK:func-not-in-signals'
        if verdict.startswith('KNOWN'):
            # synthetic-receiver gate: `this` inside Gap2Recv_* member functions cannot
            # host the virtual (flat synthetic class lacks the method declaration)
            is_this = recv == 'this'
            if is_this:
                verdict += '+BANK:synthetic-recv-this'
            else:
                verdict += '+BANK:no-virtual-decl'  # 2026-10-16 audit: slot methods exist as
                # header comments / RF-form qualified calls only (e.g. object.hpp:171
                # "// [43] ... GetCoordsThunk2"), no virtual member to dispatch through;
                # replacing would create C2039.  Revisit after the virtual-decl lane.
        sites.append({'line': lineno, 'recv': recv, 'hint': hint, 'byte': byte,
                      'form': form, 'verdict': verdict,
                      'text': ln.strip()[:160], **detail})

    cnt = Counter(s['verdict'].split('+')[0] for s in sites)
    replaceable = [s for s in sites if s['verdict'].startswith('KNOWN')
                   and 'BANK' not in s['verdict']]
    report = {
        'total_sites': len(sites),
        'verdicts': dict(cnt.most_common()),
        'replaceable_now': len(replaceable),
        'replaced_this_run': 0,
        'policy': 'replace only KNOWN + non-synthetic receiver; bank the rest with evidence',
        'sites': sites,
    }
    OUT.parent.mkdir(parents=True, exist_ok=True)
    OUT.write_text(json.dumps(report, indent=1), encoding='utf-8')
    print(f"sites={report['total_sites']} verdicts={dict(cnt.most_common())}")
    print(f"replaceable_now={report['replaceable_now']} replaced_this_run=0 (policy)")
    for s in replaceable[:12]:
        print('  REPL-able:', s['line'], s['recv'], s['hint'], s['byte'], s.get('signals_name') or s.get('authority_name'))


if __name__ == '__main__':
    main()
