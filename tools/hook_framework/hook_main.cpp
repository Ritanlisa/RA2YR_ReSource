// hook_main.cpp — Hook DLL entry point
// Injected into gamemd.exe by Syringe.
// Provides shadow execution framework for RE function validation.
#include <windows.h>
#include "Syringe.h"
#include "tls_storage.h"
#include "shadow_txn.h"
#include "shadow_veh.h"

// PostProcStub — assembly stub, reached after original function RET
extern "C" void PostProcStub();

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
        break;

    case DLL_PROCESS_DETACH:
        shadow::RemoveVEH();
        break;
    }

    return TRUE;
}

// ============================================================
// SyringeHandshake — validates gamemd.exe compatibility
// ============================================================
SYRINGE_HANDSHAKE(pInfo)
{
    // Accept any gamemd.exe for now (same binary we're running in)
    // TODO: add version checking (timestamp, filesize, CRC)
    if (pInfo) {
        pInfo->Message = "Shadow Execution Framework v1.0";
    }
    return S_OK;
}
