// G42.32 P: tree-universe marker -- e4 tree-owned decls suppressed
#define GAMEMD_TREE_UNIVERSE 1
// GENERATED supplied bodies (supply_missing_bodies.py) -- no-body
// no-file FAIL family; bodies are cache-verbatim transforms.
// G42.33 b3: per-class opt-in -- e4 flat 载体取胜 (g143_research/core_ui_supplied_fix.py)
#define GAMEMD_E4_Buffer 1
#define GAMEMD_E4_Text 1
#define GAMEMD_E4_BuildingLoadQueue 1
#define GAMEMD_E4_FrameTimer 1
#define GAMEMD_E4_MoveFeedback 1
#define GAMEMD_E4_Hash 1
#define GAMEMD_E4_Queue 1
#define GAMEMD_E4_SHA1 1
// g57w11 r4 item1 G7: StringTable_e4.hpp 为 G42.55 吸收空壳, 宏抑制 utility_ext 真体 → C2027; 删宏使真体胜出
#define GAMEMD_E4_StringVector 1
#define GAMEMD_E4_Vector2 1
#define GAMEMD_E4_Vector3 1
// g57w11 r4 item1 G8: Vector4_e4.hpp 为 G42.55 吸收空壳 → C2027; 删宏使 utility_ext 真体胜出
#define GAMEMD_E4_VectorCursor_uint_DynamicVectorClass_uint 1
#include "e4/classes/Vector_e4.hpp"
#include "core/stream_ext.hpp"
#include "core/utility_ext.hpp"
#include "misc/audio.hpp"
#include "misc/misc_ext.hpp"
#include "misc/super_weapon.hpp"
#include "object/techno.hpp"
#include "render/display.hpp"
#include "render/render_ext.hpp"
#include "render/surface.hpp"
#include "structure/building.hpp"
#include "system/buffer_io_file.hpp"
#include "system/cc_file.hpp"
#include "system/file_class.hpp"
#include "system/scenario.hpp"
#include "ui/command_ext.hpp"
#include "ui/sidebar.hpp"
#include "ui/ui_ext.hpp"
#include "e4/classes/MSEngine_e4.hpp"
// G42.33 b3: e4 flat 载体 (体表词汇 m_C/m_1/q000/*_field_0xNN 宿主)
#include "e4/classes/Buffer_e4.hpp"
#include "e4/classes/_fwd_e4.hpp"  // g57w10 r4 item3: COMClass 定义链修正 — utility_ext 全量体 (COMClass_field_0xNN 词表) 胜出, e4 平板体不再抢占; fwd 词表保留
#include "e4/classes/Hash_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/MoveFeedback_e4.hpp"
#include "e4/classes/Queue_e4.hpp"
#include "e4/classes/SHA1_e4.hpp"
#include "e4/classes/StringTable_e4.hpp"
#include "e4/classes/StringVector_e4.hpp"
#include "e4/classes/Text_e4.hpp"
#include "e4/classes/Vector2_e4.hpp"
#include "e4/classes/Vector3_e4.hpp"
#include "e4/classes/Vector4_e4.hpp"
#include "e4/classes/VectorCursor_uint_DynamicVectorClass_uint_e4.hpp"
#include "e4/classes/VectorCursor_uint_DynamicVectorClass_uint_e4.hpp"
#include "e4/classes/VectorCursor_uint_DynamicVectorClass_uint_e4.hpp"
#include "e4/classes/VectorCursor_uint_DynamicVectorClass_uint_e4.hpp"
#include "e4/classes/VectorCursor_uint_DynamicVectorClass_uint_e4.hpp"
#include "e4/classes/VectorCursor_uint_DynamicVectorClass_uint_e4.hpp"
#include "e4/classes/VectorCursor_uint_DynamicVectorClass_uint_e4.hpp"
#include "e4/classes/VectorCursor_uint_DynamicVectorClass_uint_e4.hpp"
#include "e4/classes/VectorCursor_uint_DynamicVectorClass_uint_e4.hpp"
#include "e4/classes/VectorCursor_uint_DynamicVectorClass_uint_e4.hpp"
#include "e4/classes/VectorCursor_uint_DynamicVectorClass_uint_e4.hpp"
#include "e4/classes/VectorCursor_uint_DynamicVectorClass_uint_e4.hpp"
#include "e4/classes/VectorCursor_uint_DynamicVectorClass_uint_e4.hpp"
#include "e4/classes/VectorCursor_uint_DynamicVectorClass_uint_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/ScriptAction_e4.hpp"
#include "e4/classes/VectorCursor_uint_DynamicVectorClass_uint_e4.hpp"
#include "e4/classes/VectorCursor_uint_DynamicVectorClass_uint_e4.hpp"
#include "e4/classes/VectorCursor_uint_DynamicVectorClass_uint_e4.hpp"
#include "e4/classes/VectorCursor_uint_DynamicVectorClass_uint_e4.hpp"
#include "e4/classes/VectorCursor_uint_DynamicVectorClass_uint_e4.hpp"
#include "system/map.hpp"

// G42.33 b3: 本地缺席全局/原型载体 (ida_globals.h 只覆盖裸名)
extern unsigned int stru_A8EB00;      // data: 0xA8EB00 (帧计数基)
extern void *DSurface_Alternate;       // data: DSurface 备用表面槽 (指针形态站点)
extern int sub_401190(int a1, int a2);  // 0x401190 本地原型
extern int UnselectAll_ClearLimboLaunchers(void *aP0);  // 0x431045 本地原型
extern int FootClass_Array;             // data: 0x8B3DC0 (e4_globals 名)
extern int UnselectAll_ClearLimboLaunchers(void *aP0);  // 0x431045 本地原型
extern int FootClass_Array;             // data: 0x8B3DC0 (e4_globals 名)
extern int UnselectAll_ClearLimboLaunchers(void *aP0);  // 0x431045 本地原型
extern int FootClass_Array;             // data: 0x8B3DC0 (e4_globals 名)
extern int UnselectAll_ClearLimboLaunchers(void *aP0);  // 0x431045 本地原型
extern int FootClass_Array;             // data: 0x8B3DC0 (e4_globals 名)
extern int UnselectAll_ClearLimboLaunchers(void *aP0);  // 0x431045 本地原型
extern int FootClass_Array;             // data: 0x8B3DC0 (e4_globals 名)
extern int UnselectAll_ClearLimboLaunchers(void *aP0);  // 0x431045 本地原型
extern int FootClass_Array;             // data: 0x8B3DC0 (e4_globals 名)
extern int UnselectAll_ClearLimboLaunchers(void *aP0);  // 0x431045 本地原型
extern int FootClass_Array;             // data: 0x8B3DC0 (e4_globals 名)
extern int UnselectAll_ClearLimboLaunchers(void *aP0);  // 0x431045 本地原型
extern int FootClass_Array;             // data: 0x8B3DC0 (e4_globals 名)
extern int UnselectAll_ClearLimboLaunchers(void *aP0);  // 0x431045 本地原型
extern int FootClass_Array;             // data: 0x8B3DC0 (e4_globals 名)
extern int UnselectAll_ClearLimboLaunchers(void *aP0);  // 0x431045 本地原型
extern int FootClass_Array;             // data: 0x8B3DC0 (e4_globals 名)
extern int UnselectAll_ClearLimboLaunchers(void *aP0);  // 0x431045 本地原型
extern int FootClass_Array;             // data: 0x8B3DC0 (e4_globals 名)
extern int UnselectAll_ClearLimboLaunchers(void *aP0);  // 0x431045 本地原型
extern int FootClass_Array;             // data: 0x8B3DC0 (e4_globals 名)
extern int UnselectAll_ClearLimboLaunchers(void *aP0);  // 0x431045 本地原型
extern int FootClass_Array;             // data: 0x8B3DC0 (e4_globals 名)
// G42.33 b3: r6 缺席全局/原型 (team R1 前例)
extern unsigned int stru_87F5F0;      // data: 0x87F5F0 (MapClass 宿主)
extern unsigned int g_TacticalClass_Instance;  // data: Tactical 单例
extern unsigned int g_VisibilitySystem;        // data: 可见性系统
extern unsigned int HouseClass_Observer;       // data: 观察者 House
extern unsigned int TimerGetTicks(void);  // 本地原型
extern int MarkForRedraw(void *aP0, int aP1);  // 本地原型 (G42.33 b4 C1: 2 参形)
// G42.33 b4 C2: 原型族补齐 (arity 真值)
extern int Init25(void);                                    // 0x70D150 (FrameTimer:: 静态形)
extern int UnselectAll_ClearLimboLaunchers(void *aP0);      // 0x431045
extern int MapClass_ToggleZoom(void *aP0);
extern int EventClass_Add(void *a1, int a2, int a3, int a4, int a5);  // (EventClass::Add)
extern int EventClass_Init(void *a1, int a2, int a3, int a4, int a5, int a6, void *a7);  // (EventClass::Init)
extern int Selection_GetFlag(void);                // (Selection::GetFlag 静态形)
extern int Selection_ClearGlobals(void *aP0);      // (Selection::ClearGlobals 静态形)
extern int GetBuildingPlacement(void *a1, unsigned int a2, int a3, int16_t *a4);  // G42.34 C5: arg2 标量形
extern int GetBuildingPlacement(void);  // 本地原型
extern char g_Str_EVA_CannotDeployHere[21];  // data: EVA 串                  // (MapClass::ToggleZoom)
extern int ReadBuildingINIEntry(void *a1);
extern int ReadBuildingINI(void *a1);
extern int DispatchSelectionWaypointMove(int a1, int a2, int a3, int a4);
extern int PlacePlayerBeacon(void *a1, int a2, int a3, int a4, int a5, int a6);
extern unsigned int dword_A83A54;   // data: 计时数组基 (ida_globals.h 标量同名, G42.35 C6 回退标量)
extern unsigned int dword_A802D0;   // data: 索引
extern unsigned int dword_8A0740;   // data
struct CellCoord_shadow_c { void * To_CellObj(int16_t *a2); };  // 0x5657A0 影子 (C2)
struct Object_A83D4C_shadow_c { unsigned int q030; };  // G42.34 C5: 0xA83D4C (HouseClass_Player) Object* 指针词汇
struct Host_87F5F0_c { unsigned char __pad_head[0x58]; unsigned char __pad_58[0xE12 - 0x58]; unsigned char qE12[0x800]; };  // G42.35 C7: 0x87F5F0 宿主 (0x58/0xE12 区段词汇)
extern int Mouse_SetBounds(void *a1, const void *a2);  // 0x4A8BF0 (Mouse::SetBounds 静态形 G42.34 C5)
extern int Team_ReleaseAll(void *a1, int a2);          // 0x5D26C0 (Team::ReleaseAll 静态形 G42.34 C5)
extern int DSurface_Flip2(void);                       // 0x5D1E50 (DSurface::Flip2 自由形 G42.34 C5)
extern int nullsub_24(void *a1);                       // 0x5D0590 (G42.34 C5)
extern void TechnoClass_GetField(void);                // 0x731CF0 (SmokeUpdate 形 G42.34 C5)
extern int g_MoveFeedback;                             // data: 0x822CF2 (G42.34 C5)
extern int UI_Find(int a1, int a2, int *a3);          // 0x52B6D0 (G42.35 C6)
extern int CompareFunc3Int(const void *a1, const void *a2);  // 0x52B6A0 qsort cmp (G42.35 C6)
extern int CompareFunc4Int(const void *a1, const void *a2);  // 0x52B720 qsort cmp (G42.35 C6)
extern void j_DeleteAndZero(void *a1);                // 0x5D0580 thunk (G42.35 C6)
extern char g_Str__Player___A_[13];  // 0x825070 (G42.35 C7)
extern char g_Str__Player___B_[13];  // 0x825060 (G42.35 C7)
extern char g_Str__Player___C_[13];  // 0x825050 (G42.35 C7)
extern char g_Str__Player___D_[13];  // 0x825040 (G42.35 C7)
extern const char aPlayerE[];            // (G42.35 C7)
extern const char aPlayerF[];            // (G42.35 C7)
extern const char aPlayerG[];            // (G42.35 C7)
extern double _RT1;                      // x87 st0 结果占位 vocab (G42.35 C7)
struct DialogPool_208_c { unsigned char q208[0x400]; };  // G42.35 C8: 0xAC18C0 宿主 (0x208 区段词汇)
struct A80220_c { unsigned int lineTrailer; };  // G42.35 C8: 0xA80220 宿主词汇
struct MQF_ABFBE0_c { unsigned int localVariables[1]; };  // G42.35 C8: g_MissionQueueFrame 宿主词汇
extern DialogPool_208_c g_DialogPool;           // 0xAC18C0 (G42.35 C8)
extern unsigned char g_FileExtensionState[16];  // 0xAC48F0 (G42.35 C8)
struct AA0398_c { unsigned char __pad_head[0xB0]; unsigned int q0B0; unsigned int __pad_B4[8]; };  // G42.35 C10: 0xAA0398 宿主 (0xB0/0xB4 区段词汇)
extern IID riid;                       // cache 裸引用全局 (G42.35 C9)
extern HRESULT OleRun(LPUNKNOWN pUnkOuter);  // OLE 原型 (G42.35 C9)
namespace gamemd {
struct String {  // G42.35 C8: String 本地载体 (_fwd_e4 仅 fwd; 调用词汇)
    bool NotEquals(const void *a2);
    void AssignFromPtr(const void *a2);
    void ToLower();
    bool Compare(const char **a2);
    static bool Equals(const char *a1, const void *a2);
};
} // namespace gamemd
// G42.33 b4 C1: Checksummer 本地载体 (_fwd_e4 仅 fwd) + A8B230 宿主 (team 前例)
namespace gamemd {
struct Checksummer {
    int Add_float(int a2);
    int Add_double(int a2, int a3);
    static int Add_Buffer(void *aP0, uint8_t *aP1, int aP2);  // 0x4A1D50 call-form sync
};
} // namespace gamemd
struct dword_A8B230_elem { void *ptr_0; void *ptr_4; void *ptr_8; unsigned int NeedsSaveOrLink; unsigned int referenceCount; unsigned int uniqueId; unsigned int abstractFlags; };  // G42.33 b4 C2: q000 槽 void* 形
#define dword_A8B230_arr ((dword_A8B230_elem *)&dword_A8B230)
extern unsigned int dword_A8B230;  // data: 0xA8B230
extern int IsHumanPlayer(void *a1);  // 本地原型
extern int GetWaypointCoords(int a1, int a2);  // 本地原型
extern int IsButtonDown(int a1);  // 本地原型
extern int DispatchSelectionWaypointMove(void);  // 本地原型
extern int UnselectAll_ClearLimboLaunchers(void *aP0);  // 0x431045 本地原型
extern int FootClass_Array;             // data: 0x8B3DC0 (e4_globals 名)
extern int UnselectAll_ClearLimboLaunchers(void *aP0);  // 0x431045 本地原型
extern int FootClass_Array;             // data: 0x8B3DC0 (e4_globals 名)
extern int UnselectAll_ClearLimboLaunchers(void *aP0);  // 0x431045 本地原型
extern int FootClass_Array;             // data: 0x8B3DC0 (e4_globals 名)
extern int UnselectAll_ClearLimboLaunchers(void *aP0);  // 0x431045 本地原型
extern int FootClass_Array;             // data: 0x8B3DC0 (e4_globals 名)
extern int UnselectAll_ClearLimboLaunchers(void *aP0);  // 0x431045 本地原型
extern int FootClass_Array;             // data: 0x8B3DC0 (e4_globals 名)
extern int UnselectAll_ClearLimboLaunchers(void *aP0);  // 0x431045 本地原型
extern int FootClass_Array;             // data: 0x8B3DC0 (e4_globals 名)

// 0x49EF10
namespace gamemd {
void StringVector::ddtor() {
  if ( *&this->q004 && (this->IsAllocated) ) /*0x49ef1d*/
  {
    operator delete((void *)(*&this->q004)); /*0x49ef23*/
    *&this->q004 = 0; /*0x49ef2b*/
  }
  (this->IsAllocated) = 0; /*0x49ef2e*/
  this->q008 = 0; /*0x49ef31*/
}
} // namespace gamemd

// 0x4F37A0
namespace gamemd {
unsigned int * GraphicMenuImageItem::ddtor(unsigned int * a2) {
  char **v3; // esi
  unsigned int *v4; // eax
  char v5; // bl
  unsigned int *result; // eax
  CCFileClass v7; // [esp+Ch] [ebp-6Ch] BYREF
  int v8[3]; // [esp+64h] [ebp-14h] BYREF
  int v9; // [esp+70h] [ebp-8h]

  NullGuard::Call((GraphicMenuItem *)this, (int)a2); /*0x4f37ad*/
  v3 = &this->q034; /*0x4f37b2*/
  v4 = CCFileClass::Construct2(&v7, v3); /*0x4f37ba*/
  v5 = v4->Open(0); /*0x4f37cc*/
  /* X11: ptr_0 install elided (implicit via class virtuals 0x4f37ce) — binary-proven install, was 0 */
  v9 = 0; /*0x4f37d6*/
  ((Vector *)(int)v8)->Clear(); /*0x4f37de*/
  /* X11: ptr_0 install elided (implicit via off_7E1668 virtuals 0x4f37e7) */
  result = (unsigned int *)((BufferIOFileClass *)&v7)->Dtor(); /*0x4f37ef*/
  if ( v5 ) /*0x4f37f6*/
  {
    result = (unsigned int *)operator new(0x30u); /*0x4f37fa*/
    if ( result ) /*0x4f3804*/
    {
      result = MSVQAnim::ConstructMSVQAnimHidden((MSVQAnim *)result, v3, (int *)DSurface_Alternate, (int)(a2 + 6), 1); /*0x4f3816*/
      if ( result ) /*0x4f381d*/
        return (unsigned int *)MSEngine::ProcessEvents((MSEngine *)a2, (char)result, 300000); /*0x4f3827*/
    }
  }
  return result; /*0x4f382c*/
}
} // namespace gamemd

// 0x4F3AD0
namespace gamemd {
void GraphicMenuAnimItem::StubReturnFalse() {
  ; /*0x4f3ad0*/
}
} // namespace gamemd

// 0x4F3AE0
namespace gamemd {
void GraphicMenuAnimItem::Stub() {
  ; /*0x4f3ae0*/
}
} // namespace gamemd

// 0x4F4000
namespace gamemd {
unsigned int * VectorCursor_uint_DynamicVectorClass_uint::ddtor() {
  --this->u32_8; /*0x4f4002*/
  return this->__pad_000; /*0x4f4005*/
}
} // namespace gamemd

// 0x65D660
namespace gamemd {
void ReferenceCounted::Constructor() {
  *this = (ReferenceCounted)0; /*0x65d660*/
}
} // namespace gamemd

// 0x765C70
namespace gamemd {
unsigned int * COMClass::releaseInterface() {
  ComPtr::Constructor((ComPtr *)this); /*0x765c73*/
  *(unsigned int *)this->__pad_000 = 0; /*0x765c78*/
  return this->__pad_000; /*0x765c80*/
}
} // namespace gamemd

// 0x767C50
namespace gamemd {
unsigned int * COMClass::marshalInterface(char a2) {
  *(unsigned int *)this->__pad_000 = 0; /*0x767c53*/
  ((ComPtr *)this)->Release(); /*0x767c59*/
  if ( (a2 & 1) != 0 ) /*0x767c63*/
    operator delete((this)); /*0x767c66*/
  return this->__pad_000; /*0x767c70*/
}
} // namespace gamemd

// 0x407470
namespace gamemd {
int Queue::GetNext(void *a1) { /*G42.33 b3: Queue_e4 声明形态 (默认参)*/
  int result; // eax

  result = *(unsigned int *)a1; /*0x407470*/
  if ( *(unsigned int *)a1 ) /*0x407470*/
  {
    if ( result == result->u32_8 ) /*0x407479*/
      return 0; /*0x40747b*/
  }
  return result; /*0x40747d*/
}
} // namespace gamemd

// 0x40A6D0
namespace gamemd {
int Buffer::UpdateVolumeSettings() {
  unsigned int **v2; // edi
  signed int v3; // eax
  int v4; // eax

  v2 = (unsigned int **)this->u32_158; /*0x40a6da*/
  (*(void (__stdcall **)(unsigned int *, int))(*v2[25] + 60))( /*0x40a6fd*/
    v2[25],
    dword_816380[(unsigned int)(100 * (*(this->u32_DC + 1))) >> 14]);
  v3 = ((unsigned int)(200 * (*(this->u32_12C + 1))) >> 14) - 100; /*0x40a715*/
  if ( v3 >= 0 ) /*0x40a718*/
    (*(void (__stdcall **)(unsigned int *, int))(*v2[25] + 64))(v2[25], -dword_816510[-v3]); /*0x40a743*/
  else
    (*(void (__stdcall **)(unsigned int *, int))(*v2[25] + 64))(v2[25], dword_816510[v3]); /*0x40a728*/
  v4 = sub_401190((int)this + 216, (*v2)[97]); /*0x40a755*/
  (*(void (__stdcall **)(unsigned int *, int))(*v2[25] + 68))(v2[25], v4); /*0x40a761*/
  return 0; /*0x40a766*/
}
} // namespace gamemd

// 0x40B670
namespace gamemd {
unsigned int MoveFeedback::PointerToIndex(int a2) {
  if ( (this->q00C) ) /*0x40b670*/
    return (unsigned int)(a2 - *&this->m_Capacity) >> 2; /*0x40b685*/
  else
    return 0; /*0x40b677*/
}
} // namespace gamemd

// 0x40B6F0
namespace gamemd {
int MoveFeedback::Show(int a2) {
  return *(unsigned int *)(*&this->m_Capacity + 4 * a2); /*0x40b6fa*/
}
} // namespace gamemd

// 0x40B930
namespace gamemd {
int MoveFeedback::FindItem(unsigned int * a2) {
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

  m_10 = this->q010; /*0x40b930*/
  result = 0; /*0x40b933*/
  if ( m_10 <= 0 ) /*0x40b938*/
    return -1; /*0x40b94f*/
  for ( i = *&this->m_Capacity; *i != *a2; ++i ) /*0x40b93e*/
  {
    if ( ++result >= m_10 ) /*0x40b94d*/
      return -1; /*0x40b94d*/
  }
  return result; /*0x40b952*/
}
} // namespace gamemd

// 0x40DCE0
namespace gamemd {
int StringTable::Lookup() {
  int v2; // edi
  char **v3; // esi

  v2 = 0; /*0x40dce5*/
  v3 = &off_816EE0; /*0x40dce7*/
  while ( _strcmpi(*v3, this->__pad_000) ) /*0x40dcfa*/
  {
    v3 += 2; /*0x40dcfc*/
    ++v2; /*0x40dcff*/
    if ( (int)v3 >= (int)&dword_817130 ) /*0x40dd06*/
      return 0; /*0x40dd0d*/
  }
  return dword_816EE4[2 * v2]; /*0x40dd08*/
}
} // namespace gamemd

// 0x410E50
namespace gamemd {
int StreamObj::Release() {
  int (__thiscall ***v2)(unsigned int, int); // ecx
  int result; // eax

  v2 = (int (__thiscall ***)(unsigned int, int))this->u32_14; /*0x410e53*/
  if ( v2 ) /*0x410e58*/
    result = (**v2)(v2, 1); /*0x410e5e*/
  this->u32_14 = 0; /*0x410e60*/
  return result; /*0x410e67*/
}
} // namespace gamemd

