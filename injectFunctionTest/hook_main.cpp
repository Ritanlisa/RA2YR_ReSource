#include <windows.h>
#include "Syringe.h"
#include "tls_storage.h"
#include "shadow_txn.h"
#include "shadow_veh.h"
#include "headless_server.h"

extern "C" void PostProcStub();
extern "C" { extern volatile int mismatch_counter; }

// ============================================================
// DllMain
// ============================================================
BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
    (void)hinstDLL;
    (void)lpvReserved;

    switch (fdwReason) {
    case DLL_PROCESS_ATTACH:
        DisableThreadLibraryCalls(hinstDLL);
        shadow::InitTLS();
        shadow::InstallVEH();
        // Server starts later via ExeRun hook (DllMain can't CreateThread safely)
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
DEFINE_HOOK(7CD810, HDS_StartServer, 9)
{
    headless::StartServer(25400, []() -> int {
        return mismatch_counter;
    });
    return 0; // let original ExeRun continue (Ares/Phobos also hook this)
}
