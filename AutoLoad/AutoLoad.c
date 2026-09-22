/*
 * AutoLoad.dll - 自动装车 (热键可配置, 默认 Ctrl+D)
 *              + 同类变体选择 (热键可配置, 默认 Ctrl+T)
 * 目标引擎: gamemd.exe (尤里的复仇 1.001), 由 Syringe 0.7.3mo 自动加载。
 *
 * 功能1 装车: 按下热键时, 把【选中的步兵和载具】按类型均衡分配进【选中的、
 *       范围内、有空位且装载等级达标】的可载员载具: 各类型轮流派成员占座
 *       (人数少的类型不会被淹没), 每辆车优先接"还没有的同类型"
 *       (同类强制铺开, 如每要塞 1反+1光+2守), 同类型内离载具近的优先
 *       (超员时远处的落选, 而不是选中顺序/地图从上到下在前者先得)。
 *       只处理选中单位; 装不下的
 *       多余单位不做处理。飞行运动模式的单位 (火箭飞行兵等) 自动跳过;
 *       NoManualUnload=yes 的载具 (清道夫 TRACTOR 等) 不可被进入, 仅作为运输方
 *       被跳过 —— 它本身仍可作为乘客进入 LCRF/SAPC 等正常运输载具; 容量与装载
 *       等级按引擎原生判据 (Size 之和 / SizeLimit) 严格记账; 支持 载具->运输载具。
 *
 * 功能2 变体选择: IFV逻辑载具 (FV/AMC/TRACTOR/STING 等 Gunner=yes) 随载员不同
 *       使用 Weapon1/Weapon2/... 中的不同实际武器, 但原生T键按注册名全选会把
 *       不同武器变体一起选中。按 VariantHotkey (默认 Ctrl+T) 则按 (类型,
 *       当前普通武器实际指针) 过滤加选 —— Weapon2与Weapon10指向同一实际武器
 *       即视为同一种; 只用普通Weapon, 忽略升级后的EliteWeapon; 非Gunner单位
 *       退化为纯类型选择。单击=同屏 (复用Tactical), 500ms内双击=全图 (复用
 *       Techno Array), 与原生T键的单/双击语义对齐。选择是纯本地UI状态
 *       (调 Select, 不发网络事件), 与T键一致, 联机安全。
 *       实现注意: 武器指针必须经引擎 accessor 0x7177C0 解析 (Ares 接管了
 *       18+ 槽位存储), 不得直接按 type+0x898+idx*0x1C 计算 (见 §17.3)。
 *
 * 热键: 游戏目录旁的 AutoLoad.ini ([AutoLoad] Hotkey=Ctrl+D,
 *       VariantHotkey=Ctrl+T), 支持 Ctrl/Alt/Shift/Win 组合 与
 *       A-Z/0-9/F1-F24/方向键等。文件不存在时用默认值。
 *
 * 同步安全: 每一对 (步兵, 载具) 通过引擎自身的 QueueMegaMission (0x646E90) 下发一条
 *       标准 MegaMission(Mission::Enter) 事件 —— 与玩家点击载具产生的事件字节级同构
 *       (真实点击路径 0x4D76C6: ClickedMission(7, NULL, 载具, NULL) =>
 *        Whom=步兵, Mission=7, Target={0,0}空, Destination=TC(载具对象)),
 *       走 OutList 正常网络管线广播, 所有机器按帧执行, 不引入任何自定义事件/状态。
 *
 * 日志: 游戏目录 AutoLoad.log (仅带日志版; nolog 版无任何文件 I/O)。
 * 结构/地址依据见 AutoLoadDev/notes/NOTES.md。
 */

#include <windows.h>
#include <stdarg.h>

/* 无 CRT (-nostdlib): 数组搬移/清零习语会被 GCC 优化成 memcpy/memset
 * 调用而导致链接期缺符号 (v2.5 的插入排序移位即触发)。自带字节实现兜底;
 * 构建再加 -ffreestanding 让 GCC 不再主动生成此类库调用。 */
static void* AL_memcpy(void* d, const void* s, unsigned n)
{
    unsigned char* p = (unsigned char*)d;
    const unsigned char* q = (const unsigned char*)s;
    while (n--) *p++ = *q++;
    return d;
}
void* memcpy(void* d, const void* s, unsigned n) { return AL_memcpy(d, s, n); }
void* memset(void* s, int c, unsigned n)
{
    unsigned char* p = (unsigned char*)s;
    while (n--) *p++ = (unsigned char)c;
    return s;
}

/* ---------------- 引擎常量 (逆向确认) ---------------- */

#define INFANTRY_VTABLE   0x007EB058u
#define UNIT_VTABLE       0x007F5C70u
#define BUILDING_VTABLE   0x007E3EBCu
#define AIRCRAFT_VTABLE   0x007E22A4u

#define OFF_LOCATION          0x9C   /* ObjectClass::Location (CoordStruct, lepton) */
#define OFF_PASSENGERS        0x114  /* TechnoClass::Passengers (PassengersClass, Num 在 +0) */
#define OFF_TYPE_INFANTRY     0x6C0  /* InfantryClass::Type */
#define OFF_TYPE_UNIT         0x6C4  /* UnitClass::Type */
#define OFF_TYPE_BUILDING     0x520  /* BuildingClass::Type */
#define OFF_TYPE_AIRCRAFT     0x6C4  /* AircraftClass::Type */
#define OFF_TTYPE_PASSENGERS  0x5E0  /* TechnoTypeClass::Passengers (容量, int) */
#define OFF_TTYPE_LOCOMOTOR   0x34C  /* TechnoTypeClass::Locomotor (_GUID 16字节, ini解析0x7123ED确认) */
#define OFF_TTYPE_SIZE        0x380  /* TechnoTypeClass::Size (double, 乘客占位=Size, GetTotalSize 0x473460 累加确认) */
#define OFF_TTYPE_SIZELIMIT   0x388  /* TechnoTypeClass::SizeLimit (double, 装载等级:
                                         车辆任务代码 0x737845/0x73762B 两处相同判定:
                                         used+Size<=Passengers 且 Size<=SizeLimit;
                                         LCRF/SAPC=12 可载车, FV/AMC=1 只载步兵) */
#define OFF_TTYPE_ARES_EXT    0x2FC  /* Ares: TechnoTypeExt::ExtData 指针
                                         (Ares 类型构造钩子写入; 仅 ares.dll 已加载时可信) */
#define OFF_ARES_EXT_NMU      0x4C5  /* Ares ExtData::NoManualUnload (byte; Ares 读取点
                                         0x10049E70: type+0x2FC -> +0x4C5 判定, 三份
                                         游戏目录的 Ares.dll 二进制一致) */
#define ADDR_GET_TOTAL_SIZE   0x00473460u /* PassengersClass::GetTotalSize (thiscall) 已占槽数 */
#define ADDR_CHECK_TYPESELECT 0x00732580u /* (thiscall, ecx=object) T选择用的归属/可选中判定, 返回AL */
#define ADDR_CHECK_ALIVE      0x007342C0u /* (ecx=object) [obj+0x14]&1, 返回AL (同屏候选先过此关) */
#define ADDR_GET_WEAPON       0x007177C0u /* TechnoTypeClass::GetWeapon(idx): 普通Weapon accessor
                                             (ecx=类型, 栈参idx, ret 4自清理, 返回WeaponStruct*;
                                              Ares hook点, 见 VariantKeyOf 注释) */
#define OFF_SELECT_VTBL       0x14Cu      /* ObjectClass::Select() 虚表偏移 (0x732B41 call [eax+0x14C] 确认) */

#define OFF_TECHNO_ITEMS      0xA8EC7Cu /* Techno Array Items (全图候选, 同 0x7329CD/0x732AF7 用法) */
#define OFF_TECHNO_COUNT      0xA8EC88u /* Techno Array Count */
#define OFF_TACTICAL_INST     0x887324u /* TacticalClass::Instance (同屏候选) */
#define OFF_TACTICAL_CNT      0xDB0     /* [Tactical+0xDB0] = 同屏可选数量 (0x6DC420 确认) */
#define OFF_TACTICAL_ARRAY    0xB0CEC8u /* TacticalSelectables[500], 每项12字节, +0=Object* */
#define SZ_TACTICAL_ENTRY     12