// 0x410ED0
namespace gamemd {
char * Buffer::FillCircularBufferScroll(int a2, int a3, uint16_t a4) {

  signed int v5; // ebx
  char *result; // eax
  int v8; // edi
  unsigned int Buffer_field_18; // edx
  int v10; // eax
  unsigned int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // edx
  int v16; // edi
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // edi
  int v21; // edx
  int v22; // ecx
  int v23; // eax
  int Buffer_field_10; // ecx
  int v25; // ebx
  int v26; // edx
  int v27; // eax
  unsigned int v28; // edi
  unsigned int v29; // edx
  unsigned int v30; // ebx
  char *v31; // edx
  int v32; // eax
  unsigned __int16 *v33; // ecx
  unsigned int v34; // ebx
  int v35; // ecx
  __int64 v36; // rax
  int v37; // edx
  int v38; // ebx
  signed int v39; // eax
  unsigned __int16 *v40; // ebx
  int v41; // edx
  unsigned int v42; // esi
  bool v43; // zf
  int v44; // eax
  __int64 v45; // rax
  unsigned __int16 *v46; // edx
  int v47; // ebx
  unsigned __int16 *v48; // eax
  unsigned int v49; // esi
  int v50; // ecx
  int Buffer_field_14; // ecx
  int v52; // [esp+10h] [ebp-14h]
  int v53; // [esp+14h] [ebp-10h] BYREF
  int v54; // [esp+18h] [ebp-Ch]
  int v55; // [esp+1Ch] [ebp-8h]
  int v56; // [esp+20h] [ebp-4h]
  int v57; // [esp+2Ch] [ebp+8h]
  int v58; // [esp+30h] [ebp+Ch]

  v5 = this->u32_28; /*0x410ee0*/
  v52 = this->Buffer_field_10 / 2 % v5; /*0x410ef2*/
  if ( (int)abs32(a2) > v5 || (result = (char *)abs32(a3), (int)result > this->u32_2C) ) /*0x410f0e*/
  {
    v50 = this->u32_2C; /*0x411286*/
    v53 = 0; /*0x41128b*/
    v54 = 0; /*0x41128f*/
    v56 = v50; /*0x411297*/
    Buffer_field_14 = this->Buffer_field_14; /*0x41129b*/
    v55 = v5; /*0x4112a4*/
    result = (char *)(*(int (**)(int, int *, unsigned int))(*(unsigned int *)Buffer_field_14 + 20))( /*0x4112af*/
                       Buffer_field_14,
                       &v53,
                       a4);
    this->Buffer_field_24 = 0x8000; /*0x4112b2*/
    return result; /*0x4112b2*/
  }
  v8 = a2 + this->Buffer_field_10 / 2 % v5; /*0x410f18*/
  if ( a2 ) /*0x410f1c*/
  {
    Buffer_field_18 = this->Buffer_field_18; /*0x410f25*/
    v10 = this->Buffer_field_10 + 2 * a2; /*0x410f28*/
    this->Buffer_field_10 = v10; /*0x410f2b*/
    v11 = Buffer_field_18 + v10; /*0x410f2e*/
    if ( v11 < Buffer_field_18 ) /*0x410f32*/
      v11 += this->Buffer_field_20; /*0x410f34*/
    if ( v11 >= this->Buffer_field_1C ) /*0x410f3a*/
      v11 -= this->Buffer_field_20; /*0x410f3c*/
    this->Buffer_field_10 = v11 - this->Buffer_field_18; /*0x410f44*/
    if ( a2 >= 0 ) /*0x410f47*/
    {
      v53 = v52; /*0x410fee*/
      if ( v8 < v5 ) /*0x410fe4*/
      {
        v54 = 0; /*0x41104f*/
        v23 = this->u32_2C; /*0x411053*/
        v55 = a2; /*0x411056*/
        v22 = this->Buffer_field_14; /*0x41105a*/
        v56 = v23; /*0x411063*/
      }
      else
      {
        v18 = this->u32_2C; /*0x410ff2*/
        v55 = v5 - v52; /*0x410ff5*/
        v54 = 0; /*0x410ff9*/
        v19 = this->Buffer_field_14; /*0x410ffd*/
        v56 = v18; /*0x411002*/
        (*(void (**)(int, int *, unsigned int))(*(unsigned int *)v19 + 20))(v19, &v53, a4); /*0x411014*/
        v20 = v8 - this->u32_28; /*0x41101e*/
        v21 = this->u32_2C; /*0x411020*/
        v54 = 0; /*0x411023*/
        v22 = this->Buffer_field_14; /*0x411027*/
        v53 = 0; /*0x41102a*/
        v55 = v20; /*0x41102e*/
        v56 = v21; /*0x411032*/
      }
      result = (char *)(*(int (**)(int, int *, unsigned int))(*(unsigned int *)v22 + 20))(v22, &v53, a4); /*0x41103e*/
    }
    else if ( v8 >= 0 ) /*0x410f4f*/
    {
      v53 = v8; /*0x410fb3*/
      v54 = 0; /*0x410fb7*/
      v56 = this->u32_2C; /*0x410fbe*/
      v55 = -a2; /*0x410fc6*/
      result = (char *)(*(int (**)(int, int *, unsigned int))(*(unsigned int *)this->Buffer_field_14 + 20))( /*0x410fda*/
                         this->Buffer_field_14,
                         &v53,
                         a4);
    }
    else
    {
      v53 = 0; /*0x410f55*/
      v55 = v52; /*0x410f5d*/
      v12 = this->u32_2C; /*0x410f61*/
      v54 = 0; /*0x410f64*/
      v13 = this->Buffer_field_14; /*0x410f68*/
      v56 = v12; /*0x410f6d*/
      (*(void (**)(int, int *, unsigned int))(*(unsigned int *)v13 + 20))(v13, &v53, a4); /*0x410f7f*/
      v14 = this->u32_28; /*0x410f82*/
      v15 = this->u32_2C; /*0x410f85*/
      v16 = v14 + v8; /*0x410f88*/
      v54 = 0; /*0x410f8e*/
      v17 = this->Buffer_field_14; /*0x410f92*/
      v55 = v14 - v16; /*0x410f95*/
      v53 = v16; /*0x410f99*/
      v56 = v15; /*0x410f9d*/
      result = (char *)(*(int (**)(int, int *, unsigned int))(*(unsigned int *)v17 + 20))(v17, &v53, a4); /*0x410fa9*/
    }
  }
  if ( a3 ) /*0x411078*/
  {
    Buffer_field_10 = this->Buffer_field_10; /*0x41107e*/
    v25 = this->u32_28; /*0x411081*/
    this->Buffer_field_24 -= a3; /*0x411096*/
    v26 = Buffer_field_10 + 2 * a3 * v25; /*0x411099*/
    this->Buffer_field_10 = v26; /*0x41109c*/
    v27 = a3 + Buffer_field_10 / 2 / v25; /*0x41109f*/
    v28 = this->Buffer_field_18; /*0x4110a1*/
    v29 = v28 + v26; /*0x4110a4*/
    v58 = v27; /*0x4110a6*/
    if ( v29 < v28 ) /*0x4110ac*/
      v29 += this->Buffer_field_20; /*0x4110ae*/
    if ( v29 >= this->Buffer_field_1C ) /*0x4110b4*/
      v29 -= this->Buffer_field_20; /*0x4110b6*/
    v30 = v29 - v28; /*0x4110bf*/
    this->Buffer_field_10 = v29 - v28; /*0x4110c3*/
    if ( a3 >= 0 ) /*0x4110c6*/
    {
      v44 = this->u32_2C; /*0x41119d*/
      if ( v58 >= v44 ) /*0x4111a6*/
      {
        v45 = 2 * this->u32_28 * v44 - Buffer_field_10; /*0x4111b4*/
        (v45) = ((v45) & 0xFFFFFFFF00000000ull) | ((v45 - (((v45) >> 32) & 0xFFFFFFFFu)) & 0xFFFFFFFFull); /*0x4111b5*/
        v46 = (unsigned __int16 *)(v28 + Buffer_field_10); /*0x4111b7*/
        v47 = (int)v45 >> 1; /*0x4111bc*/
        if ( (((unsigned char)v28 + (unsigned char)Buffer_field_10) & 2) != 0 && v47 ) /*0x4111c5*/
        {
          *v46++ = a4; /*0x4111c7*/
          --v47; /*0x4111cd*/
        }
        v48 = 0; /*0x4111d0*/
        if ( v47 >> 1 ) /*0x4111d5*/
        {
          memset32(v46, 65537 * a4, v47 >> 1); /*0x4111f0*/
          v48 = &v46[2 * (v47 >> 1)]; /*0x4111f6*/
        }
        if ( (v47 & 1) != 0 && v48 ) /*0x411200*/
          *v48 = a4; /*0x411202*/
        v37 = this->Buffer_field_18; /*0x41120b*/
        v38 = this->Buffer_field_10 / 2; /*0x411210*/
        if ( (v37 & 2) != 0 && v38 ) /*0x411219*/
        {
          *(unsigned short *)v37 = a4; /*0x41121b*/
          v37 += 2; /*0x41121e*/
          --v38; /*0x411221*/
        }
        result = 0; /*0x411224*/
        v49 = v38 >> 1; /*0x411229*/
        if ( !(v38 >> 1) ) /*0x41122b*/
          goto LABEL_54; /*0x41122b*/
LABEL_53:
        memset32((void *)v37, 65537 * a4, v49); /*0x411240*/
        result = (char *)(v37 + 4 * v49); /*0x411242*/
LABEL_54:
        v43 = (v38 & 1) == 0; /*0x411245*/
LABEL_55:
        if ( !v43 ) /*0x411248*/
        {
          if ( result ) /*0x41124c*/
            *(unsigned short *)result = a4; /*0x41124f*/
        }
        return result; /*0x411258*/
      }
      v37 = v28 + Buffer_field_10; /*0x411262*/
      v38 = (int)(v30 - Buffer_field_10) / 2; /*0x411267*/
      if ( (((unsigned char)v28 + (unsigned char)Buffer_field_10) & 2) != 0 && v38 ) /*0x411270*/
        goto LABEL_60; /*0x411270*/
    }
    else
    {
      if ( v27 >= 0 ) /*0x4110d0*/
      {
        v39 = Buffer_field_10 - v30; /*0x411157*/
        v40 = (unsigned __int16 *)v29; /*0x411159*/
        v41 = v39 / 2; /*0x411160*/
        if ( ((unsigned __int8)v40 & 2) != 0 && v41 ) /*0x411169*/
        {
          *v40++ = a4; /*0x41116b*/
          --v41; /*0x411171*/
        }
        result = 0; /*0x411174*/
        v42 = v41 >> 1; /*0x411179*/
        if ( v41 >> 1 ) /*0x411179*/
        {
          memset32(v40, 65537 * a4, v42); /*0x411190*/
          result = (char *)&v40[2 * v42]; /*0x411192*/
        }
        v43 = (v41 & 1) == 0; /*0x411195*/
        goto LABEL_55; /*0x411198*/
      }
      v31 = (char *)v28; /*0x4110d9*/
      v32 = Buffer_field_10 / 2; /*0x4110db*/
      v57 = Buffer_field_10 / 2; /*0x4110e0*/
      if ( (v28 & 2) != 0 && v32 ) /*0x4110e8*/
      {
        *(unsigned short *)v28 = a4; /*0x4110ea*/
        v31 = (char *)(v28 + 2); /*0x4110ed*/
        (v57) = ((v57) & ~0xFF) | ((--v32) & 0xFF); /*0x4110f1*/
      }
      v33 = 0; /*0x4110f7*/
      v34 = v32 >> 1; /*0x4110fc*/
      if ( v32 >> 1 ) /*0x4110fc*/
      {
        memset32(v31, 65537 * a4, v34); /*0x411113*/
        (v32) = ((v32) & ~0xFF) | ((v57) & 0xFF); /*0x411115*/
        v33 = (unsigned __int16 *)&v31[4 * v34]; /*0x411119*/
      }
      if ( (v32 & 1) != 0 && v33 ) /*0x411122*/
        *v33 = a4; /*0x411124*/
      v35 = this->Buffer_field_10; /*0x41112a*/
      v36 = 2 * this->u32_28 * this->u32_2C - v35; /*0x411135*/
      (v36) = ((v36) & 0xFFFFFFFF00000000ull) | ((v36 - (((v36) >> 32) & 0xFFFFFFFFu)) & 0xFFFFFFFFull); /*0x411136*/
      v37 = v35 + this->Buffer_field_18; /*0x41113d*/
      v38 = (int)v36 >> 1; /*0x41113f*/
      if ( (v37 & 2) != 0 && v38 ) /*0x41114c*/
      {
LABEL_60:
        *(unsigned short *)v37 = a4; /*0x411272*/
        v37 += 2; /*0x411275*/
        --v38; /*0x411278*/
      }
    }
    result = 0; /*0x411279*/
    v49 = v38 >> 1; /*0x411280*/
    if ( !(v38 >> 1) ) /*0x411282*/
      goto LABEL_54; /*0x411282*/
    goto LABEL_53; /*0x411282*/
  }
  return result; /*0x41124e*/

}
} // namespace gamemd

namespace gamemd {
bool FrameTimer::HasRemaining() const { /*G42.33 b3: 载体签名 (cache this=Techno*)*/
    int v1; // edx
    int result; // eax

    v1 = *&this->q18C; /*0x41bf40*/
    result = *&this->q190; /*0x41bf46 ironCurtainTimer[1]*/
    if ( v1 != -1 ) /*0x41bf4f*/
    {
      if ( dword_A8ED84 - v1 < result ) /*0x41bf5b*/
      {
        result -= dword_A8ED84 - v1; /*0x41bf5d*/
        result = result > 0; /*0x41bf66*/
        return result; /*0x41bf68*/
      }
      result = 0; /*0x41bf69*/
    }
    result = result > 0; /*0x41bf72*/
    return result; /*0x41bf68*/
}
} // namespace gamemd

namespace gamemd {
int Vector3::Magnitude() {
    return Math::Sqrt( /*0x41c3e9*/
             *(double *)this * *(double *)this
           + this->u32_8 * this->u32_8  /*g57w10 r4: raw fn_41:9575 原文 (第二 double 分量)*/
           + this->q040 * this->q040);
}
} // namespace gamemd

// 0x41C460
namespace gamemd {
int Vector2::NormalizeNonZero() {
  int16_t v1; // fps
  double v2; // st7
  bool v3; // c0
  char v4; // c2
  bool v5; // c3
  int result; // eax
  int16_t v7; // fps
  double v8; // st7
  bool v9; // c0
  char v10; // c2
  bool v11; // c3

  v2 = *(double *)this; /*0x41c460*/
  v3 = v2 < 0.0; /*0x41c462*/
  v4 = 0; /*0x41c462*/
  v5 = v2 == 0.0; /*0x41c462*/
  (*((unsigned short *)&(result))) = v1; /*0x41c468*/
  if ( v2 == 0.0 ) /*0x41c46d*/
  {
    v8 = this->ptr_8; /*0x41c46f*/
    v9 = v8 < 0.0; /*0x41c472*/
    v10 = 0; /*0x41c472*/
    v11 = v8 == 0.0; /*0x41c472*/
    (*((unsigned short *)&(result))) = v7; /*0x41c478*/
    if ( v8 == 0.0 ) /*0x41c47d*/
    {
      *this = 0; /*0x41c47f*/
      this->ptr_2 = 1079574528; /*0x41c485*/
    }
  }
  return result; /*0x41c48c*/
}
} // namespace gamemd

// 0x41CAA0
namespace gamemd {
wchar_t * TypeClass::FindByName() { /*G42.33 b3: 载体签名; 体返回索引经转换*/
  int v2; // esi

  if ( !this ) /*0x41caa6*/
    return -1; /*0x41caa6*/
  v2 = 0; /*0x41caad*/
  if ( dword_A8B228 <= 0 ) /*0x41cab1*/
    return -1; /*0x41cad6*/
  while ( _strcmpi((char *)(*((unsigned int *)dword_A8B21C + v2) + 36), (char *)this) ) /*0x41caca*/
  {
    if ( ++v2 >= dword_A8B228 ) /*0x41cad4*/
      return -1; /*0x41cad4*/
  }
  return v2; /*0x41cad6*/
}
} // namespace gamemd

// 0x42DC50
namespace gamemd {
unsigned int * VectorClassUInt::Constructor(int a2, int a3) {
  this->Items = 0; /*0x42dc5b*/
  this->Capacity = a2; /*0x42dc5e*/
  this->IsInitialized = 1; /*0x42dc61*/
  this->IsAllocated = 0; /*0x42dc65*/
  *this = (VectorClassUInt)0; /*0x42dc68*/
  if ( a2 ) /*0x42dc6e*/
  {
    if ( a3 ) /*0x42dc76*/
    {
      this->Items = a3; /*0x42dc78*/
      return this; /*0x42dc7e*/
    }
    this->Items = operator new(4 * a2); /*0x42dc8d*/
    this->IsAllocated = 1; /*0x42dc90*/
  }
  return this; /*0x42dc7d*/
}
} // namespace gamemd

// 0x42F7C0
namespace gamemd {
int Buffer::Cleanup() {
  int result; // eax

  result = *&this->Buffer_field_04; /*0x42f7c6*/
  if ( result && (this->Buffer_field_0C) ) /*0x42f7cd*/
  {
    operator delete((void *)(*&this->Buffer_field_04)); /*0x42f7d3*/
    *&this->Buffer_field_04 = 0; /*0x42f7db*/
  }
  (this->Buffer_field_0C) = 0; /*0x42f7de*/
  this->Buffer_field_08 = 0; /*0x42f7e1*/
  return result; /*0x42f7e4*/
}
} // namespace gamemd

// 0x430F70
namespace gamemd {
char PlayerClass::FindNearestWaypoint(int a2, int a3, int a4) {

  double v4; // st7
  PlayerClass *p_PlayerClass_field_0x0C; // edi
  int v6; // esi
  unsigned int *v7; // eax
  unsigned __int16 *v8; // eax
  bool v9; // sf
  bool v10; // of
  unsigned __int8 *v12; // esi
  double v13; // [esp+0h] [ebp-30h]
  MapClass *v14; // [esp+8h] [ebp-28h]
  int v15; // [esp+18h] [ebp-18h]
  PlayerClass *v16; // [esp+1Ch] [ebp-14h]
  int v18; // [esp+24h] [ebp-Ch]
  int v19; // [esp+28h] [ebp-8h]
  int v20; // [esp+2Ch] [ebp-4h]

  if ( !this->u32_60 ) /*0x430f79*/
    return 0; /*0x431026*/
  p_PlayerClass_field_0x0C = this; /*0x430f8b*/
  v15 = 0; /*0x430f8d*/
  v16 = this; /*0x430f95*/
LABEL_3:
  v6 = 0; /*0x430f99*/
  while ( 1 ) /*0x430f9b*/
  {
    v7 = *(unsigned int **)p_PlayerClass_field_0x0C->__pad_0; /*0x430f9b*/
    if ( *(unsigned int *)p_PlayerClass_field_0x0C->__pad_0 ) /*0x430f9b*/
    {
      v19 = a3 - v7[1]; /*0x430fb6*/
      __asm { fild [esp+28h+var_8] } /*0x430fbc*/
      v20 = a4 - v7[2]; /*0x430fc0*/
      v18 = a2 - *v7; /*0x430fc4*/
      __asm /*0x430fc8*/
      {
        fild [esp+28h+var_4]
        fild [esp+28h+var_C]
      }
      __asm
      {
        fld st
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp st(1), st
        fld st(3)
        fmul st, st(4)
        faddp st(1), st
        fstp [esp+30h+var_30]; double
        fstp st
        fstp st
        fstp st
      }
      Math::Sqrt(v13); /*0x430fec*/
      LOWORD(v8) = Math::RoundToInt(v4); /*0x430ff4*/
      if ( (int)v8 < 128 ) /*0x430ffe*/
        break; /*0x430ffe*/
    }
    ++v6; /*0x431000*/
    p_PlayerClass_field_0x0C = (PlayerClass *)((char *)p_PlayerClass_field_0x0C + 4); /*0x431001*/
    if ( v6 >= 3 ) /*0x431007*/
    {
      p_PlayerClass_field_0x0C = &v16->q00C; /*0x431012*/
      v10 = (((((v15 + 1) ^ (8)) & ((v15 + 1) ^ ((v15 + 1) - (8))))) < 0); /*0x431015*/
      v9 = v15 - 7 < 0; /*0x431015*/
      ++v15; /*0x431018*/
      v16 = (PlayerClass *)((char *)v16 + 12); /*0x43101c*/
      if ( v9 != v10 ) /*0x431020*/
        goto LABEL_3; /*0x431020*/
      return 0; /*0x431020*/
    }
  }
  v12 = *(unsigned __int8 **)&this->__pad_0[8 * v15 + 4 * v6 + 4 * v15]; /*0x43103e*/
  if ( !v12 ) /*0x431043*/
    return 0; /*0x431043*/
  MapClass::UnselectAll_ClearLimboLaunchers(v14); /*0x431045*/
  v12[12] |= 2u; /*0x431050*/
  return 1; /*0x431028*/

}
} // namespace gamemd

// 0x431170
namespace gamemd {
int BufferIO::FindActiveChannel(int a2) {
  int v2; // ebp
  int v4; // edx
  int *v5; // ecx
  int result; // eax

  if ( !this->u32_60 ) /*0x431170*/
    return 0; /*0x4311b3*/
  v2 = 0; /*0x43117f*/
  LABEL_3:
  v4 = 0; /*0x431185*/
  v5 = (int *)this; /*0x431187*/
  while ( 1 ) /*0x431189*/
  {
    result = *v5; /*0x431189*/
    if ( *v5 ) /*0x431189*/
    {
      if ( (*(unsigned char *)(result + 12) & 2) != 0 && (a2 == -1 || a2 == result->u32_110) ) /*0x43119f*/
        return result; /*0x4311b5*/
    }
    ++v4; /*0x4311a1*/
    ++v5; /*0x4311a2*/
    if ( v4 >= 3 ) /*0x4311a8*/
    {
      ++v2; /*0x4311aa*/
      ++this; /*0x4311ab*/
      if ( v2 < 8 ) /*0x4311b1*/
        goto LABEL_3; /*0x4311b1*/
      return 0; /*0x4311b1*/
    }
  }
}
} // namespace gamemd

// 0x431DD0
namespace gamemd {
void BufferIO::Flush() { /*G42.33 b3: 载体签名*/
  int result; // eax
  int v3; // eax
  DWORD v4; // edi

  if ( this->u32_29 && this->u32_28 ) /*0x431dde*/
  {
    v3 = this->u32_40; /*0x431de9*/
    v4 = this->u32_44 - v3; /*0x431df3*/
    if ( this->u32_26 ) /*0x431dec*/
    {
      FileClass::Seek((RawFileClass *)this, v3 + this->u32_50 + this->u32_3C, 0); /*0x431e08*/
      FileClass::Write2((RawFileClass *)this, this->MapPreview_30, v4); /*0x431e14*/
      result = FileClass::Seek((RawFileClass *)this, this->u32_50 + this->u32_4C, 0); /*0x431e26*/
    }
    else
    {
      FileClass::Open2((RawFileClass *)this, (const CHAR *)1); /*0x431e38*/
      FileClass::Seek((RawFileClass *)this, this->u32_40 + this->u32_3C + this->u32_50, 0); /*0x431e4f*/
      FileClass::Write2((RawFileClass *)this, this->MapPreview_30, v4); /*0x431e5b*/
      result = FileClass::CloseHandle((RawFileClass *)this); /*0x431e62*/
    }
    this->u32_28 = 0; /*0x431e2b*/
    (*((unsigned char *)&(result))) = 1; /*0x431e30*/
  }
  else
  {
    (*((unsigned char *)&(result))) = 0; /*0x431e70*/
  }
  return result; /*0x431e32*/
}
} // namespace gamemd

// 0x433CA0
namespace gamemd {
unsigned int * TextGroup::SetRect(unsigned int *a2) {
  unsigned int *result; // eax

  result = a2; /*0x433ca0*/
  if ( a2 ) /*0x433ca8*/
  {
    this->u32_30 = *(TextGroup *)a2; /*0x433cac*/
    this->u32_34 = (TextGroup)a2[1]; /*0x433cb2*/
    this->u32_38 = (TextGroup)a2[2]; /*0x433cb8*/
    result = a2->u32_C; /*0x433cbb*/
    this->u32_3C = result; /*0x433cbe*/
  }
  else
  {
    this->u32_3C = 0; /*0x433cc4*/
    this->u32_38 = 0; /*0x433cc7*/
    this->u32_34 = 0; /*0x433cca*/
    this->u32_30 = 0; /*0x433ccd*/
  }
  return result; /*0x433cc1*/
}
} // namespace gamemd

// 0x433CF0
namespace gamemd {
int Text::Layout(uint16_t *a2, int *a3, unsigned int *a4, int a5) {
  uint16_t v5; // dx
  uint16_t v6; // di
  int v7; // esi
  int v8; // ebp
  uint16_t *v9; // ebx
  uint8_t *v10; // eax
  int v11; // edx
  int v12; // edx
  int v13; // eax
  int result; // eax
  uint16_t *v16; // [esp+Ch] [ebp-14h]
  unsigned int *v17; // [esp+10h] [ebp-10h]
  uint16_t *v18; // [esp+14h] [ebp-Ch]
  int v19; // [esp+18h] [ebp-8h]
  uint16_t i; // [esp+1Ch] [ebp-4h]
  uint16_t *v21; // [esp+24h] [ebp+4h]

  v5 = 0; /*0x433cf6*/
  v18 = 0; /*0x433cff*/
  v17 = (unsigned int *)this->u32_4; /*0x433d03*/
  if ( v17 && a2 ) /*0x433d13*/
  {
    v6 = *a2; /*0x433d1f*/
    v7 = 0; /*0x433d22*/
    v8 = 0; /*0x433d24*/
    v9 = a2 + 1; /*0x433d26*/
    v21 = 0; /*0x433d2c*/
    v19 = this->u32_1C; /*0x433d30*/
    v19 = v19; /*0x433d34*/
    v16 = 0; /*0x433d38*/
    for ( i = v6; v6; i = v6 ) /*0x433d40*/
    {
      switch ( v6 ) /*0x433d5c*/
      {
        case 9u: /*0x433d5c*/
          v7 = this->u32_28 + v7 - (this->u32_28 + v7) % this->u32_28; /*0x433d92*/
          break; /*0x433d94*/
        case 0xAu: /*0x433d5c*/
        case 0xDu: /*0x433d5c*/
          if ( v5 != 13 ) /*0x433d67*/
          {
            v7 = 0; /*0x433d75*/
            v8 = 0; /*0x433d77*/
            v19 += v19; /*0x433d7b*/
          }
          break; /*0x433d7f*/
        case 0x20u: /*0x433d5c*/
          v16 = v9; /*0x433d9d*/
          v18 = v21; /*0x433da1*/
          goto LABEL_9; /*0x433da1*/
        default:
  LABEL_9:
          v10 = 0; /*0x433da5*/
          if ( v17 ) /*0x433dad*/
          {
            v11 = *(uint16_t *)(v17[6] + 2 * v6); /*0x433db4*/
            if ( (unsigned short)v11 ) /*0x433dba*/
              v10 = (uint8_t *)(v17[7] + (v11 - 1) * v17[5]); /*0x433dc7*/
          }
          if ( v10 || (v10 = (uint8_t *)this->u32_8) != 0 ) /*0x433dd7*/
          {
            ++v8; /*0x433de1*/
            v12 = this->u32_2C; /*0x433de2*/
            v13 = *v10; /*0x433de5*/
            v7 += v12 + v13; /*0x433dea*/
            if ( a5 && v7 > a5 ) /*0x433df6*/
            {
              if ( v16 ) /*0x433dfe*/
              {
                if ( v8 > 1 ) /*0x433e03*/
                {
                  v9 = v16; /*0x433e09*/
                  v21 = v18; /*0x433e0b*/
                }
              }
              else
              {
                if ( v8 > 1 ) /*0x433e14*/
                {
                  v7 -= v13 + v12; /*0x433e18*/
                  --v9; /*0x433e1a*/
                }
                if ( v7 > (int)v21 ) /*0x433e21*/
                  v21 = (uint16_t *)v7; /*0x433e23*/
              }
              v7 = 0; /*0x433e2f*/
              v8 = 0; /*0x433e31*/
              v16 = 0; /*0x433e35*/
              v19 += v19; /*0x433e39*/
            }
            else if ( v7 > (int)v21 ) /*0x433e43*/
            {
              v21 = (uint16_t *)v7; /*0x433e45*/
            }
          }
          break; /*0x433e3d*/
      }
      v6 = *v9; /*0x433e49*/
      v5 = i; /*0x433e4c*/
      ++v9; /*0x433e50*/
    }
    if ( a3 ) /*0x433e69*/
      *a3 = (int)v21; /*0x433e6f*/
    result = (int)a4; /*0x433e71*/
    if ( a4 ) /*0x433e77*/
      *a4 = v19; /*0x433e7d*/
    (*((unsigned char *)&(result))) = 1; /*0x433e7f*/
  }
  else
  {
    if ( a4 ) /*0x433e8e*/
      *a4 = 0; /*0x433e90*/
    result = (int)a3; /*0x433e92*/
    if ( a3 ) /*0x433e98*/
      *a3 = 0; /*0x433e9a*/
    (*((unsigned char *)&(result))) = 0; /*0x433e9c*/
  }
  return result; /*0x433e81*/
}
} // namespace gamemd

// 0x434990
namespace gamemd {
int BufferIO::Cleanup(int a2) {
  (*(void (__thiscall **)(int))(*(unsigned int *)a2 + 96))(a2); /*0x434999*/
  this->u32_C = 0; /*0x43499e*/
  this->u32_10 = 0; /*0x4349a1*/
  return 0; /*0x4349a4*/
}
} // namespace gamemd

// 0x437160
namespace gamemd {
int * Vector3::Subtract(int *a2, unsigned int *a3) {
  int v3; // edx
  int v4; // esi
  int v6; // ecx

  v3 = *(unsigned int *)this->__pad_000 - *a3; /*0x43716d*/
  v4 = this->u32_4 - a3[1]; /*0x437175*/
  v6 = this->u32_8 - a3[2]; /*0x43717e*/
  *a2 = v3; /*0x437182*/
  a2->u32_4 = v4; /*0x437184*/
  a2->u32_8 = v6; /*0x437187*/
  return a2; /*0x43718a*/
}
} // namespace gamemd

// 0x437FC0
namespace gamemd {
int COMObject::Release() {
  int result; // eax

  result = *(unsigned int *)this->Hovered; /*0x437fc0*/
  if ( *(unsigned int *)this->Hovered ) /*0x437fc0*/
    return (*(int (__stdcall **)(int))(*&result->q020))(result); /*0x437fc9*/
  return result; /*0x437fcc*/
}
} // namespace gamemd

// 0x43A100
namespace gamemd {
int Vector3::AddAssign(float *a2) {
  float *v2; // ecx

  *v2 = *(float *)this + *v2; /*0x43a10a*/
  v2[1] = this->u32_4 + v2[1]; /*0x43a112*/
  v2[2] = this->u32_8 + v2[2]; /*0x43a11b*/
  return (int)v2; /*0x43a11e*/
}
} // namespace gamemd

