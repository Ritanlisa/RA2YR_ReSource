#include <windows.h>

#include "gamemd/core/game_loop.hpp"
#include "gamemd/core/ddraw_init.hpp"
#include "gamemd/core/logging.hpp"
#include "gamemd/misc/audio.hpp"
#include "cmdline.hpp"
#include "resource.h"

namespace gamemd {

HINSTANCE g_hInstance;
HWND      g_hWnd;
static bool      g_running;
static bool      g_windowed;
static bool      g_spawn_mode;

static const char* WINDOW_CLASS = "Yuri's Revenge";

static LRESULT CALLBACK WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    switch (msg) {
    case WM_CREATE:
        LOG_TRACE("WndProc: WM_CREATE hwnd=0x%08x", (unsigned)(uintptr_t)hWnd);
        break;

    case WM_DESTROY:
        LOG_INFO("WndProc: WM_DESTROY, posting quit");
        g_running = false;
        PostQuitMessage(0);
        break;

    case WM_PAINT: {
        PAINTSTRUCT ps;
        BeginPaint(hWnd, &ps);
        EndPaint(hWnd, &ps);
        break;
    }

    case WM_KEYDOWN:
        LOG_TRACE("WndProc: WM_KEYDOWN wParam=0x%x", (unsigned)wParam);
        if (wParam == VK_ESCAPE) {
            LOG_INFO("WndProc: ESC pressed, sending WM_CLOSE");
            PostMessageA(hWnd, WM_CLOSE, 0, 0);
        }
        break;

    case WM_CLOSE:
        LOG_INFO("WndProc: WM_CLOSE received");
        break;

    case WM_ACTIVATEAPP:
        LOG_TRACE("WndProc: WM_ACTIVATEAPP wParam=%d", (int)wParam);
        break;
    }

    return DefWindowProcA(hWnd, msg, wParam, lParam);
}

bool GameLoop_Init(HINSTANCE hInstance, HINSTANCE hPrevInstance,
                   LPSTR lpCmdLine, int nShowCmd)
{
    (void)hPrevInstance;
    (void)nShowCmd;

    g_hInstance = hInstance;

    auto config = ParseCommandLine(lpCmdLine);
    g_windowed   = config.windowed;
    g_spawn_mode = config.spawn_mode;

#ifdef _DEBUG
    Log_SetLevel(LogLevel::Trace);
#endif

    LOG_INFO("============================================");
    LOG_INFO("  RA2YR ReSource - gamemd.exe");
    LOG_INFO("  Yuri's Revenge Source Reconstruction");
    LOG_INFO("============================================");

    if (g_spawn_mode)    LOG_INFO("  -SPAWN mode");
    if (config.no_cd)    LOG_INFO("  -CD (NoCD)");
    if (config.windowed) LOG_INFO("  -WINDOW mode");
    if (config.enable_log) LOG_INFO("  -LOG");

    WNDCLASSA wc = {};
    wc.style         = CS_VREDRAW | CS_HREDRAW;
    wc.lpfnWndProc   = WndProc;
    wc.hInstance     = hInstance;
    wc.hIcon         = LoadIconA(hInstance, MAKEINTRESOURCEA(IDI_MAIN_ICON));
    wc.hCursor       = LoadCursorA(nullptr, IDC_ARROW);
    wc.hbrBackground = nullptr;
    wc.lpszClassName = WINDOW_CLASS;

    if (!RegisterClassA(&wc)) {
        LOG_ERROR("RegisterClassA failed");
        return false;
    }

    int width  = GetSystemMetrics(SM_CXSCREEN);
    int height = GetSystemMetrics(SM_CYSCREEN);

    DWORD style    = g_windowed ? WS_OVERLAPPEDWINDOW : WS_POPUP;
    DWORD style_ex = g_windowed ? 0 : WS_EX_TOPMOST;

    g_hWnd = CreateWindowExA(
        style_ex, WINDOW_CLASS, WINDOW_CLASS,
        style, 0, 0, width, height,
        nullptr, nullptr, hInstance, nullptr);

    if (!g_hWnd) {
        LOG_ERROR("CreateWindowExA failed");
        return false;
    }

    ShowWindow(g_hWnd, SW_SHOW);
    UpdateWindow(g_hWnd);
    SetFocus(g_hWnd);

    LOG_INFO("Window created: %dx%d %s", width, height,
        g_windowed ? "windowed" : "fullscreen");

    if (!DDraw_Init(g_hWnd, width, height, g_windowed)) {
        LOG_ERROR("DDraw_Init(%dx%d, %s) failed", width, height,
            g_windowed ? "windowed" : "fullscreen");
        DestroyWindow(g_hWnd);
        return false;
    }
    LOG_INFO("DirectDraw7 initialized");

    if (!Audio_Init(g_hWnd)) {
        LOG_WARN("DirectSound init failed — audio disabled");
    } else {
        LOG_INFO("DirectSound initialized");
    }

    if (!InitGame(config.no_cd)) {
        LOG_ERROR("InitGame FAILED");
        return false;
    }
    LOG_INFO("InitGame completed successfully");

    return true;
}

void GameLoop_Run()
{
    if (g_spawn_mode) {
        LOG_INFO("Entering SpawnMode_Enter()");
        SpawnMode_Enter();
    }

    Main_Game();
}

void GameLoop_Shutdown()
{
    LOG_INFO("Main_Game: shutting down...");
    DDraw_Shutdown();
    Audio_Shutdown();
    if (g_hWnd) {
        LOG_TRACE("Main_Game: destroying window 0x%08x", (unsigned)(uintptr_t)g_hWnd);
        DestroyWindow(g_hWnd);
        g_hWnd = nullptr;
    }
    UnregisterClassA(WINDOW_CLASS, g_hInstance);
    LOG_INFO("Main_Game: shutdown complete");
    Log_Close();
}

int GameLoop_MessagePump(MSG* msg, UINT wMsgFilterMin, UINT wMsgFilterMax, HWND hWnd, UINT flags)
{
    (void)hWnd;
    (void)flags;
    return PeekMessageA(msg, nullptr, wMsgFilterMin, wMsgFilterMax, PM_REMOVE);
}

bool TranslateMessage_Dispatch(MSG* msg)
{
    if (msg->message == WM_QUIT)
        return false;
    return true;
}

} // namespace gamemd
