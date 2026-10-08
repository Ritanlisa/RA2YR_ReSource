#!/usr/bin/env python3
"""canon/手树/vtable 三源类型表加载器 (G42.57 W20 canon_member_lowering 共享底座)。

canon_types.py 暴露:
  CLASS_MEMBERS  {class_lower: {byte_offset: (name, type_str)}}   # csp_canon + 手树合并
  CLASS_VTABLE   {class_lower: {byte_offset: func_name}}          # 该类 vtable 槽位名
  CLASS_BASES    {class_lower: [base classes]}                    # 继承链 (成员查找上溯)

用法: import canon_types; T = canon_types.load()  (带模块级缓存)
"""
import json
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
_CACHE = None


def _parse_canon(text):
    members = {}
    bases = {}
    for m in re.finditer(r'class (\w+) : public ([\w:, <>]+?) \{', text):
        cls = m.group(1)
        bases[cls.lower()] = [b.strip().split('::')[-1].lower()
                              for b in m.group(2).split(',')]
        depth, k = 1, m.end()
        while depth and k < len(text):
            if text[k] == '{':
                depth += 1
            elif text[k] == '}':
                depth -= 1
            k += 1
        body = text[m.end():k]
        d = members.setdefault(cls.lower(), {})
        for ln in body.split('\n'):
            mm = re.search(r'//\s*\+?0x([0-9A-Fa-f]+)', ln)
            if not mm or ';' not in ln:
                continue
            decl = ln.split('//')[0].strip().rstrip(';').strip()
            if '(' in decl or not decl:
                continue
            nm = re.match(r'[\w:<>,*&\s]*?(\w+)\s*(?:\[[^\]]*\])?\s*$', decl)
            if nm:
                d.setdefault(int(mm.group(1), 16), (nm.group(1), decl))
    return members, bases


def _parse_handtree(path, members, bases):
    text = path.read_text(encoding='utf-8', errors='replace')
    for m in re.finditer(r'class (\w+)\s*:\s*public\s+([\w:, <>]+?)\s*\{', text):
        cls = m.group(1).lower()
        bases.setdefault(cls, [b.strip().split('::')[-1].lower()
                               for b in m.group(2).split(',')])
        depth, k = 1, m.end()
        while depth and k < len(text):
            if text[k] == '{':
                depth += 1
            elif text[k] == '}':
                depth -= 1
            k += 1
        body = text[m.end():k]
        d = members.setdefault(cls, {})
        for ln in body.split('\n'):
            mm = re.search(r'\+\s*0x([0-9A-Fa-f]+)', ln)
            if not mm or ';' not in ln:
                continue
            decl = ln.split('//')[0].strip().rstrip(';').strip()
            if '(' in decl or not decl:
                continue
            nm = re.match(r'[\w:<>,*&\s]*?(\w+)\s*(?:\[[^\]]*\])?\s*$', decl)
            if nm:
                d.setdefault(int(mm.group(1), 16), (nm.group(1), decl))


def _parse_vtables():
    p = ROOT / 'tools' / 'type_infer' / 'anchors' / 'vtable_signatures.json'
    d = json.loads(p.read_text(encoding='utf-8'))
    # rtti: vtable_base -> class (二进制身份)
    rtti_p = ROOT / 'anchors' / 'rtti_vtable_class.json'
    vt2cls = {}
    if rtti_p.exists():
        rtti = json.loads(rtti_p.read_text(encoding='utf-8'))
        for vt, e in (rtti.get('vtables', {}).items()):
            c = e.get('class', '') if isinstance(e, dict) else str(e)
            try:
                k = int(vt, 16)
            except ValueError:
                continue
            vt2cls[k] = str(c).split('::')[-1].split('@')[0].lower()
    slots = {}
    for key, e in d['signatures'].items():
        try:
            base = int(e.get('vtable_base', '0x0'), 16)
        except ValueError:
            continue
        cls = vt2cls.get(base)
        if not cls:
            continue
        slots.setdefault(cls, {})[int(e.get('byte_offset', 0))] = e.get('func_name', '')
    return slots


def load():
    global _CACHE
    if _CACHE is not None:
        return _CACHE
    canon_p = ROOT / 'src' / 'csp_canon' / 'classes.hpp'
    text = canon_p.read_text(encoding='utf-8', errors='replace')
    members, bases = _parse_canon(text)
    for hpp in (ROOT / 'src').rglob('*.hpp'):
        s = str(hpp)
        if any(x in s for x in ('csp_canon', 'raw_decomp', '_generated', 'e4')):
            continue
        try:
            _parse_handtree(hpp, members, bases)
        except Exception:
            continue
    vtable = _parse_vtables()
    _CACHE = {'CLASS_MEMBERS': members, 'CLASS_BASES': bases, 'CLASS_VTABLE': vtable}
    return _CACHE


def member_for(cls, off):
    """沿继承链找 offset 成员 -> (class, name, type) or None"""
    T = load()
    seen = set()
    stack = [cls.lower()]
    while stack:
        c = stack.pop(0)
        if c in seen:
            continue
        seen.add(c)
        d = T['CLASS_MEMBERS'].get(c)
        if d and off in d:
            nm, ty = d[off]
            return c, nm, ty
        stack.extend(T['CLASS_BASES'].get(c, []))
    return None


def vtable_name_for(cls, byte_off):
    T = load()
    seen = set()
    stack = [cls.lower()]
    while stack:
        c = stack.pop(0)
        if c in seen:
            continue
        seen.add(c)
        d = T['CLASS_VTABLE'].get(c)
        if d and byte_off in d and d[byte_off]:
            return c, d[byte_off]
        stack.extend(T['CLASS_BASES'].get(c, []))
    return None


if __name__ == '__main__':
    T = load()
    print('classes with members:', len(T['CLASS_MEMBERS']))
    print('classes with vtables:', len(T['CLASS_VTABLE']))
    print('buildingclass sample:', sorted(T['CLASS_MEMBERS'].get('buildingclass', {}).items())[:4])
    print('technoclass vt+852:', T['CLASS_VTABLE'].get('technoclass', {}).get(852))
