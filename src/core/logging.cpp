#include "core/logging.hpp"
#include <cstdio>
#include <windows.h>

namespace gamemd {

static FILE*   g_log_file = nullptr;
static LogLevel g_level = LogLevel::Info;

void LogSetLevel(LogLevel level)
{
    g_level = level;
}

void LogWrite(LogLevel level, const char* fmt, ...)
{
    if (level < g_level) return;

    va_list args;
    va_start(args, fmt);

    char buf[1024];
    vsnprintf(buf, sizeof(buf), fmt, args);
    va_end(args);

    OutputDebugStringA(buf);

    if (!g_log_file) {
        g_log_file = fopen("gamemd_debug.log", "w");
    }
    if (g_log_file) {
        fputs(buf, g_log_file);
        fflush(g_log_file);
    }
}

void LogClose()
{
    if (g_log_file) {
        fclose(g_log_file);
        g_log_file = nullptr;
    }
}

} // namespace gamemd
