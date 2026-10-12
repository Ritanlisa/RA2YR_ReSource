#!/usr/bin/env python3
"""X4 shared resolver: complete prototypes from the CSP signature authority.

Authority precedence (documented, deterministic):
  1. signals.json .symbols  -- CSP/type-pipeline symbol table carrying
     return_type / call_convention / params.  This is the signature
     authority designated by plan X4 ("19,082 signatures, CSP-sourced").
  2. .omo/ida_cache/func_0x<ADDR>.json -- typed-snapshot decompiles; the
     line-1 prototype supplies the parameter list when signals has none
     (Q4 best-effort binary decompile channel; same IDB generation whose
     identity handling was audited in T7 / L74-L81).
  3. source-line arity -- legacy fallback (provenance 'source').

NO caller may fall back to `...`: unresolved sites are returned with
params=None and must go to the Q4 ledger (deprecated / CSP-defect), never
to a variadic emission.

Public API:
    au = Authority(root)
    r = au.resolve(addr='0x401190')          # address-first
    r = au.resolve(name='Foo::Bar', prefer_cls='Foo')
    r  -> Resolution(name, addr, ret, cc, params, provenance) or None
          params '' means authority says zero params (a complete '()').
          params None means UNRESOLVED (Q4).

Idempotency: the signals index is cached at .omo/x4/authority_index.json
keyed on (signals.json mtime_ns, size); cache rebuild is deterministic
(sorted keys, compact JSON), so reruns are byte-stable.

CLI self-test:
    python signature_authority.py --selftest
"""
import json
import re
import sys
from pathlib import Path

INDEX_VERSION = 3

CC_RE = re.compile(
    r'__(?:cdecl|stdcall|fastcall|thiscall|usercall|userpurge|pascal|noreturn)')


class Resolution:
    __slots__ = ('name', 'addr', 'ret', 'cc', 'params', 'provenance',
                 'sig_name', 'multi')

    def __init__(self, name, addr, ret, cc, params, provenance,
                 sig_name=None, multi=False):
        self.name = name            # callable name as it must be declared
        self.addr = addr            # normalized '0x...' or None
        self.ret = ret              # authority return type or None
        self.cc = cc                # call convention or ''
        self.params = params        # str (''=zero) or None (unresolved)
        self.provenance = provenance  # 'signals' | 'ida' | 'source' | 'empty'
        self.sig_name = sig_name    # authority's own symbol name
        self.multi = multi          # ambiguous name match flag

    def __repr__(self):
        return ('Resolution(%s @ %s ret=%r cc=%r params=%r prov=%s)'
                % (self.name, self.addr, self.ret, self.cc, self.params,
                   self.provenance))


def norm_addr(a):
    """Canonical address form: '0x' + lowercase hex, no padding."""
    if a is None:
        return None
    if isinstance(a, int):
        return '0x%x' % a
    s = str(a).strip().lower()
    if s.startswith('0x'):
        s = s[2:]
    if not re.fullmatch(r'[0-9a-f]+', s or ''):
        return None
    s = s.lstrip('0') or '0'
    return '0x' + s


def parse_ida_proto(code):
    """Extract (ret, cc, name, params_text) from an ida_cache decompile.

    The decompiled text's first construct is the prototype; take the
    head up to the first top-level '{', then the LAST top-level (...) in
    the head is the parameter list.  Returns None if not parseable.
    """
    if not code:
        return None
    # head = up to first '{' outside parens
    depth = 0
    head_end = None
    for i, ch in enumerate(code):
        if ch == '(':
            depth += 1
        elif ch == ')':
            depth = max(0, depth - 1)
        elif ch == '{' and depth == 0:
            head_end = i
            break
    head = code[:head_end] if head_end is not None else code[:400]
    head = re.sub(r'/\*.*?\*/', ' ', head, flags=re.S)
    head = re.sub(r'//[^\n]*', ' ', head)
    # last top-level paren pair
    depth = 0
    open_i = close_i = None
    for i, ch in enumerate(head):
        if ch == '(':
            if depth == 0:
                open_i = i
            depth += 1
        elif ch == ')':
            depth -= 1
            if depth == 0:
                close_i = i
    if open_i is None or close_i is None or close_i < open_i:
        return None
    params = ' '.join(head[open_i + 1:close_i].split())
    ret_cc = ' '.join(head[:open_i].split())
    m = re.match(r'^(.*?)([A-Za-z_~][\w:~]*)\s*$', ret_cc)
    if not m:
        return None
    retcc = m.group(1).strip()
    name = m.group(2)
    cc = ''
    mc = CC_RE.search(retcc)
    if mc:
        cc = mc.group(0)
        retcc = (retcc[:mc.start()] + retcc[mc.end():]).strip()
    return {'ret': retcc, 'cc': cc, 'name': name,
            'params': sanitize_params(params)}