// 0x477C30
namespace gamemd {
char BufferClass::CompareEqual(int a2) {
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  m_8 = this->Capacity; /*0x477c32*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x477c3d*/
  {
    v3 = 0; /*0x477c3f*/
    if ( m_8 <= 0 ) /*0x477c43*/
      return 1; /*0x477c63*/
    v4 = *&this->Items; /*0x477c45*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x477c4b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x477c54*/
    {
      ++v3; /*0x477c56*/
      ++v4; /*0x477c57*/
      if ( v3 >= m_8 ) /*0x477c5c*/
        return 1; /*0x477c5c*/
    }
  }
  return 0; /*0x477c5e*/
}
} // namespace gamemd

// 0x488690
namespace gamemd {
void COMObject::DetachPrimary() {
  FootClass_Array.missionTimer[1] = 0; /*0x488690*/
}
} // namespace gamemd

// 0x48C3B0
namespace gamemd {
BOOL COMObject::IsValid() {
  return this->vt_slot_28() /*0x48c3cc*/
      && this->connect();
}
} // namespace gamemd

// 0x48E610
namespace gamemd {
int COMObject::GetMember09() {
  return this->__pad_009; /*0x48e613*/
}
} // namespace gamemd

// 0x490490
namespace gamemd {
int COMClass::RegisterAll() {
  int (__thiscall ***COMClass_field_0x08)(unsigned int, int); // ecx
  int result; // eax
  int (__thiscall ***COMClass_field_0x0C)(unsigned int, int); // ecx
  int (__thiscall ***COMClass_field_0x10)(unsigned int, int); // ecx
  int (__thiscall ***COMClass_field_0x14)(unsigned int, int); // ecx
  int (__thiscall ***COMClass_field_0x18)(unsigned int, int); // ecx
  int (__thiscall ***COMClass_field_0x1C)(unsigned int, int); // ecx
  int (__thiscall ***COMClass_field_0x20)(unsigned int, int); // ecx
  int (__thiscall ***COMClass_field_0x24)(unsigned int, int); // ecx
  int (__thiscall ***COMClass_field_0x28)(unsigned int, int); // ecx
  int (__thiscall ***COMClass_field_0x2C)(unsigned int, int); // ecx
  int (__thiscall ***COMClass_field_0x30)(unsigned int, int); // ecx
  int (__thiscall ***COMClass_field_0x34)(unsigned int, int); // ecx
  int (__thiscall ***COMClass_field_0x38)(unsigned int, int); // ecx
  int (__thiscall ***COMClass_field_0x3C)(unsigned int, int); // ecx
  int (__thiscall ***COMClass_field_0x40)(unsigned int, int); // ecx
  int (__thiscall ***COMClass_field_0x44)(unsigned int, int); // ecx
  int (__thiscall ***COMClass_field_0x48)(unsigned int, int); // ecx
  int (__thiscall ***COMClass_field_0x4C)(unsigned int, int); // ecx
  int (__thiscall ***COMClass_field_0x50)(unsigned int, int); // ecx
  int (__thiscall ***v22)(unsigned int, int); // ecx
  int (__thiscall ***v23)(unsigned int, int); // ecx
  int (__thiscall ***v24)(unsigned int, int); // ecx
  int (__thiscall ***v25)(unsigned int, int); // ecx
  int (__thiscall ***v26)(unsigned int, int); // ecx
  int (__thiscall ***v27)(unsigned int, int); // ecx
  int (__thiscall ***v28)(unsigned int, int); // ecx
  int (__thiscall ***v29)(unsigned int, int); // ecx
  int (__thiscall ***v30)(unsigned int, int); // ecx
  int (__thiscall ***v31)(unsigned int, int); // ecx
  int (__thiscall ***v32)(unsigned int, int); // ecx
  int (__thiscall ***v33)(unsigned int, int); // ecx
  int (__thiscall ***v34)(unsigned int, int); // ecx
  int (__thiscall ***v35)(unsigned int, int); // ecx
  int (__thiscall ***v36)(unsigned int, int); // ecx
  int (__thiscall ***v37)(unsigned int, int); // ecx
  int (__thiscall ***v38)(unsigned int, int); // ecx
  int (__thiscall ***v39)(unsigned int, int); // ecx
  int (__thiscall ***v40)(unsigned int, int); // ecx
  int (__thiscall ***v41)(unsigned int, int); // ecx
  int (__thiscall ***v42)(unsigned int, int); // ecx
  int (__thiscall ***v43)(unsigned int, int); // ecx
  int (__thiscall ***v44)(unsigned int, int); // ecx
  int (__thiscall ***v45)(unsigned int, int); // ecx
  int (__thiscall ***v46)(unsigned int, int); // ecx
  int (__thiscall ***v47)(unsigned int, int); // ecx
  int (__thiscall ***v48)(unsigned int, int); // ecx
  int (__thiscall ***v49)(unsigned int, int); // ecx
  int (__thiscall ***v50)(unsigned int, int); // ecx
  int (__thiscall ***v51)(unsigned int, int); // ecx
  int (__thiscall ***v52)(unsigned int, int); // ecx
  int (__thiscall ***v53)(unsigned int, int); // ecx
  int (__thiscall ***v54)(unsigned int, int); // ecx
  int (__thiscall ***v55)(unsigned int, int); // ecx
  int (__thiscall ***v56)(unsigned int, int); // ecx
  int (__thiscall ***v57)(unsigned int, int); // ecx
  int (__thiscall ***v58)(unsigned int, int); // ecx
  int (__thiscall ***v59)(unsigned int, int); // ecx
  int (__thiscall ***v60)(unsigned int, int); // ecx
  int (__thiscall ***v61)(unsigned int, int); // ecx
  int (__thiscall ***v62)(unsigned int, int); // ecx
  int (__thiscall ***v63)(unsigned int, int); // ecx
  int (__thiscall ***v64)(unsigned int, int); // ecx
  int (__thiscall ***v65)(unsigned int, int); // ecx
  int (__thiscall ***v66)(unsigned int, int); // ecx
  int (__thiscall ***v67)(unsigned int, int); // ecx
  int (__thiscall ***v68)(unsigned int, int); // ecx
  int (__thiscall ***v69)(unsigned int, int); // ecx
  int (__thiscall ***v70)(unsigned int, int); // ecx
  int (__thiscall ***v71)(unsigned int, int); // ecx
  int (__thiscall ***v72)(unsigned int, int); // ecx
  int (__thiscall ***v73)(unsigned int, int); // ecx
  int (__thiscall ***v74)(unsigned int, int); // ecx
  int (__thiscall ***v75)(unsigned int, int); // ecx
  int (__thiscall ***v76)(unsigned int, int); // ecx
  int (__thiscall ***v77)(unsigned int, int); // ecx
  int (__thiscall ***v78)(unsigned int, int); // ecx
  int (__thiscall ***v79)(unsigned int, int); // ecx
  int (__thiscall ***v80)(unsigned int, int); // ecx
  int (__thiscall ***v81)(unsigned int, int); // ecx
  int (__thiscall ***v82)(unsigned int, int); // ecx
  int (__thiscall ***v83)(unsigned int, int); // ecx
  int (__thiscall ***v84)(unsigned int, int); // ecx
  int (__thiscall ***v85)(unsigned int, int); // ecx
  int (__thiscall ***v86)(unsigned int, int); // ecx
  int (__thiscall ***v87)(unsigned int, int); // ecx
  int (__thiscall ***v88)(unsigned int, int); // ecx
  int (__thiscall ***v89)(unsigned int, int); // ecx
  int (__thiscall ***v90)(unsigned int, int); // ecx
  int (__thiscall ***v91)(unsigned int, int); // ecx

  COMClass_field_0x08 = (int (__thiscall ***)(unsigned int, int))this->q008; /*0x490496*/
  if ( COMClass_field_0x08 ) /*0x49049b*/
    result = (**COMClass_field_0x08)(COMClass_field_0x08, 1); /*0x4904a1*/
  this->q008 = 0; /*0x4904a3*/
  COMClass_field_0x0C = (int (__thiscall ***)(unsigned int, int))this->q00C; /*0x4904a6*/
  if ( COMClass_field_0x0C ) /*0x4904ab*/
    result = (**COMClass_field_0x0C)(COMClass_field_0x0C, 1); /*0x4904b1*/
  this->q00C = 0; /*0x4904b3*/
  COMClass_field_0x10 = (int (__thiscall ***)(unsigned int, int))this->q010; /*0x4904b6*/
  if ( COMClass_field_0x10 ) /*0x4904bb*/
    result = (**COMClass_field_0x10)(COMClass_field_0x10, 1); /*0x4904c1*/
  this->q010 = 0; /*0x4904c3*/
  COMClass_field_0x14 = (int (__thiscall ***)(unsigned int, int))this->q014; /*0x4904c6*/
  if ( COMClass_field_0x14 ) /*0x4904cb*/
    result = (**COMClass_field_0x14)(COMClass_field_0x14, 1); /*0x4904d1*/
  this->q014 = 0; /*0x4904d3*/
  COMClass_field_0x18 = (int (__thiscall ***)(unsigned int, int))this->q018; /*0x4904d6*/
  if ( COMClass_field_0x18 ) /*0x4904db*/
    result = (**COMClass_field_0x18)(COMClass_field_0x18, 1); /*0x4904e1*/
  this->q018 = 0; /*0x4904e3*/
  COMClass_field_0x1C = (int (__thiscall ***)(unsigned int, int))this->q01C; /*0x4904e6*/
  if ( COMClass_field_0x1C ) /*0x4904eb*/
    result = (**COMClass_field_0x1C)(COMClass_field_0x1C, 1); /*0x4904f1*/
  this->q01C = 0; /*0x4904f3*/
  COMClass_field_0x20 = (int (__thiscall ***)(unsigned int, int))this->q020; /*0x4904f6*/
  if ( COMClass_field_0x20 ) /*0x4904fb*/
    result = (**COMClass_field_0x20)(COMClass_field_0x20, 1); /*0x490501*/
  this->q020 = 0; /*0x490503*/
  COMClass_field_0x24 = (int (__thiscall ***)(unsigned int, int))this->q024; /*0x490506*/
  if ( COMClass_field_0x24 ) /*0x49050b*/
    result = (**COMClass_field_0x24)(COMClass_field_0x24, 1); /*0x490511*/
  this->q024 = 0; /*0x490513*/
  COMClass_field_0x28 = (int (__thiscall ***)(unsigned int, int))this->q028; /*0x490516*/
  if ( COMClass_field_0x28 ) /*0x49051b*/
    result = (**COMClass_field_0x28)(COMClass_field_0x28, 1); /*0x490521*/
  this->q028 = 0; /*0x490523*/
  COMClass_field_0x2C = (int (__thiscall ***)(unsigned int, int))this->q02C; /*0x490526*/
  if ( COMClass_field_0x2C ) /*0x49052b*/
    result = (**COMClass_field_0x2C)(COMClass_field_0x2C, 1); /*0x490531*/
  this->q02C = 0; /*0x490533*/
  COMClass_field_0x30 = (int (__thiscall ***)(unsigned int, int))this->q030; /*0x490536*/
  if ( COMClass_field_0x30 ) /*0x49053b*/
    result = (**COMClass_field_0x30)(COMClass_field_0x30, 1); /*0x490541*/
  this->q030 = 0; /*0x490543*/
  COMClass_field_0x34 = (int (__thiscall ***)(unsigned int, int))this->q034; /*0x490546*/
  if ( COMClass_field_0x34 ) /*0x49054b*/
    result = (**COMClass_field_0x34)(COMClass_field_0x34, 1); /*0x490551*/
  this->q034 = 0; /*0x490553*/
  COMClass_field_0x38 = (int (__thiscall ***)(unsigned int, int))this->q038; /*0x490556*/
  if ( COMClass_field_0x38 ) /*0x49055b*/
    result = (**COMClass_field_0x38)(COMClass_field_0x38, 1); /*0x490561*/
  this->q038 = 0; /*0x490563*/
  COMClass_field_0x3C = (int (__thiscall ***)(unsigned int, int))this->q03C; /*0x490566*/
  if ( COMClass_field_0x3C ) /*0x49056b*/
    result = (**COMClass_field_0x3C)(COMClass_field_0x3C, 1); /*0x490571*/
  this->q03C = 0; /*0x490573*/
  COMClass_field_0x40 = (int (__thiscall ***)(unsigned int, int))this->q040; /*0x490576*/
  if ( COMClass_field_0x40 ) /*0x49057b*/
    result = (**COMClass_field_0x40)(COMClass_field_0x40, 1); /*0x490581*/
  this->q040 = 0; /*0x490583*/
  COMClass_field_0x44 = (int (__thiscall ***)(unsigned int, int))this->q044; /*0x490586*/
  if ( COMClass_field_0x44 ) /*0x49058b*/
    result = (**COMClass_field_0x44)(COMClass_field_0x44, 1); /*0x490591*/
  this->q044 = 0; /*0x490593*/
  COMClass_field_0x48 = (int (__thiscall ***)(unsigned int, int))this->q048; /*0x490596*/
  if ( COMClass_field_0x48 ) /*0x49059b*/
    result = (**COMClass_field_0x48)(COMClass_field_0x48, 1); /*0x4905a1*/
  this->q048 = 0; /*0x4905a3*/
  COMClass_field_0x4C = (int (__thiscall ***)(unsigned int, int))this->q04C; /*0x4905a6*/
  if ( COMClass_field_0x4C ) /*0x4905ab*/
    result = (**COMClass_field_0x4C)(COMClass_field_0x4C, 1); /*0x4905b1*/
  this->q04C = 0; /*0x4905b3*/
  COMClass_field_0x50 = (int (__thiscall ***)(unsigned int, int))this->q050; /*0x4905b6*/
  if ( COMClass_field_0x50 ) /*0x4905bb*/
    result = (**COMClass_field_0x50)(COMClass_field_0x50, 1); /*0x4905c1*/
  this->q050 = 0; /*0x4905c3*/
  v22 = (int (__thiscall ***)(unsigned int, int))this->u32_54; /*0x4905c6*/
  if ( v22 ) /*0x4905cb*/
    result = (**v22)(v22, 1); /*0x4905d1*/
  this->u32_54 = 0; /*0x4905d3*/
  v23 = (int (__thiscall ***)(unsigned int, int))this->Count; /*0x4905d6*/
  if ( v23 ) /*0x4905db*/
    result = (**v23)(v23, 1); /*0x4905e1*/
  this->Count = 0; /*0x4905e3*/
  v24 = (int (__thiscall ***)(unsigned int, int))this->u32_5C; /*0x4905e6*/
  if ( v24 ) /*0x4905eb*/
    result = (**v24)(v24, 1); /*0x4905f1*/
  this->u32_5C = 0; /*0x4905f3*/
  v25 = (int (__thiscall ***)(unsigned int, int))this->u32_60; /*0x4905f6*/
  if ( v25 ) /*0x4905fb*/
    result = (**v25)(v25, 1); /*0x490601*/
  this->u32_60 = 0; /*0x490603*/
  v26 = (int (__thiscall ***)(unsigned int, int))this->u32_64; /*0x490606*/
  if ( v26 ) /*0x49060b*/
    result = (**v26)(v26, 1); /*0x490611*/
  this->u32_64 = 0; /*0x490613*/
  v27 = (int (__thiscall ***)(unsigned int, int))this->__pad_01A; /*0x490616*/
  if ( v27 ) /*0x49061b*/
    result = (**v27)(v27, 1); /*0x490621*/
  this->__pad_01A = 0; /*0x490623*/
  v28 = (int (__thiscall ***)(unsigned int, int))this->u32_6C; /*0x490626*/
  if ( v28 ) /*0x49062b*/
    result = (**v28)(v28, 1); /*0x490631*/
  this->u32_6C = 0; /*0x490633*/
  v29 = (int (__thiscall ***)(unsigned int, int))this->u32_70; /*0x490636*/
  if ( v29 ) /*0x49063b*/
    result = (**v29)(v29, 1); /*0x490641*/
  this->u32_70 = 0; /*0x490643*/
  v30 = (int (__thiscall ***)(unsigned int, int))this->u32_74; /*0x490646*/
  if ( v30 ) /*0x49064b*/
    result = (**v30)(v30, 1); /*0x490651*/
  this->u32_74 = 0; /*0x490653*/
  v31 = (int (__thiscall ***)(unsigned int, int))this->u32_78; /*0x490656*/
  if ( v31 ) /*0x49065b*/
    result = (**v31)(v31, 1); /*0x490661*/
  this->u32_78 = 0; /*0x490663*/
  v32 = (int (__thiscall ***)(unsigned int, int))this->u32_7C; /*0x490666*/
  if ( v32 ) /*0x49066b*/
    result = (**v32)(v32, 1); /*0x490671*/
  this->u32_7C = 0; /*0x490673*/
  v33 = (int (__thiscall ***)(unsigned int, int))this->u32_8C; /*0x490676*/
  if ( v33 ) /*0x49067e*/
    result = (**v33)(v33, 1); /*0x490684*/
  this->u32_8C = 0; /*0x490686*/
  v34 = (int (__thiscall ***)(unsigned int, int))this->u32_90; /*0x49068c*/
  if ( v34 ) /*0x490694*/
    result = (**v34)(v34, 1); /*0x49069a*/
  this->u32_90 = 0; /*0x49069c*/
  v35 = (int (__thiscall ***)(unsigned int, int))this->u32_80; /*0x4906a2*/
  if ( v35 ) /*0x4906aa*/
    result = (**v35)(v35, 1); /*0x4906b0*/
  this->u32_80 = 0; /*0x4906b2*/
  v36 = (int (__thiscall ***)(unsigned int, int))this->u32_84; /*0x4906b8*/
  if ( v36 ) /*0x4906c0*/
    result = (**v36)(v36, 1); /*0x4906c6*/
  this->u32_84 = 0; /*0x4906c8*/
  v37 = (int (__thiscall ***)(unsigned int, int))this->u32_88; /*0x4906ce*/
  if ( v37 ) /*0x4906d6*/
    result = (**v37)(v37, 1); /*0x4906dc*/
  this->u32_88 = 0; /*0x4906de*/
  v38 = (int (__thiscall ***)(unsigned int, int))this->u32_94; /*0x4906e4*/
  if ( v38 ) /*0x4906ec*/
    result = (**v38)(v38, 1); /*0x4906f2*/
  this->u32_94 = 0; /*0x4906f4*/
  v39 = (int (__thiscall ***)(unsigned int, int))this->u32_98; /*0x4906fa*/
  if ( v39 ) /*0x490702*/
    result = (**v39)(v39, 1); /*0x490708*/
  this->u32_98 = 0; /*0x49070a*/
  v40 = (int (__thiscall ***)(unsigned int, int))this->u32_9C; /*0x490710*/
  if ( v40 ) /*0x490718*/
    result = (**v40)(v40, 1); /*0x49071e*/
  this->u32_9C = 0; /*0x490720*/
  v41 = (int (__thiscall ***)(unsigned int, int))this->u32_A0; /*0x490726*/
  if ( v41 ) /*0x49072e*/
    result = (**v41)(v41, 1); /*0x490734*/
  this->u32_A0 = 0; /*0x490736*/
  v42 = (int (__thiscall ***)(unsigned int, int))this->u32_A4; /*0x49073c*/
  if ( v42 ) /*0x490744*/
    result = (**v42)(v42, 1); /*0x49074a*/
  this->u32_A4 = 0; /*0x49074c*/
  v43 = (int (__thiscall ***)(unsigned int, int))this->u32_A8; /*0x490752*/
  if ( v43 ) /*0x49075a*/
    result = (**v43)(v43, 1); /*0x490760*/
  this->u32_A8 = 0; /*0x490762*/
  v44 = (int (__thiscall ***)(unsigned int, int))this->u32_AC; /*0x490768*/
  if ( v44 ) /*0x490770*/
    result = (**v44)(v44, 1); /*0x490776*/
  this->u32_AC = 0; /*0x490778*/
  v45 = (int (__thiscall ***)(unsigned int, int))this->u32_B0; /*0x49077e*/
  if ( v45 ) /*0x490786*/
    result = (**v45)(v45, 1); /*0x49078c*/
  this->u32_B0 = 0; /*0x49078e*/
  v46 = (int (__thiscall ***)(unsigned int, int))this->u32_B4; /*0x490794*/
  if ( v46 ) /*0x49079c*/
    result = (**v46)(v46, 1); /*0x4907a2*/
  this->u32_B4 = 0; /*0x4907a4*/
  v47 = (int (__thiscall ***)(unsigned int, int))this->u32_B8; /*0x4907aa*/
  if ( v47 ) /*0x4907b2*/
    result = (**v47)(v47, 1); /*0x4907b8*/
  this->u32_B8 = 0; /*0x4907ba*/
  v48 = (int (__thiscall ***)(unsigned int, int))this->u32_BC; /*0x4907c0*/
  if ( v48 ) /*0x4907c8*/
    result = (**v48)(v48, 1); /*0x4907ce*/
  this->u32_BC = 0; /*0x4907d0*/
  v49 = (int (__thiscall ***)(unsigned int, int))this->u32_C0; /*0x4907d6*/
  if ( v49 ) /*0x4907de*/
    result = (**v49)(v49, 1); /*0x4907e4*/
  this->u32_C0 = 0; /*0x4907e6*/
  v50 = (int (__thiscall ***)(unsigned int, int))this->u32_C4; /*0x4907ec*/
  if ( v50 ) /*0x4907f4*/
    result = (**v50)(v50, 1); /*0x4907fa*/
  this->u32_C4 = 0; /*0x4907fc*/
  v51 = (int (__thiscall ***)(unsigned int, int))this->u32_C8; /*0x490802*/
  if ( v51 ) /*0x49080a*/
    result = (**v51)(v51, 1); /*0x490810*/
  this->u32_C8 = 0; /*0x490812*/
  v52 = (int (__thiscall ***)(unsigned int, int))this->u32_CC; /*0x490818*/
  if ( v52 ) /*0x490820*/
    result = (**v52)(v52, 1); /*0x490826*/
  this->u32_CC = 0; /*0x490828*/
  v53 = (int (__thiscall ***)(unsigned int, int))this->u32_D0; /*0x49082e*/
  if ( v53 ) /*0x490836*/
    result = (**v53)(v53, 1); /*0x49083c*/
  this->u32_D0 = 0; /*0x49083e*/
  v54 = (int (__thiscall ***)(unsigned int, int))this->u32_D4; /*0x490844*/
  if ( v54 ) /*0x49084c*/
    result = (**v54)(v54, 1); /*0x490852*/
  this->u32_D4 = 0; /*0x490854*/
  v55 = (int (__thiscall ***)(unsigned int, int))this->u32_D8; /*0x49085a*/
  if ( v55 ) /*0x490862*/
    result = (**v55)(v55, 1); /*0x490868*/
  this->u32_D8 = 0; /*0x49086a*/
  v56 = (int (__thiscall ***)(unsigned int, int))this->u32_DC; /*0x490870*/
  if ( v56 ) /*0x490878*/
    result = (**v56)(v56, 1); /*0x49087e*/
  this->u32_DC = 0; /*0x490880*/
  v57 = (int (__thiscall ***)(unsigned int, int))this->u32_E0; /*0x490886*/
  if ( v57 ) /*0x49088e*/
    result = (**v57)(v57, 1); /*0x490894*/
  this->u32_E0 = 0; /*0x490896*/
  v58 = (int (__thiscall ***)(unsigned int, int))this->u32_E4; /*0x49089c*/
  if ( v58 ) /*0x4908a4*/
    result = (**v58)(v58, 1); /*0x4908aa*/
  this->u32_E4 = 0; /*0x4908ac*/
  v59 = (int (__thiscall ***)(unsigned int, int))this->u32_E8; /*0x4908b2*/
  if ( v59 ) /*0x4908ba*/
    result = (**v59)(v59, 1); /*0x4908c0*/
  this->u32_E8 = 0; /*0x4908c2*/
  v60 = (int (__thiscall ***)(unsigned int, int))this->u32_EC; /*0x4908c8*/
  if ( v60 ) /*0x4908d0*/
    result = (**v60)(v60, 1); /*0x4908d6*/
  v61 = (int (__thiscall ***)(unsigned int, int))this->u32_F0; /*0x4908d8*/
  this->u32_EC = 0; /*0x4908de*/
  if ( v61 ) /*0x4908e6*/
    result = (**v61)(v61, 1); /*0x4908ec*/
  v62 = (int (__thiscall ***)(unsigned int, int))this->u32_F4; /*0x4908ee*/
  this->u32_F0 = 0; /*0x4908f4*/
  if ( v62 ) /*0x4908fc*/
    result = (**v62)(v62, 1); /*0x490902*/
  v63 = (int (__thiscall ***)(unsigned int, int))this->u32_F8; /*0x490904*/
  this->u32_F4 = 0; /*0x49090a*/
  if ( v63 ) /*0x490912*/
    result = (**v63)(v63, 1); /*0x490918*/
  v64 = (int (__thiscall ***)(unsigned int, int))this->u32_FC; /*0x49091a*/
  this->u32_F8 = 0; /*0x490920*/
  if ( v64 ) /*0x490928*/
    result = (**v64)(v64, 1); /*0x49092e*/
  v65 = (int (__thiscall ***)(unsigned int, int))this->u32_100; /*0x490930*/
  this->u32_FC = 0; /*0x490936*/
  if ( v65 ) /*0x49093e*/
    result = (**v65)(v65, 1); /*0x490944*/
  v66 = (int (__thiscall ***)(unsigned int, int))this->u32_104; /*0x490946*/
  this->u32_100 = 0; /*0x49094c*/
  if ( v66 ) /*0x490954*/
    result = (**v66)(v66, 1); /*0x49095a*/
  v67 = (int (__thiscall ***)(unsigned int, int))this->u32_108; /*0x49095c*/
  this->u32_104 = 0; /*0x490962*/
  if ( v67 ) /*0x49096a*/
    result = (**v67)(v67, 1); /*0x490970*/
  v68 = (int (__thiscall ***)(unsigned int, int))this->u32_10C; /*0x490972*/
  this->u32_108 = 0; /*0x490978*/
  if ( v68 ) /*0x490980*/
    result = (**v68)(v68, 1); /*0x490986*/
  v69 = (int (__thiscall ***)(unsigned int, int))this->u32_110; /*0x490988*/
  this->u32_10C = 0; /*0x49098e*/
  if ( v69 ) /*0x490996*/
    result = (**v69)(v69, 1); /*0x49099c*/
  v70 = (int (__thiscall ***)(unsigned int, int))this->u32_114; /*0x49099e*/
  this->u32_110 = 0; /*0x4909a4*/
  if ( v70 ) /*0x4909ac*/
    result = (**v70)(v70, 1); /*0x4909b2*/
  v71 = (int (__thiscall ***)(unsigned int, int))this->u32_118; /*0x4909b4*/
  this->u32_114 = 0; /*0x4909ba*/
  if ( v71 ) /*0x4909c2*/
    result = (**v71)(v71, 1); /*0x4909c8*/
  v72 = (int (__thiscall ***)(unsigned int, int))this->u32_11C; /*0x4909ca*/
  this->u32_118 = 0; /*0x4909d0*/
  if ( v72 ) /*0x4909d8*/
    result = (**v72)(v72, 1); /*0x4909de*/
  v73 = (int (__thiscall ***)(unsigned int, int))this->u32_120; /*0x4909e0*/
  this->u32_11C = 0; /*0x4909e6*/
  if ( v73 ) /*0x4909ee*/
    result = (**v73)(v73, 1); /*0x4909f4*/
  v74 = (int (__thiscall ***)(unsigned int, int))this->u32_124; /*0x4909f6*/
  this->u32_120 = 0; /*0x4909fc*/
  if ( v74 ) /*0x490a04*/
    result = (**v74)(v74, 1); /*0x490a0a*/
  v75 = (int (__thiscall ***)(unsigned int, int))this->u32_128; /*0x490a0c*/
  this->u32_124 = 0; /*0x490a12*/
  if ( v75 ) /*0x490a1a*/
    result = (**v75)(v75, 1); /*0x490a20*/
  v76 = (int (__thiscall ***)(unsigned int, int))this->u32_12C; /*0x490a22*/
  this->u32_128 = 0; /*0x490a28*/
  if ( v76 ) /*0x490a30*/
    result = (**v76)(v76, 1); /*0x490a36*/
  v77 = (int (__thiscall ***)(unsigned int, int))this->u32_130; /*0x490a38*/
  this->u32_12C = 0; /*0x490a3e*/
  if ( v77 ) /*0x490a46*/
    result = (**v77)(v77, 1); /*0x490a4c*/
  v78 = (int (__thiscall ***)(unsigned int, int))this->u32_134; /*0x490a4e*/
  this->u32_130 = 0; /*0x490a54*/
  if ( v78 ) /*0x490a5c*/
    result = (**v78)(v78, 1); /*0x490a62*/
  v79 = (int (__thiscall ***)(unsigned int, int))this->u32_138; /*0x490a64*/
  this->u32_134 = 0; /*0x490a6a*/
  if ( v79 ) /*0x490a72*/
    result = (**v79)(v79, 1); /*0x490a78*/
  v80 = (int (__thiscall ***)(unsigned int, int))this->u32_13C; /*0x490a7a*/
  this->u32_138 = 0; /*0x490a80*/
  if ( v80 ) /*0x490a88*/
    result = (**v80)(v80, 1); /*0x490a8e*/
  v81 = (int (__thiscall ***)(unsigned int, int))this->u32_140; /*0x490a90*/
  this->u32_13C = 0; /*0x490a96*/
  if ( v81 ) /*0x490a9e*/
    result = (**v81)(v81, 1); /*0x490aa4*/
  v82 = (int (__thiscall ***)(unsigned int, int))this->u32_144; /*0x490aa6*/
  this->u32_140 = 0; /*0x490aac*/
  if ( v82 ) /*0x490ab4*/
    result = (**v82)(v82, 1); /*0x490aba*/
  v83 = (int (__thiscall ***)(unsigned int, int))this->u32_148; /*0x490abc*/
  this->u32_144 = 0; /*0x490ac2*/
  if ( v83 ) /*0x490aca*/
    result = (**v83)(v83, 1); /*0x490ad0*/
  v84 = (int (__thiscall ***)(unsigned int, int))this->u32_14C; /*0x490ad2*/
  this->u32_148 = 0; /*0x490ad8*/
  if ( v84 ) /*0x490ae0*/
    result = (**v84)(v84, 1); /*0x490ae6*/
  v85 = (int (__thiscall ***)(unsigned int, int))this->u32_150; /*0x490ae8*/
  this->u32_14C = 0; /*0x490aee*/
  if ( v85 ) /*0x490af6*/
    result = (**v85)(v85, 1); /*0x490afc*/
  v86 = (int (__thiscall ***)(unsigned int, int))this->u32_154; /*0x490afe*/
  this->u32_150 = 0; /*0x490b04*/
  if ( v86 ) /*0x490b0c*/
    result = (**v86)(v86, 1); /*0x490b12*/
  v87 = (int (__thiscall ***)(unsigned int, int))this->u32_158; /*0x490b14*/
  this->u32_154 = 0; /*0x490b1a*/
  if ( v87 ) /*0x490b22*/
    result = (**v87)(v87, 1); /*0x490b28*/
  v88 = (int (__thiscall ***)(unsigned int, int))this->u32_15C; /*0x490b2a*/
  this->u32_158 = 0; /*0x490b30*/
  if ( v88 ) /*0x490b38*/
    result = (**v88)(v88, 1); /*0x490b3e*/
  v89 = (int (__thiscall ***)(unsigned int, int))this->u32_160; /*0x490b40*/
  this->u32_15C = 0; /*0x490b46*/
  if ( v89 ) /*0x490b4e*/
    result = (**v89)(v89, 1); /*0x490b54*/
  v90 = (int (__thiscall ***)(unsigned int, int))this->u32_164; /*0x490b56*/
  this->u32_160 = 0; /*0x490b5c*/
  if ( v90 ) /*0x490b64*/
    result = (**v90)(v90, 1); /*0x490b6a*/
  v91 = (int (__thiscall ***)(unsigned int, int))this->u32_168; /*0x490b6c*/
  this->u32_164 = 0; /*0x490b72*/
  if ( v91 ) /*0x490b7a*/
    result = (**v91)(v91, 1); /*0x490b80*/
  this->u32_168 = 0; /*0x490b82*/
  return result; /*0x490b88*/
}
} // namespace gamemd

