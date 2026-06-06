#include <windows.h>
#include "Syringe.h"
#include "tls_storage.h"
#include "shadow_txn.h"
#include "shadow_veh.h"
#include "headless_server.h"

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

        // Headless mode: set SHADOW_HEADLESS=1 before launching Syringe
        // or pass -headless in gamemd.exe command line args
        if (GetEnvironmentVariableA("SHADOW_HEADLESS", nullptr, 0) > 0
            || strstr(GetCommandLineA(), "-headless")|| strstr(GetCommandLineA(), "-HEADLESS")) {
            int port = 25400;
            char portBuf[16];
            if (GetEnvironmentVariableA("SHADOW_PORT", portBuf, sizeof(portBuf)) > 0)
                port = atoi(portBuf);
            headless::StartServer(port, []() -> int {
                extern volatile int mismatch_counter;
                return mismatch_counter;
            });
        }
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
