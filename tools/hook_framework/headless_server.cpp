// headless_server.cpp — TCP command server implementation
// winsock2.h MUST be included before windows.h to avoid conflict with winsock.h
#define WIN32_LEAN_AND_MEAN
#include <winsock2.h>
#include <windows.h>
#include <cstdio>
#include <cstdlib>
#include "headless_server.h"
#include "tls_storage.h"

namespace headless {

static SOCKET g_listen_socket = INVALID_SOCKET;
static SOCKET g_client_socket = INVALID_SOCKET;
static int    g_port = 25400;
static StatsCallback g_stats_fn = nullptr;
static bool   g_initialized = false;

// ============================================================
// Helpers
// ============================================================

static void SendResponse(const char* json)
{
    if (g_client_socket != INVALID_SOCKET) {
        send(g_client_socket, json, (int)strlen(json), 0);
        send(g_client_socket, "\n", 1, 0);
    }
}

static char* RecvLine(char* buf, int maxlen)
{
    int i = 0;
    while (i < maxlen - 1) {
        int n = recv(g_client_socket, buf + i, 1, 0);
        if (n <= 0) return nullptr;
        if (buf[i] == '\n') { buf[i] = '\0'; return buf; }
        if (buf[i] == '\r') continue;
        ++i;
    }
    buf[i] = '\0';
    return buf;
}

static void HandleCommand(const char* cmd)
{
    char response[8192];

    if (strncmp(cmd, "STATS", 5) == 0) {
        int mismatches = g_stats_fn ? g_stats_fn() : mismatch_counter;
        snprintf(response, sizeof(response),
            "{\"ok\":true,\"mismatch_count\":%d}", mismatches);
        SendResponse(response);
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
            SendResponse(response);
        } __except(EXCEPTION_EXECUTE_HANDLER) {
            SendResponse("{\"ok\":false,\"error\":\"access_violation\"}");
        }
    }
    else if (strncmp(cmd, "REG", 3) == 0) {
        auto* slot = shadow::GetSlot();
        snprintf(response, sizeof(response),
            "{\"ok\":true,\"re_eax\":\"0x%08X\",\"re_edx\":\"0x%08X\",\"orig_ret\":\"0x%08X\",\"in_shadow\":%s}",
            slot->re_result_eax, slot->re_result_edx, slot->original_ret_addr,
            slot->in_shadow ? "true" : "false");
        SendResponse(response);
    }
    else if (strncmp(cmd, "HOOKS", 5) == 0) {
        snprintf(response, sizeof(response),
            "{\"ok\":true,\"mismatch_count\":%d}", mismatch_counter);
        SendResponse(response);
    }
    else if (strncmp(cmd, "QUIT", 4) == 0) {
        SendResponse("{\"ok\":true,\"action\":\"exit\"}");
        StopServer();
        ExitProcess(0);
    }
    else if (strncmp(cmd, "ECHO ", 5) == 0) {
        snprintf(response, sizeof(response), "{\"ok\":true,\"echo\":\"%.256s\"}", cmd + 5);
        SendResponse(response);
    }
    else {
        snprintf(response, sizeof(response),
            "{\"ok\":false,\"error\":\"unknown_command\",\"cmd\":\"%.100s\"}", cmd);
        SendResponse(response);
    }
}

// ============================================================
// Server lifecycle
// ============================================================

bool StartServer(int port, StatsCallback onStats)
{
    if (g_initialized) return true;
    g_port = port;
    g_stats_fn = onStats;

    WSADATA wsa;
    if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0) return false;

    g_listen_socket = socket(AF_INET, SOCK_STREAM, 0);
    if (g_listen_socket == INVALID_SOCKET) return false;

    u_long mode = 1;
    ioctlsocket(g_listen_socket, FIONBIO, &mode);

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
    g_initialized = true;
    return true;
}

void PollCommands()
{
    if (!g_initialized) return;
    if (g_client_socket == INVALID_SOCKET) {
        g_client_socket = accept(g_listen_socket, nullptr, nullptr);
        if (g_client_socket == INVALID_SOCKET) return;
        u_long mode = 1;
        ioctlsocket(g_client_socket, FIONBIO, &mode);
    }
    char buf[1024];
    if (!RecvLine(buf, sizeof(buf))) {
        int err = WSAGetLastError();
        if (err != WSAEWOULDBLOCK) {
            closesocket(g_client_socket);
            g_client_socket = INVALID_SOCKET;
        }
        return;
    }
    HandleCommand(buf);
    closesocket(g_client_socket);
    g_client_socket = INVALID_SOCKET;
}

void StopServer()
{
    if (g_client_socket != INVALID_SOCKET) { closesocket(g_client_socket); g_client_socket = INVALID_SOCKET; }
    if (g_listen_socket != INVALID_SOCKET) { closesocket(g_listen_socket); g_listen_socket = INVALID_SOCKET; }
    if (g_initialized) { WSACleanup(); g_initialized = false; }
}

} // namespace headless