// 0x49EE60
namespace gamemd {
char StringVector::Release(int a2, unsigned int *a3) {
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x49ee6c*/
  {
    (this->IsInitialized) = 0; /*0x49ee76*/
    if ( a3 ) /*0x49ee7c*/
      v4 = a3; /*0x49ee92*/
    else
      v4 = (unsigned int *)operator new(4 * a2); /*0x49ee8e*/
    (this->IsInitialized) = 1; /*0x49ee96*/
    if ( v4 ) /*0x49ee9a*/
    {
      if ( *&this->Items ) /*0x49eea5*/
      {
        m_8 = this->Capacity; /*0x49eeac*/
        if ( a2 < m_8 ) /*0x49eeb1*/
          m_8 = a2; /*0x49eeb3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->Items + 4 * i - 4) ) /*0x49eeb9*/
          ++i; /*0x49eebe*/
        if ( (this->IsAllocated) ) /*0x49eecb*/
        {
          operator delete((void *)(*&this->Items)); /*0x49eed6*/
          *&this->Items = 0; /*0x49eede*/
        }
      }
      *&this->Items = v4; /*0x49eee7*/
      this->Capacity = a2; /*0x49eeef*/
      (this->IsAllocated) = a3 == 0; /*0x49eef2*/
      return 1; /*0x49eef8*/
    }
    else
    {
      return 0; /*0x49ee9f*/
    }
  }
  else
  {
    this->Cleanup5(); /*0x49ef02*/
    return 1; /*0x49ef08*/
  }
}
} // namespace gamemd

// 0x49EF80
namespace gamemd {
unsigned int StringVector::Remove(int a2) {
  if ( (this->q00C) ) /*0x49ef80*/
    return (unsigned int)(a2 - *&this->Items) >> 2; /*0x49ef95*/
  else
    return 0; /*0x49ef87*/
}
} // namespace gamemd

// 0x49EFA0
namespace gamemd {
unsigned int * StringVector::QueryInterface(char a2) {
  void *v3; // eax

  v3 = *&this->Items; /*0x49efa3*/
  /* X11: ptr_0 install elided (implicit via class virtuals 0x49efa6) — binary-proven install, was 0 */
  if ( v3 && (this->IsAllocated) ) /*0x49efb0*/
  {
    operator delete((v3)); /*0x49efb8*/
    *&this->Items = 0; /*0x49efc0*/
  }
  (this->IsAllocated) = 0; /*0x49efcb*/
  this->Capacity = 0; /*0x49efd1*/
  if ( (a2 & 1) != 0 ) /*0x49efd8*/
    operator delete((this)); /*0x49efdb*/
  return this->ptr_0; /*0x49efe5*/
}
} // namespace gamemd

// 0x49FF80
namespace gamemd {
int EnumConnectionsClass::QueryInterface(const void *a2, unsigned int *a3) {
  if ( !a3 ) /*0x49ff87*/
    return -2147467261; /*0x49ff89*/
  *a3 = 0; /*0x49ffa6*/
  if ( !memcmp(a2, &IID_IUnknown, 0x10u) ) /*0x49ffb0*/
    *a3 = this; /*0x49ffb4*/
  if ( !memcmp(a2, &unk_7F7CB0, 0x10u) ) /*0x49ffc4*/
    *a3 = this; /*0x49ffca*/
  if ( !*a3 ) /*0x49ffcc*/
    return -2147467262; /*0x49ffdd*/
  (*(void (__stdcall **)(EnumConnectionsClass *))(*(unsigned int *)this->ptr_0 + 4))(this); /*0x49ffd4*/
  return 0; /*0x49ff8e*/
}
} // namespace gamemd

// 0x49FFF0
namespace gamemd {
LONG EnumConnectionsClass::AddRef() {
  ++*(unsigned int *)&g_MissionQueueFrame.waypoints[274]; /*0x49ffff*/
  return InterlockedIncrement(&this->q020); /*0x4a000b*/
}
} // namespace gamemd

// 0x4A0010
namespace gamemd {
LONG EnumConnectionsClass::Release() {
  LONG result; // eax
  int i; // esi
  void *EnumConnectionsClass_field_0x08; // eax
  int v4; // [esp-8h] [ebp-10h]

  --*(unsigned int *)&g_MissionQueueFrame.waypoints[274]; /*0x4a0020*/
  result = InterlockedDecrement(&this->q020); /*0x4a0027*/
  if ( !result && this ) /*0x4a0035*/
  {
    /* X11: ptr_0 install elided (implicit via class virtuals 0x4a0037) — binary-proven install, was 0 */
    for ( i = 0; i < this->q014; ++i ) /*0x4a0045*/
    {
      v4 = *(unsigned int *)(this->q008 + 8 * i); /*0x4a004d*/
      (*(void (__stdcall **)(int))(*(unsigned int *)v4 + 8))(v4); /*0x4a0050*/
    }
    this->__pad_004.ddtor(); /*0x4a0063*/
    EnumConnectionsClass_field_0x08 = (void *)this->q008; /*0x4a0066*/
    this->__pad_004 = (int)0; /*0x4a0069*/
    if ( EnumConnectionsClass_field_0x08 ) /*0x4a0071*/
    {
      if ( (this->u32_11) ) /*0x4a0073*/
      {
        operator delete((EnumConnectionsClass_field_0x08)); /*0x4a007b*/
        this->q008 = 0; /*0x4a0083*/
      }
    }
    (this->u32_11) = 0; /*0x4a008b*/
    this->q00C = 0; /*0x4a008f*/
    operator delete((this)); /*0x4a0096*/
    return 0; /*0x4a009e*/
  }
  return result; /*0x4a00a1*/
}
} // namespace gamemd

// 0x4A00B0
namespace gamemd {
int EnumConnectionsClass::ddtor(unsigned int a2, int a3, unsigned int *a4) {
  int v4; // edi
  int v6; // ebp
  unsigned int i; // ebx
  int v8; // eax
  int v9; // eax
  int EnumConnectionsClass_field_0x08; // ecx
  int v11; // [esp-10h] [ebp-14h]

  a3 = a3; /*0x4a00b1*/
  if ( !a3 ) /*0x4a00b7*/
    return -2147467261; /*0x4a00bf*/
  if ( a2 > 1 ) /*0x4a00cd*/
  {
    if ( !a4 ) /*0x4a00d1*/
      return -2147024809; /*0x4a00d9*/
    goto LABEL_7; /*0x4a00d1*/
  }
  if ( a4 ) /*0x4a00de*/
  LABEL_7:
    *a4 = 0; /*0x4a00e0*/
  v6 = 0; /*0x4a00ea*/
  for ( i = 0; i < a2; *(unsigned int *)(a3 - 4) = *(unsigned int *)(EnumConnectionsClass_field_0x08 + 8 * v9 + 4) ) /*0x4a00f3*/
  {
    v8 = this->u32_1C; /*0x4a00f9*/
    if ( v8 >= this->q014 ) /*0x4a0101*/
      break; /*0x4a0101*/
    v11 = *(unsigned int *)(this->q008 + 8 * v8); /*0x4a0109*/
    (*(void (__stdcall **)(int))(*(unsigned int *)v11 + 4))(v11); /*0x4a010c*/
    v9 = this->u32_1C; /*0x4a010f*/
    a3 += 8; /*0x4a0112*/
    ++v6; /*0x4a0115*/
    ++i; /*0x4a0116*/
    this->u32_1C = v9 + 1; /*0x4a011a*/
    EnumConnectionsClass_field_0x08 = this->q008; /*0x4a011d*/
    *(unsigned int *)(a3 - 8) = *(unsigned int *)(EnumConnectionsClass_field_0x08 + 8 * v9); /*0x4a0123*/
  }
  if ( a4 ) /*0x4a013b*/
    *a4 = v6; /*0x4a013d*/
  return v6 != 0 ? 0 : -2147467259;
}
} // namespace gamemd

// 0x4A0160
namespace gamemd {
int EnumConnectionsClass::Next(int a2) {
  this->u32_1C += a2; /*0x4a016d*/
  return 0; /*0x4a0172*/
}
} // namespace gamemd

// 0x4A0920
namespace gamemd {
int EnumConnectionPointsClass::QueryInterface(const void *a2, unsigned int *a3) {
  EnumConnectionPointsClass *v4; // eax

  if ( !a3 ) /*0x4a0928*/
    return -2147467261; /*0x4a092b*/
  v4 = 0; /*0x4a093a*/
  if ( !memcmp(a2, &unk_7F7CE0, 0x10u) || !memcmp(a2, &IID_IUnknown, 0x10u) ) /*0x4a0960*/
    v4 = this; /*0x4a0964*/
  *a3 = v4; /*0x4a0967*/
  if ( !v4 ) /*0x4a096d*/
    return -2147467262; /*0x4a097d*/
  (*(void (__stdcall **)(EnumConnectionPointsClass *))(*(unsigned int *)this->ptr_0 + 4))(this); /*0x4a0972*/
  return 0; /*0x4a092a*/
}
} // namespace gamemd

// 0x4A0990
namespace gamemd {
LONG EnumConnectionPointsClass::AddRef() {
  ++*(unsigned int *)&g_MissionQueueFrame.waypoints[274]; /*0x4a099f*/
  return InterlockedIncrement(&this->q008); /*0x4a09ab*/
}
} // namespace gamemd

// 0x4A09B0
namespace gamemd {
LONG EnumConnectionPointsClass::Release() {
  LONG result; // eax
  int i; // esi
  void *EnumConnectionPointsClass_field_0x10; // eax
  int v4; // [esp-8h] [ebp-10h]

  --*(unsigned int *)&g_MissionQueueFrame.waypoints[274]; /*0x4a09c0*/
  result = InterlockedDecrement(&this->q008); /*0x4a09c7*/
  if ( !result && this ) /*0x4a09d5*/
  {
    /* X11: ptr_0 install elided (implicit via class virtuals 0x4a09d7) — binary-proven install, was 0 */
    for ( i = 0; i < this->q01C; ++i ) /*0x4a09e5*/
    {
      v4 = *(unsigned int *)(this->q010 + 4 * i); /*0x4a09ed*/
      (*(void (__stdcall **)(int))(*(unsigned int *)v4 + 8))(v4); /*0x4a09f0*/
    }
    this->q00C.ddtor(); /*0x4a0a03*/
    EnumConnectionPointsClass_field_0x10 = (void *)this->q010; /*0x4a0a06*/
    this->q00C = (int)0; /*0x4a0a09*/
    if ( EnumConnectionPointsClass_field_0x10 ) /*0x4a0a11*/
    {
      if ( (this->u32_19) ) /*0x4a0a13*/
      {
        operator delete((EnumConnectionPointsClass_field_0x10)); /*0x4a0a1b*/
        this->q010 = 0; /*0x4a0a23*/
      }
    }
    (this->u32_19) = 0; /*0x4a0a2b*/
    this->q014 = 0; /*0x4a0a2f*/
    operator delete((this)); /*0x4a0a36*/
    return 0; /*0x4a0a3e*/
  }
  return result; /*0x4a0a41*/
}
} // namespace gamemd

// 0x4A0A50
namespace gamemd {
int EnumConnectionPointsClass::ddtor(unsigned int a2, int a3, unsigned int *a4) {

  unsigned int *v4; // ebx
  int v6; // ebp
  unsigned int i; // edi
  int EnumConnectionPointsClass_field_0x04; // eax
  int v9; // eax
  int v10; // [esp-10h] [ebp-14h]

  v4 = (unsigned int *)a3; /*0x4a0a51*/
  if ( !a3 ) /*0x4a0a57*/
    return -2147467261; /*0x4a0a5f*/
  if ( a2 > 1 ) /*0x4a0a6d*/
  {
    if ( !a4 ) /*0x4a0a71*/
      return -2147467261; /*0x4a0a79*/
    goto LABEL_7; /*0x4a0a71*/
  }
  if ( a4 ) /*0x4a0a7e*/
LABEL_7:
    *a4 = 0; /*0x4a0a80*/
  v6 = 0; /*0x4a0a8a*/
  for ( i = 0; i < a2; *(v4 - 1) = *(unsigned int *)(this->EnumConnectionPointsClass_field_0x10 + 4 * v9) ) /*0x4a0a93*/
  {
    EnumConnectionPointsClass_field_0x04 = this->EnumConnectionPointsClass_field_0x04; /*0x4a0a99*/
    if ( EnumConnectionPointsClass_field_0x04 >= this->EnumConnectionPointsClass_field_0x1C ) /*0x4a0aa1*/
      break; /*0x4a0aa1*/
    v10 = *(unsigned int *)(this->EnumConnectionPointsClass_field_0x10 + 4 * EnumConnectionPointsClass_field_0x04); /*0x4a0aa9*/
    (*(void (**)(int))(*(unsigned int *)v10 + 4))(v10); /*0x4a0aac*/
    v9 = this->EnumConnectionPointsClass_field_0x04; /*0x4a0aaf*/
    ++v4; /*0x4a0ab2*/
    ++v6; /*0x4a0ab5*/
    ++i; /*0x4a0ab6*/
    this->EnumConnectionPointsClass_field_0x04 = v9 + 1; /*0x4a0aba*/
  }
  if ( a4 ) /*0x4a0ad4*/
    *a4 = v6; /*0x4a0ad6*/
  return v6 != 0 ? 0 : -2147467259;

}
} // namespace gamemd

// 0x4A0AF0
namespace gamemd {
int EnumConnectionPointsClass::Next(int a2) {
  this->__pad_004 += a2; /*0x4a0afd*/
  return 0; /*0x4a0b02*/
}
} // namespace gamemd

// 0x4A1D70
namespace gamemd {
int Checksummer::Add_float(int a2) {
  return Checksummer::Add_Buffer(this, (uint8_t *)&a2, 4); /*0x4a1d84*/
}
} // namespace gamemd

// 0x4A1D90
namespace gamemd {
int Checksummer::Add_double(int a2, int a3) {
  return Checksummer::Add_Buffer(this, (uint8_t *)&a2, 8); /*0x4a1dac*/
}
} // namespace gamemd

// 0x4A2600
namespace gamemd {
char CountdownTimer::UpdateDisplay(char a2) {

  int uniqueId; // edi
  void **pList; // ebx
  int v5; // eax
  int abstractFlags; // eax
  CountdownTimer v7; // eax
  void *ptr_8; // ecx
  int v9; // edx
  CountdownTimer v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // ecx

  dword_89F95C = *(unsigned int *)&MEMORY[0xA8EB00 + 416]; /*0x4a260f*/
  if ( MEMORY[0xA83D4C] == (Object *)HouseClass_Observer ) /*0x4a261b*/
  {
    uniqueId = dword_A8B230[43].uniqueId; /*0x4a262a*/
    if ( dword_A8B230[43].ptr_8 != (void *)-1 ) /*0x4a2639*/
    {
      pList = &dword_A8B230[43].ptr_2; /*0x4a2630*/
      uniqueId += Timer::GetTicks() - (unsigned int)*pList; /*0x4a2645*/
    }
    v5 = this->u32_4; /*0x4a265b*/
    *this = (CountdownTimer)(uniqueId / 60); /*0x4a2660*/
    if ( uniqueId / 60 != v5 || (LOBYTE(abstractFlags) = a2) != 0 ) /*0x4a266a*/
    {
      this->u32_4 = uniqueId / 60; /*0x4a2670*/
LABEL_26:
      this->u32_8 = 1; /*0x4a2757*/
      (abstractFlags) = ((abstractFlags) & ~0xFF) | ((MapClass::MarkForRedraw((GScreenClass *)&DataGlobal_87F7E8, 0)) & 0xFF); /*0x4a2761*/
      byte_884B90 = 1; /*0x4a2766*/
      return abstractFlags; /*0x4a2766*/
    }
    return abstractFlags; /*0x4a266a*/
  }
  v7 = (CountdownTimer)(*(int (**)(char *))(*(unsigned int *)&MEMORY[0xA83D4C]->__pad_C[24] + 24))(&MEMORY[0xA83D4C]->__pad_C[24]); /*0x4a2684*/
  *this = v7; /*0x4a2689*/
  *this = *(int *)&v7 <= 0 ? 0 : v7;
  if ( dword_A8B230[127].ptr_C != (void *)-1 ) /*0x4a26a7*/
    goto LABEL_12; /*0x4a26a7*/
  abstractFlags = dword_A8B230[127].abstractFlags; /*0x4a26a9*/
  ptr_8 = dword_A8B230[127].ptr_C; /*0x4a26af*/
  if ( ptr_8 != (void *)-1 ) /*0x4a26b8*/
  {
    if ( *(unsigned int *)&MEMORY[0xA8EB00 + 416] - (int)ptr_8 >= abstractFlags ) /*0x4a26c4*/
      goto LABEL_13; /*0x4a26c4*/
    abstractFlags -= *(unsigned int *)&MEMORY[0xA8EB00 + 416] - (unsigned int)ptr_8; /*0x4a26c6*/
  }
  if ( abstractFlags ) /*0x4a26ca*/
  {
LABEL_12:
    this->u32_8 = 1; /*0x4a26d3*/
    (abstractFlags) = ((abstractFlags) & ~0xFF) | ((MapClass::MarkForRedraw((GScreenClass *)&DataGlobal_87F7E8, 0)) & 0xFF); /*0x4a26d6*/
  }
LABEL_13:
  v9 = this->u32_4; /*0x4a26db*/
  v10 = *this; /*0x4a26de*/
  if ( v9 != *this )
  {
    if ( a2 )
    {
      this->u32_A = 0; /*0x4a26f0*/
      this->u32_4 = v10; /*0x4a26f4*/
    }
    else
    {
      v11 = this->u32_C; /*0x4a26f9*/
      if ( v11 ) /*0x4a26fe*/
        this->u32_C = v11 - 1; /*0x4a2701*/
      this->u32_C = *(unsigned int *)&v10 - v9 <= 0 ? 3 : 1;
      v12 = (int)abs32(*(unsigned int *)&v10 - v9) >> 3; /*0x4a271e*/
      if ( v12 >= 1 ) /*0x4a2723*/
      {
        if ( v12 > 143 ) /*0x4a272e*/
          v12 = 143; /*0x4a2730*/
      }
      else
      {
        v12 = 1; /*0x4a2725*/
      }
      if ( this->u32_4 > *(unsigned int *)&v10 ) /*0x4a2738*/
        v12 = -v12; /*0x4a273a*/
      v13 = v12 + this->u32_4; /*0x4a273f*/
      this->u32_4 = v13; /*0x4a2743*/
      if ( v13 - v12 != v13 ) /*0x4a274a*/
      {
        this->u32_A = 1; /*0x4a2751*/
        this->u32_9 = v12 > 0; /*0x4a2754*/
      }
    }
    goto LABEL_26; /*0x4a26f7*/
  }
  return abstractFlags; /*0x4a276c*/

}
} // namespace gamemd

// 0x4A2930
namespace gamemd {
LONG CStreamClass::AddRef() {
  ++*(unsigned int *)&g_MissionQueueFrame.waypoints[274]; /*0x4a293f*/
  return InterlockedIncrement(&this->m_C); /*0x4a294b*/
}
} // namespace gamemd

// 0x4A2950
namespace gamemd {
LONG CStreamClass::Release() {
  LONG v1; // esi

  --*(unsigned int *)&g_MissionQueueFrame.waypoints[274]; /*0x4a2960*/
  v1 = InterlockedDecrement(&this->m_C); /*0x4a296d*/
  if ( !v1 && this ) /*0x4a2975*/
    this->ddtor_15(1); /*0x4a297d*/
  return v1; /*0x4a2982*/
}
} // namespace gamemd

// 0x4A2990
namespace gamemd {
int CStreamClass::QueryInterface(const void *a2, unsigned int *a3) {
  int *p_CStreamClass_field_0x04; // ecx

  if ( !a3 ) /*0x4a2997*/
    return -2147467261; /*0x4a2999*/
  *a3 = 0; /*0x4a29b6*/
  if ( !memcmp(a2, &IID_IUnknown, 0x10u) ) /*0x4a29c0*/
    *a3 = this; /*0x4a29c4*/
  if ( !memcmp(a2, &unk_7F7CF0, 0x10u) ) /*0x4a29d5*/
    *a3 = this; /*0x4a29da*/
  if ( !memcmp(a2, &unk_7E9530, 0x10u) ) /*0x4a29ea*/
  {
    if ( this ) /*0x4a29f2*/
      p_CStreamClass_field_0x04 = &this->IStream_field_00; /*0x4a29f4*/
    else
      p_CStreamClass_field_0x04 = 0; /*0x4a29f9*/
    *a3 = p_CStreamClass_field_0x04; /*0x4a29fb*/
  }
  if ( !*a3 ) /*0x4a29fd*/
    return -2147467262; /*0x4a2a02*/
  (*(void (__stdcall **)(CStreamClass *))(*(unsigned int *)this->IStream_field_00 + 4))(this); /*0x4a2a0e*/
  return 0; /*0x4a299e*/
}
} // namespace gamemd

// 0x4A2A20
namespace gamemd {
int CStreamClass::StubReturnNullPointer(int (__stdcall ***a2)(unsigned int, void *, unsigned int)) {
  int v3; // ebx
  int v4; // eax
  int CStreamClass_field_0x04; // eax
  int (__stdcall ***v6)(int, void *, int); // edi

  if ( !a2 ) /*0x4a2a27*/
    return -2147467261; /*0x4a2a29*/
  if ( this->IStream_field_00 ) /*0x4a2a36*/
    return -2147467259; /*0x4a2a3d*/
  v3 = (**a2)(a2, &unk_81FC50, &a2); /*0x4a2a56*/
  if ( v3 >= 0 ) /*0x4a2a5a*/
  {
    CStreamClass_field_0x04 = this->IStream_field_00; /*0x4a2a72*/
    v6 = a2; /*0x4a2a76*/
    if ( CStreamClass_field_0x04 ) /*0x4a2a7c*/
      (*(void (__stdcall **)(int))(*(int *)CStreamClass_field_0x04 + 8))(CStreamClass_field_0x04); /*0x4a2a81*/
    this->IStream_field_00 = (int)v6; /*0x4a2a84*/
  }
  else
  {
    v4 = this->IStream_field_00; /*0x4a2a5c*/
    if ( v4 ) /*0x4a2a61*/
      (*(void (__stdcall **)(int))(*(int *)v4 + 8))(this->IStream_field_00); /*0x4a2a66*/
    this->IStream_field_00 = 0; /*0x4a2a69*/
  }
  if ( v3 < 0 && v3 != -2147467262 ) /*0x4a2a92*/
    sub_7DC720(v3); /*0x4a2a95*/
  return 0; /*0x4a2a2e*/
}
} // namespace gamemd

