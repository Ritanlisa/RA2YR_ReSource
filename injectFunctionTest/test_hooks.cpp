// test_hooks.cpp — CellStruct::Set shadow hook + headless polling
#include <windows.h>
#include "Syringe.h"
#include "tls_storage.h"
#include "shadow_txn.h"
#include "headless_server.h"
#include "virtual_screen.h"

extern "C" void PostProcStub();

struct CellStruct { __int16 X; __int16 Y; };

static CellStruct* RE_CellStruct_Set(CellStruct* pThis, __int16 x, __int16 y)
{
    pThis->X = x;
    pThis->Y = y;
    return pThis;
}

// CellStruct::Set @ 0x42D470
DEFINE_HOOK(42D470, CellStruct_Set_shadow, 5)
{
    auto* slot = shadow::GetSlot();

    CellStruct* pThis  = (CellStruct*)R->ECX();
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

// MainGameFrame @ 0x48C8B0 — poll headless commands every frame
// Server runs on dedicated thread; PollCommands is a no-op
// but this hook confirms the game loop is active
DEFINE_HOOK(48C8B0, HDS_PollCommands, 5)
{
    headless::PollCommands();
    return 0;
}
