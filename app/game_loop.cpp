#include <windows.h>
#include <commctrl.h>
#include <imm.h>

#include "gamemd/core/game_loop.hpp"
#include "gamemd/core/ddraw_init.hpp"
#include "gamemd/core/logging.hpp"
#include "gamemd/misc/audio.hpp"
#include "cmdline.hpp"
#include "resource.h"

namespace gamemd {

HINSTANCE g_hInstance;
HWND      g_hWnd;
HICON     g_hIcon;
HCURSOR   g_hCursor;
int       g_ScreenWidth;
static bool      g_running;
static bool      g_windowed;
static bool      g_spawn_mode;

// IDA: 0x849F48 — "Yuri's Revenge"
static const char* WINDOW_CLASS = "Yuri's Revenge";

// IDA: 0x7775C0 — MainWindowProc
static LRESULT CALLBACK WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    switch (msg) {
    case WM_DESTROY:
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
        if (wParam == VK_ESCAPE)
            PostMessageA(hWnd, WM_CLOSE, 0, 0);
        break;
    }
    return DefWindowProcA(hWnd, msg, wParam, lParam);
}

// IDA: 0x777C30 — InitWindowCreation
// Creates the main game window, sets up IME, registers hotkeys
static void InitWindowCreation(HINSTANCE hInstance, int screenWidth, int xRight, int yBottom)
{
    InitCommonControls();

    // IDA: g_hIcon = LoadIconA(hInstance, (LPCSTR)0x5D)  — icon resource ID 93
    g_hIcon = LoadIconA(hInstance, MAKEINTRESOURCEA(IDI_MAIN_ICON));

    // IDA: g_hCursor = LoadCursorA(g_hInstance, (LPCSTR)0x68)  — cursor resource ID 104
    g_hCursor = LoadCursorA(hInstance, MAKEINTRESOURCEA(0x68));

    WNDCLASSA wc = {};
    wc.style         = CS_VREDRAW | CS_HREDRAW;  // IDA: 3
    wc.lpfnWndProc   = WndProc;
    wc.hInstance     = hInstance;
    wc.hIcon         = g_hIcon;
    wc.hCursor       = g_hCursor;
    wc.hbrBackground = nullptr;
    wc.lpszClassName = WINDOW_CLASS;

    RegisterClassA(&wc);

    if (g_windowed) {
        // IDA: CreateWindowExA(0, "Yuri's Revenge", "Yuri's Revenge", 0x2CA0000, ...)
        g_hWnd = CreateWindowExA(
            0, WINDOW_CLASS, WINDOW_CLASS,
            WS_OVERLAPPEDWINDOW | WS_CLIPCHILDREN | WS_CLIPSIBLINGS,
            0, 0, 0, 0,
            nullptr, nullptr, hInstance, nullptr);

        RECT rc = {0, 0, xRight, yBottom};
        LONG styleEx   = GetWindowLongA(g_hWnd, GWL_EXSTYLE);
        BOOL hasMenu   = (GetMenu(g_hWnd) != nullptr);
        LONG styleWin  = GetWindowLongA(g_hWnd, GWL_STYLE);
        AdjustWindowRectEx(&rc, styleWin, hasMenu, styleEx);
        MoveWindow(g_hWnd, 0, 0, rc.right - rc.left, rc.bottom - rc.top, TRUE);
    } else {
        // IDA: fullscreen mode
        int h = GetSystemMetrics(SM_CYSCREEN);
        int w = GetSystemMetrics(SM_CXSCREEN);
        g_hWnd = CreateWindowExA(
            WS_EX_TOPMOST, WINDOW_CLASS, WINDOW_CLASS,
            WS_POPUP,
            0, 0, w, h,
            nullptr, nullptr, hInstance, nullptr);
    }

    // IDA: disable IME for the game window
    ImmAssociateContext(g_hWnd, nullptr);

    ShowWindow(g_hWnd, SW_SHOW);
    g_ScreenWidth = screenWidth;
    UpdateWindow(g_hWnd);
    SetFocus(g_hWnd);

    // IDA: RegisterHotKey(g_hWnd, 1, 7, 0x4D) — Win+M hotkey
    RegisterHotKey(g_hWnd, 1, MOD_WIN | MOD_NOREPEAT, 'M');

    // IDA: SetCursor
    HCURSOR cur = LoadCursorA(hInstance, MAKEINTRESOURCEA(0x68));
    SetCursor(cur);
}