// 0x4A2AB0
namespace gamemd {
int CStreamClass::StreamRead(unsigned int *a2) {
  char *v2; // ecx
  int result; // eax
  ULONG v4; // [esp+0h] [ebp-4h]

  v2 = (char *)this - 4; /*0x4a2ab8*/
  if ( (this->IsAllocated) && *((int *)v2 + 5) > 0 && v2->u32_8 ) /*0x4a2ac6*/
    IStream::Read(*((IStream **)v2 + 6), *((void **)v2 + 5), v4); /*0x4a2ad2*/
  if ( !this->IStream_field_00 ) /*0x4a2ad7*/
    return -2147467259; /*0x4a2ade*/
  if ( a2 ) /*0x4a2aee*/
  {
    if ( !this->IStream_field_00 ) /*0x4a2af0*/
      sub_7DC720(-2147467261); /*0x4a2afc*/
    (*(void (__stdcall **)(int))(*(unsigned int *)this->IStream_field_00 + 4))(this->IStream_field_00); /*0x4a2b07*/
    *a2 = this->IStream_field_00; /*0x4a2b0d*/
  }
  if ( !this->IStream_field_00 ) /*0x4a2b0f*/
    sub_7DC720(-2147467261); /*0x4a2b1c*/
  result = (*(int (__stdcall **)(int, unsigned int))(*(unsigned int *)this->IStream_field_00 + 32))( /*0x4a2b29*/
             this->IStream_field_00,
             0);
  if ( result >= 0 ) /*0x4a2b2e*/
  {
    if ( !this->IStream_field_00 ) /*0x4a2b30*/
      sub_7DC720(-2147467261); /*0x4a2b3c*/
    (*(void (__stdcall **)(int))(*(unsigned int *)this->IStream_field_00 + 8))(this->IStream_field_00); /*0x4a2b47*/
    this->IStream_field_00 = 0; /*0x4a2b4a*/
    return 0; /*0x4a2b51*/
  }
  return result; /*0x4a2ae3*/
}
} // namespace gamemd

// 0x4A3840
namespace gamemd {
int StructTable::Append(const void *a2) {
  int v3; // ecx

  v3 = this->u32_18000; /*0x4a3842*/
  if ( v3 == 1024 ) /*0x4a384e*/
    return 1; /*0x4a3850*/
  memcpy(&this->u32_18000 * v3, a2, 0x60u); /*0x4a386b*/
  ++this->u32_18000; /*0x4a3876*/
  return 0; /*0x4a3855*/
}
} // namespace gamemd

// 0x4A51D0
namespace gamemd {
int Flag::CheckNone() {
  int result; // eax

  (*((unsigned char *)&(result))) = !this->u32_18 && !this->u32_19; /*0x4a51e1*/
  return result; /*0x4a51e0*/
}
} // namespace gamemd

// 0x4AB9B0
namespace gamemd {
int PlayerClass::ExecuteCommand(int a2, int16_t *a3, void *a4, int a5, int a6) {

  House **v6; // esi
  __int16 v8; // cx
  int v9; // ecx
  char *v10; // eax
  char v11; // cl
  __int16 v12; // dx
  int v13; // esi
  int DisplayClass_field_0x11A8; // ecx
  int v15; // eax
  char *v16; // eax
  Selection *v17; // esi
  Selection *v18; // eax
  int v19; // ecx
  int v20; // edx
  int v21; // edx
  int v22; // eax
  int v23; // edx
  const void *v24; // eax
  int result; // eax
  int v26; // ebx
  int DisplayClass_field_0x0; // edx
  int v28; // ebx
  House *v29; // eax
  PlayerClass *v30; // eax
  int v31; // eax
  int v32; // eax
  char *v33; // eax
  char BuildingINIEntry; // bl
  char BuildingINI; // al
  unsigned char *WaypointCoords; // eax
  int v37; // edx
  char v38; // al
  unsigned char *v39; // eax
  int v40; // edx
  unsigned char *v41; // eax
  int v42; // eax
  unsigned char *v43; // eax
  char *v44; // eax
  int FirstOfAction; // eax
  char *v46; // eax
  int v47; // [esp-Ch] [ebp-9Ch]
  int v48; // [esp-8h] [ebp-98h]
  unsigned __int8 v49; // [esp-8h] [ebp-98h]
  int v50; // [esp-4h] [ebp-94h]
  int v51; // [esp-4h] [ebp-94h]
  char v52; // [esp+0h] [ebp-90h]
  MapClass *v53; // [esp+4h] [ebp-8Ch]
  ObjectClass *v54; // [esp+4h] [ebp-8Ch]
  int v55; // [esp+14h] [ebp-7Ch] BYREF
  __int16 v56[4]; // [esp+18h] [ebp-78h] BYREF
  char v57[112]; // [esp+20h] [ebp-70h] BYREF

  v6 = (House **)a4; /*0x4ab9b6*/
  if ( a4 /*0x4ab9ed*/
    && stru_A8E960.random[488]
    && stru_A8E960.nextScenario[64]
    && !stru_A8E960.random[503]
    && (*(int (**)(void *, unsigned int, unsigned int))(*(unsigned int *)a4 + 104))(a4, 0, 0) == 5 )
  {
    v6 = 0; /*0x4ab9ef*/
  }
  if ( !*&this->u32_11A4 ) /*0x4ab9f9*/
  {
    v26 = 0; /*0x4abca1*/
    if ( this->__pad_11B4[27] ) /*0x4abc94*/
    {
      g_TacticalClass_Instance[863].__tail_0[1] = 1; /*0x4abcaf*/
      if ( !(unsigned __int8)Mouse::IsButtonDown(0x10u) ) /*0x4abcbc*/
      {
        if ( PlayerClass::HasOccupiedCell((PlayerClass *)g_TacticalClass_Instance) ) /*0x4abccb*/
          MapClass::UnselectAll_ClearLimboLaunchers(v53); /*0x4abcd4*/
        else
          v26 = 1; /*0x4abcdb*/
      }
      PlayerClass::ProcessOccupancyUpdate( /*0x4abceb*/
        (PlayerClass *)g_TacticalClass_Instance,
        (void (*)(unsigned char *))PlayerClass::CheckHumanPlayer);
      FrameTimer::Init25(); /*0x4abcf0*/
      DisplayClass_field_0x0 = this->DisplayClass_field_0x0; /*0x4abcf5*/
      this->__pad_11B4[27] = 0; /*0x4abcfd*/
      (*(void (**)(DisplayClass *, unsigned int, int))(DisplayClass_field_0x0 + 72))(this, 0, a6); /*0x4abd04*/
      LOBYTE(this->DisplayClass_field_0x11D0) = 0; /*0x4abd07*/
      stru_A8E960.random[553] = 1; /*0x4abd0e*/
      if ( !v26 ) /*0x4abd17*/
        goto LABEL_121; /*0x4abd17*/
    }
    v28 = a5; /*0x4abd1d*/
    if ( a5 == 8 ) /*0x4abd27*/
    {
      if ( v6 ) /*0x4abd2f*/
      {
        if ( *(unsigned int *)&stru_A8E960.random[340] ) /*0x4abd3c*/
        {
          v29 = (House *)(*(int (**)(unsigned int))(***(unsigned int ***)&stru_A8E960.random[328] + 60))(**(unsigned int **)&stru_A8E960.random[328]); /*0x4abd4b*/
          if ( (unsigned __int8)House::IsHumanPlayer(v29) ) /*0x4abd50*/
          {
            if ( v6->isSelected ) /*0x4abd59*/
            {
              if ( Selection::GetFlag() ) /*0x4abd63*/
              {
                v30 = (PlayerClass *)(*(int (**)(House **))&(*v6)->__pad_7C[12])(v6); /*0x4abd70*/
                PlayerClass::UpdateAIUnits(&v30->q024); /*0x4abd7b*/
              }
              else
              {
                (*(void (**)(House **))&(*v6)->__pad_7C[212])(v6); /*0x4abd89*/
              }
            }
            else if ( Selection::GetFlag() ) /*0x4abd94*/
            {
              v31 = (*(int (**)(House **))&(*v6)->__pad_7C[12])(v6); /*0x4abda1*/
              MoveFeedback::ProcessCommand((MoveFeedback *)(v31 + 36)); /*0x4abdac*/
            }
            else
            {
              (*(void (**)(House **))&(*v6)->__pad_7C[208])(v6); /*0x4abdba*/
            }
            goto LABEL_92; /*0x4abd80*/
          }
        }
      }
      v28 = 7; /*0x4abdc5*/
      a5 = 7; /*0x4abdca*/
    }
    else if ( a5 != 7 ) /*0x4abdd6*/
    {
      if ( a5 ) /*0x4abde3*/
        goto LABEL_64; /*0x4abde3*/
      if ( !v6 || !(*(unsigned __int8 (**)(House **))&(*v6)->__pad_7C[188])(v6) || v6->isSelected ) /*0x4abe03*/
        goto LABEL_120; /*0x4abe0b*/
      v28 = 0; /*0x4abe11*/
LABEL_56:
      if ( (*(int (**)(House **))&(*v6)->House_field_0x29[3])(v6) != 6 /*0x4abe40*/
        || (unsigned __int8)House::IsHumanPlayer(v6[135])
        || v6->Translucency != 15
        || (*(unsigned __int8 (**)(House **))&(*v6)->__pad_2B0[120])(v6) )
      {
        MapClass::UnselectAll_ClearLimboLaunchers(v53); /*0x4abe4a*/
        if ( Selection::GetFlag() ) /*0x4abe4f*/
        {
          v32 = (*(int (**)(House **))&(*v6)->__pad_7C[12])(v6); /*0x4abe5c*/
          MoveFeedback::ProcessCommand((MoveFeedback *)(v32 + 36)); /*0x4abe67*/
        }
        else
        {
          (*(void (**)(House **))&(*v6)->__pad_7C[208])(v6); /*0x4abe72*/
        }
        (*(void (**)(DisplayClass *, unsigned int, int))(this->DisplayClass_field_0x0 + 72))(this, 0, a6); /*0x4abe80*/
        FrameTimer::Init25(); /*0x4abe83*/
      }
LABEL_64:
      if ( v28 == 61 ) /*0x4abe8b*/
      {
        v33 = (char *)((CellCoord *)&dword_87F7E8)->To_CellObj(a3); /*0x4abe9a*/
        PlayerClass::FindNearestWaypoint( /*0x4abed7*/
          (PlayerClass *)&g_VisibilitySystem,
          (*a3 << 8) + 128,
          (a3[1] << 8) + 128,
          dword_8A0740 * v33[283]);
      }
      else if ( v28 ) /*0x4abee3*/
      {
        if ( a5 != 7 ) /*0x4abef3*/
        {
          if ( a5 == 10 /*0x4abf8e*/
            || a5 == 12
            || a5 == 13
            || a5 == 14
            || a5 == 15
            || a5 == 33
            || a5 == 34
            || a5 == 20
            || a5 == 37
            || a5 == 69
            || a5 == 70
            || a5 == 38
            || a5 == 39
            || a5 == 40
            || a5 == 41
            || a5 == 65
            || a5 == 66
            || a5 == 67
            || a5 == 68
            || a5 == 72
            || a5 == 58
            || a5 == 60
            || (BuildingINIEntry = ReadBuildingINIEntry((ObjectClass *)v53),
                BuildingINI = ReadBuildingINI(v54),
                BuildingINIEntry)
            && BuildingINI )
          {
LABEL_92:
            DispatchSelectionWaypointMove((int)v6, *(unsigned int *)a3, a5, (int)v53); /*0x4abf94*/
            FrameTimer::Init25(); /*0x4abfae*/
            if ( a5 == 33 ) /*0x4abfbc*/
            {
              if ( (*(int (**)(House **))&(*v6)->House_field_0x29[3])(v6) != 6 ) /*0x4abfc8*/
                goto LABEL_117; /*0x4abfc8*/
              if ( *((unsigned char *)v6 + 1632) ) /*0x4abfce*/
              {
                WaypointCoords = ScriptAction::GetWaypointCoords((ScriptAction *)v56, v6); /*0x4abfdd*/
                v37 = *(unsigned int *)WaypointCoords; /*0x4abfe2*/
                v38 = WaypointCoords[4]; /*0x4abfe9*/
                v49 = 2; /*0x4abfec*/
              }
              else
              {
                v39 = ScriptAction::GetWaypointCoords((ScriptAction *)v56, v6); /*0x4ac00a*/
                v37 = *(unsigned int *)v39; /*0x4ac00f*/
                v38 = v39[4]; /*0x4ac016*/
                v49 = 1; /*0x4ac019*/
              }
              v51 = v37; /*0x4abfee*/
              v52 = v38; /*0x4abff0*/
              v47 = *(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 48); /*0x4ac000*/
            }
            else
            {
              if ( a5 == 60 ) /*0x4ac03d*/
              {
                if ( !dword_A8B538[0] ) /*0x4ac046*/
                {
                  v40 = *((char *)((CellCoord *)&dword_87F7E8)->To_CellObj(a3) + 283); /*0x4ac05a*/
                  PlacePlayerBeacon( /*0x4ac09d*/
                    &g_VisibilitySystem,
                    *(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 48),
                    (*a3 << 8) + 128,
                    (a3[1] << 8) + 128,
                    dword_8A0740 * v40,
                    -1);
                }
                MapClass::ToggleZoom((MapClass *)&dword_87F7E8, 0); /*0x4ac0a9*/
                (*(void (**)(DisplayClass *, unsigned int, int))(this->DisplayClass_field_0x0 + 72))(this, 0, a6); /*0x4ac0b6*/
                goto LABEL_117; /*0x4ac0b9*/
              }
              if ( a5 == 10 ) /*0x4ac0c1*/
              {
                if ( (*(int (**)(House **))&(*v6)->House_field_0x29[3])(v6) != 6 ) /*0x4ac0cd*/
                  goto LABEL_117; /*0x4ac0cd*/
                v41 = ScriptAction::GetWaypointCoords((ScriptAction *)v56, v6); /*0x4ac0d8*/
                v49 = 21; /*0x4ac0e7*/
                v51 = *(unsigned int *)v41; /*0x4ac0e9*/
                v52 = v41[4]; /*0x4ac0eb*/
                v47 = *(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 48); /*0x4ac0fb*/
              }
              else
              {
                if ( a5 == 13 ) /*0x4ac104*/
                {
                  if ( !v6 ) /*0x4ac108*/
                    goto LABEL_117; /*0x4ac108*/
                  v42 = (*(int (**)(House **))&(*v6)->House_field_0x29[3])(v6); /*0x4ac112*/
                  if ( v42 <= 0 || v42 > 2 ) /*0x4ac120*/
                    goto LABEL_117; /*0x4ac120*/
                }
                else
                {
                  if ( a5 != 12 ) /*0x4ac154*/
                    goto LABEL_117; /*0x4ac154*/
                  if ( !v6 ) /*0x4ac15c*/
                  {
                    v44 = PlayerClass::SetTargetOrClear( /*0x4ac1b2*/
                            v57,
                            *(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 48),
                            23,
                            a3);
                    if ( *(int *)&dword_A802C8 < 128 ) /*0x4ac1c1*/
                    {
LABEL_116:
                      memcpy(&byte_A802D4[111 * dword_A802D0], v44, 0x6Fu); /*0x4ac1c3*/
                      dword_A83A54[dword_A802D0] = timeGetTime(); /*0x4ac1ea*/
                      dword_A802D0 = ((unsigned char)dword_A802D0 + 1) & 0x7F; /*0x4ac201*/
                      ++*(unsigned int *)&dword_A802C8; /*0x4ac207*/
                    }
LABEL_117:
                    FirstOfAction = SuperWeaponTypeClass::FindFirstOfAction((SuperWeaponTypeClass *)a5); /*0x4ac20c*/
                    if ( FirstOfAction ) /*0x4ac21a*/
                    {
                      v46 = SidebarClass::SetFlashEntry( /*0x4ac23a*/
                              v57,
                              *(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 48),
                              18,
                              *(unsigned int *)(FirstOfAction + 152),
                              a3);
                      if ( *(int *)&dword_A802C8 < 128 ) /*0x4ac249*/
                      {
                        memcpy(&byte_A802D4[111 * dword_A802D0], v46, 0x6Fu); /*0x4ac265*/
                        dword_A83A54[dword_A802D0] = timeGetTime(); /*0x4ac272*/
                        dword_A802D0 = ((unsigned char)dword_A802D0 + 1) & 0x7F; /*0x4ac289*/
                        ++*(unsigned int *)&dword_A802C8; /*0x4ac28f*/
                      }
                    }
                    goto LABEL_120; /*0x4ac28f*/
                  }
                }
                v43 = ScriptAction::GetWaypointCoords((ScriptAction *)v56, v6); /*0x4ac163*/
                v49 = 22; /*0x4ac172*/
                v51 = *(unsigned int *)v43; /*0x4ac174*/
                v52 = v43[4]; /*0x4ac176*/
                v47 = *(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 48); /*0x4ac186*/
              }
            }
            v44 = EventClass::Add(v57, v47, v49, v51, v52); /*0x4ac187*/
            if ( *(int *)&dword_A802C8 < 128 ) /*0x4ac196*/
              goto LABEL_116; /*0x4ac196*/
            goto LABEL_117; /*0x4ac196*/
          }
        }
      }
LABEL_120:
      LOBYTE(this->DisplayClass_field_0x11D0) = 0; /*0x4ac294*/
LABEL_121:
      TechnoClass::GetField(); /*0x4ac29b*/
      return result; /*0x4ac29b*/
    }
    if ( !v6 ) /*0x4abdda*/
      goto LABEL_120; /*0x4abdda*/
    goto LABEL_56; /*0x4abdda*/
  }
  if ( (*(int (**)(int))(*(unsigned int *)this->DisplayClass_field_0x11A8 + 44))(this->DisplayClass_field_0x11A8) == 7 ) /*0x4aba14*/
  {
    v8 = a3[1] + *&this->u16_117A; /*0x4aba27*/
    LOWORD(v55) = *&this->u16_1178 + *a3; /*0x4aba2b*/
    (v55) = ((v55) & ~(0xFFFF << 16)) | (((v8) & 0xFFFF) << 16); /*0x4aba30*/
    v9 = *&this->u32_117C; /*0x4aba39*/
    *(unsigned int *)v56 = v55; /*0x4aba43*/
    this->__pad_F5E[546] = GetBuildingPlacement( /*0x4aba5e*/
                             (unsigned int *)this->DisplayClass_field_0x11A8,
                             *(unsigned int *)this->__pad_11AC,
                             v9,
                             v56);
  }
  if ( (*(int (**)(int))(*(unsigned int *)this->DisplayClass_field_0x11A8 + 44))(this->DisplayClass_field_0x11A8) == 7 /*0x4aba94*/
    && v6
    && (*(int (**)(House **))&(*v6)->House_field_0x29[3])(v6) == 6
    && (unsigned __int8)BuildingClass::CanAcceptType(
                          (bool *)v6,
                          this->DisplayClass_field_0x11A8,
                          *(int *)((char *)&stru_A83CD9.estimatedHealth + 3)) )
  {
    this->__pad_F5E[546] = 1; /*0x4aba9d*/
  }
  if ( !this->__pad_F5E[546] || !this->__pad_F5E[547] ) /*0x4abab2*/
  {
    ((VoxClass *)&g_Str_EVA_CannotDeployHere)->FindAndPlay( -1); /*0x4abc80*/
    TechnoClass::GetField(); /*0x4abc85*/
    return result; /*0x4abc91*/
  }
  v10 = __RTDynamicCast( /*0x4abad5*/
          (void **)this->DisplayClass_field_0x11A8,
          0,
          &ObjectTypeClass `RTTI Type Descriptor',
          &TechnoTypeClass `RTTI Type Descriptor',
          0);
  if ( !v10 || (v11 = v10->u8_CCE, LOBYTE(v56[0]) = 1, !v11) ) /*0x4abaee*/
    LOBYTE(v56[0]) = 0; /*0x4abaf0*/
  v12 = a3[1] + *&this->u16_117A; /*0x4abb06*/
  v13 = *&this->u32_11A4; /*0x4abb0a*/
  LOWORD(v55) = *&this->u16_1178 + *a3; /*0x4abb10*/
  DisplayClass_field_0x11A8 = this->DisplayClass_field_0x11A8; /*0x4abb15*/
  (v55) = ((v55) & ~(0xFFFF << 16)) | (((v12) & 0xFFFF) << 16); /*0x4abb1b*/
  v50 = LOBYTE(v56[0]); /*0x4abb38*/
  v48 = (*(int (**)(int))(*(unsigned int *)DisplayClass_field_0x11A8 + 64))(DisplayClass_field_0x11A8); /*0x4abb3c*/
  v15 = (*(int (**)(int))(*(unsigned int *)v13 + 44))(v13); /*0x4abb41*/
  v16 = EventClass::Init( /*0x4abb55*/
          v57,
          *(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 48),
          11,
          v15,
          v48,
          v50,
          &v55);
  if ( *(int *)&dword_A802C8 < 128 ) /*0x4abb64*/
  {
    memcpy(&byte_A802D4[111 * dword_A802D0], v16, 0x6Fu); /*0x4abb80*/
    dword_A83A54[dword_A802D0] = timeGetTime(); /*0x4abb91*/
    dword_A802D0 = ((unsigned char)dword_A802D0 + 1) & 0x7F; /*0x4abba8*/
    ++*(unsigned int *)&dword_A802C8; /*0x4abbae*/
  }
  v17 = *&this->u32_11A4; /*0x4abbb3*/
  if ( v17 )
    v18 = (*(int (**)(unsigned int))(v17->m_Current + 44))(*&this->u32_11A4) == 6 ? v17 : 0;
  else
    v18 = 0; /*0x4abbbf*/
  Selection::ClearGlobals(v18); /*0x4abbd7*/
  if ( stru_A8E960.random[503] ) /*0x4abbe3*/
    goto LABEL_121; /*0x4abbe3*/
  v19 = this->DisplayClass_field_0x11A8; /*0x4abbe9*/
  v20 = *&this->u32_11A4; /*0x4abbef*/
  this->DisplayClass_field_0x1194 = v19; /*0x4abbf5*/
  *&this->u32_1190 = v20; /*0x4abbfb*/
  v21 = *&this->u16_1178; /*0x4abc03*/
  *&this->u32_1182 = *(unsigned int *)a3; /*0x4abc09*/
  v22 = *&this->u32_117C; /*0x4abc0f*/
  *&this->u32_1186 = v21; /*0x4abc15*/
  v23 = *(unsigned int *)this->__pad_11AC; /*0x4abc1b*/
  *&this->u32_118C = v22; /*0x4abc23*/
  *(unsigned int *)this->__pad_1198 = v23; /*0x4abc29*/
  if ( v19 ) /*0x4abc2f*/
  {
    v24 = (const void *)(*(int (**)(int, int))(*(unsigned int *)v19 + 144))(v19, 1); /*0x4abc35*/
    MIXClass::CopyHeader(&dword_87F7E8.field_0, v24); /*0x4abc41*/
  }
  Mouse::SetBounds((int)&dword_87F7E8, 0); /*0x4abc4c*/
  dword_88098C = 0; /*0x4abc51*/
  dword_880990 = 0; /*0x4abc57*/
  dword_880994 = -1; /*0x4abc5d*/
  TechnoClass::GetField(); /*0x4abc67*/
  return result; /*0x4abc6c*/

}
} // namespace gamemd

// 0x4AC2B0
namespace gamemd {
char PlayerClass::CheckHumanPlayer() {

  House *v2; // eax

  v2 = (House *)(*(int (**)(PlayerClass *))(*(unsigned int *)this->__pad_0 + 60))(this); /*0x4ac2b5*/
  if ( v2 ) /*0x4ac2ba*/
  {
    LOBYTE(v2) = House::IsHumanPlayer(v2); /*0x4ac2be*/
    if ( (unsigned char)v2 ) /*0x4ac2c5*/
    {
      LOBYTE(v2) = (*(int (**)(PlayerClass *))(*(unsigned int *)this->__pad_0 + 312))(this); /*0x4ac2cb*/
      if ( (unsigned char)v2 ) /*0x4ac2d3*/
      {
        LOBYTE(v2) = (*(int (**)(PlayerClass *))(*(unsigned int *)this->__pad_0 + 316))(this); /*0x4ac2d9*/
        if ( (unsigned char)v2 ) /*0x4ac2e1*/
        {
          LOBYTE(v2) = this->u32_81; /*0x4ac2e3*/
          if ( !(unsigned char)v2 ) /*0x4ac2eb*/
          {
            LOBYTE(v2) = (*(int (**)(PlayerClass *))(*(unsigned int *)this->__pad_0 + 332))(this); /*0x4ac2f1*/
            if ( (unsigned char)v2 ) /*0x4ac2f9*/
              g_MoveFeedback = 0; /*0x4ac2fb*/
          }
        }
      }
    }
  }
  return (char)v2; /*0x4ac302*/

}
} // namespace gamemd

// 0x4B4D50
namespace gamemd {
int ComPtr::Release_Alt() {
  int result; // eax

  result = *(unsigned int *)this->__pad_000; /*0x4b4d50*/
  if ( *(unsigned int *)this->__pad_000 ) /*0x4b4d50*/
    return (*(int (__stdcall **)(int))(*&result->q020))(result); /*0x4b4d59*/
  return result; /*0x4b4d5c*/
}
} // namespace gamemd

// 0x4B4D70
namespace gamemd {
int Timeout::GetRemaining() {
  Timeout v1; // edx
  int result; // eax

  v1 = *this; /*0x4b4d70*/
  result = this->u32_8; /*0x4b4d72*/
  if ( *this != -1 ) /*0x4b4d78*/
  {
    if ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - *(unsigned int *)&v1 >= result ) /*0x4b4d84*/
      return 0; /*0x4b4d89*/
    else
      result -= *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - *(unsigned int *)&v1; /*0x4b4d86*/
  }
  return result; /*0x4b4d88*/
}
} // namespace gamemd

// 0x4D0490
namespace gamemd {
int ComPtr::ReleaseAndSet(unsigned int *a2) {
  int v3; // edi
  unsigned int *v5; // ebx
  int v6; // eax

  if ( *a2 ) /*0x4d0498*/
  {
    v3 = (**(int (__stdcall ***)(unsigned int, void *, unsigned int **))*a2)(*a2, &unk_822410, &a2); /*0x4d04ad*/
    if ( v3 >= 0 ) /*0x4d04b1*/
    {
      v5 = a2; /*0x4d04cf*/
      if ( *(unsigned int *)this->__pad_000 ) /*0x4d04cc*/
        (*(void (__stdcall **)(unsigned int))(**(unsigned int **)this->__pad_000 + 8))(*(unsigned int *)this->__pad_000); /*0x4d04da*/
      *(unsigned int *)this->__pad_000 = v5; /*0x4d04dd*/
      return v3; /*0x4d04e0*/
    }
    else
    {
      if ( *(unsigned int *)this->__pad_000 ) /*0x4d04b3*/
        (*(void (__stdcall **)(unsigned int))(**(unsigned int **)this->__pad_000 + 8))(*(unsigned int *)this->__pad_000); /*0x4d04bc*/
      *(unsigned int *)this->__pad_000 = 0; /*0x4d04c1*/
      return v3; /*0x4d04bf*/
    }
  }
  else
  {
    v6 = *(unsigned int *)this->__pad_000; /*0x4d04e7*/
    if ( *(unsigned int *)this->__pad_000 ) /*0x4d04e7*/
    {
      *(unsigned int *)this->__pad_000 = 0; /*0x4d04ed*/
      (*(void (__stdcall **)(int))(*(unsigned int *)v6 + 8))(v6); /*0x4d04f6*/
    }
    return -2147467262; /*0x4d04fe*/
  }
}
} // namespace gamemd

