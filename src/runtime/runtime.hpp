#pragma once

// runtime.hpp — MSVC 6.0 CRT 原语（gamemd.exe 静态链接的 0x7C/0x7D 区）。
//
// 这些函数在二进制里就是 CRT 代码本身；按 ra2-reverse-AI 的 CRT 区策略
// （行为断言级复刻，不逐函数结构复刻）移植，全部经 Unicorn 对拍原版机器码
// 验证（FPCW=0x0E7F）。golden: .omo/runtime_golden.txt
// （工程：https://github.com/PlumBlossomMaid/ra2-reverse-AI，code/rewrite/runtime/）。

#include <cstddef>
#include <cstdint>

namespace gamemd
{

// 0x7D15A0 — _strlen (cdecl: const char* → eax)
std::size_t StringLength(const char* text);

// 0x7D4BF0 — _strcpy (cdecl: char* dest, const char* src → dest)
char* StringCopy(char* dest, const char* src);

// 0x7D0A20 — _memcpy_0 (cdecl: void* dst, const void* src, size_t n → dst)
// 上游 signals 名 _memcpy_0 是误判：原版处理重叠区域，实为 memmove。
void* MemMove(void* dest, const void* src, std::size_t count);

// 0x7D75E0 — _memset (cdecl: void* dst, int value, size_t n → dst)
// 按 value 的低 8 位填充。
void* MemSet(void* dest, int value, std::size_t count);

// 0x7C91D0 — _strncpy (cdecl: char* dest, const char* src, size_t n → dest)
// 遇 NUL 停，剩余空间补零；n==0 不写。
char* StringNCopy(char* dest, const char* src, std::size_t count);

// 0x7D7577 — _LcidFromHexString (cdecl: const char* → eax)
// 上游名误判。非标准十六进制累加器：数字字符保持 ASCII 值，A-F/a-f 转
// 10-15，按 (acc - 3) * 16 + digit 累积（原版怪癖，照抄）。
int ParseHex(const char* text);

// 0x7D930F — __fpclass (cdecl: double → eax)
// 按 binary64 位模式返回原版类别码（非标准 fpclassify 编码）：
//   +0.0 → 0x40, -0.0 → 0x20, ±normal → 0x100/0x08,
//   +inf → 0x200, -inf → 0x04, ±qNaN → 0x02, ±sNaN → 0x01,
//   ±subnormal → 0x80/0x10
int ClassifyDouble(double value);

// 0x7D8EF5 — __copysign (cdecl: double value, double sign → ST0)
// 保留 value 的 magnitude，复制 sign 的符号位。
double CopySign(double value, double sign);

// 0x7D7840 — __aullrem (cdecl: uint64 dividend, uint64 divisor → edx:eax)
std::uint64_t UnsignedRemainder(std::uint64_t dividend, std::uint64_t divisor);

} // namespace gamemd
