// GENERATED supplied bodies (supply_missing_bodies.py) -- no-body
// no-file FAIL family; bodies are cache-verbatim transforms.
// G42.32 P: tree-universe marker -- e4 tree-owned decls suppressed (G42.33 b3 补齐)
#define GAMEMD_TREE_UNIVERSE 1
// G42.33 b3: per-class opt-in -- e4 flat 载体取胜
#define GAMEMD_E4_Buffer 1
#define GAMEMD_E4_Text 1
#define GAMEMD_E4_BuildingLoadQueue 1
#define GAMEMD_E4_FrameTimer 1
#define GAMEMD_E4_CampaignScore 1
#define GAMEMD_E4_FontClass 1
#define GAMEMD_E4_FontRenderer 1
#define GAMEMD_E4_ToolTipClass 1
#define GAMEMD_E4_InputManager_ProcessEvents 1
#define GAMEMD_E4_Straw 1
#define GAMEMD_E4_Delegate 1
#define GAMEMD_E4_Settings 1
#define GAMEMD_E4_Screen 1
#define GAMEMD_E4_Lobby 1
#include "e4/classes/Text_e4.hpp"
#include "core/stream_ext.hpp"
#include "e4/classes/Count_e4.hpp"  // G57w17h4: carrier-first (defines GAMEMD_E4_Count before utility_ext)
#include "core/utility_ext.hpp"
#include "misc/misc_ext.hpp"
#include "network/network_ext.hpp"
#include "network/session.hpp"
#include "render/render_ext.hpp"
#include "render/text_render.hpp"
#include "system/buffer_io_file.hpp"
#include "system/cc_file.hpp"
#include "system/convert_class.hpp"
#include "system/file_class.hpp"
#include "system/mix_file.hpp"
#include "system/radar.hpp"
#include "ui/command_class.hpp"
#include "ui/command_ext.hpp"
#include "ui/gadget.hpp"
#include "ui/sidebar.hpp"
#include "ui/tool_tip.hpp"
#include "ui/ui_ext.hpp"
// G42.34 T1: bridge for e4 flat headers using bare AbstractClass* (tree side)
namespace ra2 { namespace game { class AbstractClass; } }
using ra2::game::AbstractClass;
#include "e4/classes/Base64Straw_e4.hpp"
#include "e4/classes/Array_e4.hpp"

#include "wdt/wdt.hpp"
// G42.33 b3: e4 flat 载体 (体表 static-form 调用宿主)
#include "core/ddraw_init.hpp"       // g_BitShift_*/g_BitMask_* 全局
#include "e4/classes/BitmapClass_e4.hpp"
#include "e4/classes/CampaignScore_e4.hpp"
#include "e4/classes/CampaignSelect_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/FontClass_e4.hpp"
#include "e4/classes/FontRenderer_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/InputManager_ProcessEvents_e4.hpp"
#include "e4/classes/Lobby_e4.hpp"
#include "e4/classes/Screen_e4.hpp"
#include "e4/classes/Skirmish_e4.hpp"
#include "e4/classes/ToolTipClass_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/Settings_e4.hpp"
#include "e4/classes/Delegate_e4.hpp"
#include "e4/classes/Straw_e4.hpp"
#include "e4/classes/Network_e4.hpp"
// G42.35: 体表 C2027 补全 (Math/Session/WideString/Checksummer 前此仅 _fwd)
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Session_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/Checksummer_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"  // G42.35: Mouse::IsButtonDown 体表词汇
#include "e4/classes/VectorClass_ptr_ConvertClass_e4.hpp"  // G42.35: MarkDirty 体表词汇
#include "e4/classes/EventClass_e4.hpp"  // G42.35: Enqueue 体表词汇
#include "e4/classes/Debug_e4.hpp"  // G42.35: Debug::Log 体表词汇
#include "e4/classes/Vector_e4.hpp"  // G42.35: Vector::Clear 体表词汇
#include "e4/classes/Audio_e4.hpp"  // G42.35: Audio::IsSoundEnabled 体表词汇
#include "core/hash_table.hpp"
// [w16g4] C3861 supply (raw call-form evidence)
namespace gamemd { int Dtor(AbstractTypeClass *p_this); }  // x4:ida@0x4109c0
namespace gamemd { int Reset(AudioStream *p_this); }  // x4:ida@0x403820
namespace gamemd { int Read(int p0); }  // x4:signals@0x42f5e0
// ---- g57b5 W5: qualified-call free-form vocab ----
namespace gamemd {
int FindDialogTemplate(SaveLoadDialog *p_this);  // x4:ida@0x6083e0
int LookupDialogHash(SkirmishMapGen *p_this);  // x4:ida@0x6067a0
} // namespace gamemd
// ---- g57b5 W5 end ----

// G42.33 b3: 本地缺席全局/原型载体 (team R1 前例)
extern unsigned int stru_A8EB00;      // data: 0xA8EB00
// G42.33 b3: r6 缺席全局/原型
extern int GetResourceIDCSF(void *a1);  // 本地原型 (G42.34: thiscall static-form, this=ObjectClass* 0x4E41D0)
extern int GetLobbyPlayerColor(int a1);  // 本地原型
extern wchar_t **FormatWideString(wchar_t **a1, const wchar_t *a2);  // 0x7B7DD0 本地原型 (G42.35)
extern void *SearchMIXFile(char *Source, char a2);  // 0x5B40B0 本地原型 (G42.35)
extern char *g_Str_File_FULLFNT3_SHP;   // data: "FULLFNT3.SHP" 串 (G42.35)
extern char *aSidefnt3Pal;               // data: "sidefnt3.pal" 串 (G42.35)
extern char *aFullfnt3Pal;               // data: "fullfnt3.pal" 串 (G42.35)
extern unsigned int g_BitShift_Green_0;  // data: 0x8A0DD4 (canon globals 同形, G42.35)
extern void *g_DSurface_Primary;         // data: 0x887308 (e4_globals 同形, G42.35)
struct stru_B054D0_host { unsigned int m_1[8]; };  // G42.35: .m_1[N] 成员词汇宿主 (ida_globals 侧为 uchar)
struct dword_887640_host { unsigned int *MouseClass_field_0x0; };  // G42.35: vfptr 词汇宿主
struct g_DialogPool_host { unsigned char q208[256]; };  // G42.35: .q208[N] 下标宿主
extern g_DialogPool_host g_DialogPool;  // data: 全局 (G42.35)
struct g_BuildingLoadQueue_Array_host { unsigned char qF70[2048]; };  // G42.35: .qF70[N] 下标宿主 (0xB0E840)
extern int UI_Create_72D820(void);  // 0x72D820 本地原型 (canon functions 同形, G42.35)
extern int UI_Create_72D210(void);  // 0x72D210 本地原型 (canon functions 同形, G42.35)
extern int UI_Create_72D030(void);  // 0x72D030 本地原型 (canon functions 同形, G42.35)
extern int VtableStub_72D450(void); // 0x72D450 本地原型 (canon functions 同形, G42.35)
extern int VtableStub_72E280(void); // 0x72E280 本地原型 (canon functions 同形, G42.35)
extern int UI_Create_72B9D0(void);  // 0x72B9D0 本地原型 (G42.35)
extern int UI_Create_72BBB0(void);  // 0x72BBB0 本地原型 (G42.35)
extern int UI_Create_72BD90(void);  // 0x72BD90 本地原型 (G42.35)
extern int UI_Create_72BF70(void);  // 0x72BF70 本地原型 (G42.35)
extern int UI_Create_72C150(void);  // 0x72C150 本地原型 (G42.35)
extern int UI_Create_72C330(void);  // 0x72C330 本地原型 (G42.35)
extern int UI_Create_72C510(void);  // 0x72C510 本地原型 (G42.35)
extern int UI_Create_72C6F0(void);  // 0x72C6F0 本地原型 (G42.35)
extern int UI_Create_72C8D0(void);  // 0x72C8D0 本地原型 (G42.35)
extern int UI_Create_72CAB0(void);  // 0x72CAB0 本地原型 (G42.35)
extern int UI_Create_72CE50(void);  // 0x72CE50 本地原型 (G42.35)
struct stru_A8BB1C_host { unsigned char __pad_87[256]; };  // G42.35: .__pad_87[N] 下标宿主 (0xA8BB1C)
extern g_BuildingLoadQueue_Array_host g_BuildingLoadQueue_Array;  // data: 0xB0E840 (globals_system void* 同址; 体表按下标用)
extern void *Hash_Check_5C61E0(void);  // 0x5C61E0 本地原型 (canon: sub_5C61E0, G42.35)
extern int Hash_Check(void);           // 0x5C61D0 本地原型 (canon: sub_5C61D0 void*, G42.35)
extern int GetHouseTechLevel(int a1, int a2);  // 0x5004E0 本地原型 (House_GetTechLevel, G42.35)
extern char *aBtnPlusShp;              // data: "btn+.shp" 串 (G42.35)
extern char *aBtnMinsShp;              // data: "btn-.shp" 串 (G42.35)
extern char *aDRa2mdpostTool;          // data: "RA2MD\\posttool" 串 (G42.35)
extern unsigned int g_DialogHashTable; // data: 0xAC4848 (e4_globals 同形, G42.35)
extern char *g_Str_File_number0_pcx;  // data: "number0.pcx" 串 (G42.35)
extern char *g_Str_File_number1_pcx;  // data: "number1.pcx" 串 (G42.35)
extern char *aNumber2Pcx;             // data: "number2.pcx" 串 (G42.35)
extern char *aNumber3Pcx;             // data: "number3.pcx" 串 (G42.35)
extern char *aNumber4Pcx;             // data: "number4.pcx" 串 (G42.35)
extern char *aNumber5Pcx;             // data: "number5.pcx" 串 (G42.35)
extern char *aNumber6Pcx;             // data: "number6.pcx" 串 (G42.35)
extern char *aNumber7Pcx;             // data: "number7.pcx" 串 (G42.35)
extern char *aNumber8Pcx;             // data: "number8.pcx" 串 (G42.35)
extern char *aNumber9Pcx;             // data: "number9.pcx" 串 (G42.35)
// G42.35: 全局函数 DeleteAndZero@0x7B46F0 (truth: int thiscall(ObjectClass*)) --
// 与 command_ext 的 struct DeleteAndZero 同名共存 (函数名遮蔽类名, 类经 DeleteAndZero:: 限定仍可达)
int DeleteAndZero(void *aP0);  // 0x7B46F0 函数原型
extern int SetupSkirmishSpawnLocations(HWND hDlg, int nIDDlgItem, int a3);  // 本地原型 (G42.34: 3-arg truth, def=0x4E49A0 addr4E_e4.cpp)
extern wchar_t * GetStringCSF(char *key, unsigned int *a2, const char *a3, int a4);
extern wchar_t * g_Str_File_CampScor_cpp;  // data: CSF 标签
extern char * CharToWideString(unsigned char *a1);  // 本地原型 (G42.35: truth 0x735120 char*(uchar*))
extern char * ToWideStringChar(char *a1);  // 本地原型
extern int MapSkirmishDialogPlayerToControl(HWND a1, int a2);  // 本地原型 (G42.35: 2-arg truth 0x4E48E0)
extern int sub_46DCC0(HWND hDlg, unsigned char a2);  // 本地原型 (G42.35: 2-arg truth)
extern int sub_46DE20(HWND hDlg, int nCmdShow);  // 本地原型 (G42.35: 2-arg truth)
extern int BaseDialogProc(HWND a1, unsigned int a2, unsigned int a3, HWND a4);  // 本地原型 (G42.35: a4=HWND truth)
extern unsigned char stru_A80220; // data: 0xA80220 (Color Lerp 表基)
extern int g_GameModeOptionState;     // data: 全局
extern int CompareFunc2Int(int a1, int a2);  // 0x725040 (_generated/global_funcs 真值)
extern int SendCampaignOptions();     // 0x46D4A0 本地原型 (Game:: 静态形式)
extern int DecodeBitmapRGB(void *a1, int a2, void *a3, int a4);  // 本地原型
extern int EncodeBitmapRGB(void *a1, int a2, void *a3, int a4);  // 本地原型
extern int sub_434840(unsigned int *a1, unsigned int *a2, int *a3);  // 0x434840 本地原型
extern int IsKnownPointer(void *a1);   // 本地原型
extern int GetResourceID3CSF(void *a1);  // 本地原型
extern void *SendToPlayer(int a1, int a2, int a3, int a4, wchar_t *a5);  // 0x541260 本地原型 (Network:: 静态形式)
extern void *ReceiveLoop(void *a1);  // 0x5410B0 区 本地原型 (Network:: 静态形式, G42.34: ptr this)
// Base64Straw 完整本地载体 (体表 q000 下标/成员用)
extern int GetHouseClassSideIndex(int a1);  // 本地原型 (调用点 int)
// G42.33 b3: r8 缺席全局/原型
extern void *g_UIControlState;        // data: 0xAC1154 (globals_core 同形)
extern char g_Str_Fmt_PctD[2];            // data: "%d" 串
extern char g_Str_TXT_WAITING[12];         // data: CSF 标签
extern char g_Str_TXT_READY[10];           // data: CSF 标签
extern int aGuiContinue;              // data: "GUIContinue" 串
extern int aTxtAborted;               // data: "TXT_Aborted" 串
extern int g_TypeClass_DefaultString; // data: 缺省串
struct stru_A8D600_host { unsigned char q000[0x10]; unsigned int q010; };  // G42.35: 成员词汇宿主
extern stru_A8D600_host stru_A8D600;      // data: 0xA8D600
extern int InitDegToRad(void);        // 本地原型
extern int AssignPlayerColor(HWND hDlg, void *nIDDlgItem);  // 本地原型 (G42.35: 2-arg truth 0x5E9C00, a2=StartCombo*)
extern int AssignPlayerSide(HWND hDlg, int nIDDlgItem);  // 本地原型 (G42.35: 2-arg truth 0x5E9CE0, a2=int)
extern int EnableGameModeControls(HWND hDlg, unsigned char a2);  // 本地原型 (G42.35: 2-arg truth 0x46DD70)
extern int SelectLobbyCountry(HWND hDlg, void *a2);  // 本地原型 (G42.35: 2-arg truth 0x5E9B60, a2=CountryCombo*)
extern wchar_t **ReadChatMessage(wchar_t **a1, HWND a2);  // 本地原型 (G42.35: 2-arg truth 0x5EDD00)
extern int SetDialogPlayerName(HWND hDlg, int a2);  // 本地原型
extern int StartGame(HWND hDlg);      // 本地原型
extern int ResetLobbyFactionTable(HWND hDlg);  // 本地原型
extern int SetupLobbyFactionSlots(HWND hDlg, int a2, int a3);  // 本地原型
extern int InitGameDropdownColors(void *a1);  // 本地原型
// stru_A8B250 typed 宿主 (ida_globals 无; [N] 下标站点承载)
struct stru_A8B250_host { unsigned char q000[160]; };
extern stru_A8B250_host stru_A8B250;  // data: 0xA8B250
// G42.35: .ObjectTypeClass[N] 下标站点宿主 (e4_globals 裸 uint 与 cache 成员词汇不兼容)
struct stru_A8EB00_host { unsigned int ObjectTypeClass[64]; };
// G42.35: dword_A8B230[127].vtable2 下标站点宿主
struct dword_A8B230_host { void *vtable1; void *vtable2; };
// G42.35: 体表缺席全局 (ida_globals 名 dword_887598/dword_87F5F0; stru_ 成员词汇承载)
struct stru_887598_host { void *lineTrailer; };
extern stru_887598_host stru_887598;  // data: 0x887598
struct stru_87F5F0_host { unsigned char __pad_58[1180]; };
extern stru_87F5F0_host stru_87F5F0;  // data: 0x87F5F0
extern void *g_DSurface_Hidden;      // data: 0x88730C (e4_globals 同形)
extern void *g_DSurface_Hidden_2;    // data: 0x887314 (e4_globals 同形)
struct g_MissionQueueFrame_host { int briefing[512]; };  // G42.35: .briefing[N] 下标宿主
extern g_MissionQueueFrame_host g_MissionQueueFrame;  // data: 0xABC5F8 (e4_globals 同址)
struct Base64Straw;  // G42.32 S R4: local fwd (ptr-form uses only; e4_protos full-header C2990-risky here)

// 0x623840
namespace gamemd {
int ListBox::Clear() {
  LRESULT v2; // eax
  WPARAM v3; // esi

  v2 = SendMessageA((HWND)this, 0x146u, 0, 0); /*0x623855*/
  v3 = v2 - 1; /*0x623859*/
  if ( v2 ) /*0x62385c*/
  {
    do /*0x62386e*/
      SendMessageA((HWND)this, 0x144u, v3, 0); /*0x623867*/
    while ( v3-- ); /*0x62386e*/
  }
  return 0; /*0x623870*/
}
} // namespace gamemd

// 0x6AC780
namespace gamemd {
unsigned int * SidebarClass::queryInterface(char a2) {
  GadgetClass::Dtor((GadgetClass *)this); /*0x6ac783*/
  if ( (a2 & 1) != 0 ) /*0x6ac78d*/
    operator delete((this)); /*0x6ac790*/
  return &this->field_0; /*0x6ac79a*/
}
} // namespace gamemd

// 0x724C30
namespace gamemd {
void ToolTipClass::ddtor() {
  void *v2; // eax

  v2 = *&this->Position; /*0x724c36*/
  this->Duration = 0; /*0x724c39*/
  if ( v2 && (this->IsAllocated) ) /*0x724c40*/
  {
    operator delete((v2)); /*0x724c46*/
    *&this->Position = 0; /*0x724c4e*/
  }
  (this->IsAllocated) = 0; /*0x724c51*/
  this->m_8 = 0; /*0x724c54*/
}
} // namespace gamemd

// 0x724C90
namespace gamemd {
char ToolTipClass::addRef(int a2) {
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x724c92*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x724c9d*/
  {
    v3 = 0; /*0x724c9f*/
    if ( m_8 <= 0 ) /*0x724ca3*/
      return 1; /*0x724cc3*/
    v4 = *&this->Position; /*0x724ca5*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x724cab*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x724cb4*/
    {
      ++v3; /*0x724cb6*/
      ++v4; /*0x724cb7*/
      if ( v3 >= m_8 ) /*0x724cbc*/
        return 1; /*0x724cbc*/
    }
  }
  return 0; /*0x724cbe*/
}
} // namespace gamemd

// 0x724FC0
namespace gamemd {
int CommandClass::BinarySearchAction(unsigned int *a2) {
  int result; // eax
  CommandClass v4; // edi
  unsigned int v5; // ebx
  int v6; // ecx
  unsigned int v7; // esi

  result = this->u32_4; /*0x724fc3*/
  if ( result ) /*0x724fc8*/
  {
    if ( !this->u32_C ) /*0x724fce*/
    {
      qsort(*(void **)this, result, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunc2Int); /*0x724fe0*/
      this->u32_10 = 0; /*0x724fe8*/
      this->u32_C = 1; /*0x724fef*/
    }
    v4 = *this; /*0x724ff9*/
    v5 = *a2; /*0x724ffb*/
    v6 = this->u32_4; /*0x724ffd*/
    if ( v6 <= 0 ) /*0x725002*/
      return 0; /*0x72502e*/
    while ( 1 ) /*0x72500b*/
    {
      v7 = *(unsigned int *)(*(unsigned int *)&v4 + 8 * (v6 / 2)); /*0x72500b*/
      if ( v7 <= v5 ) /*0x725013*/
      {
        if ( v7 == v5 ) /*0x725019*/
          return *(unsigned int *)&v4 + 8 * (v6 / 2); /*0x725033*/
        *(unsigned int *)&v4 += 8 * (v6 / 2) + 8; /*0x72501b*/
        v6 += -1 - v6 / 2; /*0x725023*/
      }
      else
      {
        v6 /= 2; /*0x725015*/
      }
      if ( v6 <= 0 ) /*0x725027*/
        return 0; /*0x725027*/
    }
  }
  return result; /*0x724fca*/
}
} // namespace gamemd

// 0x42DF90
namespace gamemd {
size_t BitmapClass::ProcessFrame(char * v12, signed int Size) {

  size_t result; // eax
  Base64Straw *v5; // edi
  Base64Straw *v6; // ebx
  int v7; // ebp
  signed int v8; // ecx
  int v9; // eax
  size_t v10; // edi
  signed int v11; // edx
  char *v12; // ecx
  size_t v13; // eax
  int v14; // edx
  int v15; // eax
  size_t v16; // [esp+10h] [ebp-Ch]
  Base64Straw *v17; // [esp+14h] [ebp-8h]
  int v18; // [esp+18h] [ebp-4h]

  result = 0; /*0x42df98*/
  v16 = 0; /*0x42df9e*/
  if ( this->u32_C ) /*0x42df9b*/
  {
    v18 = 4; /*0x42dfc2*/
    v17 = &this->Base64Straw_14; /*0x42dfca*/
    v6 = &this->u32_8; /*0x42dfce*/
    v7 = 3; /*0x42dfd1*/
    v5 = &this->Base64Straw_14; /*0x42dfd6*/
  }
  else
  {
    v5 = &this->u32_8; /*0x42dfa6*/
    v18 = 3; /*0x42dfa9*/
    v17 = &this->u32_8; /*0x42dfb1*/
    v6 = &this->Base64Straw_14; /*0x42dfb5*/
    v7 = 4; /*0x42dfb8*/
  }
  v8 = Size; /*0x42dfd8*/
  if ( Size > 0 )
  {
    while ( 1 )
    {
      v9 = this->u32_10; /*0x42dfea*/
      if ( v9 > 0 ) /*0x42dfef*/
      {
        v10 = v8; /*0x42dff3*/
        if ( v8 >= v9 ) /*0x42dff5*/
          v10 = this->u32_10; /*0x42dff7*/
        memcpy(v12, &v6->__pad_0[v7 - v9], v10); /*0x42e006*/
        this->u32_10 -= v10; /*0x42e018*/
        v11 = Size - v10; /*0x42e022*/
        v12 = &v12[v10]; /*0x42e024*/
        v13 = v10 + v16; /*0x42e026*/
        v5 = v17; /*0x42e028*/
        v12 = v12; /*0x42e02c*/
        Size = v11; /*0x42e030*/
        v16 = v13; /*0x42e034*/
        v8 = v11; /*0x42e038*/
      }
      if ( !v8 ) /*0x42e03c*/
        break; /*0x42e03c*/
      v14 = Delegate::Invoke((Straw *)this, (int)v5, v18); /*0x42e04b*/
      v15 = this->u32_C
          ? DecodeBitmapRGB((unsigned __int8 *)v5, v14, v6, v7)
          : EncodeBitmapRGB(v5->__pad_0, v14, v6, v7);
      this->u32_10 = v15; /*0x42e066*/
      if ( !v15 || Size <= 0 ) /*0x42e071*/
        break; /*0x42e071*/
      v8 = Size; /*0x42dfe6*/
    }
    return v16; /*0x42e077*/
  }
  return result; /*0x42e07b*/

}
} // namespace gamemd

