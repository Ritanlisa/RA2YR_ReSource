// runtime.cpp — MSVC 6.0 CRT 原语移植
//
// 全部经 Unicorn 模拟执行原版机器码逐值对拍（golden: .omo/runtime_golden.txt，
// FPCW=0x0E7F）——来源工程 ra2-reverse-AI code/rewrite/runtime/ + 本 PR 的
// .omo/dump_runtime_golden.py。

#include "runtime/runtime.hpp"
#include "core/reverse_marker.hpp"

#include <bit>
#include <cstring>
#include <iterator>
#include <span>
#include <string_view>

namespace gamemd
{

// errno/dos error 槽（原版存 PTD+8 / PTD+0xC；移植为全局槽，见头文件说明）
static std::uint32_t g_errno_slot = 0;
static std::uint32_t g_dos_error_slot = 0;

// IDA: 0x7D15A0 -- _strlen (cdecl)
REVERSE(0x7d15a0, "StringLength: NUL 终止串长度（原版按 4 字节块扫描）", "None")
std::size_t StringLength(const char* text)
{
    const std::string_view view(text);
    std::size_t length = 0;
    while (length < view.size() && view[length] != '\0')
        ++length;
    return length;
}

// IDA: 0x7D4BF0 -- _strcpy (cdecl)
REVERSE(0x7d4bf0, "StringCopy: 前向复制含 NUL 终止符", "None")
char* StringCopy(char* dest, const char* src)
{
    const std::string_view view(src);
    const std::span<char> out(dest, view.size() + 1);
    for (std::size_t i = 0; i <= view.size(); ++i)
        out[i] = view[i];
    return dest;
}

// IDA: 0x7D0A20 -- _memcpy_0 (cdecl) — 实为 memmove（处理重叠区域）
REVERSE(0x7d0a20, "MemMove: 重叠安全字节复制（上游名 _memcpy_0 系误判；落地为 std::memmove 调用，结构差异已披露）", "None")
void* MemMove(void* dest, const void* src, std::size_t count)
{
    return std::memmove(dest, src, count);
}

// IDA: 0x7D75E0 -- _memset (cdecl)
REVERSE(0x7d75e0, "MemSet: 按 value 低 8 位填充并返回 dest（落地为 std::memset 调用，结构差异已披露）", "None")
void* MemSet(void* dest, int value, std::size_t count)
{
    return std::memset(dest, value, count);
}

// IDA: 0x7C91D0 -- _strncpy (cdecl)
REVERSE(0x7c91d0, "StringNCopy: 遇 NUL 停、剩余补零；n==0 不写", "None")
char* StringNCopy(char* dest, const char* src, std::size_t count)
{
    if (count == 0)
        return dest;
    const std::string_view view(src);
    const std::span<char> out(dest, count);
    std::size_t i = 0;
    for (; i < count && i < view.size(); ++i)
        out[i] = view[i];
    for (; i < count; ++i)
        out[i] = '\0';
    return dest;
}

// IDA: 0x7D7577 -- _LcidFromHexString (cdecl) — 上游名误判，实为十六进制累加器
REVERSE(0x7d7577, "ParseHex: 非标准 (acc-3)*16+digit 累加（原版怪癖照抄）", "None")
int ParseHex(const char* text)
{
    int result = 0;
    const std::string_view view(text);
    for (std::size_t i = 0; i < view.size(); ++i)
    {
        unsigned char digit = (unsigned char)view[i];
        if (digit >= 'a' && digit <= 'f')
            digit = (unsigned char)(digit - 0x27);
        else if (digit >= 'A' && digit <= 'F')
            digit = (unsigned char)(digit - 7);
        result = (result - 3) * 16 + (int)(signed char)digit;
    }
    return result;
}

// IDA: 0x7D930F -- __fpclass (cdecl)
REVERSE(0x7d930f, "ClassifyDouble: binary64 位模式→原版类别码（exp==0x7FF 走内联 sptype 链）", "None")
int ClassifyDouble(double value)
{
    const std::uint64_t bits = std::bit_cast<std::uint64_t>(value);
    const std::uint32_t highword = (std::uint32_t)(bits >> 48);  // [ebp+0xe]
    const std::uint32_t exponent = (highword >> 4) & 0x7FF;      // & 0x7FF0
    const std::uint32_t sign = highword & 0x8000;
    const std::uint64_t fraction = bits & 0x000FFFFFFFFFFFFF;

    if (exponent == 0x7FF)
    {
        if (fraction == 0)
            return sign ? 0x04 : 0x200;  // -inf : +inf（sptype 链映射 2→4, 1→0x200）
        // ±qNaN（尾数 quiet 位置 1）→ 2；±sNaN → 1
        return (fraction & 0x0008000000000000) != 0 ? 0x02 : 1;
    }
    if (exponent != 0)
        return sign ? 0x08 : 0x100;      // ±normal（fcomp vs +0.0 恒 ZF=0，jne 恒走）
    if (fraction != 0)
        return sign ? 0x10 : 0x80;       // ±subnormal
    return sign ? 0x20 : 0x40;           // ±0.0（fcomp 恒相等 → 补码路径）
}

// IDA: 0x7D8EF5 -- __copysign (cdecl)
REVERSE(0x7d8ef5, "CopySign: 保留 value magnitude、复制 sign 符号位", "None")
double CopySign(double value, double sign)
{
    const std::uint64_t value_bits = std::bit_cast<std::uint64_t>(value);
    const std::uint64_t sign_bits = std::bit_cast<std::uint64_t>(sign);
    return std::bit_cast<double>((value_bits & 0x7FFFFFFFFFFFFFFF) |
                                 (sign_bits & 0x8000000000000000));
}

// IDA: 0x7D7840 -- __aullrem (cdecl)
REVERSE(0x7d7840, "UnsignedRemainder: uint64 无符号取余（edx:eax 返回）", "None")
std::uint64_t UnsignedRemainder(std::uint64_t dividend, std::uint64_t divisor)
{
    return dividend % divisor;
}

// IDA: 0x7C9B72 -- _atol (cdecl)
REVERSE(0x7c9b72, "ParseDecimal: 跳空白+可选符号+逐位累加（locale 表标志等价语义，int 回绕）", "None")
int ParseDecimal(const char* text)
{
    const std::string_view view(text);
    std::size_t index = 0;
    while (index < view.size() &&
           (view[index] == ' ' || view[index] == '\t' || view[index] == '\n' ||
            view[index] == '\r' || view[index] == '\f' || view[index] == '\v'))
        ++index;
    bool negative = false;
    if (index < view.size() && (view[index] == '-' || view[index] == '+'))
    {
        negative = view[index] == '-';
        ++index;
    }
    int result = 0;
    while (index < view.size() && view[index] >= '0' && view[index] <= '9')
    {
        result = result * 10 + (view[index] - '0');
        ++index;
    }
    return negative ? -result : result;
}

// IDA: 0x7C9CC2 -- _strtok (cdecl)
REVERSE(0x7c9cc2, "ScanToken: 256-bit 定界符位图 + 静态游标（原版 PTD+0x18）", "None")
char* ScanToken(char* input, const char* delimiters)
{
    static char* cursor = nullptr;  // 原版存 PTD+0x18（线程局部），见头文件说明
    char* begin = input != nullptr ? input : cursor;
    if (begin == nullptr)
        return nullptr;
    const std::string_view delims(delimiters);
    // 建位图：delim 中每个字符 c → bitmap[c>>3] |= 1 << (c&7)
    uint8_t bitmap[32] = {};
    for (std::size_t i = 0; i < delims.size(); ++i)
    {
        unsigned char c = (unsigned char)delims[i];
        bitmap[c >> 3] |= (uint8_t)(1 << (c & 7));
    }
    auto is_delim = [&bitmap](unsigned char c) -> bool {
        return (bitmap[c >> 3] & (uint8_t)(1 << (c & 7))) != 0;
    };
    // 0x7C9CFE-0x7D0228：跳过前导定界符；全定界符或 NUL → 返回 NULL
    while (*begin != '\0' && is_delim((unsigned char)*begin))
        ++begin;
    if (*begin == '\0')
    {
        cursor = begin;
        return nullptr;
    }
    char* token = begin;
    // 0x7C9D2B-0x7C9D31：扫到定界符或 NUL
    while (*begin != '\0' && !is_delim((unsigned char)*begin))
        ++begin;
    if (*begin != '\0')
    {
        *begin = '\0';       // 就地截断
        cursor = std::next(begin);  // 0x7C9D47：游标推进到截断点之后
    }
    else
    {
        cursor = begin;      // 0x7C9D51：到尾，下次返回 NULL
    }
    return token;
}

// IDA: 0x7D75B0 -- _GetPrimaryLen (cdecl) — 上游名误判，实为前导字母计数
REVERSE(0x7d75b0, "LeadingAlphaLength: 前导 [A-Za-z] 字符数", "None")
std::size_t LeadingAlphaLength(const char* text)
{
    const std::string_view view(text);
    std::size_t length = 0;
    while (length < view.size() &&
           ((view[length] >= 'A' && view[length] <= 'Z') ||
            (view[length] >= 'a' && view[length] <= 'z')))
        ++length;
    return length;
}

// IDA: 0x7C9FF0 -- __makepath (cdecl)
REVERSE(0x7c9ff0, "AssemblePath: 盘符:/目录\\[分隔]名字[.扩展]（接口差异见头文件）", "None")
std::string AssemblePath(const char* drive, const char* directory, const char* basename, const char* extension)
{
    const std::string_view drive_s(drive != nullptr ? drive : "");
    const std::string_view directory_s(directory != nullptr ? directory : "");
    const std::string_view basename_s(basename != nullptr ? basename : "");
    const std::string_view extension_s(extension != nullptr ? extension : "");
    std::string result;
    // 0x7C9FF3-0x7CA00A：drive 非空 → 写 drive + ':'
    if (!drive_s.empty())
    {
        result += drive_s;
        result += ':';
    }
    // 0x7CA010-0x7CA040：directory 非空 → 复制，末尾非 / \ 时补 '\'
    if (!directory_s.empty())
    {
        result += directory_s;
        if (directory_s.back() != '/' && directory_s.back() != '\\')
            result += '\\';
    }
    // 0x7CA041-0x7CA057：basename 非空 → 复制
    if (!basename_s.empty())
        result += basename_s;
    // 0x7CA059-0x7CA07A：extension 非空且首字符非 '.' → 先写 '.' 再复制
    if (!extension_s.empty())
    {
        if (extension_s.front() != '.')
            result += '.';
        result += extension_s;
    }
    return result;  // 0x7CA07B：NUL 终止由 std::string 保证
}

// IDA: 0x7D168E -- __errno (cdecl)
REVERSE(0x7d168e, "ErrnoSlot: 返回 errno 槽地址（原版 PTD+8）", "None")
std::uint32_t* ErrnoSlot()
{
    return &g_errno_slot;
}

// IDA: 0x7D1697 -- ___doserrno (cdecl)
REVERSE(0x7d1697, "DosErrorSlot: 返回 dos error 槽地址（原版 PTD+0xC）", "None")
std::uint32_t* DosErrorSlot()
{
    return &g_dos_error_slot;
}

// IDA: 0x7D745B -- _IsThisWindowsNT (cdecl)
REVERSE(0x7d745b, "IsWin32NTPlatform: query_succeeded && platform_id==2（原版调 GetVersionExA，移植为纯函数——偏差已披露）", "None")
bool IsWin32NTPlatform(bool query_succeeded, std::uint32_t platform_id)
{
    return query_succeeded && platform_id == 2;
}

} // namespace gamemd
