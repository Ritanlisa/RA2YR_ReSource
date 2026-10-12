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

// IDA: 0x7D8DC8 -- __sptype (cdecl: double → eax)
REVERSE(0x7d8dc8, "ClassifySpecialDouble: +inf→1/-inf→2/±qNaN→3/±sNaN→4/else→0（ClassifyDouble 内联链）", "None")
int ClassifySpecialDouble(double value)
{
    const std::uint64_t bits = std::bit_cast<std::uint64_t>(value);
    const std::uint32_t highdword = (std::uint32_t)(bits >> 32);  // [ebp+0xc]
    const std::uint32_t lowdword = (std::uint32_t)bits;          // [ebp+8]
    if (highdword == 0x7FF00000u && lowdword == 0) return 1;    // +inf
    if (highdword == 0xFFF00000u && lowdword == 0) return 2;    // -inf
    const std::uint32_t highword = (std::uint32_t)(bits >> 48);  // [ebp+0xe]
    if ((highword & 0x7FF8u) == 0x7FF8u) return 3;               // ±qNaN（尾数 quiet 位=1）
    // sign=0、exp=0x7FF、quiet=0：尾数非零 → ±sNaN → 4
    if ((highword & 0x7FF8u) == 0x7FF0u && ((highdword & 0x7FFFFu) != 0 || lowdword != 0)) return 4;
    return 0;
}

// IDA: 0x7C8D20 -- __strcmpi (cdecl: const char* left, const char* right → eax)
REVERSE(0x7c8d20, "StringCompareFolded: 内联 ASCII 折叠比较（A-Z→a-z），返回 -1/0/1", "None")
int StringCompareFolded(const char* left, const char* right)
{
    const std::string_view l(left);
    const std::string_view r(right);
    std::size_t i = 0;
    for (; i < l.size() && i < r.size(); ++i)
    {
        unsigned char lc = (unsigned char)l[i];
        unsigned char rc = (unsigned char)r[i];
        if (lc >= 'A' && lc <= 'Z') lc = (unsigned char)(lc + ('a' - 'A'));
        if (rc >= 'A' && rc <= 'Z') rc = (unsigned char)(rc + ('a' - 'A'));
        if (lc != rc) return lc < rc ? -1 : 1;
    }
    if (i < l.size()) return 1;
    return i < r.size() ? -1 : 0;
}

// IDA: 0x7D46B9 -- _xtoa (cdecl: int value, char* output, int base, int signed_flag → output)
REVERSE(0x7d46b9, "Xtoa: div 循环取余+反转（signed_flag!=0 写'-'取负；返回载体差异见头文件）", "None")
std::string Xtoa(int value, int base, int signed_flag)
{
    std::string result;
    unsigned int v;
    if (signed_flag)
    {
        result += '-';
        v = (unsigned int)(-value);  // 0x7D46CF: neg——INT_MIN 回绕与原版一致
    }
    else
    {
        v = (unsigned int)value;     // 0x7D46D3: 无符号位型直接转换
    }
    std::string digits;
    do
    {
        const unsigned int rem = v % (unsigned int)base;
        digits += (char)(rem > 9 ? rem + 0x57 : rem + 0x30);  // 0x7D46E8: 小写 a-f
        v /= (unsigned int)base;
    } while (v != 0);
    for (std::size_t i = 0, j = digits.size() - 1; i < j; ++i, --j)  // 0x7D4702: 反转
    {
        const char t = digits[i];
        digits[i] = digits[j];
        digits[j] = t;
    }
    return result + digits;
}

// IDA: 0x7D468C -- __itoa (cdecl: int value, char* output, int base → output)
REVERSE(0x7d468c, "Itoa: base==10 且 value<0 → signed_flag=1，尾调 Xtoa（返回载体差异见头文件）", "None")
std::string Itoa(int value, int base)
{
    return Xtoa(value, base, (base == 10 && value < 0) ? 1 : 0);
}

// IDA: 0x7D6EA7 -- _TranslateName (cdecl: SearchEntry* entries, int last_index, const char* key, char*** output)
REVERSE(0x7d6ea7, "BinarySearch: 按键排序数组二分查找，比较器=StringCompareFolded；命中→*output 指向 payload 字段（一槽两用拆参差异见头文件）", "None")
void BinarySearch(SearchEntry* entries, int last_index, const char* key, char*** output)
{
    if (last_index < 0)
        return;  // 0x7D6EB5: jl
    const std::span<SearchEntry> view(entries, (std::size_t)last_index + 1);
    int low = 0;
    int high = last_index;
    while (low <= high)
    {
        const int middle = low + (high - low) / 2;  // 0x7D6EBB-0x7D6EC8: cdq/sub/sar 折半
        // 0x7D6ECA/0x7D6ED3：调用 __strcmpi(搜索 key, 条目 key)——搜索 key 在左
        const int comparison = StringCompareFolded(key, view[middle].key);
        if (comparison == 0)
        {
            *output = &view[middle].payload;  // 0x7D6EE6: 命中 → 输出指向 payload 字段
            return;
        }
        if (comparison < 0)
            high = middle - 1;
        else
            low = middle + 1;
    }
}

} // namespace gamemd