/* IFV 变体判定偏移 (全部逆向确认):
 * Gunner@0x805 (INI解析0x714A50确认), WeaponCount@0x80C
 * (INI解析0x71286B确认), Techno::CurrentWeaponNumber@0x138
 * (IFV换武器 0x70DC70: mov [esi+0x138],edi 确认; 空车/非法值回落0, 即Weapon1)。
 * 注意: 不得直接按 type+0x898+idx*0x1C 读普通Weapon数组 —— 原生固定数组只够
 * 18 项 (GetWeapon 0x7177C0 的 lea 基址 0x898 / GetElite 0x7177E0 基址 0xA94,
 * 间距 0x1FC=18项+ClearAllWeapons 可互证), 而 MO 的 FV/AMC/STNK 有 56 项;
 * Ares hook 了武器加载 (0x7128C0)、GetWeapon/GetEliteWeapon (0x7177C0/
 * 0x7177E0)、SwitchGunner (0x70DC70)、ReceiveGunner (0x74642C),
 * 18+ 槽位存放在 Ares 自有存储里。直接计算在 idx>=18 时读到 elite 残留/0/邻域
 * (STNK 4种武器变出7组、AMC 大量不同武器坍成一组的病根, v2.1)。必须调被 hook
 * 的 0x7177C0 accessor 解析 (它同时只给普通Weapon, 精英单位也不返回Elite,
 * 正好符合“忽略EliteWeapon”的需求)。类型ID字符串在 type+0x24
 * (0x410A40: add ecx,0x24 后 _stricmp 确认, 仅用于日志)。 */
#define OFF_TTYPE_GUNNER      0x805
#define OFF_TTYPE_WEAPONCOUNT 0x80C
#define OFF_TTYPE_IDSTR       0x24
#define OFF_TECHNO_CURWEAPON  0x138
#define VARIANT_DBL_MS        500u /* Ctrl+T 双击窗口: 对齐原生T键的0x1F4=500ms */
#define MAX_VARIANT_REFS      64
#define MAX_VARIANT_HIST      128

#define OFF_SELECTION_ITEMS   0xA8ECBCu /* *(ObjectClass***) 选中单位指针数组 */
#define OFF_SELECTION_COUNT   0xA8ECC8u /* *(int*) 选中数量 */

#define ADDR_QUEUE_MEGA_MISSION  0x00646E90u /* (fastcall) mission, &TargetTC, WhomTC(byval), &DestTC */
#define ADDR_TC_FROM_OBJECT      0x006E6AB0u /* (thiscall) tc_out, object  -> {ID, 0x34} */
#define ADDR_HOOK_FRAME          0x0055D360u /* 每帧函数入口 (Phobos FrameStep_Begin 同款) */

#define MISSION_ENTER   7
#define MAX_PASSENGERS  128
#define MAX_TRANSPORTS  64
#define MAX_EVENTS_PER_FRAME 96
#define RANGE_LEPTONS   (30 * 256)  /* "附近"半径: 30 格 (与任一选中乘客的平面距离) */

/* ---------------- 内嵌 Syringe 钩子声明 (单文件, 无需 .dll.inj) ----------------
 * PE 段名必须恰好是 ".syhks00" —— 8 字节精确匹配 (参考无 .inj 的 dll 实测),
 * 16 字节一条: { hookAddr, hookSize, 导出函数名字符串指针, 填充 }。
 * Syringe 枚举段内条目, 按名字 GetProcAddress 后挂钩。SyringeHandshake 导出
 * 可选, 这里只用于写日志与提示信息, 不做 CRC 等任何把关。 */
typedef struct { unsigned int addr; unsigned int size; const char* name; unsigned int pad; } SyHookDecl;
static SyHookDecl g_syHook __attribute__((section(".syhks00"), used, aligned(16))) =
    { ADDR_HOOK_FRAME, 5u, "AutoLoad_FrameHook", 0u };

/* 飞行运动模式的运动器 CLSID (来自 rulesmo.ini 全部飞行步兵:
 * JUMPJET/ARMR/GYRO/MOTHRA/WASP/URAGAN/LUNR 都用 Rocket;
 * {2BEA74E1} 是 YR 原版跳跃机, 一并覆盖)。按类型的 Locomotor GUID 判定,
 * 不依赖运行时对象状态。步行步兵 = {4A582744-9839-11d1-B709-00A024DDAFD1}。 */
static const unsigned char GUID_LOCO_ROCKET[16] =
{ 0x46,0x2C,0x61,0x92, 0x1F,0xF7, 0xD1,0x11, 0xAC,0x9F,0x00,0x60,0x08,0x05,0x5B,0xB5 };
static const unsigned char GUID_LOCO_JUMPJET[16] =
{ 0xE1,0x74,0xEA,0x2B, 0xCA,0x7C, 0xD3,0x11, 0xBE,0x14,0x00,0x10,0x4B,0x62,0xA1,0x6C };

/* ---------------- 日志 (游戏目录 AutoLoad.log) ----------------
 * 构建时定义 AUTOLOAD_NOLOG 即得到无日志版 (AutoLoad_nolog.dll) */

static char* UtoA(unsigned v, char* p) /* p >= 11 字节 */
{
    char tmp[12]; int i = 0, j = 0;
    if (!v) tmp[i++] = '0';
    while (v) { tmp[i++] = (char)('0' + v % 10); v /= 10; }
    while (i) p[j++] = tmp[--i];
    p[j] = 0; return p;
}

static char* ItoA(int v, char* p)
{
    if (v < 0) { *p++ = '-'; return UtoA((unsigned)(-v), p); }
    return UtoA((unsigned)v, p);
}

static char* HtoA8(unsigned v, char* p) /* p >= 9 字节 */
{
    static const char hex[] = "0123456789ABCDEF";
    int i;
    for (i = 7; i >= 0; i--) { p[i] = hex[v & 0xF]; v >>= 4; }
    p[8] = 0; return p;
}

#ifdef AUTOLOAD_NOLOG
static void LogInit(void) { }
static void LogParts(const char* s, ...) { (void)s; }
#else

static HANDLE g_logFile = NULL;
static CRITICAL_SECTION g_logCS;
static int g_logCSInit = 0;

