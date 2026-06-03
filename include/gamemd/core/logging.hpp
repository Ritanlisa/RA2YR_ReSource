#pragma once
#include <cstdio>
#include <cstdarg>

namespace gamemd {

enum class LogLevel {
    Trace = 0,
    Debug = 1,
    Info  = 2,
    Warn  = 3,
    Error = 4,
    None  = 5
};

void Log_SetLevel(LogLevel level);
void Log_Write(LogLevel level, const char* fmt, ...);
void Log_Close();

#if defined(GAMEMD_DEBUG) || defined(_DEBUG)
    #define LOG_TRACE(fmt, ...) ::gamemd::Log_Write(::gamemd::LogLevel::Trace, "[TRACE] " fmt "\n", ##__VA_ARGS__)
    #define LOG_DEBUG(fmt, ...) ::gamemd::Log_Write(::gamemd::LogLevel::Debug, "[DEBUG] " fmt "\n", ##__VA_ARGS__)
    #define LOG_INFO(fmt, ...)  ::gamemd::Log_Write(::gamemd::LogLevel::Info,  "[INFO]  " fmt "\n", ##__VA_ARGS__)
    #define LOG_WARN(fmt, ...)  ::gamemd::Log_Write(::gamemd::LogLevel::Warn,  "[WARN]  " fmt "\n", ##__VA_ARGS__)
    #define LOG_ERROR(fmt, ...) ::gamemd::Log_Write(::gamemd::LogLevel::Error, "[ERROR] " fmt "\n", ##__VA_ARGS__)
#else
    #define LOG_TRACE(fmt, ...) ((void)0)
    #define LOG_DEBUG(fmt, ...) ((void)0)
    #define LOG_INFO(fmt, ...)  ::gamemd::Log_Write(::gamemd::LogLevel::Info,  "[INFO]  " fmt "\n", ##__VA_ARGS__)
    #define LOG_WARN(fmt, ...)  ::gamemd::Log_Write(::gamemd::LogLevel::Warn,  "[WARN]  " fmt "\n", ##__VA_ARGS__)
    #define LOG_ERROR(fmt, ...) ::gamemd::Log_Write(::gamemd::LogLevel::Error, "[ERROR] " fmt "\n", ##__VA_ARGS__)
#endif

} // namespace gamemd
