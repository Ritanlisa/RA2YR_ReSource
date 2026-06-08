// headless_server.cpp -- TCP command server with dedicated thread
#define WIN32_LEAN_AND_MEAN
#include <winsock2.h>
#include <windows.h>
#include <cstdio>
#include <cstdlib>
#include "headless_server.h"
#include "tls_storage.h"
#include "element_tracker.h"

namespace headless {

static SOCKET  g_listen_socket = INVALID_SOCKET;
static HANDLE  g_server_thread = nullptr;
static volatile bool g_running = false;
static int     g_port = 25400;
static StatsCallback g_stats_fn = nullptr;

// ============================================================
// Helpers
// ============================================================

static void SendResponse(SOCKET client, const char* json)
{
    if (client != INVALID_SOCKET) {
        send(client, json, (int)strlen(json), 0);
        send(client, "\n", 1, 0);
    }
}

static bool RecvLine(SOCKET client, char* buf, int maxlen)
{
    int i = 0;
    while (i < maxlen - 1) {
        char c;
        int n = recv(client, &c, 1, 0);
        if (n <= 0) return false;
        if (c == '\n') { buf[i] = '\0'; return true; }
        if (c == '\r') continue;
        buf[i++] = c;
    }
    buf[i] = '\0';
    return true;
}

static void HandleCommand(SOCKET client, const char* cmd)
{
    char response[8192];

    if (strncmp(cmd, "STATS", 5) == 0) {
        int mismatches = g_stats_fn ? g_stats_fn() : mismatch_counter;
        snprintf(response, sizeof(response),
            "{\"ok\":true,\"mismatch_count\":%d}", mismatches);
        SendResponse(client, response);
    }
    else if (strncmp(cmd, "MEM ", 4) == 0) {
        unsigned int addr = 0, size = 0;
        sscanf(cmd + 4, "%x %u", &addr, &size);
        if (size > 1024) size = 1024;
        __try {
            const unsigned char* p = (const unsigned char*)(uintptr_t)addr;
            int pos = snprintf(response, 128, "{\"ok\":true,\"addr\":\"0x%08X\",\"data\":\"", addr);
            for (unsigned int i = 0; i < size && pos < 8100; ++i)
                pos += snprintf(response + pos, 8, "%02X", p[i]);
            snprintf(response + pos, 8, "\"}");
            SendResponse(client, response);
        } __except(EXCEPTION_EXECUTE_HANDLER) {
            SendResponse(client, "{\"ok\":false,\"error\":\"access_violation\"}");
        }
    }
    else if (strncmp(cmd, "REG", 3) == 0) {
        auto* slot = shadow::GetSlot();
        snprintf(response, sizeof(response),
            "{\"ok\":true,\"re_eax\":\"0x%08X\",\"re_edx\":\"0x%08X\",\"orig_ret\":\"0x%08X\",\"in_shadow\":%s}",
            slot->re_result_eax, slot->re_result_edx, slot->original_ret_addr,
            slot->in_shadow ? "true" : "false");
        SendResponse(client, response);
    }
    else if (strncmp(cmd, "HOOKS", 5) == 0) {
        snprintf(response, sizeof(response),
            "{\"ok\":true,\"mismatch_count\":%d}", mismatch_counter);
        SendResponse(client, response);
    }
    else if (strncmp(cmd, "QUIT", 4) == 0) {
        SendResponse(client, "{\"ok\":true,\"action\":\"exit\"}");
        ExitProcess(0);
    }
    else if (strncmp(cmd, "SCREEN", 6) == 0) {
        // Return primary surface info + frame buffer
        HWND hwnd = FindWindowA(nullptr, "Yuri's Revenge");
        RECT r = {};
        if (hwnd) GetClientRect(hwnd, &r);
        if (r.right == 0) { r.right = 800; r.bottom = 600; }

        // Allocate a static frame buffer on first call
        static unsigned char* g_frame_buffer = nullptr;
        static int g_fb_size = 0;
        if (!g_frame_buffer) {
            // 1920x1080 RGBA
            g_fb_size = 1920 * 1080 * 4;
            g_frame_buffer = (unsigned char*)VirtualAlloc(nullptr, g_fb_size, MEM_COMMIT, PAGE_READWRITE);
        }

        // Try to BitBlt from screen
        bool captured = false;
        if (hwnd && g_frame_buffer) {
            HDC hdcScreen = GetDC(hwnd);
            if (hdcScreen) {
                HDC hdcMem = CreateCompatibleDC(hdcScreen);
                BITMAPINFO bmi = {};
                bmi.bmiHeader.biSize = sizeof(bmi.bmiHeader);
                bmi.bmiHeader.biWidth = 1920;
                bmi.bmiHeader.biHeight = -1080;
                bmi.bmiHeader.biPlanes = 1;
                bmi.bmiHeader.biBitCount = 32;
                bmi.bmiHeader.biCompression = BI_RGB;

                void* bits = nullptr;
                HBITMAP hbm = CreateDIBSection(hdcMem, &bmi, DIB_RGB_COLORS, &bits, nullptr, 0);
                if (hbm && bits) {
                    HBITMAP old = (HBITMAP)SelectObject(hdcMem, hbm);
                    BitBlt(hdcMem, 0, 0, 1920, 1080, hdcScreen, 0, 0, SRCCOPY);
                    memcpy(g_frame_buffer, bits, 1920 * 1080 * 4);
                    SelectObject(hdcMem, old);
                    captured = true;
                }
                if (hbm) DeleteObject(hbm);
                DeleteDC(hdcMem);
                ReleaseDC(hwnd, hdcScreen);
            }
        }

        snprintf(response, sizeof(response),
            "{\"ok\":true,\"window\":\"%s\",\"client\":[%ld,%ld,%ld,%ld],"
            "\"virtual\":{\"width\":1920,\"height\":1080,\"bpp\":32,"
            "\"addr\":\"0x%08X\",\"size\":%d,\"captured\":%s}}",
            hwnd ? "found" : "none",
            r.left, r.top, r.right, r.bottom,
            (uintptr_t)g_frame_buffer, g_fb_size,
            captured ? "true" : "false");
        SendResponse(client, response);
    }
    else if (strncmp(cmd, "ELEMENTS RESET", 14) == 0) {
        elements::Reset();
        SendResponse(client, "{\"ok\":true,\"action\":\"reset\"}");
    }
    else if (strncmp(cmd, "ELEMENTS ", 9) == 0) {
        // Paginated: ELEMENTS <offset> <count>
        int offset = 0, count = 100;
        sscanf(cmd + 9, "%d %d", &offset, &count);
        if (count > 500) count = 500;

        int total = elements::Count();
        int pos = snprintf(response, 256,
            "{\"ok\":true,\"total\":%d,\"offset\":%d,\"elements\":[", total, offset);
        int shown = 0;
        for (int i = offset; i < total && shown < count && pos < (int)sizeof(response)-256; ++i) {
            auto& e = elements::Get(i);
            const char* typeStr = "?";
            switch (e.type) {
                case elements::SHP:  typeStr = "shp"; break;
                case elements::TEXT: typeStr = "text"; break;
                case elements::BINK: typeStr = "bink"; break;
                case elements::RECT: typeStr = "rect"; break;
                case elements::VXL:  typeStr = "vxl"; break;
                default: break;
            }
            pos += snprintf(response + pos, sizeof(response) - pos,
                "%s{\"type\":\"%s\",\"x\":%d,\"y\":%d,\"w\":%d,\"h\":%d,"
                "\"frame\":%u,\"surf\":\"%04X\",\"ts\":%u}",
                shown > 0 ? "," : "", typeStr,
                e.x, e.y, e.w, e.h, e.frame,
                (unsigned)(e.surface_addr & 0xFFFF), e.ts);
            ++shown;
            if (pos >= (int)sizeof(response) - 260) break;
        }
        snprintf(response + pos, sizeof(response) - pos, "]}");
        SendResponse(client, response);
    }
    else if (strncmp(cmd, "ELEMENTS", 8) == 0) {
        // Quick summary only
        int count = elements::Count();
        snprintf(response, sizeof(response),
            "{\"ok\":true,\"count\":%d,\"hint\":\"Use ELEMENTS <offset> <count> to paginate\"}", count);
        SendResponse(client, response);
    }
    else if (strncmp(cmd, "ECHO ", 5) == 0) {
        snprintf(response, sizeof(response), "{\"ok\":true,\"echo\":\"%.256s\"}", cmd + 5);
        SendResponse(client, response);
    }
    // ============================================================
    // Input simulation commands
    // ============================================================
    else if (strncmp(cmd, "FOCUS", 5) == 0) {
        HWND hwnd = FindWindowA(nullptr, "Yuri's Revenge");
        if (hwnd) {
            SetForegroundWindow(hwnd);
            SendResponse(client, "{\"ok\":true,\"action\":\"focus\"}");
        } else {
            SendResponse(client, "{\"ok\":false,\"error\":\"window_not_found\"}");
        }
    }
    else if (strncmp(cmd, "WINDOW", 6) == 0) {
        HWND hwnd = FindWindowA(nullptr, "Yuri's Revenge");
        RECT r = {};
        if (hwnd) {
            GetWindowRect(hwnd, &r);
            snprintf(response, sizeof(response),
                "{\"ok\":true,\"hwnd\":\"0x%08X\",\"rect\":[%ld,%ld,%ld,%ld],\"w\":%ld,\"h\":%ld}",
                (uint32_t)(uintptr_t)hwnd, r.left, r.top, r.right, r.bottom,
                r.right - r.left, r.bottom - r.top);
        } else {
            snprintf(response, sizeof(response), "{\"ok\":false,\"error\":\"window_not_found\"}");
        }
        SendResponse(client, response);
    }
    else if (strncmp(cmd, "MOUSEMOVE ", 10) == 0) {
        int x = 0, y = 0;
        if (sscanf(cmd + 10, "%d %d", &x, &y) == 2) {
            SetCursorPos(x, y);
            HWND hwnd = FindWindowA(nullptr, "Yuri's Revenge");
            if (hwnd) {
                POINT pt = { x, y };
                ScreenToClient(hwnd, &pt);
                LPARAM lParam = MAKELPARAM(pt.x, pt.y);
                PostMessageA(hwnd, WM_MOUSEMOVE, 0, lParam);
            }
            snprintf(response, sizeof(response), "{\"ok\":true,\"x\":%d,\"y\":%d}", x, y);
        } else {
            snprintf(response, sizeof(response), "{\"ok\":false,\"error\":\"usage: MOUSEMOVE <x> <y>\"}");
        }
        SendResponse(client, response);
    }
    else if (strncmp(cmd, "CLICKAT ", 8) == 0) {
        int x = 0, y = 0;
        char btn[16] = "left";
        sscanf(cmd + 8, "%d %d %15s", &x, &y, btn);
        SetCursorPos(x, y);
        HWND hwnd = FindWindowA(nullptr, "Yuri's Revenge");
        if (hwnd) {
            POINT pt = { x, y };
            ScreenToClient(hwnd, &pt);
            LPARAM lParam = MAKELPARAM(pt.x, pt.y);
            UINT downMsg = (btn[0] == 'r') ? WM_RBUTTONDOWN : WM_LBUTTONDOWN;
            UINT upMsg   = (btn[0] == 'r') ? WM_RBUTTONUP   : WM_LBUTTONUP;
            WPARAM wParam = (btn[0] == 'r') ? MK_RBUTTON : MK_LBUTTON;
            PostMessageA(hwnd, downMsg, wParam, lParam);
            Sleep(50);
            PostMessageA(hwnd, upMsg, 0, lParam);
        }
        snprintf(response, sizeof(response), "{\"ok\":true,\"x\":%d,\"y\":%d,\"btn\":\"%s\"}", x, y, btn);
        SendResponse(client, response);
    }
    else if (strncmp(cmd, "CLICK ", 6) == 0) {
        char btn[16] = "left";
        sscanf(cmd + 6, "%15s", btn);
        POINT pt;
        GetCursorPos(&pt);
        HWND hwnd = FindWindowA(nullptr, "Yuri's Revenge");
        if (hwnd) {
            ScreenToClient(hwnd, &pt);
            LPARAM lParam = MAKELPARAM(pt.x, pt.y);
            UINT downMsg = (btn[0] == 'r') ? WM_RBUTTONDOWN : WM_LBUTTONDOWN;
            UINT upMsg   = (btn[0] == 'r') ? WM_RBUTTONUP   : WM_LBUTTONUP;
            WPARAM wParam = (btn[0] == 'r') ? MK_RBUTTON : MK_LBUTTON;
            PostMessageA(hwnd, downMsg, wParam, lParam);
            Sleep(50);
            PostMessageA(hwnd, upMsg, 0, lParam);
        }
        snprintf(response, sizeof(response), "{\"ok\":true,\"btn\":\"%s\"}", btn);
        SendResponse(client, response);
    }
    else if (strncmp(cmd, "KEY ", 4) == 0) {
        unsigned int vk = 0;
        if (sscanf(cmd + 4, "%x", &vk) == 1 || sscanf(cmd + 4, "%u", &vk) == 1) {
            HWND hwnd = FindWindowA(nullptr, "Yuri's Revenge");
            if (hwnd) {
                PostMessageA(hwnd, WM_KEYDOWN, vk, 0);
                Sleep(30);
                PostMessageA(hwnd, WM_KEYUP, vk, 0);
            }
            snprintf(response, sizeof(response), "{\"ok\":true,\"vk\":\"0x%02X\"}", vk);
        } else {
            snprintf(response, sizeof(response), "{\"ok\":false,\"error\":\"usage: KEY <vk_hex>\"}");
        }
        SendResponse(client, response);
    }
    else if (strncmp(cmd, "KEYDOWN ", 8) == 0) {
        unsigned int vk = 0;
        if (sscanf(cmd + 8, "%x", &vk) == 1 || sscanf(cmd + 8, "%u", &vk) == 1) {
            HWND hwnd = FindWindowA(nullptr, "Yuri's Revenge");
            if (hwnd) PostMessageA(hwnd, WM_KEYDOWN, vk, 0);
            snprintf(response, sizeof(response), "{\"ok\":true,\"vk\":\"0x%02X\"}", vk);
        }
        SendResponse(client, response);
    }
    else if (strncmp(cmd, "KEYUP ", 6) == 0) {
        unsigned int vk = 0;
        if (sscanf(cmd + 6, "%x", &vk) == 1 || sscanf(cmd + 6, "%u", &vk) == 1) {
            HWND hwnd = FindWindowA(nullptr, "Yuri's Revenge");
            if (hwnd) PostMessageA(hwnd, WM_KEYUP, vk, 0);
            snprintf(response, sizeof(response), "{\"ok\":true,\"vk\":\"0x%02X\"}", vk);
        }
        SendResponse(client, response);
    }
    else if (strncmp(cmd, "DRAG ", 5) == 0) {
        int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
        char btn[16] = "left";
        sscanf(cmd + 5, "%d %d %d %d %15s", &x1, &y1, &x2, &y2, btn);
        HWND hwnd = FindWindowA(nullptr, "Yuri's Revenge");
        if (hwnd) {
            UINT downMsg = (btn[0] == 'r') ? WM_RBUTTONDOWN : WM_LBUTTONDOWN;
            UINT upMsg   = (btn[0] == 'r') ? WM_RBUTTONUP   : WM_LBUTTONUP;
            WPARAM wParam = (btn[0] == 'r') ? MK_RBUTTON : MK_LBUTTON;

            // Press at x1,y1
            SetCursorPos(x1, y1);
            POINT pt = { x1, y1 };
            ScreenToClient(hwnd, &pt);
            PostMessageA(hwnd, downMsg, wParam, MAKELPARAM(pt.x, pt.y));
            Sleep(50);

            // Drag to x2,y2 in steps
            int steps = 10;
            for (int i = 1; i <= steps; ++i) {
                int cx = x1 + (x2 - x1) * i / steps;
                int cy = y1 + (y2 - y1) * i / steps;
                SetCursorPos(cx, cy);
                pt.x = cx; pt.y = cy;
                ScreenToClient(hwnd, &pt);
                PostMessageA(hwnd, WM_MOUSEMOVE, wParam, MAKELPARAM(pt.x, pt.y));
                Sleep(10);
            }

            // Release at x2,y2
            SetCursorPos(x2, y2);
            pt.x = x2; pt.y = y2;
            ScreenToClient(hwnd, &pt);
            PostMessageA(hwnd, upMsg, 0, MAKELPARAM(pt.x, pt.y));
        }
        snprintf(response, sizeof(response),
            "{\"ok\":true,\"from\":[%d,%d],\"to\":[%d,%d],\"btn\":\"%s\"}",
            x1, y1, x2, y2, btn);
        SendResponse(client, response);
    }
    else if (strncmp(cmd, "GETMOUSE", 8) == 0) {
        POINT pt;
        GetCursorPos(&pt);
        HWND hwnd = FindWindowA(nullptr, "Yuri's Revenge");
        if (hwnd) {
            POINT client = pt;
            ScreenToClient(hwnd, &client);
            snprintf(response, sizeof(response),
                "{\"ok\":true,\"screen\":[%ld,%ld],\"client\":[%ld,%ld]}",
                pt.x, pt.y, client.x, client.y);
        } else {
            snprintf(response, sizeof(response),
                "{\"ok\":true,\"screen\":[%ld,%ld]}", pt.x, pt.y);
        }
        SendResponse(client, response);
    }
    else if (strncmp(cmd, "WAIT ", 5) == 0) {
        int ms = 100;
        sscanf(cmd + 5, "%d", &ms);
        if (ms > 60000) ms = 60000;
        Sleep(ms);
        snprintf(response, sizeof(response), "{\"ok\":true,\"waited_ms\":%d}", ms);
        SendResponse(client, response);
    }
    else {
        snprintf(response, sizeof(response),
            "{\"ok\":false,\"error\":\"unknown_command\",\"cmd\":\"%.100s\"}", cmd);
        SendResponse(client, response);
    }
}

// ============================================================
// Server thread
// ============================================================

static DWORD WINAPI ServerThread(LPVOID)
{
    while (g_running) {
        sockaddr_in addr = {};
        int addrlen = sizeof(addr);
        SOCKET client = accept(g_listen_socket, (sockaddr*)&addr, &addrlen);
        if (client == INVALID_SOCKET) {
            if (!g_running) break;
            Sleep(10);
            continue;
        }

        // Set recv timeout
        int timeout = 5000;
        setsockopt(client, SOL_SOCKET, SO_RCVTIMEO, (const char*)&timeout, sizeof(timeout));

        char buf[1024];
        if (RecvLine(client, buf, sizeof(buf))) {
            HandleCommand(client, buf);
        }

        closesocket(client);
    }
    return 0;
}

// ============================================================
// Public API
// ============================================================

bool StartServer(int port, StatsCallback onStats)
{
    if (g_running) return true;
    g_port = port;
    g_stats_fn = onStats;

    WSADATA wsa;
    if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0) return false;