static void LogInit(void)
{
    if (g_logFile) return;
    if (!g_logCSInit) { InitializeCriticalSection(&g_logCS); g_logCSInit = 1; }
    g_logFile = CreateFileA("AutoLoad.log", FILE_APPEND_DATA,
                            FILE_SHARE_READ | FILE_SHARE_WRITE, NULL,
                            OPEN_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
    if (g_logFile == INVALID_HANDLE_VALUE) g_logFile = NULL;
}

/* 最多 9 段文本拼接成一行 (缓冲 512 字节, n<480 兜底) */
static void LogParts(const char* s, ...)
{
    char buf[512];
    unsigned n = 0, i, k;
    SYSTEMTIME st;
    DWORD written = 0;
    va_list ap;
    const char* seg;
    if (!g_logFile) return;
    GetLocalTime(&st);
    n += (unsigned)wsprintfA(buf + n, "[%02d:%02d:%02d.%03d] ",
        st.wHour, st.wMinute, st.wSecond, st.wMilliseconds);
    va_start(ap, s);
    for (k = 0, seg = s; seg && k < 10; k++, seg = va_arg(ap, const char*))
        for (i = 0; seg[i] && n < 480; i++) buf[n++] = seg[i];
    va_end(ap);
    buf[n++] = 13; buf[n++] = 10;  /* CR LF */
    EnterCriticalSection(&g_logCS);
    SetFilePointer(g_logFile, 0, NULL, FILE_END);
    WriteFile(g_logFile, buf, n, &written, NULL);
    LeaveCriticalSection(&g_logCS);
}

#endif /* !AUTOLOAD_NOLOG */

#define LOGS(s)    LogParts((s), NULL)
#define LOG2(s, x) LogParts((s), (x), NULL)

#pragma pack(push, 1)
typedef struct { int ID; unsigned char RTTI; } TargetClass;
#pragma pack(pop)

/* ---------------- 引擎函数调用 (内联汇编, 精确控制 MSVC ABI) ---------------- */

/* thiscall: ECX=tc_out, 栈参数=object; 函数 ret 4 自清理。写入 5 字节 TargetClass */
static void TCFromObject(void* tcOut, void* obj)
{
    __asm__ __volatile__ (
        "pushl %1\n\t"
        "movl %0, %%ecx\n\t"
        "call *%2\n\t"
        :
        : "r"(tcOut), "r"(obj), "r"(ADDR_TC_FROM_OBJECT)
        : "eax", "ecx", "edx", "memory", "cc"
    );
}

/* 0x646E90: ECX=mission, EDX=&TargetTC, 栈: Whom(byval 8字节槽: ID dword + RTTI byte @+4), &DestTC
 * 函数 ret 0xC 自清理。返回 AL = 是否成功入队。 */
static unsigned char QueueMegaMission(int mission, TargetClass* pTarget,
                                      unsigned int whomID, unsigned char whomRTTI,
                                      TargetClass* pDest)
{
    unsigned char ok;
    register int __ecx_mission __asm__("ecx") = mission;
    register TargetClass* __edx_target __asm__("edx") = pTarget;
    __asm__ __volatile__ (
        "pushl %5\n\t"
        "subl $8, %%esp\n\t"
        "movl %3, (%%esp)\n\t"
        "movb %b4, 4(%%esp)\n\t"
        "movl %1, %%ecx\n\t"
        "movl %2, %%edx\n\t"
        "call *%6\n\t"
        : "=a"(ok)
        : "r"(__ecx_mission), "r"(__edx_target), "r"(whomID), "q"(whomRTTI),
          "r"(pDest), "r"(ADDR_QUEUE_MEGA_MISSION)
        : "memory", "cc"
    );
    return ok;
}

/* ---------------- 热键配置 (DLL 同目录 AutoLoad.ini, [AutoLoad] Hotkey=) ---------------- */

#define HKMOD_CONTROL 0x01u
#define HKMOD_SHIFT   0x02u
#define HKMOD_ALT     0x04u
#define HKMOD_WIN     0x08u

static HINSTANCE     g_hSelf = NULL;        /* DllMain 里记录自身模块句柄 */
static unsigned int  g_vkKey = 'D';         /* 主键 VK (装车) */
static unsigned int  g_mods = HKMOD_CONTROL;  /* 修饰键集合 (装车) */
static int           g_hotkeyDisabled = 0;  /* Hotkey=None 时置位 */
static char          g_hotkeyDesc[24] = "Ctrl+D";
/* 同类变体选择热键 (默认 Ctrl+T): 按武器实际值过滤T键选择 */
static unsigned int  g_vVkKey = 'T';
static unsigned int  g_vMods = HKMOD_CONTROL;
static int           g_vDisabled = 0;
static char          g_vDesc[24] = "Ctrl+T";

static int ChrLower(int c) { return (c >= 'A' && c <= 'Z') ? c + 32 : c; }

static int StrEqNI(const char* a, const char* b)
{
    while (*a && *b)
    {
        if (ChrLower((unsigned char)*a) != ChrLower((unsigned char)*b)) return 0;
        a++; b++;
    }
    return *a == 0 && *b == 0;
}

/* 单个键名 -> VK 码; 0 = 不认识 */
static unsigned int MapKeyToken(const char* t)
{
    static const struct { const char* name; unsigned int vk; } named[] =
    {
        { "Space", VK_SPACE },  { "Tab", VK_TAB },     { "Enter", VK_RETURN },
        { "Return", VK_RETURN },{ "Backspace", VK_BACK },{ "Back", VK_BACK },
        { "Insert", VK_INSERT },{ "Ins", VK_INSERT },  { "Delete", VK_DELETE },
        { "Del", VK_DELETE },   { "Home", VK_HOME },   { "End", VK_END },
        { "PageUp", VK_PRIOR }, { "PgUp", VK_PRIOR },  { "PageDown", VK_NEXT },
        { "PgDn", VK_NEXT },    { "Up", VK_UP },       { "Down", VK_DOWN },
        { "Left", VK_LEFT },    { "Right", VK_RIGHT }, { "Pause", VK_PAUSE },
        { "Num0", VK_NUMPAD0 }, { "Num1", VK_NUMPAD1 },{ "Num2", VK_NUMPAD2 },
        { "Num3", VK_NUMPAD3 }, { "Num4", VK_NUMPAD4 },{ "Num5", VK_NUMPAD5 },
        { "Num6", VK_NUMPAD6 }, { "Num7", VK_NUMPAD7 },{ "Num8", VK_NUMPAD8 },
        { "Num9", VK_NUMPAD9 },
    };
    int i, n = 0;
    while (t[n]) n++;
    if (n == 1)
    {
        char c = ChrLower((unsigned char)t[0]);
        if (c >= 'a' && c <= 'z') return (unsigned int)(c - 'a' + 'A');
        if (t[0] >= '0' && t[0] <= '9') return (unsigned int)t[0];
    }
    if (n >= 2 && (t[0] == 'F' || t[0] == 'f'))
    {
        int num = 0, ok = 1;
        for (i = 1; i < n; i++)
        {
            if (t[i] < '0' || t[i] > '9') { ok = 0; break; }
            num = num * 10 + (t[i] - '0');
        }
        if (ok && num >= 1 && num <= 24) return VK_F1 + (unsigned int)num - 1;
    }
    for (i = 0; i < (int)(sizeof(named) / sizeof(named[0])); i++)
        if (StrEqNI(t, named[i].name)) return named[i].vk;
    return 0;
}

static void BuildHotkeyDescInto(unsigned int vk, unsigned int mods, int disabled,
                                char* desc)
{
    int n = 0;
    if (disabled) { lstrcpyA(desc, "disabled"); return; }
    if (mods & HKMOD_CONTROL) { desc[n++]='C'; desc[n++]='t'; desc[n++]='r'; desc[n++]='l'; desc[n++]='+'; }
    if (mods & HKMOD_ALT)     { desc[n++]='A'; desc[n++]='l'; desc[n++]='t'; desc[n++]='+'; }
    if (mods & HKMOD_SHIFT)   { desc[n++]='S'; desc[n++]='h'; desc[n++]='i'; desc[n++]='f'; desc[n++]='t'; desc[n++]='+'; }
    if (mods & HKMOD_WIN)     { desc[n++]='W'; desc[n++]='i'; desc[n++]='n'; desc[n++]='+'; }
    if (vk >= 'A' && vk <= 'Z') desc[n++] = (char)vk;
    else if (vk >= VK_F1 && vk <= VK_F24)
        n += wsprintfA(desc + n, "F%d", (int)(vk - VK_F1 + 1));
    else n += wsprintfA(desc + n, "VK%u", vk);
    desc[n] = 0;
}

static void BuildHotkeyDesc(void)
{
    BuildHotkeyDescInto(g_vkKey, g_mods, g_hotkeyDisabled, g_hotkeyDesc);
}

static void BuildVariantDesc(void)
{
    BuildHotkeyDescInto(g_vVkKey, g_vMods, g_vDisabled, g_vDesc);
}

static void ParseHotkeyInto(const char* spec, const char* fallbackDesc,
                            unsigned int fallbackVk, unsigned int fallbackMods,
                            unsigned int* outVk, unsigned int* outMods,
                            int* outDisabled, char* outDesc,
                            void (*buildDesc)(void))
{
    char toks[8][16];
    int ntok = 0, i;
    unsigned int mods = 0, key = 0;
    const char* p = spec;
    (void)outDesc; /* 描述由 buildDesc 回调统一生成, 此处仅解析键值 */

    if (StrEqNI(spec, "None") || StrEqNI(spec, "Off") || StrEqNI(spec, "Disabled"))
    {
        *outDisabled = 1;
        buildDesc();
        return;
    }
    *outDisabled = 0;
    while (*p && ntok < 8)
    {
        int n = 0;
        while (*p == '+' || *p == ' ' || *p == '\t') p++;
        if (!*p) break;
        while (*p && *p != '+' && *p != ' ' && *p != '\t' && n < 15)
            toks[ntok][n++] = *p++;
        toks[ntok][n] = 0;
        if (n) ntok++;
    }
    for (i = 0; i < ntok; i++)
    {
        const char* t = toks[i];
        if (StrEqNI(t, "Ctrl") || StrEqNI(t, "Control")) { mods |= HKMOD_CONTROL; continue; }
        if (StrEqNI(t, "Alt") || StrEqNI(t, "Menu"))     { mods |= HKMOD_ALT; continue; }
        if (StrEqNI(t, "Shift"))                         { mods |= HKMOD_SHIFT; continue; }
        if (StrEqNI(t, "Win") || StrEqNI(t, "Windows"))  { mods |= HKMOD_WIN; continue; }
        {
            unsigned int vk = MapKeyToken(t);
            if (vk) key = vk; /* 多个主键时取最后一个 */
        }
    }
    if (!key)
    {
        LOG2("config: bad Hotkey spec, fallback to ", fallbackDesc);
        LOG2(" (bad spec was: ", spec);
        *outMods = fallbackMods; *outVk = fallbackVk;
        buildDesc();
        return;
    }
    *outMods = mods; /* 允许无修饰键, 由使用者自行权衡冲突 */
    *outVk = key;
    buildDesc();
}

static void ParseHotkey(const char* spec)
{
    ParseHotkeyInto(spec, "Ctrl+D", 'D', HKMOD_CONTROL,
                    &g_vkKey, &g_mods, &g_hotkeyDisabled, g_hotkeyDesc,
                    BuildHotkeyDesc);
}

static void ParseVariantHotkey(const char* spec)
{
    ParseHotkeyInto(spec, "Ctrl+T", 'T', HKMOD_CONTROL,
                    &g_vVkKey, &g_vMods, &g_vDisabled, g_vDesc,
                    BuildVariantDesc);
}

/* 读 DLL 同目录的 AutoLoad.ini; 文件/键缺失时 GetPrivateProfileString 返回默认值 */
static void ReadConfig(void)
{
    char path[MAX_PATH], buf[64];
    DWORD n;
    if (!g_hSelf) return;
    n = GetModuleFileNameA(g_hSelf, path, MAX_PATH);
    if (!n || n >= MAX_PATH - 16) return;
    while (n && path[n - 1] != '\\' && path[n - 1] != '/') n--;
    path[n] = 0;
    lstrcatA(path, "AutoLoad.ini");
    GetPrivateProfileStringA("AutoLoad", "Hotkey", "Ctrl+D", buf, sizeof(buf), path);
    ParseHotkey(buf);
    LogParts("config: hotkey = ", g_hotkeyDesc,
             " (from AutoLoad.ini [AutoLoad] Hotkey)", NULL);
    GetPrivateProfileStringA("AutoLoad", "VariantHotkey", "Ctrl+T", buf, sizeof(buf), path);
    ParseVariantHotkey(buf);
    LogParts("config: variant hotkey = ", g_vDesc,
             " (from AutoLoad.ini [AutoLoad] VariantHotkey)", NULL);
}

/* ---------------- 键盘轮询线程 ---------------- */

static volatile LONG g_wantLoad = 0;      /* 键盘线程 -> 游戏线程 (装车) */
static volatile LONG g_wantVariant = 0;   /* 键盘线程 -> 游戏线程 (变体选择) */
static HANDLE        g_pollThread = NULL;

static int HotkeyDown(unsigned int vk, unsigned int mods)
{
    int down = 1;
    if (mods & HKMOD_CONTROL) down &= ((GetAsyncKeyState(VK_CONTROL) & 0x8000) != 0);
    if (mods & HKMOD_SHIFT)   down &= ((GetAsyncKeyState(VK_SHIFT)   & 0x8000) != 0);
    if (mods & HKMOD_ALT)     down &= ((GetAsyncKeyState(VK_MENU)    & 0x8000) != 0);
    if (mods & HKMOD_WIN)     down &= (((GetAsyncKeyState(VK_LWIN) | GetAsyncKeyState(VK_RWIN)) & 0x8000) != 0);
    down &= ((GetAsyncKeyState((int)vk) & 0x8000) != 0);
    return down;
}

static DWORD WINAPI PollThread(LPVOID param)
{
    int prevLoad = 0, prevVar = 0;
    (void)param;
    LogParts("poll thread started (hotkey ", g_hotkeyDesc,
             " + variant ", g_vDesc, " watcher)", NULL);
    for (;;)
    {
        Sleep(25);
        {
            DWORD fgPid = 0;
            GetWindowThreadProcessId(GetForegroundWindow(), &fgPid);
            if (fgPid != GetCurrentProcessId())
            {
                prevLoad = 0; prevVar = 0;
                continue;
            }
        }
        if (!g_hotkeyDisabled)
        {
            int down = HotkeyDown(g_vkKey, g_mods);
            if (down && !prevLoad)
            {
                LogParts("hotkey pressed: ", g_hotkeyDesc, NULL);
                InterlockedExchange(&g_wantLoad, 1);
            }
            prevLoad = down;
        }
        else prevLoad = 0;
        if (!g_vDisabled)
        {
            int down = HotkeyDown(g_vVkKey, g_vMods);
            if (down && !prevVar)
            {
                LogParts("variant hotkey pressed: ", g_vDesc, NULL);
                InterlockedExchange(&g_wantVariant, 1);
            }
            prevVar = down;
        }
        else prevVar = 0;
    }
    return 0;
}

static void EnsurePollThread(void)
{
    if (!g_pollThread)
    {
        ReadConfig();
        g_pollThread = CreateThread(NULL, 0, PollThread, NULL, 0, NULL);
    }
}

/* ---------------- 核心: 均衡分配并下发指令 ---------------- */

typedef struct { void* obj; unsigned int type; int cost; int isInf; } PItem;
typedef struct { void* obj; unsigned int type; int freeSlots; int assigned; double sizeLimit; } TItem;

static long long Dist2Leptons(const void* a, const void* b)
{
    const int* la = (const int*)((const char*)a + OFF_LOCATION);
    const int* lb = (const int*)((const char*)b + OFF_LOCATION);
    long long dx = (long long)la[0] - lb[0];
    long long dy = (long long)la[1] - lb[1];
    return dx * dx + dy * dy;
}

/* 进行中的装载轮次状态 (游戏线程独占访问) */
static void*         g_doneObjs[MAX_PASSENGERS];
static int           g_doneCount = 0;
static int           g_passActive = 0;

static int IsDone(const void* obj)
{
    int i;
    for (i = 0; i < g_doneCount; i++)
        if (g_doneObjs[i] == obj) return 1;
    return 0;
}

static void MarkDone(const void* obj)
{
    if (g_doneCount < MAX_PASSENGERS)
        g_doneObjs[g_doneCount++] = (void*)obj;
}

/* 本轮 pass 内已下发的容量预算 (按载具对象记账):
 * 游戏里载具的 used 计数要等步兵真正钻进去才会涨, 逐帧重读会超发 —— 预算在
 * pass 层持久记账, 保证 "10 步兵 + 2 个 1 座载具" 只下发 2 条指令。 */
static void* g_asgTrn[MAX_TRANSPORTS];
static int   g_asgCnt[MAX_TRANSPORTS];
static int   g_asgCount = 0;

/* 本轮 pass 内 (组, 载具) 的同类型已分配数 (v2.6 均匀主键):
 * 选车只看"车上总人数"时, 跨轮次后距离会把同类又吸回同一辆车
 * (5反+5光+10守争5×4座 → 某要塞进2反)。以"车上同类型人数"为第一主键,
 * 每个成员永远先去"还没有同类的车", 小类型被强制铺开 (上例必得 1+1+2)。
 * 跨帧续传: 与 g_asgCnt 同寿命 (新 pass 起时清零, 同一 pass 内累加),
 * 组下标跨帧稳定 (每帧按同一选中顺序重分组)。 */
static int g_typeAsg[MAX_PASSENGERS][MAX_TRANSPORTS];

static void ClearTypeAsg(void)
{
    int a, b;
    for (a = 0; a < MAX_PASSENGERS; a++)
        for (b = 0; b < MAX_TRANSPORTS; b++)
            g_typeAsg[a][b] = 0;
}

static void EndPass(void)
{
    g_passActive = 0;
    g_doneCount = 0;
    g_asgCount = 0;
}

/* Ares NoManualUnload 过滤 (仅用于运输方):
 * TechnoType+0x2FC 存 Ares TechnoTypeExt::ExtData 指针 (Ares 类型构造钩子写入),
 * ExtData+0x4C5 = NoManualUnload (byte)。此类载具 (清道夫 TRACTOR 等) 不可被
 * 进入、内部载员也不可手动卸载 —— 只在收集运输方时跳过, 它自己作为乘客进入
 * LCRF/SAPC 等正常运输载具不受影响 (Ares 光标判定 0x10049E70 也只查目标载具)。
 * ares.dll 未加载时该偏移是普通引擎数据不可信, 直接不过滤 (此时也不存在该规则
 * 标志)。 */
static int IsNoManualUnloadType(unsigned int typePtr)
{
    unsigned int ext;
    HMODULE h;
    if (!typePtr) return 0;
    h = GetModuleHandleA("ares.dll");
    if (!h) return 0;
    ext = *(unsigned int*)(typePtr + OFF_TTYPE_ARES_EXT);
    if (!ext) return 0;
    return *(unsigned char*)(ext + OFF_ARES_EXT_NMU) != 0;
}

/* 飞行运动模式判定: 读类型上的 Locomotor GUID (TechnoType+0x34C) */
static int IsFlyingType(const void* typePtr)
{
    const unsigned char* g;
    int i;
    if (!typePtr)
        return 0;
    g = (const unsigned char*)typePtr + OFF_TTYPE_LOCOMOTOR;
    for (i = 0; i < 16; i++)
        if (g[i] != GUID_LOCO_ROCKET[i])
            break;
    if (i == 16) return 1;
    for (i = 0; i < 16; i++)
        if (g[i] != GUID_LOCO_JUMPJET[i])
            break;
    return i == 16;
}

static unsigned int TypeOfObj(const void* obj)
{
    unsigned int vt = *(unsigned int*)obj;
    if (vt == INFANTRY_VTABLE)  return *(unsigned int*)((const char*)obj + OFF_TYPE_INFANTRY);
    if (vt == UNIT_VTABLE)      return *(unsigned int*)((const char*)obj + OFF_TYPE_UNIT);
    if (vt == BUILDING_VTABLE)  return *(unsigned int*)((const char*)obj + OFF_TYPE_BUILDING);
    if (vt == AIRCRAFT_VTABLE)  return *(unsigned int*)((const char*)obj + OFF_TYPE_AIRCRAFT);
    return 0;
}

/* 引擎 PassengersClass::GetTotalSize(0x473460): 已占槽数 = Σ乘客Type->Size (逐个FTOL) */
static int GetUsedSlots(void* trn)
{
    int r;
    __asm__ __volatile__ (
        "movl %1, %%ecx\n\t"
        "call *%2\n\t"
        : "=a"(r)
        : "r"((char*)trn + OFF_PASSENGERS), "r"(ADDR_GET_TOTAL_SIZE)
        : "ecx", "edx", "memory", "cc"
    );
    return r;
}

/* ---------------- 同类变体选择 (Ctrl+T): 按武器实际值过滤 ----------------
 * 背景见 NOTES: 原生T键按类型ID字符串全选, 同注册名下不同武器IFV会被一起
 * 选中 (如空车/机枪车/导弹车都是 [FV])。本功能对T加过滤:
 *  - 参照物 = 当前选中里的 (类型指针, 当前普通武器指针) 组合;
 *    Gunner=no 的单位武器键为NULL (退化为纯类型选择, 与原生一致);
 *    Gunner=yes (FV/AMC/TRACTOR/STING等) 按 Techno+0x138
 *    (CurrentWeaponNumber, 空车为0) 取普通Weapon数组 (TechnoType+0x898,
 *    每项0x1C, WeaponType在+0) 的实际武器指针 —— Weapon2与Weapon10指向
 *    同一实际武器即视为同一种; 只用普通Weapon, 忽略升级后的EliteWeapon。
 *  - 单击 (与上次间隔>500ms): 同屏 (Tactical 0x887324/0xB0CEC8, 同原生
 *    0x732950 首按分支); 双击 (间隔<=500ms): 全图 (Techno Array
 *    0xA8EC7C/0xA8EC88, 同原生第二按分支)。只做加选 (与原生一致, 不取消
 *    已选), 选择判定复用原生 0x732580/0x7342C0, 下发复用 Select (vtbl+0x14C)。
 *  - 选择是纯本地UI状态, 不走网络事件, 联机安全 (与T键本身一致)。 */

static unsigned char CallTypeSelectCheck(void* obj)
{
    unsigned char r;
    __asm__ __volatile__ (
        "movl %1, %%ecx\n\t"
        "call *%2\n\t"
        : "=a"(r)
        : "r"(obj), "r"(ADDR_CHECK_TYPESELECT)
        : "ecx", "edx", "memory", "cc"
    );
    return r;
}

static unsigned char CallAliveCheck(void* obj)
{
    unsigned char r;
    __asm__ __volatile__ (
        "movl %1, %%ecx\n\t"
        "call *%2\n\t"
        : "=a"(r)
        : "r"(obj), "r"(ADDR_CHECK_ALIVE)
        : "ecx", "edx", "memory", "cc"
    );
    return r;
}

static unsigned char CallSelect(void* obj)
{
    unsigned int vt;
    unsigned char r;
    if (!obj) return 0;
    vt = *(unsigned int*)obj;
    __asm__ __volatile__ (
        "movl %1, %%ecx\n\t"
        "movl %2, %%eax\n\t"
        "call *%%eax\n\t"
        : "=a"(r)
        : "r"(obj), "r"(*(unsigned int*)(vt + OFF_SELECT_VTBL))
        : "ecx", "edx", "memory", "cc"
    );
    return r;
}

/* 经 (Ares 可 hook 的) 引擎 accessor 取普通 Weapon[idx] 的 WeaponType 指针。
 * 0x7177C0: ecx=TechnoType*, 栈参idx(int), ret 4 自清理, 返回 WeaponStruct*
 * (WeaponType指针在+0)。必须走它: 18+ 槽位的实际存储由 Ares 接管,
 * 直接计算只对 idx<18 有效。 */
static unsigned int GetNormalWeaponType(unsigned int typePtr, int idx)
{
    unsigned int ws;
    __asm__ __volatile__ (
        "pushl %2\n\t"
        "movl %1, %%ecx\n\t"
        "call *%3\n\t"
        : "=a"(ws)
        : "r"(typePtr), "r"((unsigned int)idx), "r"(ADDR_GET_WEAPON)
        : "ecx", "edx", "memory", "cc"
    );
    if (!ws) return 0;
    return *(unsigned int*)ws;
}

/* 类型ID字符串 (type+0x24, 仅日志用, 定长拷贝防越界) */
static char* TypeIDStr(unsigned int typePtr, char* buf) /* buf >= 32 字节 */
{
    const char* s;
    int i;
    if (!typePtr) { buf[0] = '?'; buf[1] = 0; return buf; }
    s = (const char*)(typePtr + OFF_TTYPE_IDSTR);
    for (i = 0; i < 31 && s[i]; i++) buf[i] = s[i];
    buf[i] = 0;
    return buf;
}

typedef struct { unsigned int type; unsigned int wpn; int cur; int wcount; int pax; int gunner; } VKey;

/* 取变体键: 非Techno则type=0; 非Gunner则wpn=0/cur=-1 (纯类型选择) */
static void VariantKeyOf(void* obj, VKey* k)
{
    unsigned int typePtr, vt;
    k->type = 0; k->wpn = 0; k->cur = -1; k->wcount = 0; k->pax = 0; k->gunner = 0;
    if (!obj) return;
    vt = *(unsigned int*)obj;
    if (vt != INFANTRY_VTABLE && vt != UNIT_VTABLE &&
        vt != BUILDING_VTABLE && vt != AIRCRAFT_VTABLE)
        return;
    typePtr = TypeOfObj(obj);
    if (!typePtr) return;
    k->type = typePtr;
    k->gunner = (*(unsigned char*)(typePtr + OFF_TTYPE_GUNNER)) ? 1 : 0;
    k->pax = *(int*)((const char*)obj + OFF_PASSENGERS);
    if (!k->gunner) return; /* 非IFV逻辑: 纯类型选择 */
    k->wcount = (int)*(unsigned int*)(typePtr + OFF_TTYPE_WEAPONCOUNT);
    {
        int cur = (int)*(unsigned int*)((const char*)obj + OFF_TECHNO_CURWEAPON);
        if (cur < 0 || (k->wcount && cur >= k->wcount))
            cur = 0; /* 引擎回落语义 (0x70DC70): 非法值用Weapon1 */
        k->cur = cur;
        k->wpn = GetNormalWeaponType(typePtr, cur);
    }
}

static int RefMatches(VKey* refs, int nref, unsigned int t, unsigned int w)
{
    int j;
    for (j = 0; j < nref; j++)
        if (refs[j].type == t && refs[j].wpn == w) return 1;
    return 0;
}

static void HistNote(unsigned int* hT, unsigned int* hW, int* hC, int* hN,
                     unsigned int t, unsigned int w)
{
    int i;
    for (i = 0; i < *hN; i++)
        if (hT[i] == t && hW[i] == w) { hC[i]++; return; }
    if (*hN < MAX_VARIANT_HIST)
    {
        hT[*hN] = t; hW[*hN] = w; hC[*hN] = 1; (*hN)++;
    }
}

static void DoVariantSelect(int wholeMap)
{
    void** selItems = *(void***)OFF_SELECTION_ITEMS;
    int selCount = *(int*)OFF_SELECTION_COUNT;
    VKey refs[MAX_VARIANT_REFS];
    unsigned int hT[MAX_VARIANT_HIST];
    unsigned int hW[MAX_VARIANT_HIST];
    int hC[MAX_VARIANT_HIST];
    int nref = 0, hN = 0, i, j;
    int scanned = 0, checked = 0, added = 0;
    char tid[32], line[256];

    if (!selItems || selCount <= 0)
    {
        LOGS("variant-select: selection empty, nothing to do");
        return;
    }
    /* 1. 从当前选中收集 (type, weapon) 参照组合 */
    for (i = 0; i < selCount && i < 512; i++)
    {
        VKey k;
        int dup = 0;
        VariantKeyOf(selItems[i], &k);
        if (!k.type) continue;
        for (j = 0; j < nref; j++)
            if (refs[j].type == k.type && refs[j].wpn == k.wpn) { dup = 1; break; }
        if (!dup && nref < MAX_VARIANT_REFS)
            refs[nref++] = k;
    }
    if (nref <= 0)
    {
        LOGS("variant-select: no techno in selection");
        return;
    }
    {
        char b1[16];
        LogParts("variant-select: refs=", ItoA(nref, b1),
                 wholeMap ? " scope=MAP" : " scope=SCREEN", NULL, NULL);
    }
    for (i = 0; i < nref; i++)
    {
        wsprintfA(line, "  ref%d: type=%s gunner=%d cur=%d/%d wpn=%08X pax=%d",
                  i, TypeIDStr(refs[i].type, tid), refs[i].gunner,
                  refs[i].cur, refs[i].wcount, refs[i].wpn, refs[i].pax);
        LOGS(line);
    }

    /* 2. 候选扫描 + 加选 (同步记直方图: DLL视角下的全部分组) */
    if (wholeMap)
    {
        void** items = *(void***)OFF_TECHNO_ITEMS;
        int count = *(int*)OFF_TECHNO_COUNT;
        if (!items || count <= 0) return;
        for (i = 0; i < count; i++)
        {
            void* obj = items[i];
            VKey k;
            if (!obj) continue;
            scanned++;
            if (!CallTypeSelectCheck(obj)) continue;
            checked++;
            VariantKeyOf(obj, &k);
            if (!k.type) continue;
            HistNote(hT, hW, hC, &hN, k.type, k.wpn);
            if (!RefMatches(refs, nref, k.type, k.wpn)) continue;
            if (CallSelect(obj)) added++;
        }
    }
    else
    {
        unsigned int tac = *(unsigned int*)OFF_TACTICAL_INST;
        int count;
        if (!tac) return;
        count = *(int*)(tac + OFF_TACTICAL_CNT);
        for (i = 0; i < count; i++)
        {
            void* obj = *(void**)(OFF_TACTICAL_ARRAY + (unsigned)i * SZ_TACTICAL_ENTRY);
            VKey k;
            if (!obj) continue;
            scanned++;
            if (!CallAliveCheck(obj)) continue;
            if (!CallTypeSelectCheck(obj)) continue;
            checked++;
            VariantKeyOf(obj, &k);
            if (!k.type) continue;
            HistNote(hT, hW, hC, &hN, k.type, k.wpn);
            if (!RefMatches(refs, nref, k.type, k.wpn)) continue;
            if (CallSelect(obj)) added++;
        }
    }
    {
        char b1[16], b2[16], b3[16];
        LogParts("variant-select: groups=", ItoA(hN, b1),
                 " scanned=", ItoA(scanned, b2),
                 " selectable=", ItoA(checked, b3), NULL);
    }
    for (i = 0; i < hN; i++)
    {
        wsprintfA(line, "  group: type=%s wpn=%08X n=%d%s",
                  TypeIDStr(hT[i], tid), hW[i], hC[i],
                  RefMatches(refs, nref, hT[i], hW[i]) ? " MATCHED" : "");
        LOGS(line);
    }
    {
        char b1[16], b2[16], b3[16];
        int nowSel = *(int*)OFF_SELECTION_COUNT;
        LogParts("variant-select done: added=", ItoA(added, b1),
                 " selection now=", ItoA(nowSel, b2),
                 wholeMap ? " (map)" : " (screen)", NULL);
        LogParts("  refs=", ItoA(nref, b1), " groups=", ItoA(hN, b2),
                 " checked=", ItoA(checked, b3), NULL);
    }
}

static int PassAssigned(const void* trn)
{
    int i;
    for (i = 0; i < g_asgCount; i++)
        if (g_asgTrn[i] == trn)
            return g_asgCnt[i];
    return 0;
}

static void AddAssigned(const void* trn, int slots)
{
    int i;
    for (i = 0; i < g_asgCount; i++)
        if (g_asgTrn[i] == trn) { g_asgCnt[i] += slots; return; }
    if (g_asgCount < MAX_TRANSPORTS)
    {
        g_asgTrn[g_asgCount] = (void*)trn;
        g_asgCnt[g_asgCount] = slots;
        g_asgCount++;
    }
}

static void DoAutoLoad(void)
{
    void** items = *(void***)OFF_SELECTION_ITEMS;
    int count = *(int*)OFF_SELECTION_COUNT;
    PItem ps[MAX_PASSENGERS];
    TItem ts[MAX_TRANSPORTS];
    int np = 0, nt = 0, i, j;
    int events = 0;
    int remaining = 0;
    int nInfSeen = 0, nTrnSeen = 0, nFlySeen = 0, nVehSeen = 0, nNmuSeen = 0;
    int queueFull = 0;

    int groupHead[MAX_PASSENGERS];
    int groupType[MAX_PASSENGERS];
    int nextInGroup[MAX_PASSENGERS];
    int ngroups = 0;

    char b1[16], b2[16], b3[16], b4[16];

    if (!items || count <= 0)
    {
        LOGS("auto-load: selection is empty");
        if (g_passActive) EndPass();
        return;
    }

    /* 1. 收集 (全部来自当前选中列表):
     *    乘客 = 非飞行步兵 + 地面载具(Unit, 非飞行); 载具 = 有容量的 techno。
     *    先步兵后载具 => 分组时步兵组在前, 优先上车。 */
    for (i = 0; i < count && i < 512; i++)
    {
        void* obj = items[i];
        unsigned int vt, typePtr;
        int sz;
        if (!obj)
            continue;
        vt = *(unsigned int*)obj;
        if (vt != INFANTRY_VTABLE && vt != UNIT_VTABLE)
            continue;
        typePtr = TypeOfObj(obj);
        if (IsFlyingType((void*)typePtr))
        {
            nFlySeen++;
            LogParts("  skip flying unit: obj=", HtoA8((unsigned)obj, b1),
                     " type=", HtoA8(typePtr, b2), NULL);
            continue;
        }
        sz = (int)(*(double*)((char*)typePtr + OFF_TTYPE_SIZE));
        if (sz < 1) sz = 1; /* 引擎按 double 累加后 FTOL; <1 的按 1 计保守处理 */
        if (np < MAX_PASSENGERS)
        {
            ps[np].obj = obj;
            ps[np].type = typePtr;
            ps[np].cost = sz;
            ps[np].isInf = (vt == INFANTRY_VTABLE);
            if (vt == INFANTRY_VTABLE) nInfSeen++; else nVehSeen++;
            np++;
        }
    }
    /* 2. 收集载具: UNIT/BUILDING/AIRCRAFT 且容量>0; 空位按引擎规则(Size和)计算 */
    for (i = 0; i < count && i < 512; i++)
    {
        void* obj = items[i];
        unsigned int vt, typePtr;
        int cap, used, freeSlots;
        if (!obj)
            continue;
        vt = *(unsigned int*)obj;
        if (vt != UNIT_VTABLE && vt != BUILDING_VTABLE && vt != AIRCRAFT_VTABLE)
            continue;
        typePtr = TypeOfObj(obj);
        nTrnSeen++;
        if (nt >= MAX_TRANSPORTS || !typePtr)
            continue;
        if (IsNoManualUnloadType(typePtr))
        {
            nNmuSeen++;
            LogParts("  transport NoManualUnload (internal cargo, not enterable): obj=",
                     HtoA8((unsigned)obj, b1), " type=", HtoA8(typePtr, b2), NULL);
            continue;
        }
        cap = *(int*)(typePtr + OFF_TTYPE_PASSENGERS);
        if (cap <= 0)
            continue;
        {
            double szLimit = *(double*)((char*)typePtr + OFF_TTYPE_SIZELIMIT);
            if (szLimit < 1.0)
            {
                /* 装载等级 <1: 引擎判 Size<=SizeLimit, 任何乘客(>=1)都进不来 */
                LogParts("  transport SizeLimit<1 (takes nobody), skipped: obj=",
                         HtoA8((unsigned)obj, b1), NULL, NULL);
                continue;
            }
            used = GetUsedSlots(obj);
            /* 减去本轮 pass 已占用的预算, 防止跨帧超发 */
            freeSlots = cap - used - PassAssigned(obj);
            LogParts("  transport: obj=", HtoA8((unsigned)obj, b1),
                     " type=", HtoA8(typePtr, b2), NULL);
            LogParts("    capacity=", ItoA(cap, b1), " usedSlots=", ItoA(used, b2),
                     " budgetUsed=", ItoA(PassAssigned(obj), b3), NULL);
            LogParts("    sizeLimit=", ItoA((int)szLimit, b1), NULL, NULL);
            if (freeSlots > 0)
            {
                ts[nt].obj = obj;
                ts[nt].type = typePtr;
                ts[nt].freeSlots = freeSlots;
                ts[nt].assigned = 0;
                ts[nt].sizeLimit = szLimit;
                nt++;
            }
            else
            {
                LOGS("    (full or no capacity - skipped)");
            }
        }
    }

    LogParts("auto-load: selected count=", ItoA(count, b1),
             " infantry=", ItoA(nInfSeen, b2), " techno=", ItoA(nTrnSeen, b3),
             " flyingSkipped=", ItoA(nFlySeen, b4), NULL);
    LogParts("noManualUnloadSkipped=", ItoA(nNmuSeen, b1), NULL, NULL);
    LogParts("usable: passengers=", ItoA(np, b1),
             " (inf=", ItoA(nInfSeen, b2), " veh=", ItoA(nVehSeen, b3),
             ") transports with free slots=", ItoA(nt, b4), NULL);

    if (np <= 0 || nt <= 0)
    {
        LOGS("auto-load: nothing to do (no passengers, or no transport with free slots)");
        if (g_passActive) EndPass();
        return;
    }

    /* 3. "附近"过滤: 只保留与任一选中乘客距离 <= RANGE 的载具 */
    {
        long long r2 = (long long)RANGE_LEPTONS * RANGE_LEPTONS;
        for (j = 0; j < nt; )
        {
            int isNear = 0;
            for (i = 0; i < np; i++)
                if (Dist2Leptons(ts[j].obj, ps[i].obj) <= r2) { isNear = 1; break; }
            if (!isNear)
            {
                LOG2("  transport out of 30-cell range, skipped: obj=",
                     HtoA8((unsigned)ts[j].obj, b1));
                ts[j] = ts[nt - 1];
                nt--;
            }
            else j++;
        }
    }
    if (nt <= 0)
    {
        LOGS("auto-load: all transports out of range");
        if (g_passActive) EndPass();
        return;
    }

    /* 4. 按类型分组 (首次出现顺序), 类型内保持选中顺序 */
    for (i = 0; i < np; i++)
    {
        int g = -1;
        for (j = 0; j < ngroups; j++)
            if ((unsigned int)groupType[j] == ps[i].type) { g = j; break; }
        if (g < 0)
        {
            g = ngroups++;
            groupType[g] = (int)ps[i].type;
            groupHead[g] = i;
            nextInGroup[i] = -1;
        }
        else
        {
            int tail = groupHead[g];
            while (nextInGroup[tail] != -1) tail = nextInGroup[tail];
            nextInGroup[tail] = i;
            nextInGroup[i] = -1;
        }
    }
    LogParts("passenger type groups=", ItoA(ngroups, b1), NULL, NULL);
    for (i = 0; i < ngroups; i++)
    {
        int members = 0;
        for (j = groupHead[i]; j != -1; j = nextInGroup[j]) members++;
        LogParts("  group ", ItoA(i, b1), " type=", HtoA8((unsigned)groupType[i], b2), NULL);
        LOG2("    members=", ItoA(members, b1));
    }

    /* 4b. 组内按就近排序 (v2.4): 超员时离载具近的先占座。
     * 病根: 第5步按组内链表顺序遍历、先遍历先占座, 而链表顺序=选中数组
     * 顺序 (表现为地图从上到下), 与距离无关 —— 人多车少时远处的先装、
     * 身边的反而落选。距离只决定"每个乘客选哪辆车", 不决定"谁有座位"。
     * 修复: 组内按 (到最近可进载具的距离, 选中顺序) 重排链表; 可进性用
     * 静态判据 (SizeLimit/载具乘客只进Unit/初始空位), 动态余量仍由第5步
     * 把关。组间顺序与"已分配最少->最近"选车规则保持不变, 均匀性不受影响。 */
    {
        long long nearD[MAX_PASSENGERS];
        int g, m, k2;
        for (m = 0; m < np; m++)
        {
            long long best = (long long)0x7FFFFFFFFFFFFFFFLL; /* INF: 无可进载具 */
            for (k2 = 0; k2 < nt; k2++)
            {
                long long d;
                unsigned int tv;
                if (ts[k2].freeSlots < ps[m].cost)
                    continue;
                if ((double)ps[m].cost > ts[k2].sizeLimit)
                    continue;
                tv = *(unsigned int*)ts[k2].obj;
                if (!ps[m].isInf && tv != UNIT_VTABLE)
                    continue;
                d = Dist2Leptons(ps[m].obj, ts[k2].obj);
                if (d < best) best = d;
            }
            nearD[m] = best;
        }
        for (g = 0; g < ngroups; g++)
        {
            int ord[MAX_PASSENGERS];
            int nm = 0, a, p2;
            char line[128];
            for (m = groupHead[g]; m != -1; m = nextInGroup[m]) ord[nm++] = m;
            /* 插入排序: (nearD, 选中序号) 升序; np<=128, 开销可忽略。
             * 选中序号(m 本身即 ps 下标=选中顺序)作平局裁决, 与旧行为一致。 */
            for (a = 1; a < nm; a++)
            {
                int cur = ord[a];
                p2 = a - 1;
                while (p2 >= 0 && (nearD[ord[p2]] > nearD[cur] ||
                       (nearD[ord[p2]] == nearD[cur] && ord[p2] > cur)))
                { ord[p2 + 1] = ord[p2]; p2--; }
                ord[p2 + 1] = cur;
            }
            groupHead[g] = ord[0];
            for (a = 0; a < nm; a++)
                nextInGroup[ord[a]] = (a + 1 < nm) ? ord[a + 1] : -1;
            for (a = 0; a < nm; a++)
            {
                /* d2cells = 距离平方(格^2, lepton>>8再平方前先>>16防溢出):
                 * nearD是lepton平方, >>16即格平方, 单调性不变, 仅日志用 */
                wsprintfA(line, "    #%d obj=%08X d2cells=%d%s", a,
                          (unsigned)ps[ord[a]].obj,
                          (int)(nearD[ord[a]] == (long long)0x7FFFFFFFFFFFFFFFLL
                                ? -1 : (nearD[ord[a]] >> 16)),
                          nearD[ord[a]] == (long long)0x7FFFFFFFFFFFFFFFLL
                                ? " (NO TRANSPORT)" : "");
                LOGS(line);
            }
        }
    }

    /* 5. 下发 Enter 事件 —— 组间轮流 (v2.5), 组内就近 (v2.4):
     *    每轮每组派一个成员 (组内已按最近可进距离排好) 占座, 取完为止。
     *    v2.4 及之前是整组串行: 前面的组吃光所有座位, 后面的组一个都分不到
     *    (如 12 磁暴在前、3 动员兵在后争 12 座 → 动员兵全落选)。轮流后各类型
     *    按人数比例公平分享 (上例 → 3 动员兵全上 + 9 最近的磁暴, 落选最远 3 磁暴)。
     *    候选载具 (有空位且 SizeLimit 达标) 按 [同类型已分最少 (v2.6) ->
     *    总已分配最少 -> 距离最近 -> 选中顺序] 挑选:
     *    第一主键保证同类铺开 (5反+5光+10守争5×4座 → 每要塞 1+1+2, 而不是
     *    某要塞进2反: 只看总数时跨轮次后距离会把同类吸回同一辆车);
     *    后续键保多类型均衡 (2gi+6ggi+2BF -> 每要塞 1gi+3ggi) 与就近。
     *    同类型成员 cost 相同、可进集合相同, 一旦某成员无车可进则整组判死
     *    (余量只减不增, 后面的同样进不去), 避免空转。 */
    {
        int cursor[MAX_PASSENGERS];
        int alive[MAX_PASSENGERS];
        int nalive = 0, g2;
        /* 事件布局必须与真实点击一致 (FootClass::Active_Click_With 0x4D76C6 ->
         * ClickedMission(7, NULL, 载具, NULL) -> 0x646E90):
         *   Target       = {0,0} 空    (执行器 SetTarCom(空): 不设攻击目标)
         *   Destination  = TC(载具对象, RTTI 0x34) (执行器 SetDestination(载具))
         * v1.2 教训: 把载具放 Target -> SetTarCom(载具) = 攻击目标 -> 步兵开火打载具;
         * v1.1 教训: Destination 只给格子 -> 步兵走到格旁即放弃 (Area_Guard)。 */
        for (g2 = 0; g2 < ngroups; g2++)
        {
            cursor[g2] = groupHead[g2];
            alive[g2] = 1;
            nalive++;
        }
        while (nalive > 0 && events < MAX_EVENTS_PER_FRAME)
        {
            for (g2 = 0; g2 < ngroups && events < MAX_EVENTS_PER_FRAME; g2++)
            {
                int m, best, bestType, bestAssigned, k;
                long long bestDist = 0;
                TargetClass tcWhom, tcDest, tcTarget;
                char b5[16];

                if (!alive[g2])
                    continue;
                /* 跳过已处理/已无资格成员 (跨帧续传靠 IsDone 去重):
                 * 载具乘客一旦被用作运输工具 (PassAssigned>0) 即永久失去上车资格 */
                m = cursor[g2];
                while (m != -1 && (IsDone(ps[m].obj) ||
                       (!ps[m].isInf && PassAssigned(ps[m].obj) > 0)))
                    m = nextInGroup[m];
                if (m == -1) { alive[g2] = 0; nalive--; continue; }
                best = -1; bestType = 0; bestAssigned = 0;
                for (k = 0; k < nt; k++)
                {
                    long long d;
                    unsigned int tv = *(unsigned int*)ts[k].obj;
                    if (ts[k].freeSlots < ps[m].cost)
                        continue;
                    /* 装载等级: 引擎判 Size<=SizeLimit (NOTES.md §14), 严格复刻 */
                    if ((double)ps[m].cost > ts[k].sizeLimit)
                        continue;
                    /* 载具乘客只进地面/水面载具(Unit), 不进建筑和飞行器 */
                    if (!ps[m].isInf && tv != UNIT_VTABLE)
                        continue;
                    d = Dist2Leptons(ps[m].obj, ts[k].obj);
                    if (best < 0 ||
                        g_typeAsg[g2][k] < bestType ||
                        (g_typeAsg[g2][k] == bestType &&
                         ts[k].assigned < bestAssigned) ||
                        (g_typeAsg[g2][k] == bestType &&
                         ts[k].assigned == bestAssigned && d < bestDist))
                    {
                        best = k;
                        bestType = g_typeAsg[g2][k];
                        bestAssigned = ts[k].assigned;
                        bestDist = d;
                    }
                }
                if (best < 0 || ts[best].freeSlots < ps[m].cost)
                {
                    LogParts("  group out of slots, its leftover members stay out: type=",
                             HtoA8((unsigned)ps[m].type, b1), NULL, NULL);
                    alive[g2] = 0; nalive--;
                    continue;
                }

                TCFromObject(&tcWhom, ps[m].obj);
                tcTarget.ID = 0;
                tcTarget.RTTI = 0;
                TCFromObject(&tcDest, ts[best].obj);

                if (QueueMegaMission(MISSION_ENTER, &tcTarget,
                                     (unsigned int)tcWhom.ID, tcWhom.RTTI, &tcDest))
                {
                    MarkDone(ps[m].obj);
                    ts[best].freeSlots -= ps[m].cost;
                    ts[best].assigned++;
                    AddAssigned(ts[best].obj, ps[m].cost);
                    g_typeAsg[g2][best]++;
                    events++;
                    cursor[g2] = nextInGroup[m];
                    if (cursor[g2] == -1) { alive[g2] = 0; nalive--; }
                    LogParts("  queue enter: unit=", HtoA8((unsigned)ps[m].obj, b1),
                             " -> trn=", HtoA8((unsigned)ts[best].obj, b2),
                             " cost=", ItoA(ps[m].cost, b3),
                             " tSame=", ItoA(g_typeAsg[g2][best], b4),
                             " dist=", ItoA((int)(bestDist >> 8), b5), NULL);
                }
                else
                {
                    LOGS("  event queue full - will retry next frame");
                    queueFull = 1;
                    goto report; /* OutList 满, 下帧继续 */
                }
            }
        }
    }

report:
    /* 6. 是否全部处理完毕 */
    for (i = 0; i < np; i++)
        if (!IsDone(ps[i].obj)) remaining++;
    LogParts("frame result: events queued=", ItoA(events, b1),
             " units remaining=", ItoA(remaining, b2), NULL, NULL);
    if (queueFull)
    {
        /* OutList 满: 保持 pass, 下帧继续 */
    }
    else if (remaining == 0)
    {
        LOGS("auto-load pass COMPLETE");
        EndPass();
    }
    else if (events == 0)
    {
        /* 没有新事件也没有空位: 剩余单位装不下 (容量/范围所限), 结束本轮 */
        LogParts("auto-load pass ENDED, leftover units=",
                 ItoA(remaining, b1), " (no slots in range)", NULL, NULL);
        EndPass();
    }
    /* 否则保持 g_passActive, 由钩子重新置位 g_wantLoad, 下一帧继续 (OutList 每帧清空) */
}

/* ---------------- Syringe 接口 ---------------- */

typedef struct
{
    int cbSize;
    int num_hooks;
    unsigned int checksum;
    DWORD exeFilesize;
    DWORD exeTimestamp;
    unsigned int exeCRC;
    int cchMessage;
    char* Message;
} SyringeHandshakeInfo;

__declspec(dllexport) HRESULT __cdecl SyringeHandshake(SyringeHandshakeInfo* pInfo)
{
    if (!pInfo || pInfo->cbSize < (int)sizeof(SyringeHandshakeInfo))
        return E_FAIL;
    /* 不做 exeCRC 校验: 引擎映像相同的重打包变体 CRC 也可能不同 (如
     * gamemd.exe 0x54CC0A13 vs gamemd-spawn.exe 0x098465B3, 时间戳同为
     * 0x3BDF544E, 见 §19), 误拒会让整个 DLL 不加载。本 DLL 只被 Syringe
     * 按钩子声明注入游戏引擎, 帧钩子另有 gamemd.exe/gamemd-spawn.exe
     * 宿主兜底, 不会影响其它程序。 */
    LogInit();
    ReadConfig();
    {
        char b[16];
        LOG2("handshake OK, exe crc=", HtoA8(pInfo->exeCRC, b));
    }
    if (pInfo->Message && pInfo->cchMessage > 0)
    {
        const char* head = "AutoLoad 2.6: press ";
        const char* mid = " to load; ";
        const char* tail = " to select same IFV variant (T-filtered).";
        int i = 0, k;
        for (k = 0; head[k] && i < pInfo->cchMessage - 1; k++) pInfo->Message[i++] = head[k];
        for (k = 0; g_hotkeyDesc[k] && i < pInfo->cchMessage - 1; k++) pInfo->Message[i++] = g_hotkeyDesc[k];
        for (k = 0; mid[k] && i < pInfo->cchMessage - 1; k++) pInfo->Message[i++] = mid[k];
        for (k = 0; g_vDesc[k] && i < pInfo->cchMessage - 1; k++) pInfo->Message[i++] = g_vDesc[k];
        for (k = 0; tail[k] && i < pInfo->cchMessage - 1; k++) pInfo->Message[i++] = tail[k];
        pInfo->Message[i] = '\0';
    }
    return S_OK;
}

/* 每帧钩子: Syringe 在游戏主循环帧首调用, 返回后由 Syringe 恢复寄存器并执行原指令 */
__declspec(dllexport) DWORD __cdecl AutoLoad_FrameHook(void* regs)
{
    static int s_armed = 0;      /* 热键已触发, 等待延迟帧 */
    static int s_countdown = 0;  /* 还剩几个延迟帧 */
    static DWORD s_lastVariantTick = 0; /* 变体选择双击计时 */
    (void)regs;
    /* 宿主兜底校验: 仅在游戏引擎进程里工作 (Syringe 未调用 handshake 时保证安全)。
     * 引擎有两种文件名: gamemd.exe (经典/MO) 与 gamemd-spawn.exe (CnCNet 联机
     * 客户端, 见 §19: 同一时间戳/同基址/关键地址字节级一致, 仅 CRC 不同)。
     * GetModuleHandleA(NULL) 即本进程映像句柄, 恒非空, 仅用于卫语句完整性。 */
    if (!GetModuleHandleA("gamemd.exe") && !GetModuleHandleA("gamemd-spawn.exe"))
        return 0;
    LogInit();
    EnsurePollThread();
    if (InterlockedExchange(&g_wantVariant, 0))
    {
        DWORD now = GetTickCount();
        int wholeMap = (s_lastVariantTick != 0 && now - s_lastVariantTick <= VARIANT_DBL_MS);
        s_lastVariantTick = now;
        LOGS(wholeMap ? "--- variant-select pass (MAP, double-press) ---"
                      : "--- variant-select pass (SCREEN, single-press) ---");
        DoVariantSelect(wholeMap);
    }
    if (InterlockedExchange(&g_wantLoad, 0))
    {
        if (g_passActive)
        {
            /* 上一轮未完成的延续: 不再延迟, 立即继续 */
            DoAutoLoad();
            if (g_passActive)
                InterlockedExchange(&g_wantLoad, 1); /* 未完, 下一帧继续 */
        }
        else
        {
            /* 新触发: 延迟 1 帧再下发, 避开按下 Ctrl+D 当帧的其它输入 */
            s_armed = 1;
            s_countdown = 1;
        }
    }
    else if (s_armed && --s_countdown <= 0)
    {
        s_armed = 0;
        g_passActive = 1;
        g_doneCount = 0;
        g_asgCount = 0;
        ClearTypeAsg(); /* 同类型计数与本轮预算同寿命 */
        LOGS("--- auto-load pass started ---");
        DoAutoLoad();
        if (g_passActive)
            InterlockedExchange(&g_wantLoad, 1); /* 未完, 下一帧继续 */
    }
    return 0; /* 0 = 恢复原指令并正常继续 */
}

BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved)
{
    (void)reserved;
    if (reason == DLL_PROCESS_ATTACH)
    {
        g_hSelf = hInst;
        DisableThreadLibraryCalls(hInst);
    }
    return TRUE;
}
