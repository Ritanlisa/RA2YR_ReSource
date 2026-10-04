// G42.32 P: tree-universe marker -- e4 tree-owned decls suppressed
#define GAMEMD_TREE_UNIVERSE 1
// G42.32 S: guard-order tree-bridge -- ra2::game full defs precede e4 leaf headers
#include "core/math.hpp"
// GENERATED supplied bodies (supply_missing_bodies.py) -- no-body
// no-file FAIL family; bodies are cache-verbatim transforms.
// G42.35: core/stream_ext.hpp 摘除 -- 其 gamemd::IStream stub 遮蔽 COM IStream 令
// 本 TU Load/Save override 失效 6x C3668（object/supplied_bodies.cpp 同期摘除先例）；
// 其 Buffer/Text 副本与 utility_ext/ui_ext 载体双定义 2x C2011。本 TU 仅用其
// Stream::GetChecked / Text::MeasureWidth 两站点 -- 下方 TU 本地站点桥供给。
#include "core/utility_ext.hpp"
#include "core/vector.hpp"
#include "misc/misc_ext.hpp"  // G42.35 note: 其 fwd 区由并行会话维护（AbstractClass/VectorClass 在途, 勿在本 TU 重复供给）
#include "object/foot.hpp"
#include "object/mission.hpp"
#include "object/techno.hpp"
#include "render/blitter.hpp"
#include "render/display.hpp"
#include "render/render_ext.hpp"
#include "render/surface.hpp"
#include "render/text_render.hpp"
#include "structure/building.hpp"
#include "structure/unit.hpp"
#include "system/buffer_io_file.hpp"
#include "system/cc_file.hpp"
#include "system/cell.hpp"
#include "system/convert_class.hpp"
#include "system/ini_class.hpp"
#include "system/tactical.hpp"
#include "type/anim_type.hpp"
#include "type/unit_type.hpp"
#include "ui/ui_ext.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/e4_globals_decls.hpp"  // G42.34: globals carrier (g_DSurface_Hidden_2/stru_87F5F0/DSurface_ViewBounds)  // G42.34: moved after tree headers (fwd names resolve via bridges)
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"  // G42.35: Coord::To_ScreenRaw 静态站点载体（0x6D7F8E/0x6D843B 同款 e4 TU）
#include "e4/classes/AudioStream_e4.hpp"  // G42.35: g_DSurface_Hidden_2 宿主基类（完整 AudioStream）

