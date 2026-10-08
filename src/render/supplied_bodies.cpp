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
#include "core/ida_vtables.h"  // gC_vftable3// gC supply: extern declarations from src/e4/e4_globals_decls.hpp
#include "e4/classes/MapClass_e4.hpp"  // w16g4 C3861 MapClass:: supply
#include "e4/classes/MissionClass_e4.hpp"  // w16g4 C3861 MissionClass:: supply
extern int RoundToInt(double value);  // W13-C raw 0x7C5F00 (e4_protos.h:492 同形)
// ---- g57c5 W5 vocab (declaration-only) ----
namespace gamemd {
extern unsigned int dword_8367C8;  // G57w19k3 data: 0x8367C8 BuildingDebris 记录表基 (namespace gamemd)
namespace Timer { int GetTicks(...); }  // g57c5 W5 vocab
} // namespace gamemd
// ---- g57c5 W5 end ----
extern int g_INI_Key_Special;

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
namespace gamemd {                       // g57a5 W2a: 修复漂浮成员（缺失 opener, C2447/C2143 家族）
struct BuildingLoadQueue_site {
    void* __pad_0;   // til 槽词汇 (0x6E7AA9)
    unsigned int BuildingLoadQueue_field_0x04[4];  // til 槽词汇
    int FindBuilding();   // 0x6E7A80 (def 0 参 int; 载体 misc 版无此法)
};
} // namespace gamemd
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
// g57w20m8b: WinAPI 站点壳已废 (无名函数 0x7DC720 统一默认名 sub_7DC720, 见 g57w20m6/m7)
int sub_7DC720(int a2);  // 0x7DC720 自由声明 (旧壳 WinAPI_site 删除后本 TU 调用点供给; g57w20m9)

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
    if ( *(unsigned int *)&FoggedObject_DrawVector_field_0x04 && IDA_BYTE1(this->FoggedObject_DrawVector_field_0x0C) ) /*0x4d2b2d*/
    {
      RA2_OPDEL(*(void **)&FoggedObject_DrawVector_field_0x04); /*0x4d2b33*/
      *(unsigned int *)&FoggedObject_DrawVector_field_0x04 = 0; /*0x4d2b3b*/
    }
    IDA_BYTE1(this->FoggedObject_DrawVector_field_0x0C) = 0; /*0x4d2b3e*/
    *(unsigned int *)&this->FoggedObject_DrawVector_field_0x08 = 0; /*0x4d2b41*/
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
    int result; // eax
    int v4; // ecx
    int v5; // esi

    result = (int)BridgeClass::GetCellData((BridgeClass *)this, a2); /*0x42e789*/
    if ( result ) /*0x42e790*/
    {
      (result) = ((result) & ~0xFF) | ((unsigned int)(1) & 0xFF) /*0x42e793*/
      return result; /*0x42e796*/
    }
    v4 = (unsigned int)(16 * a2 + this->BuildingQueue_field_0x08); /*0x42e79f*/
    result = *(unsigned int *)v4; /*0x42e7a2*/
    if ( *(int *)v4 < 0 ) /*0x42e7a7*/
      goto LABEL_9; /*0x42e7a7*/
    v5 = *((unsigned int *)dword_A83C6C + result); /*0x42e7af*/
    if ( !*(unsigned char *)(v5 + 5489) ) /*0x42e7b2*/
      goto LABEL_9; /*0x42e7b2*/
    result = (int)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)(v4 + 4)); /*0x42e7c5*/
    if ( *(unsigned int *)(result + 68) == *(unsigned int *)(*(unsigned int *)(v5 + 3668) + 660) ) /*0x42e7d9*/
    {
      (result) = ((result) & ~0xFF) | ((unsigned int)(1) & 0xFF) /*0x42e7dc*/
      return result; /*0x42e7df*/
    }
    result = (int)Cell::IsBridge((Cell *)result); /*0x42e7e4*/
    if ( result ) /*0x42e7eb*/
      (result) = ((result) & ~0xFF) | ((unsigned int)(1) & 0xFF) /*0x42e7ee*/
    else
  LABEL_9:
      (result) = ((result) & ~0xFF) | ((unsigned int)(0) & 0xFF) /*0x42e7f5*/
    return result; /*0x42e792*/
}
} // namespace gamemd

// 0x42EB20
namespace gamemd {
int BuildingQueue::AllocSlot(int a2)
{
    int FreeSlot; // eax

    FreeSlot = BuildingQueue::FindFreeSlot(this, a2); /*0x42eb28*/
    if ( FreeSlot == -1 ) /*0x42eb30*/
      return 0; /*0x42eb3e*/
    else
      return (int)(this->BuildingQueue_field_0x08 + 16 * FreeSlot); /*0x42eb39*/
}
} // namespace gamemd

// 0x42EB50
namespace gamemd {
int BuildingQueue::FindFreeSlot(int a2)
{
    int v3; // edi
    int v4; // ebx

    v3 = 0; /*0x42eb56*/
    if ( *((int *)this + 5) <= 0 ) /*0x42eb5d*/
      return -1; /*0x42ebc0*/
    v4 = 0; /*0x42eb63*/
    while ( a2 != -1 ) /*0x42eb68*/
    {
      if ( *(unsigned int *)(this->BuildingQueue_field_0x08 + v4) == a2 /*0x42ebac*/
        && !(unsigned __int8)BuildingQueue::IsCellSuitable(this, v3) )
      {
        return v3; /*0x42ebac*/
      }
  LABEL_11:
      ++v3; /*0x42ebae*/
      v4 += 16; /*0x42ebb2*/
      if ( v3 >= *((unsigned int *)this + 5) ) /*0x42ebb7*/
        return -1; /*0x42ebb7*/
    }
    if ( (unsigned __int8)BuildingQueue::IsCellSuitable(this, v3) ) /*0x42eb6d*/
      goto LABEL_11; /*0x42eb6d*/
    if ( !*(unsigned int *)&dword_A8B238 || !*(unsigned char *)(v4 + this->BuildingQueue_field_0x08 + 8) ) /*0x42eb84*/
      return v3; /*0x42eb89*/
    if ( !TechnoClass::ProcessTarget(*((TechnoClass **)this + 29), v4 + this->BuildingQueue_field_0x08) ) /*0x42eb8f*/
      goto LABEL_11; /*0x42eb96*/
    *(unsigned int *)(16 * v3 + this->BuildingQueue_field_0x08 + 4) = dword_89C310; /*0x42ebd1*/
    return v3; /*0x42ebb9*/
}
} // namespace gamemd

// 0x47EC90
namespace gamemd {
char BuildingPlacement::RenderBuildingPlacementPreview(unsigned int *a2, int *a3, char a4)
{
    int v5; // eax
    unsigned int *v6; // edi
    int v7; // ebp
    int v8; // eax
    int v9; // ebx
    int v10; // ecx
    bool *v11; // edi
    int ClosestObjectCell; // eax
    int v13; // ecx
    int v14; // ecx
    int v15; // ecx
    int v16; // edx
    unsigned int v18; // [esp-34h] [ebp-64h]
    int *v19; // [esp-2Ch] [ebp-5Ch]
    int v20; // [esp-28h] [ebp-58h]
    int v21; // [esp-20h] [ebp-50h]
    char v22; // [esp+13h] [ebp-1Dh]
    int v23; // [esp+18h] [ebp-18h]
    int v24; // [esp+1Ch] [ebp-14h] BYREF
    int v25; // [esp+20h] [ebp-10h]
    unsigned int v26[2]; // [esp+24h] [ebp-Ch] BYREF
    int GroundHeight; // [esp+2Ch] [ebp-4h]

    v5 = *(unsigned int *)(this + 300); /*0x47eca4*/
    v22 = 0; /*0x47ecb4*/
    if ( (v5 & 2) == 0 && (v5 & 4) == 0 ) /*0x47ecbc*/
      return 0; /*0x47efca*/
    v6 = *(unsigned int **)&stru_87F5F0.__pad_E12[1422]; /*0x47ecc2*/
    if ( (v5 & 2) == 0 ) /*0x47ecca*/
      v6 = *(unsigned int **)&stru_87F5F0.__pad_E12[1402]; /*0x47eccc*/
    v7 = -1; /*0x47ecd2*/
    if ( v6 && (*(int (__thiscall **)(unsigned int *))(*v6 + 44))(v6) == 7 ) /*0x47ece3*/
      v7 = v6[415]; /*0x47ece5*/
    v8 = 15 * *(char *)(this + 283); /*0x47ecf5*/
    v23 = -1 - v8; /*0x47ecfa*/
    v9 = -2 - v8; /*0x47ed03*/
    if ( *(unsigned char *)(this + 284) ) /*0x47ed05*/
      v9 -= 10; /*0x47ed0f*/
    if ( (*(unsigned char *)(this + 300) & 2) != 0 /*0x47ed2d*/
      && (*(int (__thiscall **)(unsigned int))(**(unsigned int **)&stru_87F5F0.__pad_E12[1422] + 44))(*(unsigned int *)&stru_87F5F0.__pad_E12[1422]) == 7 )
    {
      v10 = (*(__int16 *)(this + 38) << 8) + 128; /*0x47ed48*/
      v26[0] = (*(__int16 *)(this + 36) << 8) + 128; /*0x47ed4e*/
      v26[1] = v10; /*0x47ed56*/
      GroundHeight = 0; /*0x47ed62*/
      GroundHeight = Cell::GetGroundHeight(v26); /*0x47ed6f*/
      if ( (unsigned __int8)Cell::IsPassable(v26) ) /*0x47ed79*/
      {
        if ( !stru_87F5F0.__pad_E12[1382] /*0x47eda4*/
          || !*(unsigned int *)&stru_87F5F0.__pad_E12[1422]
          || (*(int (__thiscall **)(unsigned int))(**(unsigned int **)&stru_87F5F0.__pad_E12[1422] + 44))(*(unsigned int *)&stru_87F5F0.__pad_E12[1422]) != 7
          || !*(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_E12[1422] + 3672) )
        {
          v22 = 0; /*0x47edb0*/
          goto LABEL_43; /*0x47edb5*/
        }
        goto LABEL_42; /*0x47edaa*/
      }
      if ( !*(unsigned char *)(*(unsigned int *)&stru_87F5F0.__pad_E12[1422] + 3720) ) /*0x47edc8*/
      {
        if ( !stru_87F5F0.__pad_E12[1382] /*0x47eeb1*/
          || !*(unsigned int *)&stru_87F5F0.__pad_E12[1422]
          || (*(int (**)(void))(**(unsigned int **)&stru_87F5F0.__pad_E12[1422] + 44))() != 7
          || !(unsigned __int8)CellClass::IsPassable(
                                 (int *)this,
                                 v7,
                                 *(int *)&stru_87F5F0.__pad_E12[1422],
                                 (int)dword_A83D4C)
          || *(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_E12[1422] + 3672) && *(unsigned int *)(this + 236) == 1 )
        {
          goto LABEL_43; /*0x47eeb1*/
        }
        goto LABEL_42; /*0x47eeb1*/
      }
      v24 = 0; /*0x47edd3*/
      v25 = 0; /*0x47edd9*/
      if ( byte_A8E9A0 && (v11 = *(bool **)(this + 228)) != 0 ) /*0x47ede7*/
      {
        while ( (*(int (__thiscall **)(bool *))(*(unsigned int *)v11 + 44))(v11) != 2 ) /*0x47edf3*/
        {
          v11 = (bool *)*((unsigned int *)v11 + 12); /*0x47edf5*/
          if ( !v11 ) /*0x47edfa*/
            goto LABEL_25; /*0x47edfa*/
        }
      }
      else
      {
  LABEL_25:
        ClosestObjectCell = Object::FindClosestObjectCell((Object *)this, &v24, 0, 0); /*0x47ee02*/
        if ( ClosestObjectCell ) /*0x47ee14*/
        {
          v11 = (bool *)ClosestObjectCell; /*0x47ee16*/
        }
        else if ( byte_A8E9A0 && (v11 = *(bool **)(this + 228)) != 0 ) /*0x47ee2b*/
        {
          while ( (*(int (__thiscall **)(bool *))(*(unsigned int *)v11 + 44))(v11) != 36 ) /*0x47ee37*/
          {
            v11 = (bool *)*((unsigned int *)v11 + 12); /*0x47ee39*/
            if ( !v11 ) /*0x47ee3e*/
              goto LABEL_31; /*0x47ee3e*/
          }
        }
        else
        {
  LABEL_31:
          v11 = 0; /*0x47ee40*/
        }
        if ( !v11 ) /*0x47ee44*/
          goto LABEL_43; /*0x47ee44*/
      }
      if ( (*(int (__thiscall **)(bool *))(*(unsigned int *)v11 + 44))(v11) == 6 /*0x47ee61*/
        && (unsigned __int8)BuildingClass::CanAcceptType(v11, *(int *)&stru_87F5F0.__pad_E12[1422], (int)dword_A83D4C) )
      {
  LABEL_42:
        v22 = 1; /*0x47eeb3*/
      }
    }
  LABEL_43:
    if ( (*(unsigned char *)(this + 300) & 4) != 0 )
    {
      v13 = a2[1]; /*0x47eee4*/
      v24 = *a2 + 30; /*0x47eef7*/
      v25 = v23 + v13; /*0x47ef00*/
      DrawToSurfaceSHP(
        (int)g_DSurface_Hidden_2,
        *(int *)&stru_87F5F0.__pad_58[124],
        stru_8A0390.health,
        1u,
        &v24,
        a3,
        a4 != 0 ? 67072 : 132608,
        0,
        v9,
        0,
        1000,
        0,
        0,
        0,
        0,
        0);
    }
    else
    {
      if ( v22 )
      {
        v14 = a2[1]; /*0x47ef30*/
        v24 = *a2 + 30; /*0x47ef43*/
        v21 = v9; /*0x47ef4b*/
        v25 = v23 + v14; /*0x47ef4c*/
        v20 = a4 != 0 ? 67072 : 132608;
        v19 = a3; /*0x47ef5c*/
        v18 = 0; /*0x47ef5e*/
      }
      else
      {
        v15 = v23 + a2[1]; /*0x47ef70*/
        v21 = v9; /*0x47ef7e*/
        v20 = a4 != 0 ? 67072 : 132608;
        v16 = *(unsigned __int8 *)(this + 284); /*0x47ef86*/
        v24 = *a2 + 30; /*0x47ef8c*/
        v25 = v15; /*0x47ef94*/
        v19 = a3; /*0x47ef9c*/
        v18 = v16 + 2; /*0x47efa6*/
      }
      DrawToSurfaceSHP( /*0x47efb4*/
        (int)g_DSurface_Hidden_2,
        *(int *)&stru_87F5F0.__pad_58[124],
        stru_8A0390.health,
        v18,
        &v24,
        v19,
        v20,
        0,
        v21,
        0,
        1000,
        0,
        0,
        0,
        0,
        0);
    }
    return v22; /*0x47efbd*/
}
} // namespace gamemd

// 0x480510
namespace gamemd {
int BuildingPlacement::ValidateType(int a2, int a3)
{
    int result; // eax
    unsigned int *i; // esi
    unsigned int *j; // esi

    result = *((unsigned int *)this + 17); /*0x48051a*/
    if ( result == a2 && result != -1 ) /*0x480524*/
    {
      (result) = ((result) & ~0xFF) | ((unsigned int)(1) & 0xFF) /*0x480529*/
      return result; /*0x48052c*/
    }
    if ( a2 == -1 ) /*0x480532*/
    {
      if ( result == 2 || result == 26 || result == 243 ) /*0x480543*/
      {
  LABEL_8:
        (result) = ((result) & ~0xFF) | ((unsigned int)(1) & 0xFF) /*0x480549*/
        return result; /*0x48054f*/
      }
    }
    else
    {
      if ( a2 == 2 || !a2 ) /*0x48055d*/
      {
        for ( i = (unsigned int *)*((unsigned int *)this + 57); i; i = (unsigned int *)i[12] ) /*0x480567*/
        {
          result = (*(int (__thiscall **)(unsigned int *))(*i + 44))(i); /*0x48056d*/
          if ( result == 6 ) /*0x480573*/
          {
            result = i[328]; /*0x480578*/
            if ( (int)i[27] > 0 /*0x4805b1*/
              && (result == *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 2156) && (a3 == 2 || a3 == 6)
               || result == *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 2160) && (!a3 || a3 == 4)
               || result == *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 2172)) )
            {
              goto LABEL_8; /*0x4805b1*/
            }
          }
        }
      }
      if ( a2 == 26 ) /*0x4805bd*/
      {
        for ( j = (unsigned int *)*((unsigned int *)this + 57); j; j = (unsigned int *)j[12] ) /*0x4805c7*/
        {
          result = (*(int (__thiscall **)(unsigned int *))(*j + 44))(j); /*0x4805cd*/
          if ( result == 6 ) /*0x4805d3*/
          {
            result = j[328]; /*0x4805d8*/
            if ( (int)j[27] > 0 /*0x480615*/
              && (result == *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 2164) && (a3 == 2 || a3 == 6)
               || result == *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 2168) && (!a3 || a3 == 4)) )
            {
              goto LABEL_8; /*0x480615*/
            }
          }
        }
      }
    }
    (result) = ((result) & ~0xFF) | ((unsigned int)(0) & 0xFF) /*0x480622*/
    return result; /*0x480526*/
}
} // namespace gamemd

// 0x481130
namespace gamemd {
bool BuildingPlacement::IsPlacementFlagSet(unsigned int a2, char a3)
{
    unsigned __int8 v3; // al

    if ( a2 < 2 ) /*0x481137*/
      return 0; /*0x48117a*/
    if ( a3 ) /*0x481144*/
      v3 = *((unsigned char *)this + 296); /*0x481146*/
    else
      v3 = *((unsigned char *)this + 292); /*0x481160*/
    return ((unsigned __int8)(1 << a2) & v3) == 0; /*0x481153*/
}
} // namespace gamemd

// 0x488850
namespace gamemd {
int ColorListClass::GetIndex(int a2, int a3)
{
    int v4; // ecx
    int v5; // eax
    int v6; // eax
    int v7; // edx

    v4 = *((unsigned int *)this + 95); /*0x488854*/
    if ( *((unsigned int *)this + 97) < v4 /*0x488885*/
      || (*((unsigned char *)this + 385) || !v4)
      && (v5 = *((unsigned int *)this + 98), v5 > 0)
      && (*(unsigned __int8 (__thiscall **)(char *, int, unsigned int))(*((unsigned int *)this + 93) + 8))(
           (char *)this + 372,
           v4 + v5,
           0) )
    {
      v6 = *((unsigned int *)this + 97); /*0x48888c*/
      v7 = *((unsigned int *)this + 94); /*0x48888f*/
      *((unsigned int *)this + 97) = v6 + 1; /*0x488895*/
      *(unsigned int *)(v7 + 4 * v6) = a3; /*0x48889c*/
    }
    return ListClass::AddItem((ListClass *)this, a2); /*0x4888ab*/
}
} // namespace gamemd

// 0x4888B0
namespace gamemd {
int ColorListClass::AddColor(int a2)
{
    int result; // eax
    int v4; // ecx
    int v5; // ecx

    result = (*(int (__thiscall **)(char *, int *))(*((unsigned int *)this + 13) + 16))((char *)this + 52, &a2); /*0x4888be*/
    if ( result != -1 ) /*0x4888c4*/
    {
      v4 = *((unsigned int *)this + 97); /*0x4888c6*/
      if ( result < v4 ) /*0x4888ce*/
      {
        v5 = v4 - 1; /*0x4888d0*/
        for ( *((unsigned int *)this + 97) = v5; /*0x4888d9*/
              result < *((unsigned int *)this + 97);
              *(unsigned int *)(*((unsigned int *)this + 94) + 4 * result - 4) = *(unsigned int *)(*((unsigned int *)this + 94) + 4 * result) )
        {
          ++result; /*0x4888e1*/
        }
      }
      return ListClass::Destru_vt43((ListClass *)this, a2); /*0x4888fa*/
    }
    return result; /*0x4888ff*/
}
} // namespace gamemd

// 0x488910
namespace gamemd {
void ColorListClass::GetCount(signed int a2)
{
    signed int v2; // eax
    int v3; // edx
    signed int v4; // eax

    if ( a2 != -1 ) /*0x488918*/
    {
      v2 = *((unsigned int *)this + 97); /*0x48891a*/
      if ( a2 < v2 ) /*0x488922*/
      {
        v3 = v2 - 1; /*0x488924*/
        v4 = a2; /*0x488927*/
        for ( *((unsigned int *)this + 97) = v3; /*0x488931*/
              v4 < *((unsigned int *)this + 97);
              *(unsigned int *)(*((unsigned int *)this + 94) + 4 * v4 - 4) = *(unsigned int *)(*((unsigned int *)this + 94) + 4 * v4) )
        {
          ++v4; /*0x48893a*/
        }
      }
      ListClass::RemoveItem((ListClass *)this, a2); /*0x48894e*/
    }
}
} // namespace gamemd

// 0x488960
namespace gamemd {
int ColorListClass::SetIndex(int a2, int a3)
{
    *((unsigned int *)this + 99) = a2; /*0x488968*/
    *((unsigned int *)this + 100) = a3; /*0x48896e*/
    return a2; /*0x488974*/
}
} // namespace gamemd

