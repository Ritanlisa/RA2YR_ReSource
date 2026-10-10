// runtime.cpp — MSVC 6.0 CRT 原语移植
//
// 全部经 Unicorn 模拟执行原版机器码逐值对拍（golden: .omo/runtime_golden.txt，
// FPCW=0x0E7F）——来源工程 ra2-reverse-AI code/rewrite/runtime/ + 本 PR 的
// .omo/dump_runtime_golden.py。

#include "runtime/runtime.hpp"
#include "core/reverse_marker.hpp"

#include <bit>
#include <cstring>
#include <span>
#include <string_view>

namespace gamemd
{

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
REVERSE(0x7d0a20, "MemMove: 重叠安全字节复制（上游名 _memcpy_0 系误判）", "None")
void* MemMove(void* dest, const void* src, std::size_t count)
{
    return std::memmove(dest, src, count);
}

// IDA: 0x7D75E0 -- _memset (cdecl)
REVERSE(0x7d75e0, "MemSet: 按 value 低 8 位填充并返回 dest", "None")
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

} // namespace gamemd
