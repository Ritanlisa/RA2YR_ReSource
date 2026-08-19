// headless_server.h -- TCP command server for automated testing
// winsock2.h conflict: must NOT include any winsock headers here.
// All implementation details are in headless_server.cpp.
// Trigger via: set SHADOW_HEADLESS=1 before launching Syringe
#pragma once
#include <windows.h>

namespace headless {

using StatsCallback = int(*)();

bool StartServer(int port, StatsCallback onStats);
void PollCommands();
void StopServer();

// Defined in PostProcStub.asm (C linkage)
extern "C" { extern volatile int mismatch_counter; }

} // namespace headless
