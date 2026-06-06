// test_hooks.cpp — CellStruct::Set @ 0x42D470 with shadow execution
#include <windows.h>
#include "Syringe.h"
#include "tls_storage.h"
#include "shadow_txn.h"

extern "C" void PostProcStub();

// CellStruct = { int16_t x; int16_t y; }
struct CellStruct { __int16 X; __int16 Y; };

static CellStruct* RE_CellStruct_Set(CellStruct* pThis, __int16 x, __int16 y)
{
    pThis->X = x;
    pThis->Y = y;
    return pThis;
}

DEFINE_HOOK(42D470, CellStruct_Set_shadow, 5)
{
    auto* slot = shadow::GetSlot();

    CellStruct* pThis = (CellStruct*)R->ECX();
    __int16 x = (__int16)R->Stack<DWORD>(4);
    __int16 y = (__int16)R->Stack<DWORD>(8);

    shadow::ShadowTransaction txn;
    txn.Begin();

    CellStruct* re_result = RE_CellStruct_Set(pThis, x, y);

    txn.End();

    slot->re_result_eax = (uint32_t)re_result;
    slot->re_result_edx = 0;
    slot->original_ret_addr = R->Stack<DWORD>(0);
    R->Stack(0, (DWORD)&PostProcStub);

    return 0;
}