// ============================================================================
// G42.35 TU 本地载体块（stream_ext 摘除后所需 + C3861 原型供给 + 站点桥）
// ============================================================================
namespace gamemd {
// stream_ext 摘除后站点桥（真值: Stream::GetChecked __thiscall 0x45A050;
// Text::MeasureWidth 2 参形 0x433ED0, e4/classes/Text_e4.hpp 同款）
struct Stream_site { static int GetChecked(void* self); };       // 0x45A050
struct Text_site  { static int MeasureWidth(int a1, int a2); };  // 0x433ED0
// BridgeClass 站点桥（唯一调用点 0x42E789 explicit-this 静态形; 载体 misc_ext.hpp
// 为实例形 virtual void GetCellData() 不兼容; 真值 0x42E820 _DWORD* __thiscall(BridgeClass*,int)）
struct BridgeClass_site { static unsigned int* GetCellData(void* self, int a2); };
// ListClass 站点桥（载体 ui_ext.hpp 属 ui 域; 调用形 Class::Method(this,a2) 三处
// 0x4888AB/0x4888FA/0x48894E; 真值 0x5576A0/0x557800/0x557730 __thiscall）
struct ListClass_site {
    static int AddItem(void* self, int a2);      // 0x5576A0
    static int Destru_vt43(void* self, int a2);  // 0x557800
    static char RemoveItem(void* self, int a2);  // 0x557730
};
// Object 站点壳（cache 名 Object; 树载体为 ObjectClass -- TU 内 C2027 未定义;
// 唯一调用 0x47EE02 静态形, 真值 IDA Object::FindClosestObjectCell）
struct Object {
    static int FindClosestObjectCell(void* self, void* a2, int a3, int a4);
};
} // namespace gamemd
#define Stream Stream_site      // G42.35: 语料名桥接（本 TU 唯一站点 0x73E7AB）
#define Text Text_site          // G42.35: 语料名桥接（本 TU 三站点 0x5D4099 区）
#define BridgeClass BridgeClass_site   // G42.35: 同上（唯一站点 0x42E789）
#define ListClass ListClass_site       // G42.35: 同上（三站点 ColorListClass 区）
// C3861 缺席原型（真值 ida_cache 首行签名）
unsigned int* FillRectangle(void* a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10);  // 0x4A6500 IDA Rectangle_Fill __fastcall 10 参
int DrawToSurfaceSHP(int a1, int a2, int a3, unsigned int a4, void* a5, void* a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, unsigned int a14, int a15, int a16);  // 0x4AED70 __fastcall 16 参
int DrawBuildingTilesSHP(void* a1, int a2, int a3);  // 0x4A5A50 IDA SHP_DrawBuildingTiles __fastcall(int*,int,char)
unsigned int TimerGetTicks(void);  // 0x5d41c1 调用 (IDA timeGetTicks 族)
// G42.35: 结构化全局宿主（e4_globals_decls/ida_globals 载体为裸标量, 语料按 .__pad_N/成员访问）
struct stru_87F5F0_flat {
    unsigned char __pad_0[0x58];
    unsigned char __pad_58[0xE12 - 0x58];    // 覆盖 __pad_58[416] = +0x1F8 (object TU 同款)
    unsigned char __pad_E12[0x13AC - 0xE12]; // 覆盖 __pad_E12[1422] = +0x13A0 u32 读
};
extern stru_87F5F0_flat stru_87F5F0_t;   // data: 0x87F5F0
#define stru_87F5F0 stru_87F5F0_t
struct stru_88732C_flat { unsigned char __pad_0[6]; unsigned char __pad_6[0x20]; };  // __pad_6[14] 读
extern stru_88732C_flat stru_88732C_t;   // data: 0x88732C
#define stru_88732C stru_88732C_t
struct stru_887598_flat { void* lineTrailer; unsigned char __pad_rest[0x20]; };  // lineTrailer 指针槽
extern stru_887598_flat stru_887598_t;   // data: 0x887598
#define stru_887598 stru_887598_t
struct stru_8A0390_flat { unsigned int health; unsigned char __pad_rest[0x40]; };
extern stru_8A0390_flat stru_8A0390_t;   // data: 0x8A0390
#define stru_8A0390 stru_8A0390_t
extern unsigned char stru_83665C_t[0x1000];  // data: 0x83665C (BuildingDebris 表; ida_globals 裸标量改数组宿主)
#define stru_83665C stru_83665C_t
// G42.35: 附加站点桥（String/Vector/WideString/CCFileClass -- cache 静态形调用, 树载体缺对应形）
struct String_site {
    static unsigned char Equals_Alt(void* self, int a2);   // 0x5CB598 区
    static void CopyUpper(void* dst, void* src);           // 0x627BC0 区
    static unsigned char Equals(const void* a, const void* b);  // 0x627C08 区
};
struct Vector_site {
    static void Clear(int a2);                                             // 0x5CB5DB 区
    static void MatrixMulVectorMath(int* a1, double a2, double a3, double a4);  // 0x755BD5 区
    static void Cleanup2(void* a2);                                        // 0x75DBC2 区
};
struct WideString_site { static void WordWrap(int a1, void* a2, int a3, int a4, int a5); };  // 0x5D4171/0x5D40F4
struct CCFileClass_site {
    void* CDFileClass;   // til 基子对象槽词汇 (v11.CDFileClass)
    static void Construct2(void* self, void* a2);   // 0x5CB5A6 区
    static unsigned char Open(void* self, int a2);  // 0x5CB5C5 区
    static void* ReadEntireFile(void* self);        // 0x5CB5C5 区
};
#define String String_site           // G42.35: 语料名桥接（AddLine 形参 String 同步改名无害）
#define Vector Vector_site           // G42.35: 同上
#define WideString WideString_site   // G42.35: 同上
#define CCFileClass CCFileClass_site // G42.35: 同上（C2512/C7624/C2660 族一并解决）
struct _VectorClass_UDrawRecord_FoggedObjectClass;  // G42.35: fn-ptr 形参 IDA 类型名 fwd（0x4D2B07）
// G42.35: MIXFile/ColorScheme 站点壳（全树仅 fwd; cache 静态形调用 0x627C32/0x627C5F）
struct MIXFile_site { static void* Load(void* self, void* a2); };       // 0x627590
struct ColorScheme_site { static void Destructor(void* self); };        // ColorScheme::Destructor
#define MIXFile MIXFile_site            // G42.35: 语料名桥接（唯一站点 0x627C32）
#define ColorScheme ColorScheme_site    // G42.35: 同上（唯一站点 0x627C5F）
char ClampCoordMap(void* aP0);  // 0x6D84B0 区 IDA ClampCoordMap(AbstractClass*) (addr6D_e4.cpp 同形)
// G42.35 波7 站点壳（TacticalClass/LayerClass/IsoCoord/House -- 载体属 system/misc 域或形不符）
struct TacticalClass_site {
    static unsigned int CalcViewportCells(void* self);                       // 0x6D605A (真值 __thiscall; 载体 void 0 参)
    static void CheckCellVisibility(void* a1, void* a2, void* a3, int a4);   // 0x6D7FCE 调用形 4 参
};
struct LayerClass_site {
    static unsigned char CoordinatesLegal(void* self, void* a2);             // 0x6D8021
    static unsigned int* Pathfinding_Find(void* a1, ...);                    // 0x73ED7F (16+ 参调用点变参兜底; object TU LayerClass_Pathfinding_Find 同形)
};
struct IsoCoord_site { static unsigned int* ToPixel(void* a1, int a2, int a3); };  // 0x6D81A5 (载体 2 参 void 不符)
struct House_site { static unsigned char IsCurrentPlayer(void* self); };     // 0x73E67D
#define TacticalClass TacticalClass_site  // G42.35: 语料名桥接（3 站点, 全静态形）
#define LayerClass LayerClass_site        // G42.35: 同上（2 站点）
#define IsoCoord IsoCoord_site            // G42.35: 同上（1 站点）
#define House House_site                  // G42.35: 同上（1 站点）
// G42.35 波7 原型
extern int ZCoordToScreenY(int aP0);            // 0x6D20E0 (e4_protos 同形)
extern int LoadPaletteSimple(void* aP0, void* a2, void* a3);  // 0x72AAB9 区 (e4_protos 真形 char*,int*,uint*; 调用点首参 off_844BXX 均为 ida_globals void*)
extern int CompareFunction(void* a1, void* a2); // 0x6E7AC0 区 bsearch 比较子
// g_BuildingLoadQueue_Array 宿主（e4_globals_decls 裸 int; 语料 .__pad_F70[N] 访问, N≤1464+4）
struct g_BuildingLoadQueue_Array_flat {
    unsigned char __pad_0[0xF70];
    unsigned char __pad_F70[0x1360 - 0xF70];
    unsigned int* TechnoTypeClass;  // G42.35 til 槽词汇 (0x6E7AE8 vtable0 赋值形)
    // G42.35: 裸整型视图（同槽双视图 -- 标量用法站点 0x6E7A8D 等; 声明即可 /Zs）
    operator unsigned int() const;
    operator unsigned int*() const;   // (unsigned int*)g_... 强转站点 0x6E7AA9
    g_BuildingLoadQueue_Array_flat& operator=(int v);
};
extern g_BuildingLoadQueue_Array_flat g_BuildingLoadQueue_Array_t;  // data: 0xB0E840
#define g_BuildingLoadQueue_Array g_BuildingLoadQueue_Array_t
// G42.35 波8 站点壳（BuildingLoadQueue/FootClass/ComPtr/DynamicVector）
// BuildingLoadQueue_site 置于 gamemd（其 FindBuilding def 在 namespace gamemd 块内, C2888 规避）
namespace gamemd { struct BuildingLoadQueue_site {
    void* __pad_0;   // til 槽词汇 (0x6E7AA9)
    unsigned int BuildingLoadQueue_field_0x04[4];  // til 槽词汇
    int FindBuilding();   // 0x6E7A80 (def 0 参 int; 载体 misc 版无此法)
}; } // namespace gamemd
struct FootClass_site {
    static int MoveToWeed(void* self, int a2);               // 0x4DDB90 (载体 foot.hpp 0 参 -- 其域 agent 在途)
    static int MoveToTiberium(void* self, int a2, unsigned int a3); // 0x4DCFE0
    static int ClearPathIndex(void* self);                   // 0x73EB55
};
struct ComPtr_site {
    int ComPtr_field_0x04;  // til 槽词汇 (Validate int* 对齐)
    int ComPtr_field_0x08;
    int ComPtr_field_0x0C;
    int ComPtr_field_0x10;
    int ComPtr_field_0x14;
    int ComPtr_field_0x18;
    int ComPtr_field_0x20;
    unsigned int* __pad_0;           // vfn 槽 (0x73E871)
    static void Release_Alt(void* self);  // 0x73E7DA
};
struct DynamicVector_site {
    unsigned int* __pad_0;                    // vfn 槽 (0x75E7xx)
    unsigned char __pad_1[0x1C - 4];
    unsigned char DynamicVector_field_0x1C[8];
    static int GetOrGrow(void* self, int a2);      // 0x73E6A2
    static void Add_Alt4(void* self, void* a2);    // 0x75D6CC
    static void Constructor_VoxelAnim(void* self, int a2, int a3);  // 0x75DB12
};
#define BuildingLoadQueue BuildingLoadQueue_site  // G42.35: 语料名桥接（def 1 + misc 版缺法）
#define FootClass FootClass_site                  // G42.35: 同上（5 站点全静态形）
#define ComPtr ComPtr_site                        // G42.35: 同上（v66 局部 + 2 站点）
#define DynamicVector DynamicVector_site          // G42.35: 同上（v86 局部 + 3 站点）
// stru_B054D0 宿主（ida_globals 裸标量; 语料 .m_1[3] 访问）
struct stru_B054D0_flat { unsigned char __pad_0[4]; void* m_1[16]; };
extern stru_B054D0_flat stru_B054D0_t;  // data: 0xB054D0
#define stru_B054D0 stru_B054D0_t
// G42.35 波9: Math 站点壳（gamemd::Math 仅 fwd; Sqrt/RoundToInt 静态形）
struct Math_site {
    static double Sqrt(double a1);     // 0x73EE2D 区
    static int RoundToInt(double a1);  // 0x73EE35 区
};
#define Math Math_site  // G42.35: 语料名桥接（8 站点全 Math:: 静态形）
// dword_8871E0 宿主（ida_globals 裸 uint; 语料 ->CollapseChance/MutateExplosion/ChronoHarvTooFarDistance/__pad_* 访问）
struct dword_8871E0_v {
    unsigned char __pad_0[0xC3C];
    unsigned char __pad_C3C[8];
    unsigned int CollapseChance;
    unsigned int MutateExplosion;
    unsigned int ChronoHarvTooFarDistance;
    unsigned char __pad_13BC[8];
};
extern dword_8871E0_v* dword_8871E0_t;  // data: 0x8871E0 (Rules 实例指针, object TU 注释同款)
#define dword_8871E0 dword_8871E0_t
// g_DSurface_Hidden_2 宿主（e4_globals_decls 裸 int; 语料 ->__pad_0 + (int) 双视图 + AudioStream* 裸传参）
struct g_DSurface_Hidden_2_v : gamemd::AudioStream {
    unsigned int* __pad_0;   // vfn 槽 (0x488A9B 等 23 站点)
};
extern g_DSurface_Hidden_2_v* g_DSurface_Hidden_2_t;  // data: 0x887314
#define g_DSurface_Hidden_2 g_DSurface_Hidden_2_t
// G42.35 波10: dword_A8B230 宿主（ida_globals 裸 uint; 语料 [14].NeedsSaveOrLink 访问）+ flt 数组宿主
struct dword_A8B230_e { unsigned int NeedsSaveOrLink; };
extern dword_A8B230_e dword_A8B230_t[32];  // data: 0xA8B230
#define dword_A8B230 dword_A8B230_t
extern float flt_B444A0_t[0x200];  // data: 0xB444A0 (ida_globals 裸 float 标量)
#define flt_B444A0 flt_B444A0_t
extern float flt_8467E4_t[0x40];   // data: 0x8467E4
#define flt_8467E4 flt_8467E4_t
// G42.35 波11: WinAPI 站点壳（全树载体 _tree_full_e4.hpp 未纳入本 TU; 同款 static Wrapper）
struct WinAPI_site { static int Wrapper(int a2); };  // 0x73E7F2 区 (consensus 350+ 1-arg 站点)
#define WinAPI WinAPI_site  // G42.35: 语料名桥接（2 站点）