# C++ keywords that IDA renders as parameter NAMES (thiscall receiver shows
# as `Cls *this`) but that are illegal in a C++ declaration.  Rename them;
# parameter names are not part of the ABI so call shape is unaffected.
_CPP_RESERVED = ('this', 'new', 'delete', 'class', 'template', 'typename',
                 'operator', 'private', 'protected', 'public', 'namespace')


def sanitize_params(p):
    if not p:
        return p
    for kw in _CPP_RESERVED:
        p = re.sub(r'\b%s\b' % kw, 'p_%s' % kw, p)
    return p


def fmt_signal_params(params):
    """signals params [{type,name}] -> 'int* p0, const char* p1'."""
    out = []
    for p in params:
        t = (p.get('type') or 'int').strip()
        n = (p.get('name') or '').strip()
        out.append((t + ' ' + n).strip() if n else t)
    return ', '.join(out)


class Authority:
    def __init__(self, root, cache=True):
        self.root = Path(root)
        self.signals_path = self.root / 'signals.json'
        self.cache_path = self.root / '.omo' / 'x4' / 'authority_index.json'
        self.ida_dir = self.root / '.omo' / 'ida_cache'
        self._ida_cache = {}
        self.addr_map = {}     # norm addr -> {name,ret,cc,params(list)}
        self.name_map = {}     # name -> [norm addr, ...]
        self._lc_names = {}    # lowercase name -> [orig names]
        self.suffix_index = {}  # last component -> [(name, addr), ...]
        self._load()

    # ------------------------------------------------------------- index --
    def _signals_stat(self):
        try:
            st = self.signals_path.stat()
            return (st.st_mtime_ns, st.st_size)
        except OSError:
            return (0, 0)

    def _load(self):
        st_key = self._signals_stat()
        if self.cache_path.exists():
            try:
                c = json.loads(self.cache_path.read_text(encoding='utf-8'))
                if (c.get('version') == INDEX_VERSION
                        and c.get('signals_mtime_ns') == st_key[0]
                        and c.get('signals_size') == st_key[1]):
                    self._install_cache(c)
                    return
            except (OSError, ValueError):
                pass
        self._build_index(st_key)

    def _install_cache(self, c):
        self.addr_map = c['addr']
        self.name_map = c['names']
        for nm in self.name_map:
            self._lc_names.setdefault(nm.lower(), []).append(nm)
        for nm, addrs in self.name_map.items():
            last = nm.rsplit('::', 1)[-1]
            self.suffix_index.setdefault(last, []).append((nm, addrs[0]))

    def _build_index(self, st_key):
        d = json.loads(self.signals_path.read_text(
            encoding='utf-8', errors='replace'))
        syms = d.get('symbols', {})
        for a, v in syms.items():
            if not isinstance(v, dict):
                continue
            na = norm_addr(a)
            if na is None:
                continue
            params = v.get('params') or []
            norm_p = []
            for p in params:
                if isinstance(p, dict):
                    norm_p.append([str(p.get('type') or 'int'),
                                   str(p.get('name') or '')])
                else:  # legacy string form: raw param text
                    norm_p.append([str(p), ''])
            self.addr_map[na] = {
                'name': v.get('name') or '',
                'ret': v.get('return_type'),
                'cc': v.get('call_convention') or '',
                'params': norm_p,
            }
        bn = d.get('_by_name', {})
        for nm, v in bn.items():
            if not isinstance(v, dict):
                continue
            ss = v.get('symbols') or {}
            addrs = sorted(x for x in (norm_addr(y) for y in ss) if x)
            if addrs:
                self.name_map[nm] = addrs
        self._install_cache({'addr': self.addr_map, 'names': self.name_map})
        # persist deterministic cache
        try:
            self.cache_path.parent.mkdir(parents=True, exist_ok=True)
            self.cache_path.write_text(json.dumps(
                {'version': INDEX_VERSION,
                 'signals_mtime_ns': st_key[0],
                 'signals_size': st_key[1],
                 'addr': self.addr_map,
                 'names': self.name_map},
                sort_keys=True, separators=(',', ':')), encoding='utf-8')
        except OSError:
            pass

    # ---------------------------------------------------------- ida fill --
    def ida_proto(self, addr):
        na = norm_addr(addr)
        if na is None:
            return None
        if na in self._ida_cache:
            return self._ida_cache[na]
        ai = int(na, 16)
        out = None
        for fn in ('func_0x%X.json' % ai, 'func_0x%08X.json' % ai):
            p = self.ida_dir / fn
            if not p.exists():
                continue
            try:
                code = json.loads(p.read_text(
                    encoding='utf-8', errors='replace')).get('decompiled', '')
            except (OSError, ValueError):
                continue
            out = parse_ida_proto(code)
            if out:
                break
        self._ida_cache[na] = out
        return out

    # ----------------------------------------------------------- resolve --
    def _mk(self, name, addr, sig, provenance, sig_name=None, multi=False):
        if sig is None:
            return None
        params = sig.get('params')
        if isinstance(params, list):
            params = fmt_signal_params(params)
        if params is None:
            params = ''
        return Resolution(name, addr, sig.get('ret'), sig.get('cc') or '',
                          params, provenance, sig_name, multi)

    def _by_addr(self, addr):
        na = norm_addr(addr)
        if na is None:
            return None
        return self.addr_map.get(na), na

    def resolve(self, name=None, addr=None, prefer_cls=None,
                allow_suffix=True):
        """Resolve to a complete prototype or None (Q4 gap).

        Params provenance: 'signals' (non-empty authority params),
        'ida' (signals empty -> typed-snapshot decompile fill),
        'empty' (both say zero params -> complete '()').
        """
        # -- address-first --
        if addr is not None:
            e, na = self._by_addr(addr)
            if e is not None:
                return self._resolve_entry(name or e['name'], na, e)
            # address known but not in signals: ida-only fill
            ip = self.ida_proto(addr)
            if ip is not None:
                return Resolution(name or ip['name'], na, ip['ret'],
                                  ip['cc'], ip['params'], 'ida',
                                  ip['name'])
            return None

        if not name:
            return None

        # -- exact name --
        cands = self._lookup_name(name)
        if cands:
            return self._pick(name, cands, prefer_cls)

        # -- flat Class_Method split --
        if '_' in name:
            for cls, mth in self._flat_splits(name):
                cands = self._lookup_name(cls + '::' + mth)
                if cands:
                    return self._pick(name, cands, prefer_cls)
                if '_' in mth:
                    for cls2, mth2 in self._flat_splits(mth):
                        cands = self._lookup_name(cls + '::' + cls2
                                                  + '::' + mth2)
                        if cands:
                            return self._pick(name, cands, prefer_cls)

        # -- CRT underscore variants --
        for v in self._underscore_variants(name):
            cands = self._lookup_name(v)
            if cands:
                return self._pick(name, cands, prefer_cls)

        # -- suffix (::Name) --
        if allow_suffix:
            hits = self.suffix_index.get(name)
            if hits:
                if prefer_cls:
                    exact = [h for h in hits if h[0] ==
                             prefer_cls + '::' + name]
                    if exact:
                        cands = self._lookup_name(exact[0][0])
                        if cands:
                            return self._pick(name, cands, prefer_cls)
                if len(hits) == 1:
                    cands = self._lookup_name(hits[0][0])
                    if cands:
                        return self._pick(name, cands, prefer_cls)
                else:
                    cands = []
                    for hn, ha in hits:
                        c = self._lookup_name(hn)
                        if c:
                            cands.extend(c)
                    if cands:
                        r = self._pick(name, cands, prefer_cls, multi=True)
                        return r
        return None

    def _lookup_name(self, name):
        """-> list of (addr, entry) for exact name."""
        out = []
        for a in self.name_map.get(name, ()):
            e = self.addr_map.get(a)
            if e is not None:
                out.append((a, e))
        if not out:
            for orig in self._lc_names.get(name.lower(), ()):
                for a in self.name_map.get(orig, ()):
                    e = self.addr_map.get(a)
                    if e is not None:
                        out.append((a, e))
        return out

    def _pick(self, call_name, cands, prefer_cls, multi=False):
        # deterministic: prefer exact sig_name match, then class prefix match,
        # then sorted addr order.
        if len(cands) > 1:
            multi = True
            if prefer_cls:
                pc = [c for c in cands
                      if (c[1].get('name') or '').startswith(prefer_cls + '::')]
                if pc:
                    cands = pc
            elif '::' in (cands[0][1].get('name') or ''):
                pass
        cands = sorted(cands, key=lambda c: (c[1].get('name') != call_name,
                                             c[0]))
        a, e = cands[0]
        return self._resolve_entry(call_name, a, e, multi=multi)

    def _resolve_entry(self, call_name, addr, entry, multi=False):
        params = entry.get('params') or []
        if params:
            return Resolution(call_name, addr, entry.get('ret'),
                              entry.get('cc') or '',
                              fmt_signal_params(
                                  [{'type': t, 'name': n} for t, n in params]),
                              'signals', entry.get('name'), multi)
        # signals says zero params -> check ida fill
        ip = self.ida_proto(addr)
        if ip is not None and ip['params']:
            return Resolution(call_name, addr, entry.get('ret'),
                              entry.get('cc') or '', ip['params'], 'ida',
                              entry.get('name'), multi)
        return Resolution(call_name, addr, entry.get('ret'),
                          entry.get('cc') or '', '', 'empty',
                          entry.get('name'), multi)

    def _flat_splits(self, name):
        parts = name.split('_')
        out = []
        for i in range(len(parts) - 1, 0, -1):
            cls = '_'.join(parts[:i])
            mth = '_'.join(parts[i:])
            out.append((cls, mth))
        return out

    def _underscore_variants(self, name):
        out = []
        if name.startswith('_') and not name.startswith('__'):
            out.append('_' + name)
        if name.startswith('__'):
            out.append(name[1:])
        return out


# ------------------------------------------------------------------ CLI --
def _selftest(root):
    au = Authority(root)
    print('index: addr=%d names=%d' % (len(au.addr_map), len(au.name_map)))
    checks = [
        ('sub_401190', None, 'signals-empty->ida'),
        (None, '0x401190', 'addr'),
        ('LoadAudioFile', None, 'signals-params'),
        ('HouseClass::GetStatus', None, 'class method'),
        ('__fload_withFB', None, 'CRT'),
    ]
    for nm, ad, label in checks:
        r = au.resolve(name=nm, addr=ad)
        print('%-34s %-22s -> %r' % (str(nm or ad), label, r))
    # ida parse check
    ip = au.ida_proto('0x401190')
    print('ida_proto(0x401190):', ip)
    assert au.resolve(addr='0x401190').params == 'int a1, int a2', 'ida fill'
    assert au.resolve(name='HouseClass::GetStatus') is not None
    print('SELFTEST OK')


if __name__ == '__main__':
    if '--selftest' in sys.argv:
        _selftest(Path(__file__).resolve().parents[4])
    else:
        print(__doc__)
