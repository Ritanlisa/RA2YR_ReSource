#include <windows.h>
#include "Syringe.h"
#include "tls_storage.h"
#include "shadow_txn.h"
#include "shadow_veh.h"
#include "headless_server.h"

extern "C" void PostProcStub();
extern "C" { extern volatile int mismatch_counter; }

namespace shadow {
    ShadowSlot  g_slot_storage = {};
    DWORD       g_owner_tid    = 0;
    int         g_re_depth     = 0;
    int         g_orphan_count = 0;
}

extern "C" { void* g_current_slot = &shadow::g_slot_storage; }

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
    (void)hinstDLL;
    (void)lpvReserved;

    switch (fdwReason) {
    case DLL_PROCESS_ATTACH:
        DisableThreadLibraryCalls(hinstDLL);
        shadow::InstallVEH();
        break;

    case DLL_PROCESS_DETACH:
        headless::StopServer();
        shadow::RemoveVEH();
        break;
    }

    return TRUE;
}

// ============================================================
// SyringeHandshake
// ============================================================
SYRINGE_HANDSHAKE(pInfo)
{
    if (pInfo) {
        pInfo->Message = "Shadow Execution Framework v1.0";
    }
    return S_OK;
}

// ============================================================
// ExeRun hook (0x7CD810) -- safe server startup after DLL load
// ============================================================
DEFINE_HOOK(0x7CD810, HDS_StartServer, 0x9)
{
    shadow::g_owner_tid = GetCurrentThreadId();
    headless::StartServer(25400, []() -> int {
        return mismatch_counter;
    });
    return 0;
}