// 0x40D250
namespace gamemd {
void DisplayClass::vt_entry_AC() {
    ; /*0x40d250*/
}
} // namespace gamemd

// 0x4AAD20
namespace gamemd {
void DisplayClass::vt_entry_B0() {
    ; /*0x4aad20*/
}
} // namespace gamemd

// 0x4D2B20
namespace gamemd {
void FoggedObject_DrawVector::ddtor()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004D2B20.json)
}
} // namespace gamemd

// 0x6528C0
namespace gamemd {
void ScreenEffect::StubReturnFalse() {
    ; /*0x6528c0*/
}
} // namespace gamemd

// 0x652910
namespace gamemd {
void ScreenEffect::StubReturnVoid() {
    ; /*0x652910*/
}
} // namespace gamemd

// 0x65FA60
namespace gamemd {
void ScreenEffect::StubReturn() {
    ; /*0x65fa60*/
}
} // namespace gamemd

// 0x6D1B00
namespace gamemd {
void ScreenEffect::Stub() {
    ; /*0x6d1b00*/
}
} // namespace gamemd

// 0x753AD0
namespace gamemd {
void ScreenEffect::Stub1() {
    ; /*0x753ad0*/
}
} // namespace gamemd

// 0x42E780
namespace gamemd {
int BuildingQueue::IsCellSuitable(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0042E780.json)
}
} // namespace gamemd

