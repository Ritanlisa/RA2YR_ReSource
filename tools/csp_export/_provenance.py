#!/usr/bin/env python3
"""Shared naming-provenance authority helpers (N1).

anchors/name_provenance.json is the SINGLE merge point for every naming
decision in the pipeline. Every name must trace to one of the sources in
PRIORITY; a higher-priority source may never be overwritten by a lower one.

Priority (N1 spec, binding):
    INI reader key name > YRpp > Step-6 > git history > binary evidence
    > auto generated > placeholder

Consumers:
  - sync_canon_from_til.py      (til sync must not stomp adjudicated names)
  - register_offset_members.py  (--align-ml only fills placeholders)
  - build_rename_batches.py     (function renames consult provenance)
  - mcp_translate_server.py     (tool_member_set overwrite guard)
  - gen_cpp_canon.py            (4-tier -> 6-tier render precedence)

This module is deliberately dependency-free (stdlib only, lazy loading) so
every pipeline stage can import it cheaply.
"""
import json
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
PROV_PATH = ROOT / 'anchors' / 'name_provenance.json'

# Highest priority first. Index = rank (lower wins).
PRIORITY = ['ini', 'yrpp', 'step6', 'git-history', 'binary-evidence',
            'auto', 'placeholder']
RANK = {s: i for i, s in enumerate(PRIORITY)}

# Placeholder definition -- MUST stay identical to gen_cpp_canon's
# PLACEHOLDER_RE so render-time and audit-time agree on what a placeholder is.
# (parity-checked by gen_name_provenance.py --check-parity)
PLACEHOLDER_RE = re.compile(
    r'^(vtable\d*|vt_?\d+|.*_field_0x[0-9A-Fa-f]+.*|field_.*|__pad.*'
    r'|__align.*|align_.*|q[0-9A-F]{3}.*|u(?:8|16|32|64)_[0-9A-F]+)$')
# IDA juvenile auto-names: not in PLACEHOLDER_RE (member-name regex contract
# with gen_cpp_canon), but they sink to the placeholder rank wherever a
# NAME RANK is computed (functions tier consumers: rename guards).
JUVENILE_RE = re.compile(
    r'^(sub_|dword_|byte_|word_|qword_|off_|loc_|unk_|asc_|nullsub)')


def is_placeholder(name):
    return bool(PLACEHOLDER_RE.match(name or ''))


def is_juvenile(name):
    return bool(JUVENILE_RE.match(name or ''))


def rank_of(source):
    return RANK.get(source or 'placeholder', RANK['placeholder'])


def name_rank(name, source):
    """Effective rank of a name: placeholders and IDA juveniles sink to the
    bottom even if mis-tagged; semantic names use their source rank."""
    if is_placeholder(name) or is_juvenile(name):
        return RANK['placeholder']
    return rank_of(source)


_prov_cache = None


def load_provenance():
    """Load anchors/name_provenance.json (cached). Missing file -> empty
    structure (pipeline keeps working, consumers fall back to local rules)."""
    global _prov_cache
    if _prov_cache is None:
        if PROV_PATH.exists():
            _prov_cache = json.loads(
                PROV_PATH.read_text(encoding='utf-8'))
        else:
            _prov_cache = {'members': {}, 'functions': {}, 'variables': {},
                           'classes': {}}
    return _prov_cache


def member_key(cls, off):
    """Canonical members-section key. `off` may be int or decimal/hex str."""
    if isinstance(off, str):
        off = off.strip()
        off = int(off, 16) if off.lower().startswith('0x') else int(off)
    return '%s|%d' % (cls, off)


def member_source_of(prov, cls, off):
    """{'name','source','note'} for (cls, off) or None."""
    return (prov.get('members') or {}).get(member_key(cls, off))


def class_source_of(prov, cls):
    return (prov.get('classes') or {}).get(cls)


def addr_source_of(prov, addr):
    """addr: int or 0x-str -> function provenance entry or None."""
    if isinstance(addr, str):
        ai = int(addr, 16) if addr.lower().startswith('0x') else int(addr)
    else:
        ai = addr
    return (prov.get('functions') or {}).get('0x%X' % ai)


# ---- evidence-string -> source-enum mapping (single authority) -------------

# Later git-era adjudication campaigns (G15-G19 ctor write-map etc.) — the
# ADJUDICATED_SRC_RE family from gen_cpp_canon, mapped to the git-history tier.
_ADJUDICATED_RE = re.compile(r'adjudic|ctor[-_]adjud|g1[5-9]|write[-_]map', re.I)
# Step-6 / RA2MCP manual evidence channel.
_STEP6_RE = re.compile(r'manual|step[-_]?6|ra2mcp|camel', re.I)


def evidence_to_source(ev):
    """Map an ml `src` / mt `evidence` string to the provenance enum."""
    s = (ev or '').strip()
    if not s:
        return 'auto'
    if _ADJUDICATED_RE.search(s):
        return 'git-history'
    if _STEP6_RE.search(s):
        return 'step6'
    # til syncs, offset-access supplies, class_layouts/til channels: all
    # observations read out of the binary -> binary-evidence tier
    return 'binary-evidence'


def should_replace(old_name, old_source, new_name, new_source):
    """True iff new_name may replace old_name under the priority rules.
    Ties keep the old name (stability); placeholders always yield to any
    semantic name regardless of tag."""
    return name_rank(new_name, new_source) < name_rank(old_name, old_source)


def write_provenance(prov, meta_extra=None):
    """Atomic-write the authority with meta bookkeeping."""
    meta = prov.setdefault('_meta', {})
    meta['priority'] = PRIORITY
    meta['updated'] = __import__('datetime').datetime.now().isoformat(
        timespec='seconds')
    if meta_extra:
        meta.update(meta_extra)
    tmp = str(PROV_PATH) + '.tmp'
    Path(tmp).write_text(json.dumps(prov, indent=1, ensure_ascii=False),
                         encoding='utf-8')
    Path(tmp).replace(PROV_PATH)
