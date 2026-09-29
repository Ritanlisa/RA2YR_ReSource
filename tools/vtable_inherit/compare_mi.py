#!/usr/bin/env python3
"""MI vtable comparator: original PE 4-table truth vs our pilot obj.

Per-table verdict rules (AbstractClass / LightSourceClass family):
  main 24  : slot0-2 owner=AbstractClass (COM overrides, addr-coded
             u00_410260...), slot3 = ??_E<cls> (per level), slots 4+:
             owner = LightSourceClass iff original slot overridden there,
             else AbstractClass; address code must equal ABS_MAIN[i].
  IRTTI 6  : slot0-2 = W3 thunk symbols (owner AbstractClass, matching the
             original this-adjust thunks at 4105E0..), slot3-5 owner=
             IRTTITypeInfo addr-coded r03_410210...
  sink/src : 1 slot each, owner=AbstractClass at both levels (inherited
             override), addr-coded k00_/c00_.

Usage: python tools/vtable_inherit/compare_mi.py
"""
import re
import sys
from pathlib import Path

HERE = Path(__file__).resolve().parent
sys.path.insert(0, str(HERE))
from read_obj_vtables import obj_vtables        # noqa: E402
from gen_pilot_mi import ABS_MAIN, LS_MAIN, LS_OV, IRT_IMPLS  # noqa: E402
SYM = re.compile(r'^\?(\w+)@(\w+)@@(W3)?')


def parse(sym):
    """symbol -> (func_name, owner_cls, is_thunk)"""
    m = SYM.match(sym)
    if not m:
        return None
    return m.group(1), m.group(2), bool(m.group(3))


def main():
    ours = obj_vtables(str(HERE / 'pilot_lightsource.obj'))
    ok = True

    def fail(msg):
        nonlocal ok
        ok = False
        print('   FAIL:', msg)

    # ---- main tables -------------------------------------------------
    for cls, orig in (('AbstractClass', ABS_MAIN), ('LightSourceClass', LS_MAIN)):
        t = ours.get(cls + '::IPersistStream')
        print('== %s main (expect %d slots)' % (cls, len(orig)))
        if not t:
            fail('no table'); continue
        if len(t) != len(orig):
            fail('slot count %d != %d' % (len(t), len(orig)))
        for i in range(min(len(t), len(orig))):
            if i == 3:
                good = t[i].startswith('??_E%s@' % cls)
                if not good:
                    fail('slot3 %s != ??_E%s' % (t[i][:20], cls))
                continue
            p = parse(t[i])
            if not p:
                fail('slot%d unparsed %s' % (i, t[i][:30])); continue
            fn, owner, thunk = p
            want_owner = ('LightSourceClass'
                          if cls == 'LightSourceClass' and i in LS_OV
                          else 'AbstractClass')
            good = (owner == want_owner and not thunk
                    and ('_%06X' % ABS_MAIN[i]) in fn)
            if not good:
                fail('slot%d owner=%s want=%s fn=%s'
                     % (i, owner, want_owner, fn))
    # ---- IRTTI secondary tables --------------------------------------
    for cls in ('AbstractClass', 'LightSourceClass'):
        t = ours.get(cls + '::IRTTITypeInfo')
        print('== %s IRTTITypeInfo (expect 6)' % cls)
        if not t:
            fail('no table'); continue
        if len(t) != 6:
            fail('slot count %d != 6' % len(t))
        for i in range(min(len(t), 6)):
            p = parse(t[i])
            if not p:
                fail('irtt slot%d unparsed' % i); continue
            fn, owner, thunk = p
            if i < 3:
                # original 4105E0.. = this-adjust thunks to the AbstractClass
                # COM overrides
                good = thunk and owner == 'AbstractClass' \
                    and ('_%06X' % ABS_MAIN[i]) in fn
            else:
                good = (not thunk and owner == 'IRTTITypeInfo'
                        and ('_%06X' % IRT_IMPLS[i - 3]) in fn)
            if not good:
                fail('irtt slot%d owner=%s thunk=%s fn=%s'
                     % (i, owner, thunk, fn))
    # ---- single-slot tables ------------------------------------------
    for base, code in (('INoticeSink', 'k00_4C9150'),
                       ('INoticeSource', 'c00_4C9150')):
        for cls in ('AbstractClass', 'LightSourceClass'):
            t = ours.get('%s::%s' % (cls, base))
            print('== %s %s (expect 1)' % (cls, base))
            if not t:
                fail('no table'); continue
            p = parse(t[0]) if t else None
            good = (len(t) == 1 and p and p[1] == 'AbstractClass'
                    and p[0] == code)
            if not good:
                fail('slot0 %s (want AbstractClass %s)'
                     % (t[0][:40] if t else 'empty', code))
    print()
    print('VERDICT:', 'ALL SLOT-PERFECT (MI 4-table)' if ok
          else 'MISMATCHES PRESENT')
    return 0 if ok else 1


sys.exit(main())