// ============================================================
// TODO: Following functions need full IDA translation
// ============================================================

// TODO: IDA InitializeDDraw @ 0x4A42F0 — called 3 times
// TODO: IDA DSurface::CreatePrimary @ 0x4BA770
// TODO: IDA InitializeAudioStreaming @ 0x53DE00
// TODO: IDA InitGame @ 0x52BA60 (4333B, 146BBs)
// TODO: IDA MainGame @ 0x48CCC0
// TODO: IDA MenuSelect @ 0x52D9A0 (4536B, 222BBs)

bool GameLoopInit(HINSTANCE hInstance, HINSTANCE hPrevInstance,
                   LPSTR lpCmdLine, int nShowCmd)
{
    (void)hPrevInstance;
    (void)nShowCmd;

    g_hInstance = hInstance;

    // IDA: ParseCommandLine with argc/argv
    GameConfig config;
    ParseCommandLine(__argc, __argv);
    config.no_cd     = byte_89E3A0;
    config.windowed  = (g_DDraw_Initialized != 0);

    g_windowed   = config.windowed;
    g_spawn_mode = config.spawn_mode;

#ifdef _DEBUG
    LogSetLevel(LogLevel::Trace);
#endif

    LOG_INFO("============================================");
    LOG_INFO("  RA2YR ReSource - gamemd.exe");
    LOG_INFO("============================================");

    if (g_spawn_mode)    LOG_INFO("  -SPAWN mode");
    if (config.no_cd)    LOG_INFO("  -CD (NoCD)");
    if (config.windowed) LOG_INFO("  -WINDOW mode");

    // IDA: InitWindowCreation(hInstance, 0, GetSystemMetrics(SM_CXSCREEN), GetSystemMetrics(SM_CYSCREEN))
    int screenW = GetSystemMetrics(SM_CXSCREEN);
    int screenH = GetSystemMetrics(SM_CYSCREEN);
    InitWindowCreation(hInstance, 0, screenW, screenH);
    LOG_INFO("Window created: %dx%d %s", screenW, screenH,
        g_windowed ? "windowed" : "fullscreen");

    if (!DDrawInit(g_hWnd, screenW, screenH, g_windowed)) {
        LOG_ERROR("DDrawInit failed");
        DestroyWindow(g_hWnd);
        return false;
    }
    LOG_INFO("DirectDraw7 initialized");

    if (!AudioInit(g_hWnd)) {
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

void GameLoopRun()
{
    if (g_spawn_mode) {
        LOG_INFO("Entering SpawnModeEnter()");
        SpawnModeEnter();
    }

    MainGame();
}

void GameLoopShutdown()
{
    LOG_INFO("MainGame: shutting down...");
    DDrawShutdown();
    AudioShutdown();
    if (g_hWnd) {
        DestroyWindow(g_hWnd);
        g_hWnd = nullptr;
    }
    UnregisterClassA(WINDOW_CLASS, g_hInstance);
    LOG_INFO("MainGame: shutdown complete");
    LogClose();
}

int GameLoopMessagePump(MSG* msg, UINT wMsgFilterMin, UINT wMsgFilterMax, HWND hWnd, UINT flags)
{
    (void)hWnd;
    (void)flags;
    return PeekMessageA(msg, nullptr, wMsgFilterMin, wMsgFilterMax, PM_REMOVE);
}

bool TranslateMessageDispatch(MSG* msg)
{
    return msg->message != WM_QUIT;
}

} // namespace gamemd
