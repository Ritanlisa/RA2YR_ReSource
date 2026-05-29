#include <windows.h>

#include "gamemd/core/game_loop.hpp"
#include "gamemd/core/ddraw_init.hpp"
#include "resource.h"

namespace gamemd {

static HINSTANCE g_hInstance;
static HWND      g_hWnd;
static bool      g_running;
static int       g_initialized;

static const char* WINDOW_CLASS = "Yuri's Revenge";

static LRESULT CALLBACK WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    switch (msg) {
    case WM_CREATE:
        g_initialized = 1;
        break;

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
        if (wParam == VK_ESCAPE) {
            PostMessageA(hWnd, WM_CLOSE, 0, 0);
        }
        break;

    case WM_ACTIVATEAPP:
        break;

    default:
        break;
    }

    return DefWindowProcA(hWnd, msg, wParam, lParam);
}

bool GameLoop_Init(HINSTANCE hInstance, HINSTANCE /*hPrevInstance*/,
                   LPSTR /*lpCmdLine*/, int /*nShowCmd*/)
{
    g_hInstance = hInstance;

    WNDCLASSA wc = {};
    wc.style         = CS_VREDRAW | CS_HREDRAW;
    wc.lpfnWndProc   = WndProc;
    wc.hInstance     = hInstance;
    wc.hIcon         = LoadIconA(hInstance, MAKEINTRESOURCEA(IDI_MAIN_ICON));
    wc.hCursor       = LoadCursorA(nullptr, IDC_ARROW);
    wc.hbrBackground = nullptr;
    wc.lpszClassName = WINDOW_CLASS;

    if (!RegisterClassA(&wc)) return false;

    int width  = GetSystemMetrics(SM_CXSCREEN);
    int height = GetSystemMetrics(SM_CYSCREEN);

    g_hWnd = CreateWindowExA(
        WS_EX_TOPMOST,
        WINDOW_CLASS,
        WINDOW_CLASS,
        WS_POPUP,
        0, 0, width, height,
        nullptr, nullptr, hInstance, nullptr);

    if (!g_hWnd) return false;

    ShowWindow(g_hWnd, SW_SHOW);
    UpdateWindow(g_hWnd);
    SetFocus(g_hWnd);

    if (!DDraw_Init(g_hWnd, width, height, false)) {
        DestroyWindow(g_hWnd);
        return false;
    }

    return true;
}

void GameLoop_Run()
{
    g_running = true;
    MSG msg = {};

    while (g_running) {
        while (PeekMessageA(&msg, nullptr, 0, 0, PM_REMOVE)) {
            if (msg.message == WM_QUIT) {
                g_running = false;
                break;
            }
            TranslateMessage(&msg);
            DispatchMessageA(&msg);
        }

        if (!g_running) break;

        DDraw_Flip();
    }
}

void GameLoop_Shutdown()
{
    DDraw_Shutdown();
    if (g_hWnd) {
        DestroyWindow(g_hWnd);
        g_hWnd = nullptr;
    }
    UnregisterClassA(WINDOW_CLASS, g_hInstance);
}

} // namespace gamemd