// 0x42EB20
namespace gamemd {
int BuildingQueue::AllocSlot(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0042EB20.json)
}
} // namespace gamemd

// 0x42EB50
namespace gamemd {
int BuildingQueue::FindFreeSlot(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0042EB50.json)
}
} // namespace gamemd

// 0x47EC90
namespace gamemd {
char BuildingPlacement::RenderBuildingPlacementPreview(unsigned int *a2, int *a3, char a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0047EC90.json)
}
} // namespace gamemd

// 0x480510
namespace gamemd {
int BuildingPlacement::ValidateType(int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00480510.json)
}
} // namespace gamemd

// 0x481130
namespace gamemd {
bool BuildingPlacement::IsPlacementFlagSet(unsigned int a2, char a3)
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00481130.json)
}
} // namespace gamemd

// 0x488850
namespace gamemd {
int ColorListClass::GetIndex(int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00488850.json)
}
} // namespace gamemd

// 0x4888B0
namespace gamemd {
int ColorListClass::AddColor(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004888B0.json)
}
} // namespace gamemd

// 0x488910
namespace gamemd {
void ColorListClass::GetCount(signed int a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00488910.json)
}
} // namespace gamemd

// 0x488960
namespace gamemd {
int ColorListClass::SetIndex(int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00488960.json)
}
} // namespace gamemd