// 0x434500
namespace gamemd {
int FontClass::RenderText(uint16_t *a2, int v14, int yTop, int a5, int a6) {

  unsigned __int16 v6; // si
  unsigned __int16 *v8; // edx
  bool v9; // zf
  unsigned __int16 v10; // bx
  int v11; // ecx
  unsigned __int8 v12; // bp
  int v13; // edx
  int v14; // eax
  int result; // eax
  __int16 v16; // [esp+10h] [ebp-10h]
  Color v17; // [esp+14h] [ebp-Ch] BYREF
  int v18; // [esp+18h] [ebp-8h]
  int v19; // [esp+1Ch] [ebp-4h]

  v6 = *a2; /*0x43450a*/
  v8 = a2 + 1; /*0x434510*/
  v9 = *a2 == 0; /*0x434513*/
  v10 = this->u32_24; /*0x434516*/
  v18 = 0; /*0x43451a*/
  ++a2; /*0x434522*/
  if ( v9 ) /*0x434526*/
  {
LABEL_14:
    result = v14; /*0x43467b*/
    this->u32_24 = v10; /*0x43467f*/
    return result; /*0x43468a*/
  }
  v11 = a6; /*0x43452c*/
  v19 = a6 - 1; /*0x434533*/
  v12 = 31 * (9 - a6); /*0x434543*/
  while ( !v11 ) /*0x434547*/
  {
LABEL_8:
    if ( v6 != 13 && v6 != 10 ) /*0x434637*/
    {
      v14 = FontClass::RenderGlyph((int)this, v6, v14, yTop, -1); /*0x434648*/
      v11 = a6; /*0x43464d*/
      v14 = v14; /*0x434651*/
    }
    if ( !a5 || (--a5, a5) ) /*0x434662*/
    {
      v6 = *a2; /*0x434668*/
      v8 = a2 + 1; /*0x43466b*/
      v9 = *a2++ == 0; /*0x43466e*/
      if ( !v9 ) /*0x434675*/
        continue; /*0x434675*/
    }
    goto LABEL_14; /*0x434675*/
  }
  if ( v18 < v11 ) /*0x434551*/
  {
    if ( v19 < 8 ) /*0x43455c*/
    {
      LOBYTE(v16) = (unsigned __int8)(v10 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x43458e*/
      HIBYTE(v16) = (unsigned __int8)(v10 >> g_BitMask_Green) << g_BitMask_Blue; /*0x43459b*/
      LOWORD(v17.Color_field_00) = v16; /*0x4345b1*/
      BYTE2(v17.Color_field_00) = (unsigned __int8)(v10 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4345ba*/
      Color::Lerp(&v17, v12, (unsigned __int8 *)&stru_A80220); /*0x4345be*/
      LOWORD(v13) = (unsigned __int8)(BYTE2(v17.Color_field_00) >> g_BitMask_Red); /*0x4345ee*/
      v11 = a6; /*0x43460e*/
      this->u32_24 = ((unsigned __int8)(LOBYTE(v17.Color_field_00) >> g_BitShift_Green_0) << g_BitShift_Red) /*0x434614*/
                            | (v13 << g_BitShift_Blue)
                            | ((unsigned __int8)(BYTE1(v17.Color_field_00) >> g_BitMask_Blue) << g_BitMask_Green);
    }
    v12 += 31; /*0x43461c*/
    ++v18; /*0x434620*/
    --v19; /*0x434629*/
    goto LABEL_8; /*0x434629*/
  }
  this->u32_24 = v10; /*0x434699*/
  Text::Layout((Text *)this, v8, (int *)&a2, 0, 0); /*0x43469d*/
  return (int)a2 + v14; /*0x434683*/

}
} // namespace gamemd

namespace gamemd {
// 0x4348F0
int FontRenderer::InitContext(int * a2) {
    int v3; // edx
    int v4; // eax
    int v5; // edx
    int result; // eax
    int v7; // edi
    int v8; // edx
    int v9; // edx
    int v10; // [esp+8h] [ebp-10h] BYREF
    int v11; // [esp+Ch] [ebp-Ch]
    int v12; // [esp+10h] [ebp-8h]

    this->u32_C = (*(int (__thiscall **)(int *, unsigned int, unsigned int))(*a2 + 92))(a2, 0, 0); /*0x434908*/
    this->u32_10 = (unsigned int)(*(int (__thiscall **)(int *))(*a2 + 116))(a2) >> 1; /*0x434914*/
    v3 = *a2; /*0x434917*/
    v10 = 0; /*0x43491b*/
    v11 = 0; /*0x434923*/
    v12 = (*(int (__thiscall **)(int *))(v3 + 124))(a2) - 1; /*0x434931*/
    v4 = (*(int (__thiscall **)(int *))(*a2 + 128))(a2); /*0x434937*/
    v5 = this->v11 | this->result | this->v9; /*0x43494b*/
    result = v4 - 1; /*0x43494d*/
    v7 = this->u32_C; /*0x43494e*/
    result = result; /*0x434950*/
    if ( v7 | v5 ) /*0x434954*/
    {
      (result) = ((result) & ~0xFF) | ((unsigned int)(sub_434840this->u32_C, &this->u32_C, &v10)) & 0xFF); /*0x434980*/
    }
    else
    {
      v8 = v10; /*0x434958*/
      this->result = result; /*0x43495c*/
      this->u32_C = v8; /*0x43495f*/
      v9 = v12; /*0x434965*/
      this->v11 = v11; /*0x434969*/
      this->v9 = v9; /*0x43496c*/
    }
    return result; /*0x43496f*/
}
} // namespace gamemd

// 0x4349B0
namespace gamemd {
int FontClass::GetPixelData(uint16_t a2) {
  unsigned int *FontClass_field_0x04; // ecx
  int v3; // eax
  uint8_t *v4; // eax

  FontClass_field_0x04 = (unsigned int *)this->q004; /*0x4349b0*/
  if ( FontClass_field_0x04 /*0x4349dc*/
    && (v3 = *(uint16_t *)(FontClass_field_0x04[6] + 2 * a2), (unsigned short)v3)
    && (v4 = (uint8_t *)(FontClass_field_0x04[7] + (v3 - 1) * FontClass_field_0x04[5])) != 0 )
  {
    return *v4; /*0x4349e2*/
  }
  else
  {
    return 0; /*0x4349e7*/
  }
}
} // namespace gamemd

// 0x46CC90
namespace gamemd {
int CampaignSelect::LookupByName() {
  int v1; // esi

  v1 = 0; /*0x46cc96*/
  if ( dword_A83D08 <= 0 ) /*0x46cc9d*/
    return -1; /*0x46ccc2*/
  while ( _strcmpi((char *)(*((unsigned int *)dword_A83CFC + v1) + 36), this->__pad_000) ) /*0x46ccb6*/
  {
    if ( ++v1 >= dword_A83D08 ) /*0x46ccc0*/
      return -1; /*0x46ccc0*/
  }
  return v1; /*0x46ccc2*/
}
} // namespace gamemd

// 0x46DFD0
namespace gamemd {
int CampaignScore::DialogProc(HWND hWnd, unsigned int a2, UINT_PTR uIDEvent, HWND a4) {
    HWND v4; // ebp
    UINT_PTR v5; // edi
    int result; // eax
    Skirmish *v7; // esi
    HWND v8; // eax
    int v9; // ebx
    HWND v10; // eax
    char *v11; // eax
    int v12; // eax
    int v13; // edi
    int v14; // esi
    int jj; // esi
    int v16; // edi
    ObjectClass **v17; // esi
    unsigned int v18; // ebx  // G42.35: dword_A8DA8C=int index (IDA ObjectClass* artifact)
    int v19; // esi
    int v20; // eax
    int ii; // esi
    int v22; // edi
    int v23; // eax
    int v24; // edi
    ObjectClass **v25; // esi
    unsigned int v26; // ebx  // G42.35: dword_A8DA8C=int index (IDA ObjectClass* artifact)
    int v27; // esi
    int v28; // eax
    int m; // esi
    int v30; // edi
    int v31; // eax
    int v32; // edi
    ObjectClass **v33; // esi
    unsigned int v34; // ebx  // G42.35: dword_A8DA8C=int index (IDA ObjectClass* artifact)
    int v35; // esi
    int v36; // eax
    int n; // esi
    int v38; // edi
    int v39; // eax
    signed int v40; // esi
    const wchar_t **v41; // edi
    int *v42; // ebx
    const wchar_t *v43; // eax
    wchar_t *StringCSF; // esi
    HWND v45; // eax
    HWND v46; // eax
    signed int v47; // esi
    int *v48; // edi
    wchar_t *v49; // esi
    HWND v50; // eax
    wchar_t *v51; // esi
    HWND v52; // eax
    HWND v53; // eax
    ObjectClass **v54; // esi
    int v55; // edi
    HWND v56; // esi
    const wchar_t *v57; // ebx
    LRESULT v58; // edi
    bool v59; // cc
    unsigned int v60; // ebp  // G42.35: dword_A8DA8C=int index (IDA ObjectClass* artifact)
    int ResourceIDCSF; // esi
    int LobbyPlayerColor; // eax
    int k; // esi
    int v64; // edi
    int v65; // eax
    int v66; // esi
    char *v67; // eax
    int **v68; // esi
    unsigned int v69; // esi  // G42.35: loop index (IDA ObjectClass* artifact)
    const wchar_t **v70; // edi
    char *v71; // eax
    HWND v72; // eax
    HWND v73; // esi
    HWND v74; // edi
    int j; // esi
    int v76; // eax
    int v77; // edx
    int **v78; // esi
    HWND v79; // eax
    int v80; // ecx
    int v81; // esi
    int v82; // ecx
    wchar_t *v83; // eax
    HWND v84; // eax
    ObjectClass **v85; // esi
    int v86; // eax
    LPARAM v87; // esi
    LPARAM v88; // edx
    HWND v89; // eax
    HWND v90; // eax
    unsigned int v91; // eax  // G42.35: ErrorCode til=int typed
    HWND v92; // eax
    HWND v93; // eax
    HWND v94; // eax
    HWND v95; // eax
    unsigned int v96; // eax  // G42.35: ErrorCode til=int typed
    HWND v97; // eax
    HWND v98; // eax
    unsigned int v99; // eax  // G42.35: ErrorCode til=int typed
    HWND v100; // eax
    HWND v101; // eax
    char v102; // al
    HWND v103; // eax
    HWND v104; // eax
    HWND v105; // eax
    HWND v106; // eax
    HWND v107; // eax
    int v108; // edi
    ObjectClass **v109; // esi
    int v110; // eax
    int v111; // edi
    HWND DlgItem; // esi
    LPARAM v113; // ebx
    LRESULT v114; // edi
    int i; // esi
    int ResourceID3CSF; // edi
    int HouseClassSideIndex; // eax
    int v118; // [esp-8h] [ebp-428h]
    const wchar_t *v119; // [esp-4h] [ebp-424h]
    int v120; // [esp-4h] [ebp-424h]
    ObjectClass *v121; // [esp+0h] [ebp-420h] BYREF
    HWND hDlg; // [esp+10h] [ebp-410h]
    int v123; // [esp+14h] [ebp-40Ch]
    unsigned int *WindowLongA; // [esp+18h] [ebp-408h]  // G42.35: ErrorCode til=int typed
    LPARAM v125; // [esp+1Ch] [ebp-404h]
    int nIDDlgItem; // [esp+20h] [ebp-400h]
    char v127; // [esp+27h] [ebp-3F9h]
    int v128; // [esp+28h] [ebp-3F8h]
    wchar_t *v129; // [esp+30h] [ebp-3F0h] BYREF
    DeleteAndZero v130; // [esp+34h] [ebp-3ECh] BYREF
    unsigned int v131[113]; // [esp+38h] [ebp-3E8h] BYREF
    int16_t v132; // [esp+1FCh] [ebp-224h]
    char v133; // [esp+1FEh] [ebp-222h]
    wchar_t Buffer[32]; // [esp+200h] [ebp-220h] BYREF
    wchar_t v135[32]; // [esp+240h] [ebp-1E0h] BYREF
    wchar_t v136[32]; // [esp+280h] [ebp-1A0h] BYREF
    wchar_t v137[32]; // [esp+2C0h] [ebp-160h] BYREF
    wchar_t v138[32]; // [esp+300h] [ebp-120h] BYREF
    wchar_t lParam[111]; // [esp+340h] [ebp-E0h] BYREF
    int16_t v140; // [esp+41Eh] [ebp-2h]

    v4 = hWnd; /*0x46dfdc*/
    v5 = uIDEvent; /*0x46dfec*/
    result = BaseDialogProc(hWnd, a2, uIDEvent, a4); /*0x46dff9*/
    if ( result ) /*0x46e000*/
      return result; /*0x46e000*/
    WindowLongA = (unsigned int *)GetWindowLongA(hWnd, 8); /*0x46e01b*/
    if ( a2 > 0x113 ) /*0x46e01f*/
    {
      if ( a2 == 276 ) /*0x46eb67*/
      {
        if ( a4 != GetDlgItem(hWnd, 1842) ) /*0x46f30d*/
          return 0; /*0x46f30d*/
        if ( byte_89E0A2 ) /*0x46f31a*/
          ((stru_A8EB00_host *)&stru_A8EB00)->ObjectTypeClass[26] = SendDlgItemMessageA(hWnd, 1842, 0x400u, 0, 0); /*0x46f331*/
        else
          byte_89E0A2 = 1; /*0x46f338*/
        if ( byte_89E0A0 ) /*0x46f346*/
        {
          byte_89E0A1 = 1; /*0x46f4c2*/
          return 0; /*0x46f4c2*/
        }
        SendCampaignOptions(); /*0x46f34c G42.33 b3 本地原型 (Game:: 静态形式)*/
        v108 = 0; /*0x46f351*/
        v109 = (ObjectClass **)dword_A8DA90; /*0x46f353*/
        do /*0x46f374*/
        {
          if ( (uint8_t)IsKnownPointer(*v109) ) /*0x46f35a*/
            *((unsigned char *)&g_GameModeOptionState + v108) = 0; /*0x46f363*/
          ++v109; /*0x46f36a*/
          ++v108; /*0x46f36d*/
        }
        while ( (int)v109 < (int)&dword_A8DAB0 ); /*0x46f374*/
        hDlg = hWnd; /*0x46f378*/
        if ( hWnd || (hDlg = (HWND)Dialog::FindByHandle((Dialog *)0xBC6)) != 0 ) /*0x46f38e*/
        {
          v125 = 0; /*0x46f394*/
          WindowLongA = (unsigned int *)dword_A8DA90; /*0x46f39c*/
          do /*0x46f454*/
          {
            v110 = ErrorCode::Map((ErrorCode *)v125); /*0x46f3a8*/
            v111 = v110; /*0x46f3ad*/
            if ( v110 != -1 ) /*0x46f3b2*/
            {
              nIDDlgItem = (int)GetDlgItem(hDlg, v110); /*0x46f3c7*/
              if ( ShowWindow((HWND)nIDDlgItem, 0) ) /*0x46f3cb*/
              {
                DlgItem = GetDlgItem(hDlg, v111); /*0x46f3e1*/
                v113 = (LPARAM)*WindowLongA; /*0x46f3e7*/
                if ( *WindowLongA ) /*0x46f3e7*/
                {
                  SendDlgItemMessageA(hDlg, v111, 0x14Bu, 0, 0); /*0x46f3fc*/
                  v114 = SendMessageA(DlgItem, 0x4C2u, 0, v113); /*0x46f411*/
                  SendMessageA(DlgItem, 0x151u, v114, v113); /*0x46f421*/
                  SendMessageA(DlgItem, 0x14Eu, v114, 0); /*0x46f42c*/
                  ShowWindow((HWND)nIDDlgItem, 5); /*0x46f435*/
                }
              }
            }
            v59 = (int)&WindowLongA[1] < (int)&dword_A8DAB0; /*0x46f447*/
            ++v125; /*0x46f44c*/
            ++WindowLongA; /*0x46f450*/
          }
          while ( v59 ); /*0x46f454*/
          ((Count *)hDlg)->SetupAllCountriesLobby(); /*0x46f460*/
          ((Skirmish *)hDlg)->SetupAllSpawnLocations(); /*0x46f467*/
          for ( i = 0; i < 8; ++i ) /*0x46f46c*/
          {
            ResourceID3CSF = GetResourceID3CSF((ObjectClass *)i); /*0x46f477*/
            HouseClassSideIndex = GetHouseClassSideIndex(i); /*0x46f479*/
            SetupLobbyFactionSlots(hDlg, ResourceID3CSF, HouseClassSideIndex); /*0x46f483*/
          }
          ((Lobby *)hDlg)->UpdateReadyIcons(); /*0x46f490*/
          ((Lobby *)hDlg)->EnableStartButton(); /*0x46f497*/
        }
        SetTimer(hWnd, 0, 0x1F4u, 0); /*0x46f4a6*/
        byte_89E0A0 = 1; /*0x46f4af*/
        return 0; /*0x46f4bf*/
      }
      if ( a2 != 1175 ) /*0x46eb73*/
      {
        if ( a2 == 1261 ) /*0x46eb78*/
        {
          Screen::Capture(1, 0, (int)GetDlgItem, (int)hWnd); /*0x46eb82*/
          Dialog::InitWindow((int)hWnd, 1); /*0x46eb8a*/
          ShowWindow(hWnd, 0); /*0x46eb92*/
          return 0; /*0x46eba4*/
        }
        return 0; /*0x46eb78*/
      }
      byte_89E0A2 = 0; /*0x46ebac*/
      v67 = (char *)&stru_A8B250[76]; /*0x46ebb5*/
      if ( byte_89E05D ) /*0x46ebba*/
      {
        do /*0x46ebd0*/
        {
          v67->COMObject_20 = -1; /*0x46ebc3*/
          *(unsigned int *)v67 = -1; /*0x46ebc6*/
          v67 += 4; /*0x46ebc8*/
        }
        while ( (int)v67 < (int)&stru_A8B250[108] ); /*0x46ebd0*/
        InitGameDropdownColors(v121); /*0x46ebd2*/
        ((Lobby *)hWnd)->FillPlayerFactions(); /*0x46ebd9*/
        v68 = (int **)dword_A8DA90; /*0x46ebde*/
        do /*0x46ec0a*/
        {
          *(v68 - 2541) = (int *)-2; /*0x46ebe8*/
          if ( (uint8_t)IsKnownPointer((ObjectClass *)*v68) ) /*0x46ebf0*/
            SessionClass::SetOption(*v68, -2); /*0x46ebfc*/
          ++v68; /*0x46ec01*/
        }
        while ( (int)v68 < (int)&dword_A8DAB0 ); /*0x46ec0a*/
        _cfltcvt_init(); /*0x46ec0c*/
        v69 = 0; /*0x46ec16*/
        if ( dword_A8DA84 > 0 ) /*0x46ec1a*/
        {
          v70 = (const wchar_t **)dword_A8DA90; /*0x46ec1c*/
          do /*0x46ec50*/
          {
            if ( *v70 ) /*0x46ec21*/
            {
              v119 = *v70; /*0x46ec27*/
              v71 = CharToWideString(unk_A8B380); /*0x46ec2d*/
              if ( !wcscmp((const wchar_t *)v71, v119) ) /*0x46ec33*/
                dword_A8DA8C = v69; /*0x46ec3f*/
            }
            v69 = v69 + 1; /*0x46ec4a*/
            ++v70; /*0x46ec4b*/
          }
          while ( (int)v69 < dword_A8DA84 ); /*0x46ec50*/
        }
        MapSkirmishDialogPlayerToControl(hWnd, (int)dword_A8DA8C); /*0x46ec5a*/
        if ( dword_A8B23C ) /*0x46ec67*/
          (*((void (__thiscall **)(ObjectClass *, HWND))((dword_A8B230_host *)&dword_A8B23C)->vtable1 + 14))((ObjectClass *)(long)dword_A8B23C, hWnd); /*0x46ec6c*/
        v72 = GetDlgItem(hWnd, 1842); /*0x46ec75*/
        v73 = v72; /*0x46ec77*/
        if ( v72 ) /*0x46ec7b*/
        {
          PostMessageA(v72, 0x4ACu, 0, 0); /*0x46ec8d*/
          PostMessageA(v73, 0x406u, 1u, 0x20000); /*0x46ec9c*/
          PostMessageA(v73, 0x405u, 1u, (LPARAM)((stru_A8EB00_host *)&stru_A8EB00)->ObjectTypeClass[26]); /*0x46ecac*/
        }
        sub_46DCC0(hWnd, 0); /*0x46ecb2*/
        if ( !(uint8_t)Settings::CheckString() ) /*0x46ecb7*/
        {
          v131[0] = 51; /*0x46ecd8*/
          strcpy((char *)&v131[1], (const char *)&unk_A8B380); /*0x46ece9*/
          *(unsigned int *)((char *)&v131[11] + 3) = SessionClass::GetOption((int *)*(unsigned int *)dword_A8DA78); /*0x46ed05*/
          *(unsigned int *)((char *)&v131[12] + 3) = SessionClass::GetPlayerSide((int *)*(unsigned int *)dword_A8DA78); /*0x46ed10*/
          *(unsigned int *)((char *)&v131[13] + 3) = SessionClass::GetPlayerColor((SessionClass *)*(unsigned int *)dword_A8DA78); /*0x46ed20*/
          if ( ((unsigned int *)dword_A8DA90)[0] ) /*0x46ed2b*/
          {
            SendToPlayer((int)&unk_A8E9C0, (int)v131, 455, 1, (wchar_t *)((unsigned int *)dword_A8DA90)[0]); /*0x46ed3f*/
            ReceiveLoop(&unk_A8E9C0); /*0x46ed49*/
          }
        }
        v74 = hWnd; /*0x46ed50*/
        if ( hWnd || (v74 = (HWND)Dialog::FindByHandle((Dialog *)0xBC6)) != 0 ) /*0x46ed62*/
        {
          ((Skirmish *)v74)->FillPlayerNames(); /*0x46ed66*/
          ((Count *)v74)->SetupAllCountriesLobby(); /*0x46ed6d*/
          ((Skirmish *)v74)->SetupAllSpawnLocations(); /*0x46ed74*/
          for ( j = 0; j < 8; ++j ) /*0x46ed79*/
          {
            nIDDlgItem = GetResourceID3CSF((ObjectClass *)j); /*0x46ed84*/
            v76 = GetHouseClassSideIndex(j); /*0x46ed88*/
            SetupLobbyFactionSlots(v74, nIDDlgItem, v76); /*0x46ed94*/
          }
          ((Lobby *)v74)->UpdateReadyIcons(); /*0x46eda1*/
          ((Lobby *)v74)->EnableStartButton(); /*0x46eda8*/
        }
        v77 = 5; /*0x46edad*/
      }
      else
      {
        do /*0x46edc4*/
        {
          v67->COMObject_20 = -1; /*0x46edb7*/
          *(unsigned int *)v67 = -1; /*0x46edba*/
          v67 += 4; /*0x46edbc*/
        }
        while ( (int)v67 < (int)&stru_A8B250[108] ); /*0x46edc4*/
        InitGameDropdownColors(v121); /*0x46edc6*/
        v78 = (int **)dword_A8DA90; /*0x46edcb*/
        do /*0x46edf7*/
        {
          *(v78 - 2541) = (int *)-2; /*0x46edd5*/
          if ( (uint8_t)IsKnownPointer((ObjectClass *)*v78) ) /*0x46eddd*/
            SessionClass::SetOption(*v78, -2); /*0x46ede9*/
          ++v78; /*0x46edee*/
        }
        while ( (int)v78 < (int)&dword_A8DAB0 ); /*0x46edf7*/
        _cfltcvt_init(); /*0x46edf9*/
        v77 = 0; /*0x46edfe*/
      }
      sub_46DE20(hWnd, v77); /*0x46ee02*/
      SetTimer(hWnd, 1u, 0x4E20u, 0); /*0x46ee11*/
      goto LABEL_161; /*0x46ee11*/
    }
    if ( a2 == 275 ) /*0x46e02b*/
    {
      if ( uIDEvent ) /*0x46e91e*/
      {
        if ( uIDEvent != 1 ) /*0x46eac1*/
          return 0; /*0x46eac1*/
        memset(v131, 0, sizeof(v131)); /*0x46ead8*/
        v132 = 0; /*0x46eada*/
        v133 = 0; /*0x46eadc*/
        v131[0] = 13; /*0x46eadd*/
        strcpy((char *)&v131[1], ToWideStringChar((char *)*(unsigned int *)dword_A8DA78)); /*0x46eb06*/
        v66 = 1; /*0x46eb14*/
        if ( dword_A8DA84 <= 1 ) /*0x46eb1b*/
          return 0; /*0x46eb1b*/
        do /*0x46eb50*/
        {
          SendToPlayer((int)&unk_A8E9C0, (int)v131, 47, 1, (wchar_t *)((unsigned int *)dword_A8DA78)[v66]); /*0x46eb39*/
          ReceiveLoop(&unk_A8E9C0); /*0x46eb43*/
          ++v66; /*0x46eb4d*/
        }
        while ( v66 < dword_A8DA84 ); /*0x46eb50*/
        return 0; /*0x46eb55*/
      }
      else
      {
        KillTimer(hWnd, 0); /*0x46e926*/
        byte_89E0A0 = 0; /*0x46e931*/
        if ( !byte_89E0A1 ) /*0x46e93a*/
          return 0; /*0x46e93a*/
        SendCampaignOptions(); /*0x46e940 G42.33 b3 本地原型*/
        v54 = (ObjectClass **)dword_A8DA90; /*0x46e945*/
        do /*0x46e966*/
        {
          if ( (uint8_t)IsKnownPointer(*v54) ) /*0x46e94c*/
            *((unsigned char *)&g_GameModeOptionState + v5) = 0; /*0x46e955*/
          ++v54; /*0x46e95c*/
          ++v5; /*0x46e95f*/
        }
        while ( (int)v54 < (int)&dword_A8DAB0 ); /*0x46e966*/
        hDlg = hWnd; /*0x46e96a*/
        if ( !hWnd ) /*0x46e96e*/
        {
          hDlg = (HWND)Dialog::FindByHandle((Dialog *)0xBC6); /*0x46e97c*/
          if ( !hDlg ) /*0x46e980*/
            return 0; /*0x46e980*/
        }
        WindowLongA = 0; /*0x46e98c*/
        v123 = (int)dword_A8DA90; /*0x46e994*/
        do /*0x46ea3e*/
        {
          v55 = ErrorCode::Map(WindowLongA); /*0x46e9a5*/
          if ( v55 != -1 ) /*0x46e9aa*/
          {
            nIDDlgItem = (int)GetDlgItem(hDlg, v55); /*0x46e9bb*/
            if ( ShowWindow((HWND)nIDDlgItem, 0) ) /*0x46e9bf*/
            {
              v56 = GetDlgItem(hDlg, v55); /*0x46e9d5*/
              v57 = *(const wchar_t **)v123; /*0x46e9db*/
              if ( *(unsigned int *)v123 ) /*0x46e9db*/
              {
                SendDlgItemMessageA(hDlg, v55, 0x14Bu, 0, 0); /*0x46e9f0*/
                v58 = SendMessageA(v56, 0x4C2u, 0, (LPARAM)v57); /*0x46ea01*/
                SendMessageA(v56, 0x151u, v58, (LPARAM)v57); /*0x46ea0b*/
                SendMessageA(v56, 0x14Eu, v58, 0); /*0x46ea16*/
                ShowWindow((HWND)nIDDlgItem, 5); /*0x46ea1f*/
              }
            }
          }
          v59 = v123 + 4 < (int)&dword_A8DAB0; /*0x46ea31*/
          WindowLongA = (unsigned int *)((char *)WindowLongA + 1); /*0x46ea36*/
          v123 += 4; /*0x46ea3a*/
        }
        while ( v59 ); /*0x46ea3e*/
        ((Count *)hDlg)->SetupAllCountriesLobby(); /*0x46ea4a*/
        v60 = dword_A8DA8C; /*0x46ea4f*/
        if ( dword_A8DA8C != (unsigned int)-1 ) /*0x46ea58*/
        {
          ResourceIDCSF = GetResourceIDCSF((void *)(long)dword_A8DA8C); /*0x46ea63*/
          LobbyPlayerColor = GetLobbyPlayerColor((int)v60); /*0x46ea65*/
          SetupSkirmishSpawnLocations(hDlg, ResourceIDCSF, LobbyPlayerColor); /*0x46ea6f*/
        }
        for ( k = 0; k < 8; ++k ) /*0x46ea74*/
        {
          if ( (unsigned int)k != v60 ) /*0x46ea78*/
          {
            v64 = GetResourceIDCSF((ObjectClass *)k); /*0x46ea83*/
            v65 = GetLobbyPlayerColor(k); /*0x46ea85*/
            SetupSkirmishSpawnLocations(hDlg, v64, v65); /*0x46ea8f*/
          }
        }
        ((Lobby *)hDlg)->SetupAllFactionSlots(); /*0x46ea9c*/
        ((Lobby *)hDlg)->UpdateReadyIcons(); /*0x46eaa3*/
        ((Lobby *)hDlg)->EnableStartButton(); /*0x46eaaa*/
        return 0; /*0x46eab2*/
      }
    }
    if ( a2 > 0x110 ) /*0x46e037*/
    {
      if ( a2 != 273 ) /*0x46e0be*/
        return 0; /*0x46e0be*/
      if ( (uint16_t)uIDEvent > 0x6A1u ) /*0x46e0d2*/
      {
        switch ( (int16_t)uIDEvent ) /*0x46e4be*/
        {
          case 1698: /*0x46e4be*/
  LABEL_48:
            AssignPlayerColor(hWnd, (void *)(uint16_t)uIDEvent); /*0x46e4c5*/
            if ( (uint8_t)Settings::CheckString() ) /*0x46e4cc*/
            {
              SendCampaignOptions(); /*G42.33 b3 本地原型*/ /*0x46e4d5*/
            }
            else
            {
              v131[0] = 51; /*0x46e4f3*/
              strcpy((char *)&v131[1], (const char *)&unk_A8B380); /*0x46e504*/
              *(unsigned int *)((char *)&v131[11] + 3) = SessionClass::GetOption((int *)*(unsigned int *)dword_A8DA78); /*0x46e520*/
              *(unsigned int *)((char *)&v131[12] + 3) = SessionClass::GetPlayerSide((int *)*(unsigned int *)dword_A8DA78); /*0x46e52b*/
              *(unsigned int *)((char *)&v131[13] + 3) = SessionClass::GetPlayerColor((SessionClass *)*(unsigned int *)dword_A8DA78); /*0x46e53b*/
              if ( ((unsigned int *)dword_A8DA90)[0] ) /*0x46e546*/
              {
                SendToPlayer((int)&unk_A8E9C0, (int)v131, 455, 1, (wchar_t *)((unsigned int *)dword_A8DA90)[0]); /*0x46e55a*/
                ReceiveLoop(&unk_A8E9C0); /*0x46e564*/
              }
            }
            v24 = 0; /*0x46e569*/
            v25 = (ObjectClass **)dword_A8DA90; /*0x46e56b*/
            do /*0x46e58c*/
            {
              if ( (uint8_t)IsKnownPointer(*v25) ) /*0x46e572*/
                *((unsigned char *)&g_GameModeOptionState + v24) = 0; /*0x46e57b*/
              ++v25; /*0x46e582*/
              ++v24; /*0x46e585*/
            }
            while ( (int)v25 < (int)&dword_A8DAB0 ); /*0x46e58c*/
            if ( !hWnd ) /*0x46e590*/
            {
              v4 = (HWND)Dialog::FindByHandle((Dialog *)0xBC6); /*0x46e59c*/
              if ( !v4 ) /*0x46e5a0*/
                return 0; /*0x46e5a0*/
            }
            ((Skirmish *)v4)->FillPlayerNames(); /*0x46e5a8*/
            ((Count *)v4)->SetupAllCountriesLobby(); /*0x46e5af*/
            v26 = dword_A8DA8C; /*0x46e5b4*/
            if ( dword_A8DA8C != (unsigned int)-1 ) /*0x46e5bd*/
            {
              v27 = GetResourceIDCSF((void *)(long)dword_A8DA8C); /*0x46e5c8*/
              v28 = GetLobbyPlayerColor((int)v26); /*0x46e5ca*/
              SetupSkirmishSpawnLocations(v4, v27, v28); /*0x46e5d4*/
            }
            for ( m = 0; m < 8; ++m ) /*0x46e5d9*/
            {
              if ( (unsigned int)m != v26 ) /*0x46e5dd*/
              {
                v30 = GetResourceIDCSF((ObjectClass *)m); /*0x46e5e8*/
                v31 = GetLobbyPlayerColor(m); /*0x46e5ea*/
                SetupSkirmishSpawnLocations(v4, v30, v31); /*0x46e5f4*/
              }
            }
            goto LABEL_46; /*0x46e5fd*/
          case 1699: /*0x46e4be*/
          case 1700: /*0x46e4be*/
            AssignPlayerSide(hWnd, (uint16_t)uIDEvent); /*0x46e606*/
            if ( (uint8_t)Settings::CheckString() ) /*0x46e60b*/
            {
              SendCampaignOptions(); /*G42.33 b3 本地原型*/ /*0x46e614*/
            }
            else
            {
              v131[0] = 51; /*0x46e632*/
              strcpy((char *)&v131[1], (const char *)&unk_A8B380); /*0x46e643*/
              *(unsigned int *)((char *)&v131[11] + 3) = SessionClass::GetOption((int *)*(unsigned int *)dword_A8DA78); /*0x46e65f*/
              *(unsigned int *)((char *)&v131[12] + 3) = SessionClass::GetPlayerSide((int *)*(unsigned int *)dword_A8DA78); /*0x46e66a*/
              *(unsigned int *)((char *)&v131[13] + 3) = SessionClass::GetPlayerColor((SessionClass *)*(unsigned int *)dword_A8DA78); /*0x46e67a*/
              if ( ((unsigned int *)dword_A8DA90)[0] ) /*0x46e685*/
              {
                SendToPlayer((int)&unk_A8E9C0, (int)v131, 455, 1, (wchar_t *)((unsigned int *)dword_A8DA90)[0]); /*0x46e699*/
                ReceiveLoop(&unk_A8E9C0); /*0x46e6a3*/
              }
            }
            v32 = 0; /*0x46e6a8*/
            v33 = (ObjectClass **)dword_A8DA90; /*0x46e6aa*/
            do /*0x46e6cb*/
            {
              if ( (uint8_t)IsKnownPointer(*v33) ) /*0x46e6b1*/
                *((unsigned char *)&g_GameModeOptionState + v32) = 0; /*0x46e6ba*/
              ++v33; /*0x46e6c1*/
              ++v32; /*0x46e6c4*/
            }
            while ( (int)v33 < (int)&dword_A8DAB0 ); /*0x46e6cb*/
            if ( !hWnd ) /*0x46e6cf*/
            {
              v4 = (HWND)Dialog::FindByHandle((Dialog *)0xBC6); /*0x46e6db*/
              if ( !v4 ) /*0x46e6df*/
                return 0; /*0x46e6df*/
            }
            ((Skirmish *)v4)->FillPlayerNames(); /*0x46e6e7*/
            ((Count *)v4)->SetupAllCountriesLobby(); /*0x46e6ee*/
            v34 = dword_A8DA8C; /*0x46e6f3*/
            if ( dword_A8DA8C != (unsigned int)-1 ) /*0x46e6fc*/
            {
              v35 = GetResourceIDCSF((void *)(long)dword_A8DA8C); /*0x46e707*/
              v36 = GetLobbyPlayerColor((int)v34); /*0x46e709*/
              SetupSkirmishSpawnLocations(v4, v35, v36); /*0x46e713*/
            }
            for ( n = 0; n < 8; ++n ) /*0x46e718*/
            {
              if ( (unsigned int)n != v34 ) /*0x46e71c*/
              {
                v38 = GetResourceIDCSF((ObjectClass *)n); /*0x46e727*/
                v39 = GetLobbyPlayerColor(n); /*0x46e729*/
                SetupSkirmishSpawnLocations(v4, v38, v39); /*0x46e733*/
              }
            }
            goto LABEL_46; /*0x46e73c*/
          case 1745: /*0x46e4be*/
            EnableGameModeControls(hWnd, 0); /*0x46e747*/
            if ( byte_89E0A1 && (uint8_t)Settings::CheckString() ) /*0x46e755*/
              SendCampaignOptions(); /*G42.33 b3 本地原型*/ /*0x46e75e*/
            if ( !byte_89E05C ) /*0x46e76a*/
            {
              v40 = 0; /*0x46e775*/
              if ( (int)dword_A8D580 > 0 ) /*0x46e779*/
              {
                v41 = (const wchar_t **)&unk_89DF80; /*0x46e77b*/
                v42 = (int *)(&stru_81AF8C + 12); /*0x46e780*/
                while ( 1 ) /*0x46e78d*/
                {
                  v43 = *v41; /*0x46e78d*/
                  nIDDlgItem = *v42; /*0x46e78f*/
                  if ( !wcscmp((const wchar_t *)*(unsigned int *)dword_A8DA78, v43) ) /*0x46e797*/
                    break; /*0x46e797*/
                  ++v40; /*0x46e7a8*/
                  v42 += 6; /*0x46e7a9*/
                  ++v41; /*0x46e7ac*/
                  if ( v40 >= (int)dword_A8D580 ) /*0x46e7b1*/
                    goto LABEL_92; /*0x46e7b1*/
                }
                StringCSF = GetStringCSF((char *)(long)g_Str_TXT_READY, 0, (const char *)g_Str_File_CampScor_cpp, 1346); /*0x46e7cb*/
                v45 = GetDlgItem(hWnd, nIDDlgItem); /*0x46e7d3*/
                SendMessageA(v45, 0x4B2u, 0, (LPARAM)StringCSF); /*0x46e7e2*/
              }
  LABEL_92:
              v46 = GetDlgItem(hWnd, 1745); /*0x46e7e8*/
              EnableWindow(v46, 0); /*0x46e7f7*/
              *WindowLongA = 1; /*0x46e806*/
              byte_89E05C = 1; /*0x46e80c*/
              InvalidateRect(hWnd, 0, 0); /*0x46e813*/
              return 0; /*0x46e825*/
            }
            v47 = 0; /*0x46e833*/
            if ( (int)dword_A8D580 <= 0 ) /*0x46e837*/
              goto LABEL_99; /*0x46e837*/
            hDlg = (HWND)&unk_89DF80; /*0x46e839*/
            v48 = (int *)(&stru_81AF8C + 12); /*0x46e841*/
            break; /*0x46e841*/
          default:
            return 0;
        }
        while ( 1 ) /*0x46e84c*/
        {
          nIDDlgItem = *v48; /*0x46e84c*/
          if ( !wcscmp((const wchar_t *)*(unsigned int *)dword_A8DA78, *(const wchar_t **)hDlg) ) /*0x46e85c*/
            break; /*0x46e85c*/
          ++v47; /*0x46e871*/
          v48 += 6; /*0x46e872*/
          ++hDlg; /*0x46e87a*/
          if ( v47 >= (int)dword_A8D580 ) /*0x46e87e*/
            goto LABEL_99; /*0x46e87e*/
        }
        v49 = GetStringCSF((char *)(long)g_Str_TXT_WAITING, 0, (const char *)g_Str_File_CampScor_cpp, 1363); /*0x46e898*/
        v50 = GetDlgItem(hWnd, nIDDlgItem); /*0x46e8a0*/
        SendMessageA(v50, 0x4B2u, 0, (LPARAM)v49); /*0x46e8ab*/
  LABEL_99:
        v51 = GetStringCSF((char *)(long)aGuiContinue, 0, (const char *)g_Str_File_CampScor_cpp, 1368); /*0x46e8b1*/
        v52 = GetDlgItem(hWnd, 1745); /*0x46e8cf*/
        SendMessageA(v52, 0x4B2u, 0, (LPARAM)v51); /*0x46e8da*/
        v53 = GetDlgItem(hWnd, 1472); /*0x46e8e8*/
        EnableWindow(v53, 1); /*0x46e8eb*/
        *WindowLongA = 1; /*0x46e8fa*/
        byte_89E05C = 0; /*0x46e900*/
        InvalidateRect(hWnd, 0, 0); /*0x46e907*/
        return 0; /*0x46e910*/
      }
      else if ( (uint16_t)uIDEvent == 1697 ) /*0x46e0d8*/
      {
  LABEL_30:
        SelectLobbyCountry(hWnd, (void *)(uint16_t)uIDEvent); /*0x46e349*/
        if ( (uint8_t)Settings::CheckString() ) /*0x46e350*/
        {
          SendCampaignOptions(); /*G42.33 b3 本地原型*/ /*0x46e359*/
        }
        else
        {
          v131[0] = 51; /*0x46e377*/
          strcpy((char *)&v131[1], (const char *)&unk_A8B380); /*0x46e388*/
          *(unsigned int *)((char *)&v131[11] + 3) = SessionClass::GetOption((int *)*(unsigned int *)dword_A8DA78); /*0x46e3a4*/
          *(unsigned int *)((char *)&v131[12] + 3) = SessionClass::GetPlayerSide((int *)*(unsigned int *)dword_A8DA78); /*0x46e3af*/
          *(unsigned int *)((char *)&v131[13] + 3) = SessionClass::GetPlayerColor((SessionClass *)*(unsigned int *)dword_A8DA78); /*0x46e3bf*/
          if ( ((unsigned int *)dword_A8DA90)[0] ) /*0x46e3ca*/
          {
            SendToPlayer((int)&unk_A8E9C0, (int)v131, 455, 1, (wchar_t *)((unsigned int *)dword_A8DA90)[0]); /*0x46e3de*/
            ReceiveLoop(&unk_A8E9C0); /*0x46e3e8*/
          }
        }
        v16 = 0; /*0x46e3ed*/
        v17 = (ObjectClass **)dword_A8DA90; /*0x46e3ef*/
        do /*0x46e410*/
        {
          if ( (uint8_t)IsKnownPointer(*v17) ) /*0x46e3f6*/
            *((unsigned char *)&g_GameModeOptionState + v16) = 0; /*0x46e3ff*/
          ++v17; /*0x46e406*/
          ++v16; /*0x46e409*/
        }
        while ( (int)v17 < (int)&dword_A8DAB0 ); /*0x46e410*/
        if ( !hWnd ) /*0x46e414*/
        {
          v4 = (HWND)Dialog::FindByHandle((Dialog *)0xBC6); /*0x46e420*/
          if ( !v4 ) /*0x46e424*/
            return 0; /*0x46e424*/
        }
        ((Skirmish *)v4)->FillPlayerNames(); /*0x46e42c*/
        ((Count *)v4)->SetupAllCountriesLobby(); /*0x46e433*/
        v18 = dword_A8DA8C; /*0x46e438*/
        if ( dword_A8DA8C != (unsigned int)-1 ) /*0x46e441*/
        {
          v19 = GetResourceIDCSF((void *)(long)dword_A8DA8C); /*0x46e44c*/
          v20 = GetLobbyPlayerColor((int)v18); /*0x46e44e*/
          SetupSkirmishSpawnLocations(v4, v19, v20); /*0x46e458*/
        }
        for ( ii = 0; ii < 8; ++ii ) /*0x46e45d*/
        {
          if ( (unsigned int)ii != v18 ) /*0x46e461*/
          {
            v22 = GetResourceIDCSF((ObjectClass *)ii); /*0x46e46c*/
            v23 = GetLobbyPlayerColor(ii); /*0x46e46e*/
            SetupSkirmishSpawnLocations(v4, v22, v23); /*0x46e478*/
          }
        }
  LABEL_46:
        ((Lobby *)v4)->SetupAllFactionSlots(); /*0x46e483*/
        ((Lobby *)v4)->UpdateReadyIcons(); /*0x46e48c*/
        ((Lobby *)v4)->EnableStartButton(); /*0x46e493*/
        return 0; /*0x46e49b*/
      }
      else
      {
        switch ( (int16_t)uIDEvent ) /*0x46e0f7*/
        {
          case 1296: /*0x46e0f7*/
            goto LABEL_30;
          case 1314: /*0x46e0f7*/
            goto LABEL_48;
          case 1344: /*0x46e0f7*/
            ReadChatMessage(&v129, a4); /*0x46e109*/
            DeleteAndZero::Alt((DeleteAndZero *)&v129); /*0x46e112*/
            if ( (unsigned short)((uIDEvent) >> 16) != 1281 ) /*0x46e120*/
              return 0; /*0x46e120*/
            v125 = 61680; /*0x46e13d*/
            nIDDlgItem = (int)Math::InitDegToRad; /*0x46e141*/
            v8 = GetDlgItem(hWnd, 1344); /*0x46e145*/
            SendMessageA(v8, 0x4B3u, 0x6Fu, (LPARAM)lParam); /*0x46e15d*/
            v140 = 0; /*0x46e166*/
            v9 = wcslen(lParam); /*0x46e179*/
            v10 = GetDlgItem(hWnd, 1344); /*0x46e181*/
            SendMessageA(v10, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x46e190*/
            InvalidateRect(hWnd, 0, 1); /*0x46e197*/
            if ( v9 <= 2 ) /*0x46e1a0*/
              return 0; /*0x46e1a0*/
            v11 = CharToWideString(unk_A8B380); /*0x46e1b3*/
            Dialog::ShowMessage(nIDDlgItem, (size_t)g_Str_Trace___s_, v11, lParam); /*0x46e1c3*/
            memset(v131, 0, sizeof(v131)); /*0x46e1d7*/
            v132 = 0; /*0x46e1d9*/
            v133 = 0; /*0x46e1db*/
            v131[0] = 12; /*0x46e1e6*/
            strcpy((char *)&v131[1], (const char *)&unk_A8B380); /*0x46e201*/
            wcscpy((wchar_t *)&v131[12], lParam); /*0x46e213*/
            v131[68] = v125; /*0x46e224*/
            v12 = WideString::Hash((void *)&g_CurrentPlayerName); /*0x46e22b G42.35: static (void*) 形*/
            v13 = dword_A8DA84; /*0x46e230*/
            v14 = 1; /*0x46e236*/
            v131[69] = v12; /*0x46e23d*/
            if ( dword_A8DA84 <= 1 ) /*0x46e244*/
              return 0; /*0x46e244*/
            do /*0x46e27b*/
            {
              if ( ((unsigned int *)dword_A8DA78)[v14] ) /*0x46e250*/
              {
                SendToPlayer((int)&unk_A8E9C0, (int)v131, 455, 1, (wchar_t *)((unsigned int *)dword_A8DA78)[v14]); /*0x46e269*/
                ReceiveLoop(&unk_A8E9C0); /*0x46e273*/
              }
              ++v14; /*0x46e278*/
            }
            while ( v14 < v13 ); /*0x46e27b*/
            result = 0; /*0x46e280*/
            break; /*0x46e289*/
          case 1472: /*0x46e0f7*/
            *WindowLongA = 2; /*0x46e290*/
            byte_89E04C = 0; /*0x46e29e*/
            if ( *(unsigned int *)&dword_A8B238 == 3 || *(unsigned int *)&dword_A8B238 == 4 ) /*0x46e2aa*/
            {
              memset(v131, 0, sizeof(v131)); /*0x46e2bb*/
              v132 = 0; /*0x46e2c3*/
              v133 = 0; /*0x46e2c5*/
              v131[0] = 36; /*0x46e2c6*/
              strcpy((char *)&v131[1], ToWideStringChar((char *)*(unsigned int *)dword_A8DA78)); /*0x46e2ef*/
              for ( jj = 1; jj < dword_A8DA84; ++jj ) /*0x46e304*/
              {
                SendToPlayer((int)&unk_A8E9C0, (int)v131, 47, 1, (wchar_t *)((unsigned int *)dword_A8DA78)[jj]); /*0x46e31e*/
                ReceiveLoop(&unk_A8E9C0); /*0x46e328*/
              }
            }
            result = 1; /*0x46e33a*/
            break; /*0x46e346*/
          default:
            return 0;
        }
      }
      return result; /*0x46e346*/
    }
    if ( a2 == 272 ) /*0x46e039*/
    {
  LABEL_161:
      v79 = GetDlgItem(hWnd, 1918); /*0x46ee17*/
      SendMessageA(v79, 0x4B2u, 0, 11055906); /*0x46ee32*/
      v80 = dword_89E050 / 60; /*0x46ee4d*/
      if ( &v121 != (ObjectClass **)-512 ) /*0x46ee58*/
      {
        if ( v80 / 3600 > 99 ) /*0x46ee74*/
          v80 = 359999; /*0x46ee76*/
        v81 = v80 / 3600; /*0x46ee8e*/
        v82 = 720 * (4 * (v80 / -3600) - v80 / 3600) + v80; /*0x46eea7*/
        v120 = v82 % 60; /*0x46eec2*/
        v118 = v82 / 60; /*0x46eec3*/
        v83 = GetStringCSF((char *)(&stru_81AF8C + 0x360), 0, (const char *)g_Str_File_CampScor_cpp, 169); /*0x46eed6*/
        swprintf(Buffer, (const size_t)v83, (const wchar_t *const)v81, v118, v120); /*0x46eee4*/
      }
      v84 = GetDlgItem(hWnd, 1002); /*0x46eef2*/
      SendMessageA(v84, 0x4B2u, 0, (LPARAM)Buffer); /*0x46ef04*/
      v85 = (ObjectClass **)dword_A8DA90; /*0x46ef0b*/
      g_GameModeOptionState = 16843009; /*0x46ef10*/
      hDlg = 0; /*0x46ef15*/
      dword_89E004 = 16843009; /*0x46ef1d*/
      do /*0x46ef4a*/
      {
        if ( (uint8_t)IsKnownPointer(*v85) ) /*0x46ef24*/
          *((unsigned char *)&g_GameModeOptionState + (unsigned int)hDlg) = 0; /*0x46ef31*/
        ++v85; /*0x46ef3c*/
        hDlg = (HWND)((char *)hDlg + 1); /*0x46ef46*/
      }
      while ( (int)v85 < (int)&dword_A8DAB0 ); /*0x46ef4a*/
      nIDDlgItem = 0; /*0x46ef51*/
      if ( (int)dword_A8D580 > 0 ) /*0x46ef5b*/
      {
        WindowLongA = (unsigned int *)&unk_89DF80; /*0x46ef61*/
        hDlg = (HWND)(&stru_81AF8C + 8); /*0x46ef69*/
        do /*0x46f27e*/
        {
          v86 = Color::ConvertToRGB( /*0x46ef8e*/
                  (Color *)(*(unsigned int *)(*(unsigned int *)&((stru_B054D0_host *)&stru_B054D0)->m_1[3] + 4 * *(unsigned int *)(*(unsigned int *)WindowLongA + 40))
                          + 776),
                  (int)&v130);
          v128 = ((v128) & 0xFFFF0000u) | ((unsigned int)(*(unsigned short *)v86) & 0xFFFFu); /*0x46ef96*/
          (((v128) >> 16) & 0xFF) = *(unsigned char *)(v86 + 2); /*0x46ef9e*/
          v87 = (uint8_t)v128 | (*(uint16_t *)((char *)&v128 + 1) << 8); /*0x46efd4*/
          v88 = (LPARAM)*WindowLongA; /*0x46efd6*/
          v123 = *((unsigned int *)hDlg - 1); /*0x46efd9*/
          v125 = v88; /*0x46efdd*/
          v89 = GetDlgItem(hWnd, v123); /*0x46efe1*/
          SendMessageA(v89, 0x4B2u, 0, v125); /*0x46eff0*/
          v90 = GetDlgItem(hWnd, v123); /*0x46eff8*/
          SendMessageA(v90, 0x498u, 0, v87); /*0x46f003*/
          v91 = *WindowLongA; /*0x46f00f*/
          v123 = *(unsigned int *)hDlg; /*0x46f011*/
          swprintf(v137, (const size_t)g_Str_Fmt_PctD, *(const wchar_t *const *)(*(unsigned int *)&v91 + 64)); /*0x46f026*/
          v92 = GetDlgItem(hWnd, v123); /*0x46f034*/
          SendMessageA(v92, 0x4B2u, 0, (LPARAM)v137); /*0x46f046*/
          v93 = GetDlgItem(hWnd, v123); /*0x46f04e*/
          SendMessageA(v93, 0x498u, 0, v87); /*0x46f059*/
          v123 = *((unsigned int *)hDlg + 1); /*0x46f062*/
          swprintf(v135, (const size_t)g_Str_Fmt_PctD, *(const wchar_t *const *)(*(unsigned int *)WindowLongA + 48)); /*0x46f07d*/
          v94 = GetDlgItem(hWnd, v123); /*0x46f08b*/
          SendMessageA(v94, 0x4B2u, 0, (LPARAM)v135); /*0x46f09d*/
          v95 = GetDlgItem(hWnd, v123); /*0x46f0a5*/
          SendMessageA(v95, 0x498u, 0, v87); /*0x46f0b0*/
          v96 = *WindowLongA; /*0x46f0bd*/
          v123 = *((unsigned int *)hDlg + 2); /*0x46f0bf*/
          swprintf(v138, (const size_t)g_Str_Fmt_PctD, *(const wchar_t *const *)(*(unsigned int *)&v96 + 80)); /*0x46f0d4*/
          v97 = GetDlgItem(hWnd, v123); /*0x46f0e2*/
          SendMessageA(v97, 0x4B2u, 0, (LPARAM)v138); /*0x46f0f4*/
          v98 = GetDlgItem(hWnd, v123); /*0x46f0fc*/
          SendMessageA(v98, 0x498u, 0, v87); /*0x46f107*/
          v99 = *WindowLongA; /*0x46f114*/
          v123 = *((unsigned int *)hDlg + 3); /*0x46f116*/
          swprintf(v136, (const size_t)g_Str_Fmt_PctD, *(const wchar_t *const *)(*(unsigned int *)&v99 + 96)); /*0x46f12b*/
          v100 = GetDlgItem(hWnd, v123); /*0x46f139*/
          SendMessageA(v100, 0x4B2u, 0, (LPARAM)v136); /*0x46f14b*/
          v101 = GetDlgItem(hWnd, v123); /*0x46f153*/
          SendMessageA(v101, 0x498u, 0, v87); /*0x46f15e*/
          v127 = 0; /*0x46f160*/
          v125 = 0; /*0x46f165*/
          v123 = (int)dword_A8DA90; /*0x46f16d*/
          while ( wcscmp(*(const wchar_t **)v123, *(const wchar_t **)WindowLongA) ) /*0x46f18d*/
          {
            ++v125; /*0x46f194*/
            v123 += 4; /*0x46f1a4*/
            if ( v123 >= (int)&dword_A8DAB0 ) /*0x46f1a8*/
            {
              v102 = v127; /*0x46f1aa*/
              goto LABEL_176; /*0x46f1ae*/
            }
          }
          v102 = 1; /*0x46f1b0*/
  LABEL_176:
          v123 = *((unsigned int *)hDlg + 4); /*0x46f1b2*/
          if ( v102 ) /*0x46f1bf*/
          {
            v125 = (LPARAM)GetStringCSF((char *)(long)g_Str_TXT_WAITING, 0, (const char *)g_Str_File_CampScor_cpp, 1213); /*0x46f1d7*/
            v103 = GetDlgItem(hWnd, v123); /*0x46f1e1*/
            SendMessageA(v103, 0x4B2u, 0, v125); /*0x46f1f0*/
          }
          else if ( !*((unsigned char *)&g_GameModeOptionState + v125) ) /*0x46f1f8*/
          {
            v125 = (LPARAM)GetStringCSF((char *)(long)aTxtAborted, 0, (const char *)g_Str_File_CampScor_cpp, 1216); /*0x46f218*/
            v104 = GetDlgItem(hWnd, v123); /*0x46f222*/
            SendMessageA(v104, 0x4B2u, 0, v125); /*0x46f231*/
            v105 = GetDlgItem(hWnd, 1745); /*0x46f23b*/
            EnableWindow(v105, 0); /*0x46f23e*/
          }
          v106 = GetDlgItem(hWnd, v123); /*0x46f24a*/
          SendMessageA(v106, 0x498u, 0, v87); /*0x46f255*/
          v59 = ++nIDDlgItem < (int)dword_A8D580; /*0x46f270*/
          ++WindowLongA; /*0x46f276*/
          hDlg += 6; /*0x46f27a*/
        }
        while ( v59 ); /*0x46f27e*/
      }
      if ( (uint8_t)Settings::CheckString() ) /*0x46f284*/
      {
        v107 = GetDlgItem(hWnd, 1842); /*0x46f293*/
        if ( v107 ) /*0x46f297*/
          EnableWindow(v107, 1); /*0x46f29c*/
      }
      SetDialogPlayerName(hWnd, (int)dword_A8B23C); /*0x46f2aa*/
      if ( byte_89E05D ) /*0x46f2b8*/
      {
        CampaignScore::LookupDialogHash((CampaignScore *)hWnd); /*0x46f2ba*/
        Dialog::ShowPlayerName((Dialog *)hWnd); /*0x46f2c1*/
        Session::StartGame((Session *)hWnd); /*0x46f2c8*/
      }
      else
      {
        CampaignScore::FindDialogTemplate((CampaignScore *)hWnd); /*0x46f2cf*/
      }
      byte_89E05C = 0; /*0x46f2d9*/
      ResetLobbyFactionTable((HWND)((dword_A8B230_host *)&dword_A8B230)[127].vtable2); /*0x46f2e6*/
      return 0; /*0x46f2f7*/
    }
    if ( a2 != 2 ) /*0x46e042*/
    {
      if ( a2 == 15 ) /*0x46e047*/
      {
        if ( g_UIControlState ) /*0x46e055*/
          Skirmish::RenderPreview(g_UIControlState, hWnd); /*0x46e058*/
        Dialog::StopBink((Dialog *)hWnd); /*0x46e05f*/
        ValidateRect(hWnd, 0); /*0x46e067*/
        return 0; /*0x46e079*/
      }
      return 0; /*0x46f4c9*/
    }
    v7 = (Skirmish *)g_UIControlState; /*0x46e07c*/
    if ( g_UIControlState ) /*0x46e084*/
    {
      ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x46e088*/
      delete[] (v7); /*0x46e08e*/
      g_UIControlState = 0; /*0x46e096*/
    }
    KillTimer(hWnd, 1u); /*0x46e0a3*/
    return 0; /*0x46e06d*/
}
} // namespace gamemd

// 0x471500
namespace gamemd {
std::locale::facet * CampaignScore::Constructor_CampaignScoreClass(char a2) {
  *(unsigned int *)this->onBridge = 0; /*0x471509*/
  if ( (a2 & 1) != 0 ) /*0x47150f*/
    operator delete((void *)(this)); /*0x471512*/
  return (std::locale::facet *)this; /*0x47151c*/
}
} // namespace gamemd

// 0x471520
namespace gamemd {
std::locale::facet * CampaignScore::Constructor_CampaignEndScoreClass(char a2) {
  *(unsigned int *)this->onBridge = 0; /*0x471529*/
  if ( (a2 & 1) != 0 ) /*0x47152f*/
    operator delete((void *)(this)); /*0x471532*/
  return (std::locale::facet *)this; /*0x47153c*/
}
} // namespace gamemd

// 0x488310
namespace gamemd {
int CheckListClass::vt_method_488310(int a2) {
  int v3; // eax

  v3 = operator new(8u); /*0x488315*/
  if ( !v3 ) /*0x48831f*/
    return ListClass::AddItem((ListClass *)this, 0); /*0x48833c*/
  *(unsigned int *)v3 = a2; /*0x488326*/
  *(unsigned char *)(v3 + 4) = 0; /*0x48832a*/
  return ListClass::AddItem((ListClass *)this, v3); /*0x488333*/
}
} // namespace gamemd

// 0x488350
namespace gamemd {
int CheckListClass::Clear() {
  int *v1; // eax

  v1 = (int *)ColorListClass::SetColor((ListClass *)this); /*0x488350*/
  if ( v1 ) /*0x488357*/
    return *v1; /*0x488359*/
  else
    return 0; /*0x48835c*/
}
} // namespace gamemd

// 0x488360
namespace gamemd {
int CheckListClass::ScrollUp(int a2) {
  int *Clamped; // eax

  Clamped = (int *)Array::GetClamped((ListClass *)this, a2); /*0x488365*/
  if ( Clamped ) /*0x48836c*/
    return *Clamped; /*0x48836e*/
  else
    return 0; /*0x488373*/
}
} // namespace gamemd

// 0x488380
namespace gamemd {
void CheckListClass::GetSelected(wchar_t *String2) {
  int v3; // ebx
  const wchar_t **Clamped; // eax
  const wchar_t **v5; // edi

  v3 = 0; /*0x488386*/
  if ( this->COMStub() > 0 ) /*0x488392*/
  {
    while ( 1 ) /*0x48839b*/
    {
      Clamped = (const wchar_t **)Array::GetClamped((ListClass *)this, v3); /*0x48839b*/
      v5 = Clamped; /*0x4883a0*/
      if ( Clamped ) /*0x4883a4*/
      {
        if ( !_wcsicmp(*Clamped, String2) ) /*0x4883aa*/
          break; /*0x4883aa*/
      }
      if ( ++v3 >= this->COMStub() ) /*0x4883c3*/
        return; /*0x4883c3*/
    }
    ListClass::RemoveItem((ListClass *)this, v3); /*0x4883cf*/
    operator delete((v5)); /*0x4883d5*/
  }
}
} // namespace gamemd

// 0x4883F0
namespace gamemd {
int CheckListClass::SetItemData(wchar_t *String2) {
  int v3; // edi
  int result; // eax
  const wchar_t **Clamped; // eax

  v3 = 0; /*0x4883f5*/
  result = this->COMStub(); /*0x4883f9*/
  if ( result > 0 ) /*0x488401*/
  {
    while ( 1 ) /*0x48840a*/
    {
      Clamped = (const wchar_t **)Array::GetClamped((ListClass *)this, v3); /*0x48840a*/
      if ( Clamped ) /*0x488411*/
      {
        if ( !_wcsicmp(*Clamped, String2) ) /*0x488417*/
          break; /*0x488417*/
      }
      ++v3; /*0x488427*/
      result = this->COMStub(); /*0x488428*/
      if ( v3 >= result ) /*0x488430*/
        return result; /*0x488430*/
    }
    return this->SetFocus(v3); /*0x48843d*/
  }
  return result; /*0x488432*/
}
} // namespace gamemd

// 0x48E520
namespace gamemd {
unsigned int * ControlClass::Construct(int a2, int a3, int a4, int a5, int a6, int a7, char a8) {
  GadgetClass::Construct((ShpButtonClass *)this, a3, a4, a5, a6, a7, a8); /*0x48e543*/
  this->u32_28 = 0; /*0x48e54c*/
  this->u32_24 = a2; /*0x48e553*/
  /* X11: vtable install elided (implicit via class virtuals 0x48e556) — binary-proven install, was 0 */
  return this->vtable1; /*0x48e55e*/
}
} // namespace gamemd

// 0x48E570
namespace gamemd {
unsigned int * ControlClass::CtorFromData(ControlClass * a2) {
  ControlClass::Constructor(this, a2); /*0x48e579*/
  this->u32_24 = a2->ID; /*0x48e581*/
  this->u32_28 = a2->q028; /*0x48e587*/
  /* X11: vtable install elided (implicit via class virtuals 0x48e58a) — binary-proven install, was 0 */
  return this->vtable1; /*0x48e592*/
}
} // namespace gamemd

// 0x48E660
namespace gamemd {
unsigned int * ControlClass::QueryInterface(char a2) {
  GadgetClass::Dtor((GadgetClass *)this); /*0x48e663*/
  if ( (a2 & 1) != 0 ) /*0x48e66d*/
    operator delete((this)); /*0x48e670*/
  return this->vtable1; /*0x48e67a*/
}
} // namespace gamemd

// 0x4A1DB0
namespace gamemd {
int Checksum::AddString(uint8_t *a2) {
  int result; // eax

  if ( a2 ) /*0x4a1db9*/
    return Checksummer::Add_Buffer((Checksummer *)this, a2, strlen((const char *)a2)); /*0x4a1dcc*/
  return result; /*0x4a1dd2*/
}
} // namespace gamemd

// 0x4B4EE0
namespace gamemd {
int DropListClass::OnClick() {
  if ( (this->q048) ) /*0x4b4ee3*/
  {
    this->u32_B0->OnDblClick(&this->u32_B0); /*0x4b4ef6*/
    (this->q048) = 0; /*0x4b4ef9*/
  }
  this->u32_B0->OnClick_1(&this->u32_B0); /*0x4b4f09*/
  this->q050.OnClick_1(); /*0x4b4f12*/
  return Hash::Reset((LinkClass *)this); /*0x4b4f1c*/
}
} // namespace gamemd

// 0x4B4F20
namespace gamemd {
int DropListClass::vt_method_4B4F20(int a2) {
  this->q050.?(a2); /*0x4b4f2f*/
  return LinkedList::InsertAfter((LinkClass *)this, a2); /*0x4b4f3a*/
}
} // namespace gamemd

// 0x4B4F40
namespace gamemd {
int DropListClass::Draw(int a2) {
  this->q050.Draw(a2); /*0x4b4f4f*/
  return LinkedList::Append((LinkClass *)this, a2); /*0x4b4f5a*/
}
} // namespace gamemd

// 0x4B4F60
namespace gamemd {
unsigned int * DropListClass::HitTest(int a2) {
  this->q050.HitTest(a2); /*0x4b4f6f*/
  return LinkedList::Attach((LinkClass *)this, a2); /*0x4b4f7a*/
}
} // namespace gamemd

// 0x4B4F80
namespace gamemd {
int DropListClass::OnDblClick() {
  if ( (this->q048) ) /*0x4b4f83*/
  {
    this->u32_B0->OnDblClick(&this->u32_B0); /*0x4b4f96*/
    (this->q048) = 0; /*0x4b4f99*/
  }
  this->q050.OnDblClick(); /*0x4b4fa3*/
  return LinkClass::Destroy((GadgetClass *)this); /*0x4b4fad*/
}
} // namespace gamemd

// 0x4B57D0
namespace gamemd {
unsigned int * EditClass::QueryInterface(char a2) {
  DropListClass::Constructor((DropListClass *)this); /*0x4b57d3*/
  if ( (a2 & 1) != 0 ) /*0x4b57dd*/
    operator delete((this)); /*0x4b57e0*/
  return this; /*0x4b57ea*/
}
} // namespace gamemd

// 0x4E1340
namespace gamemd {
unsigned int * ControlClass::Constructor(int a2) {
  this->X = 0; /*0x4e1344*/
  this->Y = 0; /*0x4e1347*/
  /* X11: vtable install elided (implicit via class virtuals 0x4e134e) — binary-proven install, was 0 */
  this->Width = a2->Width; /*0x4e1357*/
  this->X = a2->Height; /*0x4e135d*/
  this->Visible = a2->Visible; /*0x4e1363*/
  this->ID = a2->ID; /*0x4e1369*/
  this->u32_1C = a2->q01C; /*0x4e136f*/
  this->u32_1D = a2->q01D; /*0x4e1375*/
  this->u32_1E = a2->q01E; /*0x4e137b*/
  this->u32_20 = a2->q020; /*0x4e1381*/
  /* X11: vtable install elided (implicit via class virtuals 0x4e1384) — binary-proven install, was 0 */
  return this->vtable1; /*0x4e138a*/
}
} // namespace gamemd

// 0x4E15A0
namespace gamemd {
unsigned int * InputManager::FindBestHitElement(int a2, int a3) {
  unsigned int *result; // eax
  int InputManager_field_0x0C; // eax
  int InputManager_field_0x10; // edi
  int v6; // edx
  int v7; // esi
  InputManager *v8; // [esp+0h] [ebp-14h]
  int v9; // [esp+Ch] [ebp-8h]
  int v10; // [esp+10h] [ebp-4h]

  v9 = 1024; /*0x4e15ae*/
  result = 0; /*0x4e15b2*/
  v10 = 768; /*0x4e15b6*/
  v8 = 0; /*0x4e15ba*/
  if ( this ) /*0x4e15be*/
  {
    do /*0x4e1624*/
    {
      if ( !this->u32_1E ) /*0x4e15c4*/
      {
        InputManager_field_0x0C = this->q00C; /*0x4e15cf*/
        InputManager_field_0x10 = this->q010; /*0x4e15d2*/
        v6 = this->u32_14; /*0x4e15d5*/
        v7 = this->u32_18; /*0x4e15d8*/
        if ( a2 >= InputManager_field_0x0C /*0x4e1605*/
          && a2 < v6 + InputManager_field_0x0C
          && a3 >= InputManager_field_0x10
          && a3 < InputManager_field_0x10 + v7
          && v6 * v7 <= v9 * v10 )
        {
          v9 = this->u32_14; /*0x4e160f*/
          v10 = this->u32_18; /*0x4e1613*/
          v8 = this; /*0x4e1617*/
        }
      }
      this = (InputManager *)this->vt_slot_4(); /*0x4e1620*/
    }
    while ( this ); /*0x4e1624*/
    return v8->__pad_000; /*0x4e1626*/
  }
  return result; /*0x4e162e*/
}
} // namespace gamemd

// 0x4E1640
namespace gamemd {
int InputManager::ProcessEvents() {

  ShpButtonClass *v1; // esi
  int v2; // eax
  int v3; // ebp
  HWND v4; // ebx
  unsigned int *BestHitElement; // edi
  int v6; // edi
  unsigned __int8 *v7; // eax
  unsigned __int8 *v8; // eax
  int v9; // edi
  int v11; // [esp+1Ch] [ebp-Ch] BYREF
  unsigned __int8 *v12; // [esp+20h] [ebp-8h]
  int v13; // [esp+24h] [ebp-4h]

  v1 = this; /*0x4e1646*/
  v13 = 0; /*0x4e1653*/
  if ( (ShpButtonClass *)dword_8B3E8C != this ) /*0x4e1657*/
  {
    dword_8B3E8C = (int)this; /*0x4e1659*/
    v13 = 1; /*0x4e165f*/
    dword_8B3E88 = 0; /*0x4e1667*/
    dword_8B3E90 = 0; /*0x4e166c*/
  }
  v2 = (unsigned __int16)EventQueue::Process((EventQueue *)dword_87F770); /*0x4e167c*/
  v11 = v2; /*0x4e1681*/
  if ( v2 ) /*0x4e1685*/
  {
    v2 = (unsigned __int16)EventQueue::Read((EventQueue *)dword_87F770); /*0x4e1692*/
    v11 = v2; /*0x4e1697*/
  }
  if ( (unsigned __int8)v2 == 1 || (unsigned __int8)v2 == 2 ) /*0x4e16a8*/
  {
    v3 = (int)*dword_87F770; /*0x4e16cb*/
    v4 = dword_87F770[1]; /*0x4e16cd*/
  }
  else
  {
    v3 = (*(int (**)(MouseClass *))(dword_887640->HandleClick_ph + 44))(dword_887640); /*0x4e16bb*/
    v4 = (HWND)(*(int (**)(MouseClass *))(dword_887640->HandleClick_ph + 48))(dword_887640); /*0x4e16c2*/
  }
  BestHitElement = InputManager::FindBestHitElement((InputManager *)v1, v3, (int)v4); /*0x4e16df*/
  if ( BestHitElement != (unsigned int *)dword_8B3E94 ) /*0x4e16e3*/
  {
    if ( dword_8B3E94 ) /*0x4e16e7*/
      (*(void (**)(void))(*(unsigned int *)dword_8B3E94 + 116))(); /*0x4e16eb*/
    dword_8B3E94 = (int)BestHitElement; /*0x4e16f0*/
    if ( BestHitElement ) /*0x4e16f6*/
      (*(void (**)(unsigned int *))(*BestHitElement + 112))(BestHitElement); /*0x4e16fc*/
  }
  v6 = 0; /*0x4e1703*/
  if ( v11 ) /*0x4e1707*/
  {
    switch ( v11 ) /*0x4e170c*/
    {
      case 1: /*0x4e170c*/
        v6 = 1; /*0x4e170e*/
        break;
      case 2: /*0x4e170c*/
        v6 = 16; /*0x4e1717*/
        break;
      case 2049: /*0x4e170c*/
        v6 = 4; /*0x4e1725*/
        break;
      case 2050: /*0x4e170c*/
        v6 = 64; /*0x4e1733*/
        break;
    }
  }
  v12 = 0; /*0x4e1744*/
  if ( (unsigned __int8)Mouse::IsButtonDown(stru_A8E960.random[148]) /*0x4e1761*/
    || (unsigned __int8)Mouse::IsButtonDown(stru_A8E960.random[152]) )
  {
    v12 = (unsigned __int8 *)1; /*0x4e176a*/
  }
  if ( (unsigned __int8)Mouse::IsButtonDown(stru_A8E960.random[140]) /*0x4e1793*/
    || (unsigned __int8)Mouse::IsButtonDown(stru_A8E960.random[144]) )
  {
    v7 = v12; /*0x4e179c*/
    LOBYTE(v7) = (unsigned __int8)v12 | 2; /*0x4e17a0*/
    v12 = v7; /*0x4e17a2*/
  }
  if ( (unsigned __int8)Mouse::IsButtonDown(stru_A8E960.random[132]) /*0x4e17c7*/
    || (unsigned __int8)Mouse::IsButtonDown(stru_A8E960.random[136]) )
  {
    v8 = v12; /*0x4e17d0*/
    LOBYTE(v8) = (unsigned __int8)v12 | 4; /*0x4e17d4*/
    v12 = v8; /*0x4e17d6*/
  }
  if ( v11 ) /*0x4e17e0*/
  {
    if ( !v6 ) /*0x4e17e4*/
      v6 = 256; /*0x4e17e6*/
  }
  else
  {
    if ( (unsigned __int8)Mouse::IsButtonDown(1u) ) /*0x4e17f5*/
      v9 = v6 | 2; /*0x4e17fe*/
    else
      v9 = v6 | 8; /*0x4e1803*/
    if ( (unsigned __int8)Mouse::IsButtonDown(2u) ) /*0x4e180e*/
      v6 = v9 | 0x20; /*0x4e1817*/
    else
      v6 = v9 | 0x80; /*0x4e181c*/
  }
  if ( dword_8B3E88 ) /*0x4e182a*/
  {
    (*(void (**)(int, unsigned int))(*(unsigned int *)dword_8B3E88 + 108))(dword_8B3E88, 0); /*0x4e1830*/
    v1 = (ShpButtonClass *)dword_8B3E88; /*0x4e1845*/
    (*(void (**)(int *, int, int, HWND, unsigned int))(*(unsigned int *)dword_8B3E88 + 128))(&v11, v6, v3, v4, 0); /*0x4e1847*/
    if ( dword_8B3E88 ) /*0x4e1855*/
    {
      (*(void (**)(int, unsigned int))(*(unsigned int *)dword_8B3E88 + 108))(dword_8B3E88, 0); /*0x4e185f*/
      return v11; /*0x4e186d*/
    }
    goto LABEL_53; /*0x4e1855*/
  }
  if ( dword_8B3E90 && (v6 & 0x100) != 0 ) /*0x4e187e*/
  {
    (*(void (**)(unsigned int))(*(unsigned int *)dword_8B3E90 + 108))(0); /*0x4e1884*/
    (*(void (**)(int, int *, int, int, HWND, unsigned int))(*(unsigned int *)dword_8B3E90 + 128))( /*0x4e1899*/
      dword_8B3E90,
      &v11,
      v6,
      v3,
      v4,
      0);
    if ( dword_8B3E90 ) /*0x4e18a7*/
    {
      (*(void (**)(int, unsigned int))(*(unsigned int *)dword_8B3E90 + 108))(dword_8B3E90, 0); /*0x4e18ad*/
      return v11; /*0x4e18bb*/
    }
  }
  else if ( v1 ) /*0x4e18be*/
  {
    while ( 1 ) /*0x4e18c4*/
    {
      (*(void (**)(ShpButtonClass *, int))(*(unsigned int *)v1->__pad_0 + 108))(v1, v13); /*0x4e18c9*/
      if ( !BYTE2(v1->Image) ) /*0x4e18cc*/
      {
        if ( (*(int (**)(ShpButtonClass *, int *, int, int, HWND, unsigned __int8 *))(*(unsigned int *)v1->__pad_0 /*0x4e18e4*/
                                                                                               + 128))(
               v1,
               &v11,
               v6,
               v3,
               v4,
               v12) )
        {
          break; /*0x4e18e4*/
        }
      }
      v1 = (ShpButtonClass *)(*(int (**)(ShpButtonClass *))(*(unsigned int *)v1->__pad_0 + 4))(v1); /*0x4e18f5*/
      if ( !v1 ) /*0x4e18f9*/
        return v11; /*0x4e1906*/
    }
LABEL_53:
    (*(void (**)(ShpButtonClass *, unsigned int))(*(unsigned int *)v1->__pad_0 + 108))(v1, 0); /*0x4e1907*/
  }
  return v11; /*0x4e1866*/

}
} // namespace gamemd

// 0x4E1A60
namespace gamemd {
unsigned int * GadgetClass::QueryInterface(char a2) {

  ShpButtonClass *v3; // eax
  unsigned __int8 *v4; // eax

  /* X11: vtable install elided (X67 star-deref, RHS vt_GadgetClass) */  /*0x4e1a65*/
  v3 = (ShpButtonClass *)dword_8B3E90; /*0x4e1a6b*/
  if ( this == (ShpButtonClass *)dword_8B3E90 ) /*0x4e1a72*/
  {
    v4 = *(unsigned __int8 **)this->Hovered; /*0x4e1a74*/
    BYTE1(v4) &= ~1u; /*0x4e1a77*/
    *(unsigned int *)this->Hovered = v4; /*0x4e1a7a*/
    v3 = 0; /*0x4e1a7d*/
    dword_8B3E90 = 0; /*0x4e1a7f*/
  }
  if ( this == (ShpButtonClass *)dword_8B3E88 ) /*0x4e1a8a*/
    dword_8B3E88 = 0; /*0x4e1a8c*/
  if ( this == (ShpButtonClass *)dword_8B3E8C ) /*0x4e1a98*/
    dword_8B3E8C = 0; /*0x4e1a9a*/
  if ( this == v3 ) /*0x4e1aa2*/
    dword_8B3E90 = 0; /*0x4e1aa4*/
  LinkClass::Destruct((LinkClass *)this); /*0x4e1aac*/
  if ( (a2 & 1) != 0 ) /*0x4e1ab6*/
    __3_YAXPAX_Z(this); /*0x4e1ab9*/
  return this->__pad_0; /*0x4e1ac3*/

}
} // namespace gamemd

// 0x4E2500
namespace gamemd {
int ListClass::Constructor(int a2, int a3, int a4, int a5, int a6) {
  int v7; // ecx
  int v8; // eax

  ControlClass::Construct((ControlClass *)this, a2, a3, a4, a5, a6, 7, 1); /*0x4e2524*/
  v7 = this->u32_30; /*0x4e2529*/
  /* X11: vtable install elided (implicit via class virtuals 0x4e2533) — binary-proven install, was 0 */
  if ( v7 != 255 ) /*0x4e2539*/
  {
    this->u32_30 = 255; /*0x4e253d*/
    VectorClass_ptr_ConvertClass::MarkDirty((GadgetClass *)this); /*0x4e2540*/
  }
  v8 = 0; /*0x4e2549*/
  if ( this->u32_30 < 0 ) /*0x4e254d*/
    v8 = this->u32_30; /*0x4e254f*/
  if ( v8 != this->u32_34 ) /*0x4e2554*/
  {
    this->u32_34 = v8; /*0x4e2556*/
    this->MarkDirty(); /*0x4e255d*/
  }
  this->u32_2D = 1; /*0x4e2562*/
  this->u32_2E = a5 > a6; /*0x4e2569*/
  this->u32_2C = 1; /*0x4e256c*/
  this->u32_38 = 0; /*0x4e2570*/
  return this; /*0x4e2579*/
}
} // namespace gamemd

// 0x4F4320
namespace gamemd {
int InputManager_ProcessEvents::Vtable(unsigned int *a2, unsigned int *a3, unsigned int *a4) {
  AudioStream *v5; // ebx
  unsigned int *v6; // esi
  int v7; // eax
  int v8; // eax
  unsigned int v10[2]; // [esp+Ch] [ebp-8h] BYREF

  *a3 = (*(int (__thiscall **)(void *))(*(unsigned int *)stru_887598.lineTrailer + 44))(stru_887598.lineTrailer); /*0x4f4337*/
  *a4 = (*(int (__thiscall **)(void *))(*(unsigned int *)stru_887598.lineTrailer + 48))(stru_887598.lineTrailer); /*0x4f4349*/
  if ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[880] ) /*0x4f4353*/
  {
    if ( (*(int (__thiscall **)(unsigned int))(**(unsigned int **)&((unsigned int *)&stru_A8EB00)[880] + 92))(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[880]) ) /*0x4f4357*/
      this->MarkForRedraw(0); /*0x4f4364*/
    v5 = g_DSurface_Hidden_2; /*0x4f436e*/
    g_DSurface_Hidden_2 = (AudioStream *)g_DSurface_Hidden; /*0x4f4374*/
    v6 = a2; /*0x4f4385*/
    *a2 = (*(int (__thiscall **)(unsigned int))(**(unsigned int **)&((unsigned int *)&stru_A8EB00)[880] + 40))(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[880]); /*0x4f4389*/
    g_DSurface_Hidden_2 = v5; /*0x4f438b*/
  }
  else
  {
    v6 = a2; /*0x4f439f*/
    v7 = (uint16_t)EventQueue::Process(*(EventQueue **)&g_BinkMoviePlayer); /*0x4f43a3*/
    *a2 = v7; /*0x4f43a8*/
    if ( v7 ) /*0x4f43aa*/
      *a2 = (uint16_t)EventQueue::Read(*(EventQueue **)&g_BinkMoviePlayer); /*0x4f43bc*/
  }
  v10[0] = *a3; /*0x4f43c5*/
  v8 = this->vfptr[0]; /*0x4f43c9*/
  v10[1] = *a4; /*0x4f43d5*/
  return v8->Count(this, v6, v10); /*0x4f43dc*/
}
} // namespace gamemd

// 0x54F450
namespace gamemd {
int Keyboard::MapKey(uint16_t a2) {
  int result; // eax
  int16_t v5; // di
  UINT v6; // eax
  int v7; // eax
  WORD Char[6]; // [esp+8h] [ebp-Ch] BYREF
  uint16_t v9; // [esp+18h] [ebp+4h]

  if ( (a2 & 0x800) != 0 ) /*0x54f461*/
  {
    (*((unsigned char *)&(result))) = 0; /*0x54f464*/
  }
  else
  {
    result = (uint8_t)a2; /*0x54f46f*/
    if ( (uint8_t)a2 == 36 ) /*0x54f478*/
    {
      (*((unsigned char *)&(result))) = 8; /*0x54f47b*/
    }
    else if ( (uint8_t)a2 == 35 ) /*0x54f488*/
    {
      (*((unsigned char *)&(result))) = 92; /*0x54f48b*/
    }
    else
    {
      v5 = a2 & 0x100; /*0x54f49a*/
      if ( (a2 & 0x100) != 0 ) /*0x54f4a3*/
        this->u32_24 = 0x80; /*0x54f4a5*/
      v9 = a2 & 0x200; /*0x54f4b2*/
      if ( (a2 & 0x200) != 0 ) /*0x54f4b6*/
        this->u32_25 = 0x80; /*0x54f4b8*/
      if ( (a2 & 0x400) != 0 ) /*0x54f4c6*/
        this->u32_26 = 0x80; /*0x54f4c8*/
      v6 = MapVirtualKeyA(a2, 0); /*0x54f4d4*/
      v7 = ToAscii(a2, v6, &this->u32_14, Char, 0); /*0x54f4e7*/
      if ( v5 ) /*0x54f4f0*/
        this->u32_24 = 0; /*0x54f4f2*/
      if ( v9 ) /*0x54f4fc*/
        this->u32_25 = 0; /*0x54f4fe*/
      if ( (a2 & 0x400) != 0 ) /*0x54f507*/
        this->u32_26 = 0; /*0x54f509*/
      (*((unsigned char *)&(v7))) = v7 != 1; /*0x54f514*/
      return *(unsigned int *)Char & (v7 - 1); /*0x54f519*/
    }
  }
  return result; /*0x54f463*/
}
} // namespace gamemd

// 0x54F670
namespace gamemd {
char InputManager::PushInputEvent(int16_t a2) {
  int v2; // edx
  int v3; // eax

  v2 = this->u32_318; /*0x54f670*/
  v3 = (v2 + 1) % 256; /*0x54f687*/
  if ( v3 == this->u32_314 ) /*0x54f68e*/
    return 0; /*0x54f6a9*/
  *((unsigned short *)this + v2 + 138) = a2; /*0x54f695*/
  this->u32_318 = v3; /*0x54f69d*/
  return 1; /*0x54f6a5*/
}
} // namespace gamemd

// 0x54F790
namespace gamemd {
int InputManager::WndProc(HWND hWnd, UINT Msg, WPARAM wParam, unsigned int lParam) {

  __int16 x; // di
  __int16 y; // bp
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int16 v17[2]; // [esp+10h] [ebp-10h] BYREF
  __int16 v18[2]; // [esp+14h] [ebp-Ch] BYREF
  struct tagPOINT Point; // [esp+18h] [ebp-8h] BYREF

  Point.y = HIWORD(lParam); /*0x54f7a6*/
  Point.x = (unsigned __int16)lParam; /*0x54f7b6*/
  ClientToScreen(hWnd, &Point); /*0x54f7ba*/
  x = Point.x; /*0x54f7c6*/
  y = Point.y; /*0x54f7ca*/
  *(unsigned int *)v18 = Point.x; /*0x54f7ce*/
  *(unsigned int *)v17 = Point.y; /*0x54f7d4*/
  if ( dword_887640 ) /*0x54f7d8*/
  {
    (*(void (**)(MouseClass *, __int16 *, __int16 *))(dword_887640->HandleClick_ph + 68))( /*0x54f7e6*/
      dword_887640,
      v18,
      v17);
    x = v18[0]; /*0x54f7e9*/
    y = v17[0]; /*0x54f7ed*/
  }
  if ( Msg > 0x201 ) /*0x54f7fe*/
  {
    switch ( Msg ) /*0x54f916*/
    {
      case 0x202u: /*0x54f916*/
        if ( stru_A8E960.random[552] ) /*0x54f924*/
          goto LABEL_45; /*0x54f924*/
        v10 = this->u32_318 - this->u32_314; /*0x54f938*/
        if ( (int)(256 - (((((v10) >> 32) & 0xFFFFFFFFu) ^ v10) - (((v10) >> 32) & 0xFFFFFFFFu))) < 3 ) /*0x54f947*/
          goto LABEL_45; /*0x54f947*/
        EventClass::Enqueue((EventClass *)this, 1u, 1); /*0x54f94f*/
        goto LABEL_17; /*0x54f94f*/
      case 0x203u: /*0x54f916*/
        if ( stru_A8E960.random[552] ) /*0x54f958*/
          goto LABEL_45; /*0x54f958*/
        v11 = this->u32_318 - this->u32_314; /*0x54f971*/
        if ( (int)(256 - (((((v11) >> 32) & 0xFFFFFFFFu) ^ v11) - (((v11) >> 32) & 0xFFFFFFFFu))) >= 3 ) /*0x54f97b*/
        {
          EventClass::Enqueue((EventClass *)this, 1u, 0); /*0x54f983*/
          if ( !(unsigned __int8)EventQueue::CheckPosition((EventQueue *)this) ) /*0x54f98a*/
            InputManager::PushInputEvent(this, x); /*0x54f996*/
          EventBuffer::Enqueue((EventBuffer *)this, y); /*0x54f99e*/
          x = v18[0]; /*0x54f9a3*/
          y = v17[0]; /*0x54f9a7*/
        }
        if ( stru_A8E960.random[552] ) /*0x54f9b2*/
          goto LABEL_45; /*0x54f9b2*/
        v12 = this->u32_318 - this->u32_314; /*0x54f9c6*/
        if ( (int)(256 - (((((v12) >> 32) & 0xFFFFFFFFu) ^ v12) - (((v12) >> 32) & 0xFFFFFFFFu))) < 3 ) /*0x54f9d5*/
          goto LABEL_45; /*0x54f9d5*/
        EventClass::Enqueue((EventClass *)this, 1u, 1); /*0x54f9e1*/
        if ( !(unsigned __int8)EventQueue::CheckPosition((EventQueue *)this) ) /*0x54f9e8*/
          goto LABEL_31; /*0x54f9ef*/
        goto LABEL_32; /*0x54f9ef*/
      case 0x204u: /*0x54f916*/
        InputManager::EnqueueInputEvent(this, 2u, x, y, 0); /*0x54faee*/
        goto LABEL_45; /*0x54faee*/
      case 0x205u: /*0x54f916*/
        InputManager::EnqueueInputEvent(this, 2u, x, y, 1); /*0x54faf4*/
        goto LABEL_45; /*0x54faf4*/
      case 0x206u: /*0x54f916*/
        InputManager::EnqueueInputEvent(this, 2u, x, y, 0); /*0x54fafe*/
        InputManager::EnqueueInputEvent(this, 2u, v18[0], v17[0], 1); /*0x54fb13*/
        goto LABEL_45; /*0x54fb13*/
      case 0x207u: /*0x54f916*/
        if ( !stru_A8E960.random[552] ) /*0x54fa0d*/
        {
          v13 = this->u32_318 - this->u32_314; /*0x54fa26*/
          if ( (int)(256 - (((((v13) >> 32) & 0xFFFFFFFFu) ^ v13) - (((v13) >> 32) & 0xFFFFFFFFu))) >= 3 ) /*0x54fa30*/
          {
            EventClass::Enqueue((EventClass *)this, 4u, 0); /*0x54fa3c*/
            EventBuffer::Enqueue((EventBuffer *)this, x); /*0x54fa44*/
            EventBuffer::Enqueue((EventBuffer *)this, y); /*0x54fa4c*/
          }
        }
        goto LABEL_45; /*0x54fa51*/
      case 0x208u: /*0x54f916*/
        goto LABEL_39;
      case 0x209u: /*0x54f916*/
        if ( stru_A8E960.random[552] ) /*0x54fa5d*/
          goto LABEL_45; /*0x54fa5d*/
        v14 = this->u32_318 - this->u32_314; /*0x54fa76*/
        if ( (int)(256 - (((((v14) >> 32) & 0xFFFFFFFFu) ^ v14) - (((v14) >> 32) & 0xFFFFFFFFu))) >= 3 ) /*0x54fa80*/
        {
          EventClass::Enqueue((EventClass *)this, 4u, 0); /*0x54fa88*/
          EventBuffer::Enqueue((EventBuffer *)this, x); /*0x54fa90*/
          EventBuffer::Enqueue((EventBuffer *)this, y); /*0x54fa98*/
          x = v18[0]; /*0x54fa9d*/
          y = v17[0]; /*0x54faa1*/
        }
LABEL_39:
        if ( !stru_A8E960.random[552] ) /*0x54faac*/
        {
          v15 = this->u32_318 - this->u32_314; /*0x54fabc*/
          if ( (int)(256 - (((((v15) >> 32) & 0xFFFFFFFFu) ^ v15) - (((v15) >> 32) & 0xFFFFFFFFu))) >= 3 ) /*0x54facb*/
          {
            EventClass::Enqueue((EventClass *)this, 4u, 1); /*0x54fad3*/
            EventBuffer::Enqueue((EventBuffer *)this, x); /*0x54fadb*/
            EventBuffer::Enqueue((EventBuffer *)this, y); /*0x54fae3*/
          }
        }
        goto LABEL_45; /*0x54fae8*/
      default:
        return 0; /*0x54fb40*/
    }
  }
  if ( Msg != 513 ) /*0x54f809*/
  {
    switch ( Msg ) /*0x54f81d*/
    {
      case 0x100u: /*0x54f81d*/
      case 0x104u: /*0x54f81d*/
        if ( wParam != 145 && (lParam & 0x40000000) == 0 ) /*0x54f838*/
          EventClass::Enqueue((EventClass *)this, wParam, 0); /*0x54f843*/
        goto LABEL_45; /*0x54f848*/
      case 0x101u: /*0x54f81d*/
      case 0x105u: /*0x54f81d*/
        EventClass::Enqueue((EventClass *)this, wParam, 1); /*0x54f852*/
        goto LABEL_45; /*0x54f857*/
      case 0x102u: /*0x54f81d*/
        if ( byte_A8BC79 ) /*0x54f863*/
        {
          if ( !stru_A8E960.random[552] ) /*0x54f870*/
          {
            v8 = this->u32_318 - this->u32_314; /*0x54f889*/
            if ( (int)(256 - (((((v8) >> 32) & 0xFFFFFFFFu) ^ v8) - (((v8) >> 32) & 0xFFFFFFFFu))) >= 2 ) /*0x54f893*/
            {
              EventClass::Enqueue((EventClass *)this, 0xAu, 0); /*0x54f89f*/
              EventBuffer::Enqueue((EventBuffer *)this, (unsigned __int8)wParam); /*0x54f8af*/
            }
          }
        }
        goto LABEL_45; /*0x54f8b4*/
      default:
        return 0;
    }
  }
  if ( !stru_A8E960.random[552] ) /*0x54f8c0*/
  {
    v9 = this->u32_318 - this->u32_314; /*0x54f8d9*/
    if ( (int)(256 - (((((v9) >> 32) & 0xFFFFFFFFu) ^ v9) - (((v9) >> 32) & 0xFFFFFFFFu))) >= 3 ) /*0x54f8e3*/
    {
      EventClass::Enqueue((EventClass *)this, 1u, 0); /*0x54f8ef*/
LABEL_17:
      if ( !(unsigned __int8)EventQueue::CheckPosition((EventQueue *)this) ) /*0x54f8f6*/
LABEL_31:
        InputManager::PushInputEvent(this, x); /*0x54f9f1*/
LABEL_32:
      EventBuffer::Enqueue((EventBuffer *)this, y); /*0x54f9f9*/
    }
  }
LABEL_45:
  DefWindowProcA(hWnd, Msg, wParam, lParam); /*0x54fb18*/
  return 1; /*0x54fb2e*/

}
} // namespace gamemd

// 0x557230
namespace gamemd {
int ListClass::Construct(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9) {
  int v10; // ecx
  int v11; // eax
  int v12; // edi
  int v13; // ebp
  int v14; // edx
  int v15; // edi
  int v16; // ebp
  int v17; // edi
  int v18; // ecx

  ControlClass::Construct((ControlClass *)this, a2, a3, a4, a5, a6, 261, 0); /*0x557258*/
  this->u32_38 = 0; /*0x557265*/
  this->u32_3C = 0; /*0x557268*/
  this->u32_41 = 0; /*0x55726b*/
  this->u32_44 = 0; /*0x55726e*/
  this->u32_40 = 1; /*0x557280*/
  this->u32_34 = 0; /*0x557284*/
  this->u32_48 = 10; /*0x55728b*/
  ShapeButtonClass::Constructor(&this->u32_58, 0, a8, a3 + a5, a4, 0, 0, 0); /*0x557292*/
  ShapeButtonClass::Constructor(&this->u32_B8, 0, a9, a3 + a5, a4 + a6, 0, 0, 0); /*0x5572af*/
  SliderClass::Constructor(&this->u32_118, 0, a3 + a5, a4, 0, a6, 1); /*0x5572c3*/
  v10 = this->u32_CC; /*0x5572c8*/
  v11 = this->u32_6C; /*0x5572d4*/
  v12 = this->__pad_019; /*0x5572d7*/
  v13 = this->u32_C8; /*0x5572da*/
  this->u32_C4 -= v10; /*0x5572e2*/
  v14 = this->u32_D0; /*0x5572e8*/
  this->__pad_019 = v12 - v11; /*0x5572f2*/
  /* X11: vtable install elided (implicit via class virtuals 0x5572f7) — binary-proven install, was 0 */
  this->u32_C8 = v13 - v14; /*0x5572fd*/
  v15 = v11; /*0x557303*/
  if ( v11 <= v10 ) /*0x557305*/
    v15 = v10; /*0x557307*/
  v16 = this->u32_124 - v15; /*0x55730f*/
  v17 = this->u32_70; /*0x557311*/
  this->u32_124 = v16; /*0x557314*/
  this->u32_128 = v17 + this->X; /*0x557321*/
  this->u32_130 -= v14 + v17; /*0x557331*/
  if ( v11 <= v10 ) /*0x557337*/
    v11 = v10; /*0x557339*/
  this->u32_12C = v11; /*0x55733f*/
  this->u32_2C = a7; /*0x557347*/
  this->Enabled = 0; /*0x55734a*/
  this->u32_30 = 0; /*0x55734e*/
  this->u32_16C = 0; /*0x557351*/
  this->u32_170 = 0; /*0x557357*/
  v18 = *(unsigned int *)(TextRenderer::GetInstance() + 28) - 1; /*0x557366*/
  this->u32_4C = v18; /*0x55736f*/
  this->u32_50 = (a6 - 1) / v18; /*0x557372*/
  return this; /*0x557365*/
}
} // namespace gamemd

// 0x557600
namespace gamemd {
int ListClass::Destruct() {
  char v2; // al
  int v3; // edx
  void *v4; // eax

  v2 = this->Enabled; /*0x557606*/
  /* X11: vtable install elided (implicit via class virtuals 0x557609) — binary-proven install, was 0 */
  if ( v2 ) /*0x557611*/
  {
    v3 = this->u32_118; /*0x55761c*/
    this->Visible += this->u32_12C; /*0x557624*/
    this->Enabled = 0; /*0x55762d*/
    (*(void (__thiscall **)(char *))(v3 + 36))(&this->u32_118); /*0x557630*/
    this->u32_58->OnDblClick(&this->u32_58); /*0x557639*/
    this->u32_B8->OnDblClick(&this->u32_B8); /*0x557648*/
    this->AddItem_1(); /*0x55764f*/
  }
  SliderClass::Destructor(&this->u32_118); /*0x557658*/
  ShapeButtonClass::Destructor((int)&this->u32_124); /*0x557663*/
  ShapeButtonClass::Destructor((int)&this->Y8); /*0x55766b*/
  v4 = (void *)this->u32_38; /*0x557670*/
  this->u32_34 = 0; /*0x557673*/
  if ( v4 && this->u32_41 ) /*0x55767e*/
  {
    operator delete((v4)); /*0x557684*/
    this->u32_38 = 0; /*0x55768c*/
  }
  this->u32_41 = 0; /*0x557691*/
  this->u32_3C = 0; /*0x557694*/
  return GadgetClass::Dtor((ShpButtonClass *)this); /*0x55769c*/
}
} // namespace gamemd

// 0x5576A0
namespace gamemd {
int ListClass::AddItem(int a2) {

  int v3; // ecx
  int v4; // eax
  int v5; // eax
  unsigned int *v6; // edx

  if ( a2 ) /*0x5576aa*/
  {
    v3 = this->u32_3C; /*0x5576ac*/
    if ( this->u32_44 < v3 /*0x5576d5*/
      || (this->u32_41 || !v3)
      && (v4 = this->u32_48, v4 > 0)
      && (*(unsigned __int8 (**)(char *, int, unsigned int))&this->u32_34->vtable3)(
           &this->u32_34,
           v3 + v4,
           0) )
    {
      v5 = this->u32_44; /*0x5576dc*/
      v6 = (unsigned int *)this->u32_38; /*0x5576df*/
      this->u32_44 = v5 + 1; /*0x5576e5*/
      v6[v5] = a2; /*0x5576e8*/
    }
    (*(void (**)(ListClass *))(*(unsigned int *)this->__pad_0 + 72))(this); /*0x5576ef*/
    if ( this->u32_44 > this->u32_50 ) /*0x5576fb*/
      (*(void (**)(ListClass *))(*(unsigned int *)this->__pad_0 + 140))(this); /*0x557701*/
    if ( this->q054 ) /*0x557707*/
      (*(void (**)(char *, unsigned int))&this->u32_118->q088)( /*0x55771e*/
        &this->u32_118,
        this->u32_44);
  }
  return this->u32_44 - 1; /*0x557727*/

}
} // namespace gamemd

// 0x558120
namespace gamemd {
int SliderClass::vt_method_558120() {
  return this->u32_4C; /*0x558123*/
}
} // namespace gamemd

// 0x558180
namespace gamemd {
unsigned int * SliderClass::QueryInterface(char a2) {
  SliderClass::Destructor(this); /*0x558183*/
  if ( (a2 & 1) != 0 ) /*0x55818d*/
    operator delete((this)); /*0x558190*/
  return this->vtable1; /*0x55819a*/
}
} // namespace gamemd

// 0x5943E0
namespace gamemd {
int List::FindByValue() {
  int v1; // eax
  int i; // edx

  v1 = 0; /*0x5943e8*/
  if ( g_MissionQueueFrame.briefing[342] <= 0 ) /*0x5943ed*/
    return 0; /*0x594406*/
  for ( i = g_MissionQueueFrame.briefing[339]; *(List **)(i->vtable3 != this; i += 4 ) /*0x5943f5*/
  {
    if ( ++v1 >= g_MissionQueueFrame.briefing[342] ) /*0x594404*/
      return 0; /*0x594404*/
  }
  return *(unsigned int *)(g_MissionQueueFrame.briefing[339] + 4 * v1); /*0x594406*/
}
} // namespace gamemd

// 0x5A9A20
namespace gamemd {
unsigned int * ListNode::Alloc(unsigned int *a2) {
  int v3; // eax

  this->u32_8 = 0; /*0x5a9a25*/
  *this = (ListNode)1; /*0x5a9a2c*/
  v3 = operator new(8u); /*0x5a9a32*/
  if ( v3 ) /*0x5a9a3c*/
  {
    *(unsigned short *)v3 = 0; /*0x5a9a3e*/
    *(unsigned short *)(v3 + 2) = 0; /*0x5a9a43*/
    *(unsigned int *)(v3 + 4) = -1; /*0x5a9a49*/
  }
  else
  {
    v3 = 0; /*0x5a9a52*/
  }
  this->u32_4 = v3; /*0x5a9a58*/
  *(unsigned int *)v3 = *a2; /*0x5a9a5d*/
  *(unsigned int *)(v3 + 4) = a2->u32_4; /*0x5a9a62*/
  return this; /*0x5a9a67*/
}
} // namespace gamemd

// 0x5C1030
namespace gamemd {
wchar_t ** ListBox::Constructor() {

  char v1; // bl
  MultiplayerTeam *v3; // esi
  wchar_t **v4; // eax
  __int64 v6; // [esp+Ch] [ebp-8h] BYREF

  v1 = 0; /*0x5c1036*/
  (v6) = ((v6) & 0xFFFFFFFFull) | ((unsigned long long)((0) & 0xFFFFFFFFull) << 32); /*0x5c103c*/
  v3 = (MultiplayerTeam *)__2_YAPAXI_Z(0xCu); /*0x5c1045*/
  if ( v3 ) /*0x5c104c*/
  {
    v1 = 1; /*0x5c1054*/
    v4 = FormatWideString((wchar_t **)&v6, (const wchar_t *)this); /*0x5c1059*/
    MultiplayerTeam::Constructor(v3, (const wchar_t **)v4, (wchar_t *)this); /*0x5c1062*/
    /* X11: vtable install elided (X67 star-deref, RHS vt_MultiplayerBattleTeam) */  /*0x5c1067*/
  }
  else
  {
    v3 = 0; /*0x5c106f*/
  }
  if ( (v1 & 1) != 0 ) /*0x5c1074*/
    DeleteAndZero::Alt((DeleteAndZero *)&v6); /*0x5c107a*/
  return (wchar_t **)v3; /*0x5c1081*/

}
} // namespace gamemd

// 0x5D2E90
namespace gamemd {
char FontClass::LoadFontResources(int16_t a2) {

  int v3; // eax
  char *EntireFile; // eax
  unsigned char *v5; // esi
  int v6; // edi
  unsigned char *v7; // edx
  char v8; // al
  char *v9; // ecx
  char v10; // cl
  char v11; // dl
  unsigned int *v12; // eax
  unsigned int *v13; // eax
  int v15; // eax
  unsigned int v16[22]; // [esp+Ch] [ebp-6Ch] BYREF
  unsigned char v17[12]; // [esp+64h] [ebp-14h] BYREF
  int v18; // [esp+70h] [ebp-8h]
  __int16 v19; // [esp+7Ch] [ebp+4h]

  CCFileClass::Construct3((int)v16); /*0x5d2e9c*/
  if ( !dword_ABFBE0 )
  {
    this->u32_1C = 0; /*0x5d2eb7*/
    v3 = SearchMIXFile(g_Str_File_FULLFNT3_SHP, 0); /*0x5d2eba*/
    this->__pad_014 = v3; /*0x5d2ec1*/
    if ( !v3 ) /*0x5d2ec4*/
    {
      FileClass::SetFileName(v16, g_Str_File_FULLFNT3_SHP); /*0x5d2ecf*/
      this->__pad_014 = CCFileClass::ReadEntireFile(v16); /*0x5d2ee2*/
      this->u32_1C = 1; /*0x5d2ee5*/
      Debug::Log(); /*0x5d2ee9*/
    }
    if ( !this->__pad_014 ) /*0x5d2ef1*/
      goto LABEL_15; /*0x5d2ef1*/
    if ( (unsigned char)a2 == 1 ) /*0x5d2eff*/
      FileClass::SetFileName(v16, aSidefnt3Pal); /*0x5d2f06*/
    else
      FileClass::SetFileName(v16, aFullfnt3Pal); /*0x5d2f11*/
    EntireFile = (char *)CCFileClass::ReadEntireFile(v16); /*0x5d2f1a*/
    v5 = EntireFile; /*0x5d2f1f*/
    if ( !EntireFile ) /*0x5d2f23*/
      goto LABEL_15; /*0x5d2f23*/
    v6 = 0; /*0x5d2f2a*/
    v7 = EntireFile + 2; /*0x5d2f2c*/
    do /*0x5d2f7f*/
    {
      LOBYTE(v19) = 4 * *(v7 - 2); /*0x5d2f3b*/
      HIBYTE(v19) = 4 * *(v7 - 1); /*0x5d2f44*/
      v8 = 4 * *v7; /*0x5d2f4d*/
      v9 = (char *)&stru_886080 + 3 * (v6 % 256); /*0x5d2f68*/
      ++v6; /*0x5d2f6f*/
      v7 += 3; /*0x5d2f70*/
      *(unsigned short *)v9 = v19; /*0x5d2f73*/
      v9[2] = v8; /*0x5d2f7c*/
    }
    while ( v6 < 256 ); /*0x5d2f7f*/
    v10 = v5[205]; /*0x5d2f87*/
    v11 = v5->q0CC; /*0x5d2f8d*/
    this->u32_E = 4 * v5[206]; /*0x5d2f9d*/
    this->u32_C = 4 * v11; /*0x5d2fa2*/
    this->u32_D = 4 * v10; /*0x5d2fa5*/
    this->ptr_10 = ((4 * (unsigned __int8)v5[205]) >> g_BitMask_Blue << g_BitMask_Green) /*0x5d2fff*/
                           | ((4 * (unsigned __int8)v5[206]) >> g_BitMask_Red << g_BitShift_Blue)
                           | ((4 * (unsigned __int8)v5[204]) >> g_BitShift_Green_0 << g_BitShift_Red);
    __3_YAXPAX_Z(v5); /*0x5d3002*/
    v12 = __2_YAPAXI_Z(0x188u); /*0x5d300c*/
    v13 = v12 ? ConvertClass::Construct(v12, (int)&stru_886080, (int)&stru_886080, g_DSurface_Primary, 1, 0) : 0;
    this->u32_18 = v13; /*0x5d303c*/
    if ( !v13 ) /*0x5d303f*/
    {
LABEL_15:
      v16[0] = &vt_CCFileClass; /*0x5d3045*/
      v18 = 0; /*0x5d304d*/
      Vector::Clear((int)v17); /*0x5d3051*/
      v16[0] = &off_7E1668; /*0x5d305a*/
      BufferIOFileClass::Dtor(v16); /*0x5d3062*/
      return 0; /*0x5d306f*/
    }
    v15 = this->__pad_014; /*0x5d3072*/
    this->q004 = v15->ptr_2; /*0x5d3079*/
    this->u32_8 = v15->vtable2; /*0x5d3080*/
  }
  Audio::IsSoundEnabled(); /*0x5d3083*/
  v16[0] = &vt_CCFileClass; /*0x5d308c*/
  v18 = 0; /*0x5d3094*/
  Vector::Clear((int)v17); /*0x5d3098*/
  v16[0] = &off_7E1668; /*0x5d30a1*/
  BufferIOFileClass::Dtor(v16); /*0x5d30a9*/
  return 1; /*0x5d3067*/

}
} // namespace gamemd

// 0x5D6450
namespace gamemd {
int ListBox::FillEntries(int a2, int a3) {
  int result; // eax
  int i; // ebx
  LPARAM v5; // esi
  LRESULT v6; // ebp

  ListBox::Clear((ListBox *)this); /*0x5d6458*/
  result = a2; /*0x5d645d*/
  for ( i = 0; i < *(unsigned int *)(a2 + 16); ++i ) /*0x5d6468*/
  {
    v5 = *(unsigned int *)(*(unsigned int *)(a2 + 4) + 4 * i); /*0x5d6473*/
    v6 = SendMessageA((HWND)this, 0x143u, 0, v5); /*0x5d6485*/
    if ( v5 == a3 ) /*0x5d648d*/
      SendMessageA((HWND)this, 0x14Eu, v6, 0); /*0x5d6498*/
    SendMessageA((HWND)this, 0x151u, v6, v5); /*0x5d64a6*/
    result = a2; /*0x5d64ac*/
  }
  return result; /*0x5d64b8*/
}
} // namespace gamemd

// 0x5D64C0
namespace gamemd {
int ListBox::Refresh(int a2, int a3) {
  int result; // eax
  int i; // ebp
  LPARAM v6; // esi
  LRESULT v7; // eax
  HWND hWnd; // [esp+10h] [ebp+4h]

  SendMessageA((HWND)this, 0x184u, 0, 0); /*0x5d64d7*/
  result = a2; /*0x5d64d9*/
  for ( i = 0; i < *(unsigned int *)(a2 + 16); ++i ) /*0x5d64e4*/
  {
    v6 = *(unsigned int *)(*(unsigned int *)(a2 + 4) + 4 * i); /*0x5d64ee*/
    v7 = SendMessageA((HWND)this, 0x4CDu, 0, v6); /*0x5d64fa*/
    hWnd = (HWND)v7; /*0x5d6500*/
    if ( v6 == a3 ) /*0x5d6506*/
    {
      SendMessageA((HWND)this, 0x186u, v7, 0); /*0x5d6511*/
      v7 = (LRESULT)hWnd; /*0x5d6513*/
    }
    SendMessageA((HWND)this, 0x19Au, v7, v6); /*0x5d651f*/
    result = a2; /*0x5d6521*/
  }
  return result; /*0x5d652c*/
}
} // namespace gamemd

// 0x5D6540
namespace gamemd {
int ListBox::FillPlayers(HWND hWnd, int a3) {

  int i; // esi
  void (***v5)(unsigned int, int); // ecx
  int result; // eax
  int v7; // ebx
  LPARAM v8; // esi
  wchar_t *v9; // eax
  LRESULT v10; // ebp
  int v11; // [esp+14h] [ebp+8h]

  ListBox::Clear((ListBox *)hWnd); /*0x5d6549*/
  for ( i = 0; i < this->MultiplayerGameMode_field_0x18; ++i ) /*0x5d6555*/
  {
    v5 = *(void (****)(unsigned int, int))(this->MultiplayerGameMode_field_0x0C + 4 * i); /*0x5d655a*/
    if ( v5 ) /*0x5d655f*/
      (**v5)(v5, 1); /*0x5d6565*/
  }
  (*(void (**)(int *))(this->MultiplayerGameMode_field_0x08 + 12))(&this->MultiplayerGameMode_field_0x08); /*0x5d6577*/
  (*(void (**)(MultiplayerGameMode *, int *))(*(unsigned int *)this->__pad_0 + 192))( /*0x5d657f*/
    this,
    &this->MultiplayerGameMode_field_0x08);
  result = a3; /*0x5d6585*/
  if ( a3 >= 0 && a3 < MEMORY[0xA8DA84] ) /*0x5d6593*/
  {
    v7 = 0; /*0x5d659b*/
    v11 = *(unsigned int *)(MEMORY[0xA8DA78][a3] + 107); /*0x5d65a3*/
    result = this->MultiplayerGameMode_field_0x18; /*0x5d65a7*/
    if ( result > 0 ) /*0x5d65ac*/
    {
      do /*0x5d6608*/
      {
        v8 = *(unsigned int *)(this->MultiplayerGameMode_field_0x0C + 4 * v7); /*0x5d65b2*/
        v9 = WideString::GetOrEmpty_Alt((wchar_t **)(v8 + 4)); /*0x5d65b8*/
        v10 = SendMessageA(hWnd, 0x143u, 0, (LPARAM)v9); /*0x5d65d3*/
        if ( *(unsigned int *)(v8 + 8) == v11 ) /*0x5d65db*/
          SendMessageA(hWnd, 0x14Eu, v10, 0); /*0x5d65ea*/
        SendMessageA(hWnd, 0x151u, v10, v8); /*0x5d65fc*/
        result = this->MultiplayerGameMode_field_0x18; /*0x5d6602*/
        ++v7; /*0x5d6605*/
      }
      while ( v7 < result ); /*0x5d6608*/
    }
  }
  return result; /*0x5d660b*/

}
} // namespace gamemd

// 0x5D6690
namespace gamemd {
int ListBox::AddEntries() {

  MPCombatTeam *v1; // eax
  wchar_t **v2; // edi
  int MultiplayerGameMode_field_0x08; // ecx
  int MultiplayerGameMode_field_0x14; // eax
  int MultiplayerGameMode_field_0x10; // eax
  int MultiplayerGameMode_field_0x04; // edx
  int result; // eax
  int i; // ebx
  wchar_t **v9; // edi
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  unsigned int *v13; // edx

  v1 = (MPCombatTeam *)__2_YAPAXI_Z(0xCu); /*0x5d6695*/
  if ( v1 ) /*0x5d669f*/
    v2 = MPCombatTeam::Constructor(v1); /*0x5d66a8*/
  else
    v2 = 0; /*0x5d66ac*/
  MultiplayerGameMode_field_0x08 = this->MultiplayerGameMode_field_0x08; /*0x5d66b2*/
  if ( this->MultiplayerGameMode_field_0x10 < MultiplayerGameMode_field_0x08 /*0x5d66d7*/
    || (BYTE1(this->MultiplayerGameMode_field_0x0C) || !MultiplayerGameMode_field_0x08)
    && (MultiplayerGameMode_field_0x14 = this->MultiplayerGameMode_field_0x14, MultiplayerGameMode_field_0x14 > 0)
    && (*(unsigned __int8 (**)(MultiplayerGameMode *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 8))(
         this,
         MultiplayerGameMode_field_0x08 + MultiplayerGameMode_field_0x14,
         0) )
  {
    MultiplayerGameMode_field_0x10 = this->MultiplayerGameMode_field_0x10; /*0x5d66de*/
    MultiplayerGameMode_field_0x04 = this->MultiplayerGameMode_field_0x04; /*0x5d66e1*/
    this->MultiplayerGameMode_field_0x10 = MultiplayerGameMode_field_0x10 + 1; /*0x5d66e7*/
    *(unsigned int *)(MultiplayerGameMode_field_0x04 + 4 * MultiplayerGameMode_field_0x10) = v2; /*0x5d66ea*/
  }
  result = dword_A8B548; /*0x5d66ed*/
  for ( i = 1; i <= dword_A8B548; ++i ) /*0x5d66f9*/
  {
    v9 = ListBox::Constructor((ListBox *)i); /*0x5d6705*/
    v10 = this->MultiplayerGameMode_field_0x08; /*0x5d6707*/
    if ( this->MultiplayerGameMode_field_0x10 < v10 /*0x5d6729*/
      || (BYTE1(this->MultiplayerGameMode_field_0x0C) || !v10)
      && (v11 = this->MultiplayerGameMode_field_0x14, v11 > 0)
      && (*(unsigned __int8 (**)(MultiplayerGameMode *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 8))(
           this,
           v10 + v11,
           0) )
    {
      v12 = this->MultiplayerGameMode_field_0x10; /*0x5d6730*/
      v13 = (unsigned int *)this->MultiplayerGameMode_field_0x04; /*0x5d6733*/
      this->MultiplayerGameMode_field_0x10 = v12 + 1; /*0x5d6739*/
      v13[v12] = (unsigned int)v9; /*0x5d673c*/
    }
    result = dword_A8B548; /*0x5d673f*/
  }
  return result; /*0x5d6749*/

}
} // namespace gamemd

// 0x600670
namespace gamemd {
int ComboBoxOwnerDraw::GetWidthHeight() {
  return *(unsigned int *)this->vtable1 * this->q004; /*0x600676*/
}
} // namespace gamemd

// 0x600680
namespace gamemd {
bool ComboBoxOwnerDraw::MatchDimensions(unsigned int *a2) {
  return a2->q004 == this->q004 && *a2 == *(unsigned int *)this->__pad_000; /*0x60068d*/
}
} // namespace gamemd

// 0x60CF00
namespace gamemd {
unsigned int * Control::CreateControlDialog() {
  unsigned int *result; // eax
  unsigned int *v2; // esi
  int v3; // eax
  Control *v4; // [esp+4h] [ebp-4h] BYREF

  result = *(unsigned int **)&g_DialogHashMap_Count; /*0x60cf01*/
  v4 = this; /*0x60cf09*/
  if ( *(unsigned int *)&g_DialogHashMap_Count ) /*0x60cf0d*/
  {
    result = *(unsigned int **)(*(unsigned int *)&g_DialogHashMap_Base /*0x60cf32*/
                        + 4
                        * ((*(int (__thiscall **)(Control **))&g_DialogHashMap_Hasher)(&v4)
                         & ((1 << g_DialogHashMap_Buckets) - 1)));
    if ( result ) /*0x60cf37*/
    {
      while ( (Control *)*result != v4 ) /*0x60cf43*/
      {
        result = result->q204; /*0x60cf45*/
        if ( !result ) /*0x60cf4d*/
          return result; /*0x60cf4d*/
      }
      v2 = result + 1; /*0x60cf5a*/
      if ( result != (unsigned int *)-4 ) /*0x60cf5f*/
      {
        v3 = result[28]; /*0x60cf65*/
        switch ( v3 ) /*0x60cf6d*/
        {
          case 148: /*0x60cf6d*/
            result = (unsigned int *)CreatureClass::GetManager(); /*0x60cf6f*/
            v2[29] = result; /*0x60cf74*/
            v2[56] = *(unsigned int *)&DataGlobal_B0FA6C; /*0x60cf7d*/
            v2[57] = *(unsigned int *)&DataGlobal_B0FA6C; /*0x60cf89*/
            return result; /*0x60cf91*/
          case 259: /*0x60cf6d*/
            goto LABEL_10; /*0x60cf97*/
          case 264: /*0x60cf6d*/
            v2[29] = UI_Create_72D820(); /*0x60cfc7*/
            v2[56] = *(unsigned int *)&DataGlobal_B0FB1C; /*0x60cfd0*/
            result = *(unsigned int **)&DataGlobal_B0FB1C; /*0x60cfd6*/
            v2[57] = *(unsigned int *)&DataGlobal_B0FB1C; /*0x60cfdb*/
            break;
          case 3014: /*0x60cf6d*/
            result = (unsigned int *)VtableStub_72D450(); /*0x60cfeb*/
            v2[29] = result; /*0x60cff0*/
            v2[56] = *(unsigned int *)&DataGlobal_B0FB34; /*0x60cff9*/
            v2[57] = *(unsigned int *)&DataGlobal_B0FB34; /*0x60d005*/
            break;
          case 3015: /*0x60cf6d*/
  LABEL_10:
            v2[29] = VtableStub_72D450(); /*0x60cf99*/
            result = *(unsigned int **)&DataGlobal_B0FB34; /*0x60cfa1*/
            v2[56] = *(unsigned int *)&DataGlobal_B0FB34; /*0x60cfa6*/
            v2[57] = *(unsigned int *)&DataGlobal_B0FB34; /*0x60cfb2*/
            return result; /*0x60cfba*/
          case 107: /*0x60cf6d*/
            v2[29] = UI_Create_72D210(); /*0x60d01f*/
            v2[56] = *(unsigned int *)&g_DialogControlPool; /*0x60d028*/
            result = *(unsigned int **)&DataGlobal_B0FAB8; /*0x60d02e*/
            v2[57] = *(unsigned int *)&DataGlobal_B0FAB8; /*0x60d033*/
            break;
          case 258: /*0x60cf6d*/
          case 188: /*0x60cf6d*/
          case 189: /*0x60cf6d*/
          case 194: /*0x60cf6d*/
          case 201: /*0x60cf6d*/
            result = (unsigned int *)UI_Create_72D030(); /*0x60d294*/
            v2[29] = result; /*0x60d299*/
            v2[56] = *(unsigned int *)&g_DialogControlPool; /*0x60d2a2*/
            v2[57] = *(unsigned int *)&DataGlobal_B0FA18; /*0x60d2ae*/
            break;
          case 275: /*0x60cf6d*/
            result = (unsigned int *)UI_Create_72CE50(); /*0x60d07a*/
            v2[29] = result; /*0x60d07f*/
            v2[56] = *(unsigned int *)&g_DialogControlPool; /*0x60d088*/
            v2[57] = *(unsigned int *)&DataGlobal_B0FAAC; /*0x60d094*/
            break;
          case 276: /*0x60cf6d*/
            v2[29] = UI_Create_72CAB0(); /*0x60d0a9*/
            result = *(unsigned int **)&g_DialogControlPool; /*0x60d0ac*/
            v2[56] = *(unsigned int *)&g_DialogControlPool; /*0x60d0b1*/
            v2[57] = *(unsigned int *)&DataGlobal_B0FA60; /*0x60d0bd*/
            break;
          case 270: /*0x60cf6d*/
          case 284: /*0x60cf6d*/
            v2[29] = UI_Create_72C8D0(); /*0x60d277*/
            v2[56] = *(unsigned int *)&g_DialogControlPool; /*0x60d280*/
            result = *(unsigned int **)&DataGlobal_B0F9E8; /*0x60d286*/
            v2[57] = *(unsigned int *)&DataGlobal_B0F9E8; /*0x60d28b*/
            break;
          case 271: /*0x60cf6d*/
          case 285: /*0x60cf6d*/
            v2[29] = UI_Create_72C6F0(); /*0x60d255*/
            result = *(unsigned int **)&g_DialogControlPool; /*0x60d258*/
            v2[56] = *(unsigned int *)&g_DialogControlPool; /*0x60d25d*/
            v2[57] = *(unsigned int *)&DataGlobal_B0FB0C; /*0x60d269*/
            break;
          case 230: /*0x60cf6d*/
          case 243: /*0x60cf6d*/
          case 244: /*0x60cf6d*/
            result = (unsigned int *)UI_Create_72C510(); /*0x60d22d*/
            v2[29] = result; /*0x60d232*/
            v2[56] = *(unsigned int *)&g_DialogControlPool; /*0x60d23b*/
            v2[57] = *(unsigned int *)&DataGlobal_B0FA64; /*0x60d247*/
            break;
          case 231: /*0x60cf6d*/
            v2[29] = UI_Create_72C330(); /*0x60d11f*/
            v2[56] = *(unsigned int *)&g_DialogControlPool; /*0x60d128*/
            result = *(unsigned int **)&DataGlobal_B0FA30; /*0x60d12e*/
            v2[57] = *(unsigned int *)&DataGlobal_B0FA30; /*0x60d133*/
            break;
          case 278: /*0x60cf6d*/
            result = (unsigned int *)UI_Create_72C150(); /*0x60d143*/
            v2[29] = result; /*0x60d148*/
            v2[56] = *(unsigned int *)&g_DialogControlPool; /*0x60d151*/
            v2[57] = *(unsigned int *)&DataGlobal_B0FA4C; /*0x60d15d*/
            break;
          case 279: /*0x60cf6d*/
            v2[29] = UI_Create_72BF70(); /*0x60d172*/
            result = *(unsigned int **)&g_DialogControlPool; /*0x60d175*/
            v2[56] = *(unsigned int *)&g_DialogControlPool; /*0x60d17a*/
            v2[57] = *(unsigned int *)&DataGlobal_B0FA9C; /*0x60d186*/
            break;
          case 274: /*0x60cf6d*/
            v2[29] = UI_Create_72BD90(); /*0x60d19b*/
            v2[56] = *(unsigned int *)&g_DialogControlPool; /*0x60d1a4*/
            result = *(unsigned int **)&DataGlobal_B0FA98; /*0x60d1aa*/
            v2[57] = *(unsigned int *)&DataGlobal_B0FA98; /*0x60d1af*/
            break;
          case 700: /*0x60cf6d*/
            result = (unsigned int *)UI_Create_72BBB0(); /*0x60d1bf*/
            v2[29] = result; /*0x60d1c4*/
            v2[56] = *(unsigned int *)&g_DialogControlPool; /*0x60d1cd*/
            v2[57] = *(unsigned int *)&DataGlobal_B0FB2C; /*0x60d1d9*/
            break;
          case 214: /*0x60cf6d*/
            v2[29] = UI_Create_72B9D0(); /*0x60d1ee*/
            result = *(unsigned int **)&g_DialogControlPool; /*0x60d1f1*/
            v2[56] = *(unsigned int *)&g_DialogControlPool; /*0x60d1f6*/
            v2[57] = *(unsigned int *)&DataGlobal_B0FB54; /*0x60d202*/
            break;
          default:
            v2[29] = VtableStub_72E280(); /*0x60d210*/
            v2[56] = *(unsigned int *)&g_DialogControlPool; /*0x60d219*/
            result = *(unsigned int **)&DataGlobal_B0FA04; /*0x60d21f*/
            v2[57] = *(unsigned int *)&DataGlobal_B0FA04; /*0x60d224*/
            break;
        }
      }
    }
  }
  return result; /*0x60cf4f*/
}
} // namespace gamemd

// 0x6252F0
namespace gamemd {
void ComboBoxOwnerDraw::SortItems() {

  int ComboBoxOwnerDraw_field_0x08; // esi
  unsigned int **v3; // ebp
  int v4; // edi
  void *v5; // edi
  unsigned int v6; // edx
  unsigned int **v7; // edi
  int v8; // ebp
  unsigned int *v9; // esi
  int v10; // edx
  unsigned int v11; // ecx
  unsigned int *v12; // eax
  unsigned int **v13; // [esp+4h] [ebp-4h]

  if ( LOBYTE(this->ComboBoxOwnerDraw_field_0x14) != 1 ) /*0x6252f8*/
  {
    ComboBoxOwnerDraw_field_0x08 = this->ComboBoxOwnerDraw_field_0x08; /*0x625300*/
    v3 = *(unsigned int ***)this->__pad_0; /*0x625303*/
    v4 = this->ComboBoxOwnerDraw_field_0x0C + 1; /*0x62530c*/
    this->ComboBoxOwnerDraw_field_0x08 = 2 * ComboBoxOwnerDraw_field_0x08; /*0x62530d*/
    v13 = v3; /*0x625310*/
    this->ComboBoxOwnerDraw_field_0x0C = v4; /*0x625318*/
    v5 = (void *)__2_YAPAXI_Z(8 * ComboBoxOwnerDraw_field_0x08); /*0x625323*/
    v6 = 4 * this->ComboBoxOwnerDraw_field_0x08; /*0x625328*/
    *(unsigned int *)this->__pad_0 = v5; /*0x62532f*/
    memset(v5, 0, v6); /*0x625334*/
    if ( ComboBoxOwnerDraw_field_0x08 > 0 ) /*0x62533f*/
    {
      v7 = v3; /*0x625341*/
      v8 = ComboBoxOwnerDraw_field_0x08; /*0x625343*/
      do /*0x625377*/
      {
        v9 = *v7; /*0x625345*/
        if ( *v7 ) /*0x625345*/
        {
          do /*0x625371*/
          {
            v10 = ((int (*)(unsigned int *))this->ComboBoxOwnerDraw_field_0x18)(v9) /*0x62535b*/
                & ((1 << this->ComboBoxOwnerDraw_field_0x0C) - 1);
            v11 = *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v10); /*0x62535f*/
            *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v10) = v9; /*0x625365*/
            v12 = (unsigned int *)v9[3]; /*0x625367*/
            v9[3] = v11; /*0x62536a*/
            v9 = v12; /*0x62536d*/
          }
          while ( v12 ); /*0x625371*/
        }
        ++v7; /*0x625373*/
        --v8; /*0x625376*/
      }
      while ( v8 ); /*0x625377*/
      v3 = v13; /*0x625379*/
    }
    __3_YAXPAX_Z(v3); /*0x62537e*/
  }

}
} // namespace gamemd

// 0x632C40
namespace gamemd {
int CheckSum::AccumulateModulo(int16_t a2) {
  int v3; // edi
  int result; // eax
  int v5; // ecx
  int v6; // ebx
  uint16_t i; // dx
  bool v8; // dl

  v3 = Hash_Check_5C61E0(); /*0x632c49*/
  result = (int)Hash_Check(); /*0x632c4b*/
  this->tail_0 = 0; /*0x632c52*/
  if ( v3 > 0 ) /*0x632c55*/
  {
    v5 = 2; /*0x632c5d*/
    v6 = v3; /*0x632c62*/
    do /*0x632ca3*/
    {
      *(unsigned short *)&this->__tail_0[v5] += a2; /*0x632c64*/
      for ( i = *(unsigned short *)(result + v5 - 2); *(unsigned short *)&this->__tail_0[v5] >= i; i = *(unsigned short *)(result + v5 - 2) ) /*0x632c74*/
        *(unsigned short *)&this->__tail_0[v5] -= i; /*0x632c76*/
      v8 = this->tail_0 || !*(unsigned short *)&this->__tail_0[v5]; /*0x632c98*/
      v5 += 2; /*0x632c9d*/
      --v6; /*0x632ca0*/
      this->tail_0 = v8; /*0x632ca1*/
    }
    while ( v6 ); /*0x632ca3*/
  }
  return result; /*0x632ca7*/
}
} // namespace gamemd

// 0x69DEA0
namespace gamemd {
char ButtonClass::SetState(char a2) {
  this->u32_5C = a2; /*0x69dea4*/
  return a2; /*0x69dea7*/
}
} // namespace gamemd

// 0x6A8710
namespace gamemd {
int TabCameoListClass::AddCameo_ReplaceItAll(int a2, int a3) {
  int v4; // ebp
  int result; // eax
  int *i; // esi
  int v7; // edi
  int v8; // eax
  int v9; // edx
  int v10; // eax
  TabCameoListClass *v11; // edi
  TabCameoListClass *v12; // esi
  TabCameoListClass v13; // eax
  int v14; // [esp+14h] [ebp-8h]

  v4 = 0; /*0x6a8717*/
  result = this->u32_54 + 1; /*0x6a871f*/
  this->u32_54 = result; /*0x6a8721*/
  if ( result > 0 ) /*0x6a8726*/
  {
    for ( i = &this->u32_16; ; i += 13 ) /*0x6a872c*/
    {
      v7 = a2; /*0x6a8734*/
      if ( RadarClass::GetBlip(a2, a3, i[1], *i) ) /*0x6a8742*/
        break; /*0x6a8742*/
      result = this->u32_54; /*0x6a874b*/
      if ( ++v4 >= result ) /*0x6a8754*/
        return result; /*0x6a8754*/
    }
    v8 = this->u32_54 - 1; /*0x6a8763*/
    if ( v8 > v4 ) /*0x6a8766*/
    {
      v9 = 13 * v8; /*0x6a876b*/
      v10 = v8 - v4; /*0x6a876e*/
      v11 = this + v9 + 22; /*0x6a8770*/
      do /*0x6a8783*/
      {
        --v10; /*0x6a877e*/
        memcpy(v11, &v11[-13], 0x34u); /*0x6a877f*/
        v11 -= 13; /*0x6a8781*/
      }
      while ( v10 ); /*0x6a8783*/
      v7 = a2; /*0x6a8785*/
    }
    v12 = this + 13 * v4; /*0x6a8798*/
    v12[23] = (TabCameoListClass)v7; /*0x6a879b*/
    v12[22] = (TabCameoListClass)a3; /*0x6a879e*/
    if ( v7 == 7 ) /*0x6a87a1*/
      v12[24] = (TabCameoListClass)GetHouseTechLevel(7, a3); /*0x6a87aa*/
    v12[25] = 0; /*0x6a87b3*/
    *(&this->u32_30 * v4 + v4 + 26) = 0; /*0x6a87bd*/
    v12[27] = 0; /*0x6a87c0*/
    v13 = *(TabCameoListClass *)&((unsigned int *)&stru_A8EB00)[416]; /*0x6a87c3*/
    v12[32] = 0; /*0x6a87c8*/
    v12[29] = v13; /*0x6a87ce*/
    v12[30] = (TabCameoListClass)v14; /*0x6a87d4*/
    v12[31] = 0; /*0x6a87d7*/
    v12[34] = 0; /*0x6a87da*/
    return v14; /*0x6a87d0*/
  }
  return result; /*0x6a8756*/
}
} // namespace gamemd

// 0x6AC5E0
namespace gamemd {
int SidebarClass::saveLoadPrefix2(int a2) {
  return SidebarClass::Save((RadarClass *)this, a2); /*0x6ac5ea*/
}
} // namespace gamemd

// 0x6B1B20
namespace gamemd {
int * SliderClass::Constructor(int a2, int a3, int a4, int a5, int a6, int a7) {

  ShapeButtonClass *v8; // edi
  void *v9; // eax
  unsigned char *v10; // eax
  ShapeButtonClass *v11; // edi
  void *v12; // eax
  unsigned char *v13; // eax
  int v14; // ecx
  int v15; // ecx
  int SliderClass_field_0x30; // eax
  int v17; // edx
  char v18; // bl
  int SliderClass_field_0x14; // ebp
  double v20; // st7
  unsigned __int16 *v21; // eax
  int v22; // edi
  double v23; // st7
  int v24; // eax
  int SliderClass_field_0x18; // ebp
  unsigned __int16 *v26; // eax
  int v27; // edi
  int v28; // eax
  int v30; // [esp-14h] [ebp-34h]
  int v31; // [esp-14h] [ebp-34h]
  int SliderClass_field_0x10; // [esp-10h] [ebp-30h]
  int v33; // [esp-10h] [ebp-30h]

  ListClass::Constructor((int)this, a2, a3, a4, a5, a6); /*0x6b1b44*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_SliderClass) */  /*0x6b1b51*/
  this->u32_44 = a7 != 0; /*0x6b1b5c*/
  this->u32_3C = 0; /*0x6b1b5f*/
  this->u32_40 = 0; /*0x6b1b62*/
  if ( !a7 ) /*0x6b1b65*/
  {
    v8 = (ShapeButtonClass *)__2_YAPAXI_Z(0x60u); /*0x6b1b72*/
    if ( v8 ) /*0x6b1b79*/
    {
      SliderClass_field_0x10 = this->Height; /*0x6b1b87*/
      v30 = this->Visible + this->Width + 2; /*0x6b1b8c*/
      v9 = SearchMIXFile(aBtnPlusShp, 0); /*0x6b1b94*/
      v10 = ShapeButtonClass::Constructor(v8, a2, (int)v9, v30, SliderClass_field_0x10, 0, 0, 0); /*0x6b1b9d*/
    }
    else
    {
      v10 = 0; /*0x6b1ba4*/
    }
    this->u32_3C = v10; /*0x6b1ba8*/
    v11 = (ShapeButtonClass *)__2_YAPAXI_Z(0x60u); /*0x6b1bb0*/
    if ( v11 ) /*0x6b1bb7*/
    {
      v33 = this->Height; /*0x6b1bc5*/
      v31 = this->Width - 6; /*0x6b1bc6*/
      v12 = SearchMIXFile(aBtnMinsShp, 0); /*0x6b1bce*/
      v13 = ShapeButtonClass::Constructor(v11, a2, (int)v12, v31, v33, 0, 0, 0); /*0x6b1bd7*/
    }
    else
    {
      v13 = 0; /*0x6b1bde*/
    }
    v14 = this->u32_3C; /*0x6b1be0*/
    this->u32_40 = v13; /*0x6b1be3*/
    if ( v14 ) /*0x6b1be8*/
    {
      (*(void (**)(int, SliderClass *))(*(unsigned int *)v14 + 132))(v14, this); /*0x6b1bed*/
      (*(void (**)(unsigned int, SliderClass *))(*this->u32_3C + 12))(this->u32_3C, this); /*0x6b1bf9*/
      (*(void (**)(unsigned int))(*this->u32_3C + 72))(this->u32_3C); /*0x6b1c01*/
    }
    v15 = this->u32_40; /*0x6b1c04*/
    if ( v15 ) /*0x6b1c09*/
    {
      (*(void (**)(int, SliderClass *))(*(unsigned int *)v15 + 132))(v15, this); /*0x6b1c0e*/
      (*(void (**)(unsigned int, SliderClass *))(*this->u32_40 + 12))(this->u32_40, this); /*0x6b1c1a*/
      (*(void (**)(unsigned int))(*this->u32_40 + 72))(this->u32_40); /*0x6b1c22*/
    }
  }
  SliderClass_field_0x30 = this->SliderClass_field_0x30; /*0x6b1c25*/
  if ( SliderClass_field_0x30 > 1 ) /*0x6b1c2b*/
    SliderClass_field_0x30 = 1; /*0x6b1c2d*/
  this->u32_48 = SliderClass_field_0x30; /*0x6b1c35*/
  v17 = *(unsigned int *)this->__pad_0; /*0x6b1c3f*/
  this->u32_48 = 1; /*0x6b1c43*/
  (*(void (**)(SliderClass *))(v17 + 72))(this); /*0x6b1c46*/
  v18 = BYTE2(this->SliderClass_field_0x2C); /*0x6b1c49*/
  if ( v18 ) /*0x6b1c4e*/
    SliderClass_field_0x14 = this->Visible; /*0x6b1c50*/
  else
    SliderClass_field_0x14 = this->ID; /*0x6b1c55*/
  v20 = (double)this->SliderClass_field_0x30; /*0x6b1c58*/
  LOWORD(v21) = Math::RoundToInt(v20); /*0x6b1c74*/
  v22 = (int)v21; /*0x6b1c7c*/
  if ( (int)v21 <= 4 ) /*0x6b1c7e*/
    v22 = 4; /*0x6b1c80*/
  v23 = (double)this->u32_34 / v20; /*0x6b1c85*/
  this->u32_4C = v22; /*0x6b1c88*/
  LOWORD(v24) = Math::RoundToInt(v23); /*0x6b1c91*/
  if ( v24 >= SliderClass_field_0x14 - v22 ) /*0x6b1c9c*/
    v24 = SliderClass_field_0x14 - v22; /*0x6b1c9e*/
  this->u32_50 = v24; /*0x6b1ca2*/
  if ( v18 ) /*0x6b1ca5*/
    SliderClass_field_0x18 = this->Visible; /*0x6b1ca7*/
  else
    SliderClass_field_0x18 = this->ID; /*0x6b1cac*/
  LOWORD(v26) = Math::RoundToInt(v23); /*0x6b1cbd*/
  v27 = (int)v26; /*0x6b1cc5*/
  if ( (int)v26 <= 4 ) /*0x6b1cc7*/
    v27 = 4; /*0x6b1cc9*/
  this->u32_4C = v27; /*0x6b1cd0*/
  LOWORD(v28) = Math::RoundToInt(v23); /*0x6b1cd3*/
  if ( v28 >= SliderClass_field_0x18 - v27 ) /*0x6b1ce0*/
    v28 = SliderClass_field_0x18 - v27; /*0x6b1ce2*/
  this->u32_50 = v28; /*0x6b1ce4*/
  LOBYTE(this->SliderClass_field_0x2C) = 0; /*0x6b1ce7*/
  return (int *)this->__pad_0; /*0x6b1ced*/

}
} // namespace gamemd

// 0x6B1D00
namespace gamemd {
int SliderClass::Destructor() {
  void (__thiscall ***v2)(unsigned int, int); // ecx
  void (__thiscall ***v3)(unsigned int, int); // ecx

  v2 = (void (__thiscall ***)(unsigned int, int))this->u32_3C; /*0x6b1d03*/
  /* X11: vtable install elided (implicit via class virtuals 0x6b1d06) — binary-proven install, was 0 */
  if ( v2 ) /*0x6b1d0e*/
  {
    (**v2)(v2, 1); /*0x6b1d14*/
    this->u32_3C = 0; /*0x6b1d16*/
  }
  v3 = (void (__thiscall ***)(unsigned int, int))this->u32_40; /*0x6b1d1d*/
  if ( v3 ) /*0x6b1d22*/
  {
    (**v3)(v3, 1); /*0x6b1d28*/
    this->u32_40 = 0; /*0x6b1d2a*/
  }
  return GadgetClass::Dtor((ShpButtonClass *)this); /*0x6b1d38*/
}
} // namespace gamemd

// 0x6B1D40
namespace gamemd {
int SliderClass::GetValue(int a2) {

  int SliderClass_field_0x14; // ebx
  double SliderClass_field_0x30; // st7
  unsigned __int16 *v5; // eax
  int v6; // edi
  int v7; // eax

  if ( !GaugeClass::SetValue((GaugeClass *)this, a2) ) /*0x6b1d48*/
    return 0; /*0x6b1db0*/
  if ( BYTE2(this->SliderClass_field_0x2C) ) /*0x6b1d51*/
    SliderClass_field_0x14 = this->Visible; /*0x6b1d5a*/
  else
    SliderClass_field_0x14 = this->ID; /*0x6b1d5f*/
  SliderClass_field_0x30 = (double)this->SliderClass_field_0x30; /*0x6b1d62*/
  LOWORD(v5) = Math::RoundToInt(SliderClass_field_0x30); /*0x6b1d74*/
  v6 = (int)v5; /*0x6b1d7c*/
  if ( (int)v5 <= 4 ) /*0x6b1d7e*/
    v6 = 4; /*0x6b1d80*/
  this->u32_4C = v6; /*0x6b1d88*/
  LOWORD(v7) = Math::RoundToInt(SliderClass_field_0x30); /*0x6b1d8f*/
  if ( v7 >= SliderClass_field_0x14 - v6 ) /*0x6b1da0*/
    v7 = SliderClass_field_0x14 - v6; /*0x6b1da2*/
  this->u32_50 = v7; /*0x6b1da4*/
  return 1; /*0x6b1dac*/

}
} // namespace gamemd

// 0x7240B0
namespace gamemd {
void ToolTipClass::updateString() {
  HWND ToolTipClass_field_0x08; // eax
  int i; // edi
  int v4; // edx
  void *v5; // eax

  ToolTipClass_field_0x08 = (HWND)this->Y; /*0x7240ba*/
  /* X11: vtable install elided (implicit via class virtuals 0x7240bd) — binary-proven install, was 0 */
  KillTimer(ToolTipClass_field_0x08, 0x54544950u); /*0x7240c4*/
  if ( this->X ) /*0x7240ca*/
    this->InputThunkB(&this->ID); /*0x7240db*/
  operator delete((void *)(this->u32_24C7))); /*0x7240e5*/
  this->u32_24C = 0; /*0x7240ea*/
  this->u32_250 = 0; /*0x7240f0*/
  this->u32_254 = 0; /*0x7240f6*/
  this->u32_258 = 0; /*0x7240fc*/
  this->u32_25C = 0; /*0x724102*/
  for ( i = 0; i < this->__pad_244; ++i ) /*0x724115*/
  {
    v4 = this->__pad_238; /*0x724117*/
    if ( *(unsigned int *)(v4 + 4 * i) ) /*0x72411d*/
      operator delete((*(void **)(v4 + 4 * i))); /*0x724125*/
  }
  this->__pad_234->ddtor(&this->__pad_234); /*0x724146*/
  operator delete((void *)(this->CommandClass_24C))); /*0x724150*/
  this->CommandClass_24C = 0; /*0x724155*/
  this->u32_250 = 0; /*0x72415b*/
  this->u32_254 = 0; /*0x724161*/
  this->u32_258 = 0; /*0x724167*/
  this->u32_25C = 0; /*0x72416d*/
  v5 = (void *)this->__pad_238; /*0x724173*/
  this->__pad_234 = 0; /*0x72417b*/
  if ( v5 && this->u32_241 ) /*0x724183*/
  {
    operator delete((v5)); /*0x724189*/
    this->__pad_238 = 0; /*0x724191*/
  }
  this->u32_241 = 0; /*0x724194*/
  this->u32_23C = 0; /*0x724197*/
}
} // namespace gamemd