// 0x488980
namespace gamemd {
unsigned int * ColorListClass::DrawColorRect(int a2, int a3, int a4, int a5, int a6)
{
    int v7; // edi
    int v8; // eax
    unsigned int *result; // eax
    int v10; // ecx
    int v11; // ecx
    int *v12; // ebx
    int v13; // eax
    int v14; // eax
    int *v15; // edi
    int v16; // eax
    int *v17; // edi
    int v18; // eax
    int v19; // ecx
    int v20; // edx
    int v21; // eax
    int v22; // ecx
    int v23; // ecx
    int v24; // edi
    int v25; // edx
    int v26; // eax
    int v27; // ecx
    int v28; // edx
    bool v29; // zf
    int v30; // edx
    int v31; // eax
    int v32; // edx
    int v33; // ecx
    int v34; // edi
    int v35; // edx
    int v36; // eax
    int v37; // edx
    int v38; // eax
    int v39; // edx
    int v40; // ecx
    int v41; // edi
    int v42; // edx
    int v43; // eax
    int v44; // ecx
    int v45; // eax
    int v46; // edx
    int v47; // [esp-14h] [ebp-124h]
    int v48; // [esp-14h] [ebp-124h]
    int v49; // [esp-14h] [ebp-124h]
    int v50; // [esp-14h] [ebp-124h]
    int v51; // [esp-10h] [ebp-120h]
    int v52; // [esp-10h] [ebp-120h]
    int v53; // [esp-10h] [ebp-120h]
    int v54; // [esp-Ch] [ebp-11Ch]
    int v55; // [esp-Ch] [ebp-11Ch]
    int v56; // [esp-Ch] [ebp-11Ch]
    int v57; // [esp-Ch] [ebp-11Ch]
    int v58; // [esp-8h] [ebp-118h]
    int v59; // [esp-8h] [ebp-118h]
    int v60; // [esp-8h] [ebp-118h]
    int v61; // [esp-4h] [ebp-114h]
    int v62; // [esp-4h] [ebp-114h]
    int v63; // [esp-4h] [ebp-114h]
    int v64; // [esp-4h] [ebp-114h]
    int v65; // [esp+10h] [ebp-100h] BYREF
    int v66; // [esp+14h] [ebp-FCh]
    int v67; // [esp+18h] [ebp-F8h] BYREF
    unsigned int v68[2]; // [esp+1Ch] [ebp-F4h] BYREF
    int v69; // [esp+24h] [ebp-ECh] BYREF
    unsigned int v70[3]; // [esp+28h] [ebp-E8h] BYREF
    int v71; // [esp+34h] [ebp-DCh] BYREF
    unsigned int v72[2]; // [esp+38h] [ebp-D8h] BYREF
    unsigned int v73[4]; // [esp+40h] [ebp-D0h] BYREF
    unsigned int v74[4]; // [esp+50h] [ebp-C0h] BYREF
    unsigned int v75[4]; // [esp+60h] [ebp-B0h] BYREF
    unsigned int v76[4]; // [esp+70h] [ebp-A0h] BYREF
    int v77; // [esp+80h] [ebp-90h] BYREF
    int v78; // [esp+88h] [ebp-88h] BYREF
    int v79; // [esp+90h] [ebp-80h] BYREF
    int v80; // [esp+98h] [ebp-78h] BYREF
    int v81; // [esp+A0h] [ebp-70h] BYREF
    int v82; // [esp+A8h] [ebp-68h] BYREF
    unsigned char v83[20]; // [esp+B0h] [ebp-60h] BYREF
    unsigned char v84[12]; // [esp+C4h] [ebp-4Ch] BYREF
    unsigned char v85[20]; // [esp+D0h] [ebp-40h] BYREF
    unsigned char v86[12]; // [esp+E4h] [ebp-2Ch] BYREF
    unsigned char v87[20]; // [esp+F0h] [ebp-20h] BYREF
    unsigned char v88[12]; // [esp+104h] [ebp-Ch] BYREF

    if ( a6 ) /*0x488992*/
    {
      v10 = *((unsigned int *)this + 100); /*0x488a1b*/
      if ( !v10 ) /*0x488a2a*/
        v10 = a2; /*0x488a2c*/
      result = (unsigned int *)*((unsigned int *)this + 99); /*0x488a2e*/
      switch ( (unsigned int)result ) /*0x488a3d*/
      {
        case 0u: /*0x488a3d*/
          v11 = *((unsigned int *)this + 12); /*0x488a52*/
          v65 = a3; /*0x488a55*/
          v66 = a4; /*0x488a60*/
          v62 = v11; /*0x488a67*/
          v55 = *((unsigned int *)this + 11); /*0x488a72*/
          v12 = (int *)(4 * a2 + *((unsigned int *)this + 14)); /*0x488a80*/
          v48 = *(unsigned int *)(*(unsigned int *)&stru_B054D0.m_1[3] + 4 * *(unsigned int *)(*((unsigned int *)this + 94) + 4 * a2)); /*0x488a89*/
          v13 = (*(int (__thiscall **)(AudioStream *, unsigned char *))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 120))( /*0x488a9b*/
                  g_DSurface_Hidden_2,
                  v83);
          result = FillRectangle(&v82, *v12, (int)g_DSurface_Hidden_2, v13, (int)&v65, v48, 0, v55, a5, v62); /*0x488aae*/
          break; /*0x488abd*/
        case 1u: /*0x488a3d*/
          v14 = *((unsigned int *)this + 11); /*0x488ac0*/
          if ( (v14 & 6) != 0 ) /*0x488acc*/
          {
            v72[0] = a3; /*0x488ace*/
            v72[1] = a4; /*0x488ad9*/
            (((v14) >> 8) & 0xFF) |= 0x20u; /*0x488ae0*/
            v15 = (int *)(*((unsigned int *)this + 14) + 4 * a2); /*0x488ae3*/
            v63 = *((unsigned int *)this + 12); /*0x488ae9*/
            v56 = v14; /*0x488af2*/
            v49 = *(unsigned int *)(*(unsigned int *)&stru_B054D0.m_1[3] + 4 * v10); /*0x488b01*/
            v16 = (*(int (__thiscall **)(AudioStream *, unsigned char *))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 120))( /*0x488b13*/
                    g_DSurface_Hidden_2,
                    v85);
            result = FillRectangle(&v81, *v15, (int)g_DSurface_Hidden_2, v16, (int)v72, v49, 0, v56, a5, v63); /*0x488b26*/
          }
          else
          {
            v70[0] = a3; /*0x488b38*/
            v70[1] = a4; /*0x488b43*/
            v17 = (int *)(*((unsigned int *)this + 14) + 4 * a2); /*0x488b4a*/
            v64 = *((unsigned int *)this + 12); /*0x488b50*/
            v57 = v14; /*0x488b59*/
            v50 = *(unsigned int *)(*(unsigned int *)&stru_B054D0.m_1[3] + 4 * v10); /*0x488b68*/
            v18 = (*(int (__thiscall **)(AudioStream *, unsigned char *))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 120))( /*0x488b7a*/
                    g_DSurface_Hidden_2,
                    v87);
            result = FillRectangle(&v78, *v17, (int)g_DSurface_Hidden_2, v18, (int)v70, v50, 0, v57, a5, v64); /*0x488b8d*/
          }
          break; /*0x488b35*/
        case 2u: /*0x488a3d*/
          v19 = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&stru_B054D0.m_1[3] + 4 * v10) + 788); /*0x488ba8*/
          v20 = *(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 372); /*0x488bb9*/
          if ( *(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x488bbf*/
            v21 = *(unsigned __int8 *)(v20 + v19); /*0x488bc3*/
          else
            v21 = *(unsigned __int16 *)(v20 + 2 * v19); /*0x488bca*/
          v22 = *((unsigned int *)this + 19); /*0x488be8*/
          v74[2] = a3 + a5 - 2; /*0x488beb*/
          v74[0] = a3; /*0x488bef*/
          v74[1] = a4; /*0x488bfd*/
          v74[3] = v22 + a4 - 2; /*0x488c01*/
          (*(void (__thiscall **)(AudioStream *, unsigned int *, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 88))( /*0x488c0c*/
            g_DSurface_Hidden_2,
            v74,
            v21);
          v23 = *((unsigned int *)this + 11); /*0x488c1a*/
          v24 = *((unsigned int *)this + 14); /*0x488c24*/
          v25 = *((unsigned int *)this + 94); /*0x488c28*/
          v71 = a3; /*0x488c2e*/
          v72[0] = a4; /*0x488c32*/
          v58 = v23; /*0x488c3b*/
          v51 = *(unsigned int *)(*(unsigned int *)&stru_B054D0.m_1[3] + 4 * *(unsigned int *)(v25 + 4 * a2)); /*0x488c51*/
          v26 = (*(int (__thiscall **)(AudioStream *))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 120))(g_DSurface_Hidden_2); /*0x488c5d*/
          result = FillRectangle( /*0x488c71*/
                     &v80,
                     *(unsigned int *)(4 * a2 + v24),
                     (int)g_DSurface_Hidden_2,
                     v26,
                     (int)v84,
                     (int)&v71,
                     v51,
                     0,
                     v58,
                     a6);
          break; /*0x488c80*/
        case 3u: /*0x488a3d*/
          v27 = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&stru_B054D0.m_1[3] + 4 * v10) + 788); /*0x488c91*/
          v28 = *(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 4); /*0x488c9c*/
          if ( (*((unsigned char *)this + 44) & 6) != 0 ) /*0x488c9f*/
          {
            v29 = v28 == 1; /*0x488ca5*/
            v30 = *(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 372); /*0x488ca8*/
            if ( v29 ) /*0x488cae*/
              v31 = *(unsigned __int8 *)(v30 + v27); /*0x488cb2*/
            else
              v31 = *(unsigned __int16 *)(v30 + 2 * v27); /*0x488cb9*/
            v32 = *((unsigned int *)this + 19); /*0x488cd2*/
            v75[2] = a5; /*0x488cd5*/
            v75[0] = a3; /*0x488ce0*/
            v75[1] = a4; /*0x488ce4*/
            v75[3] = v32; /*0x488ce8*/
            (*(void (__thiscall **)(AudioStream *, unsigned int *, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x488cf3*/
              g_DSurface_Hidden_2,
              v75,
              v31);
            v33 = *((unsigned int *)this + 11); /*0x488d01*/
            v34 = *((unsigned int *)this + 14); /*0x488d0b*/
            v35 = *((unsigned int *)this + 94); /*0x488d0f*/
            (((v33) >> 8) & 0xFF) |= 0x20u; /*0x488d15*/
            v69 = a3; /*0x488d18*/
            v70[0] = a4; /*0x488d1c*/
            v59 = v33; /*0x488d25*/
            v52 = *(unsigned int *)(*(unsigned int *)&stru_B054D0.m_1[3] + 4 * *(unsigned int *)(v35 + 4 * a2)); /*0x488d3b*/
            v36 = (*(int (__thiscall **)(AudioStream *))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 120))(g_DSurface_Hidden_2); /*0x488d47*/
            result = FillRectangle( /*0x488d5b*/
                       &v77,
                       *(unsigned int *)(4 * a2 + v34),
                       (int)g_DSurface_Hidden_2,
                       v36,
                       (int)v86,
                       (int)&v69,
                       v52,
                       0,
                       v59,
                       a6);
          }
          else
          {
            v29 = v28 == 1; /*0x488d6d*/
            v37 = *(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 372); /*0x488d70*/
            if ( v29 ) /*0x488d76*/
              v38 = *(unsigned __int8 *)(v37 + v27); /*0x488d7a*/
            else
              v38 = *(unsigned __int16 *)(v37 + 2 * v27); /*0x488d81*/
            v39 = *((unsigned int *)this + 19) - 1; /*0x488d9e*/
            v76[2] = a5 - 1; /*0x488d9f*/
            v76[0] = a3; /*0x488daa*/
            v76[1] = a4; /*0x488dae*/
            v76[3] = v39; /*0x488db2*/
            (*(void (__thiscall **)(AudioStream *, unsigned int *, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x488dc0*/
              g_DSurface_Hidden_2,
              v76,
              v38);
            v40 = *((unsigned int *)this + 11); /*0x488dce*/
            v41 = *((unsigned int *)this + 14); /*0x488dd8*/
            v42 = *((unsigned int *)this + 94); /*0x488ddc*/
            v68[0] = a3; /*0x488de2*/
            v68[1] = a4; /*0x488de6*/
            v60 = v40; /*0x488def*/
            v53 = *(unsigned int *)(*(unsigned int *)&stru_B054D0.m_1[3] + 4 * *(unsigned int *)(v42 + 4 * a2)); /*0x488e05*/
            v43 = (*(int (__thiscall **)(AudioStream *))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 120))(g_DSurface_Hidden_2); /*0x488e11*/
            result = FillRectangle( /*0x488e25*/
                       &v79,
                       *(unsigned int *)(4 * a2 + v41),
                       (int)g_DSurface_Hidden_2,
                       v43,
                       (int)v88,
                       (int)v68,
                       v53,
                       0,
                       v60,
                       a6);
          }
          break; /*0x488d6a*/
        case 4u: /*0x488a3d*/
          v44 = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&stru_B054D0.m_1[3] + 4 * *(unsigned int *)(*((unsigned int *)this + 94) + 4 * a2)) /*0x488e4e*/
                          + 788);
          if ( *(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x488e5a*/
            v45 = *(unsigned __int8 *)(*(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 372) + v44); /*0x488e67*/
          else
            v45 = *(unsigned __int16 *)(*(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 372) + 2 * v44); /*0x488e73*/
          v73[0] = a3; /*0x488e85*/
          v73[1] = a4; /*0x488e90*/
          v46 = *((unsigned int *)this + 19); /*0x488e94*/
          v73[2] = a5; /*0x488e97*/
          v73[3] = v46; /*0x488ea2*/
          result = (*(unsigned int *(__thiscall **)(AudioStream *, unsigned int *, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x488ead*/
                     g_DSurface_Hidden_2,
                     v73,
                     v45);
          break; /*0x488ead*/
        default:
          return result;
      }
    }
    else
    {
      v7 = *((unsigned int *)this + 14); /*0x4889ad*/
      v65 = a3; /*0x4889b0*/
      v66 = a4; /*0x4889b4*/
      v61 = *((unsigned int *)this + 12); /*0x4889c9*/
      v54 = *((unsigned int *)this + 11); /*0x4889d6*/
      v47 = *(unsigned int *)(*(unsigned int *)&stru_B054D0.m_1[3] + 4 * *(unsigned int *)(*((unsigned int *)this + 94) + 4 * a2)); /*0x4889ef*/
      v8 = (*(int (__thiscall **)(AudioStream *, unsigned int *))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 120))( /*0x4889f8*/
             g_DSurface_Hidden_2,
             v73);
      return FillRectangle(&v67, *(unsigned int *)(4 * a2 + v7), (int)g_DSurface_Hidden_2, v8, (int)&v65, v47, 0, v54, a5, v61); /*0x488a09*/
    }
    return result; /*0x488a0e*/
}
} // namespace gamemd

// 0x49A200
namespace gamemd {
unsigned int * BlitPlainXlatAlpha_ushort::QueryInterface(char a2)
{
    void *v3; // eax

    v3 = (void *)*((unsigned int *)this + 2); /*0x49a208*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void *)&BlitPlainXlatAlpha_unsigned_short_vftable; /*0x49a20b*/
    FractalNoise::Dtor(v3); /*0x49a212*/
    *((unsigned int *)this + 2) = 0; /*0x49a21b*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void *)&Blitter_vftable; /*0x49a224*/
    if ( (a2 & 1) != 0 ) /*0x49a22a*/
      RA2_OPDEL(this); /*0x49a22d*/
    return this->__pad_0; /*0x49a237*/
}
} // namespace gamemd

// 0x49A280
namespace gamemd {
unsigned int * BlitTransZRemapXlatAlpha_ushort::Blit(char a2)
{
    void *m_C; // eax

    m_C = (void *)this->m_C; /*0x49a288*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void *)&BlitTransZRemapXlatAlpha_unsigned_short_vftable; /*0x49a28b*/
    FractalNoise::Dtor(m_C); /*0x49a292*/
    this->m_C = 0; /*0x49a29b*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void *)&Blitter_vftable; /*0x49a2a4*/
    if ( (a2 & 1) != 0 ) /*0x49a2aa*/
      RA2_OPDEL(this); /*0x49a2ad*/
    return this->__pad_0; /*0x49a2b7*/
}
} // namespace gamemd

// 0x49A2C0
namespace gamemd {
unsigned int * BlitTransLucent75Alpha_ushort::Blit(char a2)
{
    void *m_8; // eax

    m_8 = (void *)this->m_8; /*0x49a2c8*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void *)&BlitTransLucent75Alpha_unsigned_short_vftable; /*0x49a2cb*/
    FractalNoise::Dtor(m_8); /*0x49a2d2*/
    this->m_8 = 0; /*0x49a2db*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void *)&Blitter_vftable; /*0x49a2e4*/
    if ( (a2 & 1) != 0 ) /*0x49a2ea*/
      RA2_OPDEL(this); /*0x49a2ed*/
    return this->__pad_0; /*0x49a2f7*/
}
} // namespace gamemd

// 0x49A300
namespace gamemd {
unsigned int * BlitTransLucent50Alpha_ushort::Blit(char a2)
{
    void *m_8; // eax

    m_8 = (void *)this->m_8; /*0x49a308*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void *)&BlitTransLucent50Alpha_unsigned_short_vftable; /*0x49a30b*/
    FractalNoise::Dtor(m_8); /*0x49a312*/
    this->m_8 = 0; /*0x49a31b*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void *)&Blitter_vftable; /*0x49a324*/
    if ( (a2 & 1) != 0 ) /*0x49a32a*/
      RA2_OPDEL(this); /*0x49a32d*/
    return this->__pad_0; /*0x49a337*/
}
} // namespace gamemd

// 0x49A460
namespace gamemd {
unsigned int * BlitTransZRemapXlatAlphaZRead_ushort::Blit(char a2)
{
    void *m_C; // eax

    m_C = (void *)this->m_C; /*0x49a468*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void *)&BlitTransZRemapXlatAlphaZRead_unsigned_short_vftable; /*0x49a46b*/
    FractalNoise::Dtor(m_C); /*0x49a472*/
    this->m_C = 0; /*0x49a47b*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void *)&Blitter_vftable; /*0x49a484*/
    if ( (a2 & 1) != 0 ) /*0x49a48a*/
      RA2_OPDEL(this); /*0x49a48d*/
    return this->__pad_0; /*0x49a497*/
}
} // namespace gamemd

// 0x49A4A0
namespace gamemd {
unsigned int * BlitTransLucent75AlphaZRead_ushort::Blit(char a2)
{
    void *m_8; // eax

    m_8 = (void *)this->m_8; /*0x49a4a8*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void *)&BlitTransLucent75AlphaZRead_unsigned_short_vftable; /*0x49a4ab*/
    FractalNoise::Dtor(m_8); /*0x49a4b2*/
    this->m_8 = 0; /*0x49a4bb*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void *)&Blitter_vftable; /*0x49a4c4*/
    if ( (a2 & 1) != 0 ) /*0x49a4ca*/
      RA2_OPDEL(this); /*0x49a4cd*/
    return this->__pad_0; /*0x49a4d7*/
}
} // namespace gamemd

// 0x49A4E0
namespace gamemd {
unsigned int * BlitTransLucent50AlphaZRead_ushort::Blit(char a2)
{
    void *v3; // eax

    v3 = (void *)*((unsigned int *)this + 2); /*0x49a4e8*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void *)&BlitTransLucent50AlphaZRead_unsigned_short_vftable; /*0x49a4eb*/
    FractalNoise::Dtor(v3); /*0x49a4f2*/
    *((unsigned int *)this + 2) = 0; /*0x49a4fb*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void *)&Blitter_vftable; /*0x49a504*/
    if ( (a2 & 1) != 0 ) /*0x49a50a*/
      RA2_OPDEL(this); /*0x49a50d*/
    return this->__pad_0; /*0x49a517*/
}
} // namespace gamemd

// 0x49A520
namespace gamemd {
unsigned int * BlitTransLucent25AlphaZRead_ushort::Blit(char a2)
{
    void *m_8; // eax

    m_8 = (void *)this->m_8; /*0x49a528*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void *)&BlitTransLucent25AlphaZRead_unsigned_short_vftable; /*0x49a52b*/
    FractalNoise::Dtor(m_8); /*0x49a532*/
    this->m_8 = 0; /*0x49a53b*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void *)&Blitter_vftable; /*0x49a544*/
    if ( (a2 & 1) != 0 ) /*0x49a54a*/
      RA2_OPDEL(this); /*0x49a54d*/
    return this->__pad_0; /*0x49a557*/
}
} // namespace gamemd

// 0x49A560
namespace gamemd {
unsigned int * BlitTransLucent75AlphaZReadWarp_ushort::Blit(char a2)
{
    void *m_8; // eax

    m_8 = (void *)this->m_8; /*0x49a568*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void *)&BlitTransLucent75AlphaZReadWarp_unsigned_short_vftable; /*0x49a56b*/
    FractalNoise::Dtor(m_8); /*0x49a572*/
    this->m_8 = 0; /*0x49a57b*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void *)&Blitter_vftable; /*0x49a584*/
    if ( (a2 & 1) != 0 ) /*0x49a58a*/
      RA2_OPDEL(this); /*0x49a58d*/
    return this->__pad_0; /*0x49a597*/
}
} // namespace gamemd

// 0x49A5A0
namespace gamemd {
unsigned int * BlitTransLucent50AlphaZReadWarp_ushort::Blit(char a2)
{
    void *m_8; // eax

    m_8 = (void *)this->m_8; /*0x49a5a8*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void *)&BlitTransLucent50AlphaZReadWarp_unsigned_short_vftable; /*0x49a5ab*/
    FractalNoise::Dtor(m_8); /*0x49a5b2*/
    this->m_8 = 0; /*0x49a5bb*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void *)&Blitter_vftable; /*0x49a5c4*/
    if ( (a2 & 1) != 0 ) /*0x49a5ca*/
      RA2_OPDEL(this); /*0x49a5cd*/
    return this->__pad_0; /*0x49a5d7*/
}
} // namespace gamemd

// 0x49A5E0
namespace gamemd {
unsigned int * BlitTransLucent25AlphaZReadWarp_ushort::Blit(char a2)
{
    void *m_8; // eax

    m_8 = (void *)this->m_8; /*0x49a5e8*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void *)&BlitTransLucent25AlphaZReadWarp_unsigned_short_vftable; /*0x49a5eb*/
    FractalNoise::Dtor(m_8); /*0x49a5f2*/
    this->m_8 = 0; /*0x49a5fb*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void *)&Blitter_vftable; /*0x49a604*/
    if ( (a2 & 1) != 0 ) /*0x49a60a*/
      RA2_OPDEL(this); /*0x49a60d*/
    return this->__pad_0; /*0x49a617*/
}
} // namespace gamemd

// 0x49A620
namespace gamemd {
unsigned int * BlitTransXlatAlphaZReadWrite_ushort::Blit(char a2)
{
    void *v3; // eax

    v3 = (void *)*((unsigned int *)this + 2); /*0x49a628*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void *)&BlitTransXlatAlphaZReadWrite_unsigned_short_vftable; /*0x49a62b*/
    FractalNoise::Dtor(v3); /*0x49a632*/
    *((unsigned int *)this + 2) = 0; /*0x49a63b*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void *)&Blitter_vftable; /*0x49a644*/
    if ( (a2 & 1) != 0 ) /*0x49a64a*/
      RA2_OPDEL(this); /*0x49a64d*/
    return this->__pad_0; /*0x49a657*/
}
} // namespace gamemd

// 0x49A6A0
namespace gamemd {
unsigned int * BlitTransLucent75AlphaZReadWrite_ushort::Blit(char a2)
{
    void *m_8; // eax

    m_8 = (void *)this->m_8; /*0x49a6a8*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void *)&BlitTransLucent75AlphaZReadWrite_unsigned_short_vftable; /*0x49a6ab*/
    FractalNoise::Dtor(m_8); /*0x49a6b2*/
    this->m_8 = 0; /*0x49a6bb*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void *)&Blitter_vftable; /*0x49a6c4*/
    if ( (a2 & 1) != 0 ) /*0x49a6ca*/
      RA2_OPDEL(this); /*0x49a6cd*/
    return this->__pad_0; /*0x49a6d7*/
}
} // namespace gamemd

// 0x49A6E0
namespace gamemd {
unsigned int * BlitTransLucent50AlphaZReadWrite_ushort::Blit(char a2)
{
    void *m_8; // eax

    m_8 = (void *)this->m_8; /*0x49a6e8*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void *)&BlitTransLucent50AlphaZReadWrite_unsigned_short_vftable; /*0x49a6eb*/
    FractalNoise::Dtor(m_8); /*0x49a6f2*/
    this->m_8 = 0; /*0x49a6fb*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void *)&Blitter_vftable; /*0x49a704*/
    if ( (a2 & 1) != 0 ) /*0x49a70a*/
      RA2_OPDEL(this); /*0x49a70d*/
    return this->__pad_0; /*0x49a717*/
}
} // namespace gamemd

// 0x49AA00
namespace gamemd {
unsigned int * RLEBlitTransXlatAlpha_ushort::QueryInterface(char a2)
{
    void *v3; // eax

    v3 = (void *)*((unsigned int *)this + 2); /*0x49aa08*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void *)&RLEBlitTransXlatAlpha_unsigned_short_vftable; /*0x49aa0b*/
    FractalNoise::Dtor(v3); /*0x49aa12*/
    *((unsigned int *)this + 2) = 0; /*0x49aa1b*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void *)&RLEBlitter_vftable; /*0x49aa24*/
    if ( (a2 & 1) != 0 ) /*0x49aa2a*/
      RA2_OPDEL(this); /*0x49aa2d*/
    return this->__pad_0; /*0x49aa37*/
}
} // namespace gamemd

// 0x49AA80
namespace gamemd {
unsigned int * RLEBlitTransLucent75Alpha_ushort::QueryInterface(char a2)
{
    void *v3; // eax

    v3 = (void *)*((unsigned int *)this + 2); /*0x49aa88*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void *)&RLEBlitTransLucent75Alpha_unsigned_short_vftable; /*0x49aa8b*/
    FractalNoise::Dtor(v3); /*0x49aa92*/
    *((unsigned int *)this + 2) = 0; /*0x49aa9b*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void *)&RLEBlitter_vftable; /*0x49aaa4*/
    if ( (a2 & 1) != 0 ) /*0x49aaaa*/
      RA2_OPDEL(this); /*0x49aaad*/
    return this->__pad_0; /*0x49aab7*/
}
} // namespace gamemd

// 0x49AAC0
namespace gamemd {
unsigned int * RLEBlitTransLucent50Alpha_ushort::QueryInterface(char a2)
{
    void *m_8; // eax

    m_8 = (void *)this->m_8; /*0x49aac8*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void *)&RLEBlitTransLucent50Alpha_unsigned_short_vftable; /*0x49aacb*/
    FractalNoise::Dtor(m_8); /*0x49aad2*/
    this->m_8 = 0; /*0x49aadb*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void *)&RLEBlitter_vftable; /*0x49aae4*/
    if ( (a2 & 1) != 0 ) /*0x49aaea*/
      RA2_OPDEL(this); /*0x49aaed*/
    return this->__pad_0; /*0x49aaf7*/
}
} // namespace gamemd