// 0x488980
namespace gamemd {
unsigned int * ColorListClass::DrawColorRect(int a2, int a3, int a4, int a5, int a6)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00488980.json)
}
} // namespace gamemd

// 0x49A200
namespace gamemd {
unsigned int * BlitPlainXlatAlpha_ushort::QueryInterface(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049A200.json)
}
} // namespace gamemd

// 0x49A280
namespace gamemd {
unsigned int * BlitTransZRemapXlatAlpha_ushort::Blit(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049A280.json)
}
} // namespace gamemd

// 0x49A2C0
namespace gamemd {
unsigned int * BlitTransLucent75Alpha_ushort::Blit(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049A2C0.json)
}
} // namespace gamemd

// 0x49A300
namespace gamemd {
unsigned int * BlitTransLucent50Alpha_ushort::Blit(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049A300.json)
}
} // namespace gamemd

// 0x49A460
namespace gamemd {
unsigned int * BlitTransZRemapXlatAlphaZRead_ushort::Blit(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049A460.json)
}
} // namespace gamemd

// 0x49A4A0
namespace gamemd {
unsigned int * BlitTransLucent75AlphaZRead_ushort::Blit(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049A4A0.json)
}
} // namespace gamemd

// 0x49A4E0
namespace gamemd {
unsigned int * BlitTransLucent50AlphaZRead_ushort::Blit(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049A4E0.json)
}
} // namespace gamemd