// 0x7241A0
namespace gamemd {
int Tooltip::Enable(char a2) {
  int result; // eax

  (*((unsigned char *)&(result))) = a2; /*0x7241a0*/
  if ( this->ToolTipText != a2 ) /*0x7241aa*/
  {
    this->ToolTipText = a2; /*0x7241ae*/
    if ( !a2 ) /*0x7241b1*/
    {
      KillTimer(this->u32_8, 0x54544950u); /*0x7241bc*/
      if ( this->Position ) /*0x7241c2*/
        this->release(&this->u32_8); /*0x7241d1*/
    }
    return Debug::Log(); /*0x7241eb*/
  }
  return result; /*0x7241f3*/
}
} // namespace gamemd

// 0x7248C0
namespace gamemd {
char TooltipClass::GetText(unsigned int a2, void *a3) {
  size_t v4; // ecx
  unsigned int *v5; // eax
  int v6; // ecx
  int v7; // ebp
  unsigned int v8; // edi
  int v9; // edx
  size_t v11; // eax
  unsigned int *v12; // ecx
  int v13; // ecx
  int v14; // edi
  unsigned int v15; // ebp
  int v16; // edx
  const void **v17; // esi

  v4 = this->u32_250; /*0x7248c6*/
  if ( !v4 ) /*0x7248ce*/
    return 0; /*0x7248ce*/
  v5 = (unsigned int *)this->u32_25C; /*0x7248d0*/
  if ( !v5 || *v5 != a2 ) /*0x7248e0*/
  {
    if ( !this->u32_258 ) /*0x7248e2*/
    {
      qsort(this->u32_87), v4, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunc2Int); /*0x7248fb*/
      this->u32_25C = 0; /*0x724903*/
      this->u32_258 = 1; /*0x72490d*/
    }
    v6 = this->u32_250; /*0x724914*/
    v7 = this->u32_24C; /*0x72491a*/
    if ( v6 <= 0 ) /*0x724922*/
      return 0; /*0x724922*/
    while ( 1 ) /*0x72492b*/
    {
      v8 = *(unsigned int *)(v7 + 8 * (v6 / 2)); /*0x72492b*/
      v9 = v7 + 8 * (v6 / 2); /*0x72492f*/
      if ( v8 <= a2 ) /*0x724935*/
      {
        if ( v8 == a2 ) /*0x72493b*/
        {
          if ( v9 ) /*0x724956*/
          {
            this->u32_25C = v9; /*0x724958*/
            break; /*0x724958*/
          }
          return 0; /*0x724951*/
        }
        v7 = v9 + 8; /*0x72493d*/
        v6 += -1 - v6 / 2; /*0x724945*/
      }
      else
      {
        v6 /= 2; /*0x724937*/
      }
      if ( v6 <= 0 ) /*0x724949*/
        return 0; /*0x724949*/
    }
  }
  if ( !a3 ) /*0x724964*/
    return 1; /*0x724964*/
  v11 = this->u32_250; /*0x72496a*/
  if ( !v11 ) /*0x724972*/
    goto LABEL_27; /*0x724972*/
  v12 = (unsigned int *)this->u32_25C; /*0x724978*/
  if ( v12 && *v12 == a2 ) /*0x724984*/
  {
  LABEL_32:
    v17 = (const void **)(this->u32_25C + 4); /*0x724a1e*/
    goto LABEL_28; /*0x724a27*/
  }
  if ( !this->u32_258 ) /*0x72498a*/
  {
    qsort(this->u32_87), v11, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunc2Int); /*0x7249a3*/
    this->u32_25C = 0; /*0x7249ab*/
    this->u32_258 = 1; /*0x7249b5*/
  }
  v13 = this->u32_250; /*0x7249bc*/
  v14 = this->u32_24C; /*0x7249c2*/
  if ( v13 <= 0 ) /*0x7249ca*/
    goto LABEL_27; /*0x7249ca*/
  while ( 1 ) /*0x7249d7*/
  {
    v15 = *(unsigned int *)(v14 + 8 * (v13 / 2)); /*0x7249d7*/
    v16 = v14 + 8 * (v13 / 2); /*0x7249da*/
    if ( a2 >= v15 ) /*0x7249df*/
      break; /*0x7249df*/
    v13 /= 2; /*0x7249e1*/
  LABEL_26:
    if ( v13 <= 0 ) /*0x7249f7*/
      goto LABEL_27; /*0x7249f7*/
  }
  if ( v15 != a2 ) /*0x7249e9*/
  {
    v14 = v16 + 8; /*0x7249eb*/
    v13 += -1 - v13 / 2; /*0x7249f3*/
    goto LABEL_26; /*0x7249f3*/
  }
  if ( v16 ) /*0x724a16*/
  {
    this->u32_25C = v16; /*0x724a18*/
    goto LABEL_32; /*0x724a18*/
  }
  LABEL_27:
  v17 = (const void **)&unk_B78820; /*0x7249f9*/
  LABEL_28:
  memcpy(a3, *v17, 0x1Cu); /*0x7249fe*/
  return 1; /*0x72494b*/
}
} // namespace gamemd