// 0x49AB00
namespace gamemd {
unsigned int * RLEBlitTransLucent25Alpha_ushort::QueryInterface(char a2)
{
    void *v3; // eax

    v3 = (void *)*((unsigned int *)this + 2); /*0x49ab08*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void *)&RLEBlitTransLucent25Alpha_unsigned_short_vftable; /*0x49ab0b*/
    FractalNoise::Dtor(v3); /*0x49ab12*/
    *((unsigned int *)this + 2) = 0; /*0x49ab1b*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void *)&RLEBlitter_vftable; /*0x49ab24*/
    if ( (a2 & 1) != 0 ) /*0x49ab2a*/
      RA2_OPDEL(this); /*0x49ab2d*/
    return this->__pad_0; /*0x49ab37*/
}
} // namespace gamemd

// 0x49AB40
namespace gamemd {
unsigned int * RLEBlitTransXlatAlphaZRead_ushort::QueryInterface(char a2)
{
    void *v3; // eax

    v3 = (void *)*((unsigned int *)this + 2); /*0x49ab48*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void *)&RLEBlitTransXlatAlphaZRead_unsigned_short_vftable; /*0x49ab4b*/
    FractalNoise::Dtor(v3); /*0x49ab52*/
    *((unsigned int *)this + 2) = 0; /*0x49ab5b*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void *)&RLEBlitter_vftable; /*0x49ab64*/
    if ( (a2 & 1) != 0 ) /*0x49ab6a*/
      RA2_OPDEL(this); /*0x49ab6d*/
    return this->__pad_0; /*0x49ab77*/
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
    int v2; // edx

    *(unsigned short *)this->__pad_0 = 0; /*0x4c91c4*/
    IDA_LOWORD(this->FrameSnapshot_field_0x04) = 0; /*0x4c91c7*/
    v2 = (unsigned int)(*(unsigned int * *)((char *)&stru_A8EB00 + 644)); /*0x4c91cb*/
    *((unsigned int *)this + 4) = 0; /*0x4c91d1*/
    *((unsigned int *)this + 2) = v2; /*0x4c91d4*/
    *((unsigned short *)this + 10) = 0; /*0x4c91d7*/
    return this->__pad_0; /*0x4c91db*/
}
} // namespace gamemd

// 0x4C91E0
namespace gamemd {
unsigned short * FrameSnapshot::InitMax(int a2)
{
    unsigned short *result; // eax
    int v3; // edx
    char v4; // cl
    __int16 v5; // dx

    result = this; /*0x4c91e0*/
    *(unsigned short *)this->__pad_0 = 0; /*0x4c91e4*/
    IDA_LOWORD(this->FrameSnapshot_field_0x04) = 0; /*0x4c91e7*/
    v3 = (unsigned int)(*(unsigned int * *)((char *)&stru_A8EB00 + 644)); /*0x4c91eb*/
    *((unsigned int *)this + 4) = 0; /*0x4c91f1*/
    *((unsigned int *)this + 2) = v3; /*0x4c91f4*/
    *((unsigned short *)this + 10) = 0; /*0x4c91f7*/
    v4 = a2; /*0x4c91fb*/
    if ( a2 >= 127 ) /*0x4c9202*/
      v4 = 127; /*0x4c9204*/
    IDA_LOBYTE(v5) = 0; /*0x4c9209*/
    IDA_HIBYTE(v5) = v4; /*0x4c920b*/
    result[10] = v5; /*0x4c920d*/
    return result; /*0x4c9211*/
}
} // namespace gamemd

// 0x4D2980
namespace gamemd {
int FoggedObject_DrawVector::Seek(int a2, int a3)
{
    int v3; // edx

    v3 = *(unsigned int *)&FoggedObject_DrawVector_field_0x04 + 16 * a3; /*0x4d298a*/
    *(unsigned int *)a2 = *(unsigned int *)v3; /*0x4d2992*/
    *(unsigned int *)(a2 + 4) = *(unsigned int *)(v3 + 4); /*0x4d2997*/
    *(unsigned char *)(a2 + 8) = *(unsigned char *)(v3 + 8); /*0x4d299d*/
    *(unsigned int *)(a2 + 12) = *(unsigned int *)(v3 + 12); /*0x4d29a3*/
    return a2; /*0x4d29a6*/
}
} // namespace gamemd

// 0x4D2A10
namespace gamemd {
char FoggedObject_DrawVector::Release(int a2, char *a3)
{
    int v3; // ebp
    char *v5; // edi
    int v6; // eax
    int v7; // ecx
    int v8; // edx
    char *v9; // eax
    int v10; // ecx
    int m_8; // ecx
    int v13; // eax
    unsigned int *v14; // edx
    char *v15; // ebx

    v3 = a2; /*0x4d2a12*/
    if ( a2 ) /*0x4d2a1e*/
    {
      v5 = a3; /*0x4d2a24*/
      IDA_LOBYTE(this->FoggedObject_DrawVector_field_0x0C) = 0; /*0x4d2a28*/
      if ( a3 ) /*0x4d2a2d*/
      {
        if ( a2 - 1 >= 0 ) /*0x4d2a6a*/
        {
          v9 = a3 + 8; /*0x4d2a6c*/
          v10 = a2; /*0x4d2a6f*/
          do /*0x4d2a7f*/
          {
            *((unsigned int *)v9 - 2) = 0; /*0x4d2a70*/
            *((unsigned int *)v9 - 1) = 0; /*0x4d2a73*/
            *v9 = 0; /*0x4d2a76*/
            *((unsigned int *)v9 + 1) = 0; /*0x4d2a78*/
            v9 += 16; /*0x4d2a7b*/
            --v10; /*0x4d2a7e*/
          }
          while ( v10 ); /*0x4d2a7f*/
        }
      }
      else
      {
        v6 = RA2_OPNEW(16 * a2); /*0x4d2a35*/
        if ( v6 ) /*0x4d2a3f*/
        {
          if ( a2 - 1 >= 0 ) /*0x4d2a46*/
          {
            v7 = v6 + 8; /*0x4d2a48*/
            v8 = a2; /*0x4d2a4b*/
            do /*0x4d2a5b*/
            {
              *(unsigned int *)(v7 - 8) = 0; /*0x4d2a4c*/
              *(unsigned int *)(v7 - 4) = 0; /*0x4d2a4f*/
              *(unsigned char *)v7 = 0; /*0x4d2a52*/
              *(unsigned int *)(v7 + 4) = 0; /*0x4d2a54*/
              v7 += 16; /*0x4d2a57*/
              --v8; /*0x4d2a5a*/
            }
            while ( v8 ); /*0x4d2a5b*/
          }
          v5 = (char *)v6; /*0x4d2a5d*/
        }
        else
        {
          v5 = 0; /*0x4d2a61*/
        }
      }
      IDA_LOBYTE(this->FoggedObject_DrawVector_field_0x0C) = 1; /*0x4d2a83*/
      if ( v5 ) /*0x4d2a87*/
      {
        if ( *(unsigned int *)&FoggedObject_DrawVector_field_0x04 ) /*0x4d2a92*/
        {
          m_8 = *(unsigned int *)&this->FoggedObject_DrawVector_field_0x08; /*0x4d2a97*/
          if ( a2 < m_8 ) /*0x4d2a9c*/
            m_8 = a2; /*0x4d2a9e*/
          if ( m_8 > 0 ) /*0x4d2aa2*/
          {
            v13 = 0; /*0x4d2aa4*/
            do /*0x4d2aca*/
            {
              v14 = (unsigned int *)(*(unsigned int *)&FoggedObject_DrawVector_field_0x04 + v13); /*0x4d2aab*/
              v15 = &v5[v13]; /*0x4d2aad*/
              v13 += 16; /*0x4d2ab0*/
              --m_8; /*0x4d2ab3*/
              *(unsigned int *)v15 = *v14; /*0x4d2ab6*/
              *((unsigned int *)v15 + 1) = v14[1]; /*0x4d2abb*/
              *((unsigned int *)v15 + 2) = v14[2]; /*0x4d2ac1*/
              *((unsigned int *)v15 + 3) = v14[3]; /*0x4d2ac7*/
            }
            while ( m_8 ); /*0x4d2aca*/
            v3 = a2; /*0x4d2acc*/
          }
          if ( IDA_BYTE1(this->FoggedObject_DrawVector_field_0x0C) ) /*0x4d2ad2*/
          {
            RA2_OPDEL(*(void **)&FoggedObject_DrawVector_field_0x04); /*0x4d2adb*/
            *(unsigned int *)&FoggedObject_DrawVector_field_0x04 = 0; /*0x4d2ae3*/
          }
        }
        *(unsigned int *)&FoggedObject_DrawVector_field_0x04 = v5; /*0x4d2aee*/
        *(unsigned int *)&this->FoggedObject_DrawVector_field_0x08 = v3; /*0x4d2af4*/
        IDA_BYTE1(this->FoggedObject_DrawVector_field_0x0C) = a3 == 0; /*0x4d2af7*/
        return 1; /*0x4d2afd*/
      }
      else
      {
        return 0; /*0x4d2a8c*/
      }
    }
    else
    {
      (*(void (__thiscall **)(_VectorClass_UDrawRecord_FoggedObjectClass *))(*(unsigned int *)this->__pad_0 + 12))( (_VectorClass_UDrawRecord_FoggedObjectClass *)(this) ); /*0x4d2b07*/
      return 1; /*0x4d2b0d*/
    }
}
} // namespace gamemd

// 0x4D2B50
namespace gamemd {
int FoggedObject_DrawVector::Read(unsigned int *a2)
{
    int result; // eax
    int m_8; // edx
    unsigned int *i; // ecx

    if ( !IDA_LOBYTE(this->FoggedObject_DrawVector_field_0x0C) ) /*0x4d2b50*/
      return 0; /*0x4d2b5e*/
    m_8 = *(unsigned int *)&this->FoggedObject_DrawVector_field_0x08; /*0x4d2b64*/
    result = 0; /*0x4d2b67*/
    if ( m_8 <= 0 ) /*0x4d2b6b*/
      return -1; /*0x4d2b8c*/
    for ( i = *(unsigned int **)&FoggedObject_DrawVector_field_0x04; *i != *a2 || i[1] != a2[1]; i += 4 ) /*0x4d2b71*/
    {
      if ( ++result >= m_8 ) /*0x4d2b8a*/
        return -1; /*0x4d2b8a*/
    }
    return result; /*0x4d2b5b*/
}
} // namespace gamemd

// 0x4D2BA0
namespace gamemd {
unsigned int FoggedObject_DrawVector::Write(int a2)
{
    if ( IDA_LOBYTE(this->FoggedObject_DrawVector_field_0x0C) ) /*0x4d2ba0*/
      return (unsigned int)(a2 - *(unsigned int *)&FoggedObject_DrawVector_field_0x04) >> 4; /*0x4d2bb5*/
    else
      return 0; /*0x4d2ba7*/
}
} // namespace gamemd