// 0x4E0C40
namespace gamemd {
char PairVector::PushBack(unsigned int *a2) {

  int v3; // ecx
  int v4; // eax
  int v6; // eax
  unsigned int *v7; // edx

  v3 = this->u32_8; /*0x4e0c43*/
  if ( this->u32_10 >= v3 ) /*0x4e0c4b*/
  {
    if ( !this->u32_D && v3 ) /*0x4e0c56*/
      return 0; /*0x4e0c56*/
    v4 = this->u32_14; /*0x4e0c58*/
    if ( v4 <= 0 /*0x4e0c68*/
      || !(*(unsigned __int8 (**)(PairVector *, int, unsigned int))(*&this->u32_20))(this, v3 + v4, 0) )
    {
      return 0; /*0x4e0c6f*/
    }
  }
  v6 = this->u32_10; /*0x4e0c75*/
  v7 = (unsigned int *)this->u32_4; /*0x4e0c78*/
  this->u32_10 = v6 + 1; /*0x4e0c7e*/
  v7[2 * v6] = *a2; /*0x4e0c87*/
  v7[2 * v6 + 1] = a2[1]; /*0x4e0c8e*/
  return 1; /*0x4e0c71*/

}
} // namespace gamemd

// 0x4E1A20
namespace gamemd {
int Rect_Point::Set(int a2, int a3) {
  this->Width = a2; /*0x4e1a28*/
  this->Height = a3; /*0x4e1a2b*/
  return a2; /*0x4e1a2e*/
}
} // namespace gamemd

// 0x4E3830
namespace gamemd {
int CountryCombo::IDToIndex() {
  int v2; // eax

  if ( this == 1697 ) /*0x4e3837*/
    return 0; /*0x4e3839*/
  if ( this == 1296 ) /*0x4e3841*/
    return 1; /*0x4e3843*/
  if ( this == 1299 ) /*0x4e384e*/
    return 2; /*0x4e3850*/
  if ( this == 1310 ) /*0x4e385b*/
    return 3; /*0x4e385d*/
  if ( this == 1300 ) /*0x4e3868*/
    return 4; /*0x4e386a*/
  if ( this == 1311 ) /*0x4e3875*/
    return 5; /*0x4e3877*/
  if ( this == 1312 ) /*0x4e3882*/
    return 6; /*0x4e3884*/
  v2 = -(this != 1313); /*0x4e3891*/
  (*((unsigned char *)&(v2))) = v2 & 0xF8; /*0x4e3893*/
  return v2 + 7; /*0x4e383b*/
}
} // namespace gamemd

// 0x4F3090
namespace gamemd {
BOOL GraphicMenuAnimItem::Release(unsigned int *a2) {
  int GraphicMenuAnimItem_field_0x10; // edx
  int v3; // eax
  int GraphicMenuAnimItem_field_0x14; // edx
  BOOL result; // eax

  result = 0; /*0x4f30c3*/
  if ( (this->u8_9) ) /*0x4f3090*/
  {
    GraphicMenuAnimItem_field_0x10 = this->q010; /*0x4f309c*/
    if ( *a2 >= GraphicMenuAnimItem_field_0x10 && *a2 < GraphicMenuAnimItem_field_0x10 + this->u32_18 ) /*0x4f30ae*/
    {
      v3 = a2[1]; /*0x4f30b0*/
      GraphicMenuAnimItem_field_0x14 = this->q014; /*0x4f30b3*/
      if ( v3 >= GraphicMenuAnimItem_field_0x14 && v3 < GraphicMenuAnimItem_field_0x14 + this->u32_1C ) /*0x4f30c1*/
        return 1; /*0x4f3096*/
    }
  }
  return result; /*0x4f30c8*/
}
} // namespace gamemd

// 0x4F30E0
namespace gamemd {
void *** GraphicMenuAnimItem::QueryInterface(char a2) {
  void (__thiscall ***v3)(unsigned int, int); // ecx

  v3 = (void (__thiscall ***)(unsigned int, int))this->u32_24; /*0x4f30e3*/
  /* X11: ptr_0 install elided (implicit via class virtuals 0x4f30e6) — binary-proven install, was 0 */
  if ( v3 ) /*0x4f30ee*/
    (**v3)(v3, 1); /*0x4f30f4*/
  GraphicMenuItem::Dtor((GraphicMenuItem *)this); /*0x4f30f8*/
  if ( (a2 & 1) != 0 ) /*0x4f3102*/
    operator delete((this)); /*0x4f3105*/
  return (void ***)this; /*0x4f310f*/
}
} // namespace gamemd

// 0x4F3640
namespace gamemd {
BOOL GraphicMenuImageItem::Release(unsigned int *a2) {
  int v2; // edx
  int v3; // eax
  int v4; // edx
  BOOL result; // eax

  result = 0; /*0x4f3673*/
  if ( (this->u8_9) ) /*0x4f3640*/
  {
    v2 = this->u32_14; /*0x4f364c*/
    if ( *a2 >= v2 && *a2 < v2 + this->u32_1C ) /*0x4f365e*/
    {
      v3 = a2[1]; /*0x4f3660*/
      v4 = this->u32_18; /*0x4f3663*/
      if ( v3 >= v4 && v3 < v4 + this->u32_20 ) /*0x4f3671*/
        return 1; /*0x4f3646*/
    }
  }
  return result; /*0x4f3678*/
}
} // namespace gamemd

// 0x4F3690
namespace gamemd {
int GraphicMenuImageItem::Load(char a2) {
  int v3; // ecx
  BOOL v4; // eax
  int v5; // ecx
  BOOL v6; // eax
  int v7; // ecx
  int result; // eax
  ObjectClass *v9; // [esp+0h] [ebp-8h]

  v3 = this->u32_24; /*0x4f3698*/
  if ( v3 ) /*0x4f369d*/
  {
    v4 = (this->u8_9) && !a2; /*0x4f36b1*/
    (*(void (__thiscall **)(int, BOOL))(*(unsigned int *)v3 + 4))(v3, v4); /*0x4f36b6*/
  }
  v5 = this->u32_28; /*0x4f36b9*/
  if ( v5 ) /*0x4f36be*/
  {
    v6 = (this->u8_9) && a2; /*0x4f36cb*/
    (*(void (__thiscall **)(int, BOOL))(*(unsigned int *)v5 + 4))(v5, v6); /*0x4f36d7*/
  }
  v7 = this->u32_2C; /*0x4f36da*/
  if ( v7 ) /*0x4f36df*/
    (*(void (__thiscall **)(int, bool))(*(unsigned int *)v7 + 4))(v7, (this->u8_9) == 0); /*0x4f36ec*/
  Team::ReleaseAll((Team *)this->q010, (int)(&this->q010)); /*0x4f36f6*/
  result = DSurface::Flip2(); /*0x4f36fe*/
  if ( a2 ) /*0x4f3705*/
  {
    if ( this->u32_30 ) /*0x4f3707*/
      return nullsub_24(v9); /*0x4f370e*/
  }
  return result; /*0x4f3713*/
}
} // namespace gamemd

// 0x4F3720
namespace gamemd {
int GraphicMenuImageItem::Draw(char a2) {
  int v3; // ecx
  BOOL v4; // eax
  int v5; // ecx
  BOOL v6; // eax
  int v7; // ecx

  v3 = this->u32_24; /*0x4f3728*/
  if ( v3 ) /*0x4f372d*/
  {
    v4 = a2 && !(this->q008); /*0x4f3741*/
    (*(void (__thiscall **)(int, BOOL))(*(unsigned int *)v3 + 4))(v3, v4); /*0x4f3746*/
  }
  v5 = this->u32_28; /*0x4f3749*/
  if ( v5 ) /*0x4f374e*/
  {
    v6 = a2 && (this->q008); /*0x4f375b*/
    (*(void (__thiscall **)(int, BOOL))(*(unsigned int *)v5 + 4))(v5, v6); /*0x4f3767*/
  }
  v7 = this->u32_2C; /*0x4f376a*/
  if ( v7 ) /*0x4f376f*/
    (*(void (__thiscall **)(int, bool))(*(unsigned int *)v7 + 4))(v7, a2 == 0); /*0x4f3779*/
  Team::ReleaseAll((Team *)this->q010, (int)(&this->q010)); /*0x4f3783*/
  return DSurface::Flip2(); /*0x4f3790*/
}
} // namespace gamemd

// 0x4F3A50
namespace gamemd {
unsigned int * GraphicMenuItem::Constructor(int a2) {
  this->__pad_004 = a2; /*0x4f3a56*/
  this->u32_8 = 0; /*0x4f3a5b*/
  this->u32_9 = 1; /*0x4f3a5e*/
  this->u32_C = 0; /*0x4f3a62*/
  /* X11: ptr_0 install elided (implicit via class virtuals 0x4f3a65) — binary-proven install, was 0 */
  return this->ptr_0; /*0x4f3a6b*/
}
} // namespace gamemd

// 0x4F3AF0
namespace gamemd {
char GraphicMenuItem_Destru::Release() {
  return 0; /*0x4f3af2*/
}
} // namespace gamemd

// 0x4F3B00
namespace gamemd {
char GraphicMenuAnimItem::AddRef() {
  return 0; /*0x4f3b02*/
}
} // namespace gamemd

// 0x4F3B20
namespace gamemd {
void *** GraphicMenuItem_Destru::QueryInterface(char a2) {
  ObjectClass *v3; // edi

  v3 = (ObjectClass *)this->u32_C; /*0x4f3b24*/
  /* X11: ptr_0 install elided (implicit via class virtuals 0x4f3b27) — binary-proven install, was 0 */
  if ( v3 ) /*0x4f3b2f*/
  {
    j_DeleteAndZero(v3); /*0x4f3b33*/
    operator delete((v3)); /*0x4f3b39*/
  }
  if ( (a2 & 1) != 0 ) /*0x4f3b46*/
    operator delete((this)); /*0x4f3b49*/
  return (void ***)this; /*0x4f3b53*/
}
} // namespace gamemd

// 0x4F3EE0
namespace gamemd {
char GraphicMenuShortcutItem::AddRef(int a2) {
  _VectorCursor_IV_DynamicVectorClass_I v3; // [esp+0h] [ebp-Ch] BYREF
  int v4; // [esp+8h] [ebp-4h]

  if ( !this->u32_9 ) /*0x4f3ee0*/
    return 0; /*0x4f3eea*/
  *(unsigned int *)&v3.m_1[3] = &this->u32_9; /*0x4f3ef6*/
  v4 = 0; /*0x4f3efe*/
  *(unsigned int *)v3.__pad_0 = 0; /*0x4f3f06*/
  if ( VectorCursor_uint_DynamicVectorClass_uint::AddRef(&v3) ) /*0x4f3f0e*/
  {
    do /*0x4f3f3f*/
    {
      if ( *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&v3.m_1[3] + 4) + 4 * v4) == a2 ) /*0x4f3f2a*/
        break; /*0x4f3f2a*/
      (*(void (__thiscall **)(_VectorCursor_IV_DynamicVectorClass_I *))(*(unsigned int *)v3.__pad_0 + 8))(&v3); /*0x4f3f34*/
    }
    while ( (*(uint8_t (__thiscall **)(_VectorCursor_IV_DynamicVectorClass_I *))(*(unsigned int *)v3.__pad_0 + 4))(&v3) ); /*0x4f3f3f*/
  }
  return (*(int (__thiscall **)(_VectorCursor_IV_DynamicVectorClass_I *))(*(unsigned int *)v3.__pad_0 + 4))(&v3); /*0x4f3eec*/
}
} // namespace gamemd

// 0x4F3F60
namespace gamemd {
unsigned int * GraphicMenuShortcutItem::QueryInterface(char a2) {
  void *v3; // eax

  /* X11: ptr_0 install elided (implicit via class virtuals 0x4f3f63) — binary-proven install, was 0 */
  v3 = (void *)this->u32_14; /*0x4f3f69*/
  this->__pad_004 = 0; /*0x4f3f6e*/
  if ( v3 && this->u32_1D ) /*0x4f3f77*/
  {
    operator delete((v3)); /*0x4f3f7f*/
    this->u32_14 = 0; /*0x4f3f87*/
  }
  this->u32_1D = 0; /*0x4f3f90*/
  this->u32_18 = 0; /*0x4f3f94*/
  GraphicMenuItem::Dtor((GraphicMenuItem *)this); /*0x4f3f9b*/
  if ( (a2 & 1) != 0 ) /*0x4f3fa5*/
    operator delete((this)); /*0x4f3fa8*/
  return this->ptr_0; /*0x4f3fb2*/
}
} // namespace gamemd

// 0x4F3FC0
namespace gamemd {
BOOL VectorCursor_uint_DynamicVectorClass_uint::AddRef() {
  return this->u32_8 < *(unsigned int *)(*&this->q004 + 16); /*0x4f3fcd*/
}
} // namespace gamemd

// 0x4F3FF0
namespace gamemd {
unsigned int * VectorCursor_uint_DynamicVectorClass_uint::Release() {
  ++this->u32_8; /*0x4f3ff2*/
  return this->ptr_0; /*0x4f3ff5*/
}
} // namespace gamemd

// 0x4F4CA0
namespace gamemd {
int Flag::IsZero() {
  return this->__pad_000 == 0; /*0x4f4ca9*/
}
} // namespace gamemd

// 0x510FB0
namespace gamemd {
int PlayerSlot::NameToDialogID(const char *a1) { /*G42.35 C6 this 形参名合法化*/
  if ( !strcmp(a1, g_Str__Player___A_) ) /*0x510fc4*/
    return 4475; /*0x510fef*/
  if ( !strcmp(a1, g_Str__Player___B_) ) /*0x511005*/
    return 4476; /*0x511030*/
  if ( !strcmp(a1, g_Str__Player___C_) ) /*0x511046*/
    return 4477; /*0x511071*/
  if ( !strcmp(a1, g_Str__Player___D_) ) /*0x511087*/
    return 4478; /*0x5110b2*/
  if ( !strcmp(a1, aPlayerE) ) /*0x5110c8*/
    return 4479; /*0x5110f3*/
  if ( !strcmp(a1, aPlayerF) ) /*0x511109*/
    return 4480; /*0x511134*/
  if ( !strcmp(a1, aPlayerG) ) /*0x51114a*/
    return 4481; /*0x511175*/
  if ( !strcmp(a1, unk_825000) ) /*0x51118b*/
    return 4482; /*0x5111b5*/
  return -1; /*0x510fed*/
}
} // namespace gamemd

// 0x5176B0
namespace gamemd {
int Flag::IsNot2() {
  int result; // eax

  result = *(unsigned int *)this->__pad_000; /*0x5176b0*/
  (*((unsigned char *)&(result))) = (~(uint8_t)*(unsigned int *)this->__pad_000 & 2) != 0; /*0x5176b6*/
  return result; /*0x5176b8*/
}
} // namespace gamemd

// 0x526B10
namespace gamemd {
int HashTableSection::FindSection(uint8_t *a2, uint8_t *a3) {

  unsigned __int8 *v3; // ebx
  int v5; // esi
  unsigned __int8 *v6; // eax
  size_t v7; // ecx
  HashTable *v8; // esi
  unsigned __int8 **v9; // edx
  int v10; // edx
  void *v11; // ecx
  int v12; // eax
  unsigned __int8 **v13; // ecx
  int v14; // eax
  unsigned __int8 *v16; // edi
  unsigned __int8 **v17; // eax
  int v18; // eax
  int *v19; // esi
  int v20; // [esp+10h] [ebp-1Ch] BYREF
  unsigned int v21[3]; // [esp+14h] [ebp-18h] BYREF
  unsigned int v22[3]; // [esp+20h] [ebp-Ch] BYREF

  v3 = a2; /*0x526b14*/
  if ( a2 == (unsigned __int8 *)this->u8_1 ) /*0x526b20*/
  {
    v5 = this->u8_2; /*0x526b26*/
    goto LABEL_3; /*0x526b26*/
  }
  if ( !a2 ) /*0x526c07*/
    goto LABEL_29; /*0x526c07*/
  memset(v21, 0, sizeof(v21)); /*0x526c17*/
  v16 = (unsigned __int8 *)Checksummer::Add_Buffer(v21, a2, strlen((const char *)a2)); /*0x526c31*/
  a2 = v16; /*0x526c33*/
  if ( !this->u8_B ) /*0x526c37*/
    goto LABEL_29; /*0x526c37*/
  v17 = (unsigned __int8 **)this->u8_E; /*0x526c3e*/
  if ( v17 && *v17 == v16 ) /*0x526c47*/
    goto LABEL_24; /*0x526c47*/
  v18 = SortedArray::BinarySearch(&this->u8_28, (int *)&a2); /*0x526c50*/
  if ( !v18 ) /*0x526c57*/
  {
LABEL_29:
    this->u8_1 = 0; /*0x526c90*/
    this->u8_2 = 0; /*0x526c93*/
    return 0; /*0x526c93*/
  }
  this->u8_E = v18; /*0x526c59*/
LABEL_24:
  v20 = (int)v16; /*0x526c5c*/
  if ( (unsigned __int8)HashTable::BinarySearch(&this->u8_A, &v20) ) /*0x526c67*/
    v19 = (int *)(this->u8_E + 4); /*0x526c73*/
  else
    v19 = (int *)&unk_B7882C; /*0x526c78*/
  v5 = *v19; /*0x526c7d*/
  if ( !v5 ) /*0x526c81*/
    goto LABEL_29; /*0x526c81*/
  this->u8_2 = v5; /*0x526c83*/
  this->u8_1 = (int)v3; /*0x526c86*/
LABEL_3:
  if ( !v5 ) /*0x526b2d*/
    return 0; /*0x526b2d*/
  if ( !a3 ) /*0x526b39*/
    return 0; /*0x526b39*/
  memset(v22, 0, sizeof(v22)); /*0x526b46*/
  v6 = (unsigned __int8 *)Checksummer::Add_Buffer(v22, a3, strlen((const char *)a3)); /*0x526b5d*/
  v7 = *(unsigned int *)(v5 + 48); /*0x526b62*/
  v8 = v5 + 44; /*0x526b65*/
  a2 = v6; /*0x526b6a*/
  if ( !v7 ) /*0x526b6e*/
    return 0; /*0x526b6e*/
  v9 = *(unsigned __int8 ***)(v8 + 16); /*0x526b74*/
  if ( v9 && *v9 == v6 ) /*0x526b7d*/
    goto LABEL_12; /*0x526b7d*/
  if ( !v8->q00C ) /*0x526b7f*/
  {
    qsort(*(void **)v8, v7, 8u, CompareFunc3Int); /*0x526b91*/
    v6 = a2; /*0x526b96*/
    v8->u32_10 = 0; /*0x526b9d*/
    v8->q00C = 1; /*0x526ba0*/
  }
  v10 = v8->HashTable_field_0x04; /*0x526ba4*/
  v11 = *(void **)v8; /*0x526ba7*/
  v21[0] = (unsigned int)v6; /*0x526ba9*/
  v12 = UI_Find((int)v11, v10, (int *)v21); /*0x526bb2*/
  if ( !v12 ) /*0x526bb9*/
    return 0; /*0x526c9f*/
  v8->u32_10 = v12; /*0x526bbf*/
  v6 = a2; /*0x526bc2*/
LABEL_12:
  if ( v8->HashTable_field_0x04 ) /*0x526bc6*/
  {
    v13 = *(unsigned __int8 ***)(v8 + 16); /*0x526bcf*/
    if ( v13 && *v13 == v6 ) /*0x526bd8*/
      return *(unsigned int *)(v8->u32_10 + 4); /*0x526bd8*/
    v14 = HashTable::BinarySearchAlt((char **)v8, (int *)&a2); /*0x526be1*/
    if ( v14 ) /*0x526be8*/
    {
      v8->u32_10 = v14; /*0x526bee*/
      return *(unsigned int *)(v8->u32_10 + 4); /*0x526c00*/
    }
  }
  return unk_B78830; /*0x526bf4*/

}
} // namespace gamemd

// 0x52B390
namespace gamemd {
int HashTable::BinarySearch(int *a2) {
  int result; // eax
  size_t v4; // ecx
  int v5; // ecx
  int v6; // ebp
  int v7; // edi
  int v8; // esi
  int v9; // edx

  v4 = this->HashTable_field_0x04; /*0x52b395*/
  if ( !v4 ) /*0x52b39b*/
    goto LABEL_13; /*0x52b39b*/
  result = this->u32_10; /*0x52b39d*/
  if ( result ) /*0x52b3a6*/
  {
    result = *(unsigned int *)result; /*0x52b3a8*/
    if ( result == *a2 ) /*0x52b3ae*/
    {
      (*((unsigned char *)&(result))) = 1; /*0x52b3b3*/
      return result; /*0x52b3b6*/
    }
  }
  if ( !this->q00C ) /*0x52b3b9*/
  {
    result = qsort((void *)*this, v4, 8u, CompareFunc4Int); /*0x52b3cb*/
    this->u32_10 = 0; /*0x52b3d3*/
    this->q00C = 1; /*0x52b3da*/
  }
  v5 = this->HashTable_field_0x04; /*0x52b3de*/
  v6 = *a2; /*0x52b3e1*/
  v7 = *this; /*0x52b3e3*/
  if ( v5 <= 0 ) /*0x52b3e7*/
    goto LABEL_13; /*0x52b3e7*/
  while ( 1 ) /*0x52b3ee*/
  {
    result = v5 / 2; /*0x52b3ee*/
    v8 = *(unsigned int *)(v7 + 8 * (v5 / 2)); /*0x52b3f0*/
    v9 = v7 + 8 * (v5 / 2); /*0x52b3f3*/
    if ( v8 <= v6 ) /*0x52b3f8*/
      break; /*0x52b3f8*/
    v5 /= 2; /*0x52b3fa*/
  LABEL_12:
    if ( v5 <= 0 ) /*0x52b40c*/
      goto LABEL_13; /*0x52b40c*/
  }
  if ( v8 != v6 ) /*0x52b3fe*/
  {
    v7 = v9 + 8; /*0x52b400*/
    v5 += -1 - result; /*0x52b408*/
    goto LABEL_12; /*0x52b408*/
  }
  if ( !v9 ) /*0x52b419*/
  {
  LABEL_13:
    (*((unsigned char *)&(result))) = 0; /*0x52b40e*/
    return result; /*0x52b414*/
  }
  this->u32_10 = v9; /*0x52b41d*/
  (*((unsigned char *)&(result))) = 1; /*0x52b421*/
  return result; /*0x52b3b0*/
}
} // namespace gamemd

// 0x52B4F0
namespace gamemd {
int HashTable::BinarySearchAlt(int *a2) {
  int result; // eax
  int v4; // edi
  int v5; // ebx
  int HashTable_field_0x04; // ecx
  int v7; // esi

  result = this->HashTable_field_0x04; /*0x52b4f3*/
  if ( result ) /*0x52b4f8*/
  {
    if ( !(this->q00C) ) /*0x52b4fe*/
    {
      qsort(*(void **)this->TimeRemaining, result, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunc3Int); /*0x52b510*/
      this->u32_10 = 0; /*0x52b518*/
      (this->q00C) = 1; /*0x52b51f*/
    }
    v4 = *(unsigned int *)this->TimeRemaining; /*0x52b529*/
    v5 = *a2; /*0x52b52b*/
    HashTable_field_0x04 = this->HashTable_field_0x04; /*0x52b52d*/
    if ( HashTable_field_0x04 <= 0 ) /*0x52b532*/
      return 0; /*0x52b55e*/
    while ( 1 ) /*0x52b53b*/
    {
      v7 = *(unsigned int *)(v4 + 8 * (HashTable_field_0x04 / 2)); /*0x52b53b*/
      if ( v7 <= v5 ) /*0x52b543*/
      {
        if ( v7 == v5 ) /*0x52b549*/
          return v4 + 8 * (HashTable_field_0x04 / 2); /*0x52b563*/
        v4 += 8 * (HashTable_field_0x04 / 2) + 8; /*0x52b54b*/
        HashTable_field_0x04 += -1 - HashTable_field_0x04 / 2; /*0x52b553*/
      }
      else
      {
        HashTable_field_0x04 /= 2; /*0x52b545*/
      }
      if ( HashTable_field_0x04 <= 0 ) /*0x52b557*/
        return 0; /*0x52b557*/
    }
  }
  return result; /*0x52b4fa*/
}
} // namespace gamemd

// 0x53E3C0
namespace gamemd {
unsigned int * TimerPool::AllocSlot() {
  unsigned int *result; // eax
  int v2; // esi
  TimerPool **v3; // edi

  result = g_StreamPool; /*0x53e3c0*/
  if ( g_StreamPool ) /*0x53e3ca*/
  {
    if ( this ) /*0x53e3ce*/
    {
      result = *(unsigned int **)DataGlobal_AA044C; /*0x53e3d6*/
      v2 = 1; /*0x53e3db*/
      v3 = 0; /*0x53e3e0*/
      if ( dword_AA0374 > 1 ) /*0x53e3e4*/
      {
        do /*0x53e3fe*/
        {
          if ( *result ) /*0x53e3e6*/
          {
            if ( (TimerPool *)*result == this ) /*0x53e3f6*/
              return result; /*0x53e3f6*/
          }
          else if ( !v3 ) /*0x53e3ee*/
          {
            v3 = (TimerPool **)result; /*0x53e3f0*/
          }
          ++v2; /*0x53e3f8*/
          ++result; /*0x53e3f9*/
        }
        while ( v2 < dword_AA0374 ); /*0x53e3fe*/
        if ( v3 ) /*0x53e402*/
        {
          *v3 = this; /*0x53e404*/
          return (unsigned int *)++*(unsigned int *)&DataGlobal_AA0450; /*0x53e40b*/
        }
      }
    }
  }
  return result; /*0x53e411*/
}
} // namespace gamemd

// 0x54F1C0
namespace gamemd {
int EventBuffer::Enqueue(int16_t a2) {
  int v2; // edx
  int result; // eax

  v2 = this->u32_318; /*0x54f1c0*/
  result = (v2 + 1) % 256; /*0x54f1d7*/
  if ( result == this->u32_314 ) /*0x54f1de*/
  {
    (*((unsigned char *)&(result))) = 0; /*0x54f1f9*/
  }
  else
  {
    *((unsigned short *)this + v2 + 138) = a2; /*0x54f1e5*/
    this->u32_318 = result; /*0x54f1ed*/
    (*((unsigned char *)&(result))) = 1; /*0x54f1f3*/
  }
  return result; /*0x54f1f5*/
}
} // namespace gamemd

// 0x5565F0
namespace gamemd {
int Hash::Reset() {
  this->m_Next = 0; /*0x5565f2*/
  this->m_Prev = 0; /*0x5565f5*/
  return 0; /*0x5565f8*/
}
} // namespace gamemd