// 0x724AD0
namespace gamemd {
int ToolTipClass::initString() {
  unsigned int *ToolTipClass_field_0x04; // eax
  wchar_t *v3; // ecx
  wchar_t *StringCSF; // eax
  const wchar_t *v5; // edi
  int ToolTipClass_field_0x10; // edx

  ToolTipClass_field_0x04 = (unsigned int *)this->Position; /*0x724ad7*/
  if ( ToolTipClass_field_0x04 ) /*0x724adc*/
  {
    v3 = (wchar_t *)ToolTipClass_field_0x04[5]; /*0x724ae2*/
    if ( v3 ) /*0x724ae7*/
      StringCSF = GetStringCSF(v3, 0, aDRa2mdpostTool, 563); /*0x724b01*/
    else
      StringCSF = (wchar_t *)this->vt_slot_20(/*0x724af0*/
                               this, *ToolTipClass_field_0x04);
    v5 = StringCSF; /*0x724b06*/
    if ( StringCSF && wcslen(StringCSF) ) /*0x724b0d*/
    {
      wcsncpy(this->q028, v5, 0x100u); /*0x724b23*/
      ToolTipClass_field_0x10 = this->Duration; /*0x724b28*/
      this->q01C = this->DisplayTimer; /*0x724b36*/
      this->q018 = ToolTipClass_field_0x10; /*0x724b39*/
      if ( !this->vt_slot_4(/*0x724b3e*/
              this, &this->q018) )
      {
        this->q018 = 0; /*0x724b47*/
        this->q01C = 0; /*0x724b49*/
        this->TextBuffer = 0; /*0x724b4c*/
        this->q024 = 0; /*0x724b4f*/
        this->Position = 0; /*0x724b54*/
        return 0; /*0x724b5f*/
      }
    }
    else
    {
      this->q018 = 0; /*0x724b60*/
      this->q01C = 0; /*0x724b63*/
      this->TextBuffer = 0; /*0x724b66*/
      this->q024 = 0; /*0x724b69*/
      this->Position = 0; /*0x724b6c*/
    }
  }
  return this->Position != 0; /*0x724b59*/
}
} // namespace gamemd

