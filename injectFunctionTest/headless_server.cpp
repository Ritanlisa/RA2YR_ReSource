// headless_server.cpp — TCP command server with dedicated thread
#define WIN32_LEAN_AND_MEAN
#include <winsock2.h>
#include <windows.h>
#include <cstdio>
#include <cstdlib>
#include "headless_server.h"
#include "tls_storage.h"

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
    else if (strncmp(cmd, "ECHO ", 5) == 0) {
        snprintf(response, sizeof(response), "{\"ok\":true,\"echo\":\"%.256s\"}", cmd + 5);
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
