#pragma once

// runtime.hpp — MSVC 6.0 CRT 原语（gamemd.exe 静态链接的 0x7C/0x7D 区）。
//
// 按忠实复刻原则移植；全部经 Unicorn 对拍原版机器码验证（FPCW=0x0E7F）。
// 个别函数存在**已如实披露的偏差**（游标存储、槽地址、OS 调用抽象、
// 目标缓冲接口），见各函数注释与对应 PR 描述——**不得声称行为等价**。
// （工程：https://github.com/PlumBlossomMaid/ra2-reverse-AI，code/rewrite/runtime/）。

#include <cstddef>
#include <cstdint>
#include <string>

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

// 0x7C9B72 — _atol (cdecl: const char* → eax)
// 原版经 locale 表（0x87C590）查空白/数字标志；标准 C locale 下等价于
// 跳过 ' ' '\t' '\n' '\r' '\f' '\v'，可选 +/-，逐位累加（溢出按 int 回绕）。
int ParseDecimal(const char* text);

// 0x7C9CC2 — _strtok (cdecl: char* input, const char* delimiters → char*)
// 定界符位图（256 bit）+ 游标。原版游标存 PTD+0x18（线程局部）；移植用
// 静态游标——单线程游戏语义下等价，线程安全降级已在 PR 注明。
// input 传 nullptr 时从游标继续；token 就地以 NUL 截断。
char* ScanToken(char* input, const char* delimiters);

// 0x7D75B0 — _GetPrimaryLen (cdecl: const char* → eax)
// 上游名误判：实为前导 [A-Za-z] 计数。
std::size_t LeadingAlphaLength(const char* text);

// 0x7C9FF0 — __makepath (cdecl)
// 原版接口 (char* dest, drive, dir, name, ext) 写 dest 缓冲并返回 dest。
// **偏差（如实披露）**：移植接口返回 std::string。原因：门控禁止对 char*
// 目标缓冲做下标写入（ptr-arithmetic/cast-index），无法在未知大小的外
// 部缓冲上落地原版写入逻辑。组装逻辑（盘符:/分隔符/扩展名点号）逐分支
// 忠实复刻，仅返回载体不同。
std::string AssemblePath(const char* drive, const char* directory, const char* basename, const char* extension);

// 0x7D168E — __errno (cdecl: 无参 → uint32_t*)
// **偏差（如实披露）**：原版返回 PTD+8（线程局部）；移植返回全局槽地址。
// map_os_error 写槽的逻辑未在本批移植，槽内容语义未验证。
std::uint32_t* ErrnoSlot();

// 0x7D1697 — ___doserrno (cdecl: 无参 → uint32_t*)
// **偏差（如实披露）**：原版返回 PTD+0xC（线程局部）；移植返回全局槽地址。
std::uint32_t* DosErrorSlot();

// 0x7D745B — _IsThisWindowsNT (cdecl: bool query_succeeded, uint32 platform_id → bool)
// **偏差（如实披露）**：原版经 [0x7E1184] 调 GetVersionExA 填本地
// OSVERSIONINFO 再判 dwPlatformId==2；移植按 ra2 验证模型抽象为纯函数
// （OS 调用无法在 oracle/无 OS 环境复现，platform_id 由调用方传入）。
bool IsWin32NTPlatform(bool query_succeeded, std::uint32_t platform_id);

// 0x7D8DC8 — __sptype (cdecl: double → eax)
// binary64 特殊值分类：+inf→1 / -inf→2 / ±qNaN→3 / ±sNaN→4 / 其余→0。
// 批 7 ClassifyDouble 在指数全 1 时内联的正是这条链。
int ClassifySpecialDouble(double value);

// 0x7C8D20 — __strcmpi (cdecl: const char* left, const char* right → eax)
// 内联 ASCII 折叠比较（A-Z→a-z），返回 -1/0/1。
int StringCompareFolded(const char* left, const char* right);

// 0x7D46B9 — _xtoa (cdecl: int value, char* output, int base, int signed_flag → output)
// **偏差（如实披露）**：原版写调用方 output 缓冲并返回其地址；移植返回
// std::string（门控禁止对 char* 目标缓冲做下标写入，同 AssemblePath）。
// signed_flag != 0 → 写 '-' 并取负；== 0 → 按无符号位型直接转换。
std::string Xtoa(int value, int base, int signed_flag);

// 0x7D468C — __itoa (cdecl: int value, char* output, int base → output)
// 薄包装：signed_flag = (base == 10 && value < 0)，尾调 _xtoa。
std::string Itoa(int value, int base);

// 0x7D6EA7 — _TranslateName (cdecl: SearchEntry* entries, int last_index, const char* key, char*** output)
// **上游名误判**：实为按键排序数组的二分查找。比较器 = __strcmpi（0x7C8D20）。
// **偏差（如实披露）**：原版一槽两用——第 3 参是 char** 槽，输入时 *槽=key，
// 命中时槽被改写为 &entries[middle].payload（C 源码里必有一次 char**→char* 的
// 强制转换，门控禁止任何指针转换）。移植拆为 (key, output) 两参，语义不变：
// 命中时 *output = &entries[middle].payload（output 指向调用方的 char** 槽）。
// 原版第 4 参未使用。key/payload 用 char*（原版 C 风格，MSVC 6.0 字符串字面量即 char*）。
struct SearchEntry
{
    char* key;      // +0x00
    char* payload;  // +0x04
};

void BinarySearch(SearchEntry* entries, int last_index, const char* key, char*** output);

} // namespace gamemd