    g_listen_socket = socket(AF_INET, SOCK_STREAM, 0);
    if (g_listen_socket == INVALID_SOCKET) return false;

    int reuse = 1;
    setsockopt(g_listen_socket, SOL_SOCKET, SO_REUSEADDR, (const char*)&reuse, sizeof(reuse));

    sockaddr_in addr = {};
    addr.sin_family = AF_INET;
    addr.sin_addr.s_addr = INADDR_ANY;
    addr.sin_port = htons((u_short)port);

    if (bind(g_listen_socket, (sockaddr*)&addr, sizeof(addr)) != 0) {
        closesocket(g_listen_socket);
        g_listen_socket = INVALID_SOCKET;
        return false;
    }
    if (listen(g_listen_socket, 1) != 0) {
        closesocket(g_listen_socket);
        g_listen_socket = INVALID_SOCKET;
        return false;
    }

    g_running = true;
    g_server_thread = CreateThread(nullptr, 0, ServerThread, nullptr, 0, nullptr);
    return g_server_thread != nullptr;
}

void PollCommands()
{
    // No-op: server runs on dedicated thread
    (void)nullptr;
}

void StopServer()
{
    g_running = false;
    if (g_listen_socket != INVALID_SOCKET) {
        closesocket(g_listen_socket);
        g_listen_socket = INVALID_SOCKET;
    }
    if (g_server_thread) {
        WaitForSingleObject(g_server_thread, 2000);
        CloseHandle(g_server_thread);
        g_server_thread = nullptr;
    }
    WSACleanup();
}

} // namespace headless