// 0x49A520
namespace gamemd {
unsigned int * BlitTransLucent25AlphaZRead_ushort::Blit(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049A520.json)
}
} // namespace gamemd

// 0x49A560
namespace gamemd {
unsigned int * BlitTransLucent75AlphaZReadWarp_ushort::Blit(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049A560.json)
}
} // namespace gamemd

// 0x49A5A0
namespace gamemd {
unsigned int * BlitTransLucent50AlphaZReadWarp_ushort::Blit(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049A5A0.json)
}
} // namespace gamemd

// 0x49A5E0
namespace gamemd {
unsigned int * BlitTransLucent25AlphaZReadWarp_ushort::Blit(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049A5E0.json)
}
} // namespace gamemd

// 0x49A620
namespace gamemd {
unsigned int * BlitTransXlatAlphaZReadWrite_ushort::Blit(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049A620.json)
}
} // namespace gamemd

// 0x49A6A0
namespace gamemd {
unsigned int * BlitTransLucent75AlphaZReadWrite_ushort::Blit(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049A6A0.json)
}
} // namespace gamemd

// 0x49A6E0
namespace gamemd {
unsigned int * BlitTransLucent50AlphaZReadWrite_ushort::Blit(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049A6E0.json)
}
} // namespace gamemd

// 0x49AA00
namespace gamemd {
unsigned int * RLEBlitTransXlatAlpha_ushort::QueryInterface(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049AA00.json)
}
} // namespace gamemd

// 0x49AA80
namespace gamemd {
unsigned int * RLEBlitTransLucent75Alpha_ushort::QueryInterface(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049AA80.json)
}
} // namespace gamemd

// 0x49AAC0
namespace gamemd {
unsigned int * RLEBlitTransLucent50Alpha_ushort::QueryInterface(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049AAC0.json)
}
} // namespace gamemd

// 0x49AB00
namespace gamemd {
unsigned int * RLEBlitTransLucent25Alpha_ushort::QueryInterface(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049AB00.json)
}
} // namespace gamemd

// 0x49AB40
namespace gamemd {
unsigned int * RLEBlitTransXlatAlphaZRead_ushort::QueryInterface(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049AB40.json)
}
} // namespace gamemd

// 0x4BAD70
namespace gamemd {
int DSurface::GetPitch() const { /*G42.35: const 对齐载体 override 链（语义不变 getter）*/
    return *((unsigned int *)this->DSurface_field_0x20 + 4); /*0x4bad76*/
}
} // namespace gamemd

// 0x4C91C0
namespace gamemd {
unsigned short * FrameSnapshot::Init()
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004C91C0.json)
}
} // namespace gamemd

// 0x4C91E0
namespace gamemd {
unsigned short * FrameSnapshot::InitMax(int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004C91E0.json)
}
} // namespace gamemd

// 0x4D2980
namespace gamemd {
int FoggedObject_DrawVector::Seek(int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004D2980.json)
}
} // namespace gamemd

