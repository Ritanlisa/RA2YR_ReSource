#!/usr/bin/env python3
"""Shared member-registry helpers for the Step-4 converters.

`ensure_member(cls, off, c1)` guarantees the canon member table has a usable,
gate-passing member at `off` of `cls` typed `c1`:
  - existing entry with a usable name and matching type -> keep it
  - existing entry with a stale type (member-set evidence channel overrides:
    the call site's adjusted this IS the callee class) -> type corrected
  - no entry -> a semantic filler member `c1 + '_' + hex(OFF)` is registered
Writes the same three stores tool_member_set maintains (member_types,
member_lookup, signals _member_by_name). Call sites of this helper are
evidence-backed (a `Cls::Method(this + OFF)` call proves the object at OFF).
"""
import json
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
NL = chr(10)

MT_P = ROOT / 'anchors' / 'member_types.json'
ML_P = ROOT / 'tools' / 'member_lookup.json'
SG_P = ROOT / 'signals.json'

_mt = _ml = None
_sg = None
_dirty = False


def _load():
    global _mt, _ml, _sg
    if _mt is None:
        _mt = json.loads(MT_P.read_text(encoding='utf-8'))
        _ml = json.loads(ML_P.read_text(encoding='utf-8'))
        _sg = json.loads(SG_P.read_text(encoding='utf-8'))
    return _mt, _ml, _sg


def save():
    global _dirty
    if _dirty:
        MT_P.write_text(json.dumps(_mt, indent=1, ensure_ascii=False) + NL,
                        encoding='utf-8')
        ML_P.write_text(json.dumps(_ml, indent=1, ensure_ascii=False) + NL,
                        encoding='utf-8')
        SG_P.write_text(json.dumps(_sg, indent=2, ensure_ascii=False) + NL,
                        encoding='utf-8')
        _dirty = False


def ensure_member(cls, off, c1):
    """Return the usable member NAME for (cls, off) typed c1, registering or
    correcting the registry as needed. Returns None when cls is unknown."""
    mt, ml, sg = _load()
    key = '%s+0x%X' % (cls, off)
    members = ml.get(cls)
    if members is None:
        return None  # unknown class: nothing to attach the member to
    ent = members.get(str(off))
    if ent and ent.get('name'):
        name = ent['name']
        if (ent.get('type') or '').strip() != c1:
            # stale declared type: the call-site evidence (adjusted this of a
            # Cls::Method call) outranks it
            ent['type'] = c1
            ent['src'] = 'static-sub callsite (G29.15)'
            mt[key] = {'name': name, 'type': c1, 'size': 4,
                       'confidence': 'ANCHORED',
                       'evidence': 'static-sub callsite (G29.15)'}
            _dirty = True
        return name
    # register a new semantic filler member
    name = '%s_%X' % (c1, off)
    members[str(off)] = {'name': name, 'type': c1, 'size': 4,
                         'src': 'static-sub callsite (G29.15)'}
    mt[key] = {'name': name, 'type': c1, 'size': 4,
               'confidence': 'ANCHORED',
               'evidence': 'static-sub callsite (G29.15)'}
    mbn = sg.setdefault('_member_by_name', {})
    cls_mbn = mbn.setdefault(cls, {})
    cls_mbn[name] = off
    _dirty = True
    return name


def member_type(cls, off):
    mt, ml, _ = _load()
    ent = (ml.get(cls) or {}).get(str(off))
    if ent:
        return (ent.get('type') or '').strip()
    return None


def member_name(cls, off):
    mt, ml, _ = _load()
    ent = (ml.get(cls) or {}).get(str(off))
    return (ent or {}).get('name')
