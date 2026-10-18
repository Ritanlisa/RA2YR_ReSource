// X74: e4 carrier for the COM class-factory global object pUnk @ 0xA8E8C8.
// Binary evidence: vtable 0x7EA564 = [0x429210, 0x4E8240, 0x4E8250, 0x429270,
// 0x4E8260] (IClassFactory layout: QueryInterface, AddRef, Release,
// CreateInstance, LockServer); init 0x4E7CE0 = single vptr store, now
// compiler dynamic-init of this typed global. size = 4 (vptr only).
#pragma once

#include <cstdint>
#include <windows.h>

namespace gamemd {

struct TiberianSunClassFactory {
    virtual int QueryInterface_Helper(const void * a2, unsigned int * a3);  // 0x429210 vt+0
    virtual int vt_placeholder_00();  // 0x4E8240 vt+4 (AddRef)
    virtual int vt_placeholder_01();  // 0x4E8250 vt+8 (Release)
    virtual int QueryInterface_Dispatch(int a2, const IID * a3, void ** a4);  // 0x429270 vt+12 (CreateInstance)
    virtual int vt_placeholder_02();  // 0x4E8260 vt+16 (LockServer)
};

} // namespace gamemd