// 0x4D2A10
namespace gamemd {
char FoggedObject_DrawVector::Release(int a2, char *a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004D2A10.json)
}
} // namespace gamemd

// 0x4D2B50
namespace gamemd {
int FoggedObject_DrawVector::Read(unsigned int *a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004D2B50.json)
}
} // namespace gamemd

// 0x4D2BA0
namespace gamemd {
unsigned int FoggedObject_DrawVector::Write(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004D2BA0.json)
}
} // namespace gamemd

// 0x4E2B50
namespace gamemd {
int BuildingPlacementClass::Draw(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E2B50.json)
}
} // namespace gamemd

// 0x5CB590
namespace gamemd {
unsigned int * PaletteClass::Load()
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005CB590.json)
}
} // namespace gamemd

// 0x5D3FC0
namespace gamemd {
int ScrollingText::AddLine(wchar_t *String, int a3, wchar_t *Source, int a5)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D3FC0.json)
}
} // namespace gamemd

// 0x5FF2D0
namespace gamemd {
int BuildingLightQueue::RemoveEntry()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FF2D0.json)
}
} // namespace gamemd

// 0x627B20
namespace gamemd {
int ColorSchemeClass::LoadAllSchemes(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00627B20.json)
}
} // namespace gamemd

// 0x631D40
namespace gamemd {
int BuildingDebris::Init(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00631D40.json)
}
} // namespace gamemd

// 0x67C310
namespace gamemd {
unsigned int * VoxelAnimTypeVector::Constructor(int a2, int a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0067C310.json)
}
} // namespace gamemd

// 0x6D6000
namespace gamemd {
unsigned int TacticalMapClass::SetCameraPosition(int *a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006D6000.json)
}
} // namespace gamemd

// 0x6D7F20
namespace gamemd {
int TacticalMapClass::ProcessCell(int16_t *a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006D7F20.json)
}
} // namespace gamemd

// 0x6E7A80
namespace gamemd {
int BuildingLoadQueue::FindBuilding()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E7A80.json)
}
} // namespace gamemd

// 0x72B530
namespace gamemd {
int PaletteManager::Load(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0072B530.json)
}
} // namespace gamemd

// 0x73E5E0
namespace gamemd {
int VoxelTypeClass::ReadINI(double a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0073E5E0.json)
}
} // namespace gamemd

// 0x753650
namespace gamemd {
void VoxClass_Vector::getItem()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00753650.json)
}
} // namespace gamemd

// 0x753680
namespace gamemd {
unsigned int VoxClass_Vector::getItemAt(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00753680.json)
}
} // namespace gamemd

// 0x753830
namespace gamemd {
char VoxClass_Vector::removeItem(int a2, unsigned int *a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00753830.json)
}
} // namespace gamemd

// 0x7538E0
namespace gamemd {
int VoxClass_Vector::getItemWithIndex(unsigned int *a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007538E0.json)
}
} // namespace gamemd

// 0x753960
namespace gamemd {
unsigned int * VoxClass_Vector::findItem(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00753960.json)
}
} // namespace gamemd

// 0x755B30
namespace gamemd {
void VoxelModel_BuildDrawList_3p(float *a1, int a2, int a3)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00755B30.json)
}
} // namespace gamemd

// 0x7564B0
namespace gamemd {
int VoxelSection::GetInfo(int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7564B0)
}
} // namespace gamemd

// 0x758950
namespace gamemd {
unsigned int * VoxelPalette::Init(int a2, int a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00758950.json)
}
} // namespace gamemd

// 0x7589C0
namespace gamemd {
void VoxelPalette::Reset()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007589C0.json)
}
} // namespace gamemd

// 0x75D3A0
namespace gamemd {
void Voxel_Section::Draw()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0075D3A0.json)
}
} // namespace gamemd

// 0x75E6B0
namespace gamemd {
void Voxel_Section::Constructor()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0075E6B0.json)
}
} // namespace gamemd

// 0x7BA610
namespace gamemd {
void XSurface_DrawLineEx_raw(int a2, unsigned int *a3, unsigned int *a4, int16_t a5)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007BA610.json)
}
} // namespace gamemd