// 0x4E2B50
namespace gamemd {
int BuildingPlacementClass::Draw(int a2)
{
    char v3; // bl
    int v4; // ecx
    int m_10; // eax
    int v6; // ebx
    int v7; // ebp
    int v8; // edi
    int v9; // eax
    int v10; // ecx
    int v11; // edx
    int v12; // eax
    int v13; // edi
    int v14; // ecx
    int v15; // eax
    int v16; // edx
    int v17; // eax
    int v18; // ecx
    int v19; // edx
    int v20; // eax
    int v21; // ecx
    int v22; // eax
    int v23; // edx
    int v24; // eax
    int v25; // ebx
    int v26; // edi
    int v27; // eax
    int v28; // edx
    int v29; // eax
    int v30; // edx
    int v31; // eax
    int v32; // ecx
    int v33; // ebx
    int v34; // ecx
    int v35; // edx
    int v36; // eax
    int v37; // ecx
    int v38; // eax
    int v39; // eax
    int v40; // edx
    int v41; // eax
    int v42; // edi
    int v43; // edx
    int v44; // edx
    int v45; // eax
    int v46; // eax
    int v47; // edx
    int v48; // ecx
    int v49; // ebx
    int v50; // eax
    int v51; // edx
    int v52; // edi
    int m_C; // [esp+2Ch] [ebp-10h] BYREF
    int v55; // [esp+30h] [ebp-Ch]
    int v56; // [esp+34h] [ebp-8h]
    int v57; // [esp+38h] [ebp-4h]

    if ( !BuildingPlacement::HandleClick((GaugeClass *)this, a2) ) /*0x4e2b5e*/
      return 0; /*0x4e3097*/
    (*(void (__thiscall **)(void *, int, int, unsigned int, unsigned int))(*(unsigned int *)&((MouseClass *)stru_887598.lineTrailer)->q_80))( /*0x4e2b95*/
      stru_887598.lineTrailer,
      FoggedObject_DrawVector_field_0x0C,
      this->m_10,
      *(unsigned int *)this->__pad_14,
      *(unsigned int *)&this->__pad_14[4]);
    v3 = this->m_1E[0]; /*0x4e2b9b*/
    v4 = *(unsigned int *)this->__pad_14; /*0x4e2b9e*/
    m_10 = this->m_10; /*0x4e2ba1*/
    m_C = this->m_C; /*0x4e2ba4*/
    v57 = *(unsigned int *)&this->__pad_14[4]; /*0x4e2bab*/
    v56 = v4; /*0x4e2bb3*/
    v55 = m_10; /*0x4e2bc0*/
    DrawBuildingTilesSHP(&m_C, v3 != 0, 1); /*0x4e2bc4*/
    v6 = (*(int (__thiscall **)(TriColorGaugeClass *, unsigned int))(*(unsigned int *)this->__pad_0 + 164))( /*0x4e2bd9*/
           this,
           *(unsigned int *)&this->__pad_31[11]);
    v7 = (*(int (__thiscall **)(TriColorGaugeClass *, unsigned int))(*(unsigned int *)this->__pad_0 + 164))( /*0x4e2be9*/
           this,
           *(unsigned int *)&this->__pad_31[15]);
    v8 = (*(int (__thiscall **)(TriColorGaugeClass *, unsigned int))(*(unsigned int *)this->__pad_0 + 164))( /*0x4e2bfa*/
           this,
           *(unsigned int *)&this->__pad_31[3]);
    v9 = *(unsigned int *)&this->__pad_31[3]; /*0x4e2bfc*/
    if ( v9 > *(unsigned int *)&this->__pad_31[11] ) /*0x4e2c01*/
    {
      if ( v9 > *(unsigned int *)&this->__pad_31[15] ) /*0x4e2cc9*/
      {
        if ( v9 <= *(unsigned int *)&this->m_2D[3] ) /*0x4e2e4b*/
        {
          v34 = *(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 4); /*0x4e2e5b*/
          if ( this->m_2D[1] ) /*0x4e2e51*/
          {
            if ( v34 == 1 ) /*0x4e2e67*/
              v35 = *(unsigned __int8 *)(*(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 372) + 6); /*0x4e2e71*/
            else
              v35 = *(unsigned __int16 *)(*(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 372) + 12); /*0x4e2e7e*/
            v36 = this->m_C; /*0x4e2e82*/
            m_C = v36 + 1; /*0x4e2e8e*/
            v55 = this->m_10 + 1; /*0x4e2e96*/
            v37 = v6 - v36; /*0x4e2e9c*/
            v38 = *(unsigned int *)&this->__pad_14[4] - 2; /*0x4e2ea2*/
            v56 = v37 + 1; /*0x4e2ea5*/
            v57 = v38; /*0x4e2eaf*/
            (*(void (__thiscall **)(AudioStream *, int *, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x4e2eb5*/
              g_DSurface_Hidden_2,
              &m_C,
              v35);
            if ( *(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x4e2ec1*/
              v39 = *(unsigned __int8 *)(*(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 372) + 5); /*0x4e2ece*/
            else
              v39 = *(unsigned __int16 *)(*(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 372) + 10); /*0x4e2eda*/
            v55 = this->m_10 + 1; /*0x4e2ee5*/
            v40 = v7 - this->m_C + 1; /*0x4e2ef4*/
            v57 = *(unsigned int *)&this->__pad_14[4] - 2; /*0x4e2ef5*/
            m_C = v6; /*0x4e2eff*/
            v56 = v40; /*0x4e2f03*/
            (*(void (__thiscall **)(AudioStream *, int *, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x4e2f0e*/
              g_DSurface_Hidden_2,
              &m_C,
              v39);
            if ( *(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x4e2f1a*/
              v41 = *(unsigned __int8 *)(*(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 372) + 3); /*0x4e2f24*/
            else
              v41 = *(unsigned __int16 *)(*(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 372) + 6); /*0x4e2f31*/
            v42 = v8 - this->m_C; /*0x4e2f3c*/
            v43 = *(unsigned int *)&this->__pad_14[4]; /*0x4e2f3e*/
            v55 = this->m_10 + 1; /*0x4e2f41*/
            m_C = v7; /*0x4e2f4f*/
            v56 = v42 + 1; /*0x4e2f53*/
            v57 = v43 - 2; /*0x4e2f57*/
            (*(void (__stdcall **)(int *, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 20))(&m_C, v41); /*0x4e2f62*/
          }
          else
          {
            if ( v34 == 1 ) /*0x4e2f6a*/
              v44 = *(unsigned __int8 *)(*(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 372) + 6); /*0x4e2f74*/
            else
              v44 = *(unsigned __int16 *)(*(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 372) + 12); /*0x4e2f81*/
            v45 = this->m_10; /*0x4e2f88*/
            m_C = this->m_C + 1; /*0x4e2f8d*/
            v55 = v45 + 1; /*0x4e2f94*/
            v56 = *(unsigned int *)this->__pad_14 - 2; /*0x4e2fa2*/
            v57 = v6 - v45 + 1; /*0x4e2fac*/
            (*(void (__thiscall **)(AudioStream *, int *, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x4e2fb8*/
              g_DSurface_Hidden_2,
              &m_C,
              v44);
            if ( *(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x4e2fc4*/
              v46 = *(unsigned __int8 *)(*(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 372) + 5); /*0x4e2fd1*/
            else
              v46 = *(unsigned __int16 *)(*(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 372) + 10); /*0x4e2fdd*/
            v47 = *(unsigned int *)this->__pad_14; /*0x4e2fe4*/
            v48 = this->m_C + 1; /*0x4e2fe7*/
            v55 = v6; /*0x4e2fe8*/
            v49 = this->m_10; /*0x4e2fec*/
            m_C = v48; /*0x4e2fef*/
            v56 = v47 - 2; /*0x4e2ffc*/
            v57 = v7 - v49 + 1; /*0x4e3000*/
            (*(void (__thiscall **)(AudioStream *, int *, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x4e3011*/
              g_DSurface_Hidden_2,
              &m_C,
              v46);
            if ( *(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x4e301d*/
              v50 = *(unsigned __int8 *)(*(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 372) + 3); /*0x4e3027*/
            else
              v50 = *(unsigned __int16 *)(*(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 372) + 6); /*0x4e3034*/
            v51 = *(unsigned int *)this->__pad_14 - 2; /*0x4e303f*/
            m_C = this->m_C + 1; /*0x4e3042*/
            v52 = v8 - this->m_10 + 1; /*0x4e3051*/
            v55 = v7; /*0x4e3052*/
            v56 = v51; /*0x4e3056*/
            v57 = v52; /*0x4e305a*/
            (*(void (__stdcall **)(int *, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 20))(&m_C, v50); /*0x4e3066*/
          }
        }
      }
      else
      {
        v18 = *(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 4); /*0x4e2cde*/
        if ( this->m_2D[1] ) /*0x4e2ccf*/
        {
          if ( v18 == 1 ) /*0x4e2ce9*/
            v19 = *(unsigned __int8 *)(*(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 372) + 6); /*0x4e2cf3*/
          else
            v19 = *(unsigned __int16 *)(*(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 372) + 12); /*0x4e2d00*/
          v20 = this->m_C; /*0x4e2d04*/
          m_C = v20 + 1; /*0x4e2d10*/
          v55 = this->m_10 + 1; /*0x4e2d18*/
          v21 = v6 - v20; /*0x4e2d1e*/
          v22 = *(unsigned int *)&this->__pad_14[4] - 2; /*0x4e2d24*/
          v56 = v21 + 1; /*0x4e2d27*/
          v57 = v22; /*0x4e2d31*/
          (*(void (__thiscall **)(AudioStream *, int *, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x4e2d37*/
            g_DSurface_Hidden_2,
            &m_C,
            v19);
          if ( *(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x4e2d42*/
            v23 = *(unsigned __int8 *)(*(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 372) + 5); /*0x4e2d4c*/
          else
            v23 = *(unsigned __int16 *)(*(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 372) + 10); /*0x4e2d59*/
          v24 = this->m_C; /*0x4e2d5d*/
          v25 = v6 - v24; /*0x4e2d63*/
          v26 = v8 - v24; /*0x4e2d65*/
          v27 = *(unsigned int *)&this->__pad_14[4]; /*0x4e2d67*/
          v55 = this->m_10 + 1; /*0x4e2d6d*/
          m_C = v25 + 1; /*0x4e2d7b*/
          v56 = v26 - 1; /*0x4e2d7f*/
          v57 = v27 - 2; /*0x4e2d83*/
          (*(void (__thiscall **)(AudioStream *, int *, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x4e2d8e*/
            g_DSurface_Hidden_2,
            &m_C,
            v23);
        }
        else
        {
          if ( v18 == 1 ) /*0x4e2d98*/
            v28 = *(unsigned __int8 *)(*(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 372) + 6); /*0x4e2da2*/
          else
            v28 = *(unsigned __int16 *)(*(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 372) + 12); /*0x4e2daf*/
          m_C = this->m_C + 1; /*0x4e2dbc*/
          v29 = this->m_10; /*0x4e2dc0*/
          v55 = v29 + 1; /*0x4e2dc7*/
          v56 = *(unsigned int *)this->__pad_14 - 2; /*0x4e2dd1*/
          v57 = v6 - v29 + 1; /*0x4e2dda*/
          (*(void (__thiscall **)(AudioStream *, int *, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x4e2de6*/
            g_DSurface_Hidden_2,
            &m_C,
            v28);
          if ( *(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x4e2df1*/
            v30 = *(unsigned __int8 *)(*(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 372) + 5); /*0x4e2dfb*/
          else
            v30 = *(unsigned __int16 *)(*(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 372) + 10); /*0x4e2e08*/
          v31 = this->m_C; /*0x4e2e0c*/
          m_C = v31 + 1; /*0x4e2e18*/
          v32 = this->m_10; /*0x4e2e1c*/
          v55 = v6 - v32 + 1; /*0x4e2e2a*/
          v33 = *(unsigned int *)this->__pad_14; /*0x4e2e2e*/
          v57 = v8 - v32 + 1; /*0x4e2e36*/
          v56 = v31 + v33 - 2; /*0x4e2e3a*/
          (*(void (__thiscall **)(AudioStream *, int *, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x4e2e40*/
            g_DSurface_Hidden_2,
            &m_C,
            v30);
        }
      }
    }
    else
    {
      v10 = *(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 4); /*0x4e2c11*/
      if ( this->m_2D[1] ) /*0x4e2c07*/
      {
        if ( v10 == 1 ) /*0x4e2c19*/
          v11 = *(unsigned __int8 *)(*(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 372) + 6); /*0x4e2c23*/
        else
          v11 = *(unsigned __int16 *)(*(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 372) + 12); /*0x4e2c30*/
        v12 = this->m_C; /*0x4e2c34*/
        v13 = v8 - v12; /*0x4e2c38*/
        v14 = v12 + 1; /*0x4e2c3e*/
        v15 = *(unsigned int *)&this->__pad_14[4]; /*0x4e2c41*/
        m_C = v14; /*0x4e2c44*/
        v55 = this->m_10 + 1; /*0x4e2c4d*/
        v56 = v13 + 1; /*0x4e2c5a*/
        v57 = v15 - 2; /*0x4e2c5e*/
        (*(void (__thiscall **)(AudioStream *, int *, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x4e2c65*/
          g_DSurface_Hidden_2,
          &m_C,
          v11);
      }
      else
      {
        if ( v10 == 1 ) /*0x4e2c70*/
          v16 = *(unsigned __int8 *)(*(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 372) + 6); /*0x4e2c7a*/
        else
          v16 = *(unsigned __int16 *)(*(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 372) + 12); /*0x4e2c87*/
        m_C = this->m_C + 1; /*0x4e2c94*/
        v17 = this->m_10; /*0x4e2c98*/
        v55 = v17 + 1; /*0x4e2ca1*/
        v56 = *(unsigned int *)this->__pad_14 - 2; /*0x4e2cac*/
        v57 = v8 - v17 + 1; /*0x4e2cb6*/
        (*(void (__thiscall **)(AudioStream *, int *, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x4e2cbc*/
          g_DSurface_Hidden_2,
          &m_C,
          v16);
      }
    }
    if ( this->m_2D[0] ) /*0x4e3069*/
      (*(void (__thiscall **)(TriColorGaugeClass *))(*(unsigned int *)this->__pad_0 + 156))((gamemd::TriColorGaugeClass *)(this)); /*0x4e3074*/
    (*(void (__thiscall **)(void *))(*(unsigned int *)&((MouseClass *)stru_887598.lineTrailer)->q090))(stru_887598.lineTrailer); /*0x4e3082*/
    return 1; /*0x4e308a*/
}
} // namespace gamemd

// 0x5CB590
namespace gamemd {
unsigned int * PaletteClass::Load()
{
    char *v2; // eax
    int v4; // esi
    unsigned char *v5; // edx
    char v6; // bl
    char *v7; // ecx
    ConvertClass *v8; // eax
    unsigned int *v9; // esi
    __int16 v10; // [esp+4h] [ebp-70h]
    CCFileClass v11; // [esp+8h] [ebp-6Ch] BYREF
    int v12[3]; // [esp+60h] [ebp-14h] BYREF
    int v13; // [esp+6Ch] [ebp-8h]

    if ( (unsigned __int8)String::Equals_Alt((String *)this, 0) ) /*0x5cb598*/
      return 0; /*0x5cb59f*/
    CCFileClass::Construct2(&v11, (char **)this); /*0x5cb5a6*/
    if ( !(unsigned __int8)CCFileClass::Open(&v11, 0) || (v2 = (char *)CCFileClass::ReadEntireFile(&v11)) == 0 ) /*0x5cb5c5*/
    {
      *(unsigned int *)v11.CDFileClass = (unsigned int)(void *)&CCFileClass_vftable; /*0x5cb5cb*/
      v13 = 0; /*0x5cb5d3*/
      Vector::Clear((int)v12); /*0x5cb5db*/
      *(unsigned int *)v11.CDFileClass = (unsigned int)&off_7E1668; /*0x5cb5e4*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v11); /*0x5cb5ec*/
      return 0; /*0x5cb5f7*/
    }
    v4 = 0; /*0x5cb5fa*/
    v5 = v2 + 2; /*0x5cb5fc*/
    do /*0x5cb646*/
    {
      IDA_LOBYTE(v10) = 4 * *(v5 - 2); /*0x5cb607*/
      IDA_HIBYTE(v10) = 4 * *(v5 - 1); /*0x5cb611*/
      v6 = 4 * *v5; /*0x5cb617*/
      v7 = (char *)&stru_886080 + 3 * (v4 % 256); /*0x5cb62f*/
      ++v4; /*0x5cb636*/
      v5 += 3; /*0x5cb637*/
      *(unsigned short *)v7 = v10; /*0x5cb63a*/
      v7[2] = v6; /*0x5cb643*/
    }
    while ( v4 < 256 ); /*0x5cb646*/
    RA2_OPDEL(v2); /*0x5cb649*/
    v8 = (ConvertClass *)RA2_OPNEW(0x188u); /*0x5cb653*/
    if ( v8 ) /*0x5cb65f*/
      v9 = ConvertClass::Construct(v8, (int)&stru_886080, (int)&stru_886080, (int)g_DSurface_Primary, 1, 0); /*0x5cb67d*/
    else
      v9 = 0; /*0x5cb681*/
    *(unsigned int *)v11.CDFileClass = (unsigned int)(void *)&CCFileClass_vftable; /*0x5cb687*/
    v13 = 0; /*0x5cb68f*/
    Vector::Clear((int)v12); /*0x5cb697*/
    *(unsigned int *)v11.CDFileClass = (unsigned int)&off_7E1668; /*0x5cb6a0*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v11); /*0x5cb6a8*/
    return v9; /*0x5cb5f3*/
}
} // namespace gamemd

// 0x5D3FC0
namespace gamemd {
int ScrollingText::AddLine(wchar_t *String, int a3, wchar_t *Source, int a5)
{
    wchar_t *v5; // edi
    ScrollingText v7; // ebp
    wchar_t *v9; // esi
    int v10; // edi
    wchar_t *v11; // edi
    int v12; // ebp
    int v13; // eax
    int v14; // edi
    int v15; // edi
    int v16; // eax
    int v17; // esi
    ScrollingText v18; // [esp+10h] [ebp-4h]
    wchar_t *Stringa; // [esp+18h] [ebp+4h]
    int v20; // [esp+1Ch] [ebp+8h]

    v5 = String; /*0x5d3fc5*/
    if ( !String ) /*0x5d3fcd*/
      return 0; /*0x5d3fcd*/
    if ( !Source ) /*0x5d3fd5*/
      return 0; /*0x5d3fd5*/
    if ( !*((unsigned char *)this + 24) ) /*0x5d3fd7*/
      return 0; /*0x5d3fd7*/
    v7 = *this; /*0x5d3fde*/
    if ( !*(unsigned int *)this ) /*0x5d3fde*/
      return 0; /*0x5d4026*/
    while ( *(unsigned int *)(*(unsigned int *)&v7 + 40) != a3 ) /*0x5d3ff1*/
    {
  LABEL_8:
      v7 = (ScrollingText)(*(int (__thiscall **)(ScrollingText))(**(unsigned int **)&v7 + 4))(v7); /*0x5d400d*/
      if ( !*(unsigned int *)&v7 ) /*0x5d4019*/
        return 0; /*0x5d4019*/
    }
    if ( memcmp(*(const void **)(*(unsigned int *)&v7 + 48), v5, 2 * wcslen(v5)) ) /*0x5d4005*/
    {
      v5 = String; /*0x5d4009*/
      goto LABEL_8; /*0x5d4009*/
    }
    v18 = v7; /*0x5d402d*/
    v9 = (wchar_t *)(*(unsigned int *)(*(unsigned int *)&v7 + 48) + 2 * wcslen(String) + 2); /*0x5d403a*/
    Stringa = (wchar_t *)*((unsigned int *)this + 4); /*0x5d4042*/
    v10 = wcslen(v9); /*0x5d404f*/
    if ( wcslen(Source) + v10 >= (unsigned int)Stringa ) /*0x5d4062*/
    {
      v14 = wcslen(v9) - *((unsigned int *)this + 4); /*0x5d4150*/
      v15 = wcslen(Source) + v14; /*0x5d4158*/
      v16 = wcslen(v9); /*0x5d415a*/
      if ( v16 < v15 ) /*0x5d4164*/
        v16 = v15; /*0x5d4166*/
      WideString::WordWrap(0, v9, v15, v16, 0); /*0x5d4171*/
      wcscat(v9, Source); /*0x5d417c*/
    }
    else
    {
      v11 = (wchar_t *)RA2_OPNEW(2 * (unsigned int)Stringa + 2); /*0x5d4078*/
      TextRenderer::GetInstance(); /*0x5d407a*/
      v20 = Text::MeasureWidth((int)v9, 0); /*0x5d4099*/
      v12 = Text::MeasureWidth(*(unsigned int *)(*(unsigned int *)&v7 + 48), 0) - v20; /*0x5d40aa*/
      wcscpy(v11, v9); /*0x5d40ac*/
      wcscat(v11, Source); /*0x5d40b7*/
      while ( v12 + Text::MeasureWidth((int)v11, 0) >= *((unsigned int *)this + 177) ) /*0x5d40d5*/
      {
        v13 = wcslen(v9); /*0x5d40d8*/
        if ( v13 < 10 ) /*0x5d40e3*/
          v13 = 10; /*0x5d40e5*/
        WideString::WordWrap(0, v9, 10, v13, 0); /*0x5d40f4*/
        wcscpy(v11, v9); /*0x5d40fb*/
        wcscat(v11, Source); /*0x5d4106*/
      }
      RA2_OPDEL(v11); /*0x5d4127*/
      wcscat(v9, Source); /*0x5d4132*/
      v7 = v18; /*0x5d4137*/
    }
    if ( a5 == -1 ) /*0x5d418b*/
    {
      *(unsigned int *)(*(unsigned int *)&v7 + 36) = 0; /*0x5d418e*/
      return 1; /*0x5d4197*/
    }
    else
    {
      v17 = *(unsigned int *)&stru_88732C.__pad_6[14]; /*0x5d41a6*/
      if ( *(unsigned int *)&stru_88732C.__pad_6[6] != -1 ) /*0x5d41af*/
        v17 += Timer::GetTicks() - *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x5d41c1*/
      *(unsigned int *)(*(unsigned int *)&v7 + 36) = a5 + v17; /*0x5d41c6*/
      return 1; /*0x5d41cb*/
    }
}
} // namespace gamemd

// 0x5FF2D0
namespace gamemd {
int BuildingLightQueue::RemoveEntry()
{
    int result; // eax
    BuildingLightQueue *v2; // [esp+0h] [ebp-4h] BYREF

    v2 = this; /*0x5ff2db*/
    result = (*(int (__thiscall **)(int *, BuildingLightQueue **))(dword_AC1678 + 16))((int *)(&dword_AC1678), &v2); /*0x5ff2e5*/
    if ( result != -1 && result < dword_AC1688 && result < --dword_AC1688 ) /*0x5ff300*/
    {
      do /*0x5ff318*/
      {
        ++result; /*0x5ff308*/
        *((unsigned int *)dword_AC167C + result - 1) = *((unsigned int *)dword_AC167C + result); /*0x5ff30c*/
      }
      while ( result < dword_AC1688 ); /*0x5ff318*/
    }
    return result; /*0x5ff31b*/
}
} // namespace gamemd

// 0x627B20
namespace gamemd {
int ColorSchemeClass::LoadAllSchemes(int a2)
{
    unsigned int *v2; // ebp
    int result; // eax
    int v4; // esi
    char *v5; // edi
    int v6; // ecx
    Flag *v7; // ebx
    int v9; // edi
    int v10; // eax
    int v11; // edx
    int v12; // eax
    int v13; // edi
    int v14; // ebp
    const char *v15; // ebx
    int *v16; // ebx
    int v17; // edi
    int v18; // ebp
    int v19; // edx
    void *v20; // ebx
    int (__thiscall ***v21)(unsigned int, int); // ecx
    int v22; // ecx
    unsigned int *v23; // ebp
    int v24; // edi
    int v25; // eax
    Flag *v26; // ebx
    char *i; // [esp+10h] [ebp-118h]
    char *v28; // [esp+10h] [ebp-118h]
    char *v29; // [esp+10h] [ebp-118h]
    int v30; // [esp+10h] [ebp-118h]
    int v31; // [esp+14h] [ebp-114h]
    int j; // [esp+14h] [ebp-114h]
    int v34; // [esp+1Ch] [ebp-10Ch]
    char String[256]; // [esp+28h] [ebp-100h] BYREF

    v2 = (unsigned int *)*((unsigned int *)this + 3); /*0x627b2f*/
    *this = (ColorSchemeClass)a2; /*0x627b32*/
    result = v2[2]; /*0x627b35*/
    v4 = 0; /*0x627b38*/
    v34 = 0; /*0x627b41*/
    if ( result > 0 ) /*0x627b49*/
    {
      for ( i = 0; ; i += 24 ) /*0x627b4f*/
      {
        v5 = &i[*v2]; /*0x627b5a*/
        if ( *((int *)v5 + 4) > 0 ) /*0x627b61*/
          break; /*0x627b61*/
  LABEL_6:
        result = v34 + 1; /*0x627b81*/
        v4 = 0; /*0x627b90*/
        if ( ++v34 >= v2[2] ) /*0x627b92*/
          return result; /*0x627b9c*/
      }
      while ( 1 ) /*0x627b6b*/
      {
        v6 = 65 * v4++; /*0x627b6b*/
        v7 = (Flag *)(*((unsigned int *)v5 + 1) + 4 * v6); /*0x627b6e*/
        result = Flag::IsZero(v7); /*0x627b73*/
        if ( !(unsigned char)result ) /*0x627b7a*/
          break; /*0x627b7a*/
        if ( v4 >= *((unsigned int *)v5 + 4) ) /*0x627b7f*/
          goto LABEL_6; /*0x627b7f*/
      }
      v28 = (char *)v7; /*0x627bad*/
      if ( v7 ) /*0x627bb1*/
      {
        do /*0x627d0c*/
        {
          String::CopyUpper(String, v28); /*0x627bc0*/
          v9 = *((unsigned int *)this + 3); /*0x627bc9*/
          v10 = (*(int (__thiscall **)(char *))(v9 + 4))(String); /*0x627bd0*/
          v11 = 3 * (v10 % *(unsigned int *)(v9 + 8)); /*0x627bd9*/
          v12 = *(unsigned int *)v9 + 24 * (v10 % *(unsigned int *)(v9 + 8)); /*0x627be0*/
          v13 = *(unsigned int *)(*(unsigned int *)v9 + 8 * v11 + 16) - 1; /*0x627be3*/
          v31 = v12; /*0x627be4*/
          if ( v13 < 0 ) /*0x627be8*/
          {
  LABEL_14:
            v16 = 0; /*0x627c20*/
          }
          else
          {
            v14 = 260 * v13; /*0x627bf1*/
            while ( 1 ) /*0x627bff*/
            {
              v15 = (const char *)(*(unsigned int *)(v12 + 4) + v14); /*0x627bff*/
              if ( (unsigned __int8)String::Equals(v15, String) ) /*0x627c08*/
                break; /*0x627c08*/
              --v13; /*0x627c15*/
              v14 -= 260; /*0x627c16*/
              if ( v13 < 0 ) /*0x627c1e*/
                goto LABEL_14; /*0x627c1e*/
              v12 = v31; /*0x627bf6*/
            }
            v16 = (int *)(v15 + 256); /*0x627cfb*/
          }
          v17 = *v16; /*0x627c2a*/
          v29 = (char *)MIXFile::Load((MIXFile *)this, v28); /*0x627c32*/
          result = *(unsigned int *)(v17 + 256); /*0x627c36*/
          if ( result ) /*0x627c3e*/
          {
            result = *(unsigned int *)(result + 16); /*0x627c40*/
            v18 = 0; /*0x627c43*/
            for ( j = result; v18 < result; ++v18 ) /*0x627c4b*/
            {
              v19 = *(unsigned int *)(*(unsigned int *)(v17 + 256) + 4); /*0x627c53*/
              v20 = *(void **)(v19 + 4 * v18); /*0x627c56*/
              if ( v20 ) /*0x627c5b*/
              {
                ColorScheme::Destructor(*(ColorScheme **)(v19 + 4 * v18)); /*0x627c5f*/
                RA2_OPDEL(v20); /*0x627c65*/
                result = j; /*0x627c6a*/
              }
            }
            v21 = *(int (__thiscall ****)(unsigned int, int))(v17 + 256); /*0x627c76*/
            if ( v21 ) /*0x627c7e*/
              result = (**v21)((unsigned int)(v21), 1); /*0x627c84*/
            *(unsigned int *)(v17 + 256) = 0; /*0x627c86*/
          }
          *(unsigned int *)(v17 + 256) = v29; /*0x627c98*/
          v22 = v34; /*0x627c9e*/
          v23 = (unsigned int *)*((unsigned int *)this + 3); /*0x627ca2*/
          if ( v34 >= v23[2] ) /*0x627ca8*/
            break; /*0x627ca8*/
          result = 24 * v34; /*0x627cad*/
          v30 = 24 * v34; /*0x627cb0*/
          while ( 1 ) /*0x627cb7*/
          {
            v24 = result + *v23; /*0x627cb7*/
            if ( v4 < *(unsigned int *)(v24 + 16) ) /*0x627cbc*/
              break; /*0x627cbc*/
  LABEL_29:
            ++v22; /*0x627ce4*/
            result += 24; /*0x627ce8*/
            v4 = 0; /*0x627ceb*/
            v34 = v22; /*0x627cef*/
            v30 = result; /*0x627cf3*/
            if ( v22 >= v23[2] ) /*0x627cf7*/
              return result; /*0x627cf7*/
          }
          while ( 1 ) /*0x627cc6*/
          {
            v25 = 65 * v4++; /*0x627cc6*/
            v26 = (Flag *)(*(unsigned int *)(v24 + 4) + 4 * v25); /*0x627cc9*/
            result = Flag::IsZero(v26); /*0x627cce*/
            if ( !(unsigned char)result ) /*0x627cd5*/
              break; /*0x627cd5*/
            if ( v4 >= *(unsigned int *)(v24 + 16) ) /*0x627cda*/
            {
              result = v30; /*0x627cdc*/
              v22 = v34; /*0x627ce0*/
              goto LABEL_29; /*0x627ce0*/
            }
          }
          v28 = (char *)v26; /*0x627d08*/
        }
        while ( v26 ); /*0x627d0c*/
      }
    }
    return result; /*0x627b9e*/
}
} // namespace gamemd

// 0x631D40
namespace gamemd {
int BuildingDebris::Init(int a2)
{
    unsigned int v3; // eax
    int v4; // ecx
    int v5; // ebx
    unsigned int v6; // eax
    int v7; // edx
    unsigned int v8; // eax
    int v9; // eax
    int v10; // eax
    int v11; // eax
    unsigned int v12; // ebx
    int result; // eax

    v3 = rand(); /*0x631d53*/
    *((unsigned int *)this + 12) = (v3 & 0x3F) - 31; /*0x631d69*/
    *((unsigned int *)this + 13) = ((v3 >> 5) & 0x1F) - 15; /*0x631d6c*/
    *(this + 6) = (*(BuildingDebris *)&((char *)&dword_8367C8)[40 * a2 + 0]); /*0x631d71*/
    *(this + 7) = (*(BuildingDebris *)&((char *)&dword_8367C8)[40 * a2 + 4]); /*0x631d77*/
    *(this + 8) = (*(BuildingDebris *)&((char *)&dword_8367C8)[40 * a2 + 8]); /*0x631d7d*/
    v4 = (*(unsigned int *)&((char *)&dword_8367C8)[40 * a2 + 24]); /*0x631d80*/
    if ( v4 ) /*0x631d85*/
    {
      v5 = (1 << v4) - 1; /*0x631d8e*/
      v6 = rand(); /*0x631d8f*/
      v7 = *((unsigned int *)this + 7); /*0x631d9d*/
      *((unsigned int *)this + 6) -= v6 & v5; /*0x631da0*/
      v8 = v6 >> (*(unsigned int *)&((char *)&dword_8367C8)[40 * a2 + 24]); /*0x631da6*/
      *((unsigned int *)this + 7) = v7 - (v8 & v5); /*0x631dae*/
      *((unsigned int *)this + 8) -= v5 & (v8 >> (*(unsigned int *)&((char *)&dword_8367C8)[40 * a2 + 24])); /*0x631dbd*/
    }
    v9 = (*(unsigned int *)&((char *)&dword_8367C8)[40 * a2 + 12]); /*0x631dc0*/
    *((unsigned int *)this + 9) = v9; /*0x631dc3*/
    *((unsigned int *)this + 1) = v9; /*0x631dc6*/
    v10 = (*(unsigned int *)&((char *)&dword_8367C8)[40 * a2 + 16]); /*0x631dc9*/
    *((unsigned int *)this + 10) = v10; /*0x631dcc*/
    *((unsigned int *)this + 2) = v10; /*0x631dcf*/
    v11 = (*(unsigned int *)&((char *)&dword_8367C8)[40 * a2 + 20]); /*0x631dd2*/
    *((unsigned int *)this + 4) = 0; /*0x631dd5*/
    *((unsigned int *)this + 11) = v11; /*0x631ddc*/
    *((unsigned int *)this + 3) = v11; /*0x631ddf*/
    v12 = (*(unsigned int *)&((char *)&dword_8367C8)[40 * a2 + 32]) - (*(unsigned int *)&((char *)&dword_8367C8)[40 * a2 + 36]) + 1; /*0x631dea*/
    *((unsigned int *)this + 5) = (*(unsigned int *)&((char *)&dword_8367C8)[40 * a2 + 36]) + rand() % v12; /*0x631df7*/
    result = (*(unsigned int *)&((char *)&dword_8367C8)[40 * a2 + 28]) & rand(); /*0x631e03*/
    *((unsigned int *)this + 14) = result; /*0x631e05*/
    return result; /*0x631e02*/
}
} // namespace gamemd

// 0x67C310
namespace gamemd {
unsigned int * VoxelAnimTypeVector::Constructor(int a2, int a3)
{
    *((unsigned int *)this + 1) = 0; /*0x67c31b*/
    *((unsigned int *)this + 2) = a2; /*0x67c31e*/
    *((unsigned char *)this + 12) = 1; /*0x67c321*/
    *((unsigned char *)this + 13) = 0; /*0x67c325*/
    *(unsigned int *)this = (unsigned int)&VectorClass_VoxelAnimTypeClass_const___vftable; /*0x67c328*/
    if ( a2 ) /*0x67c32e*/
    {
      if ( a3 ) /*0x67c336*/
      {
        *((unsigned int *)this + 1) = a3; /*0x67c338*/
        return (unsigned int *)this; /*0x67c33e*/
      }
      *((unsigned int *)this + 1) = RA2_OPNEW(4 * a2); /*0x67c34d*/
      *((unsigned char *)this + 13) = 1; /*0x67c350*/
    }
    return (unsigned int *)(this) /*0x67c33d*/;
}
} // namespace gamemd

// 0x6D6000
namespace gamemd {
unsigned int TacticalMapClass::SetCameraPosition(int *a2)
{
    int v3; // eax
    int v4; // eax
    int v5; // ecx
    unsigned int result; // eax
    int v7; // [esp+8h] [ebp-8h] BYREF
    int v8; // [esp+Ch] [ebp-4h]

    v3 = *a2; /*0x6d6012*/
    v8 = a2[1]; /*0x6d6014*/
    v7 = v3; /*0x6d601b*/
    if ( !ClampCoordMap(&v7) || *(unsigned int *)((char *)&stru_A8EB00 + 619) ) /*0x6d602f*/
    {
      v4 = *a2; /*0x6d603b*/
      v5 = a2[1]; /*0x6d603d*/
    }
    else
    {
      v4 = v7; /*0x6d6031*/
      v5 = v8; /*0x6d6035*/
    }
    this->TacticalClass_field_D64 = v4; /*0x6d6040*/
    this->TacticalClass_field_D74 = v4; /*0x6d6046*/
    this->TacticalClass_field_D68 = v5; /*0x6d604c*/
    this->TacticalClass_field_D78 = v5; /*0x6d6052*/
    result = TacticalClass::CalcViewportCells(this); /*0x6d605a*/
    this->redrawing = 1; /*0x6d605f*/
    return result; /*0x6d6066*/
}
} // namespace gamemd

// 0x6D7F20
namespace gamemd {
int TacticalMapClass::ProcessCell(int16_t *a2, int a3)
{
    int *v4; // ebp
    int v5; // kr0C_4
    int v6; // kr00_4
    int *v7; // eax
    int v8; // ecx
    int v9; // eax
    int v10; // ecx
    int v11; // ebp
    int v12; // esi
    int v13; // edi
    char *v14; // ecx
    char v15; // al
    int v16; // edx
    int v17; // ecx
    int v18; // eax
    int v19; // ebp
    int v20; // eax
    unsigned int *v21; // eax
    int v22; // eax
    unsigned int *v23; // eax
    int v24; // edi
    int v25; // esi
    int v26; // eax
    int v27; // esi
    int *v28; // eax
    int result; // eax
    bool v30; // cc
    int v31; // [esp+10h] [ebp-44h]
    char *v32; // [esp+14h] [ebp-40h]
    int v33; // [esp+1Ch] [ebp-38h]
    int v34; // [esp+20h] [ebp-34h]
    __int16 v35[2]; // [esp+24h] [ebp-30h] BYREF
    __int16 v36[2]; // [esp+28h] [ebp-2Ch] BYREF
    __int16 v37[2]; // [esp+2Ch] [ebp-28h] BYREF
    unsigned int v38[2]; // [esp+30h] [ebp-24h] BYREF
    int v39[2]; // [esp+38h] [ebp-1Ch] BYREF
    IsoCoord v40; // [esp+40h] [ebp-14h] BYREF
    int v41; // [esp+48h] [ebp-Ch] BYREF
    int v42; // [esp+4Ch] [ebp-8h]
    int v43; // [esp+50h] [ebp-4h]
    char v44; // [esp+58h] [ebp+4h]

    v4 = (int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x6d7f38*/
    v5 = (*a2 << 8) + 128; /*0x6d7f5b*/
    v6 = (a2[1] << 8) + 128; /*0x6d7f68*/
    v43 = 0; /*0x6d7f6a*/
    v42 = (v6 / 256) << 8; /*0x6d7f74*/
    v41 = (v5 / 256) << 8; /*0x6d7f8a*/
    v7 = Coord::To_ScreenRaw(v39,(unsigned int *)(&v41)); /*0x6d7f8e*/
    v8 = v7[1]; /*0x6d7f9d*/
    v9 = *v7 - *((unsigned int *)this + 44); /*0x6d7fa6*/
    v10 = v8 - *((unsigned int *)this + 45); /*0x6d7fae*/
    if ( *((char *)v4 + 283) < 2 ) /*0x6d7fb3*/
    {
      v38[0] = v9 - 30; /*0x6d7fba*/
      v38[1] = v10; /*0x6d7fc2*/
      TacticalClass::CheckCellVisibility(v4, v38, &DSurface_ViewBounds, 0); /*0x6d7fce*/
    }
    v33 = *a2; /*0x6d7fda*/
    v34 = a2[1]; /*0x6d7fde*/
    v31 = 0; /*0x6d7fe2*/
    do /*0x6d8248*/
    {
      v11 = 0; /*0x6d7fea*/
      do /*0x6d8222*/
      {
        v38[0] = v11 + 1; /*0x6d7ff3*/
        v12 = v33 + ((v11 + 1) >> 1); /*0x6d7ffb*/
        v13 = v34 - (v11 >> 1) + 1; /*0x6d8009*/
        v35[0] = v33 + ((v11 + 1) >> 1); /*0x6d8010*/
        v35[1] = v34 - (v11 >> 1) + 1; /*0x6d8015*/
        if ( !(unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v35) ) /*0x6d8021*/
          goto LABEL_34; /*0x6d8021*/
        v36[0] = v33 + ((v11 + 1) >> 1); /*0x6d8031*/
        v36[1] = v34 - (v11 >> 1) + 1; /*0x6d8036*/
        v14 = (char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v36); /*0x6d8040*/
        v15 = 0; /*0x6d8042*/
        v32 = v14; /*0x6d8044*/
        v16 = v14[283]; /*0x6d804b*/
        v44 = 0; /*0x6d8056*/
        if ( v11 == 1 ) /*0x6d805a*/
        {
          if ( v16 > v31 && v16 < v31 + 4 ) /*0x6d8070*/
          {
  LABEL_11:
            v15 = 1; /*0x6d8072*/
            v44 = 1; /*0x6d8074*/
          }
        }
        else if ( v16 == v31 + 1 ) /*0x6d805f*/
        {
          goto LABEL_11; /*0x6d805f*/
        }
        if ( v14[285] > 0 && !v15 ) /*0x6d8087*/
        {
          v17 = v16 - v31; /*0x6d808f*/
          if ( v11 != 1 ) /*0x6d8094*/
          {
            if ( v17 < 0 && v17 + v32[285] >= 0 ) /*0x6d80a7*/
            {
              v15 = 1; /*0x6d80a9*/
              goto LABEL_21; /*0x6d80ab*/
            }
  LABEL_20:
            v15 = v44; /*0x6d80c9*/
            goto LABEL_21; /*0x6d80c9*/
          }
          if ( v17 + 1 > 0 ) /*0x6d80b2*/
            goto LABEL_20; /*0x6d80b2*/
          v15 = 1; /*0x6d80c3*/
          if ( v32[285] + v17 + 1 <= 0 ) /*0x6d80c7*/
            goto LABEL_20; /*0x6d80c7*/
        }
  LABEL_21:
        if ( v16 != v31 ) /*0x6d80d1*/
        {
          if ( !v15 ) /*0x6d8148*/
            goto LABEL_34; /*0x6d8148*/
  LABEL_33:
          v37[0] = v12; /*0x6d814e*/
          v37[1] = v13; /*0x6d8168*/
          v41 = ((((__int16)v12 << 8) + 128) / 256) << 8; /*0x6d8194*/
          v42 = ((((__int16)v13 << 8) + 128) / 256) << 8; /*0x6d819d*/
          v43 = 0; /*0x6d81a1*/
          v23 = IsoCoord::ToPixel(&v40, v41, v42); /*0x6d81a5*/
          v24 = v23[1]; /*0x6d81b2*/
          v25 = *v23 / 256; /*0x6d81c0*/
          v26 = ZCoordToScreenY(v43); /*0x6d81c3*/
          v27 = v25 - *((unsigned int *)this + 44); /*0x6d81ea*/
          v39[1] = v24 / 256 - v26 - *((unsigned int *)this + 45); /*0x6d81ee*/
          v39[0] = v27 - 30; /*0x6d8204*/
          v28 = (int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v37); /*0x6d820f*/
          TacticalClass::CheckCellVisibility(v28, v39, &DSurface_ViewBounds, 0); /*0x6d8216*/
          goto LABEL_34; /*0x6d8216*/
        }
        if ( v15 ) /*0x6d80d5*/
          goto LABEL_33; /*0x6d80d5*/
        v18 = *((unsigned int *)v32 + 14); /*0x6d80e3*/
        v19 = (unsigned __int8)v32[282]; /*0x6d80eb*/
        if ( v18 != 0xFFFF && v18 != 255 ) /*0x6d80f8*/
        {
          v20 = *(unsigned int *)(*(unsigned int * *)((char *)&stru_A8EB00 + 556) + 4 * v18); /*0x6d8104*/
          if ( v20 ) /*0x6d8109*/
          {
            v21 = (unsigned int *)(*(int (__thiscall **)(int))(*(unsigned int *)v20 + 156))(v20); /*0x6d8113*/
            if ( v21 ) /*0x6d811b*/
            {
              if ( v19 >= *v21 * v21[1] - 1 ) /*0x6d812a*/
                v19 = *v21 * v21[1] - 1; /*0x6d812c*/
              v22 = v21[v19 + 4]; /*0x6d812e*/
              if ( v22 ) /*0x6d8134*/
              {
                if ( (*(unsigned char *)(v22 + 36) & 1) != 0 ) /*0x6d813e*/
                  goto LABEL_33; /*0x6d813e*/
              }
            }
          }
        }
  LABEL_34:
        v11 = v38[0]; /*0x6d821b*/
      }
      while ( v38[0] < 3 ); /*0x6d8222*/
      result = v31 + 2; /*0x6d8235*/
      v30 = v31 + 2 < 24; /*0x6d8239*/
      ++v33; /*0x6d823c*/
      ++v34; /*0x6d8240*/
      v31 += 2; /*0x6d8244*/
    while ( v30 ); /*0x6d8248*/
    return result; /*0x6d824e*/
} // namespace gamemd

} // namespace gamemd

// 0x72B530
namespace gamemd {
int PaletteManager::Load(int a2)
{
    int v2; // ecx
    int v3; // edx
    int v4; // edi
    void (__thiscall ***v5)(unsigned int, int); // ecx
    int result; // eax

    v3 = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1464]; /*0x72b530*/
    v4 = v2; /*0x72b53d*/
    if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1464] == 1 ) /*0x72b53f*/
    {
      if ( !g_MenuStateFlags ) /*0x72b547*/
      {
        result = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1000]; /*0x72b64d*/
        goto LABEL_23; /*0x72b64d*/
      }
      v5 = *(void (__thiscall ****)(unsigned int, int))&g_BuildingLoadQueue_Array.__pad_F70[1008]; /*0x72b54d*/
      if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1008] ) /*0x72b555*/
      {
        (***(void (__thiscall ****)(unsigned int, unsigned int))&g_BuildingLoadQueue_Array.__pad_F70[1008])( /*0x72b55a*/
          *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1008],
          *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1464]);
        v5 = 0; /*0x72b55c*/
        *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1008] = 0; /*0x72b55e*/
      }
      if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1004] ) /*0x72b56b*/
      {
        RA2_OPDEL(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1004]); /*0x72b56e*/
        v5 = *(void (__thiscall ****)(unsigned int, int))&g_BuildingLoadQueue_Array.__pad_F70[1008]; /*0x72b573*/
        *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1004] = 0; /*0x72b57c*/
      }
      if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[996] ) /*0x72b589*/
      {
        RA2_OPDEL(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[996]); /*0x72b58c*/
        v5 = *(void (__thiscall ****)(unsigned int, int))&g_BuildingLoadQueue_Array.__pad_F70[1008]; /*0x72b591*/
        *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[996] = 0; /*0x72b59a*/
      }
      result = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1000]; /*0x72b5a0*/
      if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1000] ) /*0x72b5a7*/
      {
        (***(void (__thiscall ****)(unsigned int, int))&g_BuildingLoadQueue_Array.__pad_F70[1000])( /*0x72b5af*/
          *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1000],
          1);
        v5 = *(void (__thiscall ****)(unsigned int, int))&g_BuildingLoadQueue_Array.__pad_F70[1008]; /*0x72b5b1*/
        result = 0; /*0x72b5b7*/
        *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1000] = 0; /*0x72b5b9*/
      }
    }
    else
    {
      result = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1000]; /*0x72b5c0*/
      v5 = *(void (__thiscall ****)(unsigned int, int))&g_BuildingLoadQueue_Array.__pad_F70[1008]; /*0x72b5c5*/
    }
    v3 = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1464]; /*0x72b5cb*/
    if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1464] != 2 || g_MenuStateFlags ) /*0x72b5e0*/
    {
  LABEL_23:
      if ( result ) /*0x72b654*/
      {
        if ( v3 ) /*0x72b660*/
          return result; /*0x72b660*/
        goto LABEL_26; /*0x72b660*/
      }
      goto LABEL_24; /*0x72b654*/
    }
    if ( v5 ) /*0x72b5e4*/
    {
      (**v5)((unsigned int)(v5), 1); /*0x72b5ea*/
      result = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1000]; /*0x72b5ec*/
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1008] = 0; /*0x72b5f1*/
    }
    if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1004] ) /*0x72b5ff*/
    {
      RA2_OPDEL(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1004]); /*0x72b602*/
      result = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1000]; /*0x72b607*/
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1004] = 0; /*0x72b60f*/
    }
    if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[996] ) /*0x72b61d*/
    {
      RA2_OPDEL(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[996]); /*0x72b620*/
      result = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1000]; /*0x72b625*/
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[996] = 0; /*0x72b62d*/
    }
    if ( result ) /*0x72b635*/
    {
      result = (**(int (__thiscall ***)(int, int))result)(result, 1); /*0x72b63d*/
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1000] = 0; /*0x72b63f*/
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1464] = 0; /*0x72b645*/
      goto LABEL_26; /*0x72b64b*/
    }
  LABEL_24:
    *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1464] = 0; /*0x72b656*/
  LABEL_26:
    if ( g_MenuStateFlags ) /*0x72b66c*/
    {
      result = LoadPaletteSimple( /*0x72b67e*/
                 off_844BC4,
                 (int *)&g_BuildingLoadQueue_Array.__pad_F70[996],
                 &g_BuildingLoadQueue_Array.__pad_F70[1000]);
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1464] = 2; /*0x72b683*/
    }
    else if ( v4 ) /*0x72b692*/
    {
      if ( v4 == 1 ) /*0x72b6b9*/
      {
        result = LoadPaletteSimple( /*0x72b6cb*/
                   off_844C1C,
                   (int *)&g_BuildingLoadQueue_Array.__pad_F70[996],
                   &g_BuildingLoadQueue_Array.__pad_F70[1000]);
        *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1464] = 1; /*0x72b6d0*/
      }
      else if ( v4 == 2 ) /*0x72b6dc*/
      {
        result = LoadPaletteSimple( /*0x72b6ee*/
                   off_844C10,
                   (int *)&g_BuildingLoadQueue_Array.__pad_F70[996],
                   &g_BuildingLoadQueue_Array.__pad_F70[1000]);
        *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1464] = 1; /*0x72b6f3*/
      }
      else if ( v4 == 3 ) /*0x72b703*/
      {
        result = LoadPaletteSimple( /*0x72b715*/
                   off_844C14,
                   (int *)&g_BuildingLoadQueue_Array.__pad_F70[996],
                   &g_BuildingLoadQueue_Array.__pad_F70[1000]);
        *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1464] = 1; /*0x72b71a*/
      }
      else if ( v4 == 4 ) /*0x72b72a*/
      {
        result = LoadPaletteSimple( /*0x72b73c*/
                   off_844C28,
                   (int *)&g_BuildingLoadQueue_Array.__pad_F70[996],
                   &g_BuildingLoadQueue_Array.__pad_F70[1000]);
        *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1464] = 1; /*0x72b741*/
      }
      else if ( v4 == 5 ) /*0x72b751*/
      {
        result = LoadPaletteSimple( /*0x72b763*/
                   off_844C20,
                   (int *)&g_BuildingLoadQueue_Array.__pad_F70[996],
                   &g_BuildingLoadQueue_Array.__pad_F70[1000]);
        *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1464] = 1; /*0x72b768*/
      }
      else if ( v4 == 6 ) /*0x72b778*/
      {
        result = LoadPaletteSimple( /*0x72b78a*/
                   off_844C18,
                   (int *)&g_BuildingLoadQueue_Array.__pad_F70[996],
                   &g_BuildingLoadQueue_Array.__pad_F70[1000]);
        *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1464] = 1; /*0x72b78f*/
      }
      else if ( v4 == 7 ) /*0x72b79f*/
      {
        result = LoadPaletteSimple( /*0x72b7b1*/
                   off_844C2C,
                   (int *)&g_BuildingLoadQueue_Array.__pad_F70[996],
                   &g_BuildingLoadQueue_Array.__pad_F70[1000]);
        *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1464] = 1; /*0x72b7b6*/
      }
      else if ( v4 == 8 ) /*0x72b7c6*/
      {
        result = LoadPaletteSimple( /*0x72b7d8*/
                   off_844C24,
                   (int *)&g_BuildingLoadQueue_Array.__pad_F70[996],
                   &g_BuildingLoadQueue_Array.__pad_F70[1000]);
        *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1464] = 1; /*0x72b7dd*/
      }
      else
      {
        if ( v4 == 9 ) /*0x72b7ed*/
          result = LoadPaletteSimple( /*0x72b7ff*/
                     off_844C30,
                     (int *)&g_BuildingLoadQueue_Array.__pad_F70[996],
                     &g_BuildingLoadQueue_Array.__pad_F70[1000]);
        *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1464] = 1; /*0x72b804*/
      }
    }
    else
    {
      result = LoadPaletteSimple( /*0x72b6a4*/
                 off_844C0C,
                 (int *)&g_BuildingLoadQueue_Array.__pad_F70[996],
                 &g_BuildingLoadQueue_Array.__pad_F70[1000]);
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1464] = 1; /*0x72b6a9*/
    }
    return result; /*0x72b68d*/
}
} // namespace gamemd