// 0x589290
namespace gamemd {
int Vector8::EraseAt(int a2) {

  int v2; // edx
  int result; // eax
  int v4; // edx
  unsigned int *v5; // edx

  v2 = this->u32_10; /*0x589290*/
  result = a2; /*0x589293*/
  if ( a2 >= v2 ) /*0x589299*/
  {
    (result) = ((result) & ~0xFF) | ((0) & 0xFF); /*0x5892c4*/
  }
  else
  {
    v4 = v2 - 1; /*0x58929b*/
    this->u32_10 = v4; /*0x58929e*/
    if ( a2 < v4 ) /*0x5892a1*/
    {
      do /*0x5892bc*/
      {
        v5 = (unsigned int *)this->u32_4; /*0x5892a4*/
        ++result; /*0x5892a7*/
        v5[2 * result - 2] = v5[2 * result]; /*0x5892ab*/
        v5[2 * result - 1] = v5[2 * result + 1]; /*0x5892b3*/
      }
      while ( result < this->u32_10 ); /*0x5892bc*/
    }
    (result) = ((result) & ~0xFF) | ((1) & 0xFF); /*0x5892bf*/
  }
  return result; /*0x5892c1*/

}
} // namespace gamemd

// 0x58A420
namespace gamemd {
unsigned int * unknown::QueryInterface(char a2) {
  void *v3; // eax

  v3 = *&this->Items; /*0x58a423*/
  /* X11: ptr_0 install elided (implicit via class virtuals 0x58a426) — binary-proven install, was 0 */
  if ( v3 && (this->IsAllocated) ) /*0x58a430*/
  {
    operator delete((v3)); /*0x58a438*/
    *&this->Items = 0; /*0x58a440*/
  }
  (this->IsAllocated) = 0; /*0x58a44b*/
  this->Capacity = 0; /*0x58a451*/
  if ( (a2 & 1) != 0 ) /*0x58a458*/
    operator delete((this)); /*0x58a45b*/
  return this->m_Data; /*0x58a465*/
}
} // namespace gamemd

// 0x58AFF0
namespace gamemd {
unsigned int * HashVector_UInt::Construct(int a2, int a3) {
  int v5; // eax

  this->Items = 0; /*0x58affa*/
  this->Capacity = a2; /*0x58b001*/
  this->IsInitialized = 1; /*0x58b004*/
  this->IsAllocated = 0; /*0x58b008*/
  *this = (HashVector_UInt)0; /*0x58b00c*/
  if ( a2 ) /*0x58b012*/
  {
    if ( a3 ) /*0x58b01a*/
    {
      this->Items = a3; /*0x58b01d*/
      return this; /*0x58b028*/
    }
    v5 = operator new(8 * a2); /*0x58b033*/
    if ( v5 ) /*0x58b03d*/
    {
      this->Items = v5; /*0x58b040*/
      this->IsAllocated = 1; /*0x58b047*/
      return this; /*0x58b04f*/
    }
    this->IsAllocated = 1; /*0x58b054*/
    this->Items = 0; /*0x58b058*/
  }
  return this; /*0x58b026*/
}
} // namespace gamemd

// 0x5975E0
namespace gamemd {
int SettingsClass::ClampValues() {
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int result; // eax

  v1 = this->u32_40; /*0x5975e0*/
  if ( v1 < 4 ) /*0x5975ef*/
  {
    if ( v1 < 0 ) /*0x5975f8*/
      this->u32_40 = 0; /*0x5975fa*/
  }
  else
  {
    this->u32_40 = 3; /*0x5975f1*/
  }
  v2 = this->u32_3C; /*0x5975fd*/
  if ( v2 < 5 ) /*0x597603*/
  {
    if ( v2 < 0 ) /*0x597610*/
      this->u32_3C = 0; /*0x597612*/
  }
  else
  {
    this->u32_3C = 4; /*0x597605*/
  }
  v3 = this->u32_48; /*0x597615*/
  if ( v3 < 4 ) /*0x59761b*/
  {
    if ( v3 < 0 ) /*0x597624*/
      this->u32_48 = 0; /*0x597626*/
  }
  else
  {
    this->u32_48 = 3; /*0x59761d*/
  }
  v4 = this->u32_44; /*0x597629*/
  if ( v4 <= 100 ) /*0x597633*/
  {
    if ( v4 < 0 ) /*0x59763c*/
      this->u32_44 = 0; /*0x59763e*/
  }
  else
  {
    this->u32_44 = 100; /*0x597635*/
  }
  v5 = this->u32_4C; /*0x597641*/
  if ( v5 <= 100 ) /*0x597646*/
  {
    if ( v5 < 0 ) /*0x59764f*/
      this->u32_4C = 0; /*0x597651*/
  }
  else
  {
    this->u32_4C = 100; /*0x597648*/
  }
  v6 = this->u32_50; /*0x597654*/
  if ( v6 <= 8 ) /*0x59765a*/
  {
    if ( v6 < 2 ) /*0x597668*/
      this->u32_50 = 2; /*0x59766a*/
  }
  else
  {
    this->u32_50 = 8; /*0x59765c*/
  }
  v7 = this->u32_54; /*0x597671*/
  if ( v7 <= 100 ) /*0x597676*/
  {
    if ( v7 < 1 ) /*0x597680*/
      this->u32_54 = 1; /*0x597682*/
  }
  else
  {
    this->u32_54 = 100; /*0x597678*/
  }
  v8 = this->u32_58; /*0x597689*/
  if ( v8 <= 100 ) /*0x59768e*/
  {
    if ( v8 < 0 ) /*0x597697*/
      this->u32_58 = 0; /*0x597699*/
  }
  else
  {
    this->u32_58 = 100; /*0x597690*/
  }
  v9 = this->u32_5C; /*0x59769c*/
  if ( v9 <= 100 ) /*0x5976a1*/
  {
    if ( v9 < 0 ) /*0x5976aa*/
      this->u32_5C = 0; /*0x5976ac*/
  }
  else
  {
    this->u32_5C = 100; /*0x5976a3*/
  }
  v10 = this->u32_60; /*0x5976af*/
  if ( v10 <= 100 ) /*0x5976b4*/
  {
    if ( v10 < 0 ) /*0x5976bd*/
      this->u32_60 = 0; /*0x5976bf*/
  }
  else
  {
    this->u32_60 = 100; /*0x5976b6*/
  }
  v11 = this->u32_64; /*0x5976c2*/
  if ( v11 < 4 ) /*0x5976c8*/
  {
    if ( v11 < 0 ) /*0x5976d1*/
      this->u32_64 = 0; /*0x5976d3*/
  }
  else
  {
    this->u32_64 = 3; /*0x5976ca*/
  }
  v12 = this->u32_68; /*0x5976d6*/
  if ( v12 < 4 ) /*0x5976dc*/
  {
    if ( v12 < 0 ) /*0x5976e5*/
      this->u32_68 = 0; /*0x5976e7*/
  }
  else
  {
    this->u32_68 = 3; /*0x5976de*/
  }
  v13 = this->u32_6C; /*0x5976ea*/
  if ( v13 <= 100 ) /*0x5976ef*/
  {
    if ( v13 < 0 ) /*0x5976f8*/
      this->u32_6C = 0; /*0x5976fa*/
  }
  else
  {
    this->u32_6C = 100; /*0x5976f1*/
  }
  v14 = this->u32_70; /*0x5976fd*/
  if ( v14 <= 100 ) /*0x597702*/
  {
    if ( v14 < 0 ) /*0x59770b*/
      this->u32_70 = 0; /*0x59770d*/
  }
  else
  {
    this->u32_70 = 100; /*0x597704*/
  }
  result = this->u32_74; /*0x597710*/
  if ( result <= 0xFFFF ) /*0x597718*/
  {
    if ( result < 0 ) /*0x597726*/
      this->u32_74 = 0; /*0x597728*/
  }
  else
  {
    this->u32_74 = 0xFFFF; /*0x59771b*/
  }
  return result; /*0x59771a*/
}
} // namespace gamemd

// 0x5980C0
namespace gamemd {
int Random::Gaussian() {
  int result; // eax
  double v6; // [esp+0h] [ebp-20h]

  _ESI = this; /*0x5980ca*/
  if ( *(unsigned char *)this ) /*0x5980cc*/
  {
    *(unsigned char *)this = 0; /*0x5980d1*/
    __asm { fld qword ptr [esi+8] } /*0x5980d4*/
  }
  else
  {
    while ( 1 ) /*0x5980de*/
    {
      ((void (*)(void))_ESI[4])(); /*0x5980de*/
      __asm /*0x5980e1*/
      {
        fadd st, st
        fsub ds:dbl_7E1718
        fstp [esp+18h+var_10]
      }
      ((void (*)(void))_ESI[4])(); /*0x5980ed*/
      __asm /*0x5980f0*/
      {
        fadd st, st
        fsub ds:dbl_7E1718
        fst [esp+18h+var_8]
        fld st
        fmulp st(1), st
        fld [esp+18h+var_10]
        fmul [esp+18h+var_10]
        faddp st(1), st
        fcom ds:dbl_7E1718
        fnstsw ax
      }
      if ( (_AX & 0x100) != 0 ) /*0x598115*/
      {
        __asm /*0x598117*/
        {
          fcom ds:dbl_7E2800
          fnstsw ax
        }
        if ( (_AX & 0x4000) == 0 ) /*0x598122*/
          break; /*0x598122*/
      }
      __asm { fstp st } /*0x5980dc*/
    }
    __asm /*0x598124*/
    {
      fld st
      fldln2
    }
    __asm
    {
      fxch st(1)
      fyl2x
      fld st
      fchs
      fsub st, st(1)
      fdiv st, st(2)
      fstp [esp+20h+var_20]; double
      fstp st
      fstp st
    }
    result = Math::Sqrt(v6); /*0x59813e*/
    __asm /*0x598143*/
    {
      fld st
      fmul [esp+20h+var_8]
    }
    *(unsigned char *)_ESI = 1; /*0x59814c*/
    __asm { fstp qword ptr [esi+8] } /*0x59814f*/
    _ESI->q008 = _RT1; /*0x59814f*/
    __asm { fmul [esp+14h+var_10] } /*0x598153*/
  }
  return result; /*0x5980d7*/
}
} // namespace gamemd

// 0x5AD6F0
namespace gamemd {
unsigned int * StringVector::Construct(int a2, int a3, void *a1, void *a4, void *a5, void *a6) { /*G42.33 b3: e4 声明形态 (6 默认参)*/
  this->q004 = 0; /*0x5ad6fb*/
  this->Capacity = a2; /*0x5ad6fe*/
  (this->IsInitialized) = 1; /*0x5ad701*/
  (this->IsAllocated) = 0; /*0x5ad705*/
  /* X11: ptr_0 install elided (implicit via class virtuals 0x5ad708) — binary-proven install, was 0 */
  if ( a2 ) /*0x5ad70e*/
  {
    if ( a3 ) /*0x5ad716*/
    {
      this->Items = a3; /*0x5ad718*/
      return this->ptr_0; /*0x5ad71e*/
    }
    this->Items = operator new(4 * a2); /*0x5ad72d*/
    (this->IsAllocated) = 1; /*0x5ad730*/
  }
  return this->ptr_0; /*0x5ad71d*/
}
} // namespace gamemd

// 0x5AD790
namespace gamemd {
char Vector4::EraseAt(int a2) {
  int v2; // edx
  int v3; // eax
  int v4; // edx

  v2 = this->u32_10; /*0x5ad790*/
  a2 = a2; /*0x5ad793*/
  if ( a2 >= v2 ) /*0x5ad799*/
    return 0; /*0x5ad7bc*/
  v4 = v2 - 1; /*0x5ad79b*/
  this->u32_10 = v4; /*0x5ad79e*/
  if ( a2 < v4 ) /*0x5ad7a1*/
  {
    do /*0x5ad7b4*/
    {
      ++a2; /*0x5ad7a7*/
      *(unsigned int *)(this->q004 + 4 * a2 - 4) = *(unsigned int *)(this->q004 + 4 * a2); /*0x5ad7ab*/
    }
    while ( a2 < this->u32_10 ); /*0x5ad7b4*/
  }
  return 1; /*0x5ad7b9*/
}
} // namespace gamemd

// 0x5B4080
namespace gamemd {
void Tree::Destructor() {
  Tree *v2; // ecx
  Tree *a2; // ecx

  if ( this ) /*0x5b4085*/
  {
    v2 = (Tree *)*this; /*0x5b4087*/
    if ( *this ) /*0x5b4087*/
      Tree::Destructor(v2); /*0x5b408d*/
    v3 = (Tree *)this->u32_4; /*0x5b4092*/
    if ( v3 ) /*0x5b4097*/
      Tree::Destructor(v3); /*0x5b4099*/
    operator delete((this)); /*0x5b409f*/
  }
}
} // namespace gamemd

// 0x5BD3D0
namespace gamemd {
BOOL Text::DrawCharAtGrid(HDC hdc, int String, int a4) {
  int v4; // ebx
  int v5; // esi
  int v7; // ebp

  a4 = a4; /*0x5bd3d1*/
  v5 = String; /*0x5bd3d7*/
  v7 = *(&this->q050 * String + 5 * String + a4 + 500); /*0x5bd3e7*/
  if ( v7 != this->u32_2714 ) /*0x5bd3f2*/
  {
    if ( v7 == 1 ) /*0x5bd3f7*/
    {
      SetBkColor(hdc, g_MissionQueueFrame.localVariables[419]); /*0x5bd405*/
      SetTextColor(hdc, g_MissionQueueFrame.localVariables[425]); /*0x5bd417*/
    }
    else
    {
      SetBkColor(hdc, g_MissionQueueFrame.localVariables[425]); /*0x5bd424*/
      SetTextColor(hdc, g_MissionQueueFrame.localVariables[419]); /*0x5bd436*/
    }
    this->u32_2714 = v7; /*0x5bd43c*/
  }
  (*((unsigned char *)&(String))) = this->Text_field_00 + 20 * v5 + 5 * v5 + a4); /*0x5bd45a*/
  return TextOutA( /*0x5bd484*/
           hdc,
           v5 * g_MissionQueueFrame.localVariables[471] + 10,
           a4 * (g_MissionQueueFrame.localVariables[469] + g_MissionQueueFrame.localVariables[465]) + 10,
           (LPCSTR)&String,
           1);
}
} // namespace gamemd

// 0x5C5D30
namespace gamemd {
char PlayerClass::AssignPlayerIndex_0() {
  return PlayerClass::AssignPlayerIndex();
}
} // namespace gamemd

// 0x5C5D40
namespace gamemd {
char StreamWrapper::Read() {
  char result; // al
  int v2; // eax
  unsigned int *v3; // ecx
  int v4; // esi
  int *v5; // [esp+4h] [ebp+4h]

  result = ScenarioClass::MissionStubReturnZero2(v5); /*0x5c5d45*/
  if ( result ) /*0x5c5d4c*/
  {
    v2 = 0; /*0x5c5d57*/
    if ( dword_A8DA84 > 0 ) /*0x5c5d5b*/
    {
      v3 = dword_A8DA78; /*0x5c5d5d*/
      do /*0x5c5d83*/
      {
        v4 = v3[v2]; /*0x5c5d67*/
        if ( *(unsigned int *)(v4 + 107) != -1 ) /*0x5c5d6d*/
        {
          *(unsigned int *)(v4 + 107) = v2; /*0x5c5d71*/
          v3 = dword_A8DA78; /*0x5c5d74*/
        }
        ++v2; /*0x5c5d80*/
      }
      while ( v2 < dword_A8DA84 ); /*0x5c5d83*/
    }
    return 1; /*0x5c5d86*/
  }
  return result; /*0x5c5d4e*/
}
} // namespace gamemd

// 0x5C5D90
namespace gamemd {
bool StreamWrapper::Write() {
  bool result; // al
  int i; // eax
  int v3; // ecx

  result = ScenarioClass::createStartingForces((MultiplayerGameMode *)this); /*0x5c5d90*/
  if ( result ) /*0x5c5d97*/
  {
    for ( i = 0; i < dword_A8DA84; ++i ) /*0x5c5da4*/
    {
      v3 = dword_A8DA78[i]; /*0x5c5daf*/
      if ( *(unsigned int *)(v3 + 107) != -1 ) /*0x5c5db5*/
        *(unsigned int *)(v3 + 107) = i; /*0x5c5db7*/
    }
    return 1; /*0x5c5dc5*/
  }
  return result; /*0x5c5d99*/
}
} // namespace gamemd

// 0x5C5DD0
namespace gamemd {
LRESULT StreamWrapper::Seek(HWND hWnd, int a3) {
  int Data; // eax
  int v5; // eax

  ListBox::Clear((ListBox *)hWnd); /*0x5c5dda*/
  Data = StreamWrapper::readData((StreamWrapper *)this, a3); /*0x5c5de6*/
  if ( Data ) /*0x5c5ded*/
    MPCombatTeam::AddToList(Data, hWnd); /*0x5c5df2*/
  v5 = StreamWrapper::readData((StreamWrapper *)this, -1); /*0x5c5dfb*/
  if ( v5 ) /*0x5c5e02*/
    MPCombatTeam::AddToList(v5, hWnd); /*0x5c5e07*/
  return SendMessageA(hWnd, 0x14Eu, 0, 0); /*0x5c5e1c*/
}
} // namespace gamemd

// 0x5CF6B0
namespace gamemd {
int StringTable::Find(const char **a2) {

  const char **v2; // ebx
  int v4; // esi
  int v6; // esi
  char *v7; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2; /*0x5cf6b2*/
  if ( !(unsigned __int8)String::NotEquals((String *)a2, 0) ) /*0x5cf6be*/
    return 0; /*0x5cf6be*/
  v4 = 0; /*0x5cf6ca*/
  if ( this->u32_10 <= 0 ) /*0x5cf6ce*/
    return 0; /*0x5cf728*/
  while ( 1 ) /*0x5cf6d5*/
  {
    String::AssignFromPtr((String *)&v7, v2); /*0x5cf6d5*/
    String::ToLower((String *)&v7); /*0x5cf6de*/
    String::AssignFromPtr((String *)&a2, *(const char ***)(this->StringTable_field_0x04 + 4 * v4)); /*0x5cf6ee*/
    String::ToLower((String *)&a2); /*0x5cf6f7*/
    if ( (unsigned __int8)String::Compare((String *)&v7, (const char **)&a2) ) /*0x5cf705*/
      break; /*0x5cf705*/
    DeleteAndZero((ObjectClass *)&a2); /*0x5cf712*/
    DeleteAndZero((ObjectClass *)&v7); /*0x5cf71b*/
    if ( ++v4 >= this->u32_10 ) /*0x5cf726*/
      return 0; /*0x5cf726*/
  }
  v6 = *(unsigned int *)(this->StringTable_field_0x04 + 4 * v4); /*0x5cf738*/
  DeleteAndZero((ObjectClass *)&a2); /*0x5cf73b*/
  DeleteAndZero((ObjectClass *)&v7); /*0x5cf744*/
  return v6; /*0x5cf728*/

}
} // namespace gamemd

// 0x5D6620
namespace gamemd {
int StreamWrapper::readData(int a2) {
  int v3; // eax
  int v4; // edi
  void (__thiscall ***v5)(unsigned int, int); // ecx
  int v6; // edx
  int v7; // ecx
  int *i; // esi
  int result; // eax

  v3 = this->u32_18; /*0x5d6624*/
  if ( v3 < 3 ) /*0x5d662a*/
  {
    v4 = 0; /*0x5d662c*/
    if ( v3 > 0 ) /*0x5d6630*/
    {
      do /*0x5d6648*/
      {
        v5 = *(void (__thiscall ****)(unsigned int, int))(this->q00C + 4 * v4); /*0x5d6635*/
        if ( v5 ) /*0x5d663a*/
          (**v5)(v5, 1); /*0x5d6640*/
        ++v4; /*0x5d6645*/
      }
      while ( v4 < this->u32_18 ); /*0x5d6648*/
    }
    this->q008.vt_slot_12(); /*0x5d6652*/
    this->vt_slot_192(/*0x5d665a*/
      this, &this->q008);
  }
  v6 = this->u32_18; /*0x5d6660*/
  v7 = 0; /*0x5d6663*/
  if ( v6 <= 0 ) /*0x5d6667*/
    return 0; /*0x5d6683*/
  for ( i = (int *)this->q00C; ; ++i ) /*0x5d6669*/
  {
    result = *i; /*0x5d6670*/
    if ( *i ) /*0x5d6670*/
    {
      if ( result->VtableStub_8 == a2 ) /*0x5d6679*/
        break; /*0x5d6679*/
    }
    if ( ++v7 >= v6 ) /*0x5d6681*/
      return 0; /*0x5d6681*/
  }
  return result; /*0x5d6685*/
}
} // namespace gamemd

// 0x5E98F0
namespace gamemd {
int PlayerSlot::IndexToDlgID() {
  if ( !this ) /*0x5e98f4*/
    return 1041; /*0x5e98f6*/
  if ( this == 1 ) /*0x5e98ff*/
    return 1042; /*0x5e9901*/
  if ( this == 2 ) /*0x5e990a*/
    return 1043; /*0x5e990c*/
  if ( this == 3 ) /*0x5e9915*/
    return 1044; /*0x5e9917*/
  if ( this == 4 ) /*0x5e9920*/
    return 1045; /*0x5e9922*/
  if ( this == 5 ) /*0x5e992b*/
    return 1046; /*0x5e992d*/
  if ( this == 6 ) /*0x5e9936*/
    return 1047; /*0x5e9938*/
  return this != 7 ? -1 : 1048;
}
} // namespace gamemd

// 0x5F33A0
namespace gamemd {
unsigned char * StringBuffer::Reset() {
  unsigned char *result; // eax

  result = (unsigned char *)this->u32_C; /*0x5f33a0*/
  *result = 0; /*0x5f33a3*/
  this->u32_14 = 0; /*0x5f33a6*/
  return result; /*0x5f33ad*/
}
} // namespace gamemd

// 0x608440
namespace gamemd {
int HashTable::LookupAndMark() {
  int result; // eax
  HashTable *v2; // [esp+0h] [ebp-4h] BYREF

  result = *(unsigned int *)&g_DialogHashMap_Count; /*0x608441*/
  v2 = this; /*0x608446*/
  if ( *(unsigned int *)&g_DialogHashMap_Count ) /*0x60844c*/
  {
    result = *(unsigned int *)(*(unsigned int *)&g_DialogHashMap_Base /*0x60846d*/
                       + 4
                       * ((*(int (__thiscall **)(HashTable **))&g_DialogHashMap_Hasher)(&v2)
                        & ((1 << g_DialogHashMap_Buckets) - 1)));
    if ( result ) /*0x608472*/
    {
      while ( *(HashTable **)result != v2 ) /*0x60847a*/
      {
        result = result->u32_204; /*0x60847c*/
        if ( !result ) /*0x608484*/
          return result; /*0x608484*/
      }
      result += 4; /*0x60848c*/
      if ( result ) /*0x608491*/
        result->u8_D4 = 1; /*0x608493*/
    }
  }
  return result; /*0x608487*/
}
} // namespace gamemd

// 0x624140
namespace gamemd {
int HashTable::FindAndMark(int a2, int a3) {
  int result; // eax

  this->HashTable_field_0x04 = a3; /*0x62414c*/
  result = *(unsigned int *)&g_DialogHashMap_Count; /*0x62414f*/
  a3 = a2; /*0x624156*/
  if ( *(unsigned int *)&g_DialogHashMap_Count ) /*0x62415a*/
  {
    result = *(unsigned int *)(*(unsigned int *)&g_DialogHashMap_Base /*0x62417d*/
                       + 4
                       * ((*(int (__thiscall **)(int *))&g_DialogHashMap_Hasher)(&a3)
                        & ((1 << g_DialogHashMap_Buckets) - 1)));
    if ( !result ) /*0x624182*/
      goto LABEL_5; /*0x624182*/
    while ( *(unsigned int *)result != a3 ) /*0x62418a*/
    {
      result = result->u32_204; /*0x62418c*/
      if ( !result ) /*0x624194*/
        goto LABEL_5; /*0x624194*/
    }
    result += 4; /*0x6241a2*/
    if ( result ) /*0x6241a7*/
    {
      result->u8_D4 = 1; /*0x6241a9*/
      (this->u32_8) = 1; /*0x6241af*/
    }
    else
    {
  LABEL_5:
      (this->u32_8) = 1; /*0x624196*/
    }
  }
  else
  {
    (this->u32_8) = 1; /*0x6241b7*/
  }
  return result; /*0x624199*/
}
} // namespace gamemd

// 0x6241E0
namespace gamemd {
char StreamWrapper::StubReturnFalse() {
  return 0; /*0x6241e2*/
}
} // namespace gamemd

// 0x624C80
namespace gamemd {
int HashMap::ComputeIndex(int a2) {
  return ((int (__thiscall *)(int))this->u32_18)(a2) & ((1 << this->u32_C) - 1); /*0x624c94*/
}
} // namespace gamemd

// 0x626690
namespace gamemd {
int FlagSystem::GetNextActive() {

  unsigned int *v1; // ebx
  unsigned int *v3; // edi
  signed int v4; // eax
  Flag *v5; // edx
  Flag *v6; // ebp
  FlagSystem v7; // edx
  int v9; // esi
  int v10; // eax
  int v11; // edi
  unsigned int *v12; // eax
  int v13; // edi
  int i; // ebx
  char *v15; // esi
  unsigned int *v16; // [esp+10h] [ebp-4h]

  v1 = *(unsigned int **)&g_FileExtensionState[12]; /*0x626699*/
  if ( this->u32_8 ) /*0x62669f*/
    return 0; /*0x62669f*/
  if ( *(unsigned int *)this >= v1[2] ) /*0x6266ad*/
  {
LABEL_7:
    this->u32_8 = 1; /*0x6266ff*/
    return 0; /*0x62670a*/
  }
  while ( 1 ) /*0x6266ba*/
  {
    v3 = (unsigned int *)(*v1 + 24 * *(unsigned int *)this); /*0x6266ba*/
    v4 = this->u32_4; /*0x6266bd*/
    if ( v4 < (int)v3[4] ) /*0x6266c2*/
      break; /*0x6266c2*/
LABEL_6:
    v7 = *this; /*0x6266ea*/
    this->u32_4 = 0; /*0x6266ec*/
    *this = (FlagSystem)++*(unsigned int *)&v7; /*0x6266f4*/
    if ( *(unsigned int *)&v7 >= v1[2] ) /*0x6266fd*/
      goto LABEL_7; /*0x6266fd*/
  }
  while ( 1 ) /*0x6266c4*/
  {
    v5 = (Flag *)v3[1]; /*0x6266c4*/
    this->u32_4 = v4 + 1; /*0x6266cf*/
    v6 = (Flag *)((char *)v5 + 260 * v4); /*0x6266d2*/
    if ( !(unsigned __int8)Flag::IsZero(v6) ) /*0x6266d7*/
      break; /*0x6266d7*/
    v4 = this->u32_4; /*0x6266e0*/
    if ( v4 >= (int)v3[4] ) /*0x6266e8*/
      goto LABEL_6; /*0x6266e8*/
  }
  if ( !v6 ) /*0x62670d*/
    return 0; /*0x626712*/
  v9 = *(unsigned int *)&g_FileExtensionState[12]; /*0x62671e*/
  v10 = (*(int (**)(Flag *))(v9 + 4))(v6); /*0x626721*/
  v11 = *(unsigned int *)(*(unsigned int *)v9 + 24 * (v10 % *(unsigned int *)(v9 + 8)) + 16); /*0x62672d*/
  v12 = (unsigned int *)(*(unsigned int *)v9 + 24 * (v10 % *(unsigned int *)(v9 + 8))); /*0x626731*/
  v13 = v11 - 1; /*0x626734*/
  v16 = v12; /*0x626735*/
  if ( v13 < 0 ) /*0x626739*/
    return 0; /*0x626739*/
  for ( i = 260 * v13; ; i -= 260 ) /*0x626742*/
  {
    v15 = (char *)(v12[1] + i); /*0x626750*/
    if ( (unsigned __int8)String::Equals(v15, v6->__pad_0) ) /*0x626755*/
      break; /*0x626755*/
    if ( --v13 < 0 ) /*0x626767*/
      return 0; /*0x626770*/
    v12 = v16; /*0x626747*/
  }
  if ( v15 == (char *)-256 ) /*0x626779*/
    return 0; /*0x62677e*/
  else
    return *(unsigned int *)(*((unsigned int *)v15 + 64) + 256); /*0x626788*/

}
} // namespace gamemd