// 0x724C10
namespace gamemd {
void * ToolTipClass::Destructor(char a2) {
  ToolTipClass::updateString((ToolTipClass *)this); /*0x724c13*/
  if ( (a2 & 1) != 0 ) /*0x724c1d*/
    operator delete((this)); /*0x724c20*/
  return this; /*0x724c2a*/
}
} // namespace gamemd

// 0x724C60
namespace gamemd {
unsigned int ToolTipClass::write(int a2) {
  if ( (this->IsInitialized) ) /*0x724c60*/
    return (unsigned int)(a2 - *&this->Items) >> 2; /*0x724c75*/
  else
    return 0; /*0x724c67*/
}
} // namespace gamemd

// 0x724C80
namespace gamemd {
int ToolTipClass::seek(int a2) {
  return *(unsigned int *)(*&this->Position + 4 * a2); /*0x724c8a*/
}
} // namespace gamemd

// 0x724FA0
namespace gamemd {
bool CommandClass::executeAction(void *a2) { /*G42.33 b3: 载体 gap2 形*/
  unsigned int *v2; // eax

  v2 = (unsigned int *)this->u32_10; /*0x724fa0*/
  return v2 && *v2 == *a2; /*0x724fb3*/
}
} // namespace gamemd

// 0x765600
namespace gamemd {
void ** Campaign_WorldDominationTour::QueryInterface(char a2) {
  void (__thiscall ***v3)(unsigned int, int); // ecx

  *this = (Campaign_WorldDominationTour)0; /*0x765606*/
  DeleteAndZero(&this->ObjectClass_12); /*0x76560c*/
  v3 = (void (__thiscall ***)(unsigned int, int))this->u32_1C; /*0x765611*/
  this->u32_18 = 0; /*0x765614*/
  if ( v3 && this->u32_25 ) /*0x76561f*/
  {
    (**v3)(v3, 3); /*0x76562e*/
    this->u32_1C = 0; /*0x765630*/
  }
  this->u32_25 = 0; /*0x76563a*/
  this->u32_20 = 0; /*0x76563e*/
  this->u32_10 = 0; /*0x765645*/
  ComPtr::Release(&this->ComPtr_4); /*0x76564b*/
  this->u32_8 = 0; /*0x765653*/
  ComPtr::Release(&this->ComPtr_2); /*0x765659*/
  ReferenceCounted::Constructor((ReferenceCounted *)this); /*0x765660*/
  if ( (a2 & 1) != 0 ) /*0x76566a*/
    operator delete((this)); /*0x76566d*/
  return (void **)this; /*0x765677*/
}
} // namespace gamemd