// 0x73E5E0
namespace gamemd {
int VoxelTypeClass::ReadINI(double a2)
{
    double v2; // st7
    int v4; // eax
    BuildingClass *v5; // ecx
    int v7; // eax
    int v8; // esi
    int v9; // eax
    char v10; // bl
    int v11; // eax
    int v12; // eax
    char v13; // bl
    int v14; // eax
    int (__stdcall ***Checked)(unsigned int, void *, int *); // eax
    int v16; // esi
    int v17; // eax
    int ComPtr_field_0x0C; // edi
    wchar_t *v19; // eax
    int v20; // eax
    int v21; // eax
    wchar_t *v22; // ecx
    int v23; // eax
    int v24; // edx
    int v25; // ecx
    int *v26; // eax
    void *v27; // eax
    char v28; // al
    int v29; // eax
    int v30; // esi
    unsigned int *v31; // edi
    unsigned int *v32; // eax
    int v33; // ecx
    int v34; // edx
    int v35; // eax
    int v36; // eax
    int v37; // eax
    int v38; // esi
    unsigned int *v39; // edi
    unsigned int *v40; // eax
    int v41; // ecx
    int v42; // edx
    int v43; // eax
    int v44; // ecx
    int v45; // eax
    int *v46; // ecx
    int v47; // esi
    int v48; // eax
    int v49; // edi
    int v50; // esi
    void *v51; // eax
    unsigned int *v52; // edi
    unsigned int *v53; // eax
    int v54; // ecx
    int v55; // edx
    int v56; // eax
    int v57; // eax
    CellClass *v58; // eax
    unsigned int *v59; // eax
    int v60; // ecx
    int v61; // esi
    __int16 *PlacementCellsAlt; // eax
    void *v63; // eax
    char *MissionControl; // eax
    int v65; // eax
    ComPtr v66; // [esp+4Ch] [ebp-54h] BYREF
    int v67; // [esp+70h] [ebp-30h]
    int v68; // [esp+74h] [ebp-2Ch]
    int v69; // [esp+78h] [ebp-28h] BYREF
    int v70; // [esp+7Ch] [ebp-24h]
    int v71; // [esp+80h] [ebp-20h]
    unsigned char v72[12]; // [esp+84h] [ebp-1Ch] BYREF
    unsigned char v73[8]; // [esp+90h] [ebp-10h] BYREF
    int v74; // [esp+98h] [ebp-8h]

    v4 = *((unsigned int *)this + 433); /*0x73e5e9*/
    if ( *(unsigned char *)(v4 + 1517) && *(unsigned char *)(v4 + 1516) && (v5 = (BuildingClass *)*((unsigned int *)this + 182)) != 0 ) /*0x73e60b*/
    {
      BuildingClass::ProcessEnterUnit(v5); /*0x73e60d*/
    }
    else
    {
      if ( !*(unsigned char *)(v4 + 3598) && !*(unsigned char *)(v4 + 3599) ) /*0x73e621*/
        return 450; /*0x73e637*/
      if ( !*(unsigned int *)(v4 + 1016) && !(unsigned __int8)House::IsCurrentPlayer(*((House **)this + 135)) /*0x73e67d*/
        || (v7 = *((unsigned int *)this + 433), v8 = 0, *(int *)(v7 + 1016) <= 0) )
      {
  LABEL_10:
        (*(void (__thiscall **)(Class_7F5C70 *, int, unsigned int))(*(unsigned int *)this + 488))((gamemd::Class_7F5C70 *)(this), 5, 0); /*0x73e651*/
        return 1; /*0x73e66c*/
      }
      while ( DynamicVector::GetOrGrow( /*0x73e6a2*/
                (DynamicVector *)(*((unsigned int *)this + 135) + 21760),
                *(unsigned int *)(*(unsigned int *)(*(unsigned int *)(v7 + 1004) + 4 * v8) + 3576)) <= 0 )
      {
        v7 = *((unsigned int *)this + 433); /*0x73e6a4*/
        if ( ++v8 >= *(unsigned int *)(v7 + 1016) ) /*0x73e6b1*/
          goto LABEL_10; /*0x73e6b1*/
      }
      v9 = *((unsigned int *)this + 433); /*0x73e6cf*/
      v10 = *(unsigned char *)(v9 + 3284); /*0x73e6de*/
      switch ( *((unsigned int *)this + 47) ) /*0x73e6ea*/
      {
        case 0: /*0x73e6ea*/
          if ( !*(unsigned char *)(v9 + 3599) /*0x73e711*/
            && ((double (__thiscall *)(Class_7F5C70 *))*(unsigned int *)(*(unsigned int *)this + 696)))(this) >= 1.0 )
          {
            *((unsigned int *)this + 47) = 2; /*0x73e714*/
            return 1; /*0x73e729*/
          }
          v11 = *((unsigned int *)this + 134); /*0x73e72a*/
          IDA_LOBYTE(v66.ComPtr_field_0x04) = 1; /*0x73e730*/
          if ( v11 ) /*0x73e737*/
          {
            (*(void (__thiscall **)(Class_7F5C70 *, int, int))(*(unsigned int *)this + 1152))((gamemd::Class_7F5C70 *)(this), v11, 1); /*0x73e741*/
            TechnoClass::SetFocus((TechnoClass *)this, 0); /*0x73e74b*/
            IDA_LOBYTE(v66.ComPtr_field_0x04) = 0; /*0x73e750*/
          }
          v12 = *((unsigned int *)this + 433); /*0x73e755*/
          *((unsigned char *)this + 1746) = 0; /*0x73e75b*/
          if ( *(unsigned char *)(v12 + 3599) ) /*0x73e762*/
          {
            v13 = FootClass::MoveToWeed((FootClass *)this, dword_8871E0->CollapseChance / 256); /*0x73e78c*/
          }
          else
          {
            v14 = *((unsigned int *)this + 413); /*0x73e793*/
            *(unsigned int *)v66.__pad_0 = 0; /*0x73e7a1*/
            if ( !v14 ) /*0x73e7a9*/
              goto LABEL_31; /*0x73e7a9*/
            Checked = (int (__stdcall ***)(unsigned int, void *, int *))Stream::GetChecked((Stream *)(this + 1652)); /*0x73e7ab*/
            v16 = (**Checked)((unsigned int)(Checked), &unk_818858, &v66.ComPtr_field_0x0C); /*0x73e7bf*/
            if ( v16 >= 0 ) /*0x73e7c3*/
            {
              ComPtr_field_0x0C = v66.ComPtr_field_0x0C; /*0x73e7d2*/
              ComPtr::Release_Alt(&v66); /*0x73e7da*/
              v17 = ComPtr_field_0x0C; /*0x73e7df*/
            }
            else
            {
              ComPtr::Release_Alt(&v66); /*0x73e7c9*/
              v17 = 0; /*0x73e7ce*/
            }
            *(unsigned int *)v66.__pad_0 = v17; /*0x73e7e3*/
            if ( v16 < 0 && v16 != -2147467262 ) /*0x73e7ef*/
              sub_7DC720(v16); /*0x73e7f2*/
            if ( !v17 ) /*0x73e7fd*/
  LABEL_31:
              sub_7DC720(-2147467261); /*0x73e804*/
            (*(void (__stdcall **)(int, unsigned char *))(*(unsigned int *)v17 + 12))(v17, v73); /*0x73e815*/
            if ( !memcmp(v73, &g_CLSID_HoverLocomotion, 0x10u) && *((unsigned int *)this + 361) ) /*0x73e82c*/
              (*(void (__thiscall **)(Class_7F5C70 *, unsigned int, int))(*(unsigned int *)this + 1152))((gamemd::Class_7F5C70 *)(this), 0, 1); /*0x73e83e*/
            v13 = FootClass::MoveToTiberium((FootClass *)this, dword_8871E0->CollapseChance / 256, v66.ComPtr_field_0x04); /*0x73e869*/
            if ( *(unsigned int *)v66.__pad_0 ) /*0x73e871*/
              (*(void (__stdcall **)(unsigned int))(**(unsigned int **)v66.__pad_0 + 8))(*(unsigned int *)v66.__pad_0); /*0x73e876*/
          }
          if ( v13 ) /*0x73e87b*/
          {
            *((unsigned char *)this + 1746) = 1; /*0x73e87d*/
            v19 = (wchar_t *)((unsigned int)((wchar_t *)(dword_A8ED84))); /*0x73e884*/
            *((unsigned int *)this + 67) = 2; /*0x73e894*/
            *((unsigned int *)this + 64) = v19; /*0x73e89b*/
            *((unsigned int *)this + 65) = v70; /*0x73e8a2*/
            *((unsigned int *)this + 66) = 2; /*0x73e8aa*/
            *((unsigned int *)this + 62) = 0; /*0x73e8ad*/
            *((unsigned int *)this + 47) = 1; /*0x73e8b7*/
            return 1; /*0x73e8c2*/
          }
          if ( *((unsigned int *)this + 361) ) /*0x73e8c3*/
          {
            *((unsigned char *)this + 976) = 0; /*0x73e925*/
            break; /*0x73e92c*/
          }
          v20 = *((unsigned int *)this + 134); /*0x73e8cd*/
          if ( v20 ) /*0x73e8d5*/
          {
            (*(void (__thiscall **)(Class_7F5C70 *, int, int))(*(unsigned int *)this + 1152))((gamemd::Class_7F5C70 *)(this), v20, 1); /*0x73e8df*/
            break; /*0x73e8e5*/
          }
          v21 = *((unsigned int *)this + 433); /*0x73e8ea*/
          *((unsigned int *)this + 47) = 4; /*0x73e8f0*/
          *((unsigned char *)this + 976) = 1; /*0x73e8fa*/
          if ( *(unsigned char *)(v21 + 3598) ) /*0x73e901*/
            *(unsigned char *)(*((unsigned int *)this + 135) + 578) = 1; /*0x73e911*/
          return 105; /*0x73e924*/
        case 1: /*0x73e6ea*/
          if ( !*((unsigned int *)this + 67) ) /*0x73e931*/
          {
            *((unsigned int *)this + 62) = 0; /*0x73e93b*/
 v22 = (wchar_t *)(dword_A8ED84); /*0x73e94b*/
            v23 = *(unsigned int *)&dword_8871E0->__pad_13BC[356]; /*0x73e951*/
            *((unsigned int *)this + 67) = v23; /*0x73e95d*/
            *((unsigned int *)this + 64) = v22; /*0x73e963*/
            *((unsigned int *)this + 65) = v70; /*0x73e969*/
            *((unsigned int *)this + 66) = v23; /*0x73e96c*/
          }
          if ( *((int *)this + 62) < 9 ) /*0x73e976*/
            return 1; /*0x73e97b*/
          if ( UnitClass::ProcessResourceHarvesting((UnitClass *)this) ) /*0x73e987*/
            return 1; /*0x73ee99*/
          v24 = (unsigned int)(*((unsigned int *)this + 433)); /*0x73e994*/
          *((unsigned char *)this + 1746) = 0; /*0x73e99a*/
          if ( *(unsigned char *)(v24 + 3598) /*0x73e9c4*/
            && ((double (__thiscall *)(Class_7F5C70 *))*(unsigned int *)(*(unsigned int *)this + 696)(this) == 1.0 )
          {
            v25 = *((unsigned int *)this + 433); /*0x73e9ca*/
            *((unsigned int *)this + 47) = 2; /*0x73e9d0*/
            if ( *(unsigned char *)(v25 + 3598) ) /*0x73e9da*/
              v26 = (int *)(*(int (__thiscall **)(Class_7F5C70 *, int *, int, unsigned int))(*(unsigned int *)this + 824))( /*0x73ea09*/
                             this,
                             &v66.ComPtr_field_0x10,
                             *(unsigned int *)dword_8871E0->MutateExplosion / 256,
                             0);
            else
              v26 = BuildingClass::Validate( /*0x73ea31*/
                      (BuildingClass *)this,
                      &v66.ComPtr_field_0x14,
                      *(unsigned int *)dword_8871E0->MutateExplosion / 256);
            *(unsigned int *)v66.__pad_0 = *v26; /*0x73ea3f*/
            if ( *(unsigned int *)v66.__pad_0 == g_UnitSelectionState ) /*0x73ea43*/
            {
              TechnoClass::SetFocus((TechnoClass *)this, 0); /*0x73ea7b*/
            }
            else
            {
              v27 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)v66.__pad_0); /*0x73ea5d*/
              TechnoClass::SetFocus((TechnoClass *)this, (int)v27); /*0x73ea65*/
            }
            return 1; /*0x73ea83*/
          }
          else
          {
            if ( *(unsigned char *)(*((unsigned int *)this + 433) + 3598) ) /*0x73ea93*/
              v28 = FootClass::MoveToTiberium((FootClass *)this, *(unsigned int *)dword_8871E0->MutateExplosion / 256, 0); /*0x73eab9*/
            else
              v28 = FootClass::MoveToWeed((FootClass *)this, *(unsigned int *)dword_8871E0->MutateExplosion / 256); /*0x73eadb*/
            if ( v28 || *((unsigned int *)this + 361) ) /*0x73eae4*/
            {
              *((unsigned int *)this + 47) = 1; /*0x73eb0f*/
              *((unsigned char *)this + 1746) = 1; /*0x73eb19*/
              return 1; /*0x73eb22*/
            }
            else
            {
              TechnoClass::SetFocus((TechnoClass *)this, 0); /*0x73eaf2*/
              *((unsigned int *)this + 47) = 2; /*0x73eaf8*/
              return 1; /*0x73eb04*/
            }
          }
        case 2: /*0x73e6ea*/
          if ( *((unsigned int *)this + 361) /*0x73eb49*/
            && v10
            && (*(int (__thiscall **)(Class_7F5C70 *, int, unsigned int, unsigned int))(*(unsigned int *)this + 1320))(
                 (gamemd::Class_7F5C70 *)(this),
                 v9 + 1000,
                 0,
                 0) )
          {
            FootClass::ClearPathIndex((FootClass *)this); /*0x73eb55*/
          }
          if ( *((unsigned int *)this + 361) ) /*0x73eb5a*/
            break; /*0x73eb62*/
          v29 = (*(int (__thiscall **)(Class_7F5C70 *, int, unsigned int, unsigned int))(*(unsigned int *)this + 1320))( /*0x73eb7e*/
                  this,
                  *((unsigned int *)this + 433) + 1000,
                  0,
                  0);
          v30 = v29; /*0x73eb86*/
          if ( v10 ) /*0x73eb88*/
          {
            if ( !v29 ) /*0x73edc2*/
              goto LABEL_75; /*0x73edc2*/
            v52 = (unsigned int *)(*(int (__thiscall **)(int, unsigned char *))(*(unsigned int *)v29 + 72))(v29, v73); /*0x73edd7*/
            v53 = (unsigned int *)(*(int (__thiscall **)(Class_7F5C70 *, unsigned char *))(*(unsigned int *)this + 72))((gamemd::Class_7F5C70 *)(this), v72); /*0x73ede0*/
            v54 = *v53 - *v52; /*0x73ede7*/
            v55 = v53[1]; /*0x73ede9*/
            v56 = v53[2]; /*0x73edec*/
            v66.ComPtr_field_0x20 = v54; /*0x73edef*/
            v67 = v55 - v52[1]; /*0x73edff*/
            v68 = v56 - v52[2]; /*0x73ee0c*/
            Math::Sqrt((double)v68 * (double)v68 + (double)v67 * (double)v67 + (double)v54 * (double)v54); /*0x73ee2d*/
            IDA_LOWORD(v57) = RoundToInt(v2); /*0x73ee35*/
            if ( v57 > *(unsigned int *)&dword_8871E0->__pad_C3C[320] << 8 ) /*0x73ee4b*/
              goto LABEL_75; /*0x73ee4b*/
          }
          else
          {
            if ( !v29 ) /*0x73eb90*/
              goto LABEL_75; /*0x73eb90*/
            v31 = (unsigned int *)(*(int (__thiscall **)(int, unsigned char *))(*(unsigned int *)v29 + 72))(v29, v72); /*0x73eba5*/
            v32 = (unsigned int *)(*(int (__thiscall **)(Class_7F5C70 *, unsigned char *))(*(unsigned int *)this + 72))((gamemd::Class_7F5C70 *)(this), v73); /*0x73ebae*/
            v33 = *v32 - *v31; /*0x73ebb5*/
            v34 = v32[1]; /*0x73ebb7*/
            v35 = v32[2]; /*0x73ebba*/
            v66.ComPtr_field_0x20 = v33; /*0x73ebbd*/
            v67 = v34 - v31[1]; /*0x73ebcd*/
            v68 = v35 - v31[2]; /*0x73ebda*/
            Math::Sqrt((double)v68 * (double)v68 + (double)v67 * (double)v67 + (double)v33 * (double)v33); /*0x73ebfb*/
            IDA_LOWORD(v36) = RoundToInt(v2); /*0x73ec03*/
            if ( v36 > *(unsigned int *)&dword_8871E0->__pad_C3C[316] << 8 ) /*0x73ec19*/
              goto LABEL_75; /*0x73ec19*/
          }
          if ( (*(int (__thiscall **)(Class_7F5C70 *, int, int))(*(unsigned int *)this + 632))(this, 2, v30) == 1 ) /*0x73ee62*/
          {
            *((unsigned int *)this + 47) = 3; /*0x73ee68*/
            break; /*0x73ee72*/
          }
  LABEL_75:
          ++dword_A8E7AC; /*0x73ec1f*/
          v37 = (*(int (__thiscall **)(Class_7F5C70 *, int, unsigned int, int))(*(unsigned int *)this + 1320))( /*0x73ec41*/
                  this,
                  *((unsigned int *)this + 433) + 1000,
                  0,
                  1);
          v38 = v37; /*0x73ec4d*/
          --dword_A8E7AC; /*0x73ec52*/
          if ( v37 ) /*0x73ec58*/
          {
            v39 = (unsigned int *)(*(int (__thiscall **)(int, unsigned char *))(*(unsigned int *)v37 + 72))(v37, v73); /*0x73ec6d*/
            v40 = (unsigned int *)(*(int (__thiscall **)(Class_7F5C70 *, unsigned char *))(*(unsigned int *)this + 72))((gamemd::Class_7F5C70 *)(this), v72); /*0x73ec76*/
            v41 = *v40 - *v39; /*0x73ec7d*/
            v42 = v40[1]; /*0x73ec7f*/
            v43 = v40[2]; /*0x73ec82*/
            v66.ComPtr_field_0x20 = v41; /*0x73ec85*/
            v44 = v39[2]; /*0x73ec91*/
            v67 = v42 - v39[1]; /*0x73ec94*/
            v68 = v43 - v44; /*0x73ec9e*/
            Math::Sqrt( /*0x73ecc3*/
              (double)v66.ComPtr_field_0x20 * (double)v66.ComPtr_field_0x20
            + (double)(v43 - v44) * (double)(v43 - v44)
            + (double)v67 * (double)v67);
            IDA_LOWORD(v45) = RoundToInt(v2); /*0x73eccb*/
            if ( v45 > 768 || v10 ) /*0x73ecd9*/
            {
              v46 = (int *)(v38 + 156); /*0x73ecdf*/
              v47 = *(unsigned int *)(v38 + 1312); /*0x73ece5*/
              v48 = *v46; /*0x73eceb*/
              v49 = v46[1]; /*0x73eced*/
              v74 = v46[2]; /*0x73ecf3*/
              IDA_LOWORD(v66.ComPtr_field_0x04) = v48 / 256; /*0x73ed13*/
              IDA_HIWORD(v66.ComPtr_field_0x04) = v49 / 256; /*0x73ed18*/
              *(unsigned int *)v66.__pad_0 = v66.ComPtr_field_0x04; /*0x73ed21*/
              *(unsigned short *)v66.__pad_0 = IDA_LOWORD(v66.ComPtr_field_0x04) + *(unsigned short *)(v47 + 5656); /*0x73ed2f*/
              *(unsigned short *)&v66.__pad_0[2] = *(unsigned short *)(v47 + 5660) + IDA_HIWORD(v66.ComPtr_field_0x04); /*0x73ed3b*/
              v66.ComPtr_field_0x08 = 0; /*0x73ed6b*/
              *(unsigned int *)v66.__pad_0 = *LayerClass::Pathfinding_Find( /*0x73ed7f*/
                                          (Type *)&dword_87F7E8,
                                          (int)&v66.ComPtr_field_0x08,
                                          &v66.ComPtr_field_0x18,
                                          (__int16 *)v66.__pad_0,
                                          2,
                                          -1,
                                          0,
                                          0,
                                          1,
                                          1,
                                          0,
                                          0,
                                          0,
                                          1,
                                          (__int16 *)&v66.ComPtr_field_0x08,
                                          0,
                                          0);
              if ( *(unsigned int *)v66.__pad_0 == g_UnitSelectionState ) /*0x73ed8a*/
              {
                (*(void (__thiscall **)(Class_7F5C70 *, unsigned int, int))(*(unsigned int *)this + 1152))(this, 0, 1); /*0x73ee7f*/
              }
              else
              {
                v50 = *(unsigned int *)this; /*0x73ed9e*/
                v51 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)v66.__pad_0); /*0x73edad*/
                (*(void (__thiscall **)(Class_7F5C70 *, void *, int))((gamemd::Class_7F5C70 *)(v50 + 1152)))(this, v51, 1); /*0x73edb5*/
              }
            }
          }
          break; /*0x73ee85*/
        case 3: /*0x73e6ea*/
          (*(void (__thiscall **)(Class_7F5C70 *, int, unsigned int))(*(unsigned int *)this + 488))(this, 7, 0); /*0x73ee93*/
          return 1; /*0x73ee93*/
        case 4: /*0x73e6ea*/
          if ( *((unsigned char *)this + 976) ) /*0x73eea6*/
          {
            if ( (*(int (__thiscall **)(Class_7F5C70 *, int *, unsigned int, int))(*(unsigned int *)this + 1320))( /*0x73eec6*/
                   this,
                   &dword_8871E0->ChronoHarvTooFarDistance,
                   0,
                   1) )
            {
              (*(void (__thiscall **)(Class_7F5C70 *, int, unsigned int))(*(unsigned int *)this + 488))((gamemd::Class_7F5C70 *)(this), (int *)(20), 0); /*0x73eed9*/
            }
            else
            {
              (*(void (__thiscall **)(Class_7F5C70 *, int, unsigned int))(*(unsigned int *)this + 488))(this, 15, 0); /*0x73eeea*/
            }
          }
          v69 = *((unsigned int *)this + 39); /*0x73eefc*/
          v70 = *((unsigned int *)this + 40); /*0x73ef08*/
          v71 = *((unsigned int *)this + 41); /*0x73ef0f*/
          v58 = Coord::To_Cell((Coord *)&dword_87F7E8, &v69); /*0x73ef18*/
          v59 = Cell::IsBridge((Cell *)v58); /*0x73ef1f*/
          if ( v59 ) /*0x73ef26*/
          {
            v60 = v59[328]; /*0x73ef28*/
            if ( *(unsigned char *)(v60 + 5819) || *(unsigned char *)(v60 + 5820) ) /*0x73ef38*/
            {
              v61 = *(unsigned int *)this; /*0x73ef42*/
              PlacementCellsAlt = (__int16 *)MapClass::FindPlacementCellsAlt( /*0x73ef4f*/
                                               (char *)this,
                                               &v66.ComPtr_field_0x1C,
                                               (int)v59);
              v63 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, PlacementCellsAlt); /*0x73ef5a*/
              (*(void (__thiscall **)(Class_7F5C70 *, void *, int))((gamemd::Class_7F5C70 *)(v61 + 1152)))(this, v63, 1); /*0x73ef62*/
            }
          }
          (*(void (__thiscall **)(Class_7F5C70 *, int, unsigned int))(*(unsigned int *)this + 488))(this, 5, 0); /*0x73ef71*/
          break; /*0x73ef71*/
        default:
          break;
      }
    }
    MissionControl = MissionClass::GetMissionControl((MissionClass *)this); /*0x73ef77*/
    IDA_LOWORD(v65) = RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x73ef87*/
    return v65 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x73e62b*/
}
} // namespace gamemd