// 0x63EF70
namespace gamemd {
int Vector4::EraseAt_Copy(int a2) {
  int v2; // edx
  int result; // eax
  int v4; // edx

  v2 = this->u32_10; /*0x63ef70*/
  a2 = a2; /*0x63ef73*/
  if ( a2 >= v2 ) /*0x63ef79*/
  {
    (*((unsigned char *)&(a2))) = 0; /*0x63ef9c*/
  }
  else
  {
    v4 = v2 - 1; /*0x63ef7b*/
    this->v4 = v4; /*0x63ef7e*/
    if ( a2 < v4 ) /*0x63ef81*/
    {
      do /*0x63ef94*/
      {
        ++a2; /*0x63ef87*/
        *(unsigned int *)(this->q004 + 4 * a2 - 4) = *(unsigned int *)(this->q004 + 4 * a2); /*0x63ef8b*/
      }
      while ( a2 < this->v4 ); /*0x63ef94*/
    }
    (*((unsigned char *)&(a2))) = 1; /*0x63ef97*/
  }
}
} // namespace gamemd

// 0x6406F0
namespace gamemd {
int ComPtr::Dtor() {
  int (__thiscall ***v2)(unsigned int, int); // ecx

  v2 = *(int (__thiscall ****)(unsigned int, int))this->__pad_000; /*0x6406f3*/
  if ( v2 ) /*0x6406f7*/
  {
    result = (**v2)(v2, 1); /*0x6406fd*/
    *(unsigned int *)this->__pad_000 = 0; /*0x6406ff*/
  }
  return result; /*0x640705*/
}
} // namespace gamemd

// 0x65C780
namespace gamemd {
int Random::State() {
  int result; // eax
  int Random_field_0x04; // edx
  int v3; // esi

  if ( this->s_Seed ) /*0x65c780*/
    return 0; /*0x65c785*/
  *(&this->q00C + this->s_State) ^= *(&this->q00C + this->q008); /*0x65c79d*/
  Random_field_0x04 = this->s_State; /*0x65c79f*/
  result = *(&this->q00C + Random_field_0x04++); /*0x65c7a5*/
  v3 = this->q008 + 1; /*0x65c7aa*/
  this->s_State = Random_field_0x04; /*0x65c7b1*/
  this->q008 = v3; /*0x65c7b4*/
  if ( Random_field_0x04 >= 250 ) /*0x65c7b7*/
    this->s_State = 0; /*0x65c7b9*/
  if ( v3 >= 250 ) /*0x65c7c7*/
    this->q008 = 0; /*0x65c7c9*/
  return result; /*0x65c787*/
}
} // namespace gamemd

// 0x65C8B0
namespace gamemd {
int RandomStraw::AdvanceState() {
  int result; // eax
  int v2; // edi
  int v3; // esi
  int v4; // ebx
  int v5; // ecx
  uint16_t v6; // dx

  result = this->__pad_004; /*0x65c8b0*/
  v2 = *(unsigned int *)this->ptr_0; /*0x65c8ba*/
  this->__pad_004 = result + 1; /*0x65c8bc*/
  v3 = 0; /*0x65c8bf*/
  do /*0x65c907*/
  {
    v4 = result; /*0x65c8c7*/
    v5 = result ^ dword_839644[v3++]; /*0x65c8c9*/
    v6 = v5; /*0x65c8ce*/
    v5 >>= 16; /*0x65c8d0*/
    result = v2 ^ (v6 * v5 + (dword_839690[v3] ^ (((v6 * v6 + ~(v5 * v5)) << 16) | ((v6 * v6 + ~(v5 * v5)) >> 16)))); /*0x65c903*/
    v2 = v4; /*0x65c905*/
  }
  while ( v3 < 4 ); /*0x65c907*/
  return result; /*0x65c909*/
}
} // namespace gamemd

// 0x65D430
namespace gamemd {
unsigned int * ComPtr::Constructor() {
  this->q004 = 0; /*0x65d432*/
  *(unsigned int *)this->__pad_000 = 0; /*0x65d439*/
  return this->ptr_0; /*0x65d43f*/
}
} // namespace gamemd

// 0x65D670
namespace gamemd {
int COMClass::ReleaseRef() {
  int result; // eax

  result = this->q010 - 1; /*0x65d673*/
  this->q010 = result; /*0x65d674*/
  if ( !result ) /*0x65d677*/
  {
    if ( this ) /*0x65d67b*/
      return (**(int (__thiscall ***)(ReferenceCounted *, int))this)(this, 1); /*0x65d681*/
  }
  return result; /*0x65d683*/
}
} // namespace gamemd

// 0x65D6A0
namespace gamemd {
unsigned int * COMClass::initInterface(char a2) {
  *this = (ReferenceCounted)0; /*0x65d6a9*/
  if ( (a2 & 1) != 0 ) /*0x65d6af*/
    operator delete((this)); /*0x65d6b2*/
  return this; /*0x65d6bc*/
}
} // namespace gamemd

// 0x661C10
namespace gamemd {
int RandomStraw::Release(int a2, int a3) {
  int v3; // ebx
  unsigned char *v4; // edi
  int v6; // eax

  v3 = a3; /*0x661c11*/
  v4 = (unsigned char *)a2; /*0x661c17*/
  if ( !a2 || a3 < 1 ) /*0x661c24*/
    return Delegate::Invoke((Straw *)this, a2, a3); /*0x661c5d*/
  do /*0x661c4d*/
  {
    v6 = this->q010; /*0x661c30*/
    this->q010 = v6 + 1; /*0x661c38*/
    *v4++ = RandomStraw::AdvanceState((RandomStraw *)this->q010 * v6 + 20)); /*0x661c40*/
    --v3; /*0x661c49*/
    this->q010 &= 0x1Fu; /*0x661c4a*/
  }
  while ( v3 ); /*0x661c4d*/
  return a3; /*0x661c53*/
}
} // namespace gamemd

// 0x661C70
namespace gamemd {
int * RandomStraw::QueryInterface(char a2) {
  /* X11: ptr_0 install elided (implicit via class virtuals 0x661c7e) — binary-proven install, was 0 */
  this->m_allocated = 0; /*0x661c84*/
  this->q010 = 0; /*0x661c87*/
  memset(this->q010, 0, 0x100u); /*0x661c8a*/
  Straw::Dtor((Straw *)this); /*0x661c8e*/
  if ( (a2 & 1) != 0 ) /*0x661c98*/
    operator delete((this)); /*0x661c9b*/
  return (int *)this->ptr_0; /*0x661ca5*/
}
} // namespace gamemd

// 0x69D8C0
namespace gamemd {
int * SHA1::ProcessBlock(const void **a2, int *a3) {

  int *result; // eax
  int v5; // ecx
  int v6; // edx
  unsigned int v7; // eax
  int *v8; // eax

  result = a3; /*0x69d8c0*/
  v5 = *a3; /*0x69d8c8*/
  if ( *a3 ) /*0x69d8c8*/
  {
    if ( *a2 ) /*0x69d8d3*/
    {
      v6 = this->u32_30; /*0x69d8da*/
      if ( v6 || v5 < 64 ) /*0x69d8e4*/
      {
        v7 = 64 - v6; /*0x69d8eb*/
        if ( v5 < 64 - v6 ) /*0x69d8ef*/
          v7 = *a3; /*0x69d8f1*/
        memcpy((char *)this + v6 + 52, *a2, v7); /*0x69d8ff*/
        *a2 = (char *)*a2 + v7; /*0x69d911*/
        this->u32_30 += v7; /*0x69d91a*/
        *a3 -= v7; /*0x69d926*/
        result = (int *)this->u32_30; /*0x69d928*/
        if ( result == 64 ) /*0x69d92d*/
        {
          SHA1::Transform(&this->u8_34, &this->u32_18); /*0x69d939*/
          v8 = (int *)this->u32_2C; /*0x69d93e*/
          this->u32_30 = 0; /*0x69d941*/
          result = v8 + 16; /*0x69d948*/
          this->u32_2C = result; /*0x69d94a*/
        }
      }
    }
  }
  return result; /*0x69d94d*/

}
} // namespace gamemd

// 0x69DFF0
namespace gamemd {
int SHA1::Reset(int a2) {
  int result; // eax

  result = 0; /*0x69dff3*/
  if ( *(unsigned int *)(a2 + 56) ) /*0x69dff0*/
  {
    *(unsigned char *)(a2 + 52) = 0; /*0x69dff9*/
    *(unsigned int *)(a2 + 60) = 0; /*0x69dffc*/
    *(unsigned int *)(a2 + 56) = 0; /*0x69dfff*/
    (*((unsigned char *)&(result))) = 1; /*0x69e002*/
  }
  else
  {
    (*((unsigned char *)&(result))) = 0; /*0x69e005*/
  }
  return result; /*0x69e004*/
}
} // namespace gamemd

// 0x6BEDB0
namespace gamemd {
int COMClassFactory::Register(IID *rclsid, LPUNKNOWN pUnkOuter, DWORD dwClsContext) {
  int result; // eax
  HRESULT v6; // esi

  if ( *(unsigned int *)this->__pad_000 ) /*0x6bedb4*/
    (*(void (__stdcall **)(unsigned int))(**(unsigned int **)this->__pad_000 + 8))(*(unsigned int *)this->__pad_000); /*0x6bedbd*/
  if ( (dwClsContext & 0x14) == 0 ) /*0x6bedc6*/
    return CoCreateInstance(rclsid, pUnkOuter, dwClsContext, &riid, (LPVOID *)this); /*0x6bee2b*/
  result = CoCreateInstance(rclsid, pUnkOuter, dwClsContext, &riid, (LPVOID *)&pUnkOuter); /*0x6beddd*/
  if ( result >= 0 ) /*0x6bede5*/
  {
    v6 = OleRun(pUnkOuter); /*0x6bedf2*/
    if ( v6 >= 0 ) /*0x6bedf6*/
      v6 = (*(int (__stdcall **)(LPUNKNOWN, IID *, COMClassFactory *))pUnkOuter->field_0)(pUnkOuter, &riid, this); /*0x6bee07*/
    (*(void (__stdcall **)(LPUNKNOWN))(pUnkOuter->field_0 + 8))(pUnkOuter); /*0x6bee10*/
    return v6; /*0x6bee13*/
  }
  return result; /*0x6bee15*/
}
} // namespace gamemd

// 0x6BF140
namespace gamemd {
unsigned int * COMClassFactory_3::Construct() {
  this->COMClassFactory_field_0x04 = 0; /*0x6bf142*/
  *(unsigned int *)this->tail_0 = 0; /*0x6bf149*/
  return this->tail_0; /*0x6bf14f*/
}
} // namespace gamemd

// 0x6BF2C0
namespace gamemd {
unsigned int * COMClassFactory_4::Construct() {
  this->COMClassFactory_field_0x04 = 0; /*0x6bf2c2*/
  *(unsigned int *)this->tail_0 = 0; /*0x6bf2c9*/
  return this->tail_0; /*0x6bf2cf*/
}
} // namespace gamemd

// 0x6BF440
namespace gamemd {
unsigned int * COMClassFactory_5::Construct() {
  this->COMClassFactory_field_0x04 = 0; /*0x6bf442*/
  *(unsigned int *)this->tail_0 = 0; /*0x6bf449*/
  return this->tail_0; /*0x6bf44f*/
}
} // namespace gamemd

// 0x6BF5C0
namespace gamemd {
unsigned int * COMClassFactory_6::Construct() {
  this->COMClassFactory_field_0x04 = 0; /*0x6bf5c2*/
  *(unsigned int *)this->tail_0 = 0; /*0x6bf5c9*/
  return this->tail_0; /*0x6bf5cf*/
}
} // namespace gamemd

// 0x6BF740
namespace gamemd {
unsigned int * COMClassFactory_7::Construct() {
  this->COMClassFactory_field_0x04 = 0; /*0x6bf742*/
  *(unsigned int *)this->tail_0 = 0; /*0x6bf749*/
  return this->tail_0; /*0x6bf74f*/
}
} // namespace gamemd

// 0x6BF8C0
namespace gamemd {
unsigned int * COMClassFactory_8::Construct() {
  this->COMClassFactory_field_0x04 = 0; /*0x6bf8c2*/
  *(unsigned int *)this->tail_0 = 0; /*0x6bf8c9*/
  return this->tail_0; /*0x6bf8cf*/
}
} // namespace gamemd

// 0x6BFA40
namespace gamemd {
unsigned int * COMClassFactory_9::Construct() {
  this->COMClassFactory_field_0x04 = 0; /*0x6bfa42*/
  *(unsigned int *)this->tail_0 = 0; /*0x6bfa49*/
  return this->tail_0; /*0x6bfa4f*/
}
} // namespace gamemd

// 0x6BFBC0
namespace gamemd {
unsigned int * COMClassFactory_10::Construct() {
  this->COMClassFactory_field_0x04 = 0; /*0x6bfbc2*/
  *(unsigned int *)this->tail_0 = 0; /*0x6bfbc9*/
  return this->tail_0; /*0x6bfbcf*/
}
} // namespace gamemd

// 0x6C0AC0
namespace gamemd {
unsigned int * COMClassFactory::CreateInstance() {
  this->q004 = 0; /*0x6c0ac2*/
  *(unsigned int *)this->__pad_000 = 0; /*0x6c0ac9*/
  return this->__pad_000; /*0x6c0acf*/
}
} // namespace gamemd

// 0x6C9680
namespace gamemd {
int FloatArray::Get(int a2) {
  return a2; /*0x6c9687*/
}
} // namespace gamemd

// 0x6DC4C0
namespace gamemd {
unsigned int * Vector2::Subtract(unsigned int *a2) {
  int Vector2_field_0x04; // edx

  Vector2_field_0x04 = this->q004; /*0x6dc4cd*/
  *(unsigned int *)this->__pad_000 -= *a2; /*0x6dc4d0*/
  this->q004 = Vector2_field_0x04 - a2->q004; /*0x6dc4d8*/
  return this->__pad_000; /*0x6dc4d7*/
}
} // namespace gamemd

// 0x721210
namespace gamemd {
int StringList::Find(const char *a2) {
  int v3; // esi

  if ( !a2 ) /*0x72121b*/
    return -1; /*0x72121b*/
  if ( !strlen(a2) ) /*0x721220*/
    return -1; /*0x721220*/
  v3 = 0; /*0x721230*/
  if ( this->u32_24 <= 0 ) /*0x721234*/
    return -1; /*0x721252*/
  while ( _strcmpi(*(char **)(this->u32_18 + 4 * v3), (char *)a2) ) /*0x721248*/
  {
    if ( ++v3 >= this->u32_24 ) /*0x721250*/
      return -1; /*0x721250*/
  }
  return v3; /*0x721252*/
}
} // namespace gamemd

// 0x765680
namespace gamemd {
int COMClass::queryProperty() {
  int (__thiscall ***v2)(unsigned int, int); // ecx
  int result; // eax

  v2 = *(int (__thiscall ****)(unsigned int, int))&this->Items; /*0x765686*/
  this->Count = 0; /*0x765689*/
  if ( v2 && (this->IsAllocated) ) /*0x765690*/
  {
    result = (**v2)(v2, 3); /*0x76569d*/
    *&this->Items = 0; /*0x76569f*/
  }
  (this->IsAllocated) = 0; /*0x7656a2*/
  this->Capacity = 0; /*0x7656a5*/
  return result; /*0x7656a8*/
}
} // namespace gamemd

// 0x7656B0
namespace gamemd {
unsigned int COMClass::setProperty(int a2) {
  if ( (this->q00C) ) /*0x7656b0*/
    return (unsigned int)(a2 - *&this->q004) >> 3; /*0x7656c5*/
  else
    return 0; /*0x7656b7*/
}
} // namespace gamemd

// 0x765BB0
namespace gamemd {
char * COMClass::createInstance(char a2) {
  int v3; // eax
  char *v4; // ebp
  ComPtr *v5; // esi
  int v6; // eax
  int v7; // edi

  if ( (a2 & 2) != 0 ) /*0x765bbb*/
  {
    v3 = *((unsigned int *)this - 1); /*0x765bbd*/
    v4 = (char *)this - 4; /*0x765bc1*/
    v5 = &this->q008 * v3); /*0x765bc4*/
    v6 = v3 - 1; /*0x765bc7*/
    if ( v6 >= 0 ) /*0x765bc8*/
    {
      v7 = v6 + 1; /*0x765bcb*/
      do /*0x765bdf*/
      {
        v5 = (ComPtr *)((char *)v5 - 8); /*0x765bce*/
        *(unsigned int *)v5->__pad_000 = 0; /*0x765bd3*/
        ((ComPtr *)v5)->Release(); /*0x765bd9*/
        --v7; /*0x765bde*/
      }
      while ( v7 ); /*0x765bdf*/
    }
    if ( (a2 & 1) != 0 ) /*0x765be5*/
      operator delete((v4)); /*0x765be8*/
    return v4; /*0x765bf0*/
  }
  else
  {
    *(unsigned int *)this->__pad_000 = 0; /*0x765bfa*/
    ((ComPtr *)this)->Release(); /*0x765c00*/
    if ( (a2 & 1) != 0 ) /*0x765c08*/
      operator delete((this)); /*0x765c0b*/
    return this->__pad_000; /*0x765c13*/
  }
}
} // namespace gamemd

// 0x765C20
namespace gamemd {
unsigned int * COMClass::getInterface(char a2) {
  void (__thiscall ***v3)(unsigned int, int); // ecx

  v3 = *(void (__thiscall ****)(unsigned int, int))&this->Items; /*0x765c23*/
  *(unsigned int *)this->m_1 = 0; /*0x765c26*/
  if ( v3 && (this->IsAllocated) ) /*0x765c30*/
  {
    (**v3)(v3, 3); /*0x765c3f*/
    *&this->Items = 0; /*0x765c41*/
  }
  (this->IsAllocated) = 0; /*0x765c4c*/
  this->Capacity = 0; /*0x765c52*/
  if ( (a2 & 1) != 0 ) /*0x765c59*/
    operator delete((this)); /*0x765c5c*/
  return this->ptr_0; /*0x765c66*/
}
} // namespace gamemd

// 0x767880
namespace gamemd {
void ** COMClass::coUninitialize(char a2) {
  DeleteAndZero(this->q010); /*0x767886*/
  DeleteAndZero(this->q014); /*0x76788e*/
  *(unsigned int *)this->__pad_000 = 0; /*0x767895*/
  ReferenceCounted::Constructor((ReferenceCounted *)this); /*0x76789b*/
  if ( (a2 & 1) != 0 ) /*0x7678a5*/
    operator delete((this)); /*0x7678a8*/
  return (void **)this; /*0x7678b2*/
}
} // namespace gamemd

// 0x76F0C0
namespace gamemd {
unsigned int * VectorCursor::Construct(int a2, int a3) {
  this->__pad_004 = a2; /*0x76f0ca*/
  this->u32_8 = a3; /*0x76f0cd*/
  /* X11: ptr_0 install elided (implicit via class virtuals 0x76f0d0) — binary-proven install, was 0 */
  return this->ptr_0; /*0x76f0d6*/
}
} // namespace gamemd

// 0x76F140
namespace gamemd {
unsigned int * VectorCursor::drawCursor(char a2) {
  /* X11: ptr_0 install elided (implicit via class virtuals 0x76f149) — binary-proven install, was 0 */
  if ( (a2 & 1) != 0 ) /*0x76f14f*/
    operator delete((this)); /*0x76f152*/
  return this->ptr_0; /*0x76f15c*/
}
} // namespace gamemd

// 0x77B030
namespace gamemd {
void ** PlayerProfile::QueryInterface(char a2) {
  *this = (PlayerProfile)0; /*0x77b036*/
  ((DeleteAndZero *)&this->DeleteAndZero_46)->Alt(); /*0x77b03c*/
  ((DeleteAndZero *)&this->DeleteAndZero_14)->Alt(); /*0x77b044*/
  DeleteAndZero(&this->ObjectClass_3); /*0x77b04c*/
  ReferenceCounted::Constructor((ReferenceCounted *)this); /*0x77b053*/
  if ( (a2 & 1) != 0 ) /*0x77b05d*/
    operator delete((this)); /*0x77b060*/
  return (void **)this; /*0x77b06a*/
}
} // namespace gamemd

// 0x7ADF70
namespace gamemd {
int HashMap::Shrink2() {

  unsigned int HashMap_field_0x08; // esi
  int result; // eax
  unsigned int **v4; // ebp
  int HashMap_field_0x0C; // edi
  void *v6; // edi
  unsigned int v7; // edx
  unsigned int **v8; // edi
  unsigned int v9; // ebp
  unsigned int *v10; // esi
  int v11; // edx
  unsigned int v12; // ecx
  unsigned int *v13; // eax
  unsigned int **v14; // [esp+8h] [ebp-4h]

  HashMap_field_0x08 = this->HashMap_field_0x08; /*0x7adf75*/
  result = this->u32_30; /*0x7adf78*/
  if ( HashMap_field_0x08 > result && this->u32_14 != 1 ) /*0x7adf87*/
  {
    v4 = *(unsigned int ***)this->__pad_0; /*0x7adf90*/
    HashMap_field_0x0C = this->HashMap_field_0x0C; /*0x7adf93*/
    v14 = *(unsigned int ***)this->__pad_0; /*0x7adf96*/
    this->HashMap_field_0x08 = HashMap_field_0x08 >> 1; /*0x7adf9c*/
    this->HashMap_field_0x0C = HashMap_field_0x0C - 1; /*0x7adfa4*/
    v6 = (void *)__2_YAPAXI_Z(4 * (HashMap_field_0x08 >> 1)); /*0x7adfaf*/
    v7 = 4 * this->HashMap_field_0x08; /*0x7adfb4*/
    *(unsigned int *)this->__pad_0 = v6; /*0x7adfbb*/
    memset(v6, 0, v7); /*0x7adfc0*/
    if ( (int)HashMap_field_0x08 > 0 ) /*0x7adfcb*/
    {
      v8 = v4; /*0x7adfcd*/
      v9 = HashMap_field_0x08; /*0x7adfcf*/
      do /*0x7ae003*/
      {
        v10 = *v8; /*0x7adfd1*/
        if ( *v8 ) /*0x7adfd1*/
        {
          do /*0x7adffd*/
          {
            v11 = (*((int (**)(unsigned int *))&this->u32_18))(v10) & ((1 << this->HashMap_field_0x0C) - 1); /*0x7adfe7*/
            v12 = *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v11); /*0x7adfeb*/
            *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v11) = v10; /*0x7adff1*/
            v13 = (unsigned int *)v10[28]; /*0x7adff3*/
            v10[28] = v12; /*0x7adff6*/
            v10 = v13; /*0x7adff9*/
          }
          while ( v13 ); /*0x7adffd*/
        }
        ++v8; /*0x7adfff*/
        --v9; /*0x7ae002*/
      }
      while ( v9 ); /*0x7ae003*/
      v4 = v14; /*0x7ae005*/
    }
    __3_YAXPAX_Z(v4); /*0x7ae00a*/
  }
  return result; /*0x7ae014*/

}
} // namespace gamemd

// 0x7AE0C0
namespace gamemd {
int HashMap::ComputeIndex_2(int a2) {
  return ((int (__thiscall *)(int))this->u32_18)(a2) & ((1 << this->u32_C) - 1); /*0x7ae0d4*/
}
} // namespace gamemd

// 0x7AE460
namespace gamemd {
int HashMap::Shrink() {

  unsigned int HashMap_field_0x08; // esi
  int result; // eax
  unsigned int **v4; // ebp
  int HashMap_field_0x0C; // edi
  void *v6; // edi
  unsigned int v7; // edx
  unsigned int **v8; // edi
  unsigned int v9; // ebp
  unsigned int *v10; // esi
  int v11; // edx
  unsigned int v12; // ecx
  unsigned int *v13; // eax
  unsigned int **v14; // [esp+8h] [ebp-4h]

  HashMap_field_0x08 = this->HashMap_field_0x08; /*0x7ae465*/
  result = this->u32_30; /*0x7ae468*/
  if ( HashMap_field_0x08 > result && this->u32_14 != 1 ) /*0x7ae477*/
  {
    v4 = *(unsigned int ***)this->__pad_0; /*0x7ae480*/
    HashMap_field_0x0C = this->HashMap_field_0x0C; /*0x7ae483*/
    v14 = *(unsigned int ***)this->__pad_0; /*0x7ae486*/
    this->HashMap_field_0x08 = HashMap_field_0x08 >> 1; /*0x7ae48c*/
    this->HashMap_field_0x0C = HashMap_field_0x0C - 1; /*0x7ae494*/
    v6 = (void *)__2_YAPAXI_Z(4 * (HashMap_field_0x08 >> 1)); /*0x7ae49f*/
    v7 = 4 * this->HashMap_field_0x08; /*0x7ae4a4*/
    *(unsigned int *)this->__pad_0 = v6; /*0x7ae4ab*/
    memset(v6, 0, v7); /*0x7ae4b0*/
    if ( (int)HashMap_field_0x08 > 0 ) /*0x7ae4bb*/
    {
      v8 = v4; /*0x7ae4bd*/
      v9 = HashMap_field_0x08; /*0x7ae4bf*/
      do /*0x7ae4f3*/
      {
        v10 = *v8; /*0x7ae4c1*/
        if ( *v8 ) /*0x7ae4c1*/
        {
          do /*0x7ae4ed*/
          {
            v11 = (*((int (**)(unsigned int *))&this->u32_18))(v10) & ((1 << this->HashMap_field_0x0C) - 1); /*0x7ae4d7*/
            v12 = *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v11); /*0x7ae4db*/
            *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v11) = v10; /*0x7ae4e1*/
            v13 = (unsigned int *)v10[2]; /*0x7ae4e3*/
            v10[2] = v12; /*0x7ae4e6*/
            v10 = v13; /*0x7ae4e9*/
          }
          while ( v13 ); /*0x7ae4ed*/
        }
        ++v8; /*0x7ae4ef*/
        --v9; /*0x7ae4f2*/
      }
      while ( v9 ); /*0x7ae4f3*/
      v4 = v14; /*0x7ae4f5*/
    }
    __3_YAXPAX_Z(v4); /*0x7ae4fa*/
  }
  return result; /*0x7ae504*/

}
} // namespace gamemd

// 0x41C3C0
namespace gamemd::ra2::gamemd::gamemd {
int Vector3::Magnitude() {
    return Math::Sqrt( /*0x41c3e9*/
             *(double *)this * *(double *)this
           + this->ptr_8 * this->ptr_8
           + this->uniqueId * this->uniqueId);
}
} // namespace gamemd::ra2::gamemd::gamemd