// 0x783A90
namespace gamemd {
int Bitmap::GetNumberBitmapWOL() {
  int result; // eax

  switch ( (unsigned int)this ) /*0x783a99*/
  {
    case 0u: /*0x783a99*/
      result = HashTable::Find(&g_DialogHashTable, g_Str_File_number0_pcx, 0); /*0x783aac*/
      break; /*0x783ab1*/
    case 1u: /*0x783a99*/
      result = HashTable::Find(&g_DialogHashTable, g_Str_File_number1_pcx, 0); /*0x783abe*/
      break; /*0x783ac3*/
    case 2u: /*0x783a99*/
      result = HashTable::Find(&g_DialogHashTable, aNumber2Pcx, 0); /*0x783ad0*/
      break; /*0x783ad5*/
    case 3u: /*0x783a99*/
      result = HashTable::Find(&g_DialogHashTable, aNumber3Pcx, 0); /*0x783ae2*/
      break; /*0x783ae7*/
    case 4u: /*0x783a99*/
      result = HashTable::Find(&g_DialogHashTable, aNumber4Pcx, 0); /*0x783af4*/
      break; /*0x783af9*/
    case 5u: /*0x783a99*/
      result = HashTable::Find(&g_DialogHashTable, aNumber5Pcx, 0); /*0x783b06*/
      break; /*0x783b0b*/
    case 6u: /*0x783a99*/
      result = HashTable::Find(&g_DialogHashTable, aNumber6Pcx, 0); /*0x783b18*/
      break; /*0x783b1d*/
    case 7u: /*0x783a99*/
      result = HashTable::Find(&g_DialogHashTable, aNumber7Pcx, 0); /*0x783b2a*/
      break; /*0x783b2f*/
    case 8u: /*0x783a99*/
      result = HashTable::Find(&g_DialogHashTable, aNumber8Pcx, 0); /*0x783b3c*/
      break; /*0x783b41*/
    case 9u: /*0x783a99*/
      result = HashTable::Find(&g_DialogHashTable, aNumber9Pcx, 0); /*0x783b4e*/
      break; /*0x783b53*/
    default:
      result = 0; /*0x783b54*/
      break; /*0x783b54*/
  }
  return result; /*0x783ab1*/
}
} // namespace gamemd