// 0x753650
namespace gamemd {
void VoxClass_Vector::getItem()
{
    void *v2; // eax

    v2 = *(void **)&this->m_1[3]; /*0x753656*/
    this->m_10 = 0; /*0x753659*/
    if ( v2 && IDA_BYTE1(this->VoxClass_Vector_field_0x0C) ) /*0x753660*/
    {
      RA2_OPDEL(v2); /*0x753666*/
      *(unsigned int *)&this->m_1[3] = 0; /*0x75366e*/
    }
    IDA_BYTE1(this->VoxClass_Vector_field_0x0C) = 0; /*0x753671*/
    *(unsigned int *)&this->VoxClass_Vector_field_0x08 = 0; /*0x753674*/
}
} // namespace gamemd

// 0x753680
namespace gamemd {
unsigned int VoxClass_Vector::getItemAt(int a2)
{
    if ( IDA_LOBYTE(this->VoxClass_Vector_field_0x0C) ) /*0x753680*/
      return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x753695*/
    else
      return 0; /*0x753687*/
}
} // namespace gamemd

// 0x753830
namespace gamemd {
char VoxClass_Vector::removeItem(int a2, unsigned int *a3)
{
    unsigned int *v4; // edi
    int m_8; // ecx
    int i; // eax
    int v7; // eax

    if ( a2 ) /*0x75383c*/
    {
      IDA_LOBYTE(this->VoxClass_Vector_field_0x0C) = 0; /*0x753842*/
      if ( a3 ) /*0x753848*/
        v4 = a3; /*0x75385e*/
      else
        v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x75385a*/
      IDA_LOBYTE(this->VoxClass_Vector_field_0x0C) = 1; /*0x753862*/
      if ( !v4 ) /*0x753866*/
        return 0; /*0x7538da*/
      if ( *(unsigned int *)&this->m_1[3] ) /*0x753868*/
      {
        m_8 = this->m_8; /*0x75386f*/
        if ( a2 < m_8 ) /*0x753874*/
          m_8 = a2; /*0x753876*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x75387c*/
          ++i; /*0x753881*/
        if ( IDA_BYTE1(this->VoxClass_Vector_field_0x0C) ) /*0x75388e*/
        {
          RA2_OPDEL(*(void **)&this->m_1[3]); /*0x753899*/
          *(unsigned int *)&this->m_1[3] = 0; /*0x7538a1*/
        }
      }
      *(unsigned int *)&this->m_1[3] = v4; /*0x7538aa*/
      this->m_8 = a2; /*0x7538b2*/
      IDA_BYTE1(this->VoxClass_Vector_field_0x0C) = a3 == 0; /*0x7538b5*/
    }
    else
    {
      (*(void (__thiscall **)(_DynamicVectorClass_PAVVoxClass *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x7538be*/
    }
    v7 = this->m_8; /*0x7538c1*/
    if ( v7 < this->m_10 ) /*0x7538c9*/
      this->m_10 = v7; /*0x7538cb*/
    return 1; /*0x7538ce*/
}
} // namespace gamemd

// 0x7538E0
namespace gamemd {
int VoxClass_Vector::getItemWithIndex(unsigned int *a2)
{
    int m_10; // edx
    int result; // eax
    unsigned int *i; // ecx

    m_10 = this->m_10; /*0x7538e0*/
    result = 0; /*0x7538e3*/
    if ( m_10 <= 0 ) /*0x7538e8*/
      return -1; /*0x7538ff*/
    for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x7538ee*/
    {
      if ( ++result >= m_10 ) /*0x7538fd*/
        return -1; /*0x7538fd*/
    }
    return result; /*0x753902*/
}
} // namespace gamemd

// 0x753960
namespace gamemd {
unsigned int * VoxClass_Vector::findItem(char a2)
{
    void *v3; // eax

    v3 = *(void **)&this->m_1[3]; /*0x753963*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void *)&VectorClass_VoxClass___vftable; /*0x753966*/
    if ( v3 && IDA_BYTE1(this->VoxClass_Vector_field_0x0C) ) /*0x753970*/
    {
      RA2_OPDEL(v3); /*0x753978*/
      *(unsigned int *)&this->m_1[3] = 0; /*0x753980*/
    }
    IDA_BYTE1(this->VoxClass_Vector_field_0x0C) = 0; /*0x75398b*/
    *(unsigned int *)&this->VoxClass_Vector_field_0x08 = 0; /*0x753991*/
    if ( (a2 & 1) != 0 ) /*0x753998*/
      RA2_OPDEL(this); /*0x75399b*/
    return this->__pad_0; /*0x7539a5*/
}
} // namespace gamemd

// 0x755B30
namespace gamemd {
void VoxelModel_BuildDrawList_3p(float *a1, int a2, int a3)
{
    int v4; // ebx
    double v5; // st7
    double v6; // st7
    float *v7; // [esp+0h] [ebp-88h]
    float v8; // [esp+10h] [ebp-78h]
    int v9; // [esp+14h] [ebp-74h]
    int v10; // [esp+18h] [ebp-70h]
    int v11[3]; // [esp+1Ch] [ebp-6Ch] BYREF
    float v12[12]; // [esp+28h] [ebp-60h] BYREF
    float v13[12]; // [esp+58h] [ebp-30h] BYREF

    v4 = 12 * a2; /*0x755b47*/
    Math::BuildRotationMatrix(v12, &flt_B444A0[3 * a2], flt_8467E4[a3]); /*0x755b56*/
    qmemcpy(a1, MultiplyMatrix3x4(v13, a1, v12), 0x30u); /*0x755b74*/
    v8 = *(float *)(v4 + 11809496) * -3.0; /*0x755b82*/
    v5 = *(float *)(v4 + 11809500) * -3.0; /*0x755b8c*/
    *(float *)v11 = v8; /*0x755b96*/
    *(float *)&v9 = v5; /*0x755b9e*/
    v6 = *(float *)(v4 + 11809504) * -3.0; /*0x755ba8*/
    v11[1] = v9; /*0x755bb5*/
    *(float *)&v10 = v6; /*0x755bb9*/
    v11[2] = v10; /*0x755bc1*/
    Matrix3x3::Multiply(v11, v7); /*0x755bc5*/
    Vector::MatrixMulVectorMath((int *)a1, 0.0, 0.0, 3.0); /*0x755bd5*/
}
} // namespace gamemd

// 0x7564B0
namespace gamemd {
int VoxelSection::GetInfo(int a2, int a3) {
    return this->u32_14 + 164 * (a3 + *(unsigned int *)(this->u32_10 + 12 * a2)); /*0x7564cf*/
}
} // namespace gamemd

// 0x758950
namespace gamemd {
unsigned int * VoxelPalette::Init(int a2, int a3)
{
    if ( a2 ) /*0x758959*/
    {
      *((unsigned int *)this + 4) = a2; /*0x758974*/
      *((unsigned int *)this + 6) = 0; /*0x758977*/
    }
    else
    {
      *((unsigned int *)this + 4) = RA2_OPNEW(0x300u); /*0x758968*/
      *((unsigned int *)this + 6) = 1; /*0x75896b*/
    }
    if ( a3 ) /*0x758984*/
    {
      *((unsigned int *)this + 5) = a3; /*0x7589a3*/
      *((unsigned int *)this + 7) = 0; /*0x7589a6*/
    }
    else
    {
      *((unsigned int *)this + 5) = RA2_OPNEW(0x8000u); /*0x758993*/
      *((unsigned int *)this + 7) = 1; /*0x758996*/
    }
    return this->__pad_0; /*0x75899f*/
}
} // namespace gamemd

// 0x758950
namespace gamemd {
unsigned int * VoxelPalette::Init(int a2, int a3)
{
    if ( a2 ) /*0x758959*/
    {
      *((unsigned int *)this + 4) = a2; /*0x758974*/
      *((unsigned int *)this + 6) = 0; /*0x758977*/
    }
    else
    {
      *((unsigned int *)this + 4) = RA2_OPNEW(0x300u); /*0x758968*/
      *((unsigned int *)this + 6) = 1; /*0x75896b*/
    }
    if ( a3 ) /*0x758984*/
    {
      *((unsigned int *)this + 5) = a3; /*0x7589a3*/
      *((unsigned int *)this + 7) = 0; /*0x7589a6*/
    }
    else
    {
      *((unsigned int *)this + 5) = RA2_OPNEW(0x8000u); /*0x758993*/
      *((unsigned int *)this + 7) = 1; /*0x758996*/
    }
    return this->__pad_0; /*0x75899f*/
}
} // namespace gamemd

// 0x7589C0
namespace gamemd {
void VoxelPalette::Reset()
{
    int result; // eax

    if ( *((unsigned int *)this + 6) ) /*0x7589c3*/
      RA2_OPDEL(*((void **)this + 4)); /*0x7589ce*/
    result = *((unsigned int *)this + 7); /*0x7589d6*/
    if ( result ) /*0x7589db*/
      RA2_OPDEL(*((void **)this + 5)); /*0x7589e1*/
    return result; /*0x7589e9*/
}
} // namespace gamemd

// 0x75D3A0
namespace gamemd {
void Voxel_Section::Draw()
{
    unsigned int *WarheadTypeClass_field_0x140; // ebx
    unsigned int *v9; // eax
    char *i; // eax
    int CapacityIncrement; // ecx
    int unknown_18; // edx
    void *Items; // eax
    int Int_Overwrite; // eax
    char v16; // cl
    char Bool_Overwrite; // al
    char v18; // al
    char v19; // cl
    char v20; // al
    char v21; // al
    char v22; // cl
    char v23; // al
    unsigned int *GUID_Overwrite; // eax
    int v25; // ecx
    int v26; // edx
    int v27; // eax
    char v28; // al
    char v29; // al
    int Paralyzes; // ecx
    int v31; // eax
    char v32; // al
    char v33; // cl
    char v34; // al
    double v35; // rax
    char Culling_high; // cl
    char v38; // al
    char v39; // al
    char v40; // cl
    char v41; // al
    int v42; // eax
    int WarheadTypeClass_field_0x180; // ecx
    int v44; // eax
    int v45; // eax
    int v46; // ecx
    int v47; // eax
    int v48; // eax
    int v49; // eax
    char *j; // eax
    unsigned int *v51; // ebx
    void *v52; // eax
    int Capacity; // eax
    bool v54; // zf
    int v55; // eax
    int MaxDebris; // ecx
    int v57; // eax
    int v58; // ecx
    int v59; // edx
    void *v60; // eax
    int v61; // eax
    unsigned __int8 *inited; // eax
    char *IntList; // eax
    int v64; // eax
    int v65; // eax
    int v66; // ecx
    int v67; // eax
    int v68; // edx
    void *v69; // eax
    char *v70; // edi
    double *v71; // ebx
    int v72; // ebp
    char *v73; // eax
    void **v78; // [esp-14h] [ebp-168h] BYREF
    unsigned int *v79; // [esp-10h] [ebp-164h]
    int v80; // [esp-Ch] [ebp-160h]
    __int16 v81; // [esp-8h] [ebp-15Ch]
    unsigned __int8 *p_WarheadTypeClass_field_0x24; // [esp-4h] [ebp-158h]
    double v83; // [esp+0h] [ebp-154h]
    char *v84; // [esp+18h] [ebp-13Ch] BYREF
    TypeList v85; // [esp+1Ch] [ebp-138h] BYREF
    DynamicVector v86; // [esp+38h] [ebp-11Ch] BYREF
    char Destination[128]; // [esp+D4h] [ebp-80h] BYREF

    _ESI = this; /*0x75d3b1*/
    INIClass::ResetSection((INIClass *)a2); /*0x75d3b5*/
    if ( !INIClass::BinarySearchSection(a2, (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24) ) /*0x75d3c0*/
      return 0; /*0x75deb2*/
    __asm { fld dword ptr [esi+124h] } /*0x75d3d2*/
    __asm { fstp [esp+154h+var_154]; double }
    INIClass::ReadDouble_Overwrite((double *)a2, (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24, aCellspread, v83); /*0x75d3e6*/
    __asm { fstp dword ptr [esi+124h] } /*0x75d3eb*/
    *(float *)_ESI->__pad_124 = _ET1; /*0x75d3eb*/
    __asm { fld dword ptr [esi+128h] } /*0x75d3f1*/
    __asm { fstp [esp+154h+var_154]; double }
    INIClass::ReadDouble_Overwrite((double *)a2, (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24, aCellinset, v83); /*0x75d405*/
    __asm { fstp dword ptr [esi+128h] } /*0x75d40a*/
    *(float *)&_ESI->__pad_124[4] = _ET1; /*0x75d40a*/
    __asm { fld dword ptr [esi+12Ch] } /*0x75d410*/
    __asm { fstp [esp+154h+var_154]; double }
    INIClass::ReadDouble_Overwrite( /*0x75d424*/
      (double *)a2,
      (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
      aPercentatmax,
      v83);
    __asm { fstp dword ptr [esi+12Ch] } /*0x75d429*/
    *(float *)&_ESI->__pad_124[8] = _ET1; /*0x75d429*/
    _ESI->__pad_124[12] = INIClass::ReadBool_Overwrite( /*0x75d443*/
                            (int *)a2,
                            (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                            aCausesdelaykil,
                            _ESI->__pad_124[12]);
    *(unsigned int *)&_ESI->__pad_124[16] = INIClass::ReadInt_Overwrite( /*0x75d45d*/
                                        (bool *)a2,
                                        (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                                        aDelaykillframe,
                                        *(unsigned int *)&_ESI->__pad_124[16]);
    __asm { fld dword ptr [esi+138h] } /*0x75d466*/
    __asm { fstp [esp+154h+var_154]; double }
    INIClass::ReadDouble_Overwrite( /*0x75d477*/
      (double *)a2,
      (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
      aDelaykillatmax,
      v83);
    __asm { fstp dword ptr [esi+138h] } /*0x75d47c*/
    *(float *)&_ESI->__pad_124[20] = _ET1; /*0x75d47c*/
    __asm { fld dword ptr [esi+13Ch] } /*0x75d482*/
    __asm { fstp [esp+154h+var_154]; double }
    INIClass::ReadDouble_Overwrite( /*0x75d496*/
      (double *)a2,
      (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
      aCombatlightsiz,
      v83);
    __asm { fstp dword ptr [esi+13Ch] } /*0x75d49b*/
    *(float *)&_ESI->__pad_124[24] = _ET1; /*0x75d49b*/
    WarheadTypeClass_field_0x140 = _ESI->WarheadTypeClass_field_0x140; /*0x75d4a1*/
    if ( INIClass::GetString( /*0x75d4be*/
           (INIClass *)a2,
           (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
           (unsigned __int8 *)((char *)&g_INI_Key_Special + 8),
           &g_INI_DefaultBuffer,
           (char *)&v86.DynamicVector_field_0x1C,
           128) )
    {
      v9 = BuildingTypeClass::LoadOrGet((char *)&v86.DynamicVector_field_0x1C); /*0x75d4cb*/
    }
    else
    {
      v9 = WarheadTypeClass_field_0x140; /*0x75d4d2*/
    }
    _ESI->WarheadTypeClass_field_0x140 = v9; /*0x75d4d4*/
    _ESI->Conventional[0] = INIClass::ReadBool_Overwrite( /*0x75d4ee*/
                              (int *)a2,
                              (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                              aConventional,
                              _ESI->Conventional[0]);
    _ESI->__pad_144[0] = INIClass::ReadBool_Overwrite( /*0x75d508*/
                           (int *)a2,
                           (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                           g_INI_Key_Wall,
                           _ESI->__pad_144[0]);
    _ESI->__pad_144[1] = INIClass::ReadBool_Overwrite( /*0x75d522*/
                           (int *)a2,
                           (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                           aWallabsolutede,
                           _ESI->__pad_144[1]);
    _ESI->__pad_144[2] = INIClass::ReadBool_Overwrite( /*0x75d53c*/
                           (int *)a2,
                           (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                           aPenetratesbunk,
                           _ESI->__pad_144[2]);
    _ESI->__pad_144[3] = INIClass::ReadBool_Overwrite( /*0x75d556*/
                           (int *)a2,
                           (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                           aWood,
                           _ESI->__pad_144[3]);
    _ESI->__pad_144[4] = INIClass::ReadBool_Overwrite( /*0x75d570*/
                           (int *)a2,
                           (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                           (unsigned __int8 *)g_INI_Key_Tiberium,
                           _ESI->__pad_144[4]);
    _ESI->WarheadTypeClass_field_bool_149[1] = INIClass::ReadBool_Overwrite( /*0x75d58a*/
                                                 (int *)a2,
                                                 (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                                                 aSparky,
                                                 _ESI->WarheadTypeClass_field_bool_149[1]);
    _ESI->WarheadTypeClass_field_bool_149[2] = INIClass::ReadBool_Overwrite( /*0x75d5a4*/
                                                 (int *)a2,
                                                 (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                                                 aSonic,
                                                 _ESI->WarheadTypeClass_field_bool_149[2]);
    _ESI->Conventional[1] = INIClass::ReadBool_Overwrite( /*0x75d5be*/
                              (int *)a2,
                              (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                              aRocker,
                              _ESI->Conventional[1]);
    _ESI->Conventional[2] = INIClass::ReadBool_Overwrite( /*0x75d5d8*/
                              (int *)a2,
                              (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                              aDirectrocker,
                              _ESI->Conventional[2]);
    _ESI->WarheadTypeClass_field_bool_149[3] = INIClass::ReadBool_Overwrite( /*0x75d5f2*/
                                                 (int *)a2,
                                                 (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                                                 g_INI_Key_Fire,
                                                 _ESI->WarheadTypeClass_field_bool_149[3]);
    _ESI->Conventional[3] = INIClass::ReadBool_Overwrite( /*0x75d60c*/
                              (int *)a2,
                              (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                              aBright,
                              _ESI->Conventional[3]);
    _ESI->CLDisableRed[0] = INIClass::ReadBool_Overwrite( /*0x75d626*/
                              (int *)a2,
                              (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                              aCldisablered,
                              _ESI->CLDisableRed[0]);
    _ESI->CLDisableRed[1] = INIClass::ReadBool_Overwrite( /*0x75d640*/
                              (int *)a2,
                              (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                              aCldisablegreen,
                              _ESI->CLDisableRed[1]);
    _ESI->CLDisableRed[2] = INIClass::ReadBool_Overwrite( /*0x75d65a*/
                              (int *)a2,
                              (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                              aCldisableblue,
                              _ESI->CLDisableRed[2]);
    if ( INIClass::GetString( /*0x75d677*/
           (INIClass *)a2,
           (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
           aAnimlist,
           &g_INI_DefaultBuffer,
           (char *)&v86.DynamicVector_field_0x1C,
           128) )
    {
      DynamicVectorClass::AnimTypeConstructor((DynamicVectorClass *)&v86, 0, 0); /*0x75d68c*/
      *(unsigned int *)v86.__pad_0 = (unsigned int)(void *)&TypeList_AnimTypeClass_const___vftable; /*0x75d69b*/
      for ( i = strtok((char *)&v86.DynamicVector_field_0x1C, Str); i; i = strtok(0, Str) ) /*0x75d6ad*/
      {
        if ( !*i ) /*0x75d6af*/
          break; /*0x75d6b2*/
        v84 = (char *)AnimTypeClass::FindOrCreate(i); /*0x75d6bd*/
        if ( v84 ) /*0x75d6c1*/
          DynamicVector::Add_Alt4(&v86, &v84); /*0x75d6cc*/
      }
      TypeList::AnimTypeCopy(&v85, &v86); /*0x75d6ed*/
      *(unsigned int *)v86.__pad_0 = (unsigned int)(void *)&VectorClass_AnimTypeClass_const___vftable; /*0x75d6f6*/
      DynamicVectorClass::Destroy_Alt((_VectorClass_PBVAnimTypeClass *)&v86); /*0x75d6fe*/
    }
    else
    {
      TypeList::AnimTypeCopy(&v85, _ESI->__pad_104); /*0x75d710*/
    }
    VectorClass::CopyDefault((VectorClass *)_ESI->__pad_104, &v85); /*0x75d722*/
    CapacityIncrement = v85.CapacityIncrement; /*0x75d72b*/
    unknown_18 = v85.unknown_18; /*0x75d72f*/
    _ESI->WarheadTypeClass_field_0x114 = v85.Count; /*0x75d733*/
    Items = v85.Items; /*0x75d736*/
    *(unsigned int *)_ESI->__pad_118 = CapacityIncrement; /*0x75d73a*/
    *(unsigned int *)&_ESI->__pad_118[4] = unknown_18; /*0x75d73f*/
    v85.DynamicVectorClass = (unsigned int)(void *)&VectorClass_AnimTypeClass_const___vftable; /*0x75d742*/
    if ( Items && v85.IsAllocated ) /*0x75d752*/
      RA2_OPDEL(Items); /*0x75d755*/
    _ESI->WarheadTypeClass_field_0x120 = INIClass::ReadInt_Overwrite( /*0x75d771*/
                                           (bool *)a2,
                                           (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                                           aInfdeath,
                                           _ESI->WarheadTypeClass_field_0x120);
    INIClass::ReadDouble_Overwrite( /*0x75d78d*/
      (double *)a2,
      (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
      aDeform,
      *(double *)&_ESI->__pad_44[84]);
    __asm { fstp qword ptr [esi+98h] } /*0x75d792*/
    *(double *)&_ESI->__pad_44[84] = _RT1; /*0x75d792*/
    Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x75d7a7*/
                      (bool *)a2,
                      (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                      aDeformthreshho,
                      _ESI->WarheadTypeClass_field_0x100);
    v16 = _ESI->CLDisableRed[3]; /*0x75d7ac*/
    _ESI->WarheadTypeClass_field_0x100 = Int_Overwrite; /*0x75d7b2*/
    Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x75d7c1*/
                       (int *)a2,
                       (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                       aEmeffect,
                       v16);
    IDA_BYTE4(v83) = _ESI->MindControl[0]; /*0x75d7ce*/
    IDA_LODWORD(v83) = aMindcontrol; /*0x75d7cf*/
    p_WarheadTypeClass_field_0x24 = (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24; /*0x75d7d4*/
    _ESI->CLDisableRed[3] = Bool_Overwrite; /*0x75d7d5*/
    _ESI->MindControl[0] = INIClass::ReadBool_Overwrite( /*0x75d7e0*/
                             (int *)a2,
                             p_WarheadTypeClass_field_0x24,
                             (unsigned __int8 *)IDA_LODWORD(v83),
                             SBYTE4(v83));
    v18 = INIClass::ReadBool_Overwrite( /*0x75d7f5*/
            (int *)a2,
            (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
            aPoison,
            _ESI->MindControl[1]);
    v19 = _ESI->MindControl[2]; /*0x75d7fa*/
    _ESI->MindControl[1] = v18; /*0x75d800*/
    v20 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24, aIvanbomb, v19); /*0x75d80f*/
    IDA_BYTE4(v83) = _ESI->MindControl[3]; /*0x75d81c*/
    IDA_LODWORD(v83) = aElectricassaul; /*0x75d81d*/
    p_WarheadTypeClass_field_0x24 = (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24; /*0x75d822*/
    _ESI->MindControl[2] = v20; /*0x75d823*/
    _ESI->MindControl[3] = INIClass::ReadBool_Overwrite( /*0x75d82e*/
                             (int *)a2,
                             p_WarheadTypeClass_field_0x24,
                             (unsigned __int8 *)IDA_LODWORD(v83),
                             SBYTE4(v83));
    v21 = INIClass::ReadBool_Overwrite( /*0x75d843*/
            (int *)a2,
            (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
            aParasite,
            _ESI->Parasite[0]);
    v22 = _ESI->Parasite[1]; /*0x75d848*/
    _ESI->Parasite[0] = v21; /*0x75d84e*/
    v23 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24, aTemporal, v22); /*0x75d85d*/
    IDA_BYTE4(v83) = _ESI->Parasite[2]; /*0x75d86a*/
    IDA_LODWORD(v83) = aIslocomotor; /*0x75d86b*/
    p_WarheadTypeClass_field_0x24 = (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24; /*0x75d870*/
    _ESI->Parasite[1] = v23; /*0x75d871*/
    _ESI->Parasite[2] = INIClass::ReadBool_Overwrite( /*0x75d87c*/
                          (int *)a2,
                          p_WarheadTypeClass_field_0x24,
                          (unsigned __int8 *)IDA_LODWORD(v83),
                          SBYTE4(v83));
    GUID_Overwrite = (unsigned int *)INIClass::ReadGUID_Overwrite( /*0x75d8b2*/
                                 a2,
                                 (int)&v86,
                                 (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
                                 (unsigned __int8 *)&g_INI_Key_TRUCKA.__pad_1624[92],
                                 *(unsigned int *)&_ESI->Parasite[3],
                                 *(unsigned int *)&_ESI->__pad_15D[3],
                                 *(unsigned int *)&_ESI->__pad_15D[7],
                                 *(unsigned int *)&_ESI->__pad_15D[11]);
    *(unsigned int *)&_ESI->Parasite[3] = *GUID_Overwrite; /*0x75d8b9*/
    v25 = GUID_Overwrite[1]; /*0x75d8bb*/
    *(unsigned int *)&_ESI->__pad_15D[3] = v25; /*0x75d8be*/
    IDA_LOBYTE(v25) = _ESI->Airstrike; /*0x75d8c1*/
    v26 = GUID_Overwrite[2]; /*0x75d8c7*/
    IDA_HIDWORD(v83) = v25; /*0x75d8ca*/
    *(unsigned int *)&_ESI->__pad_15D[7] = v26; /*0x75d8cb*/
    IDA_LODWORD(v83) = aAirstrike; /*0x75d8ce*/
    v27 = GUID_Overwrite[3]; /*0x75d8d3*/
    p_WarheadTypeClass_field_0x24 = (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24; /*0x75d8d6*/
    *(unsigned int *)&_ESI->__pad_15D[11] = v27; /*0x75d8d9*/
    v28 = INIClass::ReadBool_Overwrite( /*0x75d8dc*/
            (int *)a2,
            p_WarheadTypeClass_field_0x24,
            (unsigned __int8 *)IDA_LODWORD(v83),
            SBYTE4(v83));
    IDA_BYTE4(v83) = IDA_BYTE1(_ESI->Airstrike); /*0x75d8e9*/
    IDA_LODWORD(v83) = aPsychedelic; /*0x75d8ea*/
    p_WarheadTypeClass_field_0x24 = (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24; /*0x75d8ef*/
    IDA_LOBYTE(_ESI->Airstrike) = v28; /*0x75d8f0*/
    IDA_BYTE1(_ESI->Airstrike) = INIClass::ReadBool_Overwrite( /*0x75d8fb*/
                               (int *)a2,
                               p_WarheadTypeClass_field_0x24,
                               (unsigned __int8 *)IDA_LODWORD(v83),
                               SBYTE4(v83));
    v29 = INIClass::ReadBool_Overwrite( /*0x75d910*/
            (int *)a2,
            (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
            aBombdisarm,
            IDA_BYTE2(_ESI->Airstrike));
    Paralyzes = _ESI->Paralyzes; /*0x75d915*/
    IDA_BYTE2(_ESI->Airstrike) = v29; /*0x75d91b*/
    v31 = INIClass::ReadInt_Overwrite( /*0x75d92a*/
            (bool *)a2,
            (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
            aParalyzes,
            Paralyzes);
    IDA_BYTE4(v83) = _ESI->Culling; /*0x75d937*/
    IDA_LODWORD(v83) = aCulling; /*0x75d938*/
    p_WarheadTypeClass_field_0x24 = (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24; /*0x75d93d*/
    _ESI->Paralyzes = v31; /*0x75d93e*/
    IDA_LOBYTE(_ESI->Culling) = INIClass::ReadBool_Overwrite( /*0x75d949*/
                              (int *)a2,
                              p_WarheadTypeClass_field_0x24,
                              (unsigned __int8 *)IDA_LODWORD(v83),
                              SBYTE4(v83));
    v32 = INIClass::ReadBool_Overwrite( /*0x75d95e*/
            (int *)a2,
            (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
            aMakesdisguise,
            IDA_BYTE1(_ESI->Culling));
    v33 = IDA_BYTE2(_ESI->Culling); /*0x75d963*/
    IDA_BYTE1(_ESI->Culling) = v32; /*0x75d969*/
    v34 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24, aNukemaker, v33); /*0x75d978*/
    IDA_HIDWORD(v35) = *(unsigned int *)_ESI->__pad_FC; /*0x75d97d*/
    IDA_BYTE2(_ESI->Culling) = v34; /*0x75d983*/
    IDA_LODWORD(v35) = _ESI->WarheadTypeClass_field_0xF8; /*0x75d989*/
    INIClass::ReadDouble_Overwrite((double *)a2, (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24, aPronedamage, v35); /*0x75d999*/
    Culling_high = IDA_HIBYTE(_ESI->Culling); /*0x75d99e*/
    __asm { fstp qword ptr [esi+0F8h] } /*0x75d9a4*/
    *(double *)&_ESI->WarheadTypeClass_field_0xF8 = _RT1; /*0x75d9a4*/
    v38 = INIClass::ReadBool_Overwrite( /*0x75d9b3*/
            (int *)a2,
            (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
            aRadiation,
            Culling_high);
    IDA_BYTE4(v83) = _ESI->PsychicDamage; /*0x75d9c0*/
    IDA_LODWORD(v83) = aPsychicdamage; /*0x75d9c1*/
    p_WarheadTypeClass_field_0x24 = (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24; /*0x75d9c6*/
    IDA_HIBYTE(_ESI->Culling) = v38; /*0x75d9c7*/
    IDA_LOBYTE(_ESI->PsychicDamage) = INIClass::ReadBool_Overwrite( /*0x75d9d2*/
                                    (int *)a2,
                                    p_WarheadTypeClass_field_0x24,
                                    (unsigned __int8 *)IDA_LODWORD(v83),
                                    SBYTE4(v83));
    v39 = INIClass::ReadBool_Overwrite( /*0x75d9e7*/
            (int *)a2,
            (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
            aAffectsallies,
            IDA_BYTE1(_ESI->PsychicDamage));
    v40 = IDA_BYTE2(_ESI->PsychicDamage); /*0x75d9ec*/
    IDA_BYTE1(_ESI->PsychicDamage) = v39; /*0x75d9f2*/
    v41 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24, aBullets, v40); /*0x75da01*/
    IDA_BYTE4(v83) = IDA_HIBYTE(_ESI->PsychicDamage); /*0x75da0e*/
    IDA_LODWORD(v83) = aVeinhole; /*0x75da0f*/
    p_WarheadTypeClass_field_0x24 = (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24; /*0x75da14*/
    IDA_BYTE2(_ESI->PsychicDamage) = v41; /*0x75da15*/
    IDA_HIBYTE(_ESI->PsychicDamage) = INIClass::ReadBool_Overwrite( /*0x75da20*/
                                    (int *)a2,
                                    p_WarheadTypeClass_field_0x24,
                                    (unsigned __int8 *)IDA_LODWORD(v83),
                                    SBYTE4(v83));
    v42 = INIClass::ReadInt_Overwrite( /*0x75da35*/
            (bool *)a2,
            (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
            aShakexlo,
            _ESI->WarheadTypeClass_field_0x17C);
    WarheadTypeClass_field_0x180 = _ESI->WarheadTypeClass_field_0x180; /*0x75da3a*/
    _ESI->WarheadTypeClass_field_0x17C = v42; /*0x75da40*/
    v44 = INIClass::ReadInt_Overwrite( /*0x75da4f*/
            (bool *)a2,
            (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
            aShakexhi,
            WarheadTypeClass_field_0x180);
    IDA_HIDWORD(v83) = _ESI->WarheadTypeClass_field_0x184; /*0x75da5c*/
    IDA_LODWORD(v83) = aShakeylo; /*0x75da5d*/
    p_WarheadTypeClass_field_0x24 = (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24; /*0x75da62*/
    _ESI->WarheadTypeClass_field_0x180 = v44; /*0x75da63*/
    _ESI->WarheadTypeClass_field_0x184 = INIClass::ReadInt_Overwrite( /*0x75da6e*/
                                           (bool *)a2,
                                           p_WarheadTypeClass_field_0x24,
                                           (unsigned __int8 *)IDA_LODWORD(v83),
                                           IDA_SHIDWORD(v83));
    v45 = INIClass::ReadInt_Overwrite( /*0x75da83*/
            (bool *)a2,
            (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
            aShakeyhi,
            _ESI->WarheadTypeClass_field_0x188);
    v46 = _ESI->WarheadTypeClass_field_0x1C4[0]; /*0x75da88*/
    _ESI->WarheadTypeClass_field_0x188 = v45; /*0x75da8e*/
    v47 = INIClass::ReadInt_Overwrite( /*0x75da9d*/
            (bool *)a2,
            (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
            (unsigned __int8 *)&g_INI_Key_TRUCKA.__pad_1584[76],
            v46);
    IDA_HIDWORD(v83) = _ESI->WarheadTypeClass_field_0x1C8[0]; /*0x75daaa*/
    IDA_LODWORD(v83) = &g_INI_Key_TRUCKA.__pad_1584[64]; /*0x75daab*/
    p_WarheadTypeClass_field_0x24 = (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24; /*0x75dab0*/
    _ESI->WarheadTypeClass_field_0x1C4[0] = v47; /*0x75dab1*/
    v48 = INIClass::ReadInt_Overwrite( /*0x75dab7*/
            (bool *)a2,
            p_WarheadTypeClass_field_0x24,
            (unsigned __int8 *)IDA_LODWORD(v83),
            IDA_SHIDWORD(v83));
    _ESI->WarheadTypeClass_field_0x1C8[0] = v48; /*0x75dabe*/
    if ( v48 < 0 ) /*0x75dac4*/
      _ESI->WarheadTypeClass_field_0x1C8[0] = 0; /*0x75dac6*/
    v49 = _ESI->WarheadTypeClass_field_0x1C8[0]; /*0x75dad0*/
    if ( _ESI->WarheadTypeClass_field_0x1C4[0] < v49 ) /*0x75dade*/
      _ESI->WarheadTypeClass_field_0x1C4[0] = v49; /*0x75dae0*/
    if ( INIClass::GetString( /*0x75dafd*/
           (INIClass *)a2,
           (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
           (unsigned __int8 *)&g_INI_Key_TRUCKA.__pad_1584[52],
           &g_INI_DefaultBuffer,
           (char *)&v86.DynamicVector_field_0x1C,
           128) )
    {
      DynamicVector::Constructor_VoxelAnim(&v86, 0, 0); /*0x75db12*/
      *(unsigned int *)v86.__pad_0 = (unsigned int)(void *)&TypeList_VoxelAnimTypeClass_const___vftable; /*0x75db21*/
      for ( j = strtok((char *)&v86.DynamicVector_field_0x1C, Str); j; j = strtok(0, Str) ) /*0x75db33*/
      {
        if ( !*j ) /*0x75db35*/
          break; /*0x75db38*/
        v51 = UnitTypeClass::FindOrCreate(j); /*0x75db41*/
        if ( v51 /*0x75db74*/
          && ((int)v86.DynamicVector_field_0x10 < v86.DynamicVector_field_0x8
           || (v86.vtable4[1] || !v86.DynamicVector_field_0x8)
           && *(int *)v86.__pad_14 > 0
           && (*(unsigned __int8 (__thiscall **)(DynamicVector *, int, unsigned int))(*(unsigned int *)v86.__pad_0 + 8))(
                &v86,
                v86.DynamicVector_field_0x8 + *(unsigned int *)v86.__pad_14,
                0)) )
        {
          v52 = v86.DynamicVector_field_0x10++; /*0x75db7f*/
          *(unsigned int *)(*(unsigned int *)&v86.DynamicVector_field_0x1[3] + 4 * (unsigned int)v52) = v51; /*0x75db8a*/
        }
      }
      Voxel_Section::Constructor((Voxel_Section *)&v85, &v86); /*0x75dba9*/
      v85.DynamicVectorClass = (unsigned int)(void *)&TypeList_VoxelAnimTypeClass_const___vftable; /*0x75dbb2*/
      *(unsigned int *)v86.__pad_0 = (unsigned int)(void *)&VectorClass_VoxelAnimTypeClass_const___vftable; /*0x75dbba*/
      Vector::Cleanup2((_VectorClass_PBVVoxelAnimTypeClass *)&v86); /*0x75dbc2*/
    }
    else
    {
      Voxel_Section::Constructor((Voxel_Section *)&v85, _ESI->DebrisTypes); /*0x75dbd4*/
      v85.DynamicVectorClass = (unsigned int)(void *)&TypeList_VoxelAnimTypeClass_const___vftable; /*0x75dbd9*/
    }
    if ( _ESI->DebrisTypes != (int *)&v85 ) /*0x75dbed*/
    {
      (*(void (__thiscall **)(int *))(_ESI->DebrisTypes[0] + 12))(_ESI->DebrisTypes); /*0x75dbf3*/
      Capacity = v85.Capacity; /*0x75dbf6*/
      v54 = v85.Capacity == 0; /*0x75dbfa*/
      _ESI->MaxDebris = v85.Capacity; /*0x75dbfc*/
      if ( v54 ) /*0x75dbff*/
      {
        _ESI->WarheadTypeClass_field_0x190[0] = 0; /*0x75dc38*/
        IDA_BYTE1(_ESI->MinDebris) = 0; /*0x75dc3f*/
      }
      else
      {
        v55 = RA2_OPNEW(4 * Capacity); /*0x75dc05*/
        _ESI->WarheadTypeClass_field_0x190[0] = v55; /*0x75dc0d*/
        if ( v55 ) /*0x75dc12*/
        {
          MaxDebris = _ESI->MaxDebris; /*0x75dc14*/
          v57 = 0; /*0x75dc17*/
          IDA_BYTE1(_ESI->MinDebris) = 1; /*0x75dc1b*/
          if ( MaxDebris > 0 ) /*0x75dc1f*/
          {
            do /*0x75dc34*/
            {
              *(unsigned int *)(_ESI->WarheadTypeClass_field_0x190[0] + 4 * v57) = *((unsigned int *)v85.Items + v57); /*0x75dc2b*/
              ++v57; /*0x75dc31*/
            }
            while ( v57 < _ESI->MaxDebris ); /*0x75dc34*/
          }
        }
      }
    }
    v58 = v85.Count; /*0x75dc47*/
    v59 = v85.unknown_18; /*0x75dc4b*/
    _ESI->unused_1CC[0] = v85.CapacityIncrement; /*0x75dc4f*/
    v60 = v85.unknown_18; /*0x75dc52*/
    *(unsigned int *)_ESI->__pad_1A0 = v58; /*0x75dc56*/
    *(unsigned int *)&_ESI->__pad_1A0[4] = v59; /*0x75dc5b*/
    v85.DynamicVectorClass = (unsigned int)(void *)&VectorClass_VoxelAnimTypeClass_const___vftable; /*0x75dc5e*/
    if ( v60 && v85.IsAllocated ) /*0x75dc6e*/
      RA2_OPDEL(v60); /*0x75dc71*/
    v79 = 0; /*0x75dc88*/
    v80 = 0; /*0x75dc8b*/
    v81 = 1; /*0x75dc8e*/
    v78 = (unsigned int)(void *)&VectorClass_int_vftable; /*0x75dc95*/
    if ( &v78 != (void ***)&_ESI->__pad_1A0[8] ) /*0x75dc9b*/
    {
      VectorClass::Destroy((int)&v78); /*0x75dc9f*/
      v80 = *(unsigned int *)_ESI->__pad_1B0; /*0x75dcad*/
      if ( v80 ) /*0x75dcb0*/
      {
        v79 = (unsigned int *)RA2_OPNEW(4 * v80); /*0x75dcbe*/
        if ( v79 ) /*0x75dcc3*/
        {
          v61 = 0; /*0x75dcc8*/
          for ( IDA_HIBYTE(v81) = 1; v61 < v80; ++v61 ) /*0x75dcd0*/
            v79[v61] = *((unsigned int *)&_ESI->WarheadTypeClass_field_0x1AC->AbstractClass + v61); /*0x75dcde*/
        }
      }
      else
      {
        v79 = 0; /*0x75dceb*/
        IDA_HIBYTE(v81) = 0; /*0x75dcf2*/
      }
    }
    p_WarheadTypeClass_field_0x24 = *(unsigned __int8 **)&_ESI->__pad_1B0[8]; /*0x75dd01*/
    IDA_LODWORD(v83) = _ESI->WarheadTypeClass_field_0x1BC[0]; /*0x75dd0c*/
    v78 = (unsigned int)(void *)&TypeList_int_vftable; /*0x75dd0f*/
    inited = (unsigned __int8 *)__0Iostream_init_QAE_XZ_4((Iostream_init *)&_ESI->WarheadTypeClass_field_0x24); /*0x75dd15*/
    IntList = (char *)INIClass::ReadIntList( /*0x75dd22*/
                        (INIClass *)a2,
                        (int)&v85,
                        inited,
                        (unsigned __int8 *)&g_INI_Key_TRUCKA.__pad_1584[36],
                        v78,
                        v79,
                        v80,
                        v81,
                        (int)p_WarheadTypeClass_field_0x24,
                        IDA_SLODWORD(v83),
                        IDA_SHIDWORD(v83));
    v84 = IntList; /*0x75dd2d*/
    if ( &_ESI->__pad_1A0[8] != IntList ) /*0x75dd33*/
    {
      (*(void (__thiscall **)(char *))(*(unsigned int *)&_ESI->__pad_1A0[8] + 12))(&_ESI->__pad_1A0[8]); /*0x75dd39*/
      v64 = *((unsigned int *)v84 + 2); /*0x75dd40*/
      *(unsigned int *)_ESI->__pad_1B0 = v64; /*0x75dd45*/
      if ( v64 ) /*0x75dd48*/
      {
        v65 = RA2_OPNEW(4 * v64); /*0x75dd52*/
        _ESI->WarheadTypeClass_field_0x1AC = (CampaignClass *)v65; /*0x75dd5a*/
        if ( v65 ) /*0x75dd5f*/
        {
          v66 = *(unsigned int *)_ESI->__pad_1B0; /*0x75dd61*/
          v67 = 0; /*0x75dd64*/
          _ESI->__pad_1B0[5] = 1; /*0x75dd68*/
          if ( v66 > 0 ) /*0x75dd6c*/
          {
            do /*0x75dd86*/
            {
              ++v67; /*0x75dd72*/
              *((unsigned int *)_ESI->WarheadTypeClass_field_0x1AC + v67 - 1) = *(unsigned int *)(*((unsigned int *)v84 + 1) + 4 * v67 - 4); /*0x75dd7d*/
            }
            while ( v67 < *(unsigned int *)_ESI->__pad_1B0 ); /*0x75dd86*/
          }
        }
      }
      else
      {
        _ESI->WarheadTypeClass_field_0x1AC = 0; /*0x75dd8a*/
        _ESI->__pad_1B0[5] = 0; /*0x75dd91*/
      }
      IntList = v84; /*0x75dd95*/
    }
    *(unsigned int *)&_ESI->__pad_1B0[8] = *((unsigned int *)IntList + 4); /*0x75dd9c*/
    _ESI->WarheadTypeClass_field_0x1BC[0] = *((unsigned int *)IntList + 5); /*0x75dda2*/
    v68 = *((unsigned int *)IntList + 6); /*0x75dda5*/
    v69 = v85.Items; /*0x75dda8*/
    *(unsigned int *)_ESI->__pad_1C0 = v68; /*0x75ddac*/
    v85.DynamicVectorClass = (unsigned int)(void *)&VectorClass_int_vftable; /*0x75ddb1*/
    if ( v69 && v85.IsAllocated ) /*0x75ddc1*/
      RA2_OPDEL(v69); /*0x75ddc4*/
    if ( INIClass::GetString( /*0x75dde6*/
           (INIClass *)a2,
           (unsigned __int8 *)&_ESI->WarheadTypeClass_field_0x24,
           aVerses,
           a10010010010010,
           Destination,
           128) )
    {
      v70 = strtok(Destination, Str); /*0x75de04*/
      v71 = (double *)&_ESI->__pad_44[92]; /*0x75de06*/
      v72 = 11; /*0x75de0c*/
      do /*0x75de58*/
      {
        v73 = strchr(v70, 37); /*0x75de14*/
        IDA_HIDWORD(v83) = v70; /*0x75de1e*/
        if ( v73 ) /*0x75de1f*/
        {
          v84 = (char *)atoi((const char *)IDA_HIDWORD(v83)); /*0x75de26*/
          __asm /*0x75de2d*/
          {
            fild [esp+14Ch+var_13C]
            fmul ds:dbl_7E3808
          }
        }
        else
        {
          atof((const char *)IDA_HIDWORD(v83)); /*0x75de39*/
        }
        IDA_HIDWORD(v83) = Str; /*0x75de41*/
        IDA_LODWORD(v83) = 0; /*0x75de46*/
        __asm { fstp qword ptr [ebx] } /*0x75de48*/
        *v71++ = _RT1; /*0x75de48*/
        --v72; /*0x75de55*/
        v70 = strtok((char *)IDA_LODWORD(v83), (const char *)IDA_HIDWORD(v83)); /*0x75de56*/
      }
      while ( v72 ); /*0x75de58*/
    }
    __asm /*0x75de5a*/
    {
      fld qword ptr [esi+0C0h]
      fcomp ds:dbl_7E2800
      fnstsw ax
    }
    if ( (_AX & 0x4000) == 0 ) /*0x75de6b*/
      goto LABEL_70; /*0x75de6b*/
    __asm /*0x75de6d*/
    {
      fld qword ptr [esi+0D0h]
      fcomp ds:dbl_7E2800
      fnstsw ax
    }
    if ( (_AX & 0x4000) != 0 ) /*0x75de7e*/
    {
      _ESI->WarheadTypeClass_field_bool_149[0] = 1; /*0x75de85*/
      return 1; /*0x75de80*/
    }
    else
    {
  LABEL_70:
      _ESI->WarheadTypeClass_field_bool_149[0] = 0; /*0x75de9a*/
      return 1; /*0x75de98*/
    }
}
} // namespace gamemd

// 0x75E6B0
namespace gamemd {
void Voxel_Section::Constructor()
{
    int v3; // eax
    int v4; // eax
    int v5; // ecx
    int v6; // eax

    this->Voxel_Section_field_0x04 = 0; /*0x75e6bd*/
    *((unsigned int *)this + 2) = 0; /*0x75e6c0*/
    *((unsigned char *)this + 12) = 1; /*0x75e6c3*/
    *((unsigned char *)this + 13) = 0; /*0x75e6c7*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void *)&VectorClass_VoxelAnimTypeClass_const___vftable; /*0x75e6ca*/
    if ( this != (Voxel_Section *)a2 ) /*0x75e6d0*/
    {
      Vector::Cleanup2((_VectorClass_PBVVoxelAnimTypeClass *)this); /*0x75e6d2*/
      v3 = a2[2]; /*0x75e6d8*/
      *((unsigned int *)this + 2) = v3; /*0x75e6dd*/
      if ( v3 ) /*0x75e6e0*/
      {
        v4 = RA2_OPNEW(4 * v3); /*0x75e6e6*/
        this->Voxel_Section_field_0x04 = v4; /*0x75e6f0*/
        if ( v4 ) /*0x75e6f3*/
        {
          v5 = *((unsigned int *)this + 2); /*0x75e6f5*/
          v6 = 0; /*0x75e6f8*/
          *((unsigned char *)this + 13) = 1; /*0x75e6fc*/
          if ( v5 > 0 ) /*0x75e700*/
          {
            do /*0x75e714*/
            {
              *(unsigned int *)(this->Voxel_Section_field_0x04 + 4 * v6) = *(unsigned int *)(a2[1] + 4 * v6); /*0x75e70b*/
              ++v6; /*0x75e711*/
            }
            while ( v6 < *((unsigned int *)this + 2) ); /*0x75e714*/
          }
        }
      }
      else
      {
        this->Voxel_Section_field_0x04 = 0; /*0x75e718*/
        *((unsigned char *)this + 13) = 0; /*0x75e71b*/
      }
    }
    *((unsigned int *)this + 4) = a2[4]; /*0x75e721*/
    *((unsigned int *)this + 5) = a2[5]; /*0x75e727*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void *)&DynamicVectorClass_VoxelAnimTypeClass_const___vftable; /*0x75e72a*/
    return this->__pad_0; /*0x75e732*/
}
} // namespace gamemd

// 0x7BA610
namespace gamemd {
void XSurface_DrawLineEx_raw(int a2, unsigned int *a3, unsigned int *a4, int16_t a5)
{
    int *v6; // eax
    int *v7; // eax
    int v8; // ecx
    int v9; // eax
    int v10; // eax
    int v11; // ecx
    int v12; // ebp
    __int16 *v13; // edi
    int v14; // edx
    unsigned int v15; // esi
    int v16; // eax
    int i; // eax
    int v19; // ecx
    int v20; // eax
    int v21; // edx
    int v22; // esi
    int v23; // ebp
    int v24; // eax
    int v25; // eax
    int v26; // esi
    int v27; // eax
    int v28; // ecx
    int v29; // eax
    __int16 v30; // dx
    int v31; // edx
    int v32; // ecx
    __int16 v33; // ax
    int v34; // [esp+10h] [ebp-44h]
    int v35; // [esp+14h] [ebp-40h] BYREF
    int v36; // [esp+18h] [ebp-3Ch]
    int v37; // [esp+1Ch] [ebp-38h] BYREF
    int v38; // [esp+20h] [ebp-34h]
    int v39; // [esp+24h] [ebp-30h] BYREF
    int v40; // [esp+28h] [ebp-2Ch]
    int v41; // [esp+2Ch] [ebp-28h]
    int v42; // [esp+30h] [ebp-24h]
    unsigned char v43[16]; // [esp+34h] [ebp-20h] BYREF
    int v44[4]; // [esp+44h] [ebp-10h] BYREF
    int v45; // [esp+58h] [ebp+4h]
    unsigned int *v46; // [esp+5Ch] [ebp+8h]
    int v47; // [esp+60h] [ebp+Ch]

    v6 = (int *)(*(int (__thiscall **)(XSurface *, unsigned char *))(*(unsigned int *)this->Surface + 120))(this, v43); /*0x7ba622*/
    v7 = ClipRectIntersection(v44, (int *)a2, v6, 0, 0); /*0x7ba632*/
    v39 = *v7; /*0x7ba639*/
    v40 = v7[1]; /*0x7ba640*/
    v41 = v7[2]; /*0x7ba647*/
    v42 = v7[3]; /*0x7ba652*/
    v8 = v40 + a3[1]; /*0x7ba65d*/
    v35 = v39 + *a3; /*0x7ba65f*/
    v36 = v8; /*0x7ba663*/
    v9 = v39 + *a4; /*0x7ba672*/
    v38 = v40 + a4[1]; /*0x7ba674*/
    v37 = v9; /*0x7ba685*/
    if ( !(unsigned __int8)ClipLine(&v35, &v37, &v39) ) /*0x7ba689*/
      return 0; /*0x7ba689*/
    v10 = v35; /*0x7ba696*/
    if ( v35 > v37 ) /*0x7ba6a0*/
    {
      v11 = v36; /*0x7ba6a2*/
      v35 = v37; /*0x7ba6a6*/
      v37 = v10; /*0x7ba6ae*/
      v36 = v38; /*0x7ba6b2*/
      v38 = v11; /*0x7ba6b6*/
    }
    v12 = (*(int (__thiscall **)(XSurface *))(*(unsigned int *)this->Surface + 112))(this); /*0x7ba6c7*/
    v46 = (unsigned int *)v12; /*0x7ba6d1*/
    v13 = (__int16 *)(*(int (__thiscall **)(XSurface *, int, int))(*(unsigned int *)this->Surface + 92))(this, v35, v36); /*0x7ba6d8*/
    if ( !v13 ) /*0x7ba6dc*/
      return 0; /*0x7ba8b4*/
    if ( v36 == v38 ) /*0x7ba6ec*/
    {
      if ( v12 == 1 ) /*0x7ba6f1*/
      {
        (v14) = ((v14) & ~(0xFFFFULL << 16)) | (((unsigned __int64)(unsigned int)((((unsigned int)(v35) >> 16) & 0xFFFF)) & 0xFFFF) << 16) /*0x7ba6f7*/
        (v14) = ((v14) & ~0xFF) | ((unsigned int)(a5) & 0xFF) /*0x7ba701*/
        (((v14) >> 8) & 0xFF) = a5; /*0x7ba704*/
        v15 = v37 - v35 + 1; /*0x7ba706*/
        v16 = v14 << 16; /*0x7ba70a*/
        (v16) = ((v16) & ~0xFFFF) | ((unsigned int)(v14) & 0xFFFF) /*0x7ba70d*/
        memset32(v13, v16, v15 >> 2); /*0x7ba713*/
        memset(&v13[2 * (v15 >> 2)], a5, v15 & 3); /*0x7ba71a*/
        (*(void (__thiscall **)(XSurface *))(*(unsigned int *)this->Surface + 96))(this); /*0x7ba720*/
        return 1; /*0x7ba72c*/
      }
      for ( i = 0; i <= v37 - v35; ++v13 ) /*0x7ba73b*/
      {
        *v13 = a5; /*0x7ba745*/
        ++i; /*0x7ba750*/
      }
    }
    else if ( v35 == v37 ) /*0x7ba777*/
    {
      if ( v36 <= v38 ) /*0x7ba77b*/
        v19 = (*(int (__thiscall **)(XSurface *))(*(unsigned int *)this->Surface + 116))(this); /*0x7ba791*/
      else
        v19 = -(*(int (__thiscall **)(XSurface *))(*(unsigned int *)this->Surface + 116))(this); /*0x7ba786*/
      v20 = abs32(v38 - v36); /*0x7ba7a0*/
      if ( v20 >= 0 ) /*0x7ba7a2*/
      {
        v21 = v20 + 1; /*0x7ba7a8*/
        do /*0x7ba7be*/
        {
          if ( v12 == 1 ) /*0x7ba7b2*/
            *(unsigned char *)v13 = a5; /*0x7ba7b4*/
          else
            *v13 = a5; /*0x7ba7b8*/
          v13 = (__int16 *)((char *)v13 + v19); /*0x7ba7bb*/
          --v21; /*0x7ba7bd*/
        }
        while ( v21 ); /*0x7ba7be*/
      }
    }
    else
    {
      v22 = v38 - v36; /*0x7ba7d7*/
      v23 = v37 - v35; /*0x7ba7db*/
      v24 = (*(int (__thiscall **)(XSurface *))(*(unsigned int *)this->Surface + 116))(this); /*0x7ba7df*/
      v45 = v24; /*0x7ba7e4*/
      if ( v22 < 0 ) /*0x7ba7e8*/
        v45 = -v24; /*0x7ba7ec*/
      v25 = v22; /*0x7ba7f0*/
      v26 = 2 * v23; /*0x7ba7f2*/
      v27 = abs32(v25); /*0x7ba7f9*/
      v47 = 2 * v27; /*0x7ba800*/
      if ( v23 <= v27 ) /*0x7ba804*/
      {
        v31 = 0; /*0x7ba85c*/
        v32 = v26 - v27; /*0x7ba85e*/
        if ( v27 > 0 ) /*0x7ba862*/
        {
          v34 = v27; /*0x7ba864*/
          v33 = a5; /*0x7ba868*/
          do /*0x7ba89c*/
          {
            if ( v46 == (unsigned int *)1 ) /*0x7ba871*/
            {
              *((unsigned char *)v13 + v31) = v33; /*0x7ba873*/
            }
            else
            {
              v13[v31] = v33; /*0x7ba878*/
              v33 = a5; /*0x7ba87c*/
            }
            if ( v32 > 0 ) /*0x7ba882*/
            {
              ++v31; /*0x7ba888*/
              v32 -= v47; /*0x7ba889*/
            }
            v32 += v26; /*0x7ba88f*/
            v13 = (__int16 *)((char *)v13 + v45); /*0x7ba891*/
            --v34; /*0x7ba898*/
          }
          while ( v34 ); /*0x7ba89c*/
        }
      }
      else
      {
        v28 = 0; /*0x7ba808*/
        v29 = 2 * v27 - v23; /*0x7ba80a*/
        if ( v23 > 0 ) /*0x7ba80e*/
        {
          v30 = a5; /*0x7ba814*/
          do /*0x7ba845*/
          {
            if ( v46 == (unsigned int *)1 ) /*0x7ba81d*/
            {
              *((unsigned char *)v13 + v28) = v30; /*0x7ba81f*/
            }
            else
            {
              v13[v28] = v30; /*0x7ba824*/
              v30 = a5; /*0x7ba828*/
            }
            if ( v29 > 0 ) /*0x7ba82e*/
            {
              v13 = (__int16 *)((char *)v13 + v45); /*0x7ba834*/
              v29 -= 2 * v23; /*0x7ba83a*/
            }
            v29 += v47; /*0x7ba840*/
            ++v28; /*0x7ba842*/
          }
          while ( v28 < v23 ); /*0x7ba845*/
        }
      }
    }
    (*(void (__thiscall **)(XSurface *))(*(unsigned int *)this->Surface + 96))(this); /*0x7ba84b*/
    return 1; /*0x7ba723*/
}
} // namespace gamemd
