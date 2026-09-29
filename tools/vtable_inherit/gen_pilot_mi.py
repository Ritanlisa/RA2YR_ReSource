#!/usr/bin/env python3
"""MI vtable pilot generator (AbstractClass / LightSourceClass).

Binary truth (this session; thunk bodies disassembled to prove structure):
  RTTI base array : AbstractClass : IPersistStream, IRTTITypeInfo,
                    INoticeSink, INoticeSource (mdisp 0/4/8/12)
  main table 24   : IUnknown(3 slots) + ~AbstractClass@3 + 20 new
                    QI/AddRef/Release at 410260/300/310 are AbstractClass
                    OVERRIDES (secondary-table entries are this-adjust
                    thunks -> same bodies, proving one override each)
  IRTTI table 6   : 3 IUnknown thunks (auto) + 3 own impls (410210/220/230)
  sink/source 1+1 : interface defaults are nullsubs; AbstractClass
                    overrides each (410580 / 410590)
  LightSource     : ~dtor + main overrides {5,6,8,11,12,13}; all secondary
                    tables inherited verbatim

Naming: vtNN_AAAAAA after the introducing address; same name = override.
"""
from pathlib import Path

HERE = Path(__file__).resolve().parent

ABS_MAIN = [0x410260, 0x410300, 0x410310, 0x4C9150, 0x410450, 0x4C9150,
            0x4C9150, 0x4103E0, 0x4105A0, 0x410470, 0x410480, 0x4C9150,
            0x4C9150, 0x410410, 0x410490, 0x4104A0, 0x4104B0, 0x410440,
            0x4104C0, 0x4104F0, 0x410520, 0x410530, 0x410540, 0x410570]
LS_MAIN = [0x410260, 0x410300, 0x410310, 0x555080, 0x410450, 0x5550C0,
           0x555110, 0x4103E0, 0x555150, 0x410470, 0x410480, 0x555140,
           0x555130, 0x555070, 0x410490, 0x4104A0, 0x4104B0, 0x410440,
           0x4104C0, 0x4104F0, 0x410520, 0x410530, 0x410540, 0x410570]
IRT_IMPLS = [0x410210, 0x410220, 0x410230]      # IRTTITypeInfo own slots 3..5
SINK_IMPL = 0x410580                            # AbstractClass override
SRC_IMPL = 0x410590
LS_OV = [i for i in range(24) if LS_MAIN[i] != ABS_MAIN[i]]


def gen():
    hpp = ['// GENERATED MI vtable pilot (binary truth, thunk-proven)',
           '#pragma once', '']
    cpp = ['#include "pilot_lightsource.hpp"', '']

    # ---- IUnknown (3 slots, pure interface) ---------------------------
    hpp.append('struct IUnknown {')
    for i, a in enumerate(ABS_MAIN[:3]):
        hpp.append('    virtual void* u%02d_%06X();' % (i, a))
        cpp.append('void* IUnknown::u%02d_%06X() { return 0; }' % (i, a))
    hpp.append('};')
    hpp.append('struct IPersistStream : IUnknown {};\n')

    # ---- IRTTITypeInfo (3 own slots) -----------------------------------
    hpp.append('struct IRTTITypeInfo : IUnknown {')
    for i, a in enumerate(IRT_IMPLS, start=3):
        hpp.append('    virtual void* r%02d_%06X();' % (i, a))
        cpp.append('void* IRTTITypeInfo::r%02d_%06X() { return 0; }'
                   % (i, a))
    hpp.append('};\n')

    # ---- single-slot interfaces ----------------------------------------
    hpp.append('struct INoticeSink {')
    hpp.append('    virtual void* k00_%06X();' % 0x4C9150)
    cpp.append('void* INoticeSink::k00_%06X() { return 0; }' % 0x4C9150)
    hpp.append('};')
    hpp.append('struct INoticeSource {')
    hpp.append('    virtual void* c00_%06X();' % 0x4C9150)
    cpp.append('void* INoticeSource::c00_%06X() { return 0; }' % 0x4C9150)
    hpp.append('};\n')

    # ---- AbstractClass ---------------------------------------------------
    hpp.append('class AbstractClass : public IPersistStream,')
    hpp.append('                            public IRTTITypeInfo,')
    hpp.append('                            public INoticeSink,')
    hpp.append('                            public INoticeSource {')
    hpp.append('public:')
    # COM overrides (secondary tables get auto thunks — proven 4105E0..)
    for i, a in enumerate(ABS_MAIN[:3]):
        hpp.append('    void* u%02d_%06X() override;' % (i, a))
        cpp.append('void* AbstractClass::u%02d_%06X() { return 0; }'
                   % (i, a))
    hpp.append('    void* k00_%06X() override;' % 0x4C9150)
    cpp.append('void* AbstractClass::k00_%06X() { return 0; }' % 0x4C9150)
    hpp.append('    void* c00_%06X() override;' % 0x4C9150)
    cpp.append('void* AbstractClass::c00_%06X() { return 0; }' % 0x4C9150)
    # dtor + 20 new virtuals
    hpp.append('    virtual ~AbstractClass();')
    cpp.append('AbstractClass::~AbstractClass() {}')
    for i in range(4, 24):
        hpp.append('    virtual void* a%02d_%06X();' % (i, ABS_MAIN[i]))
        cpp.append('void* AbstractClass::a%02d_%06X() { return 0; }'
                   % (i, ABS_MAIN[i]))
    hpp.append('};')
    hpp.append('')

    # ---- LightSourceClass ------------------------------------------------
    hpp.append('// LightSourceClass main-table overrides: %s' % LS_OV)
    hpp.append('class LightSourceClass : public AbstractClass {')
    hpp.append('public:')
    hpp.append('    ~LightSourceClass();')
    cpp.append('LightSourceClass::~LightSourceClass() {}')
    for i in LS_OV:
        if i == 3:
            continue
        hpp.append('    void* a%02d_%06X() override;' % (i, ABS_MAIN[i]))
        cpp.append('void* LightSourceClass::a%02d_%06X() { return 0; }'
                   % (i, ABS_MAIN[i]))
    hpp.append('};')
    hpp.append('')
    cpp.append('void force_ls() { LightSourceClass* p = 0; (void)p; }')

    (HERE / 'pilot_lightsource.hpp').write_text('\n'.join(hpp),
                                                encoding='utf-8')
    (HERE / 'pilot_lightsource.cpp').write_text('\n'.join(cpp),
                                                encoding='utf-8')
    print('wrote pilot_lightsource.hpp/.cpp')


if __name__ == '__main__':
    gen()