// 0x7B72F0
namespace gamemd {
char EditControl::GrowBuffer(wchar_t a2, size_t a3) {
  int v4; // eax
  unsigned short *v5; // eax
  size_t v7; // eax
  size_t v8; // edi
  int v9; // edi
  wchar_t *v10; // ebx
  wchar_t *v11; // eax
  const wchar_t *v12; // [esp-10h] [ebp-18h]
  int v13; // [esp+0h] [ebp-8h] BYREF
  wchar_t String; // [esp+4h] [ebp-4h] BYREF
  int16_t v15; // [esp+6h] [ebp-2h]

  if ( *(unsigned int *)this->__pad_000 ) /*0x7b72f4*/
  {
    v7 = wcslen(*(const wchar_t **)this->__pad_000); /*0x7b7362*/
    v8 = a3; /*0x7b7367*/
    if ( a3 > v7 ) /*0x7b7370*/
      v8 = v7; /*0x7b7372*/
    v9 = 2 * v8; /*0x7b7380*/
    v10 = (wchar_t *)operator new(2 * v7 + 4); /*0x7b7382*/
    v11 = (wchar_t *)(v9 + *(unsigned int *)this->__pad_000); /*0x7b7388*/
    String = *v11; /*0x7b738b*/
    *v11 = 0; /*0x7b7390*/
    v12 = *(const wchar_t **)this->__pad_000; /*0x7b7397*/
    v15 = 0; /*0x7b7399*/
    wcscpy(v10, v12); /*0x7b73a0*/
    *(unsigned short *)(v9 + *(unsigned int *)this->__pad_000) = String; /*0x7b73b1*/
    String = a2; /*0x7b73bb*/
    wcscat(v10, &String); /*0x7b73c0*/
    wcscat(v10, (const wchar_t *)(*(unsigned int *)this->__pad_000 + v9)); /*0x7b73c9*/
    operator delete((*(void **)this->__pad_000)); /*0x7b73d1*/
    *(unsigned int *)this->__pad_000 = v10; /*0x7b73d9*/
    return 1; /*0x7b73db*/
  }
  else
  {
    String = a2; /*0x7b7305*/
    v15 = 0; /*0x7b730a*/
    *(unsigned int *)this->__pad_000 = 0; /*0x7b7311*/
    if ( &v13 == (int *)-4 ) /*0x7b7317*/
      v4 = 1; /*0x7b7329*/
    else
      v4 = wcslen(&String) + 1; /*0x7b7326*/
    v5 = (unsigned short *)operator new(2 * v4); /*0x7b7331*/
    *(unsigned int *)this->__pad_000 = v5; /*0x7b733d*/
    *v5 = 0; /*0x7b733f*/
    if ( &String ) /*0x7b7346*/
      wcscpy(*(wchar_t **)this->__pad_000, &String); /*0x7b7350*/
    return 1; /*0x7b7358*/
  }
}
} // namespace gamemd

