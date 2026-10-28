// 自动生成 by tools/move_hpp_bodies.py — 函数体自 src/system/game_systems.hpp 迁出
// hpp-impl 门控: 头文件只允许声明（= default 析构亦移出）
#include "game_systems.hpp"
#include "core/ida_vtables.h"  // gC_vftable3
#include "e4/classes/Math_e4.hpp"  // g57c5 W5d scope supply
#include "e4/e4_globals_decls.hpp"  // [w14e3] DSurface_Alternate/g_BitShift_* extern battery
#include "core/globals_core.hpp"  // [w14e3] g_GameScreen*/g_ScreenSaverState/g_CreditsScreenState externs
#include "e4/classes/ScenarioClass_e4.hpp"  // [w14e3] ScenarioClass::SetGlobalToByID carrier
#include "e4/classes/Text_e4.hpp"  // w16g4 C3861 Text:: supply
#include "e4/classes/Object_e4.hpp"  // w16g4 C3861 Object:: supply
#include "e4/classes/Dialog_e4.hpp"  // w16g4 C3861 Dialog:: supply
#include "e4/classes/GadgetClass_e4.hpp"  // w16g4 C3861 GadgetClass:: supply
#include "e4/classes/GameClass_e4.hpp"
#include "e4/classes/NetworkLobby_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/SidebarClass_e4.hpp"
#include "core/cellcoord.hpp"  // X181A: complete CellCoord (p->To_CellObj)
// [w18j2] C3861 supply (raw-evidenced)
namespace gamemd { int Hash_Compute(unsigned int *a1, int a2); }  // w18j2 raw 0x0064DE80
// [w18j2] C3861 supply (raw-evidenced)
namespace gamemd { int Hash_Compute(unsigned int *a1, int a2); }  // w18j2 raw 0x0064DE80
// [w18j2] C3861 supply (raw-evidenced)
namespace gamemd { int Hash_Compute(unsigned int *a1, int a2); }  // w18j2 raw 0x0064DE80
// [w18j2] C3861 supply (raw-evidenced)
namespace gamemd { int Rebuild(int** p0); }  // x4:signals@0x6234b0
namespace gamemd { int OrFree(char p0); }  // x4:signals@0x624480
namespace gamemd { int Hash_Compute(unsigned int *a1, int a2); }  // w18j2 raw 0x0064DE80
namespace gamemd { int Rebuild2(HashTable *p_this); }  // x4:ida@0x625830
namespace gamemd { int Alt(DeleteAndZero *p_this); }  // x4:ida@0x7b6760
namespace HashTable { int Rebuild2(HashTable *p_this); }  // x4:ida@0x625830
namespace HashTable { int ComputeHash(int* p0, int p1); }  // x4:signals@0x64de80
// [w16g4] C3861 supply (raw call-form evidence)
namespace gamemd { int DrawDialogGradient(int* p0, int* p1, int p2, int p3); }  // x4:signals@0x6208f0
namespace gamemd { int PrintFontLayout(int p0, uint16_t* p1, int* p2, int* p3, int p4, char p5, int p6, int p7, int p8, int p9); }  // x4:signals@0x621040
namespace gamemd { int unknown_libname_74(_DWORD *p_this); }  // x4:ida@0x7b66c0
// [w14e3] fn vocab supply (g57b5-W5 variadic convention)
namespace gamemd {
int Tooltip_Enable(char p0);  // x4:signals@0x7241a0
int AddPower(int p0);  // x4:signals@0x4f9950
int SetCombatPower(int p0);  // x4:signals@0x4f6ec0
}
extern int PropertyReadBoolCOM(int a1, int a2, char a3);  // W13-C raw 0x682A90 COM_Property_ReadBool
extern int WriteIntCOM(int a1, int a2, int a3);  // W13-C raw 0x682E10 COM_WriteInt
extern int WriteStringCOM(int a1, int a2, const char *lpMultiByteStr);  // W13-C raw 0x682640 COM_WriteString
extern int GameOptions_Load(int a1, int a2, wchar_t *String);  // W13-C raw 0x682780
extern int ScreenDialogToClient(void *hWnd, void *lpRect);  // W13-C raw 0x775690 (HWND, LPRECT)
extern int RoundToInt(double value);  // W13-C raw 0x7C5F00 Math::RoundToInt (e4_protos.h:492 同形)
// ---- g57b5 W6: TU-local globals (csp_canon 驱动) ----extern int InitDegToRad;  // 词表 (canon 无条目, int 兜底) L315
// ---- g57c5 W5 vocab (declaration-only) ----
namespace gamemd {
class Math;  // g57c5 W5 fwd
} // namespace gamemd
// ---- g57c5 W5 end ----
extern int Tooltip;  // 词表 (canon 无条目, int 兜底) L508
extern int g_INI_Key_A1;  // 词表 (canon 无条目, int 兜底) L356
extern int g_NetworkOptionsState;  // 词表 (canon 无条目, int 兜底) L328
extern int32_t g_RulesInitConfig;  // 0x822CF4 (csp_canon/globals.hpp)
extern char g_Str_TXT_OK[7];  // 词表 (canon 无条目, int 兜底) L654
// g57b5 W6audit: int 兜底移除 (member-access 用法会放大为 C2109 群; 还原为 C2065 债): extern int stru_82BA00;  // 词表 (canon 无条目, int 兜底) L654
// g57b5 W6audit: int 兜底移除 (member-access 用法会放大为 C2109 群; 还原为 C2065 债): extern int stru_87F5F0;  // 词表 (canon 无条目, int 兜底) L488
// g57b5 W6audit: int 兜底移除 (member-access 用法会放大为 C2109 群; 还原为 C2065 债): extern int stru_A8B250;  // 词表 (canon 无条目, int 兜底) L645
// g57b5 W6audit: int 兜底移除 (member-access 用法会放大为 C2109 群; 还原为 C2065 债): extern int stru_A8D600;  // 词表 (canon 无条目, int 兜底) L422
// ---- g57b5 W6 end ----
// ---- g57b5 W5: qualified-call free-form vocab ----
namespace gamemd {
int GameOptions_Load_6829A0(int* p0, int p1, int p2);  // x4:signals@0x6829a0
int PropertyBagReadCOM(int* p0, int p1, int p2);  // x4:signals@0x682b80
int ReadStringCOM(int *a1, int a2, LPCCH lpMultiByteStr);  // x4:ida@0x682880
int SetBufferParamsCOM(int* p0, int p1, int* p2);  // x4:signals@0x682f00
int Dialog_ShowMessageBox(int p0, uint16_t* p1, uint16_t* p2, uint16_t* p3, uint16_t* p4, int p5);  // x4:signals@0x5d3490
int ShowMessageBox(int p0, uint16_t* p1, uint16_t* p2, uint16_t* p3, uint16_t* p4, int p5);  // x4:signals@0x5d3490
int CopyWideToChar(uint8_t* p0, char* p1, int p2);  // x4:signals@0x735090
int Debug_Log(void);  // g57b5 W6: 0 参调用修正   // g57b5 W5: raw 自由函数词表 (纯变参兜底)
int EventClass_Add2(int p0, uint8_t p1, int p2);  // x4:signals@0x4c6720
int ReadPlayerCountMap(int p0);  // x4:signals@0x5e6520
int SetGlobalFlag(char p0);  // x4:signals@0x70d180
int TacticalClass_Initialize(TacticalClass *p_this);  // x4:ida@0x4ae450
int timeGetTime(void);  // g57b5 W6: 0 参调用修正   // g57b5 W5: raw 自由函数词表 (纯变参兜底)
int AssignPlayerColor(HWND hDlg, StartCombo *nIDDlgItem);  // x4:ida@0x5e9c00
int AssignPlayerSide(HWND hDlg, Dialog *nIDDlgItem);  // x4:ida@0x5e9ce0
int CountryCombo_IDToIndex(CountryCombo *p_this);  // x4:ida@0x4e3830
int EnablePlayerSlotControls(HWND hDlg, unsigned __int8 a2);  // x4:ida@0x5edde0
wchar_t *GameClass_GetDifficultyString(void *a1);   // g57b5 W5: raw 自由函数词表 (纯变参兜底)
int GameLobby_Setup(HWND hDlg, void *a2);  // x4:ida@0x5ea180
int GameSetup_DisplayPlayers(void);  // g57b5 W6: 0 参调用修正   // g57b5 W5: raw 自由函数词表 (纯变参兜底)
wchar_t *GameSetup_GetColorTooltip(void *a1);   // g57b5 W5: raw 自由函数词表 (纯变参兜底)
int GetComboBoxSelected(HWND hDlg, int nIDDlgItem, LRESULT wParam);  // x4:ida@0x4e4170
int GetComboBoxSelectedDefault(HWND hDlg, int nIDDlgItem, LRESULT wParam);  // x4:ida@0x5e9b20
int GetComboBoxSelectedRaw(HWND hDlg, int nIDDlgItem, LRESULT wParam);  // x4:ida@0x4e4e20
int GetComboBoxSelectedRaw2(HWND hDlg, int nIDDlgItem, LRESULT wParam);  // x4:ida@0x4e6030
int GetResourceID2CSF(ObjectClass *p_this);  // x4:ida@0x4e37d0
int GetResourceID3CSF(ObjectClass *p_this);  // x4:ida@0x4e4e60
int GetResourceID4CSF(ObjectClass *p_this);  // x4:ida@0x4e5940
int GetResourceIDCSF(ObjectClass *p_this);  // x4:ida@0x4e41d0
int InitGameDropdownColors(ObjectClass *p_this);  // x4:ida@0x4e43c0
int InitSkirmishDialogControls(HWND hDlg, int a2);  // x4:ida@0x5e3010
int LoadScenarioClassByIndex(int p0);  // x4:signals@0x5e7bf0
int MapSkirmishDialogPlayerToControl(HWND a1, int a2);  // x4:ida@0x4e48e0
int ProcessNetworkLobbyOption(HWND hDlg, Dialog *nIDDlgItem);  // x4:ida@0x5e9db0
int ReadChatMessage(wchar_t **a1, HWND a2);  // x4:ida@0x5edd00
int RefreshLobbyPlayerSlots(unsigned int p0);  // x4:signals@0x5ee510
int SelectLobbyCountry(HWND a1, CountryCombo *a2);  // x4:ida@0x5e9b60
int SendNetworkLobbyChatMessage(HWND hWnd, int a2, int a3);  // x4:ida@0x5de360
int SetComboBoxSelection(HWND hDlg, int nIDDlgItem, LRESULT wParam);  // x4:ida@0x4e5900
int SetGameSetupPlayerState(char* p0, int p1);  // x4:signals@0x5dbe20
int SetupSkirmishDialogPlayerSlot(HWND hDlg, int a2);  // x4:ida@0x4e3ce0
wchar_t *SideClass_GetName(void *a1);   // g57b5 W5: raw 自由函数词表 (纯变参兜底)
int SkirmishDialog_FillComboBoxes(SkirmishDialog *p_this);  // x4:ida@0x4e3b90
int StartCombo_IDToIndex(StartCombo *p_this);  // x4:ida@0x4e4230
int ToWideStringChar(char* p0);  // x4:signals@0x7350c0
int WOLobby_Play(const char* p0, const char* p1);  // x4:signals@0x5e3850
int DeleteAndZero_Alt(DeleteAndZero *p_this);  // x4:ida@0x7b6760
int Dialog_MapPlayerIDToIndex(Dialog *p_this);  // x4:ida@0x5e9950
int Dialog_OptionIDToIndex(Dialog *p_this);  // x4:ida@0x4e59a0
int Dialog_SideIDToIndex(Dialog *p_this);  // x4:ida@0x4e4ec0
void GDlg_LoadLetterStrings(void);   // g57b5 W5: raw 词表 (自由形)
int Lobby_FillPlayerFactions(Lobby *p_this);  // x4:ida@0x4e4820
int Lobby_InvalidateFactionCombos(Lobby *p_this);  // x4:ida@0x4e5310
int Lobby_InvalidatePlayerSlots(Lobby *p_this);  // x4:ida@0x4e5d60
int Network_SendOptionsGame(char *Source);  // x4:ida@0x5e3720
int NetworkLobby_UpdatePlayerList();  // x4:empty@0x5db9b0
} // namespace gamemd
// ---- g57b5 W5 end ----
// ---- g57b5 W4r2: TU-local vocab ----
class StartCombo;   // 指针局部词表
class SideClass;    // 指针局部词表
class GameClass;    // 指针局部词表
namespace gamemd {
void VtableStub_643E70(void *a1);
extern void *g_UIControlState;               // data: 0xAC1154 (globals_core.hpp:985 真形)
extern wchar_t g_TypeClass_DefaultString;         // 词表 (取址形 wchar_t*)
extern char g_Str_File_netdlg2_cpp[25];      // 词表 (g_Str_File_* 家族)
char *DlgSkirmishMenuProc(HWND a1, void *a2);       // raw 0x5e1def 家族 (返回 char*)
wchar_t *GetStringCSF(const wchar_t *a1, int a2, const char *a3, int a4);  // raw 0x56082d 真形
void *LoadScreen_Render(int a1, int a2, int a3, double a4);  // raw 0x5e1d71 (4 参自由形)
void WideString_Assign_Alt(void **a1, void *a2);  // raw 0x5e2209 WideString::Assign_Alt
              // raw 0x5e1cea VtableStub::sub_643E70(数字段名非法, 改自由形)
struct stru_AC4B30_host {                      // 0xAC4B30 宿主 (G42.35 C8 同款)
    unsigned char __pad_EC[0x240 - 0xEC];      // 覆盖 __pad_EC[828] = +0x240
};
} // namespace gamemd
// ---- g57b5 W4r2 end ----
// ---- g57b5 W3: TU-local 真形 vocab (declaration-only) ----
namespace gamemd {
    void Dialog_DrawBackground(void *a1);             // raw 0x5e1d41;
    void Dialog_StopBink(void *a1);                    // raw 0x5e1d78;
    void Dialog_EnumAndCleanup(void *a1);             // raw 0x5e22e6;
    void Dialog_Resize(void *a1);                      // raw 0x5e1d27 (char* 形);
} // namespace gamemd
// ---- g57b5 W3 end ----

// gC supply: extern declarations from src/e4/e4_globals_decls.hpp
extern unsigned int stru_A8EB00;
extern unsigned int stru_A8D600;  // g57c5 W5f (e4_globals_decls.hpp data 0xA8D600)
extern unsigned int stru_A8B250;  // g57c5 W5f (e4_globals_decls.hpp data 0xA8B250)
extern unsigned int stru_82BA00;  // g57c5 W5f (e4_globals_decls.hpp data 0x82BA00)
extern unsigned int stru_87F5F0;  // g57c5 W5f (e4_globals_decls.hpp data 0x87F5F0)
struct DialogPool_208_c { unsigned char q208[0x400]; };  // W13-C: G42.35 C8 host pattern (core/supplied_bodies.cpp:151) 0xAC18C0 宿主
extern DialogPool_208_c g_DialogPool;  // 0xAC18C0 (G42.35 C8 同形 W13-C 供给)
extern char* off_832C20[];  // W13-C raw fn_5F/60 词表 0x832C20 (char* 数组)
extern char* off_832C24[];  // W13-C raw 词表 0x832C24
extern char* off_832C30[];  // W13-C raw fn_5F:5fbfc0 词表 0x832C30 ("A01_F00e" 表)
extern char* off_832CA0[];  // W13-C raw 词表 0x832CA0
extern char g_Str_File_Options_CPP[25];  // data: 0x833370 (e4_globals_decls.hpp:1476 同形)
extern HWND g_GameScreenManager;  // data: 0xAC48D0 (globals_core.hpp:1016 GetParent 用法适配)
extern void* dword_AC48C0;  // data: 0xAC48C0 ((HWND)this 写入)
extern unsigned int dword_AC48C4; // data: 0xAC48C4

namespace gamemd {
// 0x5d86d0
void GameInit::InitMultiplayerModes(int a2, int a3)  // g57b5 W4: raw 真值补参 (a2,a3)
{
  this->u32_4 = 0; /*0x5d86d9*/
  this->u32_8 = a2; /*0x5d86e0*/
  this->u32_C = 1; /*0x5d86e3*/
  this->u32_D = 0; /*0x5d86e7*/
  *this = (gamemd::GameInit)((GameInit)0); /*0x5d86eb*/
  if ( a2 ) /*0x5d86f1*/
  {
    if ( a3 ) /*0x5d86f9*/
    {
      this->u32_4 = a3; /*0x5d86fb*/
    }
    else
    {
      this->u32_4 = (unsigned int)(operator new(4 * a2)); /*0x5d870c*/
      this->u32_D = 1; /*0x5d870f*/
    }
  }
  *this = (gamemd::GameInit)((GameInit)0); /*0x5d8713*/
  this->u32_14 = 10; /*0x5d8719*/
  this->u32_10 = 0; /*0x5d8720*/
  return this; /*0x5d8729*/
}
// 0x5e1ca0
int GameLobby::DlgProc(int a2, HWND hWnd, UINT Msg, WPARAM, unsigned int a6)  // g57c5 W5f: raw int 真值同步
{

  int v6; // ebx
  Skirmish *v7; // esi
  int result; // eax
  int v10; // esi
  WPARAM v11; // edi
  wchar_t *StringCSF; // ebp
  HWND v13; // eax
  char *v14; // eax
  HWND DlgItem; // eax
  UINT v16; // edi
  StartCombo *v17; // esi
  bool v18; // cc
  HWND v19; // esi
  signed int v20; // edi
  signed int v21; // ebx
  int v22; // ebp
  int v23; // eax
  ObjectClass *v24; // esi
  CountryCombo *ResourceID2CSF; // edi
  StartCombo *ResourceIDCSF; // ebx
  Dialog *ResourceID3CSF; // ebp
  Dialog *ResourceID4CSF; // eax
  GameLobby *v29; // esi
  int v30; // edi
  int v31; // ebx
  int v32; // ebp
  int ComboBoxSelectedRaw2; // eax
  char *v34; // eax
  WPARAM v35; // edi
  WideString *v36; // ebx
  StartCombo *DlgCtrlID; // esi
  GameSetup *ComboBoxSelectedRaw; // eax
  wchar_t *ColorTooltip; // eax
  SideClass *ComboBoxSelected; // eax
  wchar_t *Name; // eax
  GameClass *ComboBoxSelectedDefault; // eax
  wchar_t *DifficultyString; // eax
  POINT v44; // [esp-Ch] [ebp-74h]
  ObjectClass *v45; // [esp+0h] [ebp-68h]
  GameSetup *v46; // [esp+0h] [ebp-68h]
  GameSetup *v47; // [esp+0h] [ebp-68h]
  ObjectClass *v48; // [esp+10h] [ebp-58h]
  int nIDDlgItem; // [esp+14h] [ebp-54h]
  struct tagRECT Rect; // [esp+18h] [ebp-50h] BYREF
  char Buffer[64]; // [esp+28h] [ebp-40h] BYREF
  HWND hWnda; // [esp+6Ch] [ebp+4h]

  if ( (unsigned int)hWnd <= 0x84 ) /*0x5e1cb0*/
  {
    if ( hWnd != (HWND)132 ) /*0x5e1cb6*/
    {
      switch ( (unsigned int)hWnd ) /*0x5e1cd0*/
      {
        case 2u: /*0x5e1cd0*/
          if ( (unsigned __int8)LoadScreen::IsActive((LoadScreen *)&stru_AC4B48.__pad_2F4[284]) ) /*0x5e1cdc*/
            VtableStub::sub_643E70(&stru_AC4B48.__pad_2F4[284]); /*0x5e1cea*/
          v7 = g_UIControlState; /*0x5e1cef*/
          if ( !g_UIControlState ) /*0x5e1cf7*/
            return 0; /*0x5e1cf7*/
          ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x5e1cff*/
          __3_YAXPAX_Z(v7); /*0x5e1d05*/
          g_UIControlState = 0; /*0x5e1d0d*/
          return 0; /*0x5e1d20*/
        case 0xFu: /*0x5e1cd0*/
          Dialog::DrawBackground((Dialog *)this); /*0x5e1d41*/
          if ( g_UIControlState ) /*0x5e1d4e*/
            Skirmish::RenderPreview(g_UIControlState, (HWND)this); /*0x5e1d51*/
          if ( (unsigned __int8)LoadScreen::IsActive((LoadScreen *)&stru_AC4B48.__pad_2F4[284]) ) /*0x5e1d5b*/
            LoadScreen::Render((int)&stru_AC4B48.__pad_2F4[284], v6, a2, NAN); /*0x5e1d71*/
Dialog::StopBink((Dialog *)this); /*0x5e1d78*/
          ValidateRect((HWND)this, 0); /*0x5e1d80*/
          return 0; /*0x5e1d8f*/
        case 0x14u: /*0x5e1cd0*/
          goto LABEL_9;
        case 0x2Bu: /*0x5e1cd0*/
          Dialog::Resize((char *)v20); /*0x5e1d27*/
LABEL_9:
          result = 1; /*0x5e1d2c*/
          break; /*0x5e1d38*/
        default:
          return 0;
      }
      return result; /*0x5e1d38*/
    }
    hWnda = GetDlgItem((HWND)this, 1685); /*0x5e1da4*/
    if ( hWnda ) /*0x5e1da8*/
    {
      v10 = (unsigned __int16)v20; /*0x5e1dbd*/
      v11 = (((v20) >> 16) & 0xFFFF); /*0x5e1dc3*/
      GetWindowRect((HWND)this, &Rect); /*0x5e1dc5*/
      StringCSF = &g_TypeClass_DefaultString; /*0x5e1dd9*/
      v44.y = v11 - Rect.top; /*0x5e1dde*/
      v44.x = v10 - Rect.left; /*0x5e1ddf*/
      v13 = ChildWindowFromPointEx((HWND)this, v44, 1u); /*0x5e1de1*/
      if ( v13 ) /*0x5e1de9*/
      {
        v14 = DlgSkirmishMenuProc((HWND)this, v13); /*0x5e1def*/
        if ( v14 ) /*0x5e1df6*/
          StringCSF = GetStringCSF((wchar_t *)v14, 0, g_Str_File_netdlg2_cpp, 3388); /*0x5e1e0b*/
      }
      SendMessageA(hWnda, 0x4B2u, 0, (LPARAM)StringCSF); /*0x5e1e1a*/
      return 0; /*0x5e1e29*/
    }
    return 0; /*0x5e1da8*/
  }
  if ( (unsigned int)hWnd > 0x4E9 ) /*0x5e1e31*/
  {
    if ( hWnd == (HWND)1260 ) /*0x5e22e0*/
      Dialog::EnumAndCleanup((Dialog *)this); /*0x5e22e6*/
    return 0; /*0x5e22e6*/
  }
  if ( hWnd == (HWND)1257 ) /*0x5e1e37*/
  {
    v35 = v20; /*0x5e21fe*/
    v36 = (WideString *)(v20 + 8); /*0x5e2204*/
    WideString::Assign_Alt((WideString *)(v20 + 8), 0); /*0x5e2209*/
    if ( *(unsigned int *)v35 && v35->ptr_4 != -1 ) /*0x5e221c*/
    {
      DlgCtrlID = (StartCombo *)GetDlgCtrlID(*(HWND *)v35); /*0x5e2229*/
      if ( Dialog::MapPlayerIDToIndex((Dialog *)DlgCtrlID) == -1 ) /*0x5e2235*/
      {
        if ( CountryCombo::IDToIndex((CountryCombo *)DlgCtrlID) == -1 ) /*0x5e2241*/
        {
          if ( StartCombo::IDToIndex(DlgCtrlID) != -1 ) /*0x5e224d*/
          {
            ComboBoxSelectedRaw = (GameSetup *)GetComboBoxSelectedRaw((HWND)this, (int)DlgCtrlID, v35->ptr_4); /*0x5e2259*/
            ColorTooltip = GameSetup::GetColorTooltip(ComboBoxSelectedRaw); /*0x5e2260*/
            WideString::Assign_Alt(v36, ColorTooltip); /*0x5e2268*/
            return 1; /*0x5e2279*/
          }
        }
        else
        {
          ComboBoxSelected = (SideClass *)GetComboBoxSelected((HWND)this, (int)DlgCtrlID, v35->ptr_4); /*0x5e2286*/
          if ( ComboBoxSelected != (SideClass *)-1 ) /*0x5e228e*/
          {
            Name = SideClass::GetName(ComboBoxSelected); /*0x5e2292*/
            WideString::Assign_Alt(v36, Name); /*0x5e229a*/
            return 1; /*0x5e22ab*/
          }
        }
      }
      else
      {
        ComboBoxSelectedDefault = (GameClass *)GetComboBoxSelectedDefault( /*0x5e22b8*/
                                                 (HWND)this,
                                                 (int)DlgCtrlID,
                                                 v35->ptr_4);
        DifficultyString = GameClass::GetDifficultyString(ComboBoxSelectedDefault); /*0x5e22bf*/
        WideString::Assign_Alt(v36, DifficultyString); /*0x5e22c7*/
      }
    }
    return 1; /*0x5e22d8*/
  }
  if ( hWnd != (HWND)273 ) /*0x5e1e42*/
  {
    if ( hWnd == (HWND)1175 ) /*0x5e1e4d*/
    {
      SkirmishDialog::FillComboBoxes((SkirmishDialog *)this); /*0x5e1e59*/
      InitGameDropdownColors(v45); /*0x5e1e5e*/
      Lobby::FillPlayerFactions((Lobby *)this); /*0x5e1e65*/
      _cfltcvt_init(); /*0x5e1e6a*/
      Lobby::InvalidateFactionCombos((Lobby *)this); /*0x5e1e71*/
      GDlg::LoadLetterStrings(); /*0x5e1e76*/
      memset32(&stru_A8B250.__pad_0[172], -2, 8u); /*0x5e1e8a*/
      Lobby::InvalidatePlayerSlots((Lobby *)this); /*0x5e1e8e*/
      RefreshLobbyPlayerSlots(0xFFFFFFFF); /*0x5e1e96*/
      GameLobby_Setup((HWND)this, *(void **)&stru_A8D804.__pad_3D[587]); /*0x5e1ea3*/
      SetupSkirmishDialogPlayerSlot((HWND)this, *(int *)&stru_A8D804.__pad_3D[587]); /*0x5e1eb0*/
      MapSkirmishDialogPlayerToControl((HWND)this, *(int *)&stru_A8D804.__pad_3D[587]); /*0x5e1ebd*/
      DlgItem = GetDlgItem((HWND)this, 1439); /*0x5e1eca*/
      EnableWindow(DlgItem, 0); /*0x5e1ed1*/
      byte_AC11C2 = 0; /*0x5e1edb*/
      SetGameSetupPlayerState(0, 0, v46); /*0x5e1ee2*/
      GameSetup::DisplayPlayers(v47); /*0x5e1ee9*/
      NetworkLobby::UpdatePlayerList(); /*0x5e1eee*/
      InitSkirmishDialogControls((HWND)this, 1); /*0x5e1efa*/
      LoadScenarioClassByIndex(-1); /*0x5e1f02*/
      dword_A8BB0C = 8; /*0x5e1f0a*/
      return 0; /*0x5e1f1a*/
    }
    return 0; /*0x5e1e4d*/
  }
  v16 = Msg; /*0x5e1f1d*/
  v17 = (StartCombo *)(unsigned __int16)Msg; /*0x5e1f23*/
  if ( (unsigned __int16)Msg <= 0x540u ) /*0x5e1f2f*/
  {
    if ( (unsigned __int16)Msg == 1344 ) /*0x5e1f35*/
    {
      ReadChatMessage((wchar_t **)&hWnd, (HWND)v20); /*0x5e1fb8*/
      ((DeleteAndZero *)&hWnd)->Alt(); /*0x5e1fc1*/
      if ( (((v16) >> 16) & 0xFFFF) == 1281 ) /*0x5e1fcf*/
      {
        SendNetworkLobbyChatMessage((HWND)this, (int)Math::InitDegToRad, 61680); /*0x5e1fe6*/
        return 0; /*0x5e1ff4*/
      }
      return 0; /*0x5e1fcf*/
    }
    if ( (unsigned __int16)Msg <= 0x514u ) /*0x5e1f3d*/
    {
      if ( (unsigned __int16)Msg < 0x513u ) /*0x5e1f45*/
      {
        if ( (unsigned __int16)Msg == 2 ) /*0x5e1f50*/
        {
          if ( !byte_AC0268 ) /*0x5e1f70*/
          {
            g_NetworkOptionsState = 2; /*0x5e1f79*/
            return 0; /*0x5e1f89*/
          }
          return 0; /*0x5e1f70*/
        }
        if ( (unsigned __int16)Msg != 1296 ) /*0x5e1f57*/
          return 0; /*0x5e1f66*/
      }
      goto LABEL_49; /*0x5e1f57*/
    }
    if ( (unsigned __int16)Msg < 0x51Eu ) /*0x5e1f92*/
      return 0; /*0x5e1f92*/
    v18 = (unsigned __int16)Msg <= 0x528u; /*0x5e1f98*/
    goto LABEL_36; /*0x5e1f98*/
  }
  if ( (unsigned __int16)Msg > 0x6ABu ) /*0x5e1ffd*/
  {
    if ( (unsigned __int16)Msg < 0x76Du || (unsigned __int16)Msg > 0x774u ) /*0x5e20c9*/
      return 0; /*0x5e20c9*/
    goto LABEL_49; /*0x5e20c9*/
  }
  if ( (unsigned __int16)Msg < 0x6AAu ) /*0x5e2009*/
  {
    if ( (unsigned __int16)Msg == 1439 ) /*0x5e2015*/
    {
      if ( *(unsigned int *)&stru_A8D804.__pad_3D[579] ) /*0x5e2035*/
      {
        *(unsigned int *)(**(unsigned int **)&stru_A8D804.__pad_3D[567] + 119) = 1; /*0x5e204d*/
        sprintf(Buffer, g_INI_Key_A1); /*0x5e2054*/
        Network::SendOptionsGame(Buffer); /*0x5e2060*/
        EnablePlayerSlotControls((HWND)this, 0); /*0x5e206d*/
        v19 = GetDlgItem((HWND)this, 1439); /*0x5e207e*/
        EnableWindow(v19, 0); /*0x5e2083*/
        InvalidateRect(v19, 0, 0); /*0x5e208e*/
        SendMessageA(v19, 0x4DCu, 0, 0); /*0x5e209e*/
        GameSetup::DisplayPlayers((GameSetup *)v45); /*0x5e20a6*/
        return 0; /*0x5e20b4*/
      }
      return 0; /*0x5e2035*/
    }
    if ( (unsigned __int16)Msg <= 0x6A0u ) /*0x5e201d*/
      return 0; /*0x5e22ee*/
    v18 = (unsigned __int16)Msg <= 0x6A8u; /*0x5e2023*/
LABEL_36:
    if ( !v18 ) /*0x5e1f9e*/
      return 0; /*0x5e1fad*/
  }
LABEL_49:
  if ( HIWORD(Msg) != 1 ) /*0x5e20d5*/
    return 0; /*0x5e20d5*/
  v20 = CountryCombo::IDToIndex((CountryCombo *)(unsigned __int16)Msg); /*0x5e20e2*/
  v20 = v20; /*0x5e20e6*/
  v21 = StartCombo::IDToIndex(v17); /*0x5e20ef*/
  Msg = v21; /*0x5e20f3*/
  v22 = Dialog::SideIDToIndex((Dialog *)v17); /*0x5e20fc*/
  v48 = (ObjectClass *)v22; /*0x5e2100*/
  v23 = Dialog::OptionIDToIndex((Dialog *)v17); /*0x5e2104*/
  v24 = (ObjectClass *)v20; /*0x5e210b*/
  if ( v20 <= v21 ) /*0x5e210d*/
    v24 = (ObjectClass *)v21; /*0x5e210f*/
  if ( (int)v24 <= v22 ) /*0x5e2113*/
    v24 = (ObjectClass *)v22; /*0x5e2115*/
  if ( (int)v24 <= v23 ) /*0x5e2119*/
    v24 = (ObjectClass *)v23; /*0x5e211b*/
  ResourceID2CSF = (CountryCombo *)GetResourceID2CSF(v24); /*0x5e2126*/
  ResourceIDCSF = (StartCombo *)GetResourceIDCSF(v24); /*0x5e212f*/
  ResourceID3CSF = (Dialog *)GetResourceID3CSF(v24); /*0x5e2138*/
  ResourceID4CSF = (Dialog *)GetResourceID4CSF(v24); /*0x5e213a*/
  nIDDlgItem = (int)ResourceID4CSF; /*0x5e2143*/
  if ( v24 == (ObjectClass *)v20 ) /*0x5e2149*/
  {
    v29 = this; /*0x5e214b*/
    SelectLobbyCountry((HWND)this, ResourceID2CSF); /*0x5e2153*/
  }
  else if ( v24 == (ObjectClass *)Msg ) /*0x5e215e*/
  {
    v29 = this; /*0x5e2160*/
    AssignPlayerColor((HWND)this, ResourceIDCSF); /*0x5e2168*/
  }
  else if ( v24 == v48 ) /*0x5e2173*/
  {
    v29 = this; /*0x5e2175*/
    AssignPlayerSide((HWND)this, ResourceID3CSF); /*0x5e217d*/
  }
  else
  {
    v29 = this; /*0x5e2184*/
    ProcessNetworkLobbyOption((HWND)this, ResourceID4CSF); /*0x5e218c*/
  }
  v30 = GetComboBoxSelected((HWND)v29, (int)ResourceID2CSF, -1); /*0x5e21a2*/
  v31 = GetComboBoxSelectedRaw((HWND)v29, (int)ResourceIDCSF, -1); /*0x5e21af*/
  v32 = SetComboBoxSelection((HWND)v29, (int)ResourceID3CSF, -1); /*0x5e21be*/
  ComboBoxSelectedRaw2 = GetComboBoxSelectedRaw2((HWND)v29, nIDDlgItem, -1); /*0x5e21c0*/
  sprintf(Buffer, "R%d,%d,%d,%d", v30, v31, v32, ComboBoxSelectedRaw2); /*0x5e21d3*/
  v34 = ToWideStringChar((char *)&stru_A8D610); /*0x5e21e4*/
  WOLobby_Play(v34, Buffer); /*0x5e21ed*/
  return 0; /*0x5e1d19*/

}
// 0x766a60
void GameOption_WorldDominationTour::QueryInterface()
{
  GameOption_WorldDominationTour::Constructor(this); /*0x766a63*/
  if ( (a2 & 1) != 0 ) /*0x766a6d*/
    operator delete((this)); /*0x766a70*/
  return this->__pad_000; /*0x766a7a*/
}
// 0x5b8ce0
char GameOptions::ReadSettings()
{
  int v2; // edi
  HWND DlgItem; // eax
  wchar_t *StringCSF; // eax
  wchar_t *v5; // eax
  HWND v7; // eax
  HWND v8; // eax
  HWND v9; // eax
  HWND v10; // edi
  LRESULT v11; // eax
  HWND v12; // eax
  HWND v13; // eax
  HWND v14; // eax
  HWND v15; // eax
  HWND v16; // eax
  HWND v17; // eax
  HWND v18; // eax
  HWND v19; // eax
  HWND v20; // eax
  HWND v21; // eax
  HWND v22; // eax
  HWND v23; // eax
  HWND v24; // eax
  HWND v25; // eax
  HWND v26; // eax
  HWND v27; // eax
  int v28; // [esp+0h] [ebp-23Ch]
  wchar_t *Format; // [esp+10h] [ebp-22Ch]
  char lParam[40]; // [esp+14h] [ebp-228h] BYREF
  int Buffer[128]; // [esp+3Ch] [ebp-200h] BYREF

  Debug::Log(); /*0x5b8cf1*/
  Format = (wchar_t *)ReadPlayerCountMap(*(int *)&g_GameRulesOptions); /*0x5b8d0a*/
  v2 = 2; /*0x5b8d16*/
  DlgItem = GetDlgItem(*(HWND *)this->__pad_000, 1362); /*0x5b8d1b*/
  if ( DlgItem ) /*0x5b8d25*/
    v2 = SendMessageA(DlgItem, 0x400u, 0, 0) + 2; /*0x5b8d35*/
  if ( (int)Format >= v2 ) /*0x5b8d3e*/
  {
    v7 = GetDlgItem(*(HWND *)this->__pad_000, 1473); /*0x5b8dad*/
    if ( v7 ) /*0x5b8db1*/
    {
      SendMessageA(v7, 0x4B3u, 0x14u, (LPARAM)lParam); /*0x5b8dc0*/
      CopyWideToChar(unk_A8B380, lParam, -1); /*0x5b8dcd*/
    }
    Debug::Log(); /*0x5b8ddc*/
    v8 = GetDlgItem(*(HWND *)this->__pad_000, 1029); /*0x5b8dec*/
    if ( v8 ) /*0x5b8df0*/
      dword_A8B394 = SendMessageA(v8, 0x147u, 0, 0); /*0x5b8dfe*/
    Debug::Log(); /*0x5b8e0e*/
    v9 = GetDlgItem(*(HWND *)this->__pad_000, 1639); /*0x5b8e1e*/
    v10 = v9; /*0x5b8e20*/
    if ( v9 ) /*0x5b8e24*/
    {
      v11 = SendMessageA(v9, 0x147u, 0, 0); /*0x5b8e30*/
      dword_A8B3AC = SendMessageA(v10, 0x150u, v11, 0); /*0x5b8e3d*/
    }
    v12 = GetDlgItem(*(HWND *)this->__pad_000, 1641); /*0x5b8e4a*/
    if ( v12 ) /*0x5b8e4e*/
      *(unsigned int *)&g_Rules_MultiEngineer = SendMessageA(v12, 0x400u, 0, 0); /*0x5b8e5c*/
    Debug::Log(); /*0x5b8e6c*/
    v13 = GetDlgItem(*(HWND *)this->__pad_000, 1360); /*0x5b8e7c*/
    if ( v13 ) /*0x5b8e80*/
      g_RulesInitConfig = SendMessageA(v13, 0x400u, 0, 0); /*0x5b8e8e*/
    Debug::Log(); /*0x5b8e9f*/
    v14 = GetDlgItem(*(HWND *)this->__pad_000, 1026); /*0x5b8eaf*/
    if ( v14 ) /*0x5b8eb3*/
      *(unsigned int *)&g_Rules_Bases = SendMessageA(v14, 0x400u, 0, 0); /*0x5b8ec1*/
    Debug::Log(); /*0x5b8ed2*/
    v15 = GetDlgItem(*(HWND *)this->__pad_000, 1362); /*0x5b8ee2*/
    if ( v15 ) /*0x5b8ee6*/
      *(unsigned int *)&g_Rules_AlliesAllowed = SendMessageA(v15, 0x400u, 0, 0); /*0x5b8ef4*/
    Debug::Log(); /*0x5b8f04*/
    v16 = GetDlgItem(*(HWND *)this->__pad_000, 1321); /*0x5b8f14*/
    if ( v16 ) /*0x5b8f18*/
      *(unsigned int *)&g_Rules_EngineerCount = 6 - SendMessageA(v16, 0x400u, 0, 0); /*0x5b8f2d*/
    Debug::Log(); /*0x5b8f41*/
    v17 = GetDlgItem(*(HWND *)this->__pad_000, 1363); /*0x5b8f51*/
    if ( v17 ) /*0x5b8f55*/
      *(unsigned int *)&DataGlobal_A8B278 = SendMessageA(v17, 0x400u, 0, 0); /*0x5b8f63*/
    Debug::Log(); /*0x5b8f73*/
    v18 = GetDlgItem(*(HWND *)this->__pad_000, 1643); /*0x5b8f83*/
    if ( v18 ) /*0x5b8f87*/
      dword_A8B320 = SendMessageA(v18, 0xF0u, 0, 0) == 1; /*0x5b8f98*/
    Debug::Log(); /*0x5b8fb8*/
    v19 = GetDlgItem(*(HWND *)this->__pad_000, 1642); /*0x5b8fc8*/
    if ( v19 ) /*0x5b8fcc*/
      Bases = SendMessageA(v19, 0xF0u, 0, 0) == 1; /*0x5b8fdd*/
    Debug::Log(); /*0x5b8ffd*/
    v20 = GetDlgItem(*(HWND *)this->__pad_000, 1356); /*0x5b900d*/
    if ( v20 ) /*0x5b9011*/
      Crates = SendMessageA(v20, 0xF0u, 0, 0) == 1; /*0x5b9022*/
    Debug::Log(); /*0x5b9042*/
    v21 = GetDlgItem(*(HWND *)this->__pad_000, 1357); /*0x5b9052*/
    if ( v21 ) /*0x5b9056*/
      byte_A8B31F = SendMessageA(v21, 0xF0u, 0, 0) == 1; /*0x5b9067*/
    Debug::Log(); /*0x5b9087*/
    v22 = GetDlgItem(*(HWND *)this->__pad_000, 1572); /*0x5b9097*/
    if ( v22 ) /*0x5b909b*/
      BridgeDestruction = SendMessageA(v22, 0xF0u, 0, 0) == 1; /*0x5b90ac*/
    Debug::Log(); /*0x5b90cc*/
    v23 = GetDlgItem(*(HWND *)this->__pad_000, 1430); /*0x5b90dc*/
    if ( v23 ) /*0x5b90e0*/
      byte_A8B31D = SendMessageA(v23, 0xF0u, 0, 0) == 1; /*0x5b90f1*/
    Debug::Log(); /*0x5b9111*/
    v24 = GetDlgItem(*(HWND *)this->__pad_000, 1358); /*0x5b9121*/
    if ( v24 ) /*0x5b9125*/
      ShortGame = SendMessageA(v24, 0xF0u, 0, 0) == 1; /*0x5b9136*/
    Debug::Log(); /*0x5b9156*/
    v25 = GetDlgItem(*(HWND *)this->__pad_000, 1690); /*0x5b9166*/
    if ( v25 ) /*0x5b916a*/
      SWAllowed = SendMessageA(v25, 0xF0u, 0, 0) == 1; /*0x5b917e*/
    Debug::Log(); /*0x5b919c*/
    v26 = GetDlgItem(*(HWND *)this->__pad_000, 1693); /*0x5b91ac*/
    if ( v26 ) /*0x5b91b0*/
      g_Rules_ShortGame = SendMessageA(v26, 0xF0u, 0, 0) == 1; /*0x5b91c4*/
    Debug::Log(); /*0x5b91e3*/
    v27 = GetDlgItem(*(HWND *)this->__pad_000, 1361); /*0x5b91f3*/
    if ( v27 ) /*0x5b91f7*/
      MultiEngineer = SendMessageA(v27, 0xF0u, 0, 0) == 1; /*0x5b9208*/
    Debug::Log(); /*0x5b9228*/
    Debug::Log(); /*0x5b9232*/
    return 1; /*0x5b923a*/
  }
  else
  {
    StringCSF = GetStringCSF((char *)&g_Str_TXT_SCENARIO_TOO_SMALL, 0, &g_Str_File_ModemHst_cpp, 759); /*0x5b8d52*/
    swprintf((wchar_t *const)Buffer, (const size_t)StringCSF, Format); /*0x5b8d5d*/
    v5 = GetStringCSF(g_Str_TXT_OK, 0, &g_Str_File_ModemHst_cpp, 760); /*0x5b8d84*/
    Dialog::ShowMessageBox(Buffer, v5, 0, 0, 0, v28); /*0x5b8d93*/
    return 0; /*0x5b8d9b*/
  }
}
// 0x6812e0
int GameOptions::SaveLoad(int a2)
{
  int v2; // edi
  int (__stdcall **v5)(int, void *, int **); // eax
  int String; // ebx
  int v7; // ebp
  int v8; // ebp
  int Bool; // esi

  v2 = (int)a2; /*0x6812e4*/
  if ( !a2 ) /*0x6812ec*/
    return -2147467261; /*0x6812f7*/
  v5 = (int (__stdcall **)(int, void *, int **))*a2; /*0x6812fa*/
  a2 = 0; /*0x681307*/
  if ( (*v5)(v2, &unk_7F7D00, &a2) >= 0 ) /*0x681313*/
  {
    String = GameOptions_Load_6829A0(a2, 2, &this->q008); /*0x68132b*/
    if ( String < 0 ) /*0x68132f*/
    {
      if ( a2 ) /*0x681337*/
        goto LABEL_77; /*0x681337*/
      return String; /*0x681337*/
    }
    String = GameOptions_Load_6829A0(a2, 3, &this->u32_1084); /*0x681361*/
    if ( String < 0 ) /*0x681365*/
    {
      if ( a2 ) /*0x68136d*/
        goto LABEL_77; /*0x68136d*/
      return String; /*0x68136d*/
    }
    String = PropertyBagReadCOM(a2, 9, this->u32_4); /*0x681394*/
    if ( String < 0 ) /*0x681398*/
    {
      if ( a2 ) /*0x6813a0*/
        goto LABEL_77; /*0x6813a0*/
      return String; /*0x6813a0*/
    }
    String = PropertyBagReadCOM(a2, 16, *(unsigned int *)this); /*0x6813c6*/
    if ( String < 0 ) /*0x6813ca*/
    {
      if ( a2 ) /*0x6813d2*/
        goto LABEL_77; /*0x6813d2*/
      return String; /*0x6813d2*/
    }
    String = SetBufferParamsCOM(a2, 12, &this->u32_3D8); /*0x6813fc*/
    if ( String < 0 ) /*0x681400*/
    {
      if ( a2 ) /*0x681408*/
        goto LABEL_77; /*0x681408*/
      return String; /*0x681408*/
    }
    String = SetBufferParamsCOM(a2, 13, &this->u32_3E8); /*0x681432*/
    if ( String < 0 ) /*0x681436*/
    {
      if ( a2 ) /*0x68143e*/
        goto LABEL_77; /*0x68143e*/
      return String; /*0x68143e*/
    }
    String = SetBufferParamsCOM(a2, 10, &this->u32_3E0); /*0x681468*/
    if ( String < 0 ) /*0x68146c*/
    {
      if ( a2 ) /*0x681474*/
        goto LABEL_77; /*0x681474*/
      return String; /*0x681474*/
    }
    String = ReadStringCOM(a2, 18, (LPCCH)(this + 724)); /*0x68149e*/
    if ( String < 0 ) /*0x6814a2*/
    {
      if ( a2 ) /*0x6814aa*/
        goto LABEL_77; /*0x6814aa*/
      return String; /*0x6814aa*/
    }
    v7 = ReadStringCOM(a2, 4, (LPCCH)(this + 660)); /*0x6814d4*/
    if ( v7 < 0 ) /*0x6814d8*/
    {
      if ( a2 ) /*0x6814e0*/
        (*(void (__stdcall **)(int *))(*a2 + 8))(a2); /*0x6814e5*/
      return v7; /*0x6814ee*/
    }
    String = ReadStringCOM(a2, 8, (LPCCH)(this + 660)); /*0x681500*/
    if ( String < 0 ) /*0x681504*/
    {
      if ( a2 ) /*0x68150c*/
        goto LABEL_77; /*0x68150c*/
      return String; /*0x68150c*/
    }
    String = PropertyBagReadCOM(a2, 100, this->u32_18C); /*0x681536*/
    if ( String < 0 ) /*0x68153a*/
    {
      if ( a2 ) /*0x681542*/
        goto LABEL_77; /*0x681542*/
      return String; /*0x681542*/
    }
    String = PropertyBagReadCOM(a2, 101, this->u32_188); /*0x68156c*/
    if ( String < 0 ) /*0x681570*/
    {
      if ( a2 ) /*0x681578*/
        goto LABEL_77; /*0x681578*/
      return String; /*0x681578*/
    }
    String = PropertyBagReadCOM(a2, 102, this->u32_3F0); /*0x6815a2*/
    if ( String < 0 ) /*0x6815a6*/
    {
      if ( a2 ) /*0x6815ae*/
        goto LABEL_77; /*0x6815ae*/
      return String; /*0x6815ae*/
    }
  }
  String = GameOptions_Load(v2, 2, &this->q008); /*0x6815d1*/
  if ( String < 0 ) /*0x6815d5*/
  {
    if ( a2 ) /*0x6815dd*/
      goto LABEL_77; /*0x6815dd*/
    return String; /*0x6815dd*/
  }
  String = GameOptions_Load(v2, 3, &this->u32_108); /*0x681603*/
  if ( String < 0 ) /*0x681607*/
  {
    if ( a2 ) /*0x68160f*/
      goto LABEL_77; /*0x68160f*/
    return String; /*0x68160f*/
  }
  String = PropertyReadBoolCOM(v2, 9, this->u32_4); /*0x681632*/
  if ( String < 0 ) /*0x681636*/
  {
    if ( a2 ) /*0x68163e*/
      goto LABEL_77; /*0x68163e*/
    return String; /*0x68163e*/
  }
  String = PropertyReadBoolCOM(v2, 16, *(unsigned int *)this); /*0x681660*/
  if ( String < 0 ) /*0x681664*/
  {
    if ( a2 ) /*0x68166c*/
      goto LABEL_77; /*0x68166c*/
    return String; /*0x68166c*/
  }
  String = WriteIntCOM(v2, 12, &this->u32_3D84); /*0x681692*/
  if ( String < 0 ) /*0x681696*/
  {
    if ( a2 ) /*0x68169e*/
      goto LABEL_77; /*0x68169e*/
    return String; /*0x68169e*/
  }
  String = WriteIntCOM(v2, 13, &this->u32_3D80); /*0x6816c4*/
  if ( String < 0 ) /*0x6816c8*/
  {
    if ( a2 ) /*0x6816d0*/
      goto LABEL_77; /*0x6816d0*/
    return String; /*0x6816d0*/
  }
  String = WriteIntCOM(v2, 10, &this->u32_3D82); /*0x6816f6*/
  if ( String < 0 ) /*0x6816fa*/
  {
    if ( a2 ) /*0x681702*/
      goto LABEL_77; /*0x681702*/
    return String; /*0x681702*/
  }
  String = WriteStringCOM(v2, 18, (LPCCH)(&this->u32_3D84)); /*0x681728*/
  if ( String < 0 ) /*0x68172c*/
  {
    if ( a2 ) /*0x681734*/
      goto LABEL_77; /*0x681734*/
    return String; /*0x681734*/
  }
  v8 = WriteStringCOM(v2, 4, (LPCCH)(&this->u32_3D80)); /*0x68175a*/
  if ( v8 < 0 ) /*0x68175e*/
  {
    if ( a2 ) /*0x681766*/
      (*(void (__stdcall **)(int *))(*a2 + 8))(a2); /*0x68176b*/
    return v8; /*0x681774*/
  }
  String = WriteStringCOM(v2, 8, (LPCCH)(&this->u32_3D80)); /*0x681782*/
  if ( String < 0 ) /*0x681786*/
  {
    if ( a2 ) /*0x68178e*/
      goto LABEL_77; /*0x68178e*/
    return String; /*0x68178e*/
  }
  String = PropertyReadBoolCOM(v2, 100, this->u32_18C); /*0x6817b0*/
  if ( String < 0 ) /*0x6817b4*/
  {
    if ( a2 ) /*0x6817bc*/
    {
  LABEL_77:
      (*(void (__stdcall **)(int *))(*a2 + 8))(a2); /*0x6817be*/
      return String; /*0x6817ca*/
    }
    return String; /*0x6817bc*/
  }
  String = PropertyReadBoolCOM(v2, 101, this->u32_188); /*0x6817de*/
  if ( String < 0 ) /*0x6817e2*/
  {
    if ( a2 ) /*0x6817ea*/
      (*(void (__stdcall **)(int *))(*a2 + 8))(a2); /*0x6817ef*/
    return String; /*0x6817f8*/
  }
  Bool = PropertyReadBoolCOM(v2, 102, this->u32_3F0); /*0x68180c*/
  if ( Bool >= 0 ) /*0x681814*/
  {
    if ( a2 ) /*0x68182b*/
      (*(void (__stdcall **)(int *))(*a2 + 8))(a2); /*0x681830*/
    return 0; /*0x681836*/
  }
  else
  {
    if ( a2 ) /*0x681818*/
      (*(void (__stdcall **)(int *))(*a2 + 8))(a2); /*0x68181d*/
    return Bool; /*0x681820*/
  }
}
// 0x777b50
void GameOptions::GetEntry()
{
  return dword_822D1C; /*0x777b55*/
}
// 0x5fc000
int GameOptionsClass::PopulateMovieList(HWND hWnd)
{
  GameOptionsClass *v2; // ebx
  wchar_t *StringCSF; // eax
  LRESULT v4; // eax
  int GameOptionsClass_field_0x04; // eax
  int v6; // ebp
  char **v7; // ebx
  wchar_t *v8; // ecx
  wchar_t *v9; // eax
  LRESULT v10; // eax
  char *v11; // eax
  char *result; // eax
  char *v13; // ebp
  char **i; // ebx
  wchar_t *v15; // ecx
  wchar_t *v16; // eax
  LRESULT v17; // eax

  v2 = this; /*0x5fc00d*/
  if ( off_832C20[0] ) /*0x5fc01c*/
  {
    if ( off_832C24 ) /*0x5fc026*/
    {
      StringCSF = GetStringCSF(off_832C24, 0, g_Str_File_Options_CPP, 1265); /*0x5fc034*/
      v4 = SendMessageA(hWnd, 0x4CDu, 0, (LPARAM)StringCSF); /*0x5fc042*/
      if ( v4 != -1 ) /*0x5fc047*/
        SendMessageA(hWnd, 0x19Au, v4, (LPARAM)off_832C20); /*0x5fc055*/
    }
  }
  GameOptionsClass_field_0x04 = v2[9].q004; /*0x5fc057*/
  if ( GameOptionsClass_field_0x04 >= 0 ) /*0x5fc05c*/
  {
    v6 = GameOptionsClass_field_0x04 + 1; /*0x5fc05e*/
    v7 = off_832CA0; /*0x5fc068*/
    if ( off_832CA0[0] ) /*0x5fc06d*/
    {
      do /*0x5fc0b3*/
      {
        if ( v6 <= 0 ) /*0x5fc071*/
          break; /*0x5fc071*/
        if ( *v7 ) /*0x5fc073*/
        {
          v8 = (wchar_t *)v7[1]; /*0x5fc078*/
          if ( v8 ) /*0x5fc07d*/
          {
            v9 = GetStringCSF(v8, 0, g_Str_File_Options_CPP, 1265); /*0x5fc08b*/
            v10 = SendMessageA(hWnd, 0x4CDu, 0, (LPARAM)v9); /*0x5fc099*/
            if ( v10 != -1 ) /*0x5fc09e*/
              SendMessageA(hWnd, 0x19Au, v10, (LPARAM)v7); /*0x5fc0a8*/
          }
        }
        v11 = v7[3]; /*0x5fc0aa*/
        v7 += 3; /*0x5fc0ad*/
        --v6; /*0x5fc0b0*/
      }
      while ( v11 ); /*0x5fc0b3*/
    }
    v2 = this; /*0x5fc0b5*/
  }
  result = *v2->u32_28.__pad_0; /*0x5fc0b9*/
  if ( (int)result >= 0 ) /*0x5fc0be*/
  {
    v13 = result + 1; /*0x5fc0c0*/
    result = off_832C30[0]; /*0x5fc0c3*/
    for ( i = off_832C30; result; --v13 ) /*0x5fc0cf*/
    {
      if ( (int)v13 <= 0 ) /*0x5fc0d3*/
        break; /*0x5fc0d3*/
      if ( *i ) /*0x5fc0d5*/
      {
        v15 = (wchar_t *)i[1]; /*0x5fc0da*/
        if ( v15 ) /*0x5fc0df*/
        {
          v16 = GetStringCSF(v15, 0, g_Str_File_Options_CPP, 1265); /*0x5fc0ed*/
          v17 = SendMessageA(hWnd, 0x4CDu, 0, (LPARAM)v16); /*0x5fc0fb*/
          if ( v17 != -1 ) /*0x5fc100*/
            SendMessageA(hWnd, 0x19Au, v17, (LPARAM)i); /*0x5fc10a*/
        }
      }
      result = i[3]; /*0x5fc10c*/
      i += 3; /*0x5fc10f*/
    }
  }
  return result; /*0x5fc117*/
}
// 0x4c6210
int GameResult::CalcScore()
{

  signed int i; // esi
  double v3; // st7
  unsigned __int16 *v4; // eax
  unsigned __int16 *v5; // esi
  unsigned short *result; // eax
  void *v7; // ecx
  int *p_vfptr3; // eax
  double nextArrayIndex; // [esp+8h] [ebp-Ch]

  for ( i = 0; i < 50; ++i ) /*0x4c6217*/
    ScenarioClass::SetGlobalToByID((ScenarioClass *)dword_A8B230, i, this->__tail_0[i]); /*0x4c6224*/
  v3 = (double)this->u32_34 * *(double *)&dword_A8B230[202].uniqueId; /*0x4c6244*/
  if ( dword_A8B230[202].nextArrayIndex != -1 ) /*0x4c624a*/
  {
    nextArrayIndex = (double)dword_A8B230[202].nextArrayIndex; /*0x4c6250*/
    if ( v3 >= nextArrayIndex ) /*0x4c625d*/
      v3 = nextArrayIndex; /*0x4c6261*/
  }
  LOWORD(v4) = Math::RoundToInt(v3); /*0x4c6265*/
  v5 = v4; /*0x4c6270*/
  HouseClass::AddPower(*(HouseClass **)((char *)&stru_A83CD9.estimatedHealth + 3), (int)v4); /*0x4c6273*/
  *(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 476) += v5; /*0x4c6285*/
  HouseClass::SetCombatPower(*(int **)((char *)&stru_A83CD9.estimatedHealth + 3), this->u32_3C); /*0x4c6295*/
  result = dword_A8B230; /*0x4c629a*/
  if ( BYTE1(dword_A8B230[374].abstractFlags) ) /*0x4c629f*/
  {
    v7 = (void *)this->u32_38; /*0x4c62a9*/
    if ( (int)v7 <= 0 ) /*0x4c62ae*/
    {
      LOWORD(dword_A8B230[381].ptr_C) = this->u32_40; /*0x4c62fc*/
      return result; /*0x4c6307*/
    }
    p_vfptr3 = &dword_A8B230[127].ptr_C; /*0x4c62b6*/
    dword_A8B230[127].ptr_C = *(unsigned int *)&stru_A8E960.random[528]; /*0x4c62bb*/
    p_vfptr3[1] = HIDWORD(nextArrayIndex); /*0x4c62c1*/
    p_vfptr3[2] = (int)v7; /*0x4c62c4*/
    result = dword_A8B230; /*0x4c62c7*/
    if ( dword_A8B230[127].ptr_C == -1 ) /*0x4c62d3*/
    {
      dword_A8B230[127].ptr_C = *(unsigned int *)&stru_A8E960.random[528]; /*0x4c62db*/
      result = dword_A8B230; /*0x4c62e1*/
      LOWORD(dword_A8B230[381].ptr_C) = this->u32_40; /*0x4c62eb*/
      return result; /*0x4c62f6*/
    }
  }
  result->__pad_35A0 = this->u32_40; /*0x4c630d*/
  return result; /*0x4c62ea*/

}
// 0x60d540
void GameScreen::DlgProc(int a2, int a3, int a4, HWND hWnd, UINT Msg, WPARAM wParam, unsigned int a8)
{

  HWND Parent; // eax
  int v9; // edx
  int v10; // ebp
  int v11; // eax
  HWND result; // eax
  int v13; // ecx
  HWND v14; // ecx
  LRESULT v15; // esi
  LRESULT v16; // ecx
  HWND v17; // esi
  HWND v18; // eax
  int v19; // ecx
  char *v20; // ecx
  char *v21; // ecx
  LONG v22; // edx
  int v23; // ecx
  int v24; // esi
  LONG v25; // eax
  LONG v26; // ecx
  int v27; // eax
  int v28; // eax
  int v29; // edi
  __int16 *v30; // eax
  __int16 *v31; // esi
  __int16 v32; // cx
  bool v33; // zf
  int v34; // eax
  int v35; // eax
  int v36; // esi
  LONG v37; // ebp
  LONG v38; // esi
  HWND v39; // ecx
  LRESULT (*v40)(HWND, UINT, WPARAM, LPARAM); // ebx
  int v41; // eax
  unsigned int *v42; // eax
  LRESULT (**v43)(HWND, UINT, WPARAM, LPARAM); // eax
  LRESULT v44; // eax
  int v45; // eax
  unsigned int v46; // edx
  LONG v47; // edi
  int v48; // ebx
  char v49; // cl
  int v50; // eax
  Char *DeleteAndZero_field_0x08; // ebp
  int v52; // esi
  int v53; // eax
  unsigned short *v54; // edi
  bool v55; // cc
  HWND v56; // eax
  char *v57; // ecx
  char *v58; // ecx
  LRESULT v59; // esi
  HWND Capture; // esi
  HWND v61; // ecx
  HWND v62; // ecx
  LRESULT v63; // eax
  LPARAM v64; // esi
  HWND v65; // ebp
  HWND v66; // ebx
  wchar_t *v67; // eax
  HWND v68; // esi
  HWND v69; // ebp
  wchar_t *v70; // eax
  signed int v71; // ebx
  LRESULT v72; // esi
  LRESULT v73; // eax
  int v74; // eax
  int v75; // esi
  LONG v76; // ebx
  signed int v77; // esi
  LRESULT v78; // ebx
  LRESULT v79; // ecx
  int v80; // eax
  signed int v81; // eax
  int v82; // ecx
  unsigned __int16 v83; // si
  HWND v84; // ecx
  char *v85; // ecx
  HWND *v86; // esi
  LONG v87; // ebp
  LONG v88; // ebx
  HWND Window; // eax
  unsigned int *v90; // edx
  int DeleteAndZero_field_0x04; // ecx
  HWND *v92; // eax
  unsigned __int8 *v93; // eax
  unsigned int *v94; // ecx
  unsigned int v95; // ecx
  double v96; // st7
  int v97; // esi
  unsigned int *v98; // ecx
  int v99; // edi
  double v100; // st7
  unsigned int Dialog_field_0x8; // eax
  int *v102; // ebp
  int v103; // esi
  int *v104; // edi
  int v105; // ebp
  int v106; // esi
  int v107; // edx
  int v108; // ecx
  int v109; // eax
  unsigned int *v110; // eax
  int v111; // esi
  int *v112; // edi
  int v113; // ebp
  int v114; // esi
  int v115; // edx
  int v116; // ecx
  int v117; // eax
  unsigned int *v118; // eax
  unsigned int *v119; // eax
  int v120; // ebx
  unsigned int *v121; // ebp
  int v122; // eax
  int v123; // edx
  unsigned int *v124; // ebp
  int v125; // edi
  int v126; // ebp
  unsigned int *i; // eax
  DeleteAndZero *v128; // ecx
  double v129; // st7
  int *v130; // ebp
  int v131; // esi
  int *v132; // edi
  int v133; // ebx
  int v134; // esi
  int v135; // eax
  int v136; // edx
  int v137; // eax
  char *v138; // ebx
  int v139; // edx
  unsigned int *v140; // ecx
  unsigned int *v141; // edx
  unsigned int *v142; // eax
  void *v143; // esi
  double v144; // st7
  int v145; // esi
  unsigned int *v146; // ecx
  int v147; // edi
  double v148; // st7
  unsigned int v149; // eax
  int *v150; // ebp
  int v151; // esi
  int *v152; // edi
  int v153; // ebp
  int v154; // esi
  int v155; // edx
  int v156; // ecx
  int v157; // eax
  unsigned int *v158; // eax
  unsigned int v159; // eax
  int v160; // esi
  int *v161; // edi
  int v162; // ebp
  int v163; // esi
  int v164; // edx
  int v165; // ecx
  int v166; // eax
  void *WindowLongA; // eax
  unsigned int *v168; // eax
  int v169; // esi
  signed int v170; // ebx
  int v171; // ecx
  LRESULT v172; // esi
  LRESULT v173; // ecx
  HWND v174; // eax
  HWND v175; // ecx
  HWND v176; // [esp+18h] [ebp-39Ch]
  wchar_t *v177; // [esp+24h] [ebp-390h]
  DeleteAndZero dy; // [esp+38h] [ebp-37Ch] BYREF
  HWND hDlg; // [esp+44h] [ebp-370h] BYREF
  LPARAM Y[2]; // [esp+48h] [ebp-36Ch] BYREF
  DeleteAndZero v184; // [esp+50h] [ebp-364h] BYREF
  int v185; // [esp+5Ch] [ebp-358h]
  HWND DlgItem; // [esp+60h] [ebp-354h]
  struct tagRECT Rect; // [esp+64h] [ebp-350h] BYREF
  int v188; // [esp+74h] [ebp-340h]
  const wchar_t *v189; // [esp+78h] [ebp-33Ch] BYREF
  struct tagRECT v190; // [esp+7Ch] [ebp-338h] BYREF
  LONG v191; // [esp+8Ch] [ebp-328h]
  struct tagRECT v192; // [esp+90h] [ebp-324h] BYREF
  int v193; // [esp+A0h] [ebp-314h]
  int v194; // [esp+A4h] [ebp-310h] BYREF
  int v195; // [esp+A8h] [ebp-30Ch]
  LONG v196; // [esp+ACh] [ebp-308h]
  LONG v197; // [esp+B0h] [ebp-304h]
  RECT v198; // [esp+B4h] [ebp-300h] BYREF
  int v199[4]; // [esp+C4h] [ebp-2F0h] BYREF
  struct tagRECT v200; // [esp+D4h] [ebp-2E0h] BYREF
  struct tagRECT lParam; // [esp+E4h] [ebp-2D0h] BYREF
  int v202; // [esp+F8h] [ebp-2BCh]
  int v203; // [esp+100h] [ebp-2B4h]
  struct tagRECT v204; // [esp+104h] [ebp-2B0h] BYREF
  LPARAM v205[4]; // [esp+114h] [ebp-2A0h] BYREF
  LONG v206; // [esp+124h] [ebp-290h] BYREF
  LONG left; // [esp+128h] [ebp-28Ch]
  LONG top; // [esp+12Ch] [ebp-288h]
  LONG v209; // [esp+130h] [ebp-284h]
  LONG v210; // [esp+140h] [ebp-274h] BYREF
  LONG v211; // [esp+144h] [ebp-270h]
  LONG right; // [esp+148h] [ebp-26Ch]
  LONG bottom; // [esp+14Ch] [ebp-268h]
  unsigned char v214[512]; // [esp+150h] [ebp-264h] BYREF
  char Buffer[100]; // [esp+350h] [ebp-64h] BYREF

  if ( (stru_AC1B48.__pad_40[20] & 1) == 0 ) /*0x60d54d*/
  {
    stru_AC1B48.__pad_40[20] |= 1u; /*0x60d559*/
    dword_AC18A0 = (int)CreateSolidBrush(0x306030u); /*0x60d565*/
  }
  ScreenDialogToClient((HWND)this, &v200); /*0x60d57c*/
  GetClientRect((HWND)this, &Rect); /*0x60d58e*/
  memset(&v204, 0, sizeof(v204)); /*0x60d59b*/
  v184.DeleteAndZero_field_0x04 = 2 * *(unsigned int *)&stru_AC1B48.__pad_208[160] + 18; /*0x60d5af*/
  Parent = 0; /*0x60d5c0*/
  dy.DeleteAndZero_field_0x08 = -1; /*0x60d5cb*/
  DlgItem = 0; /*0x60d5d3*/
  hDlg = 0; /*0x60d5d7*/
  if ( g_GameScreenManager ) /*0x60d5db*/
  {
    Parent = GetParent(g_GameScreenManager); /*0x60d5de*/
    hDlg = Parent; /*0x60d5e4*/
  }
  v185 = 0; /*0x60d5ea*/
  if ( Parent ) /*0x60d5ee*/
  {
    if ( dword_AC1B04 ) /*0x60d5f6*/
    {
      v9 = *(unsigned int *)(*(unsigned int *)dword_AC1B00.__pad_0 + 4 * (dword_AC1B18(&hDlg) & ((1 << dword_AC1B0C) - 1))); /*0x60d617*/
      Parent = hDlg; /*0x60d61a*/
      if ( v9 ) /*0x60d620*/
      {
        while ( *(HWND *)v9 != hDlg ) /*0x60d624*/
        {
          v9 = *(unsigned int *)(v9 + 516); /*0x60d626*/
          if ( !v9 ) /*0x60d62e*/
            goto LABEL_12; /*0x60d62e*/
        }
        v185 = v9 + 4; /*0x60d639*/
      }
    }
LABEL_12:
    ScreenDialogToClient(Parent, &v204); /*0x60d63d*/
    Parent = hDlg; /*0x60d64b*/
  }
  dword_AC48C4 = (int)Parent; /*0x60d656*/
  v10 = 0; /*0x60d660*/
  dword_AC48C0 = (HWND)this; /*0x60d664*/
  v184.DeleteAndZero_field_0x08 = 0; /*0x60d66a*/
  if ( !dword_AC1B04 ) /*0x60d66e*/
    goto LABEL_19; /*0x60d66e*/
  v11 = *(unsigned int *)(*(unsigned int *)dword_AC1B00.__pad_0 + 4 * (dword_AC1B18(&this) & ((1 << dword_AC1B0C) - 1))); /*0x60d692*/
  if ( !v11 ) /*0x60d697*/
    goto LABEL_19; /*0x60d697*/
  while ( *(GameScreen **)v11 != this ) /*0x60d6a2*/
  {
    v11 = *(unsigned int *)(v11 + 516); /*0x60d6a4*/
    if ( !v11 ) /*0x60d6ac*/
      goto LABEL_19; /*0x60d6ac*/
  }
  v10 = v11 + 4; /*0x60d6b4*/
  v184.DeleteAndZero_field_0x08 = v11 + 4; /*0x60d6b9*/
  if ( v11 == -4 ) /*0x60d6bd*/
LABEL_19:
    Debug::Log(); /*0x60d6bf*/
  result = g_GameScreenManager; /*0x60d6cc*/
  *(unsigned int *)dy.__pad_0 = 0; /*0x60d6d1*/
  if ( g_GameScreenManager ) /*0x60d6d7*/
  {
    if ( dword_AC1B04 ) /*0x60d6df*/
    {
      v13 = *(unsigned int *)(*(unsigned int *)dword_AC1B00.__pad_0 /*0x60d701*/
                      + 4 * (dword_AC1B18(&g_GameScreenManager) & ((1 << dword_AC1B0C) - 1)));
      result = g_GameScreenManager; /*0x60d704*/
      if ( v13 ) /*0x60d70b*/
      {
        while ( *(HWND *)v13 != g_GameScreenManager ) /*0x60d70f*/
        {
          v13 = *(unsigned int *)(v13 + 516); /*0x60d711*/
          if ( !v13 ) /*0x60d719*/
            goto LABEL_27; /*0x60d719*/
        }
        *(unsigned int *)dy.__pad_0 = v13 + 4; /*0x60d724*/
      }
    }
  }
LABEL_27:
  v14 = hWnd; /*0x60d728*/
  if ( hWnd != (HWND)326 && hWnd != (HWND)340 && hWnd != (HWND)277 ) /*0x60d753*/
  {
    v15 = SendMessageA(result, 0x146u, 0, 0); /*0x60d771*/
    v16 = SendMessageA(g_GameScreenManager, 0x154u, 0, 0); /*0x60d775*/
    if ( v16 <= 1 ) /*0x60d77a*/
      v16 = 1; /*0x60d77c*/
    dy.DeleteAndZero_field_0x08 = v15 * v16 > Rect.bottom - Rect.top; /*0x60d79a*/
    v17 = (HWND)(v15 - (Rect.bottom - Rect.top) / v16); /*0x60d7a0*/
    DlgItem = v17; /*0x60d7a4*/
    if ( v10 ) /*0x60d7a8*/
    {
      v18 = *(HWND *)(v10 + 12); /*0x60d7aa*/
      if ( (unsigned int)v18 > 1 ) /*0x60d7b0*/
      {
        v19 = *(unsigned int *)(v10 + 240); /*0x60d7b2*/
        lParam.top = 5; /*0x60d7c7*/
        lParam.right = 0; /*0x60d7d2*/
        lParam.bottom = (LONG)v17; /*0x60d7d9*/
        v202 = v19; /*0x60d7e0*/
        lParam.left = 28; /*0x60d7e7*/
        SendMessageA(v18, 0xE9u, 0, (LPARAM)&lParam); /*0x60d7f2*/
      }
      if ( *(unsigned int *)(v10 + 12) ) /*0x60d7f4*/
        BringWindowToTop(*(HWND *)(v10 + 12)); /*0x60d7fc*/
    }
    result = g_GameScreenManager; /*0x60d802*/
    v14 = hWnd; /*0x60d807*/
  }
  if ( (unsigned int)v14 <= 0x15B ) /*0x60d814*/
  {
    if ( v14 == (HWND)347 ) /*0x60d81a*/
    {
      if ( v10 ) /*0x60e217*/
        return *(HWND *)(v10 + 240); /*0x60e22d*/
    }
    else if ( (unsigned int)v14 > 0x14 ) /*0x60d823*/
    {
      v57 = (char *)v14 - 130; /*0x60e15e*/
      if ( v57 ) /*0x60e164*/
      {
        v58 = v57 - 145; /*0x60e16a*/
        if ( v58 ) /*0x60e170*/
        {
          if ( v58 == 2 ) /*0x60e175*/
          {
            v59 = SendMessageA(*(HWND *)(v10 + 12), 0xE1u, 0, 0); /*0x60e18a*/
            if ( v59 != SendMessageA((HWND)this, 0x15Bu, 0, 0) ) /*0x60e1a1*/
              SendMessageA((HWND)this, 0x15Cu, v59, 0); /*0x60e1b7*/
          }
        }
        else
        {
          Capture = GetCapture(); /*0x60e1c4*/
          if ( Capture == (HWND)this ) /*0x60e1cf*/
          {
            ReleaseCapture(); /*0x60e1d5*/
            Sleep(0); /*0x60e1dd*/
            SetCapture(Capture); /*0x60e1e4*/
          }
        }
      }
      else
      {
        dword_AC48C0 = 0; /*0x60e1ef*/
        dword_AC48C4 = 0; /*0x60e1f5*/
        ReleaseCapture(); /*0x60e1fb*/
        KillTimer((HWND)this, 0); /*0x60e20a*/
      }
    }
    else
    {
      if ( v14 == (HWND)20 ) /*0x60d829*/
        return 0; /*0x60e0d5*/
      v20 = (char *)v14 - 1; /*0x60d82f*/
      if ( !v20 ) /*0x60d830*/
      {
        SetCapture((HWND)this); /*0x60e0f1*/
        g_GameScreenManager = *(HWND *)wParam; /*0x60e101*/
        v56 = GetParent(g_GameScreenManager); /*0x60e106*/
        sprintf(Buffer, "Dropd=%p  Master=%p  Dlg=%p", this, g_GameScreenManager, v56); /*0x60e128*/
        Debug::Log(); /*0x60e135*/
        SetTimer((HWND)this, 0, 0x14u, 0); /*0x60e149*/
        return 0; /*0x60e15b*/
      }
      v21 = v20 - 1; /*0x60d836*/
      if ( v21 ) /*0x60d837*/
      {
        if ( v21 == 13 ) /*0x60d840*/
        {
          Y[0] = *(unsigned int *)(v185 + 100); /*0x60d857*/
          DlgItem = (HWND)SendMessageA(result, 0x146u, 0, 0); /*0x60d85f*/
          v184.DeleteAndZero_field_0x08 = SendMessageA(g_GameScreenManager, 0x154u, 0, 0); /*0x60d874*/
          v203 = Rect.bottom - Rect.top; /*0x60d895*/
          v190.bottom = Rect.bottom - Rect.top; /*0x60d89c*/
          v193 = *(unsigned int *)(v10 + 232); /*0x60d8a6*/
          v190.left = v200.left; /*0x60d8b1*/
          v22 = v200.right - v200.left; /*0x60d8b5*/
          v190.top = v200.top; /*0x60d8c0*/
          v211 = v200.top - v204.top; /*0x60d8c6*/
          v23 = *(unsigned int *)(v10 + 16); /*0x60d8cd*/
          v210 = v200.left - v204.left; /*0x60d8d0*/
          v190.right = v200.right - v200.left; /*0x60d8dd*/
          right = Rect.right; /*0x60d8e1*/
          bottom = Rect.bottom; /*0x60d8e8*/
          if ( !v23 ) /*0x60d8ef*/
          {
            v194 = 0; /*0x60d8f7*/
            v195 = 0; /*0x60d8fe*/
            v196 = Rect.right; /*0x60d905*/
            v197 = Rect.bottom; /*0x60d90c*/
            v24 = __2_YAPAXI_Z(0x20u); /*0x60d918*/
            if ( v24 ) /*0x60d91f*/
            {
              v25 = Rect.right; /*0x60d921*/
              v26 = Rect.bottom; /*0x60d925*/
              *(unsigned int *)(v24 + 4) = Rect.right; /*0x60d929*/
              *(unsigned int *)(v24 + 8) = v26; /*0x60d931*/
              *(unsigned int *)(v24 + 12) = 0; /*0x60d939*/
              /* X11: ptr_0 install elided (X67 star-deref, RHS XSurface_Vtable) */  /*0x60d93c*/
              *(unsigned int *)(v24 + 16) = 2; /*0x60d942*/
              Buffer::Init((Buffer *)(v24 + 20), 0, 2 * v26 * v25); /*0x60d949*/
              /* X11: ptr_0 install elided (X67 star-deref, RHS BSurface_Vtable) */  /*0x60d94e*/
            }
            else
            {
              v24 = 0; /*0x60d956*/
            }
            v27 = v185; /*0x60d958*/
            *(unsigned int *)(v10 + 16) = v24; /*0x60d95c*/
            v191 = v24; /*0x60d965*/
            ++g_GameScreenState; /*0x60d96c*/
            if ( v27 ) /*0x60d972*/
            {
              v28 = *(unsigned int *)(v27 + 16); /*0x60d974*/
              if ( v28 ) /*0x60d979*/
                (*(void (**)(int, int *, int, LONG *, unsigned int, int))(*(unsigned int *)v24 + 8))( /*0x60d993*/
                  v24,
                  &v194,
                  v28,
                  &v210,
                  0,
                  1);
            }
            v29 = Rect.bottom * Rect.right; /*0x60d99c*/
            v30 = (__int16 *)(*(int (**)(int, unsigned int, unsigned int))(*(unsigned int *)v24 + 92))(v24, 0, 0); /*0x60d9a9*/
            if ( v29 > 0 ) /*0x60d9ae*/
            {
              v31 = v30; /*0x60d9b4*/
              v188 = v29; /*0x60d9b6*/
              do /*0x60da40*/
              {
                v32 = *v31; /*0x60d9c0*/
                (v185) = ((v185) & ~0xFF) | ((*(unsigned char *)(v10 + 200)) & 0xFF); /*0x60d9c3*/
                g_GameScreenFlags = (unsigned __int8)v185; /*0x60d9de*/
                g_GameScreenConfig = 255 - (unsigned __int8)v185; /*0x60d9ed*/
                ++v31; /*0x60d9f5*/
                v34 = v188 - 1; /*0x60da37*/
                v33 = v188 == 1; /*0x60da37*/
                *(v31 - 1) = ((g_GameScreenConfig * (unsigned int)(unsigned __int16)(v32 & g_CreditsScreenState)) >> 8) /*0x60da38*/
                           | g_ScreenSaverState
                           & ((g_GameScreenConfig * (unsigned int)(unsigned __int16)(v32 & g_ScreenSaverState)) >> 8)
                           | HIWORD(g_ScreenSaverState)
                           & ((g_GameScreenConfig * (unsigned int)(unsigned __int16)(v32 & HIWORD(g_ScreenSaverState))) >> 8);
                v188 = v34; /*0x60da3c*/
              }
              while ( !v33 ); /*0x60da40*/
              v24 = v191; /*0x60da46*/
            }
            (*(void (**)(int))(*(unsigned int *)v24 + 96))(v24); /*0x60da4e*/
            v22 = v190.right; /*0x60da51*/
          }
          v35 = *(unsigned int *)(v10 + 16); /*0x60da66*/
          v197 = v190.bottom; /*0x60da69*/
          v194 = 0; /*0x60da77*/
          v195 = 0; /*0x60da7e*/
          v196 = v22; /*0x60da85*/
          (*(void (**)(DSurface *, struct tagRECT *, int, int *, unsigned int, int, int, int, int))(DSurface_Alternate->DSurface_field_0x0 + 8))( /*0x60da93*/
            DSurface_Alternate,
            &v190,
            v35,
            &v194,
            0,
            1,
            a3,
            a4,
            a2);
          top = v192.top; /*0x60daa8*/
          v206 = v191; /*0x60dab4*/
          left = v192.left; /*0x60dac2*/
          v209 = v192.right; /*0x60dac9*/
          if ( dword_AC4624 == -1 ) /*0x60dad0*/
            v36 = -1; /*0x60dad2*/
          else
            v36 = ((int)(unsigned __int8)dword_AC4624 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x60db1a*/
                | ((((dword_AC4624) >> 8) & 0xFF) >> g_BitMask_Blue << g_BitMask_Green)
                | ((((dword_AC4624) >> 16) & 0xFF) >> g_BitMask_Red << g_BitShift_Blue);
          if ( Y[0] && *(unsigned char *)(Y[0] + 205) ) /*0x60db24*/
          {
            if ( *(unsigned int *)&stru_AC1B48.__pad_208[136] == -1 ) /*0x60db36*/
              v36 = -1; /*0x60db38*/
            else
              v36 = ((int)(unsigned __int8)stru_AC1B48.__pad_208[136] >> g_BitShift_Green_0 << g_BitShift_Red) /*0x60db7f*/
                  | ((unsigned __int8)stru_AC1B48.__pad_208[137] >> g_BitMask_Blue << g_BitMask_Green)
                  | ((unsigned __int8)stru_AC1B48.__pad_208[138] >> g_BitMask_Red << g_BitShift_Blue);
          }
          DrawDialogGradient(&DSurface_Alternate->DSurface_field_0x0, &v206, 2, v36); /*0x60db91*/
          if ( *(unsigned int *)v184.owningHouseIndex && v10 && *(unsigned int *)(v10 + 12) ) /*0x60dba0*/
          {
            v200.left = v191; /*0x60dbb1*/
            v200.top = v192.left; /*0x60dbbc*/
            v200.bottom = v192.right; /*0x60dbce*/
            v200.right = Rect.left + v192.top; /*0x60dbe7*/
            DrawDialogGradient(&DSurface_Alternate->DSurface_field_0x0, &v200.left, 2, v36); /*0x60dbee*/
          }
          v37 = *(unsigned int *)(v10 + 240); /*0x60dbf3*/
          Rect.left = v37; /*0x60dbff*/
          if ( v37 < Rect.bottom ) /*0x60dc03*/
          {
            v192.bottom = Rect.top * v37; /*0x60dc14*/
            Rect.right = Rect.top * v37; /*0x60dc18*/
            v190.right = Y[0] + 4 * v37 + 272; /*0x60dc23*/
            while ( 1 ) /*0x60dc44*/
            {
              v200.left = lParam.left; /*0x60dc44*/
              v38 = lParam.right - lParam.left; /*0x60dc4b*/
              v200.top = lParam.top + Rect.right - v192.bottom; /*0x60dc53*/
              if ( Rect.top + Rect.right - v192.bottom > v204.bottom ) /*0x60dc6d*/
                goto LABEL_111; /*0x60dc6d*/
              v39 = g_GameScreenManager; /*0x60dc78*/
              v40 = 0; /*0x60dc80*/
              *(unsigned int *)v184.owningHouseIndex = g_GameScreenManager; /*0x60dc84*/
              if ( *(unsigned int *)&stru_AC1B48.__pad_0[4] ) /*0x60dc88*/
              {
                v41 = (*(int (**)(DeleteAndZero *))&stru_AC1B48.__pad_10[8])(&v184); /*0x60dc8e*/
                v39 = *(HWND *)v184.owningHouseIndex; /*0x60dca1*/
                v42 = *(unsigned int **)(*(unsigned int *)stru_AC1B48.__pad_0 /*0x60dcad*/
                                 + 4 * (v41 & ((1 << SLOBYTE(stru_AC1B48.q00C)) - 1)));
                if ( v42 ) /*0x60dcb2*/
                {
                  while ( *v42 != *(unsigned int *)v184.owningHouseIndex ) /*0x60dcb6*/
                  {
                    v42 = v42->ptr_8; /*0x60dcb8*/
                    if ( !v42 ) /*0x60dcbd*/
                      goto LABEL_79; /*0x60dcbd*/
                  }
                  v43 = (LRESULT (**)(HWND, UINT, WPARAM, LPARAM))(v42 + 1); /*0x60dcc5*/
                  if ( v43 ) /*0x60dcca*/
                    v40 = *v43; /*0x60dccc*/
                }
              }
LABEL_79:
              *(unsigned short *)&v214[16] = 0; /*0x60dcce*/
              v44 = CallWindowProcA(v40, v39, 0x199u, Rect.left, 0); /*0x60dce9*/
              if ( v44 == -1 || !v44 ) /*0x60dcf2*/
                v44 = CallWindowProcA(v40, *(HWND *)v184.owningHouseIndex, 0x150u, Rect.left, 0); /*0x60dd05*/
              if ( v44 != -1 && v44 ) /*0x60dd0e*/
              {
                wcsncpy((wchar_t *)&v214[16], *(const wchar_t **)(v44 + 8), 0x80u); /*0x60dd21*/
                *(unsigned short *)&v214[270] = 0; /*0x60dd2d*/
                wcslen((const wchar_t *)&v214[16]); /*0x60dd36*/
              }
              if ( Rect.left == v197 ) /*0x60dd48*/
                break; /*0x60dd48*/
LABEL_94:
              v47 = Rect.top; /*0x60de0d*/
              v48 = dword_AC18A4; /*0x60de1f*/
              v199[2] = v38 + v200.left; /*0x60de2a*/
              v199[1] = v200.top; /*0x60de35*/
              v199[0] = v200.left + 3; /*0x60de40*/
              v199[3] = Rect.top + v200.top; /*0x60de47*/
              if ( Y[0] && *(unsigned char *)(Y[0] + 205) ) /*0x60de50*/
                v48 = *(unsigned int *)&stru_AC1B48.__pad_40[296]; /*0x60de5a*/
              if ( Rect.left < 50 ) /*0x60de65*/
              {
                if ( Y[0] ) /*0x60de6d*/
                {
                  if ( *(int *)v190.right >= 0 ) /*0x60de7b*/
                  {
                    v48 = *(unsigned int *)v190.right; /*0x60de81*/
                    v49 = *(unsigned char *)(Y[0] + 204); /*0x60de83*/
                    *(unsigned int *)v184.owningHouseIndex = *(unsigned int *)v190.right; /*0x60de8b*/
                    if ( v49 ) /*0x60de8f*/
                    {
                      v198.left = v200.left; /*0x60dea3*/
                      v198.top = v200.top; /*0x60deb0*/
                      v198.right = v38; /*0x60deb7*/
                      v198.bottom = Rect.top; /*0x60debe*/
                      Rect::Inflate(*(LPRECT *)dy.__pad_0, dy.DeleteAndZero_field_0x04, dy.DeleteAndZero_field_0x08); /*0x60dec5*/
                      if ( v48 == -1 ) /*0x60decd*/
                        v50 = -1; /*0x60decf*/
                      else
                        v50 = ((int)(unsigned __int8)v48 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x60df17*/
                            | ((((v48) >> 8) & 0xFF) >> g_BitMask_Blue << g_BitMask_Green)
                            | ((unsigned __int8)v184.__pad_0[2] >> g_BitMask_Red << g_BitShift_Blue);
                      (*(void (**)(DSurface *, RECT *, int))(DSurface_Alternate->DSurface_field_0x0 + 20))( /*0x60df2a*/
                        DSurface_Alternate,
                        &v198,
                        v50);
                    }
                  }
                }
              }
              *(unsigned int *)v184.owningHouseIndex = v190.left - 20; /*0x60df3c*/
              DeleteAndZero_field_0x08 = (Char *)v184.DeleteAndZero_field_0x08; /*0x60df45*/
              v52 = wcslen((const wchar_t *)&v214[16]); /*0x60df4c*/
              v53 = Text::MeasureWidth((int)&v214[16], 0); /*0x60df5a*/
              if ( v52 ) /*0x60df61*/
              {
                v54 = &v214[2 * v52 + 16]; /*0x60df63*/
                do /*0x60dfa1*/
                {
                  if ( v53 <= *(int *)v184.owningHouseIndex ) /*0x60df6e*/
                    break; /*0x60df6e*/
                  --v54; /*0x60df70*/
                  --v52; /*0x60df80*/
                  *v54 = 0; /*0x60df81*/
                  wcscat((wchar_t *)&v214[16], L"..."); /*0x60df86*/
                  v53 = Text::MeasureWidth((int)&v214[16], 0); /*0x60df9a*/
                }
                while ( v52 ); /*0x60dfa1*/
                v47 = Rect.top; /*0x60dfa3*/
              }
              PrintFontLayout( /*0x60dfc8*/
                (int)DSurface_Alternate,
                (unsigned __int16 *)&v214[16],
                v199,
                DeleteAndZero_field_0x08,
                v48,
                4,
                12,
                0,
                0,
                0);
              v55 = ++Rect.left < Rect.bottom; /*0x60dfe3*/
              Rect.right += v47; /*0x60dfe9*/
              v190.right += 4; /*0x60dfed*/
              if ( !v55 ) /*0x60dff1*/
                goto LABEL_111; /*0x60dff1*/
            }
            v210 = v200.left; /*0x60dd60*/
            v211 = v200.top; /*0x60dd6b*/
            right = v38; /*0x60dd74*/
            bottom = Rect.top; /*0x60dd7b*/
            if ( Y[0] && *(unsigned char *)(Y[0] + 205) ) /*0x60dd84*/
            {
              v45 = dword_AC4880; /*0x60dd8e*/
              if ( dword_AC4880 != -1 ) /*0x60dd96*/
              {
                v46 = (((dword_AC4880) >> 16) & 0xFF); /*0x60dd9e*/
LABEL_92:
                v45 = ((((v45) >> 8) & 0xFF) >> g_BitMask_Blue << g_BitMask_Green) /*0x60ddbc*/
                    | (v46 >> g_BitMask_Red << g_BitShift_Blue)
                    | ((int)(unsigned __int8)v45 >> g_BitShift_Green_0 << g_BitShift_Red);
              }
            }
            else
            {
              v45 = dword_AC4604; /*0x60dda6*/
              if ( dword_AC4604 != -1 ) /*0x60ddae*/
              {
                v46 = (((dword_AC4604) >> 16) & 0xFF); /*0x60ddb6*/
                goto LABEL_92; /*0x60ddb6*/
              }
            }
            (*(void (**)(DSurface *, LONG *, int))(DSurface_Alternate->DSurface_field_0x0 + 20))( /*0x60ddf9*/
              DSurface_Alternate,
              &v210,
              v45);
            goto LABEL_94; /*0x60de0a*/
          }
LABEL_111:
          (*(void (**)(DSurface *, unsigned int, unsigned int))(DSurface_Alternate->DSurface_field_0x0 + 92))( /*0x60dff7*/
            DSurface_Alternate,
            0,
            0);
          (*(void (**)(DSurface *, unsigned int, unsigned int))(g_DSurface_Primary->DSurface_field_0x0 + 92))( /*0x60e016*/
            g_DSurface_Primary,
            0,
            0);
          v192 = v190; /*0x60e025*/
          GetWindowRect((HWND)this, &lParam); /*0x60e049*/
          v192.left += lParam.left - v200.left; /*0x60e091*/
          v192.top += lParam.top - v200.top; /*0x60e095*/
          (*(void (**)(DSurface *, struct tagRECT *, DSurface *, struct tagRECT *, unsigned int, int))(g_DSurface_Primary->DSurface_field_0x0 + 8))( /*0x60e0a0*/
            g_DSurface_Primary,
            &v192,
            DSurface_Alternate,
            &v190,
            0,
            1);
          (*(void (**)(DSurface *))(g_DSurface_Primary->DSurface_field_0x0 + 96))(g_DSurface_Primary); /*0x60e0ab*/
          (*(void (**)(DSurface *))(DSurface_Alternate->DSurface_field_0x0 + 96))(DSurface_Alternate); /*0x60e0b6*/
          ValidateRect((HWND)this, 0); /*0x60e0c3*/
          return 0; /*0x60e0c3*/
        }
      }
      else
      {
        Object::RemoveObjectArray((Object *)this); /*0x60e0df*/
      }
    }
    goto LABEL_172; /*0x60d840*/
  }
  if ( (unsigned int)v14 > 0x203 )
  {
    v84 = v14 - 314; /*0x60e627*/
    if ( v84 )
    {
      v85 = (char *)v84 - 2; /*0x60e633*/
      if ( !v85 ) /*0x60e636*/
        return result; /*0x60e636*/
      if ( v85 != 766 ) /*0x60e642*/
      {
LABEL_172:
        if ( dy.DeleteAndZero_field_0x08 == 1 ) /*0x60e64f*/
        {
          if ( v10 ) /*0x60e657*/
          {
            v86 = (HWND *)(v10 + 12); /*0x60e660*/
            if ( !*(unsigned int *)(v10 + 12) ) /*0x60e65d*/
            {
              *v86 = (HWND)1; /*0x60e66b*/
              GetWindowLongA((HWND)this, -12); /*0x60e67b*/
              hDlg = GetParent((HWND)this); /*0x60e698*/
              ScreenDialogToClient(hDlg, &lParam); /*0x60e69c*/
              ScreenDialogToClient((HWND)this, &v192); /*0x60e6ac*/
              v87 = v192.left - lParam.left; /*0x60e6cb*/
              v88 = v192.top - lParam.top; /*0x60e6d1*/
              LOBYTE(v189) = 0; /*0x60e6d5*/
              Y[0] = v192.top - lParam.top + Rect.top; /*0x60e6e9*/
              if ( *(unsigned int *)dy.__pad_0 ) /*0x60e6f9*/
                LOBYTE(v189) = *(unsigned char *)(*(unsigned int *)dy.__pad_0 + 205); /*0x60e701*/
              Window = CreateWindowExA( /*0x60e72f*/
                         0,
                         ClassName,
                         0,
                         0x50010001u,
                         Rect.right + v192.left - lParam.left - v184.DeleteAndZero_field_0x04,
                         Y[0],
                         v184.DeleteAndZero_field_0x04,
                         v192.bottom - v192.top,
                         hDlg,
                         0,
                         g_hInstance,
                         0);
              v90 = (unsigned int *)v184.DeleteAndZero_field_0x08; /*0x60e738*/
              DeleteAndZero_field_0x04 = v184.DeleteAndZero_field_0x04; /*0x60e73c*/
              *v86 = Window; /*0x60e740*/
              v90[1] = DeleteAndZero_field_0x04; /*0x60e742*/
              Dialog::InitializeControls(Window, 0); /*0x60e745*/
              dy.DeleteAndZero_field_0x04 = 0; /*0x60e751*/
              if ( dword_AC1B04 ) /*0x60e759*/
              {
                v92 = *(HWND **)(*(unsigned int *)dword_AC1B00.__pad_0 + 4 * (dword_AC1B18(v86) & ((1 << dword_AC1B0C) - 1))); /*0x60e778*/
                if ( v92 ) /*0x60e77d*/
                {
                  while ( *v92 != *v86 ) /*0x60e783*/
                  {
                    v92 = v92->HWND_204; /*0x60e785*/
                    if ( !v92 ) /*0x60e78d*/
                      goto LABEL_183; /*0x60e78d*/
                  }
                  dy.DeleteAndZero_field_0x04 = (int)(v92 + 1); /*0x60e798*/
                }
              }
LABEL_183:
              v93 = (unsigned __int8 *)dy.DeleteAndZero_field_0x04; /*0x60e79c*/
              *(unsigned int *)(dy.DeleteAndZero_field_0x04 + 8) = this; /*0x60e7a7*/
              v94 = (unsigned int *)v184.DeleteAndZero_field_0x08; /*0x60e7aa*/
              v93[205] = *(unsigned char *)(v184.DeleteAndZero_field_0x08 + 205); /*0x60e7b4*/
              v95 = v94[60]; /*0x60e7be*/
              v205[3] = (LPARAM)DlgItem; /*0x60e7cb*/
              v176 = *v86; /*0x60e7dc*/
              v205[1] = 5; /*0x60e7dd*/
              v205[2] = 0; /*0x60e7e8*/
              left = v95; /*0x60e7f3*/
              v205[0] = 28; /*0x60e7fa*/
              SendMessageA(v176, 0xE9u, 0, (LPARAM)v205); /*0x60e805*/
              SendMessageA(*v86, 0x4F1u, 0, (unsigned __int8)v189); /*0x60e81c*/
              SetWindowPos( /*0x60e84a*/
                (HWND)this,
                0,
                0,
                0,
                v192.right - v192.left - v184.DeleteAndZero_field_0x04,
                v192.bottom - v192.top,
                2u);
              ShowWindow(*v86, 5); /*0x60e855*/
              BringWindowToTop(*v86); /*0x60e85e*/
              InvalidateRect(*v86, 0, 0); /*0x60e86b*/
              UpdateWindow(*v86); /*0x60e874*/
              SendMessageA(*v86, 0x4A9u, (WPARAM)*v86, 1); /*0x60e885*/
              SendMessageA(*v86, 0x4D2u, 0, 1); /*0x60e893*/
              v198.left = v87; /*0x60e895*/
              v198.top = v88; /*0x60e89c*/
              v198.right = Rect.right + v87 + 1; /*0x60e8b3*/
              v198.bottom = v88 + Rect.bottom + 1; /*0x60e8ba*/
              ValidateRect(hDlg, &v198); /*0x60e8ce*/
            }
          }
          return (HWND)DefWindowProcA((HWND)this, (UINT)hWnd, Msg, wParam); /*0x60e8ce*/
        }
        if ( dy.DeleteAndZero_field_0x08 || !v10 || !*(unsigned int *)(v10 + 12) || *(unsigned int *)(v10 + 32) ) /*0x60e8ee*/
          return (HWND)DefWindowProcA((HWND)this, (UINT)hWnd, Msg, wParam); /*0x60f273*/
        DestroyWindow(*(HWND *)(v10 + 12)); /*0x60e8fa*/
        *(unsigned int *)dy.__pad_0 = *(unsigned int *)(v10 + 12); /*0x60e90a*/
        if ( *(unsigned int *)&stru_AC1B48.__pad_0[4] ) /*0x60e910*/
        {
          *(unsigned long long *)Y = (unsigned int)(*(unsigned int *)&stru_AC1B48.__pad_0[4] - 1); /*0x60e91b*/
          v96 = (double)*(__int64 *)Y; /*0x60e924*/
          Y[0] = stru_AC1B48.u32_8; /*0x60e928*/
          *(float *)&dy.DeleteAndZero_field_0x04 = v96 / (double)stru_AC1B48.u32_8; /*0x60e938*/
          v97 = (*(int (**)(DeleteAndZero *))&stru_AC1B48.__pad_10[8])(&dy) /*0x60e956*/
              & ((1 << SLOBYTE(stru_AC1B48.q00C)) - 1);
          v98 = *(unsigned int **)(*(unsigned int *)stru_AC1B48.__pad_0 + 4 * v97); /*0x60e958*/
          if ( v98 ) /*0x60e95d*/
          {
            if ( *v98 == *(unsigned int *)dy.__pad_0 ) /*0x60e96b*/
            {
              v99 = v98->ptr_8; /*0x60e971*/
              __3_YAXPAX_Z(*(void **)(*(unsigned int *)stru_AC1B48.__pad_0 + 4 * v97)); /*0x60e975*/
              v100 = *(float *)&dy.DeleteAndZero_field_0x04; /*0x60e983*/
              *(unsigned int *)(*(unsigned int *)stru_AC1B48.__pad_0 + 4 * v97) = v99; /*0x60e987*/
              --*(unsigned int *)&stru_AC1B48.__pad_0[4]; /*0x60e996*/
              if ( v100 <= *(double *)&stru_AC1B48.__pad_10[16] ) /*0x60e9a0*/
              {
                Dialog_field_0x8 = stru_AC1B48.u32_8; /*0x60e9a6*/
                if ( stru_AC1B48.u32_8 > *(unsigned int *)&stru_AC1B48.__pad_2C[4] && stru_AC1B48.__pad_10[4] != 1 ) /*0x60e9c0*/
                {
                  v102 = *(int **)stru_AC1B48.__pad_0; /*0x60e9cc*/
                  v103 = stru_AC1B48.u32_8; /*0x60e9d2*/
                  Y[0] = *(unsigned int *)stru_AC1B48.__pad_0; /*0x60e9d4*/
                  stru_AC1B48.u32_8 = (unsigned int)stru_AC1B48.u32_8 >> 1; /*0x60e9da*/
                  --stru_AC1B48.q00C; /*0x60e9e4*/
                  *(unsigned int *)stru_AC1B48.__pad_0 = __2_YAPAXI_Z(4 * (Dialog_field_0x8 >> 1)); /*0x60e9fc*/
                  memset(*(void **)stru_AC1B48.__pad_0, 0, 4 * stru_AC1B48.u32_8); /*0x60ea04*/
                  if ( v103 > 0 ) /*0x60ea06*/
                  {
                    v104 = v102; /*0x60ea08*/
                    v105 = v103; /*0x60ea0a*/
                    do /*0x60ea45*/
                    {
                      v106 = *v104; /*0x60ea0c*/
                      if ( *v104 ) /*0x60ea0c*/
                      {
                        do /*0x60ea3f*/
                        {
                          v107 = (*(int (**)(int))&stru_AC1B48.__pad_10[8])(v106) /*0x60ea28*/
                               & ((1 << SLOBYTE(stru_AC1B48.q00C)) - 1);
                          v108 = *(unsigned int *)(*(unsigned int *)stru_AC1B48.__pad_0 + 4 * v107); /*0x60ea2f*/
                          *(unsigned int *)(*(unsigned int *)stru_AC1B48.__pad_0 + 4 * v107) = v106; /*0x60ea32*/
                          v109 = v106->ptr_8; /*0x60ea35*/
                          v106->ptr_3 = v108; /*0x60ea38*/
                          v106 = v109; /*0x60ea3d*/
                        }
                        while ( v109 ); /*0x60ea3f*/
                      }
                      ++v104; /*0x60ea41*/
                      --v105; /*0x60ea44*/
                    }
                    while ( v105 ); /*0x60ea45*/
                    v102 = (int *)Y[0]; /*0x60ea47*/
                  }
                  __3_YAXPAX_Z(v102); /*0x60ea4c*/
                }
              }
            }
            else
            {
              v110 = v98->ptr_8; /*0x60ea51*/
              if ( v110 ) /*0x60ea56*/
              {
                while ( *v110 != *(unsigned int *)dy.__pad_0 ) /*0x60ea5a*/
                {
                  v98 = v110; /*0x60ea5c*/
                  v110 = v110->ptr_8; /*0x60ea5e*/
                  if ( !v110 ) /*0x60ea63*/
                    goto LABEL_206; /*0x60ea63*/
                }
                v98->ptr_3 = v110->ptr_3; /*0x60ea6b*/
                --*(unsigned int *)&stru_AC1B48.__pad_0[4]; /*0x60ea75*/
                __3_YAXPAX_Z(v110); /*0x60ea7b*/
              }
LABEL_206:
              if ( *(float *)&dy.DeleteAndZero_field_0x04 <= *(double *)&stru_AC1B48.__pad_10[16] /*0x60eab2*/
                && stru_AC1B48.u32_8 > *(unsigned int *)&stru_AC1B48.__pad_2C[4]
                && stru_AC1B48.__pad_10[4] != 1 )
              {
                v111 = stru_AC1B48.u32_8; /*0x60eac4*/
                dy.DeleteAndZero_field_0x04 = *(unsigned int *)stru_AC1B48.__pad_0; /*0x60eac6*/
                stru_AC1B48.u32_8 = (unsigned int)stru_AC1B48.u32_8 >> 1; /*0x60eacd*/
                --stru_AC1B48.q00C; /*0x60ead9*/
                *(unsigned int *)stru_AC1B48.__pad_0 = __2_YAPAXI_Z(4 * stru_AC1B48.u32_8); /*0x60eaf2*/
                memset(*(void **)stru_AC1B48.__pad_0, 0, 4 * stru_AC1B48.u32_8); /*0x60eafa*/
                if ( v111 > 0 ) /*0x60eafc*/
                {
                  v112 = (int *)dy.DeleteAndZero_field_0x04; /*0x60eafe*/
                  v113 = v111; /*0x60eb02*/
                  do /*0x60eb3d*/
                  {
                    v114 = *v112; /*0x60eb04*/
                    if ( *v112 ) /*0x60eb04*/
                    {
                      do /*0x60eb37*/
                      {
                        v115 = (*(int (**)(int))&stru_AC1B48.__pad_10[8])(v114) /*0x60eb20*/
                             & ((1 << SLOBYTE(stru_AC1B48.q00C)) - 1);
                        v116 = *(unsigned int *)(*(unsigned int *)stru_AC1B48.__pad_0 + 4 * v115); /*0x60eb27*/
                        *(unsigned int *)(*(unsigned int *)stru_AC1B48.__pad_0 + 4 * v115) = v114; /*0x60eb2a*/
                        v117 = v114->ptr_8; /*0x60eb2d*/
                        v114->ptr_3 = v116; /*0x60eb30*/
                        v114 = v117; /*0x60eb35*/
                      }
                      while ( v117 ); /*0x60eb37*/
                    }
                    ++v112; /*0x60eb39*/
                    --v113; /*0x60eb3c*/
                  }
                  while ( v113 ); /*0x60eb3d*/
                }
                __3_YAXPAX_Z((void *)dy.DeleteAndZero_field_0x04); /*0x60eb44*/
              }
            }
          }
        }
        memset(v214, 0, sizeof(v214)); /*0x60eb5c*/
        *(unsigned int *)&v214[104] = 11; /*0x60eb64*/
        *(unsigned int *)&v214[100] = g_FogOfWarState; /*0x60eb6f*/
        v118 = (unsigned int *)__2_YAPAXI_Z(4u); /*0x60eb76*/
        if ( v118 ) /*0x60eb80*/
          v119 = unknown_libname_74(v118); /*0x60eb84*/
        else
          v119 = 0; /*0x60eb8b*/
        *(unsigned int *)&v214[60] = v119; /*0x60eb8d*/
        *(unsigned int *)&v214[64] = 0; /*0x60eb9b*/
        *(unsigned int *)&v214[92] = 0; /*0x60eba2*/
        *(unsigned int *)&v214[144] = -1; /*0x60eba9*/
        if ( dword_AC1B04 ) /*0x60ebb4*/
        {
          *(unsigned long long *)Y = (unsigned int)(dword_AC1B04 - 1); /*0x60ebc3*/
          Y[0] = dword_AC1B08; /*0x60ebd3*/
          *(float *)&dy.DeleteAndZero_field_0x04 = (double)(unsigned int)(dword_AC1B04 - 1) / (double)dword_AC1B08; /*0x60ebdf*/
          v120 = dword_AC1B18(&dy) & ((1 << dword_AC1B0C) - 1); /*0x60ebf7*/
          v121 = *(unsigned int **)(*(unsigned int *)dword_AC1B00.__pad_0 + 4 * v120); /*0x60ebfe*/
          if ( v121 ) /*0x60ec03*/
          {
            if ( *v121 == *(unsigned int *)dy.__pad_0 ) /*0x60ec12*/
            {
              v122 = *(unsigned int *)&v214[52]; /*0x60ec1f*/
              v123 = *(unsigned int *)&v214[40]; /*0x60ec26*/
              Y[0] = *(unsigned int *)&v214[60]; /*0x60ec2d*/
              v124 = v121 + 1; /*0x60ec31*/
              if ( v214 != (unsigned char *)v124 ) /*0x60ec3d*/
              {
                memcpy(v214, v124, sizeof(v214)); /*0x60ec4d*/
                *(unsigned int *)&v214[40] = v123; /*0x60ec4f*/
                *(unsigned int *)&v214[60] = Y[0]; /*0x60ec5a*/
                *(unsigned int *)&v214[52] = v122; /*0x60ec61*/
                GadgetClass::SetTooltip((GadgetClass *)v214, (wchar_t *)v124[10]); /*0x60ec73*/
                SymbolTable::Rebuild((SymbolTable *)v214, (int **)v124[13]); /*0x60ec83*/
              }
              v125 = *(unsigned int *)(*(unsigned int *)dword_AC1B00.__pad_0 + 4 * v120); /*0x60ec8e*/
              v126 = *(unsigned int *)(v125 + 516); /*0x60ec93*/
              if ( v125 ) /*0x60ec99*/
              {
                GadgetClass::SetTooltip((GadgetClass *)(v125 + 4), 0); /*0x60eca2*/
                for ( i = *(unsigned int **)(v125 + 56); i; i = *(unsigned int **)(v125 + 56) ) /*0x60ecac*/
                  LinkedList::Remove((LinkedList *)(v125 + 4), i); /*0x60ecb1*/
                v128 = *(DeleteAndZero **)(v125 + 64); /*0x60ecbd*/
                if ( v128 ) /*0x60ecc2*/
                  DeleteAndZero::OrFree(v128, 1); /*0x60ecc6*/
                __3_YAXPAX_Z((void *)v125); /*0x60eccc*/
              }
              v129 = *(float *)&dy.DeleteAndZero_field_0x04; /*0x60ecd9*/
              *(unsigned int *)(*(unsigned int *)dword_AC1B00.__pad_0 + 4 * v120) = v126; /*0x60ecdd*/
              --dword_AC1B04; /*0x60ecec*/
              if ( v129 <= dbl_AC1B20 && dword_AC1B08 > (unsigned int)dword_AC1B30 && byte_AC1B14 != 1 ) /*0x60ed16*/
              {
                v130 = *(int **)dword_AC1B00.__pad_0; /*0x60ed22*/
                v131 = dword_AC1B08; /*0x60ed28*/
                dword_AC1B08 = (unsigned int)dword_AC1B08 >> 1; /*0x60ed2d*/
                --dword_AC1B0C; /*0x60ed39*/
                *(unsigned int *)dword_AC1B00.__pad_0 = __2_YAPAXI_Z(4 * dword_AC1B08); /*0x60ed52*/
                memset(*(void **)dword_AC1B00.__pad_0, 0, 4 * dword_AC1B08); /*0x60ed5a*/
                if ( v131 > 0 ) /*0x60ed5c*/
                {
                  v132 = v130; /*0x60ed5e*/
                  v133 = v131; /*0x60ed60*/
                  do /*0x60ed95*/
                  {
                    v134 = *v132; /*0x60ed62*/
                    if ( *v132 ) /*0x60ed62*/
                    {
                      do /*0x60ed8f*/
                      {
                        v135 = HashTable::ComputeHash((int *)dword_AC1B00.__pad_0, v134); /*0x60ed6e*/
                        v136 = *(unsigned int *)(*(unsigned int *)dword_AC1B00.__pad_0 + 4 * v135); /*0x60ed79*/
                        *(unsigned int *)(*(unsigned int *)dword_AC1B00.__pad_0 + 4 * v135) = v134; /*0x60ed7c*/
                        v137 = v134->q204; /*0x60ed7f*/
                        v134->q204 = v136; /*0x60ed85*/
                        v134 = v137; /*0x60ed8d*/
                      }
                      while ( v137 ); /*0x60ed8f*/
                    }
                    ++v132; /*0x60ed91*/
                    --v133; /*0x60ed94*/
                  }
                  while ( v133 ); /*0x60ed95*/
                }
                __3_YAXPAX_Z(v130); /*0x60ed98*/
              }
            }
            else
            {
              v138 = (char *)v121[129]; /*0x60eda5*/
              if ( v138 ) /*0x60edad*/
              {
                while ( *(unsigned int *)v138 != *(unsigned int *)dy.__pad_0 ) /*0x60edb5*/
                {
                  v121 = v138; /*0x60edb7*/
                  v138 = (char *)*((unsigned int *)v138 + 129); /*0x60edb9*/
                  if ( !v138 ) /*0x60edc1*/
                    goto LABEL_245; /*0x60edc1*/
                }
                v139 = *(unsigned int *)&v214[52]; /*0x60edcf*/
                Y[0] = *(unsigned int *)&v214[40]; /*0x60edd6*/
                v193 = *(unsigned int *)&v214[60]; /*0x60ede1*/
                if ( v214 != v138 + 4 ) /*0x60edf1*/
                {
                  memcpy(v214, v138 + 4, sizeof(v214)); /*0x60ee01*/
                  *(unsigned int *)&v214[52] = v139; /*0x60ee07*/
                  *(unsigned int *)&v214[40] = Y[0]; /*0x60ee0e*/
                  *(unsigned int *)&v214[60] = v193; /*0x60ee19*/
                  GadgetClass::SetTooltip((GadgetClass *)v214, *((wchar_t **)v138 + 11)); /*0x60ee2b*/
                  SymbolTable::Rebuild((SymbolTable *)v214, *((int ***)v138 + 14)); /*0x60ee3b*/
                }
                v121[129] = *((unsigned int *)v138 + 129); /*0x60ee46*/
                --dword_AC1B04; /*0x60ee55*/
                Dialog::CleanupTree((Dialog *)(v138 + 4)); /*0x60ee60*/
                __3_YAXPAX_Z(v138); /*0x60ee66*/
              }
LABEL_245:
              if ( *(float *)&dy.DeleteAndZero_field_0x04 <= dbl_AC1B20 ) /*0x60ee7d*/
                HashTable::Rebuild2(&dword_AC1B00); /*0x60ee84*/
            }
          }
        }
        if ( *(unsigned int *)&v214[40] ) /*0x60ee92*/
        {
          __3_YAXPAX_Z(*(void **)&v214[40]); /*0x60ee95*/
          *(unsigned int *)&v214[40] = 0; /*0x60ee9d*/
        }
        v140 = *(unsigned int **)&v214[52]; /*0x60eea8*/
        if ( *(unsigned int *)&v214[52] ) /*0x60eeb1*/
        {
          do /*0x60eef2*/
          {
            v141 = 0; /*0x60eeb3*/
            v142 = v140; /*0x60eeb5*/
            if ( !v140 ) /*0x60eeb9*/
              break; /*0x60eeb9*/
            while ( v140 != v142 ) /*0x60eebd*/
            {
              v141 = v142; /*0x60eebf*/
              v142 = (unsigned int *)*v142; /*0x60eec1*/
              if ( !v142 ) /*0x60eec5*/
                goto LABEL_259; /*0x60eec5*/
            }
            if ( v142 ) /*0x60eecb*/
            {
              if ( v141 ) /*0x60eecf*/
                *v141 = *v142; /*0x60eed3*/
              else
                *(unsigned int *)&v214[52] = *v142; /*0x60eed9*/
              __3_YAXPAX_Z(v142); /*0x60eee1*/
              v140 = *(unsigned int **)&v214[52]; /*0x60eee6*/
            }
LABEL_259:
            ;
          }
          while ( v140 ); /*0x60eef2*/
        }
        v143 = *(void **)&v214[60]; /*0x60eef4*/
        if ( *(unsigned int *)&v214[60] ) /*0x60eefd*/
        {
          ((DeleteAndZero *)*(DeleteAndZero **)&v214[60])->Alt(); /*0x60ef01*/
          __3_YAXPAX_Z(v143); /*0x60ef07*/
        }
        if ( dword_AC18C4 ) /*0x60ef16*/
        {
          *(unsigned long long *)Y = (unsigned int)(dword_AC18C4 - 1); /*0x60ef1f*/
          v144 = (double)*(__int64 *)Y; /*0x60ef30*/
          Y[0] = dword_AC18C8; /*0x60ef34*/
          *(float *)&dy.DeleteAndZero_field_0x04 = v144 / (double)dword_AC18C8; /*0x60ef40*/
          v145 = dword_AC18D8(&dy) & ((1 << dword_AC18CC) - 1); /*0x60ef5e*/
          v146 = *(unsigned int **)(*(unsigned int *)g_DialogPool.__pad_0 + 4 * v145); /*0x60ef60*/
          if ( v146 ) /*0x60ef65*/
          {
            if ( *v146 == *(unsigned int *)dy.__pad_0 ) /*0x60ef73*/
            {
              v147 = v146->ptr_8; /*0x60ef79*/
              __3_YAXPAX_Z(*(void **)(*(unsigned int *)g_DialogPool.__pad_0 + 4 * v145)); /*0x60ef7d*/
              v148 = *(float *)&dy.DeleteAndZero_field_0x04; /*0x60ef8b*/
              *(unsigned int *)(*(unsigned int *)g_DialogPool.__pad_0 + 4 * v145) = v147; /*0x60ef8f*/
              --dword_AC18C4; /*0x60ef9e*/
              if ( v148 > dbl_AC18E0 ) /*0x60efa8*/
                goto LABEL_290; /*0x60efa8*/
              v149 = dword_AC18C8; /*0x60efae*/
              if ( dword_AC18C8 <= (unsigned int)dword_AC18F0 || byte_AC18D4 == 1 ) /*0x60efc8*/
                goto LABEL_290; /*0x60efc8*/
              v150 = *(int **)g_DialogPool.__pad_0; /*0x60efd4*/
              v151 = dword_AC18C8; /*0x60efda*/
              Y[0] = *(unsigned int *)g_DialogPool.__pad_0; /*0x60efdc*/
              dword_AC18C8 = (unsigned int)dword_AC18C8 >> 1; /*0x60efe2*/
              --dword_AC18CC; /*0x60efec*/
              *(unsigned int *)g_DialogPool.__pad_0 = __2_YAPAXI_Z(4 * (v149 >> 1)); /*0x60f004*/
              memset(*(void **)g_DialogPool.__pad_0, 0, 4 * dword_AC18C8); /*0x60f00c*/
              if ( v151 > 0 ) /*0x60f00e*/
              {
                v152 = v150; /*0x60f010*/
                v153 = v151; /*0x60f012*/
                do /*0x60f04d*/
                {
                  v154 = *v152; /*0x60f014*/
                  if ( *v152 ) /*0x60f014*/
                  {
                    do /*0x60f047*/
                    {
                      v155 = dword_AC18D8(v154) & ((1 << dword_AC18CC) - 1); /*0x60f030*/
                      v156 = *(unsigned int *)(*(unsigned int *)g_DialogPool.__pad_0 + 4 * v155); /*0x60f037*/
                      *(unsigned int *)(*(unsigned int *)g_DialogPool.__pad_0 + 4 * v155) = v154; /*0x60f03a*/
                      v157 = v154->ptr_8; /*0x60f03d*/
                      v154->ptr_3 = v156; /*0x60f040*/
                      v154 = v157; /*0x60f045*/
                    }
                    while ( v157 ); /*0x60f047*/
                  }
                  ++v152; /*0x60f049*/
                  --v153; /*0x60f04c*/
                }
                while ( v153 ); /*0x60f04d*/
                v150 = (int *)Y[0]; /*0x60f04f*/
              }
            }
            else
            {
              v158 = v146->ptr_8; /*0x60f061*/
              if ( v158 ) /*0x60f066*/
              {
                while ( *v158 != *(unsigned int *)dy.__pad_0 ) /*0x60f06a*/
                {
                  v146 = v158; /*0x60f06c*/
                  v158 = v158->ptr_8; /*0x60f06e*/
                  if ( !v158 ) /*0x60f073*/
                    goto LABEL_280; /*0x60f073*/
                }
                v146->ptr_3 = v158->ptr_3; /*0x60f07b*/
                --dword_AC18C4; /*0x60f085*/
                __3_YAXPAX_Z(v158); /*0x60f08b*/
              }
LABEL_280:
              if ( *(float *)&dy.DeleteAndZero_field_0x04 > dbl_AC18E0 ) /*0x60f0a2*/
                goto LABEL_290; /*0x60f0a2*/
              v159 = dword_AC18C8; /*0x60f0a8*/
              if ( dword_AC18C8 <= (unsigned int)dword_AC18F0 || byte_AC18D4 == 1 ) /*0x60f0c2*/
                goto LABEL_290; /*0x60f0c2*/
              v150 = *(int **)g_DialogPool.__pad_0; /*0x60f0ce*/
              v160 = dword_AC18C8; /*0x60f0d4*/
              Y[0] = *(unsigned int *)g_DialogPool.__pad_0; /*0x60f0d6*/
              dword_AC18C8 = (unsigned int)dword_AC18C8 >> 1; /*0x60f0dc*/
              --dword_AC18CC; /*0x60f0e6*/
              *(unsigned int *)g_DialogPool.__pad_0 = __2_YAPAXI_Z(4 * (v159 >> 1)); /*0x60f0fe*/
              memset(*(void **)g_DialogPool.__pad_0, 0, 4 * dword_AC18C8); /*0x60f106*/
              if ( v160 > 0 ) /*0x60f108*/
              {
                v161 = v150; /*0x60f10a*/
                v162 = v160; /*0x60f10c*/
                do /*0x60f147*/
                {
                  v163 = *v161; /*0x60f10e*/
                  if ( *v161 ) /*0x60f10e*/
                  {
                    do /*0x60f141*/
                    {
                      v164 = dword_AC18D8(v163) & ((1 << dword_AC18CC) - 1); /*0x60f12a*/
                      v165 = *(unsigned int *)(*(unsigned int *)g_DialogPool.__pad_0 + 4 * v164); /*0x60f131*/
                      *(unsigned int *)(*(unsigned int *)g_DialogPool.__pad_0 + 4 * v164) = v163; /*0x60f134*/
                      v166 = v163->ptr_8; /*0x60f137*/
                      v163->ptr_3 = v165; /*0x60f13a*/
                      v163 = v166; /*0x60f13f*/
                    }
                    while ( v166 ); /*0x60f141*/
                  }
                  ++v161; /*0x60f143*/
                  --v162; /*0x60f146*/
                }
                while ( v162 ); /*0x60f147*/
                v150 = (int *)Y[0]; /*0x60f149*/
              }
            }
            __3_YAXPAX_Z(v150); /*0x60f054*/
          }
        }
LABEL_290:
        WindowLongA = (void *)GetWindowLongA(*(HWND *)dy.__pad_0, -21); /*0x60f15a*/
        if ( WindowLongA ) /*0x60f169*/
          __3_YAXPAX_Z(WindowLongA); /*0x60f16c*/
        SetWindowLongA(*(HWND *)dy.__pad_0, -21, 0); /*0x60f17c*/
        Object::RemoveObjectArray(*(Object **)dy.__pad_0); /*0x60f186*/
        v168 = (unsigned int *)v184.DeleteAndZero_field_0x08; /*0x60f18b*/
        v169 = v184.DeleteAndZero_field_0x04; /*0x60f18f*/
        *(unsigned int *)(v184.DeleteAndZero_field_0x08 + 12) = 0; /*0x60f195*/
        v168[1] = 0; /*0x60f198*/
        SetWindowPos((HWND)this, 0, 0, 0, v169 + Rect.right - Rect.left, Rect.bottom - Rect.top, 2u); /*0x60f1be*/
        hDlg = GetParent((HWND)this); /*0x60f1db*/
        ScreenDialogToClient(hDlg, &lParam); /*0x60f1df*/
        v198.left = v200.left - lParam.left; /*0x60f206*/
        v198.right = v169 + Rect.right + v200.left - lParam.left; /*0x60f213*/
        v198.top = v200.top - lParam.top; /*0x60f21e*/
        v198.bottom = v200.top - lParam.top + Rect.bottom + 1; /*0x60f235*/
        ValidateRect(hDlg, &v198); /*0x60f23d*/
        return (HWND)DefWindowProcA((HWND)this, (UINT)hWnd, Msg, wParam); /*0x60f23d*/
      }
      *(unsigned int *)(v10 + 232) = SendMessageA(result, 0x147u, 0, 0); /*0x60f283*/
      return 0; /*0x60f28b*/
    }
    else
    {
      v170 = (((wParam) >> 16) & 0xFFFF); /*0x60f2a9*/
      v171 = -1; /*0x60f2ab*/
      if ( (unsigned __int16)wParam < Rect.right && v170 < Rect.bottom )
      {
        v172 = SendMessageA(result, 0x154u, 0, 0); /*0x60f2de*/
        v173 = SendMessageA(g_GameScreenManager, 0x146u, 0, 0); /*0x60f2e2*/
        v174 = *(unsigned int *)(v10 + 240) + v170 / v172 < 0 ? 0 : (HWND)(*(unsigned int *)(v10 + 240) + v170 / v172);
        v175 = (HWND)(v173 - 1); /*0x60f2fc*/
        if ( (int)v175 < (int)v174 ) /*0x60f2ff*/
          return v175; /*0x60f301*/
        return v174; /*0x60f303*/
      }
      return (HWND)v171; /*0x60f305*/
    }
  }
  else
  {
    if ( v14 == (HWND)515 )
    {
LABEL_151:
      v76 = (unsigned __int16)wParam; /*0x60e499*/
      v77 = (((wParam) >> 16) & 0xFFFF); /*0x60e4ac*/
      if ( (unsigned __int16)wParam > Rect.right /*0x60e4c4*/
        && (unsigned __int16)wParam < Rect.right + *(unsigned int *)(v10 + 4)
        && (((wParam) >> 16) & 0xFFFF)
        && v77 < Rect.bottom )
      {
        SendMessageA(*(HWND *)(v10 + 12), (UINT)hWnd, Msg, wParam); /*0x60e4e2*/
        goto LABEL_172; /*0x60e4e4*/
      }
      PlayVocClass(dword_8871E0->SlaveMinerDeploySound, 0x2000u, 1.0, 0); /*0x60e500*/
      if ( v77 < 0 || v76 > Rect.right || v77 > Rect.bottom )
      {
        if ( dy.DeleteAndZero_field_0x08 ) /*0x60e5f4*/
          DestroyWindow(*(HWND *)(v10 + 12)); /*0x60e5fa*/
        ReleaseCapture(); /*0x60e600*/
        SendMessageA(g_GameScreenManager, 0x14Fu, 0, 0); /*0x60e616*/
        return 0; /*0x60e61b*/
      }
      else
      {
        v78 = SendMessageA(g_GameScreenManager, 0x154u, 0, 0); /*0x60e54b*/
        v79 = SendMessageA(g_GameScreenManager, 0x146u, 0, 0); /*0x60e54f*/
        v80 = v77 / v78; /*0x60e554*/
        if ( v10 ) /*0x60e558*/
          v80 += *(unsigned int *)(v10 + 240); /*0x60e55a*/
        v81 = v80 < 0 ? 0 : v80;
        v82 = v79 - 1; /*0x60e56a*/
        if ( v82 < v81 ) /*0x60e56d*/
          v81 = v82; /*0x60e56f*/
        SendMessageA(g_GameScreenManager, 0x14Eu, v81, 0); /*0x60e57f*/
        v83 = GetWindowLongA(g_GameScreenManager, -12); /*0x60e590*/
        if ( dy.DeleteAndZero_field_0x08 ) /*0x60e598*/
          DestroyWindow(*(HWND *)(v10 + 12)); /*0x60e59e*/
        ReleaseCapture(); /*0x60e5a4*/
        SendMessageA(g_GameScreenManager, 0x14Fu, 0, 0); /*0x60e5b9*/
        PostMessageA(hDlg, 0x111u, v83 | 0x10000, (LPARAM)g_GameScreenManager); /*0x60e5d9*/
        return 0; /*0x60e5e2*/
      }
    }
    v61 = v14 - 87; /*0x60e242*/
    if ( v61 ) /*0x60e248*/
    {
      v62 = v61 - 41; /*0x60e24e*/
      if ( !v62 ) /*0x60e254*/
      {
        v63 = SendMessageA((HWND)this, 0x4E8u, 0, (unsigned __int16)wParam | ((((wParam) >> 16) & 0xFFFF) << 16)); /*0x60e287*/
        v64 = v63; /*0x60e289*/
        if ( v63 != -1 ) /*0x60e28e*/
        {
          if ( *(unsigned int *)(v10 + 232) != v63 ) /*0x60e29a*/
            InvalidateRect((HWND)this, 0, 0); /*0x60e2a6*/
          *(unsigned int *)(v10 + 232) = v64; /*0x60e2ac*/
          DlgItem = GetDlgItem(hDlg, 1685); /*0x60e2c4*/
          if ( DlgItem ) /*0x60e2c8*/
          {
            unknown_libname_74(&dy); /*0x60e2d2*/
            v65 = g_GameScreenManager; /*0x60e2d7*/
            v66 = hDlg; /*0x60e2dd*/
            unknown_libname_74(&v184); /*0x60e2e5*/
            Y[0] = (LPARAM)v65; /*0x60e2ee*/
            Y[1] = v64; /*0x60e2fb*/
            SendMessageA(v66, 0x4E9u, 0, (LPARAM)Y); /*0x60e2ff*/
            WideString::AssignFromPtr((WideString *)&v189, (const wchar_t **)&v184); /*0x60e30a*/
            ((DeleteAndZero *)&v184)->Alt(); /*0x60e313*/
            WideString::Reassign_Alt((WideString *)&dy, &v189); /*0x60e321*/
            ((DeleteAndZero *)&v189)->Alt(); /*0x60e32a*/
            v67 = WideString::GetOrEmpty((WideString *)&dy); /*0x60e338*/
            if ( wcscmp(v67, &g_TypeClass_DefaultString) ) /*0x60e33e*/
              goto LABEL_137; /*0x60e33e*/
            v68 = g_GameScreenManager; /*0x60e365*/
            v69 = hDlg; /*0x60e36b*/
            unknown_libname_74(&v184); /*0x60e373*/
            Y[0] = (LPARAM)v68; /*0x60e37c*/
            Y[1] = -1; /*0x60e389*/
            SendMessageA(v69, 0x4E9u, 0, (LPARAM)Y); /*0x60e391*/
            WideString::AssignFromPtr((WideString *)&dy.DeleteAndZero_field_0x04, (const wchar_t **)&v184); /*0x60e39c*/
            ((DeleteAndZero *)&v184)->Alt(); /*0x60e3a5*/
            WideString::Reassign_Alt((WideString *)&dy, (const wchar_t **)&dy.DeleteAndZero_field_0x04); /*0x60e3b3*/
            ((DeleteAndZero *)&dy.DeleteAndZero_field_0x04)->Alt(); /*0x60e3bc*/
            v70 = WideString::GetOrEmpty((WideString *)&dy); /*0x60e3ca*/
            if ( wcscmp(v70, &g_TypeClass_DefaultString) ) /*0x60e3d0*/
            {
LABEL_137:
              v177 = WideString::GetOrEmpty_Alt((WideString *)&dy); /*0x60e3e5*/
              SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)v177); /*0x60e3f2*/
            }
            ((DeleteAndZero *)&dy)->Alt(); /*0x60e3f8*/
          }
        }
        return 0; /*0x60e409*/
      }
      if ( v62 != (HWND)1 ) /*0x60e257*/
        goto LABEL_172; /*0x60e257*/
      goto LABEL_151; /*0x60e257*/
    }
    v71 = Msg; /*0x60e40c*/
    v72 = SendMessageA(result, 0x146u, 0, 0); /*0x60e42f*/
    v73 = SendMessageA(g_GameScreenManager, 0x154u, 0, 0); /*0x60e431*/
    if ( !v72 || !v73 ) /*0x60e43f*/
      goto LABEL_172; /*0x60e43f*/
    v74 = (Rect.bottom - Rect.top) / v73; /*0x60e450*/
    if ( v71 < 0 ) /*0x60e456*/
      v71 = 0; /*0x60e458*/
    v75 = v72 - v74; /*0x60e45a*/
    if ( v75 <= 0 ) /*0x60e45e*/
    {
      v71 = 0; /*0x60e468*/
    }
    else if ( v71 > v75 ) /*0x60e462*/
    {
      v71 = v75; /*0x60e464*/
    }
    if ( v71 != *(unsigned int *)(v10 + 240) ) /*0x60e470*/
    {
      *(unsigned int *)(v10 + 240) = v71; /*0x60e472*/
      InvalidateRect((HWND)this, 0, 0); /*0x60e484*/
    }
    return 0; /*0x60e48d*/
  }

}

// 0x477440
void GameSetup::ParseCoordTriple()
{
  const char *result; // eax
  char *v7; // eax
  char *v8; // eax
  char String[509]; // [esp+4h] [ebp-200h] BYREF
  int16_t v10; // [esp+201h] [ebp-3h]
  char v11; // [esp+203h] [ebp-1h]

  String[0] = g_INI_DefaultBuffer; /*0x47744e*/
  memset(&String[1], 0, 0x1FCu); /*0x477462*/
  v10 = 0; /*0x477464*/
  v11 = 0; /*0x47746a*/
  result = (const char *)INIClass::GetString((INIClass *)this, a2, a3, &g_INI_DefaultBuffer, String, 512); /*0x477483*/
  if ( result ) /*0x47748b*/
  {
    v7 = strtok(String, Str); /*0x477497*/
    if ( v7 ) /*0x4774a1*/
      *a4 = atoi(v7); /*0x4774b3*/
    v8 = strtok(0, Str); /*0x4774bc*/
    if ( v8 ) /*0x4774c6*/
      *a5 = atoi(v8); /*0x4774d8*/
    result = strtok(0, Str); /*0x4774e1*/
    if ( result ) /*0x4774eb*/
    {
      result = (const char *)atoi(result); /*0x4774ee*/
      *a6 = result; /*0x4774fd*/
    }
  }
  return result; /*0x47748a*/
}
// 0x477510
void GameSetup::FormatToString()
{
  char Buffer[509]; // [esp+8h] [ebp-200h] BYREF
  int16_t v9; // [esp+205h] [ebp-3h]
  char v10; // [esp+207h] [ebp-1h]

  Buffer[0] = g_INI_DefaultBuffer; /*0x47751f*/
  memset(&Buffer[1], 0, 0x1FCu); /*0x47752e*/
  v9 = 0; /*0x47753e*/
  v10 = 0; /*0x477540*/
  sprintf(Buffer, "%d,%d,%d", a4, a5, a6); /*0x477555*/
  return INIClass::SetString(this, Block, a3, Buffer); /*0x477579*/
}
// 0x4e42a0
void GameSetup::GameSetup_GetColorTooltip()
{
  if ( this == (GameSetup *)-2 ) /*0x4e42a3*/
    return GetStringCSF(aSttPlayercolor, 0, g_Str_File_GDlgSupp_cpp, 449); /*0x4e42b6*/
  if ( !this ) /*0x4e42be*/
    return GetStringCSF(aSttPlayercolor_0, 0, g_Str_File_GDlgSupp_cpp, 451); /*0x4e42d1*/
  if ( this == 1 ) /*0x4e42da*/
    return GetStringCSF(aSttPlayercolor_1, 0, g_Str_File_GDlgSupp_cpp, 453); /*0x4e42ed*/
  if ( this == 2 ) /*0x4e42f6*/
    return GetStringCSF(aSttPlayercolor_2, 0, g_Str_File_GDlgSupp_cpp, 455); /*0x4e4309*/
  if ( this == 3 ) /*0x4e4312*/
    return GetStringCSF(aSttPlayercolor_3, 0, g_Str_File_GDlgSupp_cpp, 457); /*0x4e4325*/
  if ( this == 4 ) /*0x4e432e*/
    return GetStringCSF(aSttPlayercolor_4, 0, g_Str_File_GDlgSupp_cpp, 459); /*0x4e4341*/
  if ( this == 5 ) /*0x4e434a*/
    return GetStringCSF(aSttPlayercolor_5, 0, g_Str_File_GDlgSupp_cpp, 461); /*0x4e435d*/
  if ( this == 6 ) /*0x4e4366*/
    return GetStringCSF(aSttPlayercolor_6, 0, g_Str_File_GDlgSupp_cpp, 463); /*0x4e4379*/
  if ( this == 7 ) /*0x4e4382*/
    return GetStringCSF(aSttPlayercolor_7, 0, g_Str_File_GDlgSupp_cpp, 465); /*0x4e4395*/
  if ( this == 8 ) /*0x4e439e*/
    return GetStringCSF(aSttPlayercolor_8, 0, g_Str_File_GDlgSupp_cpp, 467); /*0x4e43b1*/
  return 0; /*0x4e42bb*/
}
// 0x5dafe0
void GameSetup_DisplayPlayers()
{
  char v1; // cl
  char v2; // bl
  Dialog *Current; // esi
  int CurrentType; // eax
  int v5; // eax
  HWND v6; // ebp
  HWND DlgItem; // eax
  HWND v8; // esi
  unsigned int v9; // eax
  int v10; // ecx
  char *v11; // eax
  signed int i; // edi
  int v13; // edi
  void *PlayerSide; // esi
  wchar_t *StringCSF; // eax
  int v16; // edx
  int v17; // esi
  unsigned int v18; // ebx
  unsigned int j; // eax
  DeleteAndZero *v20; // esi
  DeleteAndZero *v21; // edi
  unsigned int v22; // ecx
  GameSetup **v23; // ebx
  int v24; // esi
  GameSetup **v25; // edi
  int v26; // ebp
  GameSetup *v27; // esi
  int v28; // eax
  int v29; // edx
  int v30; // ecx
  GameSetup *ptr_8; // eax
  int v32; // [esp+10h] [ebp-264h]
  HWND hWnd; // [esp+14h] [ebp-260h]
  LPARAM v34; // [esp+18h] [ebp-25Ch] BYREF
  DeleteAndZero v35; // [esp+1Ch] [ebp-258h] BYREF
  int v36; // [esp+28h] [ebp-24Ch]
  void *Block; // [esp+30h] [ebp-244h] BYREF
  int v38; // [esp+34h] [ebp-240h]
  unsigned int v39; // [esp+38h] [ebp-23Ch]
  int v40; // [esp+3Ch] [ebp-238h]
  int v41; // [esp+40h] [ebp-234h]
  int v42; // [esp+44h] [ebp-230h]
  const wchar_t *(__thiscall *v43)(GameSetup *); // [esp+48h] [ebp-22Ch]
  int v44; // [esp+50h] [ebp-224h]
  int v45; // [esp+54h] [ebp-220h]
  int v46; // [esp+58h] [ebp-21Ch]
  int v47; // [esp+5Ch] [ebp-218h]
  unsigned int v48; // [esp+60h] [ebp-214h]
  WPARAM wParam; // [esp+68h] [ebp-20Ch]
  int Default; // [esp+6Ch] [ebp-208h]
  HWND v51; // [esp+70h] [ebp-204h]
  wchar_t Buffer[128]; // [esp+74h] [ebp-200h] BYREF
  wchar_t lParam[128]; // [esp+174h] [ebp-100h] BYREF

  v2 = v1; /*0x5dafea*/
  Current = (Dialog *)Dialog::GetCurrent(); /*0x5daff1*/
  CurrentType = Dialog::GetCurrentType(); /*0x5daff3*/
  if ( CurrentType == 188 || CurrentType == 189 ) /*0x5db008*/
  {
  LABEL_15:
    RefreshLobbyAll((HWND)Current, v2); /*0x5db1a2*/
    return; /*0x5db1b5*/
  }
  for ( Current = (Dialog *)Dialog::FindByPtr(Current); Current; Current = (Dialog *)Dialog::FindByPtr(Current) ) /*0x5db019*/
  {
    v5 = GameSetup::LookupDialogHash((GameSetup *)Current); /*0x5db01d*/
    if ( v5 == 188 || v5 == 189 ) /*0x5db032*/
      goto LABEL_15; /*0x5db032*/
  }
  v6 = (HWND)Dialog::GetCurrent(); /*0x5db045*/
  DlgItem = GetDlgItem(v6, 1342); /*0x5db058*/
  v8 = DlgItem; /*0x5db05a*/
  v51 = DlgItem; /*0x5db05e*/
  if ( v6 && DlgItem ) /*0x5db06a*/
  {
    hWnd = GetDlgItem(v6, 1342); /*0x5db07c*/
    Gadget::InitProperties((Gadget *)&v34); /*0x5db080*/
    wParam = SendDlgItemMessageA(v6, 1342, 0x18Eu, 0, 0); /*0x5db0ab*/
    SendDlgItemMessageA(v6, 1342, 0x49Du, 0, 1); /*0x5db0af*/
    v9 = 128; /*0x5db0b1*/
    v44 = -1717986918; /*0x5db0b6*/
    v45 = 1070176665; /*0x5db0be*/
    v46 = -1717986918; /*0x5db0c6*/
    v47 = 1072273817; /*0x5db0ce*/
    v48 = 128; /*0x5db0d6*/
    v10 = 0; /*0x5db0da*/
    do /*0x5db0df*/
    {
      ++v10; /*0x5db0dc*/
      v9 >>= 1; /*0x5db0dd*/
    }
    while ( v9 ); /*0x5db0df*/
    v41 = 0; /*0x5db0e1*/
    v40 = v10 - 1; /*0x5db0eb*/
    v38 = 0; /*0x5db0f1*/
    (*((unsigned char *)&(v42))) = 0; /*0x5db0f9*/
    v39 = 1 << (v10 - 1); /*0x5db0fe*/
    Block = operator new(4 * v39); /*0x5db113*/
    memset(Block, 0, 4 * v39); /*0x5db117*/
    v43 = GameSetup::CompareWideString; /*0x5db122*/
    RehashGenericHashMap(v8, (int)&Block); /*0x5db12a*/
    SendDlgItemMessageA(v6, 1342, 0x184u, 0, 0); /*0x5db13e*/
    if ( g_NetworkSetupConfig ) /*0x5db147*/
    {
      v13 = 0; /*0x5db1bb*/
      if ( dword_A8DA84 > 0 ) /*0x5db1bf*/
      {
        do /*0x5db45d*/
        {
          if ( Render_Setup(v13) ) /*0x5db1cf*/
          {
            v32 = 2; /*0x5db1de*/
            *(unsigned int *)(dword_A8DA78[v13] + 119) = 1; /*0x5db1e9*/
          }
          else
          {
            v32 = *(unsigned int *)(dword_A8DA78[v13] + 119) != 0; /*0x5db202*/
          }
          swprintf(lParam, (const size_t)&off_8240B4, (const wchar_t *const)dword_A8DA78[v13]); /*0x5db220*/
          PlayerSide = (void *)SessionClass::GetPlayerSide((int *)dword_A8DA78[v13]); /*0x5db235*/
          Default = BuildingType::FindDefault(PlayerSide); /*0x5db241*/
          switch ( (unsigned int)PlayerSide ) /*0x5db24b*/
          {
            case 0u: /*0x5db24b*/
              StringCSF = GetStringCSF((char *)g_Str_TXT_GDI, 0, g_Str_File_netdlg2_cpp, 398); /*0x5db263*/
              goto LABEL_32; /*0x5db263*/
            case 1u: /*0x5db24b*/
              StringCSF = GetStringCSF((char *)g_Str_TXT_GDI, 0, g_Str_File_netdlg2_cpp, 401); /*0x5db276*/
              goto LABEL_32; /*0x5db276*/
            case 2u: /*0x5db24b*/
              StringCSF = GetStringCSF((char *)g_Str_TXT_GDI, 0, g_Str_File_netdlg2_cpp, 404); /*0x5db289*/
              goto LABEL_32; /*0x5db289*/
            case 3u: /*0x5db24b*/
              StringCSF = GetStringCSF((char *)g_Str_TXT_GDI, 0, g_Str_File_netdlg2_cpp, 407); /*0x5db29f*/
              goto LABEL_32; /*0x5db29f*/
            case 4u: /*0x5db24b*/
              StringCSF = GetStringCSF((char *)g_Str_TXT_GDI, 0, g_Str_File_netdlg2_cpp, 410); /*0x5db2b2*/
              goto LABEL_32; /*0x5db2b2*/
            case 5u: /*0x5db24b*/
              StringCSF = GetStringCSF(g_Str_TXT_NOD, 0, g_Str_File_netdlg2_cpp, 413); /*0x5db2b9*/
              goto LABEL_32; /*0x5db2b9*/
            case 6u: /*0x5db24b*/
              StringCSF = GetStringCSF(g_Str_TXT_NOD, 0, g_Str_File_netdlg2_cpp, 416); /*0x5db2cc*/
              goto LABEL_32; /*0x5db2cc*/
            case 7u: /*0x5db24b*/
              StringCSF = GetStringCSF(g_Str_TXT_NOD, 0, g_Str_File_netdlg2_cpp, 419); /*0x5db2ef*/
              goto LABEL_32; /*0x5db2ef*/
            case 8u: /*0x5db24b*/
              StringCSF = GetStringCSF(g_Str_TXT_NOD, 0, g_Str_File_netdlg2_cpp, 422); /*0x5db312*/
  LABEL_32:
              swprintf(Buffer, (const size_t)&off_8240B4, StringCSF); /*0x5db317*/
              break; /*0x5db322*/
            default:
              break;
          }
          SendMessageA(hWnd, 0x4CCu, 0xFFFFFFFF, (LPARAM)lParam); /*0x5db32a*/
          v16 = *(unsigned int *)(dword_A8DA78[v13] + 83); /*0x5db351*/
          v34 = 4; /*0x5db358*/
          v35.u32_8 = dword_8316A8[v16]; /*0x5db367*/
          ((WideString *)(void **)&v35.q004)->Reassign( &g_TypeClass_DefaultString); /*0x5db36b*/
          v17 = (uint16_t)v13 << 16; /*0x5db384*/
          SendDlgItemMessageA(v6, 1342, 0x4A8u, v17 | (uint16_t)dword_AC01A0, (LPARAM)&v34); /*0x5db39a*/
          v34 = 2; /*0x5db3a5*/
          ((WideString *)(void **)&v35.q004)->Reassign( Buffer); /*0x5db3ad*/
          v36 = Default; /*0x5db3d5*/
          SendDlgItemMessageA(v6, 1342, 0x4A8u, v17 | (uint16_t)dword_AC01D0, (LPARAM)&v34); /*0x5db3d9*/
          ((WideString *)(void **)&v35.q004)->Reassign( &g_TypeClass_DefaultString); /*0x5db3e4*/
          v34 = 2; /*0x5db3e9*/
          if ( v32 == 2 ) /*0x5db3f8*/
          {
            v36 = HashTable::Find(&g_DialogHashTable, (const char *)&stru_81AF8C.MaxXYVel[1], 0); /*0x5db40b*/
          }
          else if ( v32 ) /*0x5db413*/
          {
            v36 = HashTable::Find(&g_DialogHashTable, (const char *)stru_81AF8C.AnimTypeClass_field_double_320, 0); /*0x5db426*/
          }
          else
          {
            v34 = 0; /*0x5db42c*/
          }
          SendDlgItemMessageA(v6, 1342, 0x4A8u, v17 | (uint16_t)dword_AC01E0, (LPARAM)&v34); /*0x5db453*/
          ++v13; /*0x5db45a*/
        }
        while ( v13 < dword_A8DA84 ); /*0x5db45d*/
        v8 = v51; /*0x5db463*/
      }
      if ( dword_A8B23C ) /*0x5db46f*/
        (*((void (**)(ObjectClass *, HWND))dword_A8B23C->ptr_0 + 30))(dword_A8B23C, v6); /*0x5db474*/
    }
    else
    {
      v11 = CharToWideString(unk_A8B380); /*0x5db14e*/
      SendMessageA(hWnd, 0x4CCu, 0, (LPARAM)v11); /*0x5db160*/
      for ( i = 1; i < dword_A8DA54; ++i ) /*0x5db172*/
        SendMessageA(hWnd, 0x4CCu, i, *(unsigned int *)(dword_A8DA48 + 4 * i)); /*0x5db18d*/
    }
    ProcessComboBoxAddString(v8, (int)&Block); /*0x5db47d*/
    SendDlgItemMessageA(v6, 1342, 0x197u, wParam, 0); /*0x5db494*/
    SendDlgItemMessageA(v6, 1342, 0x49Du, 0, 0); /*0x5db4a5*/
    InvalidateRect(v8, 0, 0); /*0x5db4ac*/
    UpdateWindow(v8); /*0x5db4b3*/
    v18 = 0; /*0x5db4b9*/
    for ( j = v39; v18 < v39; j = v39 ) /*0x5db4c1*/
    {
      v20 = (DeleteAndZero *)*((unsigned int *)Block + v18); /*0x5db4c7*/
      while ( v20 ) /*0x5db4cc*/
      {
        v21 = v20; /*0x5db4ce*/
        v20 = (DeleteAndZero *)v20->u32_8; /*0x5db4d0*/
        ((DeleteAndZero *)v21)->Alt(); /*0x5db4d9*/
        operator delete((void *)(v21)); /*0x5db4df*/
      }
      *((unsigned int *)Block + v18++) = 0; /*0x5db4f0*/
    }
    v22 = v48; /*0x5db500*/
    v38 = 0; /*0x5db504*/
    if ( j > v48 ) /*0x5db50e*/
    {
      do /*0x5db5a8*/
      {
        if ( (unsigned char)v42 || j <= v22 ) /*0x5db522*/
          break; /*0x5db522*/
        v23 = (GameSetup **)Block; /*0x5db52c*/
        v24 = j; /*0x5db530*/
        v39 = j >> 1; /*0x5db534*/
        --v40; /*0x5db53d*/
        Block = operator new(4 * (j >> 1)); /*0x5db551*/
        memset(Block, 0, 4 * v39); /*0x5db557*/
        if ( v24 > 0 ) /*0x5db559*/
        {
          v25 = v23; /*0x5db55b*/
          v26 = v24; /*0x5db55d*/
          do /*0x5db593*/
          {
            v27 = *v25; /*0x5db55f*/
            if ( *v25 ) /*0x5db55f*/
            {
              do /*0x5db58d*/
              {
                v28 = (int)v43(v27); /*0x5db567*/
                v29 = v28 & ((1 << v40) - 1); /*0x5db577*/
                v30 = *((unsigned int *)Block + v29); /*0x5db57d*/
                *((unsigned int *)Block + v29) = v27; /*0x5db580*/
                ptr_8 = (GameSetup *)v27->ptr_8; /*0x5db583*/
                v27->ptr_8 = v30; /*0x5db586*/
                v27 = ptr_8; /*0x5db58b*/
              }
              while ( ptr_8 ); /*0x5db58d*/
            }
            ++v25; /*0x5db58f*/
            --v26; /*0x5db592*/
          }
          while ( v26 ); /*0x5db593*/
        }
        operator delete((v23)); /*0x5db596*/
        v22 = v48; /*0x5db59b*/
        j = v39; /*0x5db59f*/
      }
      while ( v39 > v48 ); /*0x5db5a8*/
    }
    operator delete((Block)); /*0x5db5b3*/
    ((DeleteAndZero *)&v35.q004)->Alt(); /*0x5db5bf*/
    ((DeleteAndZero *)&v35)->Alt(); /*0x5db5c8*/
  }
}
// 0x5e2670
void GameSetup::CompareWideString()
{
  const wchar_t *v2; // esi
  unsigned int v3; // edi
  unsigned int v4; // esi

  v2 = WideString::Length((WideString *)this); /*0x5e267c*/
  v3 = 0; /*0x5e267e*/
  if ( WideString::Length((WideString *)this) ) /*0x5e2680*/
  {
    do /*0x5e26ae*/
    {
      v4 = (unsigned int)v2 + v3 + WideString::GetOrEmpty((WideString *)this)[v3]; /*0x5e2698*/
      v2 = (const wchar_t *)((*(((unsigned char *)&(v4)) + (sizeof(v4) - 1))) ^ (v4 << 8)); /*0x5e26a4*/
      ++v3; /*0x5e26a6*/
    }
    while ( v3 < (unsigned int)WideString::Length((WideString *)this) ); /*0x5e26ae*/
  }
  return v2; /*0x5e26b2*/
}
// 0x680ff0
void GameState::Reset()
{
  *this = 0; /*0x680ff4*/
  this->u32_4 = 0; /*0x680ff6*/
  this->u32_188 = -1; /*0x680ff9*/
  this->u32_18C = 0; /*0x681003*/
  this->u32_3F0 = 0; /*0x681009*/
  this->u32_8 = 0; /*0x68100f*/
  this->u32_108 = 0; /*0x681013*/
  this->u32_190 = 0; /*0x68101a*/
  this->u32_294 = 0; /*0x681020*/
  this->u32_2D4 = 0; /*0x681026*/
  this->u32_3D8 = 0; /*0x68102c*/
  this->u32_3DC = 0; /*0x681032*/
  this->u32_3E0 = 0; /*0x681038*/
  this->u32_3E4 = 0; /*0x68103e*/
  this->u32_3E8 = 0; /*0x681044*/
  this->u32_3EC = 0; /*0x68104a*/
  return this; /*0x681050*/
}
// 0x4136c0
void LoadGame::LoadIteratedData()
{

  int v2; // ebx
  char *i; // esi
  int result; // eax
  int v5; // eax
  int v6; // edi
  int v7; // edx
  int v8; // eax
  int v9; // eax
  unsigned int *v10; // edx
  int v11; // edi
  int v12; // [esp+28h] [ebp-8h]
  unsigned int v13; // [esp+2Ch] [ebp-4h] BYREF

  v2 = a2; /*0x4136c4*/
  v12 = 0; /*0x4136cb*/
  for ( i = &this->s_BlockIndex; ; i += 24 ) /*0x4136d3*/
  {
    result = (*(int (**)(int, int *, int, unsigned int))(*(unsigned int *)v2 + 12))(v2, &a2, 4, 0); /*0x4136e2*/
    if ( result < 0 ) /*0x4136e7*/
      break; /*0x4136e7*/
    v5 = a2; /*0x4136ed*/
    v6 = 0; /*0x4136f1*/
    if ( a2 > 0 ) /*0x4136f5*/
    {
      do /*0x413703*/
      {
        result = (*(int (**)(int, unsigned int *, int, unsigned int))(*(unsigned int *)v2 + 12))(v2, &v13, 4, 0); /*0x413703*/
        if ( result < 0 ) /*0x413708*/
          return result; /*0x413708*/
        v7 = *(unsigned int *)i; /*0x41370e*/
        if ( *((unsigned int *)i + 2) < *(unsigned int *)i /*0x413734*/
          || (i[5] || !v7)
          && (v8 = *((unsigned int *)i + 3), v8 > 0)
          && (*(unsigned __int8 (**)(char *, int, unsigned int))(*((unsigned int *)i - 2) + 8))(i - 8, v7 + v8, 0) )
        {
          v9 = *((unsigned int *)i + 2); /*0x41373b*/
          v10 = (unsigned int *)*((unsigned int *)i - 1); /*0x41373e*/
          *((unsigned int *)i + 2) = v9 + 1; /*0x413744*/
          v10[v9] = v13; /*0x41374b*/
        }
        v5 = a2; /*0x41374e*/
      }
      while ( ++v6 < a2 ); /*0x413703*/
    }
    v11 = 0; /*0x413757*/
    if ( v5 > 0 ) /*0x41375b*/
    {
      do /*0x413775*/
        ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, (int *)(*((unsigned int *)i - 1) + 4 * v11++)); /*0x413769*/
      while ( v11 < a2 ); /*0x413775*/
    }
    if ( ++v12 >= 400 ) /*0x413788*/
      return 0; /*0x41378e*/
  }
  return result; /*0x413790*/

}
// 0x413800
void LoadGame::ClearAllSlots()
{
  LoadGame *v2; // esi
  int v3; // ebx
  int LoadGame_field_0x08; // edi
  int v5; // edi

  v2 = this; /*0x413806*/
  v3 = 400; /*0x413808*/
  do /*0x413825*/
  {
    LoadGame_field_0x08 = v2->s_BlockIndex; /*0x41380f*/
    (*(void (**)(LoadGame *))(*(unsigned int *)v2->s_IsLoading + 12))(v2); /*0x413814*/
    (*(void (**)(LoadGame *, int, unsigned int))(*(unsigned int *)v2->s_IsLoading + 8))(v2, LoadGame_field_0x08, 0); /*0x41381e*/
    v2 = &v2->q018; /*0x413821*/
    --v3; /*0x413824*/
  }
  while ( v3 ); /*0x413825*/
  v5 = this->u32_2588; /*0x41382d*/
  (*(void (**)(LoadGame *))(this->u32_2580 + 12))(&this->q00C); /*0x41383b*/
  return (*(int (**)(LoadGame *, int, unsigned int))(this->u32_2580 + 8))(&this->q0140, v5, 0); /*0x413848*/
}
// 0x439260
void LoadGame::DeserializePointerArrays()
{
  int v2; // ebx
  int result; // eax
  int v5; // eax
  int v6; // esi
  int LoadGame_field_0x08; // ecx
  int LoadGame_field_0x14; // eax
  int LoadGame_field_0x10; // eax
  int LoadGame_field_0x04; // edx
  int v11; // esi
  int v12; // ebp
  int v13; // eax
  int LoadGame_field_0x20; // ecx
  int LoadGame_field_0x2C; // eax
  int LoadGame_field_0x28; // eax
  int LoadGame_field_0x1C; // edx
  int v18; // esi
  int v19; // [esp+50h] [ebp-Ch]
  int v20; // [esp+54h] [ebp-8h] BYREF
  int v21; // [esp+58h] [ebp-4h] BYREF

  v2 = a2; /*0x439264*/
  result = (*(int (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)a2 + 12))(a2, &a2, 4, 0); /*0x439279*/
  if ( result >= 0 ) /*0x43927e*/
  {
    v5 = a2; /*0x439284*/
    v6 = 0; /*0x439288*/
    if ( a2 <= 0 ) /*0x43928c*/
    {
  LABEL_11:
      v11 = 0; /*0x4392ed*/
      if ( v5 > 0 ) /*0x4392f1*/
      {
        do /*0x43930b*/
          ObjectPtr::RegisterForTracking( /*0x4392ff*/
            &SwizzleManagerClass_Instance,
            (int *)(this->s_LoadVersion + 4 * v11++));
        while ( v11 < a2 ); /*0x43930b*/
      }
      v12 = (*(int (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)v2 + 12))(v2, &a2, 4, 0); /*0x43931c*/
      if ( v12 >= 0 ) /*0x439320*/
      {
        v13 = a2; /*0x439326*/
        v19 = 0; /*0x43932a*/
        if ( a2 <= 0 ) /*0x439334*/
        {
  LABEL_23:
          v18 = 0; /*0x43939e*/
          if ( v13 > 0 ) /*0x4393a2*/
          {
            do /*0x4393bc*/
              ObjectPtr::RegisterForTracking( /*0x4393b0*/
                &SwizzleManagerClass_Instance,
                (int *)(this->q01C + 4 * v18++));
            while ( v18 < a2 ); /*0x4393bc*/
          }
        }
        else
        {
          while ( 1 ) /*0x439345*/
          {
            v12 = (*(int (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)v2 + 12))(v2, &v21, 4, 0); /*0x439345*/
            if ( v12 < 0 ) /*0x439349*/
              break; /*0x439349*/
            LoadGame_field_0x20 = this->q020; /*0x43934b*/
            if ( this->q028 < LoadGame_field_0x20 /*0x439373*/
              || ((this->q025) || !LoadGame_field_0x20)
              && (LoadGame_field_0x2C = this->q02C, LoadGame_field_0x2C > 0)
              && (*(uint8_t (**)(int *, int, unsigned int))(this->q018 + 8))(
                   &this->q018,
                   LoadGame_field_0x20 + LoadGame_field_0x2C,
                   0) )
            {
              LoadGame_field_0x28 = this->q028; /*0x43937a*/
              LoadGame_field_0x1C = this->q01C; /*0x43937d*/
              this->q028 = LoadGame_field_0x28 + 1; /*0x439383*/
              *(unsigned int *)(LoadGame_field_0x1C + 4 * LoadGame_field_0x28) = v21; /*0x43938a*/
            }
            v13 = a2; /*0x439391*/
            if ( ++v19 >= a2 ) /*0x43939c*/
              goto LABEL_23; /*0x43939c*/
          }
        }
      }
      return v12; /*0x4393be*/
    }
    else
    {
      while ( 1 ) /*0x43929a*/
      {
        result = (*(int (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)v2 + 12))(v2, &v20, 4, 0); /*0x43929a*/
        if ( result < 0 ) /*0x43929f*/
          break; /*0x43929f*/
        LoadGame_field_0x08 = this->s_BlockIndex; /*0x4392a5*/
        if ( this->q010 < LoadGame_field_0x08 /*0x4392ca*/
          || ((this->u8_D) || !LoadGame_field_0x08)
          && (LoadGame_field_0x14 = this->q014, LoadGame_field_0x14 > 0)
          && (*(uint8_t (**)(LoadGame *, int, unsigned int))(*(unsigned int *)this->s_IsLoading + 8))(
               this,
               LoadGame_field_0x08 + LoadGame_field_0x14,
               0) )
        {
          LoadGame_field_0x10 = this->q010; /*0x4392d1*/
          LoadGame_field_0x04 = this->s_LoadVersion; /*0x4392d4*/
          this->q010 = LoadGame_field_0x10 + 1; /*0x4392da*/
          *(unsigned int *)(LoadGame_field_0x04 + 4 * LoadGame_field_0x10) = v20; /*0x4392e1*/
        }
        v5 = a2; /*0x4392e4*/
        if ( ++v6 >= a2 ) /*0x4392eb*/
          goto LABEL_11; /*0x4392eb*/
      }
    }
  }
  return result; /*0x4393c0*/
}
// 0x4c6320
void LoadGame::LoadBlock68()
{
  return (*(int (__stdcall **)(int, LoadGame *, int, unsigned int))(*(unsigned int *)a2 + 12))(a2, this, 68, 0); /*0x4c632f*/
}
// 0x552a40
void LoadProgressMgr::GetInstance()
{
  unsigned int *result; // eax

  result = dword_ABC9BC; /*0x552a40*/
  if ( !dword_ABC9BC ) /*0x552a4a*/
  {
    result = operator new(0x64u); /*0x552a4e*/
    if ( result ) /*0x552a58*/
    {
      *result = 0; /*0x552a5a*/
      result[1] = 0; /*0x552a60*/
      result[2] = 0; /*0x552a63*/
      result[15] = 0; /*0x552a66*/
      result[16] = 0; /*0x552a69*/
      result[17] = 0; /*0x552a6c*/
      result[18] = 0; /*0x552a6f*/
      result[19] = 0; /*0x552a72*/
      result->q050 = 0; /*0x552a75*/
      result->q051 = 0; /*0x552a78*/
      result->q052 = 0; /*0x552a7b*/
      result[21] = 0; /*0x552a7e*/
      result[22] = 0; /*0x552a81*/
      result[23] = 0; /*0x552a84*/
      result[24] = 0; /*0x552a87*/
      dword_ABC9BC = result; /*0x552a8a*/
    }
    else
    {
      dword_ABC9BC = 0; /*0x552a93*/
      return 0; /*0x552a91*/
    }
  }
  return result; /*0x552a8f*/
}
// 0x552aa0
void LoadProgressMgr::Destroy()
{
  if ( dword_ABC9BC ) /*0x552aa8*/
  {
    LoadProgressMgr::ReleaseBuffer(dword_ABC9BC); /*0x552aaa*/
    operator delete((void *)(dword_ABC9BC)); /*0x552ab5*/
  }
  dword_ABC9BC = 0; /*0x552abd*/
}
  dword_ABC9BC = 0; /*0x552abd*/
// 0x5596a0
void LoadSaveDialog::FillList()
{

  LoadSaveDialog *v2; // esi
  int i; // edi
  LoadSaveDialog *v4; // edi
  int v5; // eax
  int v6; // ebp
  wchar_t *StringCSF; // eax
  char *v8; // eax
  int v9; // eax
  LoadSaveDialog v10; // eax
  int v11; // ecx
  LoadSaveDialog v12; // eax
  LoadSaveDialog v13; // edx
  void *v14; // ebp
  int v15; // eax
  LoadSaveDialog v16; // ecx
  int v17; // eax
  LoadSaveDialog v18; // eax
  LoadSaveDialog v19; // edx
  signed int v20; // eax
  int v21; // ecx
  LPARAM v22; // eax
  LRESULT v23; // eax
  LPARAM v24; // ecx
  WPARAM v25; // esi
  WPARAM v26; // ecx
  int v27; // eax
  int v28; // esi
  WPARAM v29; // edx
  int v30; // eax
  int v31; // esi
  signed int v32; // esi
  int v33; // edx
  int v34; // ecx
  const wchar_t *v35; // [esp+8h] [ebp-310h]
  HANDLE hFindFile; // [esp+18h] [ebp-300h]
  unsigned int *hFindFilea; // [esp+18h] [ebp-300h]
  int j; // [esp+20h] [ebp-2F8h]
  LRESULT v40; // [esp+24h] [ebp-2F4h]
  LPARAM lParam; // [esp+28h] [ebp-2F0h] BYREF
  DeleteAndZero v42; // [esp+2Ch] [ebp-2ECh] BYREF
  struct _SYSTEMTIME SystemTime; // [esp+40h] [ebp-2D8h] BYREF
  struct _FILETIME LocalFileTime; // [esp+50h] [ebp-2C8h] BYREF
  CHAR FileName[128]; // [esp+58h] [ebp-2C0h] BYREF
  wchar_t WideCharStr[127]; // [esp+D8h] [ebp-240h] BYREF
  __int16 v47; // [esp+1D6h] [ebp-142h]
  struct _WIN32_FIND_DATAA FindFileData; // [esp+1D8h] [ebp-140h] BYREF

  v2 = this; /*0x5596a9*/
  Gadget::InitProperties((Gadget *)&lParam); /*0x5596b4*/
  for ( i = 0; i < *(unsigned int *)&v2[12]; ++i ) /*0x5596c2*/
    __3_YAXPAX_Z(*(void **)(*(unsigned int *)&v2[9] + 4 * i)); /*0x5596cb*/
  v4 = v2 + 8; /*0x5596de*/
  (*(void (**)(LoadSaveDialog *))(*(unsigned int *)&v2[8] + 12))(v2 + 8); /*0x5596e3*/
  if ( *(unsigned int *)&v2[1] == 2 ) /*0x5596ea*/
  {
    v5 = __2_YAPAXI_Z(0x1BCu); /*0x5596f5*/
    if ( v5 ) /*0x5596ff*/
    {
      *(unsigned int *)(v5 + 288) = 0; /*0x559704*/
      *(unsigned int *)(v5 + 292) = -1; /*0x55970a*/
      *(unsigned int *)(v5 + 424) = -1; /*0x559710*/
      *(unsigned char *)(v5 + 436) = 1; /*0x559716*/
      *(unsigned char *)(v5 + 437) = 0; /*0x55971d*/
      *(unsigned int *)(v5 + 440) = 0; /*0x559723*/
      *(unsigned short *)v5 = 0; /*0x559729*/
      *(unsigned char *)(v5 + 256) = 0; /*0x55972c*/
      *(unsigned short *)(v5 + 296) = 0; /*0x559732*/
      *(unsigned int *)(v5 + 432) = 0; /*0x559739*/
      *(unsigned int *)(v5 + 428) = 0; /*0x55973f*/
      v6 = v5; /*0x559745*/
    }
    else
    {
      v6 = 0; /*0x559749*/
    }
    StringCSF = GetStringCSF(aTxtEmptySlot, 0, g_Str_File_LoadDlg_CPP, 774); /*0x55975c*/
    swprintf((wchar_t *const)v6, (const size_t)StringCSF, v35); /*0x559763*/
    if ( *(int *)((char *)&stru_A83CD9.estimatedHealth + 3) ) /*0x559772*/
    {
      *(unsigned int *)(v6 + 288) = dword_A8B230[130].ptr_C; /*0x55977f*/
      *(unsigned int *)(v6 + 292) = dword_A8B230[202].ptr_C; /*0x559791*/
      *(unsigned int *)(v6 + 424) = dword_A8B230[375].uniqueId; /*0x5597a3*/
      wcscpy( /*0x5597bc*/
        (wchar_t *)(v6 + 296),
        *(const wchar_t **)(*(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 52) + 96));
    }
    else
    {
      *(unsigned int *)(v6 + 288) = 0; /*0x5597c6*/
      *(unsigned int *)(v6 + 292) = dword_A8B3AC; /*0x5597d2*/
      *(unsigned int *)(v6 + 424) = -1; /*0x5597dd*/
      v8 = CharToWideString(unk_A8B380); /*0x5597e7*/
      swprintf((wchar_t *const)(v6 + 296), (const size_t)&off_8240B4, (const wchar_t *const)v8); /*0x5597f9*/
    }
    GetSystemTime(&SystemTime); /*0x559806*/
    SystemTimeToFileTime(&SystemTime, (LPFILETIME)(v6 + 428)); /*0x559818*/
    v9 = *(unsigned int *)&dword_A8B238; /*0x55981e*/
    *(unsigned char *)(v6 + 436) = 0; /*0x559823*/
    *(unsigned int *)(v6 + 440) = v9; /*0x559829*/
    v10 = v2[10]; /*0x55982f*/
    if ( *(unsigned int *)&v2[12] < *(unsigned int *)&v10 /*0x55984f*/
      || (v2[11].__tail_0[1] || !*(unsigned int *)&v10)
      && (v11 = (int)v2[13], v11 > 0)
      && (*(unsigned __int8 (**)(LoadSaveDialog *, int, unsigned int))(*(unsigned int *)v4 + 8))(
           v2 + 8,
           *(unsigned int *)&v10 + v11,
           0) )
    {
      v12 = v2[12]; /*0x559856*/
      v13 = v2[9]; /*0x559859*/
      v2[12] = (LoadSaveDialog)(*(unsigned int *)&v12 + 1); /*0x55985f*/
      *(unsigned int *)(*(unsigned int *)&v13 + 4 * *(unsigned int *)&v12) = v6; /*0x559862*/
    }
  }
  sprintf(FileName, "*.%3s", *(unsigned int *)&v2[2]); /*0x559873*/
  v14 = 0; /*0x55988e*/
  hFindFile = FindFirstFileA(FileName, &FindFileData); /*0x559893*/
  if ( hFindFile != (HANDLE)-1 ) /*0x559897*/
  {
    do /*0x559968*/
    {
      if ( (FindFileData.dwFileAttributes & 0x116) == 0 ) /*0x5598a8*/
      {
        if ( !v14 ) /*0x5598b0*/
        {
          v15 = __2_YAPAXI_Z(0x1BCu); /*0x5598b7*/
          if ( v15 ) /*0x5598c1*/
          {
            *(unsigned int *)(v15 + 288) = 0; /*0x5598c6*/
            *(unsigned int *)(v15 + 292) = -1; /*0x5598cc*/
            *(unsigned int *)(v15 + 424) = -1; /*0x5598d2*/
            *(unsigned char *)(v15 + 436) = 1; /*0x5598d8*/
            *(unsigned char *)(v15 + 437) = 0; /*0x5598df*/
            *(unsigned int *)(v15 + 440) = 0; /*0x5598e5*/
            *(unsigned short *)v15 = 0; /*0x5598eb*/
            *(unsigned char *)(v15 + 256) = 0; /*0x5598ee*/
            *(unsigned short *)(v15 + 296) = 0; /*0x5598f4*/
            *(unsigned int *)(v15 + 432) = 0; /*0x5598fb*/
            *(unsigned int *)(v15 + 428) = 0; /*0x559901*/
            v14 = (void *)v15; /*0x559907*/
          }
          else
          {
            v14 = 0; /*0x55990b*/
          }
        }
        if ( (*(unsigned __int8 (**)(LoadSaveDialog *, void *, struct _WIN32_FIND_DATAA *))(*(unsigned int *)v2 + 16))( /*0x55991f*/
               v2,
               v14,
               &FindFileData) == 1 )
        {
          v16 = v2[10]; /*0x559921*/
          if ( *(unsigned int *)&v2[12] < *(unsigned int *)&v16 /*0x559943*/
            || (v2[11].__tail_0[1] || !*(unsigned int *)&v16)
            && (v17 = (int)v2[13], v17 > 0)
            && (*(unsigned __int8 (**)(LoadSaveDialog *, int, unsigned int))(*(unsigned int *)v4 + 8))(
                 v2 + 8,
                 *(unsigned int *)&v16 + v17,
                 0) )
          {
            v18 = v2[12]; /*0x55994a*/
            v19 = v2[9]; /*0x55994d*/
            v2[12] = (LoadSaveDialog)(*(unsigned int *)&v18 + 1); /*0x559953*/
            *(unsigned int *)(*(unsigned int *)&v19 + 4 * *(unsigned int *)&v18) = v14; /*0x559956*/
          }
          v14 = 0; /*0x559959*/
        }
      }
    }
    while ( FindNextFileA(hFindFile, &FindFileData) ); /*0x559968*/
    if ( v14 ) /*0x559978*/
      __3_YAXPAX_Z(v14); /*0x55997b*/
    FindClose(hFindFile); /*0x559988*/
  }
  v20 = (signed int)v2[12]; /*0x55998e*/
  if ( v20 > 0 ) /*0x559993*/
  {
    qsort(*(void **)&v2[9], v20, 4u, sub_559D30); /*0x5599a5*/
    SendMessageA(hWnd, 0x184u, 0, 0); /*0x5599c2*/
    v21 = 0; /*0x5599c7*/
    for ( j = 0; v21 < *(unsigned int *)&v2[12]; j = v21 ) /*0x5599cf*/
    {
      v22 = *(unsigned int *)(*(unsigned int *)&v2[9] + 4 * v21); /*0x5599d8*/
      hFindFilea = (unsigned int *)v22; /*0x5599db*/
      if ( !*(unsigned char *)(v22 + 437) ) /*0x5599df*/
      {
        v23 = SendMessageA(hWnd, 0x4CDu, 0, v22); /*0x5599f3*/
        v24 = (LPARAM)hFindFilea; /*0x5599f5*/
        v25 = v23; /*0x5599f9*/
        v40 = v23; /*0x5599fb*/
        if ( hFindFilea[110] ) /*0x5599ff*/
        {
          lParam = 1; /*0x559a10*/
          ((WideString *)&v42)->Reassign( asc_829F78); /*0x559a18*/
          v26 = (unsigned __int16)v25 << 16; /*0x559a2a*/
          (v26) = ((v26) & ~0xFF) | ((-56) & 0xFF); /*0x559a2d*/
          SendMessageA(hWnd, 0x4A8u, v26, (LPARAM)&lParam); /*0x559a37*/
          v24 = (LPARAM)hFindFilea; /*0x559a39*/
        }
        if ( *(unsigned int *)(v24 + 432) != -1 && *(unsigned int *)(v24 + 428) != -1 ) /*0x559a59*/
        {
          FileTimeToLocalFileTime((const FILETIME *)(v24 + 428), &LocalFileTime); /*0x559a65*/
          FileTimeToSystemTime(&LocalFileTime, &SystemTime); /*0x559a75*/
          GetDateFormatA(0x400u, 1u, &SystemTime, 0, FileName, 128); /*0x559a92*/
          lParam = 1; /*0x559aae*/
          v27 = MultiByteToWideChar(0, 0, FileName, -1, WideCharStr, 128); /*0x559ab6*/
          v47 = 0; /*0x559abc*/
          WideCharStr[v27] = 0; /*0x559ac4*/
          ((WideString *)&v42)->Reassign( WideCharStr); /*0x559ad8*/
          v28 = (unsigned __int16)v25 << 16; /*0x559ae7*/
          v29 = v28; /*0x559aea*/
          (v29) = ((v29) & ~0xFF) | ((-1) & 0xFF); /*0x559aed*/
          SendMessageA(hWnd, 0x4A8u, v29, (LPARAM)&lParam); /*0x559af7*/
          GetTimeFormatA(0x400u, 0, &SystemTime, 0, FileName, 128); /*0x559b0f*/
          lParam = 1; /*0x559b2b*/
          v30 = MultiByteToWideChar(0, 0, FileName, -1, WideCharStr, 128); /*0x559b33*/
          v47 = 0; /*0x559b40*/
          WideCharStr[v30] = 0; /*0x559b4d*/
          ((WideString *)&v42)->Reassign( WideCharStr); /*0x559b55*/
          SendMessageA(hWnd, 0x4A8u, v28 | 0x13B, (LPARAM)&lParam); /*0x559b6c*/
          v25 = v40; /*0x559b6e*/
          v24 = (LPARAM)hFindFilea; /*0x559b72*/
        }
        SendMessageA(hWnd, 0x19Au, v25, v24); /*0x559b7e*/
        v21 = j; /*0x559b80*/
        v2 = this; /*0x559b84*/
      }
      ++v21; /*0x559b8b*/
    }
    v31 = (int)v2[1]; /*0x559b98*/
    if ( v31 == 1 ) /*0x559b9e*/
    {
      v32 = 0; /*0x559bb9*/
      v33 = this->u32_30; /*0x559bbb*/
      if ( v33 > 0 ) /*0x559bc0*/
      {
        v34 = this->u32_24; /*0x559bc2*/
        while ( !*(unsigned char *)(*(unsigned int *)v34 + 436) || *(unsigned char *)(*(unsigned int *)v34 + 437) ) /*0x559bd5*/
        {
          ++v32; /*0x559bd7*/
          v34 += 4; /*0x559bd8*/
          if ( v32 >= v33 ) /*0x559bdd*/
            goto LABEL_55; /*0x559bdd*/
        }
        SendMessageA(hWnd, 0x186u, v32, 0); /*0x559be9*/
        SendMessageA(hWnd, 0x197u, v32, 0); /*0x559bf3*/
      }
    }
    else if ( v31 > 1 && v31 <= 3 ) /*0x559ba5*/
    {
      SendMessageA(hWnd, 0x186u, 0, 0); /*0x559baf*/
      SendMessageA(hWnd, 0x197u, 0, 0); /*0x559bb3*/
    }
  }
LABEL_55:
  ((DeleteAndZero *)&v42.DeleteAndZero_field_0x04)->Alt(); /*0x559bf5*/
  ((DeleteAndZero *)&v42)->Alt(); /*0x559c02*/

}
// 0x4b6c30
void LoadScreen::RenderLoop()
{

  double v1; // st7
  int v2; // esi
  size_t Size; // eax
  void *v4; // edi
  signed int v5; // eax
  size_t v6; // eax
  int v7; // edi
  signed int v8; // eax
  int v9; // esi
  int v10; // ebp
  int v11; // ebx
  int v12; // esi
  int v13; // edi
  Struct *v14; // esi
  int v15; // eax
  int v16; // edi
  void *v17; // eax
  int i; // esi
  int v19; // eax
  char *v20; // ecx
  char v21; // dl
  ConvertClass *v22; // eax
  BuildingClass *v23; // ebp
  ConvertClass *v24; // eax
  BuildingClass *v25; // edi
  void *v26; // eax
  int j; // esi
  int v28; // eax
  char *v29; // ecx
  char v30; // dl
  ConvertClass *v31; // eax
  BuildingClass *v32; // esi
  int v33; // ebp
  int v34; // ecx
  unsigned int *v35; // edx
  int v36; // eax
  AbstractClass *v37; // ecx
  int v38; // edi
  int Capacity; // eax
  int v40; // ebx
  int v41; // esi
  int v42; // eax
  int k; // edi
  unsigned int *v44; // esi
  int v45; // eax
  int v46; // edi
  int v47; // ebp
  int v48; // esi
  ShapeButtonClass *v49; // ebx
  int v50; // ecx
  unsigned int *v51; // eax
  ShapeButtonClass *v52; // edi
  void *v53; // eax
  unsigned char *v54; // eax
  int v55; // esi
  ShapeButtonClass *v56; // edi
  void *v57; // eax
  unsigned char *v58; // eax
  int v59; // ebp
  int v60; // esi
  int v61; // ebx
  int v62; // edi
  ShapeButtonClass *v63; // eax
  int v64; // ecx
  unsigned int *v65; // eax
  StreamObj *v66; // esi
  BSurface *v67; // ebx
  int v68; // esi
  int v69; // eax
  int v70; // ebp
  unsigned int *v71; // edi
  int v72; // eax
  int ptr_4; // ebx
  int v74; // esi
  signed int v75; // esi
  int v76; // ecx
  int v77; // ebx
  int v78; // ecx
  int v79; // eax
  int v80; // esi
  int v81; // eax
  int v82; // ebp
  int v83; // eax
  __int16 *v84; // eax
  unsigned int *v85; // edi
  __int16 *v86; // ebp
  int v87; // esi
  int v88; // ebx
  int v89; // esi
  int v90; // edx
  int v91; // ebx
  int v92; // eax
  int v93; // edi
  DWORD v94; // eax
  int v95; // ecx
  int v96; // edx
  int v97; // eax
  int v98; // eax
  int v99; // esi
  int v100; // eax
  int LoadScreen_field_0x04; // edx
  int v102; // edi
  int v103; // esi
  int v104; // eax
  int v105; // eax
  int v106; // eax
  unsigned int *v107; // esi
  int v108; // edi
  int v109; // ebx
  int v110; // eax
  int v111; // ebp
  int v112; // eax
  bool v113; // zf
  int v114; // ebx
  AbstractClass *v115; // edx
  int v116; // ecx
  int v117; // ebp
  int v118; // esi
  int v119; // edi
  unsigned int *Items; // eax
  int v121; // esi
  int v122; // eax
  int v123; // eax
  int v124; // eax
  unsigned int *v125; // edi
  int v126; // ebx
  int v127; // esi
  int v128; // ebp
  int v129; // eax
  int v130; // ebx
  int v131; // esi
  int v132; // ebp
  int v133; // eax
  int v134; // esi
  int v135; // ecx
  int v136; // edx
  int v137; // eax
  int v138; // edi
  int v139; // eax
  int v140; // eax
  unsigned int *v141; // edi
  int v142; // ebp
  int v143; // esi
  int v144; // ebx
  int v145; // eax
  int v146; // esi
  int v147; // edx
  DWORD v148; // eax
  int v149; // edx
  int v150; // eax
  int v151; // eax
  unsigned char *v152; // ecx
  unsigned char *v153; // ecx
  DWORD (*v154)(); // ebp
  int n; // edi
  unsigned int v156; // ebx
  signed int v157; // esi
  int v158; // eax
  __int16 *v159; // ecx
  int v160; // esi
  int v161; // ecx
  int v162; // ebx
  int v166; // esi
  int v167; // esi
  unsigned __int16 v168; // ax
  int v169; // eax
  int v170; // ebp
  int v171; // edx
  char v172; // bl
  int v173; // esi
  char *v174; // ecx
  int v175; // edi
  int v176; // eax
  DWORD v177; // edi
  int *v178; // ecx
  int *v179; // ecx
  int *v180; // ecx
  int *v181; // ecx
  int v182; // ecx
  int v183; // eax
  DWORD v184; // eax
  int v185; // esi
  unsigned int v186; // edi
  DWORD v187; // edx
  int v188; // edi
  int v189; // edi
  DWORD v190; // eax
  int v191; // ebp
  int v192; // esi
  DWORD v193; // ebx
  int v194; // edi
  int v196; // eax
  int v197; // ebp
  int v198; // esi
  wchar_t *StringCSF; // eax
  signed int v200; // edx
  int v201; // eax
  int v202; // esi
  int v203; // eax
  int *v205; // eax
  int v206; // esi
  TechnoClass *v207; // ecx
  int v208; // ebx
  int v209; // edx
  int v210; // edx
  int v211; // edi
  AbstractClass *v212; // ebx
  int v213; // edx
  int v214; // eax
  char v215; // al
  int v216; // esi
  int v217; // edx
  int v218; // edx
  int v219; // ecx
  int v220; // edx
  int v221; // esi
  int v222; // edx
  int v223; // edi
  int v224; // edi
  int v225; // eax
  int v226; // eax
  void *v227; // ebx
  int v228; // ecx
  int v229; // eax
  FileTreeNode *v230; // esi
  int v231; // edi
  int *v232; // ebp
  FileTreeNode *v233; // ecx
  FileTreeNode v234; // eax
  FileTreeNode *v235; // ebx
  int v236; // edx
  int v237; // eax
  FileTreeNode *v238; // esi
  int v239; // edi
  unsigned int *v240; // esi
  int v241; // edi
  StreamObj *v242; // esi
  BSurface *v243; // eax
  Stream *v244; // esi
  BSurface *v245; // eax
  int *v247; // [esp+12h] [ebp-698h]
  int *v248; // [esp+12h] [ebp-698h]
  int v249; // [esp+22h] [ebp-688h]
  int *v250; // [esp+26h] [ebp-684h]
  int *v251; // [esp+2Ah] [ebp-680h]
  int v252; // [esp+2Eh] [ebp-67Ch]
  int *v253; // [esp+32h] [ebp-678h]
  char v254; // [esp+41h] [ebp-669h]
  int m; // [esp+42h] [ebp-668h]
  int v256; // [esp+42h] [ebp-668h]
  signed int v257; // [esp+42h] [ebp-668h]
  unsigned int *v258; // [esp+42h] [ebp-668h]
  int v259; // [esp+42h] [ebp-668h]
  int ii; // [esp+42h] [ebp-668h]
  int jj; // [esp+42h] [ebp-668h]
  int v262; // [esp+42h] [ebp-668h]
  char v263; // [esp+49h] [ebp-661h]
  char v264; // [esp+49h] [ebp-661h]
  int v265; // [esp+4Ah] [ebp-660h]
  int v266; // [esp+4Ah] [ebp-660h]
  signed int v267; // [esp+4Ah] [ebp-660h]
  float v268; // [esp+4Ah] [ebp-660h]
  int v269; // [esp+4Ah] [ebp-660h]
  int v270; // [esp+4Ah] [ebp-660h]
  bool v271; // [esp+51h] [ebp-659h]
  int v272; // [esp+52h] [ebp-658h]
  __int16 Blocka; // [esp+56h] [ebp-654h]
  __int16 Blockb; // [esp+56h] [ebp-654h]
  unsigned int *Block; // [esp+56h] [ebp-654h]
  bool v276; // [esp+5Ch] [ebp-64Eh]
  bool v277; // [esp+5Dh] [ebp-64Dh]
  BuildingClass *v278; // [esp+5Eh] [ebp-64Ch]
  int v279; // [esp+62h] [ebp-648h]
  int v280; // [esp+62h] [ebp-648h]
  int v281; // [esp+62h] [ebp-648h]
  int v282; // [esp+62h] [ebp-648h]
  int v283; // [esp+62h] [ebp-648h]
  int v284; // [esp+66h] [ebp-644h]
  int v285; // [esp+6Ah] [ebp-640h]
  int v286; // [esp+6Ah] [ebp-640h]
  int v287; // [esp+6Ah] [ebp-640h]
  int v288; // [esp+6Ah] [ebp-640h]
  int v289; // [esp+6Ah] [ebp-640h]
  int v290; // [esp+6Ah] [ebp-640h]
  unsigned int v291; // [esp+6Ah] [ebp-640h]
  double v292; // [esp+6Ah] [ebp-640h]
  int v293; // [esp+6Ah] [ebp-640h]
  __int16 v294; // [esp+73h] [ebp-637h]
  char v295; // [esp+75h] [ebp-635h]
  int v296; // [esp+76h] [ebp-634h]
  int v297; // [esp+76h] [ebp-634h]
  int v298; // [esp+76h] [ebp-634h]
  int v299; // [esp+76h] [ebp-634h]
  int v300; // [esp+7Ah] [ebp-630h]
  int v301; // [esp+7Ah] [ebp-630h]
  int v302; // [esp+7Ah] [ebp-630h]
  int v303; // [esp+7Ah] [ebp-630h]
  int *v304; // [esp+7Eh] [ebp-62Ch]
  int v305; // [esp+82h] [ebp-628h]
  int abstractFlags; // [esp+8Ah] [ebp-620h]
  unsigned int *v307; // [esp+8Eh] [ebp-61Ch]
  int v308; // [esp+8Eh] [ebp-61Ch]
  int v309; // [esp+92h] [ebp-618h]
  GadgetClass *v310; // [esp+96h] [ebp-614h]
  TypeList v311; // [esp+9Ah] [ebp-610h] BYREF
  void *v312; // [esp+B6h] [ebp-5F4h]
  int v313; // [esp+BAh] [ebp-5F0h]
  int v314; // [esp+BEh] [ebp-5ECh]
  int kk; // [esp+C2h] [ebp-5E8h]
  int v316; // [esp+C6h] [ebp-5E4h]
  int v317; // [esp+CAh] [ebp-5E0h]
  int v318; // [esp+CEh] [ebp-5DCh]
  int v319; // [esp+D2h] [ebp-5D8h]
  int v320; // [esp+D6h] [ebp-5D4h]
  LoadScreen v321; // [esp+DAh] [ebp-5D0h] BYREF
  int SubFile; // [esp+F2h] [ebp-5B8h]
  TypeList v323; // [esp+F6h] [ebp-5B4h] BYREF
  int v324; // [esp+112h] [ebp-598h]
  int v325; // [esp+116h] [ebp-594h]
  int v326[2]; // [esp+11Ah] [ebp-590h]
  int v327; // [esp+122h] [ebp-588h]
  int *SHPFrame; // [esp+126h] [ebp-584h]
  DWORD v329; // [esp+12Ah] [ebp-580h]
  int v330; // [esp+12Eh] [ebp-57Ch]
  __int16 *v331; // [esp+132h] [ebp-578h]
  DWORD v332; // [esp+136h] [ebp-574h]
  int v333; // [esp+13Ah] [ebp-570h]
  int v334; // [esp+13Eh] [ebp-56Ch]
  __int64 v335; // [esp+142h] [ebp-568h]
  double v336; // [esp+14Ah] [ebp-560h]
  DWORD v337; // [esp+152h] [ebp-558h]
  DWORD v338; // [esp+156h] [ebp-554h]
  void *v339; // [esp+15Ah] [ebp-550h]
  TechnoClass *v340; // [esp+15Eh] [ebp-54Ch]
  unsigned int v341[4]; // [esp+162h] [ebp-548h] BYREF
  DWORD Time; // [esp+172h] [ebp-538h]
  int v343; // [esp+176h] [ebp-534h]
  int v344[2]; // [esp+17Ah] [ebp-530h] BYREF
  int v345[2]; // [esp+182h] [ebp-528h] BYREF
  int v346[2]; // [esp+18Ah] [ebp-520h] BYREF
  int v347[3]; // [esp+192h] [ebp-518h] BYREF
  int v348; // [esp+19Eh] [ebp-50Ch]
  int v349; // [esp+1A2h] [ebp-508h]
  int v350; // [esp+1A6h] [ebp-504h]
  int v351[2]; // [esp+1AAh] [ebp-500h] BYREF
  __int64 v352; // [esp+1B2h] [ebp-4F8h]
  int v353; // [esp+1BAh] [ebp-4F0h]
  int v354; // [esp+1BEh] [ebp-4ECh]
  int v355[2]; // [esp+1C2h] [ebp-4E8h] BYREF
  int v356[2]; // [esp+1CAh] [ebp-4E0h] BYREF
  int v357[2]; // [esp+1D2h] [ebp-4D8h] BYREF
  int v358[2]; // [esp+1DAh] [ebp-4D0h] BYREF
  __int64 v359; // [esp+1E2h] [ebp-4C8h]
  int v360[2]; // [esp+1EAh] [ebp-4C0h] BYREF
  int Ticks; // [esp+1F2h] [ebp-4B8h]
  int v362; // [esp+1F6h] [ebp-4B4h]
  int v363; // [esp+1FAh] [ebp-4B0h]
  int v364; // [esp+1FEh] [ebp-4ACh]
  int v365; // [esp+202h] [ebp-4A8h]
  int v366; // [esp+206h] [ebp-4A4h]
  int v367[4]; // [esp+20Ah] [ebp-4A0h] BYREF
  int v368[4]; // [esp+21Ah] [ebp-490h] BYREF
  int v369[4]; // [esp+22Ah] [ebp-480h] BYREF
  int v370[4]; // [esp+23Ah] [ebp-470h] BYREF
  unsigned int v371[3]; // [esp+24Ah] [ebp-460h] BYREF
  int v372; // [esp+256h] [ebp-454h]
  unsigned int v373[4]; // [esp+25Ah] [ebp-450h] BYREF
  unsigned int v374[4]; // [esp+26Ah] [ebp-440h] BYREF
  int v375[4]; // [esp+27Ah] [ebp-430h] BYREF
  unsigned int v376[4]; // [esp+28Ah] [ebp-420h] BYREF
  int v377[6]; // [esp+29Ah] [ebp-410h] BYREF
  int v378; // [esp+2B2h] [ebp-3F8h]
  int v379; // [esp+2B6h] [ebp-3F4h]
  int v380[4]; // [esp+2BAh] [ebp-3F0h] BYREF
  char v381[8]; // [esp+2CAh] [ebp-3E0h] BYREF
  CCFileClass v382; // [esp+2D2h] [ebp-3D8h] BYREF
  char v383[12]; // [esp+32Ah] [ebp-380h] BYREF
  int v384; // [esp+336h] [ebp-374h]
  CCFileClass v385; // [esp+33Eh] [ebp-36Ch] BYREF
  char v386[12]; // [esp+396h] [ebp-314h] BYREF
  int v387; // [esp+3A2h] [ebp-308h]
  Struct v388[192]; // [esp+3AAh] [ebp-300h] BYREF

  abstractFlags = dword_A8B230[375].abstractFlags; /*0x4b6c53*/
  v2 = 0; /*0x4b6c5e*/
  v318 = (*(int (**)(int))(*(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 36) + 24))(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 36); /*0x4b6c65*/
  LODWORD(v336) = 0; /*0x4b6c6c*/
  do /*0x4b6cfa*/
  {
    CCFileClass::Construct(&v382, (&off_820334)[v2]); /*0x4b6c86*/
    Size = CCFileClass::GetSize(&v382); /*0x4b6c92*/
    v4 = (void *)__2_YAPAXI_Z(Size); /*0x4b6ca7*/
    v5 = CCFileClass::GetSize(&v382); /*0x4b6ca9*/
    CCFileClass::Read(&v382, v4, v5); /*0x4b6cb7*/
    v380[v2] = (int)v4; /*0x4b6cc3*/
    /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E16B0) */  /*0x4b6cca*/
    v384 = 0; /*0x4b6cd1*/
    Vector::Clear((int)v383); /*0x4b6cdc*/
    *(unsigned int *)v382.__tail_0 = &off_7E1668; /*0x4b6ce8*/
    ((BufferIOFileClass *)&v382)->Dtor(); /*0x4b6cef*/
    ++v2; /*0x4b6cf4*/
  }
  while ( v2 < 4 ); /*0x4b6cfa*/
  v343 = (int)SearchMIXFile(aLoadoutShp, 0); /*0x4b6d13*/
  v331 = (__int16 *)SearchMIXFile(aPilotlitShp, 0); /*0x4b6d26*/
  v339 = SearchMIXFile(aXxiconShp, 0); /*0x4b6d32*/
  CCFileClass::Construct(&v385, (&dword_820324)[abstractFlags]); /*0x4b6d4c*/
  v6 = CCFileClass::GetSize(&v385); /*0x4b6d58*/
  v7 = __2_YAPAXI_Z(v6); /*0x4b6d63*/
  v320 = v7; /*0x4b6d6f*/
  v8 = CCFileClass::GetSize(&v385); /*0x4b6d76*/
  CCFileClass::Read(&v385, (void *)v7, v8); /*0x4b6d84*/
  v9 = __2_YAPAXI_Z(0x20u); /*0x4b6d90*/
  if ( v9 ) /*0x4b6d97*/
  {
    v10 = v7->ptr_4; /*0x4b6d99*/
    v11 = v7->ptr_2; /*0x4b6d9d*/
    SubFile = MixFileClass::GetSubFile((MixFileClass *)v7, 0); /*0x4b6dae*/
    Surface::Construct((Surface *)v9, v11, v10); /*0x4b6db5*/
    v249 = SubFile; /*0x4b6dc5*/
    v9->u32_C = 0; /*0x4b6dc9*/
    /* X11: ptr_0 install elided (X67 star-deref, RHS XSurface_Vtable) */  /*0x4b6dd0*/
    v9->u32_10 = 1; /*0x4b6dd6*/
    Buffer::Init(&v9->q014, v249, v10 * v11); /*0x4b6ddd*/
    /* X11: ptr_0 install elided (X67 star-deref, RHS BSurface_Vtable) */  /*0x4b6de2*/
    v304 = (int *)v9; /*0x4b6de8*/
  }
  else
  {
    v304 = 0; /*0x4b6dee*/
  }
  v12 = v7->ptr_4; /*0x4b6dfc*/
  v13 = v7->ptr_2; /*0x4b6e02*/
  v272 = ((*(int (**)(void))(g_DSurface_Hidden->ptr_0 + 128))() - v12) / 2; /*0x4b6e1b*/
  v14 = v388; /*0x4b6e24*/
  v15 = (*(int (**)(ObjectClass *))(g_DSurface_Hidden->ptr_0 + 124))(g_DSurface_Hidden) - v13; /*0x4b6e2b*/
  v16 = 256; /*0x4b6e2e*/
  v305 = v15 / 2; /*0x4b6e35*/
  do /*0x4b6e44*/
  {
    Struct::Zero3(v14); /*0x4b6e3b*/
    v14 = (Struct *)((char *)v14 + 3); /*0x4b6e40*/
    --v16; /*0x4b6e43*/
  }
  while ( v16 ); /*0x4b6e44*/
  v17 = SearchMIXFile(aDropshipPal, 0); /*0x4b6e52*/
  memcpy(v388, v17, sizeof(v388)); /*0x4b6e60*/
  for ( i = 0; i < 256; ++i ) /*0x4b6e68*/
  {
    v19 = 3 * (i % 256); /*0x4b6e7a*/
    v20 = (char *)v388 + v19; /*0x4b6e84*/
    LOBYTE(Blocka) = 4 * *((unsigned char *)&v388[0].Struct_field_00 + v19); /*0x4b6e8e*/
    v21 = *((unsigned char *)&v388[0].Struct_field_00 + v19 + 1); /*0x4b6e92*/
    LOBYTE(v19) = *((unsigned char *)&v388[0].Struct_field_00 + v19 + 2); /*0x4b6e99*/
    (Blocka) = ((Blocka) & ~(0xFF << 8)) | (((4 * v21) & 0xFF) << 8); /*0x4b6ea3*/
    *(unsigned short *)v20 = Blocka; /*0x4b6eb0*/
    v20[2] = 4 * v19; /*0x4b6eb9*/
  }
  v22 = (ConvertClass *)__2_YAPAXI_Z(0x188u); /*0x4b6ec3*/
  if ( v22 ) /*0x4b6ecd*/
    v23 = (BuildingClass *)ConvertClass::Construct( /*0x4b6eee*/
                             v22,
                             (int)v388,
                             (int)&FileSystem_TEMPERAT_PAL,
                             (int)g_DSurface_Primary,
                             53,
                             0);
  else
    v23 = 0; /*0x4b6ef2*/
  v278 = v23; /*0x4b6ef9*/
  v24 = (ConvertClass *)__2_YAPAXI_Z(0x188u); /*0x4b6efd*/
  if ( v24 ) /*0x4b6f07*/
    v25 = (BuildingClass *)ConvertClass::Construct( /*0x4b6f28*/
                             v24,
                             (int)v388,
                             (int)&FileSystem_TEMPERAT_PAL,
                             (int)g_DSurface_Primary,
                             1,
                             0);
  else
    v25 = 0; /*0x4b6f2c*/
  SubFile = (int)v25; /*0x4b6f3a*/
  v26 = SearchMIXFile(aCameoPal, 0); /*0x4b6f41*/
  memcpy(v388, v26, sizeof(v388)); /*0x4b6f4f*/
  for ( j = 0; j < 256; ++j ) /*0x4b6f57*/
  {
    v28 = 3 * (j % 256); /*0x4b6f69*/
    v29 = (char *)v388 + v28; /*0x4b6f73*/
    LOBYTE(Blockb) = 4 * *((unsigned char *)&v388[0].Struct_field_00 + v28); /*0x4b6f7d*/
    v30 = *((unsigned char *)&v388[0].Struct_field_00 + v28 + 1); /*0x4b6f81*/
    LOBYTE(v28) = *((unsigned char *)&v388[0].Struct_field_00 + v28 + 2); /*0x4b6f88*/
    (Blockb) = ((Blockb) & ~(0xFF << 8)) | (((4 * v30) & 0xFF) << 8); /*0x4b6f92*/
    *(unsigned short *)v29 = Blockb; /*0x4b6f9f*/
    v29[2] = 4 * v28; /*0x4b6fa8*/
  }
  v31 = (ConvertClass *)__2_YAPAXI_Z(0x188u); /*0x4b6fb2*/
  if ( v31 ) /*0x4b6fbc*/
    v32 = (BuildingClass *)ConvertClass::Construct( /*0x4b6fdd*/
                             v31,
                             (int)v388,
                             (int)&FileSystem_TEMPERAT_PAL,
                             (int)g_DSurface_Primary,
                             1,
                             0);
  else
    v32 = 0; /*0x4b6fe1*/
  v326[0] = (int)v32; /*0x4b6fe7*/
  SHPFrame = (int *)BuildingClass::GetSHPFrame(v23, 0); /*0x4b6ff7*/
  v327 = BuildingClass::GetSHPFrame(v32, 64); /*0x4b7007*/
  v330 = BuildingClass::GetSHPFrame(v25, 64); /*0x4b7019*/
  (*(void (**)(ObjectClass *, unsigned int))(g_DSurface_Hidden->ptr_0 + 24))(g_DSurface_Hidden, 0); /*0x4b7024*/
  TypeList::TechnoTypeConstructor(&v311, 0, 0); /*0x4b702f*/
  v33 = *(int *)((char *)&stru_A83CD9.abstractFlags + 3) + dword_A8E358; /*0x4b7048*/
  v34 = 0; /*0x4b704b*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E858C) */  /*0x4b704f*/
  v311.CapacityIncrement = 10; /*0x4b7057*/
  v311.Count = 0; /*0x4b7062*/
  if ( dword_A83CA8 <= 0 ) /*0x4b706d*/
  {
LABEL_25:
    (v34) = ((v34) & ~0xFF) | ((-1) & 0xFF); /*0x4b708a*/
  }
  else
  {
    v35 = dword_A83C9C; /*0x4b7078*/
    while ( *v35 != *(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 52) ) /*0x4b7080*/
    {
      ++v34; /*0x4b7082*/
      ++v35; /*0x4b7083*/
      if ( v34 >= dword_A83CA8 ) /*0x4b7088*/
        goto LABEL_25; /*0x4b7088*/
    }
  }
  v36 = 1 << v34; /*0x4b7091*/
  v37 = dword_A8B230; /*0x4b7093*/
  v317 = v36; /*0x4b7099*/
  if ( dword_A8B230[376].ptr_4 > 0 ) /*0x4b70a8*/
  {
    v38 = 0; /*0x4b70ae*/
    Capacity = v311.Capacity; /*0x4b70b8*/
    v40 = v317; /*0x4b70bc*/
    while ( 1 ) /*0x4b70c9*/
    {
      v41 = *(unsigned int *)(v37[375].referenceCount + 4 * v38); /*0x4b70c9*/
      if ( (v40 & *(unsigned int *)(v41 + 1740)) != 0 && *(unsigned int *)(v37[376].abstractFlags + 4 * v38) ) /*0x4b70da*/
      {
        if ( v311.Count < Capacity ) /*0x4b70e7*/
          goto LABEL_35; /*0x4b70e7*/
        if ( !v311.IsAllocated[0] && Capacity || v311.CapacityIncrement <= 0 ) /*0x4b70fe*/
          goto LABEL_37; /*0x4b70fe*/
        if ( (*(unsigned __int8 (**)(TypeList *, int, unsigned int))(v311.ptr_0 + 8))( /*0x4b710d*/
               &v311,
               v311.CapacityIncrement + Capacity,
               0) )
        {
LABEL_35:
          v42 = v311.Count++; /*0x4b711b*/
          *(unsigned int *)(v311.Items + 4 * v42) = v41; /*0x4b7129*/
        }
        v37 = dword_A8B230; /*0x4b712c*/
        Capacity = v311.Capacity; /*0x4b7132*/
      }
LABEL_37:
      if ( ++v38 >= v37[376].ptr_4 ) /*0x4b713f*/
        goto LABEL_56; /*0x4b713f*/
    }
  }
  for ( k = 0; k < v33; ++k ) /*0x4b714a*/
  {
    if ( k >= dword_A8E358 ) /*0x4b7157*/
      v44 = *(unsigned int **)(*(int *)((char *)&stru_A83CD9.ptr_8 + 3) + 4 * (k - dword_A8E358)); /*0x4b716e*/
    else
      v44 = (unsigned int *)*((unsigned int *)dword_A8E34C + k); /*0x4b715f*/
    if ( v44[397] <= *(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 468) /*0x4b71f9*/
      && ((*(int (**)(unsigned int *))(*v44 + 44))(v44) != 16 || v44[239] != 1)
      && v44[397] != -1
      && (*(int (**)(unsigned int *))(*v44 + 172))(v44) > 10
      && (v44[435] & v317) != 0
      && (v311.Count < v311.Capacity
       || (v311.IsAllocated[0] || !v311.Capacity)
       && v311.CapacityIncrement > 0
       && (*(unsigned __int8 (**)(TypeList *, int, unsigned int))(v311.ptr_0 + 8))(
            &v311,
            v311.CapacityIncrement + v311.Capacity,
            0)) )
    {
      v45 = v311.Count++; /*0x4b7207*/
      *(unsigned int *)(v311.Items + 4 * v45) = v44; /*0x4b7215*/
    }
  }
LABEL_56:
  v46 = 0; /*0x4b7221*/
  v284 = 0; /*0x4b7235*/
  v277 = 0; /*0x4b7239*/
  v317 = 5 * abstractFlags + 10; /*0x4b723e*/
  v276 = v311.Count > 8; /*0x4b724d*/
  v47 = __2_YAPAXI_Z(4 * v317); /*0x4b7257*/
  Block = (unsigned int *)v47; /*0x4b725c*/
  v310 = 0; /*0x4b7260*/
  v48 = 1; /*0x4b7264*/
  do /*0x4b7311*/
  {
    v49 = (ShapeButtonClass *)__2_YAPAXI_Z(0x60u); /*0x4b7270*/
    if ( v49 ) /*0x4b7277*/
    {
      if ( v46 >= v311.Count ) /*0x4b7280*/
        v50 = (int)v339; /*0x4b7295*/
      else
        v50 = (*(int (**)(unsigned int))(**(unsigned int **)(v311.Items + 4 * v46) + 152))(*(unsigned int *)(v311.Items + 4 * v46)); /*0x4b7291*/
      v51 = ShapeButtonClass::Constructor( /*0x4b72dd*/
              v49,
              v48,
              v50,
              v305 + 68 * (v46 % 2) + 491,
              v272 + 50 * (v46 / 2) + 25,
              0,
              0,
              1);
    }
    else
    {
      v51 = 0; /*0x4b72e4*/
    }
    v51[20] = dword_87F6B0; /*0x4b72ec*/
    *(unsigned int *)(v47 + 4 * v46) = v51; /*0x4b72ef*/
    if ( v46 ) /*0x4b72f5*/
      v51->InsertAfter(v310); /*0x4b7309*/
    else
      v310 = *(GadgetClass **)v47; /*0x4b72fa*/
    ++v48; /*0x4b730c*/
    ++v46; /*0x4b730d*/
  }
  while ( v46 < 8 ); /*0x4b7311*/
  v52 = (ShapeButtonClass *)__2_YAPAXI_Z(0x60u); /*0x4b731e*/
  if ( v52 ) /*0x4b7325*/
  {
    v53 = SearchMIXFile(aDropupShp, 0); /*0x4b7349*/
    v54 = ShapeButtonClass::Constructor(v52, v48, (int)v53, v305 + 527, v272 + 229, 0, 0, 0); /*0x4b7352*/
  }
  else
  {
    v54 = 0; /*0x4b7359*/
  }
  *((unsigned int *)v54 + 20) = v278; /*0x4b7363*/
  v54[29] = 1; /*0x4b7366*/
  *(unsigned int *)(v47 + 32) = v54; /*0x4b736a*/
  (*(void (**)(unsigned char *, GadgetClass *))(*(unsigned int *)v54 + 12))(v54, v310); /*0x4b7372*/
  v55 = v48 + 1; /*0x4b7375*/
  v56 = (ShapeButtonClass *)__2_YAPAXI_Z(0x60u); /*0x4b737d*/
  if ( v56 ) /*0x4b7384*/
  {
    v57 = SearchMIXFile(aDropdownShp, 0); /*0x4b73a8*/
    v58 = ShapeButtonClass::Constructor(v56, v55, (int)v57, v305 + 557, v272 + 229, 0, 0, 0); /*0x4b73b1*/
  }
  else
  {
    v58 = 0; /*0x4b73b8*/
  }
  *((unsigned int *)v58 + 20) = v278; /*0x4b73be*/
  v58[29] = 1; /*0x4b73c1*/
  *(unsigned int *)(v47 + 36) = v58; /*0x4b73c5*/
  (*(void (**)(unsigned char *, GadgetClass *))(*(unsigned int *)v58 + 12))(v58, v310); /*0x4b73d1*/
  v59 = 0; /*0x4b73d4*/
  v60 = v55 + 1; /*0x4b73d6*/
  for ( m = 0; v59 < abstractFlags; m = v59 ) /*0x4b73e1*/
  {
    v61 = 0; /*0x4b73eb*/
    v62 = 0; /*0x4b73ed*/
    v307 = &Block[v60 - 1]; /*0x4b73f3*/
    do /*0x4b748a*/
    {
      v63 = (ShapeButtonClass *)__2_YAPAXI_Z(0x60u); /*0x4b73f9*/
      if ( v63 ) /*0x4b7403*/
      {
        v64 = v62; /*0x4b740b*/
        if ( v62 >= 132 ) /*0x4b740d*/
          v64 = v62 - 132; /*0x4b740f*/
        v65 = ShapeButtonClass::Constructor( /*0x4b744c*/
                v63,
                v60,
                0,
                v64 + v305 + 53,
                v272
              + dword_7E841C[8 * abstractFlags
                           - 15
                           + 4 * v59
                           + 4 * abstractFlags
                           + 2 * abstractFlags
                           + v61
                           + v59
                           + abstractFlags],
                0,
                0,
                0);
        v59 = m; /*0x4b7451*/
      }
      else
      {
        v65 = 0; /*0x4b7457*/
      }
      v65[20] = dword_87F6B0; /*0x4b7463*/
      *v307 = v65; /*0x4b7466*/
      v65->InsertAfter(v310); /*0x4b7471*/
      ++v60; /*0x4b7474*/
      v62 += 66; /*0x4b7475*/
      ++v61; /*0x4b747f*/
      ++v307; /*0x4b7486*/
    }
    while ( v62 < 330 ); /*0x4b748a*/
    ++v59; /*0x4b7494*/
  }
  GadgetClass::Show(v310); /*0x4b74a7*/
  v294 = 1; /*0x4b74b8*/
  v271 = 0; /*0x4b74c2*/
  memset(v341, 255, sizeof(v341)); /*0x4b74c7*/
  v352 = 0; /*0x4b74e3*/
  v353 = 0; /*0x4b74f1*/
  v354 = 0; /*0x4b74f8*/
  v263 = 0; /*0x4b74ff*/
  LoadScreen::InitVtable(&v321, 0, 0); /*0x4b7504*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_var_34ef2f) */  /*0x4b750e*/
  v321.q014 = 10; /*0x4b7519*/
  v321.q010 = 0; /*0x4b7520*/
  Time = timeGetTime(); /*0x4b7534*/
  v329 = Time; /*0x4b753b*/
  v337 = 0; /*0x4b7542*/
  v338 = 0; /*0x4b7549*/
  v308 = -1; /*0x4b7550*/
  v323.unknown_18 = Timer::GetTicks(); /*0x4b7560*/
  v325 = 5; /*0x4b7569*/
  v332 = 0; /*0x4b7574*/
  LoadScreen::Constructor((LoadScreen *)&v311.unknown_18, 0, 0); /*0x4b757b*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_var_cd5dcd) */  /*0x4b7587*/
  v316 = 10; /*0x4b7594*/
  kk = 0; /*0x4b759b*/
  v295 = 0; /*0x4b75a2*/
  v340 = 0; /*0x4b75a7*/
  v319 = -1; /*0x4b75ae*/
  v309 = 0; /*0x4b75b5*/
  TypeList::TechnoTypeConstructor(&v323, 0, 0); /*0x4b75b9*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E858C) */  /*0x4b75c4*/
  v323.CapacityIncrement = 10; /*0x4b75cf*/
  v323.Count = 0; /*0x4b75d6*/
  v333 = (int)*dword_87E8A4; /*0x4b75df*/
  v334 = (int)dword_87E8A4[1]; /*0x4b75e9*/
  v335 = *(unsigned long long *)dword_87E8A4[2].__tail_0; /*0x4b75f3*/
  (*(void (**)(MouseClass *))(dword_887640->HandleClick_ph + 12))(dword_887640); /*0x4b760c*/
  v66 = dword_87E8A4; /*0x4b760f*/
  if ( dword_87E8A4 ) /*0x4b7617*/
  {
    StreamObj::Release(dword_87E8A4); /*0x4b761b*/
    __3_YAXPAX_Z(v66); /*0x4b7621*/
  }
  dword_87E8A4 = 0; /*0x4b762b*/
  v67 = (BSurface *)__2_YAPAXI_Z(0x30u); /*0x4b7636*/
  if ( v67 ) /*0x4b763d*/
  {
    v68 = (*(int (**)(ObjectClass *))(g_DSurface_Hidden->ptr_0 + 128))(g_DSurface_Hidden); /*0x4b7653*/
    v69 = (*(int (**)(ObjectClass *))(g_DSurface_Hidden->ptr_0 + 124))(g_DSurface_Hidden); /*0x4b7659*/
    dword_87E8A4 = (StreamObj *)BSurface::Construct(v67, 0, 0, v69, v68); /*0x4b7673*/
  }
  else
  {
    dword_87E8A4 = 0; /*0x4b767a*/
  }
  (*(void (**)(MouseClass *))(dword_887640->HandleClick_ph + 16))(dword_887640); /*0x4b7688*/
  g_DSurface_Hidden_2 = (AudioStream *)g_DSurface_Hidden; /*0x4b7696*/
  Timer::PumpMessages((Timer *)dword_87F770); /*0x4b769b*/
  do /*0x4b9282*/
  {
    v254 = 0; /*0x4b76a5*/
    if ( g_LoadScreenFlag ) /*0x4b76ac*/
    {
      g_LoadScreenFlag = 0; /*0x4b76ae*/
    }
    else if ( !(unsigned char)v294 ) /*0x4b76bd*/
    {
      goto LABEL_108; /*0x4b76bd*/
    }
    v377[0] = v305; /*0x4b76c9*/
    v70 = 0; /*0x4b76d6*/
    v377[1] = v272; /*0x4b76d9*/
    v377[2] = *(__int16 *)(v320 + 2); /*0x4b76fe*/
    (v294) = ((v294) & ~0xFF) | ((0) & 0xFF); /*0x4b771f*/
    v254 = 1; /*0x4b7727*/
    v377[3] = *(__int16 *)(v320 + 4); /*0x4b772c*/
    v346[0] = 0; /*0x4b7733*/
    v346[1] = 0; /*0x4b773a*/
    DrawToSurfaceSHP((int)g_DSurface_Hidden, (int)v278, v320, 0, v346, v377, 0, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x4b7741*/
    v256 = 0; /*0x4b774d*/
    if ( v317 > 0 ) /*0x4b7753*/
    {
      v71 = Block; /*0x4b775d*/
      v265 = 4 * v284; /*0x4b7768*/
      do /*0x4b787d*/
      {
        v72 = -1; /*0x4b7779*/
        if ( v70 + v284 < v311.Count ) /*0x4b7784*/
        {
          ptr_4 = dword_A8B230[376].ptr_4; /*0x4b7786*/
          if ( ptr_4 && (v72 = 0, ptr_4 > 0) ) /*0x4b7794*/
          {
            while ( *(unsigned int *)(dword_A8B230[375].referenceCount + 4 * v72) != *(unsigned int *)(v311.Items + v265) /*0x4b77b7*/
                 || *(unsigned int *)(dword_A8B230[376].abstractFlags + 4 * v72) == -1 )
            {
              if ( ++v72 >= ptr_4 ) /*0x4b77bc*/
              {
                v70 = v256; /*0x4b77be*/
                goto LABEL_100; /*0x4b77be*/
              }
            }
            v70 = v256; /*0x4b7817*/
          }
          else
          {
LABEL_100:
            v72 = -1; /*0x4b77c2*/
          }
        }
        if ( v70 >= 8 /*0x4b77e3*/
          || v72 == -1
          || *(unsigned int *)(dword_A8B230[377].ptr_C + 4 * v72) < *(unsigned int *)(dword_A8B230[376].abstractFlags + 4 * v72) )
        {
          StreamClass::WriteBytes( /*0x4b7853*/
            (StreamClass *)dword_87E8A4,
            0x7Fu,
            v305 + *(unsigned char *)(*v71 + 12),
            v272 + *(unsigned int *)(*v71 + 16),
            64,
            48);
        }
        else
        {
          StreamClass::WriteBytes( /*0x4b7815*/
            (StreamClass *)dword_87E8A4,
            0x3Fu,
            v305 + *(unsigned char *)(*v71 + 12),
            v272 + *(unsigned int *)(*v71 + 16),
            64,
            48);
        }
        (*(void (**)(unsigned int, unsigned int))(*(unsigned int *)*v71 + 108))(*v71, 0); /*0x4b785e*/
        ++v70; /*0x4b7861*/
        ++v71; /*0x4b7862*/
        v256 = v70; /*0x4b7875*/
        v265 += 4; /*0x4b7879*/
      }
      while ( v70 < v317 ); /*0x4b787d*/
    }
LABEL_108:
    Event::Dispatch(); /*0x4b7883*/
    v74 = (*(int (**)(GadgetClass *))(*(unsigned int *)v310->__pad_0 + 40))(v310); /*0x4b7891*/
    if ( v271 || (v74 & 0x8000) == 0 ) /*0x4b78a5*/
    {
      if ( v74 == 32 ) /*0x4b848b*/
        (v294) = ((v294) & ~(0xFF << 8)) | (((1) & 0xFF) << 8); /*0x4b848d*/
      goto LABEL_252; /*0x4b848d*/
    }
    v75 = v74 & 0xFFFF7FFF; /*0x4b78ab*/
    v257 = v75; /*0x4b78b1*/
    v337 = timeGetTime(); /*0x4b78bb*/
    if ( v75 <= 8 && v309 < 5 * abstractFlags ) /*0x4b78d8*/
    {
      v76 = v75 + v284 - 1; /*0x4b78e5*/
      v296 = v76; /*0x4b78ea*/
      if ( v76 >= 0 && v76 < v311.Count ) /*0x4b78fb*/
      {
        v77 = *(unsigned int *)(v311.Items + 4 * (v75 + v284) - 4); /*0x4b790b*/
        v78 = dword_A8B230[376].ptr_4; /*0x4b790f*/
        v300 = v77; /*0x4b7917*/
        if ( v78 && (v79 = 0, v78 > 0) ) /*0x4b7921*/
        {
          while ( *(unsigned int *)(dword_A8B230[375].referenceCount + 4 * v79) != v77 /*0x4b7938*/
               || *(unsigned int *)(dword_A8B230[376].abstractFlags + 4 * v79) == -1 )
          {
            if ( ++v79 >= v78 ) /*0x4b7941*/
              goto LABEL_119; /*0x4b7941*/
          }
          v80 = v79; /*0x4b7a2b*/
        }
        else
        {
LABEL_119:
          v80 = -1; /*0x4b7943*/
        }
        v266 = v80; /*0x4b794a*/
        v81 = (*(int (**)(int))(*(unsigned int *)v77 + 172))(v77); /*0x4b794e*/
        if ( v318 - v81 >= 0 /*0x4b7981*/
          && (v80 == -1
           || *(unsigned int *)(dword_A8B230[377].ptr_C + 4 * v80) < *(unsigned int *)(dword_A8B230[376].abstractFlags + 4 * v80)) )
        {
          v82 = *(unsigned int *)Block[v309 + 10]; /*0x4b799b*/
          v83 = (*(int (**)(int, unsigned int, unsigned int))(*(unsigned int *)v77 + 152))(v77, 0, 0); /*0x4b799d*/
          (*(void (**)(unsigned int, int))(v82 + 136))(Block[v309 + 10], v83); /*0x4b79a8*/
          v84 = (__int16 *)(*(int (**)(int))(*(unsigned int *)v77 + 152))(v77); /*0x4b79b2*/
          v85 = (unsigned int *)Block[v309 + 10]; /*0x4b79b8*/
          v86 = v84; /*0x4b79bc*/
          v87 = __2_YAPAXI_Z(0x20u); /*0x4b79c5*/
          if ( v87 ) /*0x4b79cc*/
          {
            v88 = v86[1]; /*0x4b79d2*/
            v279 = v86[2]; /*0x4b79da*/
            v285 = MixFileClass::GetSubFile((MixFileClass *)v86, 0); /*0x4b79e7*/
            Surface::Construct((Surface *)v87, v88, v279); /*0x4b79ef*/
            *(unsigned int *)(v87 + 12) = 0; /*0x4b79f7*/
            /* X11: ptr_0 install elided (X67 star-deref, RHS XSurface_Vtable) */  /*0x4b7a09*/
            *(unsigned int *)(v87 + 16) = 1; /*0x4b7a0f*/
            Buffer::Init((Buffer *)(v87 + 20), v285, v279 * v88); /*0x4b7a16*/
            /* X11: ptr_0 install elided (X67 star-deref, RHS BSurface_Vtable) */  /*0x4b7a1b*/
            v77 = v300; /*0x4b7a21*/
            v280 = v87; /*0x4b7a25*/
          }
          else
          {
            v280 = 0; /*0x4b7a32*/
          }
          v89 = __2_YAPAXI_Z(0x4Cu); /*0x4b7a41*/
          if ( v89 ) /*0x4b7a48*/
          {
            v90 = v85[3]; /*0x4b7a51*/
            v91 = v85[4]; /*0x4b7a58*/
            v286 = v85[5]; /*0x4b7a5b*/
            v92 = v86[2]; /*0x4b7a5f*/
            v349 = v86[1]; /*0x4b7a67*/
            v350 = v92; /*0x4b7a72*/
            v93 = v85[6]; /*0x4b7a79*/
            v348 = 0; /*0x4b7a86*/
            *(unsigned int *)(v89 + 56) = 0; /*0x4b7a91*/
            *(unsigned int *)v89 = v90 - v305; /*0x4b7a98*/
            *(unsigned int *)(v89 + 4) = v91 - v272; /*0x4b7a9f*/
            *(unsigned int *)(v89 + 8) = v286; /*0x4b7aa5*/
            *(unsigned int *)(v89 + 12) = v93; /*0x4b7aa8*/
            *(unsigned int *)(v89 + 16) = 0; /*0x4b7aaf*/
            *(unsigned int *)(v89 + 20) = v348; /*0x4b7ab9*/
            *(unsigned int *)(v89 + 24) = v349; /*0x4b7ac3*/
            *(unsigned int *)(v89 + 28) = v350; /*0x4b7acd*/
            *(unsigned int *)(v89 + 32) = v90; /*0x4b7ad3*/
            *(unsigned int *)(v89 + 48) = v304; /*0x4b7ada*/
            *(unsigned int *)(v89 + 36) = v91; /*0x4b7add*/
            *(unsigned int *)(v89 + 40) = v286; /*0x4b7ae0*/
            *(unsigned int *)(v89 + 52) = v280; /*0x4b7ae7*/
            *(unsigned int *)(v89 + 44) = v93; /*0x4b7aea*/
            v94 = timeGetTime(); /*0x4b7aed*/
            v95 = v330; /*0x4b7af3*/
            v96 = v327; /*0x4b7afa*/
            v77 = v300; /*0x4b7b01*/
            *(unsigned int *)(v89 + 60) = v94; /*0x4b7b05*/
            *(unsigned int *)(v89 + 64) = v95; /*0x4b7b08*/
            *(unsigned int *)(v89 + 68) = v96; /*0x4b7b0b*/
            *(unsigned char *)(v89 + 72) = 0; /*0x4b7b0e*/
          }
          else
          {
            v89 = 0; /*0x4b7b14*/
          }
          if ( kk < v313 /*0x4b7b55*/
            || ((((v314) >> 8) & 0xFF) || !v313)
            && v316 > 0
            && (*(unsigned __int8 (**)(int *, int, unsigned int))(v311.unknown_18 + 8))(
                 &v311.unknown_18,
                 v316 + v313,
                 0) )
          {
            v97 = kk++; /*0x4b7b63*/
            *((unsigned int *)v312 + v97) = v89; /*0x4b7b74*/
          }
          if ( v266 != -1 ) /*0x4b7b7e*/
            ++*(unsigned int *)(dword_A8B230[377].ptr_C + 4 * v266); /*0x4b7b93*/
          if ( v323.Count < v323.Capacity /*0x4b7bd4*/
            || (v323.IsAllocated[0] || !v323.Capacity)
            && v323.CapacityIncrement > 0
            && (*(unsigned __int8 (**)(TypeList *, int, unsigned int))(v323.ptr_0 + 8))(
                 &v323,
                 v323.CapacityIncrement + v323.Capacity,
                 0) )
          {
            v98 = v323.Count++; /*0x4b7be2*/
            *(unsigned int *)(v323.Items + 4 * v98) = v77; /*0x4b7bf3*/
          }
          v254 = 1; /*0x4b7bff*/
          ++v309; /*0x4b7c07*/
          v271 = 1; /*0x4b7c0e*/
          v99 = (v257 - 1) / 2; /*0x4b7c15*/
          if ( v341[v99] == -1 ) /*0x4b7c1f*/
          {
            v341[v99] = 0; /*0x4b7c21*/
            *((unsigned int *)&v352 + v99) = timeGetTime(); /*0x4b7c32*/
          }
          v100 = 0; /*0x4b7c40*/
          v263 = 1; /*0x4b7c44*/
          if ( v321.q010 <= 0 ) /*0x4b7c49*/
          {
            v102 = v296; /*0x4b7c6b*/
LABEL_152:
            v103 = __2_YAPAXI_Z(0x14u); /*0x4b7c6f*/
            if ( v103 ) /*0x4b7c7d*/
            {
              *(unsigned int *)v103 = timeGetTime(); /*0x4b7c85*/
              *(unsigned int *)(v103 + 4) = v102; /*0x4b7c87*/
              *(unsigned int *)(v103 + 8) = 1123942400; /*0x4b7c8a*/
              *(unsigned int *)(v103 + 12) = -1082130432; /*0x4b7c91*/
              *(unsigned char *)(v103 + 16) = 0; /*0x4b7c98*/
            }
            else
            {
              v103 = 0; /*0x4b7c9e*/
            }
            if ( v266 != -1 /*0x4b7cbe*/
              && *(unsigned int *)(dword_A8B230[377].ptr_C + 4 * v266) >= *(unsigned int *)(dword_A8B230[376].abstractFlags
                                                                               + 4 * v266) )
            {
              v295 = 1; /*0x4b7cc0*/
              *(unsigned char *)(v103 + 16) = 1; /*0x4b7cc5*/
            }
            if ( v321.q010 < v321.LoadScreen_field_0x08 /*0x4b7d08*/
              || (BYTE1(v321.LoadScreen_field_0x0C) || !v321.LoadScreen_field_0x08)
              && v321.q014 > 0
              && (*(unsigned __int8 (**)(LoadScreen *, int, unsigned int))(*(unsigned int *)v321.Render_ph + 8))(
                   &v321,
                   v321.q014 + v321.LoadScreen_field_0x08,
                   0) )
            {
              v104 = v321.q010++; /*0x4b7d16*/
              *(unsigned int *)(v321.LoadScreen_field_0x04 + 4 * v104) = v103; /*0x4b7d27*/
            }
          }
          else
          {
            LoadScreen_field_0x04 = v321.LoadScreen_field_0x04; /*0x4b7c4b*/
            v102 = v296; /*0x4b7c52*/
            while ( *(unsigned int *)(*(unsigned int *)LoadScreen_field_0x04 + 4) != v296 ) /*0x4b7c5b*/
            {
              ++v100; /*0x4b7c61*/
              LoadScreen_field_0x04 += 4; /*0x4b7c62*/
              if ( v100 >= v321.q010 ) /*0x4b7c67*/
                goto LABEL_152; /*0x4b7c67*/
            }
          }
          v105 = (*(int (**)(int))(*(unsigned int *)v77 + 172))(v77); /*0x4b7d2e*/
          v318 -= v105; /*0x4b7d34*/
        }
      }
      goto LABEL_252; /*0x4b7d3b*/
    }
    if ( v75 == 9 ) /*0x4b7d43*/
    {
      if ( !v277 ) /*0x4b7d4b*/
        goto LABEL_252; /*0x4b7d4b*/
      v106 = v284 - 2; /*0x4b7dad*/
LABEL_171:
      v107 = Block; /*0x4b7d6e*/
      v108 = v106; /*0x4b7d72*/
      v284 = v106; /*0x4b7d74*/
      v297 = v106; /*0x4b7d78*/
      v109 = 4 * v106; /*0x4b7d7c*/
      v281 = 8; /*0x4b7d83*/
      v301 = 4 * v106; /*0x4b7d8b*/
      do /*0x4b7e66*/
      {
        if ( v108 >= v311.Count ) /*0x4b7d96*/
          v110 = (int)v339; /*0x4b7db2*/
        else
          v110 = (*(int (**)(unsigned int))(**(unsigned int **)(v311.Items + v109) + 152))(*(unsigned int *)(v311.Items + v109)); /*0x4b7da1*/
        (*(void (**)(unsigned int, int, unsigned int, unsigned int))(*(unsigned int *)*v107 + 136))(*v107, v110, 0, 0); /*0x4b7dc2*/
        if ( v108 >= v311.Count ) /*0x4b7dcf*/
          goto LABEL_182; /*0x4b7dcf*/
        v111 = dword_A8B230[376].ptr_4; /*0x4b7dd7*/
        if ( !v111 ) /*0x4b7ddf*/
          goto LABEL_182; /*0x4b7ddf*/
        v112 = 0; /*0x4b7de1*/
        if ( v111 <= 0 ) /*0x4b7de5*/
          goto LABEL_182; /*0x4b7de5*/
        while ( *(unsigned int *)(dword_A8B230[375].referenceCount + 4 * v112) != *(unsigned int *)(v311.Items + v109) /*0x4b7e03*/
             || *(unsigned int *)(dword_A8B230[376].abstractFlags + 4 * v112) == -1 )
        {
          if ( ++v112 >= v111 ) /*0x4b7e0c*/
            goto LABEL_182; /*0x4b7e0c*/
        }
        if ( v112 == -1 /*0x4b7eca*/
          || *(unsigned int *)(dword_A8B230[377].ptr_C + 4 * v112) < *(unsigned int *)(dword_A8B230[376].abstractFlags + 4 * v112) )
        {
LABEL_182:
          StreamClass::WriteBytes( /*0x4b7e0e*/
            (StreamClass *)dword_87E8A4,
            0x7Fu,
            *(unsigned int *)(*v107 + 12),
            *(unsigned int *)(*v107 + 16),
            64,
            48);
        }
        else
        {
          StreamClass::WriteBytes( /*0x4b7ef4*/
            (StreamClass *)dword_87E8A4,
            0x3Fu,
            *(unsigned int *)(*v107 + 12),
            *(unsigned int *)(*v107 + 16),
            64,
            48);
        }
        (*(void (**)(unsigned int, int))(*(unsigned int *)*v107 + 108))(*v107, 1); /*0x4b7e43*/
        ++v107; /*0x4b7e46*/
        v108 = v297 + 1; /*0x4b7e55*/
        v109 = v301 + 4; /*0x4b7e56*/
        v113 = v281 == 1; /*0x4b7e59*/
        ++v297; /*0x4b7e5a*/
        v301 += 4; /*0x4b7e5e*/
        --v281; /*0x4b7e62*/
      }
      while ( !v113 ); /*0x4b7e66*/
      *(unsigned char *)(Block[v257 - 1] + 44) = 0; /*0x4b7e7a*/
      (*(void (**)(unsigned int, int))(*(unsigned int *)Block[v257 - 1] + 108))(Block[v257 - 1], 1); /*0x4b7e84*/
      v277 = v284 != 0; /*0x4b7e94*/
      v254 = 1; /*0x4b7e9c*/
      v276 = v284 < v311.Count - 8; /*0x4b7ea3*/
      goto LABEL_252; /*0x4b7ea8*/
    }
    if ( v75 == 10 ) /*0x4b7d55*/
    {
      if ( !v276 ) /*0x4b7d61*/
        goto LABEL_252; /*0x4b7d61*/
      v106 = v284 + 2; /*0x4b7d6b*/
      goto LABEL_171; /*0x4b7d6b*/
    }
    if ( v75 >= 11 && v75 < 5 * abstractFlags + 11 ) /*0x4b7f08*/
    {
      v114 = v75 - 11; /*0x4b7f15*/
      if ( v75 - 11 < v323.Count ) /*0x4b7f1a*/
      {
        v115 = dword_A8B230; /*0x4b7f20*/
        v116 = dword_A8B230[376].ptr_4; /*0x4b7f26*/
        if ( v116 ) /*0x4b7f2e*/
        {
          v117 = 0; /*0x4b7f34*/
          if ( v116 > 0 ) /*0x4b7f38*/
          {
            v118 = *(unsigned int *)(v323.Items + 4 * v114); /*0x4b7f4b*/
            while ( *(unsigned int *)(dword_A8B230[375].referenceCount + 4 * v117) != v118 /*0x4b7f5d*/
                 || *(unsigned int *)(dword_A8B230[376].abstractFlags + 4 * v117) == -1 )
            {
              if ( ++v117 >= v116 ) /*0x4b7f62*/
                goto LABEL_216; /*0x4b7f62*/
            }
            if ( v117 != -1 ) /*0x4b7f6c*/
            {
              if ( *(unsigned int *)(dword_A8B230[377].ptr_C + 4 * v117) >= *(unsigned int *)(dword_A8B230[376].abstractFlags /*0x4b7f86*/
                                                                                 + 4 * v117) )
              {
                v119 = 0; /*0x4b7f93*/
                if ( v311.Count > 0 ) /*0x4b7f97*/
                {
                  Items = (unsigned int *)v311.Items; /*0x4b7f9d*/
                  while ( *Items != v118 ) /*0x4b7fa3*/
                  {
                    ++v119; /*0x4b7fa5*/
                    ++Items; /*0x4b7fa6*/
                    if ( v119 >= v311.Count ) /*0x4b7fab*/
                      goto LABEL_215; /*0x4b7fab*/
                  }
                  v121 = __2_YAPAXI_Z(0x14u); /*0x4b7fb9*/
                  if ( v121 ) /*0x4b7fc0*/
                  {
                    *(unsigned int *)v121 = timeGetTime(); /*0x4b7fc8*/
                    *(unsigned int *)(v121 + 4) = v119; /*0x4b7fca*/
                    *(unsigned int *)(v121 + 8) = 1123942400; /*0x4b7fcd*/
                    *(unsigned int *)(v121 + 12) = -1082130432; /*0x4b7fd4*/
                    *(unsigned char *)(v121 + 16) = 0; /*0x4b7fdb*/
                  }
                  else
                  {
                    v121 = 0; /*0x4b7fe1*/
                  }
                  *(unsigned int *)(v121 + 12) = 1065353216; /*0x4b7fe3*/
                  *(unsigned int *)(v121 + 8) = 1115422720; /*0x4b7fea*/
                  if ( v321.q010 < v321.LoadScreen_field_0x08 /*0x4b8030*/
                    || (BYTE1(v321.LoadScreen_field_0x0C) || !v321.LoadScreen_field_0x08)
                    && v321.q014 > 0
                    && (*(unsigned __int8 (**)(LoadScreen *, int, unsigned int))(*(unsigned int *)v321.Render_ph + 8))(
                         &v321,
                         v321.q014 + v321.LoadScreen_field_0x08,
                         0) )
                  {
                    v122 = v321.q010++; /*0x4b803e*/
                    *(unsigned int *)(v321.LoadScreen_field_0x04 + 4 * v122) = v121; /*0x4b804f*/
                  }
                  v115 = dword_A8B230; /*0x4b8052*/
                }
              }
LABEL_215:
              --*(unsigned int *)(v115[377].ptr_C + 4 * v117); /*0x4b8058*/
            }
          }
        }
LABEL_216:
        v123 = (*(int (**)(unsigned int))(**(unsigned int **)(v323.Items + 4 * v114) + 172))(*(unsigned int *)(v323.Items + 4 * v114)); /*0x4b8067*/
        v318 += v123; /*0x4b8082*/
        if ( v114 < v323.Count ) /*0x4b8092*/
        {
          v124 = v114; /*0x4b8095*/
          if ( v114 < --v323.Count ) /*0x4b80a0*/
          {
            do /*0x4b80ba*/
            {
              ++v124; /*0x4b80a9*/
              *(unsigned int *)(v323.Items + 4 * v124 - 4) = *(unsigned int *)(v323.Items + 4 * v124); /*0x4b80ad*/
            }
            while ( v124 < v323.Count ); /*0x4b80ba*/
          }
        }
        v254 = 1; /*0x4b80c0*/
        if ( v309 - v114 - 1 > 0 ) /*0x4b80ca*/
        {
          v282 = v309 - v114 - 1; /*0x4b80d8*/
          v258 = &Block[v257]; /*0x4b80df*/
          do /*0x4b82c6*/
          {
            v125 = (unsigned int *)*(v258 - 1); /*0x4b80e9*/
            v126 = v125[22]; /*0x4b80ec*/
            v127 = __2_YAPAXI_Z(0x20u); /*0x4b80f4*/
            if ( v127 ) /*0x4b80fb*/
            {
              v128 = *(__int16 *)(v126 + 4); /*0x4b8101*/
              v287 = *(__int16 *)(v126 + 2); /*0x4b8109*/
              v129 = MixFileClass::GetSubFile((MixFileClass *)v126, 0); /*0x4b810d*/
              *(unsigned int *)(v127 + 8) = v128; /*0x4b8112*/
              *(unsigned int *)(v127 + 12) = 0; /*0x4b8115*/
              /* X11: ptr_0 install elided (X67 star-deref, RHS XSurface_Vtable) */  /*0x4b8120*/
              *(unsigned int *)(v127 + 4) = v287; /*0x4b8129*/
              *(unsigned int *)(v127 + 16) = 1; /*0x4b8131*/
              Buffer::Init((Buffer *)(v127 + 20), v129, v287 * v128); /*0x4b8138*/
              /* X11: ptr_0 install elided (X67 star-deref, RHS BSurface_Vtable) */  /*0x4b813d*/
              v298 = v127; /*0x4b8143*/
            }
            else
            {
              v298 = 0; /*0x4b8149*/
            }
            (*(void (**)(unsigned int *, unsigned int, unsigned int, unsigned int))(*v125 + 136))( /*0x4b8163*/
              v125,
              *(unsigned int *)(*v258 + 88),
              0,
              0);
            v130 = v125[22]; /*0x4b8169*/
            v131 = __2_YAPAXI_Z(0x20u); /*0x4b8173*/
            if ( v131 ) /*0x4b817a*/
            {
              v132 = *(__int16 *)(v130 + 2); /*0x4b8180*/
              v288 = *(__int16 *)(v130 + 4); /*0x4b8184*/
              v133 = MixFileClass::GetSubFile((MixFileClass *)v130, 0); /*0x4b818c*/
              *(unsigned int *)(v131 + 4) = v132; /*0x4b8191*/
              *(unsigned int *)(v131 + 12) = 0; /*0x4b8194*/
              /* X11: ptr_0 install elided (X67 star-deref, RHS XSurface_Vtable) */  /*0x4b819f*/
              *(unsigned int *)(v131 + 8) = v288; /*0x4b81a8*/
              *(unsigned int *)(v131 + 16) = 1; /*0x4b81b0*/
              Buffer::Init((Buffer *)(v131 + 20), v133, v288 * v132); /*0x4b81b7*/
              /* X11: ptr_0 install elided (X67 star-deref, RHS BSurface_Vtable) */  /*0x4b81bc*/
              v302 = v131; /*0x4b81c2*/
            }
            else
            {
              v302 = 0; /*0x4b81c8*/
            }
            v134 = __2_YAPAXI_Z(0x4Cu); /*0x4b81d7*/
            if ( v134 ) /*0x4b81de*/
            {
              v135 = v125[3]; /*0x4b81e0*/
              v136 = v125[4]; /*0x4b81e3*/
              v137 = v125[5]; /*0x4b81e6*/
              v138 = v125[6]; /*0x4b81e9*/
              *(unsigned int *)(v134 + 56) = 0; /*0x4b81f0*/
              *(unsigned int *)v134 = 0; /*0x4b81f7*/
              *(unsigned int *)(v134 + 4) = 0; /*0x4b81fa*/
              *(unsigned int *)(v134 + 8) = v137; /*0x4b8200*/
              *(unsigned int *)(v134 + 12) = v138; /*0x4b8203*/
              *(unsigned int *)(v134 + 16) = 0; /*0x4b820a*/
              *(unsigned int *)(v134 + 20) = 0; /*0x4b820d*/
              *(unsigned int *)(v134 + 32) = v135; /*0x4b8213*/
              *(unsigned int *)(v134 + 24) = v137; /*0x4b8216*/
              *(unsigned int *)(v134 + 36) = v136; /*0x4b8219*/
              *(unsigned int *)(v134 + 28) = v138; /*0x4b8220*/
              *(unsigned int *)(v134 + 48) = v298; /*0x4b8223*/
              *(unsigned int *)(v134 + 40) = v137; /*0x4b8226*/
              *(unsigned int *)(v134 + 52) = v302; /*0x4b822d*/
              *(unsigned int *)(v134 + 44) = v138; /*0x4b8230*/
              *(unsigned int *)(v134 + 60) = timeGetTime(); /*0x4b8239*/
              v139 = v327; /*0x4b823c*/
              *(unsigned int *)(v134 + 64) = v327; /*0x4b8243*/
              *(unsigned int *)(v134 + 68) = v139; /*0x4b8246*/
              *(unsigned char *)(v134 + 72) = 0; /*0x4b8249*/
            }
            else
            {
              v134 = 0; /*0x4b824f*/
            }
            if ( kk < v313 /*0x4b8290*/
              || ((((v314) >> 8) & 0xFF) || !v313)
              && v316 > 0
              && (*(unsigned __int8 (**)(int *, int, unsigned int))(v311.unknown_18 + 8))(
                   &v311.unknown_18,
                   v316 + v313,
                   0) )
            {
              v140 = kk++; /*0x4b829e*/
              *((unsigned int *)v312 + v140) = v134; /*0x4b82af*/
            }
            v113 = v282 == 1; /*0x4b82bd*/
            ++v258; /*0x4b82be*/
            --v282; /*0x4b82c2*/
          }
          while ( !v113 ); /*0x4b82c6*/
        }
        v141 = (unsigned int *)Block[v309 + 9]; /*0x4b82d6*/
        v142 = v141[22]; /*0x4b82da*/
        v143 = __2_YAPAXI_Z(0x20u); /*0x4b82e2*/
        if ( v143 ) /*0x4b82e9*/
        {
          v144 = *(__int16 *)(v142 + 2); /*0x4b82ef*/
          v289 = *(__int16 *)(v142 + 4); /*0x4b82f3*/
          v145 = MixFileClass::GetSubFile((MixFileClass *)v142, 0); /*0x4b82fb*/
          *(unsigned int *)(v143 + 4) = v144; /*0x4b8300*/
          *(unsigned int *)(v143 + 12) = 0; /*0x4b8303*/
          /* X11: ptr_0 install elided (X67 star-deref, RHS XSurface_Vtable) */  /*0x4b830e*/
          *(unsigned int *)(v143 + 8) = v289; /*0x4b8317*/
          *(unsigned int *)(v143 + 16) = 1; /*0x4b831f*/
          Buffer::Init((Buffer *)(v143 + 20), v145, v289 * v144); /*0x4b8326*/
          /* X11: ptr_0 install elided (X67 star-deref, RHS BSurface_Vtable) */  /*0x4b832b*/
          v299 = v143; /*0x4b8331*/
        }
        else
        {
          v299 = 0; /*0x4b8337*/
        }
        v146 = __2_YAPAXI_Z(0x4Cu); /*0x4b8346*/
        if ( v146 ) /*0x4b834d*/
        {
          v147 = v141[3]; /*0x4b8356*/
          v290 = v141[5]; /*0x4b8360*/
          v303 = v141[6]; /*0x4b8367*/
          v283 = v141[4]; /*0x4b8373*/
          v378 = *(__int16 *)(v142 + 2); /*0x4b837d*/
          v379 = *(__int16 *)(v142 + 4); /*0x4b8388*/
          *(unsigned int *)(v146 + 56) = 0; /*0x4b8393*/
          *(unsigned int *)v146 = 0; /*0x4b839a*/
          *(unsigned int *)(v146 + 4) = 0; /*0x4b839d*/
          *(unsigned int *)(v146 + 8) = v378; /*0x4b83a7*/
          *(unsigned int *)(v146 + 12) = v379; /*0x4b83b1*/
          *(unsigned int *)(v146 + 16) = v147 - v305; /*0x4b83b7*/
          *(unsigned int *)(v146 + 20) = v283 - v272; /*0x4b83be*/
          *(unsigned int *)(v146 + 24) = v290; /*0x4b83c5*/
          *(unsigned int *)(v146 + 28) = v303; /*0x4b83c8*/
          *(unsigned int *)(v146 + 32) = v147; /*0x4b83ce*/
          *(unsigned int *)(v146 + 36) = v283; /*0x4b83d5*/
          *(unsigned int *)(v146 + 40) = v290; /*0x4b83d8*/
          *(unsigned int *)(v146 + 48) = v299; /*0x4b83df*/
          *(unsigned int *)(v146 + 44) = v303; /*0x4b83e2*/
          *(unsigned int *)(v146 + 52) = v304; /*0x4b83e9*/
          v148 = timeGetTime(); /*0x4b83ec*/
          v149 = v327; /*0x4b83f2*/
          *(unsigned int *)(v146 + 60) = v148; /*0x4b83f9*/
          v150 = v330; /*0x4b83fc*/
          *(unsigned int *)(v146 + 64) = v149; /*0x4b8403*/
          *(unsigned int *)(v146 + 68) = v150; /*0x4b8406*/
          *(unsigned char *)(v146 + 72) = 0; /*0x4b8409*/
        }
        else
        {
          v146 = 0; /*0x4b840f*/
        }
        if ( kk < v313 /*0x4b8450*/
          || ((((v314) >> 8) & 0xFF) || !v313)
          && v316 > 0
          && (*(unsigned __int8 (**)(int *, int, unsigned int))(v311.unknown_18 + 8))(
               &v311.unknown_18,
               v316 + v313,
               0) )
        {
          v151 = kk++; /*0x4b845e*/
          *((unsigned int *)v312 + v151) = v146; /*0x4b846f*/
        }
        (*(void (**)(unsigned int *, unsigned int, unsigned int, unsigned int))(*v141 + 136))(v141, 0, 0, 0); /*0x4b847c*/
        --v309; /*0x4b8482*/
      }
    }
LABEL_252:
    v152 = (unsigned char *)Block[8]; /*0x4b8492*/
    if ( v152[44] && v277 && !v271 ) /*0x4b84ae*/
    {
      (*(void (**)(unsigned char *, unsigned int))(*(unsigned int *)v152 + 108))(v152, 0); /*0x4b84b4*/
      v254 = 1; /*0x4b84b7*/
    }
    v153 = (unsigned char *)Block[9]; /*0x4b84bc*/
    if ( v153[44] && v276 && !v271 ) /*0x4b84d4*/
    {
      (*(void (**)(unsigned char *, unsigned int))(*(unsigned int *)v153 + 108))(v153, 0); /*0x4b84da*/
      v254 = 1; /*0x4b84dd*/
    }
    v154 = timeGetTime; /*0x4b84e2*/
    v259 = 0; /*0x4b84e8*/
    for ( n = 0; n < 16; v259 = n ) /*0x4b84f0*/
    {
      v156 = *(unsigned int *)((char *)v341 + n); /*0x4b84f4*/
      if ( v156 != -1 ) /*0x4b84fe*/
      {
        v157 = (v154() - *(unsigned int *)((char *)&v352 + n)) / 0x64; /*0x4b851a*/
        if ( v157 != v156 || v263 ) /*0x4b8527*/
        {
          v158 = v272 + *(int *)((char *)&dword_7E84D0 + n); /*0x4b853b*/
          v159 = *(__int16 **)((char *)v380 + n); /*0x4b853d*/
          if ( v157 <= v159[3] ) /*0x4b8550*/
          {
            v367[1] = v272 + *(int *)((char *)&dword_7E84D0 + n); /*0x4b85fd*/
            v367[3] = v159[2]; /*0x4b860c*/
            v367[0] = v305 + 371; /*0x4b8618*/
            v367[2] = v159[1]; /*0x4b862c*/
            v345[0] = 0; /*0x4b8634*/
            v345[1] = 0; /*0x4b863b*/
            DrawToSurfaceSHP( /*0x4b865f*/
              (int)g_DSurface_Hidden,
              (int)v278,
              (int)v159,
              v156,
              v345,
              v367,
              0,
              0,
              0,
              0,
              1000,
              0,
              0,
              0,
              0,
              0);
            n = v259; /*0x4b8668*/
            *(unsigned int *)((char *)v341 + v259) = v157; /*0x4b866a*/
          }
          else
          {
            v376[0] = v305 + 371; /*0x4b855a*/
            v160 = v159[1]; /*0x4b8561*/
            v161 = v159[2]; /*0x4b8565*/
            v374[0] = 371; /*0x4b856d*/
            v376[1] = v158; /*0x4b8578*/
            v374[1] = v158 - v272; /*0x4b8583*/
            v376[3] = v161; /*0x4b8597*/
            v374[3] = v161; /*0x4b859e*/
            v376[2] = v160; /*0x4b85cf*/
            v351[0] = 0; /*0x4b85d6*/
            v351[1] = 0; /*0x4b85dd*/
            v374[2] = v160; /*0x4b85e4*/
            BlitterDrawSHP(&g_DSurface_Hidden->ptr_0, (int)v278, v304, v374, v351, v376, 0, SHPFrame, 0, 0, 1000, 0, 0); /*0x4b85eb*/
            *(unsigned int *)((char *)v341 + n) = -1; /*0x4b85f0*/
          }
          v154 = timeGetTime; /*0x4b8671*/
          v254 = 1; /*0x4b8677*/
        }
      }
      n += 4; /*0x4b867c*/
    }
    v162 = v321.q010 - 1; /*0x4b8693*/
    for ( ii = v321.q010 - 1; v162 >= 0; ii = v162 ) /*0x4b869c*/
    {
      _EDI = *(unsigned int *)(v321.LoadScreen_field_0x04 + 4 * v162); /*0x4b86a9*/
      __asm /*0x4b86ac*/
      {
        fld dword ptr [edi+0Ch]
        fcomp ds:flt_7E1748
        fnstsw ax
      }
      if ( (_AX & 0x100) != 0 ) /*0x4b86ba*/
      {
        v267 = 127 - (10 * v154() - 10 * *(unsigned int *)_EDI) / 0x46; /*0x4b86e6*/
        if ( v267 < 63 ) /*0x4b86ea*/
        {
          v267 = 63; /*0x4b86ec*/
          *(unsigned int *)(_EDI + 12) = 1065353216; /*0x4b86f4*/
          *(unsigned int *)_EDI = v154(); /*0x4b86fd*/
        }
      }
      else
      {
        v267 = (10 * v154() - 10 * *(unsigned int *)_EDI) / 0x46 + 63; /*0x4b8727*/
        if ( v267 > 127 ) /*0x4b872b*/
          v267 = 127; /*0x4b872d*/
      }
      __asm /*0x4b8735*/
      {
        fild [esp+680h+var_660]
        fst [esp+680h+var_660]
        fcomp dword ptr [edi+8]
        fnstsw ax
      }
      if ( (_AX & 0x4000) == 0 ) /*0x4b8745*/
      {
        v166 = *(unsigned int *)(_EDI + 4); /*0x4b874b*/
        *(float *)(_EDI + 8) = v268; /*0x4b8758*/
        if ( v166 >= v284 && v166 <= v284 + 8 ) /*0x4b8766*/
        {
          v167 = v166 - v284; /*0x4b876c*/
          __asm { fld [esp+690h+var_660] } /*0x4b879d*/
          v168 = Math::RoundToInt(v1); /*0x4b87c3*/
          StreamClass::WriteBytes( /*0x4b87cf*/
            (StreamClass *)dword_87E8A4,
            v168,
            v305 + 68 * (v167 % 2) - 21,
            v272 + 50 * (v167 / 2) + 25,
            64,
            48);
          (*(void (**)(unsigned int, int))(*(unsigned int *)Block[v167] + 108))(Block[v167], 1); /*0x4b87df*/
          v154 = timeGetTime; /*0x4b87e2*/
          v162 = ii; /*0x4b87e8*/
          v254 = 1; /*0x4b87ec*/
        }
        if ( *(unsigned int *)(_EDI + 8) == 1123942400 || *(unsigned char *)(_EDI + 16) && *(unsigned int *)(_EDI + 8) == 1115422720 ) /*0x4b8808*/
        {
          __3_YAXPAX_Z((void *)_EDI); /*0x4b880b*/
          if ( v162 < v321.q010 ) /*0x4b881c*/
          {
            v169 = v162; /*0x4b881f*/
            if ( v162 < --v321.q010 ) /*0x4b882a*/
            {
              do /*0x4b8844*/
              {
                ++v169; /*0x4b8833*/
                *(unsigned int *)(v321.LoadScreen_field_0x04 + 4 * v169 - 4) = *(unsigned int *)(v321.LoadScreen_field_0x04 /*0x4b8837*/
                                                                                   + 4 * v169);
              }
              while ( v169 < v321.q010 ); /*0x4b8844*/
            }
          }
        }
      }
      --v162; /*0x4b8846*/
    }
    if ( kk ) /*0x4b885a*/
    {
      v170 = 0; /*0x4b8860*/
      v269 = 0; /*0x4b8864*/
      if ( kk > 0 ) /*0x4b8868*/
      {
        v171 = 0; /*0x4b886e*/
        for ( jj = 0; ; v171 = jj ) /*0x4b8870*/
        {
          v172 = 0; /*0x4b8881*/
          v264 = 1; /*0x4b8886*/
          v173 = *((unsigned int *)v312 + v170); /*0x4b888b*/
          if ( v171 >= 1 ) /*0x4b888e*/
          {
            v174 = (char *)v312 + 4 * v170 - 4; /*0x4b8890*/
            v175 = v171; /*0x4b8894*/
            do /*0x4b88d2*/
            {
              v176 = *(unsigned int *)v174; /*0x4b8896*/
              if ( *(unsigned int *)(*(unsigned int *)v174 + 32) == *(unsigned int *)(v173 + 32) /*0x4b88b6*/
                && v176->q024 == *(unsigned int *)(v173 + 36)
                && v176->q028 == *(unsigned int *)(v173 + 40)
                && v176->q02C == *(unsigned int *)(v173 + 44) )
              {
                v264 = 0; /*0x4b88ba*/
                if ( v172 || *(unsigned char *)(v176 + 72) ) /*0x4b88c1*/
                  v172 = 1; /*0x4b88c8*/
                v170 = v269; /*0x4b88ca*/
              }
              v174 -= 4; /*0x4b88ce*/
              --v175; /*0x4b88d1*/
            }
            while ( v175 ); /*0x4b88d2*/
          }
          if ( (7 * timeGetTime() - 7 * *(unsigned int *)(v173 + 60)) / 0x1E <= 0xFF ) /*0x4b8901*/
            v177 = (7 * timeGetTime() - 7 * *(unsigned int *)(v173 + 60)) / 0x1E; /*0x4b8930*/
          else
            v177 = 255; /*0x4b8903*/
          if ( v177 != *(unsigned int *)(v173 + 56) || v172 ) /*0x4b893a*/
          {
            *(unsigned int *)(v173 + 56) = v177; /*0x4b8944*/
            if ( v264 ) /*0x4b8949*/
            {
              v247 = *(int **)(v173 + 64); /*0x4b8959*/
              v178 = *(int **)(v173 + 48); /*0x4b895a*/
              v344[0] = 0; /*0x4b895d*/
              v344[1] = 0; /*0x4b8964*/
              BlitterDrawSHP( /*0x4b8984*/
                &g_DSurface_Hidden->ptr_0,
                (int)v278,
                v178,
                (unsigned int *)v173,
                v344,
                (unsigned int *)(v173 + 32),
                0,
                v247,
                0,
                0,
                1000,
                0,
                0);
            }
            StreamClass::WriteBytes( /*0x4b89b4*/
              (StreamClass *)dword_87E8A4,
              *(unsigned short *)(v173 + 56),
              *(unsigned int *)(v173 + 32),
              *(unsigned int *)(v173 + 36),
              *(unsigned int *)(v173 + 40),
              *(unsigned int *)(v173 + 44));
            v248 = *(int **)(v173 + 68); /*0x4b89c7*/
            v179 = *(int **)(v173 + 52); /*0x4b89c8*/
            v358[0] = 0; /*0x4b89cb*/
            v358[1] = 0; /*0x4b89d2*/
            BlitterDrawSHP( /*0x4b89f5*/
              &g_DSurface_Hidden->ptr_0,
              v326[0],
              v179,
              (unsigned int *)(v173 + 16),
              v358,
              (unsigned int *)(v173 + 32),
              0,
              v248,
              0,
              0,
              1000,
              0,
              0);
            *(unsigned char *)(v173 + 72) = 1; /*0x4b89fa*/
            v170 = v269; /*0x4b89fe*/
            v254 = 1; /*0x4b8a02*/
          }
          if ( v177 == 255 ) /*0x4b8a0d*/
          {
            v180 = *(int **)(v173 + 48); /*0x4b8a0f*/
            if ( v180 != v304 && v180 ) /*0x4b8a1c*/
              (*(void (**)(int *, int))*v180)(v180, 1); /*0x4b8a22*/
            v181 = *(int **)(v173 + 52); /*0x4b8a24*/
            if ( v181 != v304 && v181 ) /*0x4b8a31*/
              (*(void (**)(int *, int))*v181)(v181, 1); /*0x4b8a37*/
            __3_YAXPAX_Z((void *)v173); /*0x4b8a3a*/
            v182 = kk; /*0x4b8a3f*/
            if ( v170 < kk ) /*0x4b8a4b*/
            {
              v182 = kk - 1; /*0x4b8a4d*/
              v183 = v170; /*0x4b8a4e*/
              for ( kk = v182; v183 < kk; v182 = kk ) /*0x4b8a59*/
              {
                ++v183; /*0x4b8a62*/
                *((unsigned int *)v312 + v183 - 1) = *((unsigned int *)v312 + v183); /*0x4b8a66*/
              }
            }
            --v170; /*0x4b8a79*/
            --jj; /*0x4b8a7b*/
          }
          else
          {
            v182 = kk; /*0x4b8a81*/
          }
          v269 = ++v170; /*0x4b8a90*/
          ++jj; /*0x4b8a94*/
          if ( v170 >= v182 ) /*0x4b8a98*/
            break; /*0x4b8a98*/
        }
      }
    }
    v184 = timeGetTime(); /*0x4b8aa4*/
    v185 = v343; /*0x4b8aad*/
    v186 = *(__int16 *)(v343 + 6); /*0x4b8ab6*/
    v271 = v184 - v337 < 0x12C; /*0x4b8abf*/
    v187 = (timeGetTime() - Time) / 0xFA % v186; /*0x4b8adf*/
    if ( v187 != v332 ) /*0x4b8ae8*/
    {
      v375[0] = v305 + 45; /*0x4b8af8*/
      v375[1] = v272; /*0x4b8b0a*/
      v188 = *(__int16 *)(v185 + 2); /*0x4b8b12*/
      v360[0] = 0; /*0x4b8b18*/
      v360[1] = 0; /*0x4b8b1f*/
      v375[2] = v188; /*0x4b8b2e*/
      v189 = *(__int16 *)(v185 + 4); /*0x4b8b3c*/
      v332 = v187; /*0x4b8b48*/
      v375[3] = v189; /*0x4b8b55*/
      DrawToSurfaceSHP((int)g_DSurface_Hidden, (int)v278, v185, v187, v360, v375, 0, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x4b8b5c*/
      v254 = 1; /*0x4b8b61*/
    }
    v190 = timeGetTime(); /*0x4b8b66*/
    v191 = v318; /*0x4b8b6c*/
    v192 = LODWORD(v336); /*0x4b8b73*/
    v193 = v190; /*0x4b8b7c*/
    if ( v318 == LODWORD(v336) ) /*0x4b8b7e*/
    {
      v329 = v190; /*0x4b8c9e*/
LABEL_333:
      v197 = v305; /*0x4b8ca5*/
      goto LABEL_334; /*0x4b8ca5*/
    }
    if ( v190 - v329 < 0x32 ) /*0x4b8b92*/
      goto LABEL_333; /*0x4b8b92*/
    v359 = v190 - v329; /*0x4b8b9a*/
    v194 = LODWORD(v336); /*0x4b8bb1*/
    v291 = abs32(v318 - LODWORD(v336)); /*0x4b8bb5*/
    __asm /*0x4b8bb9*/
    {
      fild dword ptr [esp+680h+var_640]
      fstp [esp+680h+var_640]
      fild [esp+680h+var_4C8]
    }
    __asm { fstp [esp+688h+var_560] }
    Math::Sqrt(v292); /*0x4b8bd9*/
    __asm { fmul [esp+688h+var_560] } /*0x4b8bde*/
    __asm
    {
      fmul ds:dbl_7E8540
      fcomp [esp+680h+var_640]
      fnstsw ax
    }
    if ( (_AX & 0x100) != 0 ) /*0x4b8bf7*/
    {
      Math::Sqrt(v292); /*0x4b8c03*/
      __asm { fmul [esp+688h+var_560] } /*0x4b8c08*/
      __asm { fmul ds:dbl_7E8540 }
    }
    else
    {
      __asm { fld [esp+680h+var_640] } /*0x4b8c1a*/
    }
    (v196) = ((v196) & ~0xFFFF) | ((Math::RoundToInt(v1)) & 0xFFFF); /*0x4b8c1e*/
    if ( v191 < v192 ) /*0x4b8c25*/
      v196 = -v196; /*0x4b8c27*/
    v197 = v305; /*0x4b8c29*/
    v198 = v196 + v192; /*0x4b8c38*/
    v250 = SHPFrame; /*0x4b8c40*/
    v355[0] = v305 + 500; /*0x4b8c41*/
    v355[1] = v272 + 385; /*0x4b8c55*/
    LODWORD(v336) = v198; /*0x4b8c6d*/
    StringCSF = GetStringCSF(aTxtCreditsColo, 0, aDRa2mdpostDrop, 873); /*0x4b8c74*/
    TextRenderer::RenderCentered(v194, v198, v304, v355, StringCSF, 0, (int)v278, (int)v250, v251); /*0x4b8c8b*/
    v254 = 1; /*0x4b8c90*/
    v329 = v193; /*0x4b8c95*/
LABEL_334:
    if ( v308 < 0 ) /*0x4b8cb5*/
    {
      v202 = v325; /*0x4b8e6c*/
      if ( v323.unknown_18 != -1 ) /*0x4b8e76*/
      {
        v203 = Timer::GetTicks() - v323.unknown_18; /*0x4b8e84*/
        if ( v203 >= v202 ) /*0x4b8e8d*/
          goto LABEL_344; /*0x4b8e8d*/
        v202 -= v203; /*0x4b8e8f*/
      }
      if ( !v202 ) /*0x4b8e93*/
      {
LABEL_344:
        v293 = ((Random *)&dword_A8B230[14].NeedsSaveOrLink)->Range(0, 2147483646); /*0x4b8e99*/
        __asm /*0x4b8eb4*/
        {
          fild dword ptr [esp+680h+var_640]
          fmul ds:dbl_7E3570
          fld ds:flt_7E840C
          fcompp
          fnstsw ax
        }
        if ( (_AX & 0x4100) == 0 ) /*0x4b8ecb*/
        {
          v308 = 0; /*0x4b8ed1*/
          v338 = timeGetTime(); /*0x4b8edb*/
          v368[0] = v197 + 284; /*0x4b8eea*/
          v368[1] = v272 + 151; /*0x4b8efa*/
          v368[2] = v331[1]; /*0x4b8f1f*/
          v368[3] = v331[2]; /*0x4b8f40*/
          v357[0] = 0; /*0x4b8f47*/
          v357[1] = 0; /*0x4b8f4e*/
          DrawToSurfaceSHP((int)g_DSurface_Hidden, (int)v278, (int)v331, 0, v357, v368, 0, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x4b8f55*/
          v254 = 1; /*0x4b8f5a*/
        }
        Ticks = Timer::GetTicks(); /*0x4b8f6b*/
        v323.unknown_18 = Ticks; /*0x4b8f72*/
        v363 = 5; /*0x4b8f85*/
        v324 = v362; /*0x4b8f8c*/
        v325 = 5; /*0x4b8f93*/
      }
    }
    else
    {
      v200 = (timeGetTime() - v338) / 0x96; /*0x4b8cd3*/
      if ( v200 != v308 ) /*0x4b8cd8*/
      {
        if ( v200 >= v331[3] ) /*0x4b8ceb*/
        {
          v371[1] = v272 + 151; /*0x4b8d7c*/
          v201 = v331[1]; /*0x4b8d84*/
          v372 = v331[2]; /*0x4b8d92*/
          v373[3] = v372; /*0x4b8d99*/
          v371[0] = v197 + 284; /*0x4b8dad*/
          v371[2] = v201; /*0x4b8db5*/
          v373[2] = v201; /*0x4b8dbc*/
          v308 = -1; /*0x4b8dec*/
          v347[0] = 0; /*0x4b8df7*/
          v347[1] = 0; /*0x4b8dfe*/
          v373[0] = 284; /*0x4b8e05*/
          v373[1] = 151; /*0x4b8e10*/
          BlitterDrawSHP(&g_DSurface_Hidden->ptr_0, (int)v278, v304, v373, v347, v371, 0, SHPFrame, 0, 0, 1000, 0, 0); /*0x4b8e1b*/
          v364 = Timer::GetTicks(); /*0x4b8e2c*/
          v323.unknown_18 = v364; /*0x4b8e33*/
          v366 = 60; /*0x4b8e46*/
          v324 = v365; /*0x4b8e4d*/
          v325 = 60; /*0x4b8e54*/
        }
        else
        {
          v370[0] = v197 + 284; /*0x4b8cf9*/
          v370[1] = v272 + 151; /*0x4b8d06*/
          v370[2] = v331[1]; /*0x4b8d13*/
          v370[3] = v331[2]; /*0x4b8d1f*/
          v308 = v200; /*0x4b8d46*/
          v356[0] = 0; /*0x4b8d58*/
          v356[1] = 0; /*0x4b8d5f*/
          DrawToSurfaceSHP( /*0x4b8d66*/
            (int)g_DSurface_Hidden,
            (int)v278,
            (int)v331,
            v200,
            v356,
            v370,
            0,
            0,
            0,
            0,
            1000,
            0,
            0,
            0,
            0,
            0);
        }
        v254 = 1; /*0x4b8d6b*/
      }
    }
    v205 = (int *)(*(int (**)(MouseClass *, char *))(dword_887640->HandleClick_ph + 52))( /*0x4b8f9a*/
                    dword_887640,
                    v381);
    v206 = *v205; /*0x4b8fad*/
    v207 = 0; /*0x4b8faf*/
    v208 = v205[1]; /*0x4b8fb8*/
    if ( *v205 < v197 + 491 || v206 >= v197 + 627 || v208 < v272 + 25 || v208 >= v272 + 225 ) /*0x4b8fe6*/
    {
      v211 = -1; /*0x4b90b3*/
      v270 = v319; /*0x4b90b6*/
      v319 = -1; /*0x4b90ba*/
    }
    else
    {
      v209 = (v208 - v272 - 25) / 50; /*0x4b9025*/
      if ( v206 < v197 + 68 * ((v206 - v197 - 491) / 68) + 491 /*0x4b906a*/
        || v206 >= v197 + 68 * ((v206 - v197 - 491) / 68) + 555
        || v208 < v272 + 50 * v209 + 25
        || v208 >= v272 + 50 * v209 + 73
        || (v210 = (v206 - v197 - 491) / 68 + 2 * v209, v210 + v284 >= v311.Count) )
      {
        v197 = v305; /*0x4b9094*/
        v211 = -1; /*0x4b9098*/
        v270 = v319; /*0x4b909b*/
        v207 = 0; /*0x4b909f*/
        v319 = -1; /*0x4b90a3*/
      }
      else
      {
        v197 = v305; /*0x4b9070*/
        v211 = v210; /*0x4b9074*/
        v207 = *(TechnoClass **)(v311.Items + 4 * (v210 + v284)); /*0x4b9076*/
        v270 = v319; /*0x4b9080*/
        v319 = v210; /*0x4b9084*/
      }
    }
    v212 = dword_A8B230; /*0x4b90c1*/
    v213 = dword_A8B230[376].ptr_4; /*0x4b90c7*/
    if ( !v213 ) /*0x4b90cf*/
      goto LABEL_364; /*0x4b90cf*/
    v214 = 0; /*0x4b90d1*/
    if ( v213 <= 0 ) /*0x4b90d5*/
      goto LABEL_364; /*0x4b90d5*/
    while ( *(TechnoClass **)(dword_A8B230[375].referenceCount + 4 * v214) != v207 /*0x4b90ec*/
         || *(unsigned int *)(dword_A8B230[376].abstractFlags + 4 * v214) == -1 )
    {
      if ( ++v214 >= v213 ) /*0x4b90f1*/
        goto LABEL_364; /*0x4b90f1*/
    }
    if ( v214 == -1 ) /*0x4b9136*/
LABEL_364:
      LOBYTE(v326[1]) = 1; /*0x4b90f3*/
    else
      LOBYTE(v326[1]) = *(unsigned int *)(dword_A8B230[377].ptr_C + 4 * v214) < *(unsigned int *)(dword_A8B230[376].abstractFlags /*0x4b914a*/
                                                                                     + 4 * v214);
    if ( v207 == v340 && !v295 ) /*0x4b910a*/
    {
      v215 = v254; /*0x4b9154*/
    }
    else
    {
      v340 = v207; /*0x4b9118*/
      DisplayBuildingInfoPanel(v304, v278, v207, v326[1]); /*0x4b9124*/
      v212 = dword_A8B230; /*0x4b9129*/
      v215 = 1; /*0x4b912f*/
    }
    v263 = 0; /*0x4b915a*/
    if ( v215 ) /*0x4b915f*/
    {
      if ( v211 != v270 && v270 != -1 ) /*0x4b9170*/
        (*(void (**)(unsigned int, int))(*(unsigned int *)Block[v270] + 108))(Block[v270], 1); /*0x4b917d*/
      if ( v211 != -1 ) /*0x4b9183*/
      {
        if ( LOBYTE(v326[1]) ) /*0x4b9192*/
        {
          v216 = 255 >> g_BitMask_Blue << g_BitMask_Green; /*0x4b91bb*/
          v217 = 0; /*0x4b91bd*/
        }
        else
        {
          v217 = 255; /*0x4b91d3*/
          v216 = 0; /*0x4b91d8*/
        }
        v369[2] = 64; /*0x4b920e*/
        v369[3] = 48; /*0x4b9220*/
        v369[0] = v197 + 68 * (v211 % 2) + 491; /*0x4b9237*/
        v369[1] = v272 + 50 * (v211 / 2) + 25; /*0x4b9253*/
        (*(void (**)(ObjectClass *, int *, int))(g_DSurface_Hidden->ptr_0 + 88))( /*0x4b9264*/
          g_DSurface_Hidden,
          v369,
          (v217 >> g_BitShift_Green_0 << g_BitShift_Red) | v216);
      }
      Frame::Present((int)g_DSurface_Hidden, (int)v212, v197, v211, 0, (int)v251, v252, v253); /*0x4b9271*/
      v212 = dword_A8B230; /*0x4b9276*/
    }
  }
  while ( !(((v294) >> 8) & 0xFF) ); /*0x4b9282*/
  v218 = 0; /*0x4b928f*/
  v262 = 0; /*0x4b9293*/
  if ( v323.Count > 0 ) /*0x4b9297*/
  {
    while ( 1 ) /*0x4b92a4*/
    {
      v219 = *(unsigned int *)(v323.Items + 4 * v218); /*0x4b92a4*/
      v220 = 11 * (v218 / 5); /*0x4b92ba*/
      v221 = *(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 4 * v220 + 22128; /*0x4b92c2*/
      v222 = *(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 4 * v220 + 22144); /*0x4b92c9*/
      if ( v222 < 5 ) /*0x4b92d3*/
        break; /*0x4b92d3*/
LABEL_396:
      v218 = ++v262; /*0x4b9367*/
      if ( v262 >= v323.Count ) /*0x4b9379*/
        goto LABEL_397; /*0x4b9379*/
    }
    v223 = v212[376].ptr_4; /*0x4b92d9*/
    if ( v223 ) /*0x4b92e1*/
    {
      v225 = 0; /*0x4b92e8*/
      if ( v223 > 0 ) /*0x4b92ec*/
      {
        while ( *(unsigned int *)(v212[375].referenceCount + 4 * v225) != v219 /*0x4b9305*/
             || *(unsigned int *)(v212[376].abstractFlags + 4 * v225) == -1 )
        {
          if ( ++v225 >= v223 ) /*0x4b930a*/
          {
            v224 = -1; /*0x4b930c*/
            goto LABEL_393; /*0x4b930f*/
          }
        }
        v224 = v225; /*0x4b9314*/
        if ( v225 == -1 || *(unsigned int *)(v212[377].ptr_C + 4 * v225) < *(unsigned int *)(v212[376].abstractFlags + 4 * v225) ) /*0x4b932b*/
        {
LABEL_393:
          *(unsigned int *)(v221 + 4 * v222 + 20) = v219; /*0x4b932d*/
          ++*(unsigned int *)(v221 + 16); /*0x4b9335*/
          *(unsigned int *)(v221 + 40) += (*(int (**)(int))(*(unsigned int *)v219 + 172))(v219); /*0x4b9348*/
          if ( v224 != -1 ) /*0x4b934b*/
            ++*(unsigned int *)(dword_A8B230[377].ptr_C + 4 * v224); /*0x4b935f*/
        }
        v212 = dword_A8B230; /*0x4b9361*/
        goto LABEL_396; /*0x4b9361*/
      }
    }
    v224 = -1; /*0x4b92e3*/
    goto LABEL_393; /*0x4b92e6*/
  }
LABEL_397:
  if ( v278 ) /*0x4b9385*/
    (*(void (**)(BuildingClass *, int))v278->ptr_0)(v278, 1); /*0x4b938b*/
  if ( v326[0] ) /*0x4b9396*/
    (**(void (***)(int, int))v326[0])(v326[0], 1); /*0x4b939c*/
  if ( SubFile ) /*0x4b93a7*/
    (**(void (***)(int, int))SubFile)(SubFile, 1); /*0x4b93ad*/
  if ( v304 ) /*0x4b93b5*/
    (*(void (**)(int *, int))*v304)(v304, 1); /*0x4b93bb*/
  if ( v320 ) /*0x4b93c6*/
  {
    v226 = *(unsigned int *)(v320 - 4); /*0x4b93c8*/
    v227 = (void *)(v320 - 4); /*0x4b93cb*/
    v228 = 9 * v226; /*0x4b93ce*/
    v229 = v226 - 1; /*0x4b93d1*/
    v230 = (FileTreeNode *)(v320 + 4 * v228); /*0x4b93d2*/
    if ( v229 >= 0 ) /*0x4b93d5*/
    {
      v231 = v229 + 1; /*0x4b93d7*/
      do /*0x4b93e5*/
      {
        v230 -= 9; /*0x4b93da*/
        FileTreeNode::Destroy(v230); /*0x4b93df*/
        --v231; /*0x4b93e4*/
      }
      while ( v231 ); /*0x4b93e5*/
    }
    __3_YAXPAX_Z(v227); /*0x4b93e8*/
  }
  v232 = v380; /*0x4b93f0*/
  v320 = 4; /*0x4b93f7*/
  do /*0x4b9443*/
  {
    v233 = (FileTreeNode *)*v232; /*0x4b9402*/
    if ( *v232 ) /*0x4b9402*/
    {
      v234 = v233[-1]; /*0x4b9409*/
      v235 = v233 - 1; /*0x4b940c*/
      v236 = 9 * *(unsigned int *)&v234; /*0x4b940f*/
      v237 = *(unsigned int *)&v234 - 1; /*0x4b9412*/
      v238 = &v233[v236]; /*0x4b9413*/
      if ( v237 >= 0 ) /*0x4b9416*/
      {
        v239 = v237 + 1; /*0x4b9418*/
        do /*0x4b9426*/
        {
          v238 -= 9; /*0x4b941b*/
          FileTreeNode::Destroy(v238); /*0x4b9420*/
          --v239; /*0x4b9425*/
        }
        while ( v239 ); /*0x4b9426*/
      }
      __3_YAXPAX_Z(v235); /*0x4b9429*/
    }
    ++v232; /*0x4b9438*/
    --v320; /*0x4b943c*/
  }
  while ( v320 ); /*0x4b9443*/
  if ( v317 > 0 ) /*0x4b944e*/
  {
    v240 = Block; /*0x4b9450*/
    v241 = v317; /*0x4b9454*/
    do /*0x4b9466*/
    {
      if ( *v240 ) /*0x4b9456*/
        (**(void (***)(unsigned int, int))*v240)(*v240, 1); /*0x4b9460*/
      ++v240; /*0x4b9462*/
      --v241; /*0x4b9465*/
    }
    while ( v241 ); /*0x4b9466*/
  }
  __3_YAXPAX_Z(Block); /*0x4b946d*/
  (*(void (**)(MouseClass *))(dword_887640->HandleClick_ph + 12))(dword_887640); /*0x4b947d*/
  v242 = dword_87E8A4; /*0x4b9480*/
  if ( dword_87E8A4 ) /*0x4b948a*/
  {
    StreamObj::Release(dword_87E8A4); /*0x4b948e*/
    __3_YAXPAX_Z(v242); /*0x4b9494*/
  }
  dword_87E8A4 = 0; /*0x4b949e*/
  v243 = (BSurface *)__2_YAPAXI_Z(0x30u); /*0x4b94a4*/
  if ( v243 ) /*0x4b94ae*/
    dword_87E8A4 = (StreamObj *)BSurface::Construct(v243, v333, v334, v335, (int)(((v335) >> 32) & 0xFFFFFFFFu)); /*0x4b94e3*/
  else
    dword_87E8A4 = 0; /*0x4b94ea*/
  v244 = g_ZBufferDescriptor; /*0x4b94f0*/
  if ( g_ZBufferDescriptor ) /*0x4b94f8*/
  {
    Stream::GetField(g_ZBufferDescriptor); /*0x4b94fc*/
    __3_YAXPAX_Z(v244); /*0x4b9502*/
    g_ZBufferDescriptor = 0; /*0x4b950a*/
  }
  v245 = (BSurface *)__2_YAPAXI_Z(0x30u); /*0x4b9512*/
  if ( v245 ) /*0x4b951c*/
    g_ZBufferDescriptor = (Stream *)BSurface::ConstructEx(v245, v333, v334, v335, (int)(((v335) >> 32) & 0xFFFFFFFFu)); /*0x4b9551*/
  else
    g_ZBufferDescriptor = 0; /*0x4b9558*/
  (*(void (**)(MouseClass *))(dword_887640->HandleClick_ph + 16))(dword_887640); /*0x4b9566*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E4DF8) */  /*0x4b9577*/
  if ( v323.Items && v323.IsAllocated[0] ) /*0x4b9589*/
  {
    __3_YAXPAX_Z((void *)v323.Items); /*0x4b958c*/
    v323.Items = 0; /*0x4b9594*/
  }
  v323.IsAllocated[0] = 0; /*0x4b95a2*/
  v323.Capacity = 0; /*0x4b95ac*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E8520) */  /*0x4b95b3*/
  if ( v312 && (((v314) >> 8) & 0xFF) ) /*0x4b95c9*/
  {
    __3_YAXPAX_Z(v312); /*0x4b95cc*/
    v312 = 0; /*0x4b95d4*/
  }
  (v314) = ((v314) & ~(0xFF << 8)) | (((0) & 0xFF) << 8); /*0x4b95e2*/
  v313 = 0; /*0x4b95ec*/
  *(unsigned int *)v321.Render_ph = &off_7E8500; /*0x4b95f3*/
  if ( v321.LoadScreen_field_0x04 && BYTE1(v321.LoadScreen_field_0x0C) ) /*0x4b9609*/
  {
    __3_YAXPAX_Z((void *)v321.LoadScreen_field_0x04); /*0x4b960c*/
    v321.LoadScreen_field_0x04 = 0; /*0x4b9614*/
  }
  BYTE1(v321.LoadScreen_field_0x0C) = 0; /*0x4b961f*/
  v321.LoadScreen_field_0x08 = 0; /*0x4b9629*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E4DF8) */  /*0x4b9630*/
  if ( v311.Items && v311.IsAllocated[0] ) /*0x4b963c*/
  {
    __3_YAXPAX_Z((void *)v311.Items); /*0x4b963f*/
    v311.Items = 0; /*0x4b9647*/
  }
  v311.IsAllocated[0] = 0; /*0x4b9652*/
  v311.Capacity = 0; /*0x4b9657*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E16B0) */  /*0x4b965b*/
  v387 = 0; /*0x4b9666*/
  Vector::Clear((int)v386); /*0x4b966d*/
  *(unsigned int *)v385.__tail_0 = &off_7E1668; /*0x4b9679*/
  return ((BufferIOFileClass *)&v385)->Dtor(); /*0x4b9689*/

}

// 0x4ba2f0
void LoadScreen::InitVtable()
{
  this->q004 = 0; /*0x4ba2fb*/
  this->q008 = a2; /*0x4ba2fe*/
  (this->q00C) = 1; /*0x4ba301*/
  (this->u8_D) = 0; /*0x4ba305*/
  *(unsigned int *)this->Render_ph = &off_7E8500; /*0x4ba308*/
  if ( a2 ) /*0x4ba30e*/
  {
    if ( a3 ) /*0x4ba316*/
    {
      this->q004 = a3; /*0x4ba318*/
      return this->Render_ph; /*0x4ba31e*/
    }
    this->q004 = operator new(4 * a2); /*0x4ba32d*/
    (this->u8_D) = 1; /*0x4ba330*/
  }
  return this->Render_ph; /*0x4ba31d*/
}
// 0x4ba340
void LoadScreen::Constructor()
{
  this->q004 = 0; /*0x4ba34b*/
  this->q008 = a2; /*0x4ba34e*/
  (this->q00C) = 1; /*0x4ba351*/
  (this->u8_D) = 0; /*0x4ba355*/
  *(unsigned int *)this->Render_ph = 0; /*0x4ba358*/
  if ( a2 ) /*0x4ba35e*/
  {
    if ( a3 ) /*0x4ba366*/
    {
      this->q004 = a3; /*0x4ba368*/
      return this->Render_ph; /*0x4ba36e*/
    }
    this->q004 = operator new(4 * a2); /*0x4ba37d*/
    (this->u8_D) = 1; /*0x4ba380*/
  }
  return this->Render_ph; /*0x4ba36d*/
}
// 0x643400
void LoadScreen::RenderProgressBackground()
{
  unsigned int *FoundationSize; // eax
  int v7; // edi
  int v8; // ebp
  int BuildingAnimByName; // eax
  int *v10; // ebx
  int v11; // eax
  uint8_t v12; // dl
  int v13; // eax
  int v14; // eax
  struct tagRECT *v15; // [esp+0h] [ebp-58h]
  int v16; // [esp+4h] [ebp-54h]
  int v17; // [esp+8h] [ebp-50h]
  int16_t v18; // [esp+10h] [ebp-48h]
  int v19; // [esp+18h] [ebp-40h]
  unsigned int v20[4]; // [esp+28h] [ebp-30h] BYREF
  int v21[2]; // [esp+38h] [ebp-20h] BYREF
  int v22; // [esp+40h] [ebp-18h]
  unsigned int v24[4]; // [esp+48h] [ebp-10h] BYREF

  FoundationSize = Building::GetFoundationSize(v24, 0); /*0x643413*/
  v7 = FoundationSize->ptr_8; /*0x643430*/
  v8 = FoundationSize->ptr_C; /*0x64343c*/
  v20[1] = (*(((unsigned int *)&(a2)) + 1)) + 3; /*0x643446*/
  v19 = (*((unsigned int *)&(a2))) + 3; /*0x64344e*/
  v20[0] = (*((unsigned int *)&(a2))) + 3; /*0x643452*/
  v20[2] = v7; /*0x643456*/
  v20[3] = v8; /*0x64345a*/
  Rect::Inflate(v15, v16, v17); /*0x64345e*/
  BuildingAnimByName = a5; /*0x643463*/
  if ( a5 ) /*0x643469*/
  {
    (*((unsigned int *)&(a2))) = *(unsigned int *)(a5 + 780); /*0x64348c*/
  }
  else
  {
    BuildingAnimByName = FindBuildingAnimByName(aDarkred, 1); /*0x643475*/
    (*((unsigned int *)&(a2))) = dword_87F6C4; /*0x643480*/
  }
  if ( this->u32_74 ) /*0x643490*/
    (*((unsigned int *)&(a2))) = this->u32_74; /*0x643497*/
  v10 = a4; /*0x64349e*/
  if ( this->u32_71 ) /*0x64349b*/
  {
    v11 = Color::ConvertToRGB(&BuildingAnimByName->q308, (int)&a5); /*0x6434b5*/
    v18 = *(unsigned short *)v11; /*0x6434bd*/
    v12 = *(unsigned char *)(v11 + 2); /*0x6434c8*/
    v13 = *v10; /*0x6434cb*/
    v10 = a4; /*0x643521*/
    (*(void (**)(int *, unsigned int *, int))(v13 + 88))( /*0x643529*/
      a4,
      v20,
      ((uint8_t)v18 >> g_BitShift_Green_0 << g_BitShift_Red)
    | ((*(((unsigned char *)&(v18)) + (sizeof(v18) - 1))) >> g_BitMask_Blue << g_BitMask_Green)
    | (v12 >> g_BitMask_Red << g_BitShift_Blue));
  }
  v21[0] = v19; /*0x643538*/
  v21[1] = (*(((unsigned int *)&(a2)) + 1)) + 3; /*0x64353c*/
  v22 = v7; /*0x643544*/
  v8 = v8; /*0x643548*/
  (*((unsigned short *)&(v14))) = Math::RoundToInt((double)v7 * a3); /*0x64354c*/
  v22 = v14; /*0x643551*/
  a3 = 0.0; /*0x64357f*/
  DrawToSurfaceSHP( /*0x643594*/
    (int)v10,
    (*((signed int *)&(a2))),
    this->u32_54,
    0,
    (int *)&a3,
    v21,
    1024,
    0,
    0,
    0,
    1000,
    0,
    0,
    0,
    0,
    0);
}
// 0x643ae0
void LoadScreen_Render()
{
  int result; // eax
  HWND v6; // eax
  HWND DlgItem; // eax
  char v8; // dl
  int v9; // ecx
  char v10; // al
  signed int v11; // edi
  int BuildingAnimByName; // eax
  int v13; // eax
  int v14; // [esp+0h] [ebp-20h]
  int v15; // [esp+4h] [ebp-1Ch]
  double v16; // [esp+8h] [ebp-18h] BYREF
  struct tagRECT Rect; // [esp+10h] [ebp-10h] BYREF
  double v18; // [esp+24h] [ebp+4h]

  (*((unsigned char *)&(result))) = *(unsigned char *)(a1 + 96); /*0x643ae7*/
  if ( (unsigned char)result ) /*0x643aec*/
  {
    result = *(unsigned int *)(a1 + 84); /*0x643af2*/
    if ( result ) /*0x643af7*/
    {
      v6 = *(HWND *)(a1 + 100); /*0x643afd*/
      if ( v6 ) /*0x643b02*/
      {
        DlgItem = GetDlgItem(v6, 1593); /*0x643b0a*/
        ScreenDialogToClient(DlgItem, &Rect); /*0x643b16*/
        v8 = *(unsigned char *)(a1 + 97); /*0x643b1b*/
        v16 = *(double *)&Rect.left; /*0x643b26*/
        if ( v8 > 0 ) /*0x643b30*/
          v18 = *(double *)(a1 + 8) / *(double *)(a1 + 72); /*0x643b48*/
        else
          v18 = *(double *)(a1 + 72); /*0x643b38*/
        LoadScreen::RenderProgressBackground(a1, *(double *)&Rect.left, v18, (int *)DSurface_Alternate, 0); /*0x643b63*/
      }
      else
      {
        v16 = a4; /*0x643b7b*/
        if ( *(unsigned long long *)&a4 == (((unsigned long)(unsigned int)(-1)) | ((unsigned long)(unsigned int)((*((unsigned int *)&(a4)))) << 32)) ) /*0x643b83*/
        {
          v9 = *(unsigned int *)(a1 + 108); /*0x643b8c*/
          (*((unsigned int *)&(v16))) = *(unsigned int *)(a1 + 104); /*0x643b8f*/
          (*(((unsigned int *)&(v16)) + 1)) = v9; /*0x643b93*/
        }
        v10 = *(unsigned char *)(a1 + 97); /*0x643b97*/
        v11 = *(unsigned int *)(a1 + 80); /*0x643b9a*/
        if ( v10 == 1 ) /*0x643b9f*/
        {
          if ( dword_A8B238[0] ) /*0x643ba8*/
          {
            if ( !v11 ) /*0x643bdc*/
              v11 = *(unsigned int *)dword_A8DA78; /*0x643be4*/
            BuildingAnimByName = Render_Render_642BB0(0); /*0x643bea*/
          }
          else
          {
            if ( !v11 ) /*0x643bac*/
              v11 = (signed int)&g_TypeClass_DefaultString; /*0x643bae*/
            if ( *(unsigned int *)(a1 + 128) ) /*0x643bb3*/
              BuildingAnimByName = FindBuildingAnimByName(g_INI_Key_SovietLoad, 1); /*0x643bd3*/
            else
              BuildingAnimByName = FindBuildingAnimByName(g_INI_Key_AlliedLoad, 1); /*0x643bc7*/
          }
          RenderBuildingProductionButton(a1, BuildingAnimByName, v11, (int *)&v16, 0, *(unsigned char *)(a1 + 112)); /*0x643bfe*/
        }
        else
        {
          v11 = 0; /*0x643c05*/
          if ( v10 > 0 ) /*0x643c09*/
          {
            do /*0x643c36*/
            {
              v13 = Render_Render_642BB0(v11); /*0x643c0e*/
              RenderBuildingProductionButton( /*0x643c2a*/
                a1,
                v13,
                *(unsigned int *)(dword_A8DA78 + 4 * v11),
                (int *)&v16,
                v11,
                *(unsigned char *)(a1 + 112));
              ++v11; /*0x643c33*/
            }
            while ( v11 < *(char *)(a1 + 97) ); /*0x643c36*/
          }
        }
        return Frame::Present((int)g_DSurface_Hidden, a2, a3, v11, 0, v14, v15, (int *)(*((unsigned int *)&(v16)))); /*0x643c42*/
      }
    }
  }
  return result; /*0x643b68*/
}
// 0x552d60
void LoadingScreen::Render()
{

  const wchar_t *result; // eax
  wchar_t *v3; // esi
  int v4; // ebx
  LoadingScreen *v5; // edi
  char *p_uniqueId; // ebx
  int Value; // esi
  char *BackgroundImage; // edi
  char *OverlayImage; // esi
  int v10; // edi
  int v11; // ebx
  int _72B380; // eax
  int LoadingScreen_field_0x0C; // ecx
  int LoadingScreen_field_0x10; // edx
  int v15; // eax
  int v16; // eax
  int v17; // edx
  Color *LoadScreenAnim; // esi
  size_t LoadingScreen_field_0x3C; // eax
  int ptr_4; // ecx
  unsigned __int16 *v21; // eax
  int v22; // esi
  int v23; // edx
  int v24; // edi
  int v25; // ebx
  int v26; // ebp
  unsigned char *v27; // eax
  int PlayerSide; // ebx
  char *v29; // eax
  int v30; // edi
  void *v31; // ecx
  ObjectClass *v32; // eax
  Surface *v33; // esi
  unsigned int *v34; // eax
  int v35; // edx
  Color *ColorScheme; // eax
  int v37; // eax
  unsigned __int16 *StringCSF; // edi
  int v39; // ecx
  int v40; // esi
  unsigned int *v41; // eax
  int v42; // esi
  int v43; // edx
  int v44; // ebx
  int v45; // esi
  Char *v46; // ebx
  unsigned char *v47; // eax
  wchar_t *v48; // eax
  char *i; // ecx
  unsigned __int16 v50; // ax
  int v51; // esi
  int v52; // edi
  unsigned char *v53; // eax
  unsigned __int16 *v54; // esi
  int *v55; // eax
  int v56; // edi
  int v57; // ebx
  int v58; // ecx
  unsigned __int16 *v59; // esi
  int *v60; // eax
  int *v61; // eax
  struct tagRECT *v62; // [esp+14h] [ebp-1268h]
  struct tagRECT *v63; // [esp+14h] [ebp-1268h]
  struct tagRECT *v64; // [esp+14h] [ebp-1268h]
  int v65; // [esp+18h] [ebp-1264h]
  int v66; // [esp+18h] [ebp-1264h]
  int v67; // [esp+18h] [ebp-1264h]
  int v68; // [esp+1Ch] [ebp-1260h]
  int v69; // [esp+1Ch] [ebp-1260h]
  int v70; // [esp+1Ch] [ebp-1260h]
  int *v71; // [esp+20h] [ebp-125Ch]
  unsigned __int16 v72; // [esp+24h] [ebp-1258h]
  int v73; // [esp+24h] [ebp-1258h]
  Char *v74; // [esp+24h] [ebp-1258h]
  int v75; // [esp+24h] [ebp-1258h]
  int v76; // [esp+24h] [ebp-1258h]
  Char *v77; // [esp+24h] [ebp-1258h]
  int v78; // [esp+24h] [ebp-1258h]
  unsigned __int8 v79; // [esp+26h] [ebp-1256h]
  Palette v80; // [esp+2Ch] [ebp-1250h] BYREF

  v80.m_Colors[27] = g_DisplayWidth == 640; /*0x552d7f*/
  result = (const wchar_t *)__2_YAPAXI_Z(0x20u); /*0x552d84*/
  v3 = (wchar_t *)result; /*0x552d89*/
  if ( result ) /*0x552d92*/
  {
    v4 = (int)*(&g_DisplayWidth + 1); /*0x552d94*/
    v5 = g_DisplayWidth; /*0x552d9a*/
    Surface::Construct((Surface *)result, (int)g_DisplayWidth, (int)*(&g_DisplayWidth + 1)); /*0x552da4*/
    v3->u32_C = 0; /*0x552db4*/
    /* X11: ptr_0 install elided (X67 star-deref, RHS XSurface_Vtable) */  /*0x552dbb*/
    v3->u32_10 = 2; /*0x552dc1*/
    result = (const wchar_t *)Buffer::Init((Buffer *)(v3 + 10), 0, 2 * v4 * (unsigned int)v5); /*0x552dc8*/
    /* X11: ptr_0 install elided (X67 star-deref, RHS BSurface_Vtable) */  /*0x552dcd*/
  }
  else
  {
    v3 = 0; /*0x552dd7*/
  }
  this->q060 = v3; /*0x552ddb*/
  if ( v3 ) /*0x552dde*/
  {
    *(unsigned int *)&v80.m_Colors[76] = 0; /*0x552df3*/
    *(unsigned int *)&v80.m_Colors[80] = 0; /*0x552df9*/
    *(unsigned long long *)&v80.m_Colors[84] = *(unsigned long long *)&g_DisplayWidth; /*0x552e3f*/
    *(unsigned int *)&v80.m_Colors[28] = (LOBYTE(stru_A83CD9.ptr_0) >> g_BitShift_Green_0 << g_BitShift_Red) /*0x552e4f*/
                                 | (BYTE1(stru_A83CD9.ptr_0) >> g_BitMask_Blue << g_BitMask_Green)
                                 | (BYTE2(stru_A83CD9.ptr_0) >> g_BitMask_Red << g_BitShift_Blue);
    (*(void (**)(wchar_t *, char *, char *, unsigned int))(*(unsigned int *)v3 + 16))( /*0x552e62*/
      v3,
      &v80.m_Colors[76],
      &v80.m_Colors[76],
      *(unsigned int *)&v80.m_Colors[28]);
    if ( *(unsigned int *)&dword_A8B238 ) /*0x552e6b*/
    {
      PlayerSide = SessionClass::GetPlayerSide(**(int ***)&stru_A8D804.__pad_3D[567]); /*0x553319*/
      *(unsigned int *)&v80.m_Colors[32] = PlayerSide; /*0x55331d*/
      if ( dword_A8B23C /*0x553363*/
        && (*(unsigned __int8 (**)(ObjectClass *))(dword_A8B23C->ptr_0 + 8))(dword_A8B23C)
        && (*(unsigned int *)v80.m_Colors = 0,
            CampaignClass::FindMission((int)&g_DDrawSurfaceManager, byte_A8B8E0, &v80),
            ((String *)(*(unsigned int *)v80.m_Colors + 72))->Length())
        && ((String *)(*(unsigned int *)v80.m_Colors + 68))->Length() )
      {
        v29 = String::GetOrEmpty((String *)(*(unsigned int *)v80.m_Colors + 72)); /*0x553373*/
        Palette::LoadFile(v29); /*0x55337a*/
        v75 = Render_Render_72B520(); /*0x553388*/
        strcpy(&v80.m_Colors[108], String::GetOrEmpty((String *)(*(unsigned int *)v80.m_Colors + 68))); /*0x5533b1*/
        v30 = v75; /*0x5533ba*/
      }
      else
      {
        v31 = off_8297D4; /*0x5533d2*/
        if ( g_DisplayWidth != 640 ) /*0x5533d8*/
          v31 = off_8297D8; /*0x5533da*/
        if ( (*(unsigned int *)&dword_A8B238 == 3 || *(unsigned int *)&dword_A8B238 == 4) /*0x5533fb*/
          && *(unsigned int *)(**(unsigned int **)&stru_A8D804.__pad_3D[567] + 107) == -1 )
        {
          sprintf(&v80.m_Colors[108], off_8297CC[0], v31); /*0x55340d*/
        }
        else if ( PlayerSide ) /*0x553414*/
        {
          switch ( PlayerSide ) /*0x553424*/
          {
            case 1: /*0x553424*/
              sprintf(&v80.m_Colors[108], off_8297BC[0], v31); /*0x553436*/
              break;
            case 2: /*0x553424*/
              sprintf(&v80.m_Colors[108], off_8297B0[0], v31); /*0x553450*/
              break;
            case 3: /*0x553424*/
              sprintf(&v80.m_Colors[108], off_8297B4[0], v31); /*0x553460*/
              break;
            case 4: /*0x553424*/
              sprintf(&v80.m_Colors[108], off_8297A8[0], v31); /*0x553477*/
              break;
            case 5: /*0x553424*/
              sprintf(&v80.m_Colors[108], off_8297C0[0], v31); /*0x55348e*/
              break;
            case 6: /*0x553424*/
              sprintf(&v80.m_Colors[108], off_8297B8[0], v31); /*0x55349b*/
              break;
            case 7: /*0x553424*/
              sprintf(&v80.m_Colors[108], off_8297AC[0], v31); /*0x5534b2*/
              break;
            case 8: /*0x553424*/
              sprintf(&v80.m_Colors[108], off_8297C4[0], v31); /*0x5534c9*/
              break;
            case 9: /*0x553424*/
              sprintf(&v80.m_Colors[108], off_8297D0, v31); /*0x5534df*/
              break;
          }
        }
        else
        {
          sprintf(&v80.m_Colors[108], off_8297C8, v31); /*0x55341c*/
        }
        v30 = Render_Render_72B500(); /*0x5534ec*/
      }
      this->u32_48 = LoadFileSHP(&v80.m_Colors[108], &this->q144); /*0x553504*/
      *(unsigned int *)&v80.m_Colors[144] = 0; /*0x553507*/
      *(unsigned int *)&v80.m_Colors[148] = 0; /*0x55350e*/
      INISectionList::Constructor((INISectionList *)&v80.m_Colors[152]); /*0x553515*/
      Node::Init((MixFileClass *)&v80.m_Colors[180]); /*0x553521*/
      *(unsigned int *)&v80.m_Colors[200] = 0; /*0x553532*/
      v80.m_Colors[204] = 0; /*0x553539*/
      *(unsigned int *)&v80.m_Colors[140] = &CCINIClass_Vtable; /*0x553541*/
      CCFileClass::Construct((CCFileClass *)&v80.m_Colors[228], byte_A8B8E0); /*0x55354c*/
      CCINIClass::Load((CCINIClass *)&v80.m_Colors[140], (int)&v80.m_Colors[228], 1, 0); /*0x553563*/
      v32 = (ObjectClass *)__2_YAPAXI_Z(4u); /*0x55356a*/
      if ( v32 ) /*0x553574*/
        v33 = (Surface *)unknown_libname_27(v32); /*0x55357d*/
      else
        v33 = 0; /*0x553581*/
      if ( BYTE1(dword_A8B230[375].ptr_0) ) /*0x553588*/
        Surface::LoadToSurfaceSHP(v33, ExistingFileName); /*0x553599*/
      else
        PreviewClass::ReadPreview((PreviewClass *)v33, byte_A8B8E0); /*0x5535a7*/
      v34 = Copy8Bytes(&v80.m_Colors[4], &this->LoadingScreen_field_0x1C); /*0x5535b3*/
      *(unsigned int *)&v80.m_Colors[68] = *v34; /*0x5535ba*/
      *(unsigned int *)&v80.m_Colors[72] = v34[1]; /*0x5535c3*/
      if ( v30 ) /*0x5535c7*/
      {
        v35 = this->u32_48; /*0x5535c9*/
        if ( v35 ) /*0x5535ce*/
          DrawToSurfaceSHP( /*0x5535fe*/
            this->q060,
            v30,
            v35,
            0,
            (int *)&v80.m_Colors[68],
            (int *)&v80.m_Colors[76],
            1024,
            0,
            0,
            0,
            1000,
            0,
            0,
            0,
            0,
            0);
      }
      ColorScheme = (Color *)LoadingScreen::GetColorScheme((LoadingScreen *)&stru_AC4B48.__pad_2F4[284]); /*0x553608*/
      v37 = Color::ConvertToRGB(ColorScheme + 194, (int)&v80); /*0x553618*/
      *(unsigned int *)&v80.m_Colors[28] = ((unsigned __int8)*(unsigned short *)v37 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x55367f*/
                                   | ((unsigned __int8)HIBYTE(*(unsigned short *)v37) >> g_BitMask_Blue << g_BitMask_Green)
                                   | (*(unsigned __int8 *)(v37 + 2) >> g_BitMask_Red << g_BitShift_Blue);
      Tactical::Radar_Render(this->q060, PlayerSide, (int)this, v30, (int)v62, v65, v68, v71); /*0x553687*/
      if ( v33 ) /*0x55368e*/
      {
        ComPtr::Dtor((ComPtr *)v33); /*0x553692*/
        __3_YAXPAX_Z(v33); /*0x553698*/
      }
      if ( (*(unsigned int *)&dword_A8B238 == 3 || *(unsigned int *)&dword_A8B238 == 4) /*0x5536bb*/
        && *(unsigned int *)(**(unsigned int **)&stru_A8D804.__pad_3D[567] + 107) == -1 )
      {
        StringCSF = GetStringCSF(aNameObserver, 0, g_Str_File_LdPrgMgr_cpp, 178); /*0x5536d3*/
      }
      else if ( PlayerSide ) /*0x5536dc*/
      {
        switch ( PlayerSide ) /*0x5536fe*/
        {
          case 1: /*0x5536fe*/
            StringCSF = GetStringCSF(aNameAlliance, 0, g_Str_File_LdPrgMgr_cpp, 185); /*0x553716*/
            break;
          case 2: /*0x5536fe*/
            StringCSF = GetStringCSF(aNameFrench, 0, g_Str_File_LdPrgMgr_cpp, 187); /*0x553738*/
            break;
          case 3: /*0x5536fe*/
            StringCSF = GetStringCSF(aNameGermans, 0, g_Str_File_LdPrgMgr_cpp, 189); /*0x55375a*/
            break;
          case 4: /*0x5536fe*/
            StringCSF = GetStringCSF(aNameBritish, 0, g_Str_File_LdPrgMgr_cpp, 191); /*0x55377c*/
            break;
          case 5: /*0x5536fe*/
            StringCSF = GetStringCSF(aNameAfricans, 0, g_Str_File_LdPrgMgr_cpp, 193); /*0x55379e*/
            break;
          case 6: /*0x5536fe*/
            StringCSF = GetStringCSF(aNameArabs, 0, g_Str_File_LdPrgMgr_cpp, 195); /*0x5537bd*/
            break;
          case 7: /*0x5536fe*/
            StringCSF = GetStringCSF(aNameConfederat, 0, g_Str_File_LdPrgMgr_cpp, 197); /*0x5537dc*/
            break;
          case 8: /*0x5536fe*/
            StringCSF = GetStringCSF(aNameRussians, 0, g_Str_File_LdPrgMgr_cpp, 199); /*0x5537fb*/
            break;
          case 9: /*0x5536fe*/
            StringCSF = GetStringCSF(aNameYuricountr, 0, g_Str_File_LdPrgMgr_cpp, 201); /*0x55381a*/
            break;
          default:
            StringCSF = 0; /*0x55381e*/
            break;
        }
      }
      else
      {
        StringCSF = GetStringCSF(aNameAmericans, 0, g_Str_File_LdPrgMgr_cpp, 183); /*0x5536f4*/
      }
      if ( g_DisplayWidth == 640 ) /*0x55382d*/
      {
        v39 = 385; /*0x55382f*/
        v40 = 436; /*0x553834*/
      }
      else
      {
        v39 = 540; /*0x55383b*/
        v40 = 310; /*0x553840*/
      }
      if ( (int)g_DisplayWidth >= 800 ) /*0x553852*/
      {
        v39 += (int)&g_DisplayWidth[-13].LoadingScreen_field_0x20 / 2; /*0x553861*/
        v40 += (int)&(*(&g_DisplayWidth + 1))[-10].LoadingScreen_field_0x28 / 2; /*0x55386f*/
      }
      *(unsigned int *)&v80.m_Colors[52] = v39; /*0x553871*/
      *(unsigned int *)&v80.m_Colors[56] = v40; /*0x553882*/
      *(unsigned int *)&v80.m_Colors[60] = 200; /*0x553886*/
      *(unsigned int *)&v80.m_Colors[64] = 20; /*0x55388a*/
      v41 = Copy8Bytes(&v80.m_Colors[4], (int *)&v80.m_Colors[52]); /*0x55388e*/
      *(unsigned int *)&v80.m_Colors[68] = *v41; /*0x553895*/
      *(unsigned int *)&v80.m_Colors[72] = v41[1]; /*0x5538a0*/
      v42 = *v41; /*0x5538a4*/
      v43 = this->q060; /*0x5538a9*/
      *(unsigned int *)&v80.m_Colors[8] = v41[1]; /*0x5538ac*/
      v44 = *(unsigned int *)&v80.m_Colors[60]; /*0x5538b2*/
      *(unsigned int *)&v80.m_Colors[20] = 0; /*0x5538b4*/
      *(unsigned int *)v80.m_Colors = 0; /*0x5538b8*/
      v76 = v43; /*0x5538ce*/
      Text::Layout(g_FogOfWarState, StringCSF, (int *)&v80.m_Colors[20], &v80, *(int *)&v80.m_Colors[60]); /*0x5538d2*/
      *(unsigned int *)&v80.m_Colors[40] = *(unsigned int *)&v80.m_Colors[8]; /*0x5538e9*/
      *(unsigned int *)&v80.m_Colors[48] = *(unsigned int *)v80.m_Colors; /*0x5538ed*/
      *(unsigned int *)&v80.m_Colors[44] = *(unsigned int *)&v80.m_Colors[20]; /*0x5538fc*/
      *(unsigned int *)&v80.m_Colors[36] = v44 + v42 - *(unsigned int *)&v80.m_Colors[20]; /*0x553900*/
      Rect::Inflate(v63, v66, v69); /*0x553904*/
      DSurface::FillRectWithColor((int *)&v80.m_Colors[36], v76, 0, 0x9Fu); /*0x553918*/
      *(unsigned int *)&v80.m_Colors[36] = *(unsigned int *)&v80.m_Colors[52]; /*0x553929*/
      *(unsigned int *)&v80.m_Colors[40] = *(unsigned int *)&v80.m_Colors[56]; /*0x55392f*/
      *(unsigned int *)&v80.m_Colors[44] = *(unsigned int *)&v80.m_Colors[60] + *(unsigned int *)&v80.m_Colors[52]; /*0x553933*/
      *(unsigned int *)&v80.m_Colors[48] = *(unsigned int *)&v80.m_Colors[56] + *(unsigned int *)&v80.m_Colors[64]; /*0x553944*/
      v45 = this->q060; /*0x55394e*/
      v46 = (Char *)g_FogOfWarState; /*0x55395a*/
      v47 = Palette::SixBitTo16Bit( /*0x55398f*/
              &v80,
              (unsigned __int8)(*(unsigned short *)&v80.m_Colors[28] >> g_BitShift_Red) << g_BitShift_Green_0,
              (unsigned __int8)(*(unsigned short *)&v80.m_Colors[28] >> g_BitMask_Green) << g_BitMask_Blue,
              (unsigned __int8)(*(unsigned short *)&v80.m_Colors[28] >> g_BitShift_Blue) << g_BitMask_Red);
      PrintFontLayout( /*0x5539df*/
        v45,
        StringCSF,
        (int *)&v80.m_Colors[36],
        v46,
        (unsigned __int8)*(unsigned short *)v47
      | (((unsigned __int8)HIBYTE(*(unsigned short *)v47) | ((unsigned __int8)v47[2] << 8)) << 8),
        2,
        12,
        0,
        0,
        0);
      if ( *(unsigned int *)&dword_A8B238 != 3 && *(unsigned int *)&dword_A8B238 != 4 /*0x5539ff*/
        || *(unsigned int *)(**(unsigned int **)&stru_A8D804.__pad_3D[567] + 107) != -1 )
      {
        if ( *(unsigned int *)&v80.m_Colors[32] ) /*0x553a0b*/
        {
          switch ( *(unsigned int *)&v80.m_Colors[32] ) /*0x553a2b*/
          {
            case 1: /*0x553a2b*/
              v48 = GetStringCSF(aNameBeagle, 0, g_Str_File_LdPrgMgr_cpp, 249); /*0x553a3e*/
              break;
            case 2: /*0x553a2b*/
              v48 = GetStringCSF(aNameGtgcan, 0, g_Str_File_LdPrgMgr_cpp, 251); /*0x553a5e*/
              break;
            case 3: /*0x553a2b*/
              v48 = GetStringCSF(aNameTnkd, 0, g_Str_File_LdPrgMgr_cpp, 253); /*0x553a7e*/
              break;
            case 4: /*0x553a2b*/
              v48 = GetStringCSF(aNameSnipe, 0, g_Str_File_LdPrgMgr_cpp, 255); /*0x553a9e*/
              break;
            case 5: /*0x553a2b*/
              v48 = GetStringCSF(aNameDtruck, 0, g_Str_File_LdPrgMgr_cpp, 257); /*0x553abe*/
              break;
            case 6: /*0x553a2b*/
              v48 = GetStringCSF(aNameDeso, 0, g_Str_File_LdPrgMgr_cpp, 259); /*0x553adb*/
              break;
            case 7: /*0x553a2b*/
              v48 = GetStringCSF(aNameTerror, 0, g_Str_File_LdPrgMgr_cpp, 261); /*0x553af8*/
              break;
            case 8: /*0x553a2b*/
              v48 = GetStringCSF(aNameTtnk, 0, g_Str_File_LdPrgMgr_cpp, 263); /*0x553b15*/
              break;
            case 9: /*0x553a2b*/
              v48 = GetStringCSF(aNameYuri, 0, g_Str_File_LdPrgMgr_cpp, 265); /*0x553b32*/
              break;
            default:
              v48 = 0; /*0x553b39*/
              break;
          }
        }
        else
        {
          v48 = GetStringCSF(aNamePara, 0, g_Str_File_LdPrgMgr_cpp, 247); /*0x553a1e*/
        }
        wcscpy((wchar_t *)&v80.m_Colors[336], v48); /*0x553b44*/
        for ( i = &v80.m_Colors[336]; *(unsigned short *)i; i += 2 ) /*0x553b5c*/
        {
          v50 = *(unsigned short *)i; /*0x553b5e*/
          if ( *(unsigned short *)i >= 0x61u && v50 <= 0x7Au || v50 >= 0xE0u && v50 <= 0xFEu ) /*0x553b77*/
            *(unsigned short *)i = v50 - 32; /*0x553b7c*/
        }
        if ( g_DisplayWidth == 640 ) /*0x553b95*/
        {
          v51 = 16; /*0x553b97*/
          v52 = 72; /*0x553b9c*/
        }
        else
        {
          v51 = 20; /*0x553ba3*/
          v52 = 90; /*0x553ba8*/
        }
        if ( (int)g_DisplayWidth >= 800 ) /*0x553bbf*/
        {
          v51 += (int)&g_DisplayWidth[-13].LoadingScreen_field_0x20 / 2; /*0x553bce*/
          v52 += (int)&(*(&g_DisplayWidth + 1))[-10].LoadingScreen_field_0x28 / 2; /*0x553bdc*/
        }
        *(unsigned int *)&v80.m_Colors[64] = 20; /*0x553be5*/
        *(unsigned int *)&v80.m_Colors[60] = 200; /*0x553bf1*/
        *(unsigned int *)&v80.m_Colors[52] = v51; /*0x553bf9*/
        *(unsigned int *)&v80.m_Colors[56] = v52; /*0x553c05*/
        *(unsigned int *)&v80.m_Colors[36] = v51; /*0x553c09*/
        *(unsigned int *)&v80.m_Colors[40] = v52; /*0x553c0d*/
        *(unsigned int *)&v80.m_Colors[44] = v51 + 200; /*0x553c1e*/
        *(unsigned int *)&v80.m_Colors[48] = v52 + 20; /*0x553c24*/
        *(unsigned int *)&v80.m_Colors[20] = this->q060; /*0x553c59*/
        v77 = (Char *)g_FogOfWarState; /*0x553c6c*/
        v53 = Palette::SixBitTo16Bit( /*0x553ca6*/
                &v80,
                (unsigned __int8)((unsigned __int16)((LOBYTE(stru_A83CD9.ptr_0) >> g_BitShift_Green_0 << g_BitShift_Red)
                                                   | (BYTE1(stru_A83CD9.ptr_0) >> g_BitMask_Blue << g_BitMask_Green)
                                                   | (BYTE2(stru_A83CD9.ptr_0) >> g_BitMask_Red << g_BitShift_Blue)) >> g_BitShift_Red) << g_BitShift_Green_0,
                (unsigned __int8)((unsigned __int16)((LOBYTE(stru_A83CD9.ptr_0) >> g_BitShift_Green_0 << g_BitShift_Red)
                                                   | (BYTE1(stru_A83CD9.ptr_0) >> g_BitMask_Blue << g_BitMask_Green)
                                                   | (BYTE2(stru_A83CD9.ptr_0) >> g_BitMask_Red << g_BitShift_Blue)) >> g_BitMask_Green) << g_BitMask_Blue,
                (unsigned __int8)((unsigned __int16)((LOBYTE(stru_A83CD9.ptr_0) >> g_BitShift_Green_0 << g_BitShift_Red)
                                                   | (BYTE1(stru_A83CD9.ptr_0) >> g_BitMask_Blue << g_BitMask_Green)
                                                   | (BYTE2(stru_A83CD9.ptr_0) >> g_BitMask_Red << g_BitShift_Blue)) >> g_BitShift_Blue) << g_BitMask_Red);
        *(unsigned short *)&v80.m_Colors[4] = *(unsigned short *)v53; /*0x553cb0*/
        v80.m_Colors[6] = v53[2]; /*0x553cbc*/
        PrintFontLayout( /*0x553d01*/
          *(int *)&v80.m_Colors[20],
          (unsigned __int16 *)&v80.m_Colors[336],
          (int *)&v80.m_Colors[36],
          v77,
          (unsigned __int8)v80.m_Colors[4]
        | (((unsigned __int8)v80.m_Colors[5] | ((unsigned __int8)v80.m_Colors[6] << 8)) << 8),
          0,
          12,
          0,
          0,
          0);
        if ( *(unsigned int *)&v80.m_Colors[32] ) /*0x553d0c*/
        {
          switch ( *(unsigned int *)&v80.m_Colors[32] ) /*0x553d32*/
          {
            case 1: /*0x553d32*/
              v54 = GetStringCSF(aLoadbriefKorea, 0, g_Str_File_LdPrgMgr_cpp, 300); /*0x553d4a*/
              break;
            case 2: /*0x553d32*/
              v54 = GetStringCSF(aLoadbriefFrenc, 0, g_Str_File_LdPrgMgr_cpp, 302); /*0x553d6c*/
              break;
            case 3: /*0x553d32*/
              v54 = GetStringCSF(aLoadbriefGerma, 0, g_Str_File_LdPrgMgr_cpp, 304); /*0x553d8e*/
              break;
            case 4: /*0x553d32*/
              v54 = GetStringCSF(aLoadbriefBriti, 0, g_Str_File_LdPrgMgr_cpp, 306); /*0x553db0*/
              break;
            case 5: /*0x553d32*/
              v54 = GetStringCSF(aLoadbriefLybia, 0, g_Str_File_LdPrgMgr_cpp, 308); /*0x553dd2*/
              break;
            case 6: /*0x553d32*/
              v54 = GetStringCSF(aLoadbriefIraq, 0, g_Str_File_LdPrgMgr_cpp, 310); /*0x553df1*/
              break;
            case 7: /*0x553d32*/
              v54 = GetStringCSF(aLoadbriefCuba, 0, g_Str_File_LdPrgMgr_cpp, 312); /*0x553e10*/
              break;
            case 8: /*0x553d32*/
              v54 = GetStringCSF(aLoadbriefRussi, 0, g_Str_File_LdPrgMgr_cpp, 314); /*0x553e2f*/
              break;
            case 9: /*0x553d32*/
              v54 = GetStringCSF(aLoadbriefYuric, 0, g_Str_File_LdPrgMgr_cpp, 316); /*0x553e4e*/
              break;
            default:
              v54 = 0; /*0x553e52*/
              break;
          }
        }
        else
        {
          v54 = GetStringCSF(aLoadbriefUsa, 0, g_Str_File_LdPrgMgr_cpp, 298); /*0x553d24*/
        }
        if ( dword_A8B23C && (*(unsigned __int8 (**)(ObjectClass *))(dword_A8B23C->ptr_0 + 8))(dword_A8B23C) ) /*0x553e64*/
        {
          if ( g_DisplayWidth == 640 ) /*0x553e78*/
          {
            *(unsigned int *)&v80.m_Colors[4] = 16; /*0x553e7a*/
            *(unsigned int *)&v80.m_Colors[8] = 126; /*0x553e82*/
            *(unsigned int *)&v80.m_Colors[12] = 318; /*0x553e8a*/
            *(unsigned int *)&v80.m_Colors[16] = 104; /*0x553e92*/
          }
          else
          {
            *(unsigned int *)&v80.m_Colors[4] = 20; /*0x553e9c*/
            *(unsigned int *)&v80.m_Colors[8] = 380; /*0x553ea4*/
            *(unsigned int *)&v80.m_Colors[12] = 398; /*0x553eac*/
            *(unsigned int *)&v80.m_Colors[16] = 130; /*0x553eb4*/
          }
        }
        else if ( g_DisplayWidth == 640 ) /*0x553ef4*/
        {
          *(unsigned int *)&v80.m_Colors[4] = 16; /*0x553ef6*/
          *(unsigned int *)&v80.m_Colors[8] = 126; /*0x553efe*/
          *(unsigned int *)&v80.m_Colors[12] = 318; /*0x553f06*/
          *(unsigned int *)&v80.m_Colors[16] = 104; /*0x553f0e*/
        }
        else
        {
          *(unsigned int *)&v80.m_Colors[4] = 20; /*0x553f18*/
          *(unsigned int *)&v80.m_Colors[8] = 158; /*0x553f20*/
          *(unsigned int *)&v80.m_Colors[12] = 398; /*0x553f28*/
          *(unsigned int *)&v80.m_Colors[16] = 130; /*0x553f30*/
        }
        LoadingScreen::AdjustForResolution((LoadingScreen *)&v80.m_Colors[4]); /*0x553f3c*/
        *(unsigned int *)&v80.m_Colors[52] = *(unsigned int *)&v80.m_Colors[4]; /*0x553f4d*/
        *(unsigned int *)&v80.m_Colors[56] = *(unsigned int *)&v80.m_Colors[8]; /*0x553f55*/
        *(unsigned int *)&v80.m_Colors[60] = *(unsigned int *)&v80.m_Colors[12]; /*0x553f59*/
        *(unsigned int *)&v80.m_Colors[64] = *(unsigned int *)&v80.m_Colors[16]; /*0x553f5d*/
        v55 = Copy8Bytes(&v80.m_Colors[4], (int *)&v80.m_Colors[52]); /*0x553f69*/
        v56 = *(unsigned int *)&v80.m_Colors[60]; /*0x553f70*/
        *(unsigned int *)&v80.m_Colors[68] = *v55; /*0x553f74*/
        *(unsigned int *)&v80.m_Colors[72] = v55[1]; /*0x553f7b*/
        v57 = *v55; /*0x553f7f*/
        v58 = this->q060; /*0x553f84*/
        *(unsigned int *)&v80.m_Colors[8] = v55[1]; /*0x553f87*/
        *(unsigned int *)&v80.m_Colors[20] = 0; /*0x553f8d*/
        *(unsigned int *)&v80.m_Colors[32] = 0; /*0x553f91*/
        v78 = v58; /*0x553f9f*/
        Text::Layout(g_FogOfWarState, v54, (int *)&v80.m_Colors[20], &v80.m_Colors[32], *(int *)&v80.m_Colors[60]); /*0x553fab*/
        *(unsigned int *)&v80.m_Colors[20] = v56; /*0x553fc3*/
        Rect::Set((Rect *)&v80.m_Colors[92], v57, *(int *)&v80.m_Colors[8], v56, *(int *)&v80.m_Colors[32]); /*0x553fc7*/
        *(unsigned int *)&v80.m_Colors[36] = *(unsigned int *)&v80.m_Colors[92]; /*0x553fd8*/
        *(unsigned int *)&v80.m_Colors[40] = *(unsigned int *)&v80.m_Colors[96]; /*0x553fe3*/
        *(unsigned int *)&v80.m_Colors[44] = *(unsigned int *)&v80.m_Colors[100]; /*0x553fe7*/
        *(unsigned int *)&v80.m_Colors[48] = *(unsigned int *)&v80.m_Colors[104]; /*0x553ff4*/
        Rect::Inflate(v64, v67, v70); /*0x553ff8*/
        DSurface::FillRectWithColor((int *)&v80.m_Colors[36], v78, 0, 0x9Fu); /*0x55400c*/
        Render_Render_554280( /*0x554022*/
          v54,
          this->q060,
          (int *)&v80.m_Colors[52],
          *(unsigned __int16 *)&v80.m_Colors[28],
          0);
      }
      v59 = GetStringCSF(aGuiLoadingex, 0, g_Str_File_LdPrgMgr_cpp, 869); /*0x554041*/
      v60 = LoadingScreen::CalcProgressBarRect((LoadingScreen *)&v80.m_Colors[92]); /*0x554043*/
      *(unsigned int *)&v80.m_Colors[52] = *v60; /*0x55404a*/
      *(unsigned int *)&v80.m_Colors[56] = v60[1]; /*0x554051*/
      *(unsigned int *)&v80.m_Colors[60] = v60[2]; /*0x554058*/
      *(unsigned int *)&v80.m_Colors[64] = v60[3]; /*0x554063*/
      v61 = Copy8Bytes(&v80.m_Colors[4], (int *)&v80.m_Colors[52]); /*0x55406b*/
      *(unsigned int *)&v80.m_Colors[68] = *v61; /*0x554074*/
      *(unsigned int *)&v80.m_Colors[72] = v61[1]; /*0x55407f*/
      Render_Render_5541C0(v59, this->q060, *v61, v61[1], *(int *)&v80.m_Colors[60], 0, 0); /*0x554092*/
      Render_Render_554280( /*0x5540a8*/
        v59,
        this->q060,
        (int *)&v80.m_Colors[52],
        *(unsigned __int16 *)&v80.m_Colors[28],
        0);
      *(unsigned int *)&v80.m_Colors[228] = &g_ptr_7E16B0; /*0x5540b4*/
      *(unsigned int *)&v80.m_Colors[328] = 0; /*0x5540bf*/
      Vector::Clear((int)&v80.m_Colors[316]); /*0x5540ca*/
      BufferIOFileClass::Destruct((BufferIOFileClass *)&v80.m_Colors[228]); /*0x5540d6*/
      return (const wchar_t *)((HashTable *)(INIClass *)&v80.m_Colors[140])->DestroyHashTableINIClass(); /*0x5540e2*/
    }
    else
    {
      result = (const wchar_t *)dword_A8B230; /*0x552e77*/
      p_uniqueId = (char *)&dword_A8B230[387].uniqueId; /*0x552e7c*/
      if ( !v80.m_Colors[27] ) /*0x552e82*/
        p_uniqueId = (char *)&dword_A8B230[389].ptr_8; /*0x552e84*/
      if ( *p_uniqueId ) /*0x552e8a*/
      {
        LoadingScreen::ReleaseAnimObjects((char *)&dword_A8B230[391]); /*0x552e99*/
        this->LoadingScreen_field_0x3C = 0; /*0x552e9e*/
        if ( LOBYTE(dword_A8B230[385].ptr_8) ) /*0x552ea7*/
          this->LoadingScreen_field_0x3C = (int)GetStringCSF( /*0x552ec8*/
                                                  (wchar_t *)&dword_A8B230[385].ptr_8,
                                                  0,
                                                  g_Str_File_LdPrgMgr_cpp,
                                                  663);
        this->q040 = 0; /*0x552ecb*/
        if ( HIBYTE(dword_A8B230[386].ptr_0) ) /*0x552ed9*/
          this->q040 = GetStringCSF( /*0x552ef4*/
                                     (wchar_t *)((char *)&dword_A8B230[386].ptr_0 + 3),
                                     0,
                                     g_Str_File_LdPrgMgr_cpp,
                                     667);
        Value = LoadingScreen::GetValue((LoadingScreen *)&stru_AC4B48.__pad_2F4[284]); /*0x552f0d*/
        BackgroundImage = LoadingScreen::GetBackgroundImage(g_DisplayWidth, Value); /*0x552f22*/
        OverlayImage = LoadingScreen::GetOverlayImage(g_DisplayWidth, Value); /*0x552f2e*/
        this->u32_44 = LoadFileSHP(BackgroundImage, &this->u32_140); /*0x552f3a*/
        this->u32_4C = LoadFileSHP(OverlayImage, &this->__pad_148); /*0x552f47*/
        this->u32_48 = LoadFileSHP(p_uniqueId, &this->q144); /*0x552f4f*/
        v10 = Render_Render_72B340(); /*0x552f57*/
        v11 = Render_Render_72B360(); /*0x552f5e*/
        _72B380 = Map_Load_72B380(); /*0x552f60*/
        LoadingScreen_field_0x0C = this->LoadingScreen_field_0x0C; /*0x552f65*/
        LoadingScreen_field_0x10 = this->LoadingScreen_field_0x10; /*0x552f68*/
        *(unsigned int *)&v80.m_Colors[20] = _72B380; /*0x552f6e*/
        v15 = this->u32_44; /*0x552f72*/
        *(unsigned int *)&v80.m_Colors[4] = LoadingScreen_field_0x0C; /*0x552f75*/
        *(unsigned int *)&v80.m_Colors[8] = LoadingScreen_field_0x10; /*0x552f7b*/
        if ( v15 ) /*0x552f7f*/
          DrawToSurfaceSHP( /*0x552fac*/
            this->q060,
            v10,
            v15,
            0,
            (int *)&v80.m_Colors[4],
            (int *)&v80.m_Colors[76],
            1024,
            0,
            0,
            0,
            1000,
            0,
            0,
            0,
            0,
            0);
        else
          (*(void (**)(unsigned int, char *, int *, unsigned int))(*this->q060 + 16))( /*0x552fc3*/
            this->q060,
            &v80.m_Colors[76],
            &this->LoadingScreen_field_0x0C,
            *(unsigned int *)&v80.m_Colors[28]);
        *(unsigned int *)&v80.m_Colors[8] = this->LoadingScreen_field_0x20; /*0x552fcb*/
        DrawToSurfaceSHP( /*0x552ffa*/
          this->q060,
          v11,
          this->u32_48,
          0,
          (int *)&v80.m_Colors[4],
          (int *)&v80.m_Colors[76],
          1024,
          0,
          0,
          0,
          1000,
          0,
          0,
          0,
          0,
          0);
        v16 = this->u32_4C; /*0x552fff*/
        *(unsigned int *)&v80.m_Colors[8] = this->LoadingScreen_field_0x30; /*0x553007*/
        if ( v16 ) /*0x55300b*/
          DrawToSurfaceSHP( /*0x55303a*/
            this->q060,
            *(int *)&v80.m_Colors[20],
            v16,
            0,
            (int *)&v80.m_Colors[4],
            (int *)&v80.m_Colors[76],
            1024,
            0,
            0,
            0,
            1000,
            0,
            0,
            0,
            0,
            0);
        else
          (*(void (**)(unsigned int, char *, int *, unsigned int))(*this->q060 + 16))( /*0x553054*/
            this->q060,
            &v80.m_Colors[76],
            &this->LoadingScreen_field_0x2C,
            *(unsigned int *)&v80.m_Colors[28]);
        v17 = this->LoadingScreen_field_0x10 + 10; /*0x55305f*/
        *(unsigned int *)&v80.m_Colors[4] = this->LoadingScreen_field_0x0C + 10; /*0x553062*/
        *(unsigned int *)&v80.m_Colors[8] = v17; /*0x55306b*/
        LoadScreenAnim = (Color *)LoadingScreen::FindLoadScreenAnim((LoadingScreen *)&stru_AC4B48.__pad_2F4[284]); /*0x553074*/
        LoadingScreen_field_0x3C = this->LoadingScreen_field_0x3C; /*0x553076*/
        if ( LoadingScreen_field_0x3C ) /*0x55307b*/
          TextRenderer::DrawText( /*0x553096*/
            (int *)&v80.m_Colors[68],
            LoadingScreen_field_0x3C,
            this->q060,
            &v80.m_Colors[76],
            (int)&v80.m_Colors[4],
            (int)LoadScreenAnim,
            0,
            25);
        result = (const wchar_t *)this->q040; /*0x55309e*/
        if ( result ) /*0x5530a3*/
        {
          if ( v80.m_Colors[27] ) /*0x5530b5*/
          {
            *(unsigned int *)&v80.m_Colors[4] = this->LoadingScreen_field_0x1C + dword_A8B230[387].ptr_0; /*0x5530c2*/
            ptr_4 = dword_A8B230[387].ptr_4; /*0x5530c6*/
          }
          else
          {
            *(unsigned int *)&v80.m_Colors[4] = this->LoadingScreen_field_0x1C + dword_A8B230[387].ptr_8; /*0x5530d9*/
            ptr_4 = dword_A8B230[387].ptr_C; /*0x5530dd*/
          }
          *(unsigned int *)&v80.m_Colors[8] = this->LoadingScreen_field_0x20 + ptr_4; /*0x5530f1*/
          wcscpy((wchar_t *)&v80.m_Colors[592], result); /*0x5530f5*/
          v21 = (unsigned __int16 *)Color::ConvertToRGB(LoadScreenAnim + 194, (int)&v80); /*0x553108*/
          v72 = *v21; /*0x553115*/
          v79 = v21->field_2; /*0x553123*/
          *(unsigned int *)&v80.m_Colors[28] = 0; /*0x553170*/
          *(unsigned int *)&v80.m_Colors[32] = 0; /*0x553174*/
          v22 = ((unsigned __int8)v72 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x55318a*/
              | ((((v72) >> 8) & 0xFF) >> g_BitMask_Blue << g_BitMask_Green)
              | (v79 >> g_BitMask_Red << g_BitShift_Blue);
          Text::Layout( /*0x553194*/
            g_FogOfWarState,
            (unsigned __int16 *)&v80.m_Colors[592],
            (int *)&v80.m_Colors[28],
            &v80.m_Colors[32],
            400);
          v23 = this->q060; /*0x5531a1*/
          v24 = *(unsigned int *)&v80.m_Colors[4]; /*0x5531a4*/
          v25 = *(unsigned int *)&v80.m_Colors[8]; /*0x5531a8*/
          *(unsigned int *)&v80.m_Colors[100] = *(unsigned int *)&v80.m_Colors[28]; /*0x5531ac*/
          *(unsigned int *)&v80.m_Colors[104] = *(unsigned int *)&v80.m_Colors[32]; /*0x5531b2*/
          *(unsigned int *)v80.m_Colors = 0; /*0x5531b9*/
          *(unsigned int *)&v80.m_Colors[20] = 0; /*0x5531bd*/
          v73 = v23; /*0x5531c5*/
          *(unsigned int *)&v80.m_Colors[68] = *(unsigned int *)&v80.m_Colors[4]; /*0x5531e2*/
          *(unsigned int *)&v80.m_Colors[72] = *(unsigned int *)&v80.m_Colors[8]; /*0x5531e6*/
          Text::Layout( /*0x5531ea*/
            g_FogOfWarState,
            (unsigned __int16 *)&v80.m_Colors[592],
            (int *)v80.m_Colors,
            &v80.m_Colors[20],
            400);
          *(unsigned int *)&v80.m_Colors[48] = *(unsigned int *)&v80.m_Colors[20]; /*0x5531f9*/
          *(unsigned int *)&v80.m_Colors[36] = v24; /*0x5531fd*/
          *(unsigned int *)&v80.m_Colors[40] = v25; /*0x553203*/
          *(unsigned int *)&v80.m_Colors[44] = *(unsigned int *)v80.m_Colors; /*0x553210*/
          Rect::Inflate(v62, v65, v68); /*0x553214*/
          DSurface::FillRectWithColor((int *)&v80.m_Colors[36], v73, 0, 0x9Fu); /*0x553228*/
          v74 = (Char *)g_FogOfWarState; /*0x55323f*/
          *(unsigned int *)&v80.m_Colors[44] = v24 + *(unsigned int *)&v80.m_Colors[100]; /*0x553243*/
          *(unsigned int *)&v80.m_Colors[48] = v25 + *(unsigned int *)&v80.m_Colors[104]; /*0x55325b*/
          v26 = this->q060; /*0x553261*/
          *(unsigned int *)&v80.m_Colors[36] = v24; /*0x553264*/
          *(unsigned int *)&v80.m_Colors[40] = v25; /*0x553271*/
          v27 = Palette::SixBitTo16Bit( /*0x55329b*/
                  &v80,
                  (unsigned __int8)((unsigned __int16)v22 >> g_BitShift_Red) << g_BitShift_Green_0,
                  (unsigned __int8)((unsigned __int16)v22 >> g_BitMask_Green) << g_BitMask_Blue,
                  (unsigned __int8)((unsigned __int16)v22 >> g_BitShift_Blue) << g_BitMask_Red);
          return (const wchar_t *)PrintFontLayout( /*0x5532f4*/
                                    v26,
                                    (unsigned __int16 *)&v80.m_Colors[592],
                                    (int *)&v80.m_Colors[36],
                                    v74,
                                    (unsigned __int8)*(unsigned short *)v27
                                  | (((unsigned __int8)HIBYTE(*(unsigned short *)v27) | ((unsigned __int8)v27[2] << 8)) << 8),
                                    0,
                                    12,
                                    0,
                                    0,
                                    0);
        }
      }
    }
  }
  return result; /*0x5532f9*/

}

// 0x554100
void LoadingScreen::AdjustForResolution()
{
  int result; // eax

  if ( (int)g_DisplayWidth >= 800 ) /*0x554110*/
  {
    result = (int)&(*(&g_DisplayWidth + 1))[-10].LoadingScreen_field_0x28 / 2 + this->q004; /*0x554137*/
    *(unsigned int *)this->__pad_000 += (int)&g_DisplayWidth[-13].LoadingScreen_field_0x20 / 2; /*0x554139*/
    this->q004 = result; /*0x55413b*/
  }
  return result; /*0x55413f*/
}
  return result; /*0x55413f*/
// 0x642b20
void LoadingScreen::GetValue()
{
  return this->u32_80; /*0x642b26*/
}
// 0x5d5d20
void MultiplayerGameMode::Dtor()
{
  int v2; // edi
  void (***v3)(unsigned int, int); // ecx
  void (***v4)(unsigned int, int); // ecx
  void *MultiplayerGameMode_field_0x0C; // eax

  v2 = 0; /*0x5d5d27*/
  for ( *(unsigned int *)this->ptr_0 = 0; v2 < this->q018; ++v2 ) /*0x5d5d34*/
  {
    v3 = *(void (****)(unsigned int, int))(this->u32_C + 4 * v2); /*0x5d5d39*/
    if ( v3 ) /*0x5d5d3e*/
      (**v3)(v3, 1); /*0x5d5d44*/
  }
  (*(void (**)(int *))&this->u32_8->q00C)(&this->u32_8); /*0x5d5d56*/
  v4 = (void (***)(unsigned int, int))this->u32_38; /*0x5d5d59*/
  if ( v4 ) /*0x5d5d5e*/
    (**v4)(v4, 1); /*0x5d5d64*/
  DeleteAndZero((ObjectClass *)this->q048)); /*0x5d5d69*/
  DeleteAndZero((ObjectClass *)this->q044)); /*0x5d5d71*/
  ((DeleteAndZero *)&this->u32_C)->Alt(); /*0x5d5d79*/
  ((DeleteAndZero *)&this->q020)->Alt(); /*0x5d5d81*/
  MultiplayerGameMode_field_0x0C = (void *)this->u32_C; /*0x5d5d86*/
  this->u32_8 = (int)0; /*0x5d5d89*/
  if ( MultiplayerGameMode_field_0x0C && (this->u32_15) ) /*0x5d5d93*/
  {
    operator delete((MultiplayerGameMode_field_0x0C)); /*0x5d5d99*/
    this->u32_C = 0; /*0x5d5da1*/
  }
  (this->u32_15) = 0; /*0x5d5da4*/
  this->q010 = 0; /*0x5d5da7*/
}
// 0x5d5e10
void MultiplayerGameMode::GetFirst()
{
  if ( (g_MultiplayerMode & 1) == 0 ) /*0x5d5e1a*/
  {
    dword_ABFDA4 = 0; /*0x5d5e26*/
    g_MultiplayerMode |= 1u; /*0x5d5e2c*/
    dword_ABFDA8 = 0; /*0x5d5e32*/
    byte_ABFDAC = 1; /*0x5d5e38*/
    byte_ABFDAD = 0; /*0x5d5e3f*/
    g_MultiplayerModeConfig = (int)0; /*0x5d5e45*/
    dword_ABFDB4 = 10; /*0x5d5e4f*/
    dword_ABFDB0 = 0; /*0x5d5e59*/
    atexit(MultiplayerConfig::Cleanup); /*0x5d5e5f*/
  }
  if ( !dword_ABFDB0 ) /*0x5d5e6d*/
    return 0; /*0x5d5e6f*/
  if ( (g_MultiplayerMode & 1) == 0 ) /*0x5d5e7a*/
  {
    dword_ABFDA4 = 0; /*0x5d5e86*/
    g_MultiplayerMode |= 1u; /*0x5d5e8c*/
    dword_ABFDA8 = 0; /*0x5d5e92*/
    byte_ABFDAC = 1; /*0x5d5e98*/
    byte_ABFDAD = 0; /*0x5d5e9f*/
    g_MultiplayerModeConfig = (int)0; /*0x5d5ea5*/
    dword_ABFDB4 = 10; /*0x5d5eaf*/
    dword_ABFDB0 = 0; /*0x5d5eb9*/
    atexit(MultiplayerConfig::Cleanup); /*0x5d5ebf*/
  }
  return *(unsigned int *)dword_ABFDA4; /*0x5d5e71*/
}
// 0x5d5ed0
void MultiplayerGameMode::ListGet()
{
  if ( (g_MultiplayerMode & 1) == 0 ) /*0x5d5ed9*/
  {
    g_MultiplayerMode |= 1u; /*0x5d5ee6*/
    dword_ABFDA4 = 0; /*0x5d5eec*/
    dword_ABFDA8 = 0; /*0x5d5ef1*/
    byte_ABFDAC = 1; /*0x5d5ef6*/
    byte_ABFDAD = 0; /*0x5d5efc*/
    g_MultiplayerModeConfig = (int)0; /*0x5d5f01*/
    dword_ABFDB4 = 10; /*0x5d5f0b*/
    dword_ABFDB0 = 0; /*0x5d5f15*/
    atexit(MultiplayerConfig::Cleanup); /*0x5d5f1a*/
  }
  return dword_ABFDB0; /*0x5d5f27*/
}
// 0x5d5f30
void MultiplayerGameMode::Find()
{
  int i; // ebp
  int result; // eax

  for ( i = 0; ; ++i ) /*0x5d5f3b*/
  {
    if ( (g_MultiplayerMode & 1) == 0 ) /*0x5d5f4e*/
    {
      g_MultiplayerMode |= 1u; /*0x5d5f57*/
      MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass(&g_MultiplayerModeConfig, 0, 0); /*0x5d5f62*/
      *(unsigned int *)g_MultiplayerModeConfig = 0; /*0x5d5f67*/
      DataGlobal_ABFDB4 = 10; /*0x5d5f6d*/
      g_MultiplayerGameList = 0; /*0x5d5f78*/
      atexit(MultiplayerConfig::Cleanup); /*0x5d5f7e*/
    }
    if ( i >= g_MultiplayerGameList ) /*0x5d5f8c*/
      break; /*0x5d5f8c*/
    if ( (g_MultiplayerMode & 1) == 0 ) /*0x5d5f95*/
    {
      Src = 0; /*0x5d5fa1*/
      g_MultiplayerMode |= 1u; /*0x5d5fa7*/
      DataGlobal_ABFDA8 = 0; /*0x5d5fad*/
      (*((unsigned short *)&(DataGlobal_ABFDAC))) = 1; /*0x5d5fb3*/
      *(unsigned int *)g_MultiplayerModeConfig = 0; /*0x5d5fc0*/
      DataGlobal_ABFDB4 = 10; /*0x5d5fc6*/
      g_MultiplayerGameList = 0; /*0x5d5fcc*/
      atexit(MultiplayerConfig::Cleanup); /*0x5d5fd2*/
    }
    result = *(unsigned int *)(Src + 4 * i); /*0x5d5fe3*/
    if ( result->u8_28 == this ) /*0x5d5fe9*/
      return result; /*0x5d5fe9*/
  }
  return 0; /*0x5d5ff3*/
}
// 0x67a770
void SaveLoad::StreamVector()
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  int v6; // [esp+20h] [ebp-4h] BYREF

  v3 = *a2; /*0x67a77c*/
  v6 = this->u32_10; /*0x67a789*/
  (*(void (__stdcall **)(int *, int *, int, unsigned int))(v3 + 16))(a2, &v6, 4, 0); /*0x67a78d*/
  result = v6; /*0x67a790*/
  for ( i = 0; i < v6; ++i ) /*0x67a798*/
  {
    (*(void (__stdcall **)(int *, int, int, unsigned int))(*a2 + 16))(a2, this->u32_4 + 4 * i, 4, 0); /*0x67a7a8*/
    result = v6; /*0x67a7ab*/
  }
  return result; /*0x67a7b4*/
}
// 0x558dd0
void SaveLoadDialog::DlgProc()
{

  HWND v2; // ebp
  Dialog *Dialog; // edi
  HWND v4; // ebx
  LPARAM v5; // eax
  int *v6; // eax
  HWND DlgItem; // eax
  LPARAM v9; // ebp
  HWND v10; // eax
  HWND v11; // ebx
  LPARAM v12; // eax
  HWND v13; // ebx
  LPARAM v14; // eax
  HWND v15; // eax
  HWND v16; // ebx
  LRESULT v17; // eax
  TechnoTypeClass *v18; // ecx
  void (*v19)(void); // eax
  int v20; // eax
  LRESULT v21; // eax
  LRESULT v22; // ebp
  wchar_t *v23; // eax
  HWND v24; // eax
  int v25; // ebx
  LRESULT v26; // eax
  wchar_t *v27; // eax
  HWND v28; // eax
  LRESULT v29; // eax
  HWND v30; // eax
  int *v31; // eax
  HWND v32; // eax
  HWND v33; // eax
  char *v34; // ebp
  int v35; // eax
  unsigned int *v36; // eax
  bool v37; // bl
  int *v38; // eax
  int *v39; // eax
  int *v40; // ebp
  wchar_t *v41; // eax
  int v42; // ebx
  int v43; // eax
  int v44; // ecx
  int *v45; // eax
  int i; // ebx
  wchar_t *StringCSF; // [esp-10h] [ebp-3D8h]
  wchar_t *v48; // [esp-10h] [ebp-3D8h]
  wchar_t *v49; // [esp-10h] [ebp-3D8h]
  wchar_t *v50; // [esp-10h] [ebp-3D8h]
  wchar_t *v51; // [esp-10h] [ebp-3D8h]
  wchar_t *v52; // [esp-Ch] [ebp-3D4h]
  wchar_t *v53; // [esp-Ch] [ebp-3D4h]
  const char *SaveLoadDialog_field_0x08; // [esp-4h] [ebp-3CCh]
  int v55; // [esp+0h] [ebp-3C8h]
  WPARAM wParam; // [esp+10h] [ebp-3B8h]
  WPARAM wParama; // [esp+10h] [ebp-3B8h]
  HWND hWnd; // [esp+14h] [ebp-3B4h]
  CCFileClass v59; // [esp+38h] [ebp-390h] BYREF
  char v60[12]; // [esp+90h] [ebp-338h] BYREF
  int v61; // [esp+9Ch] [ebp-32Ch]
  BufferIOFileClass v62[7]; // [esp+A4h] [ebp-324h] BYREF
  char Buffer[256]; // [esp+2C8h] [ebp-100h] BYREF

  v2 = 0; /*0x558ddc*/
  Dialog = 0; /*0x558de1*/
  hWnd = 0; /*0x558de4*/
  if ( this->SaveLoadDialog_field_0x04 != 1 ) /*0x558de8*/
  {
    if ( this->SaveLoadDialog_field_0x04 == 2 ) /*0x558def*/
    {
      if ( DiskSpace::CheckAvailable() < this->u32_10 ) /*0x558e65*/
      {
        StringCSF = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_LoadDlg_CPP, 432); /*0x558e88*/
        v6 = (int *)GetStringCSF(aTxtDiskfull, 0, g_Str_File_LoadDlg_CPP, 432); /*0x558e9a*/
        Dialog::ShowMessageBox(v6, StringCSF, 0, 0, 0, v55); /*0x558ea4*/
        return 0; /*0x558eb5*/
      }
      Dialog = (Dialog *)CreateDialog(0x2B4u, (INT_PTR (*)(HWND, UINT, WPARAM, LPARAM))sub_558B90, 0); /*0x558ecc*/
      DlgItem = GetDlgItem((HWND)Dialog, 1319); /*0x558ed4*/
      v9 = this->u32_C; /*0x558ed6*/
      hWnd = DlgItem; /*0x558edf*/
      v10 = GetDlgItem((HWND)Dialog, 1318); /*0x558ee3*/
      SendMessageA(v10, 0x4B2u, 0, v9); /*0x558eee*/
      v2 = GetDlgItem((HWND)Dialog, 1735); /*0x558f02*/
      v11 = GetDlgItem((HWND)Dialog, 1684); /*0x558f0a*/
      v12 = (*(int (**)(SaveLoadDialog *))(*(unsigned int *)this->__pad_0 + 24))(this); /*0x558f0c*/
      SendMessageA(v11, 0x4B2u, 0, v12); /*0x558f18*/
      if ( (unsigned __int8)SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238) ) /*0x558f23*/
        goto LABEL_12; /*0x558f2a*/
    }
    else
    {
      if ( this->SaveLoadDialog_field_0x04 != 3 ) /*0x558df2*/
        goto LABEL_12; /*0x558df2*/
      Dialog = (Dialog *)CreateDialog(0x2B5u, (INT_PTR (*)(HWND, UINT, WPARAM, LPARAM))sub_558CB0, 0); /*0x558e0e*/
      hWnd = GetDlgItem((HWND)Dialog, 1320); /*0x558e1e*/
      v2 = GetDlgItem((HWND)Dialog, 1736); /*0x558e2a*/
      v4 = GetDlgItem((HWND)Dialog, 1684); /*0x558e2e*/
      v5 = (*(int (**)(SaveLoadDialog *))(*(unsigned int *)this->__pad_0 + 28))(this); /*0x558e34*/
      SendMessageA(v4, 0x4B2u, 0, v5); /*0x558e40*/
      if ( (unsigned __int8)SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238) ) /*0x558e4b*/
        goto LABEL_12; /*0x558e52*/
    }
    goto LABEL_11; /*0x558e52*/
  }
  Dialog = (Dialog *)CreateDialog(0xB7u, (INT_PTR (*)(HWND, UINT, WPARAM, LPARAM))sub_558A30, 0); /*0x558f44*/
  hWnd = GetDlgItem((HWND)Dialog, 1317); /*0x558f54*/
  v2 = GetDlgItem((HWND)Dialog, 1039); /*0x558f60*/
  v13 = GetDlgItem((HWND)Dialog, 1684); /*0x558f64*/
  v14 = (*(int (**)(SaveLoadDialog *))(*(unsigned int *)this->__pad_0 + 20))(this); /*0x558f6a*/
  SendMessageA(v13, 0x4B2u, 0, v14); /*0x558f76*/
  if ( !(unsigned __int8)SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238) ) /*0x558f81*/
  {
LABEL_11:
    v15 = GetDlgItem((HWND)Dialog, 1036); /*0x558f8a*/
    ShowWindow(v15, 0); /*0x558f99*/
  }
LABEL_12:
  this->u32_18 = -1; /*0x558f9f*/
  if ( !Dialog ) /*0x558fa8*/
    return this->u32_18 == 1039; /*0x558fa8*/
  SetWindowLongA((HWND)Dialog, 8, (LONG)this); /*0x558fb2*/
  v16 = hWnd; /*0x558fb8*/
  if ( hWnd ) /*0x558fbe*/
  {
    LoadSaveDialog::FillList((LoadSaveDialog *)this, hWnd); /*0x558fc3*/
    v17 = SendMessageA(hWnd, 0x18Bu, 0, 0); /*0x558fd2*/
    EnableWindow(v2, v17 > 0); /*0x558fe5*/
  }
  Dialog::Show(Dialog); /*0x558fed*/
  while ( 1 ) /*0x558ff8*/
  {
    while ( this->u32_18 == -1 ) /*0x559000*/
    {
      if ( (unsigned __int8)Dialog::PumpMessages() == 1 ) /*0x559009*/
        this->u32_18 = 2; /*0x55900b*/
      v19 = (void (*)(void))this->u32_14; /*0x559012*/
      if ( v19 ) /*0x559017*/
        v19(); /*0x559019*/
      if ( !stru_A8E960.nextScenario[64] ) /*0x559022*/
      {
        LOBYTE(v18) = 0; /*0x559024*/
        ScreenSaver::Process(v18, v55); /*0x559026*/
      }
    }
    v20 = this->u32_18; /*0x559030*/
    if ( v20 == 1 || v20 == 1039 || v20 == 1735 || v20 == 1736 ) /*0x55904b*/
    {
      v21 = SendMessageA(v16, 0x188u, 0, 0); /*0x559061*/
      wParam = v21; /*0x559066*/
      if ( v21 == -1 ) /*0x55906a*/
        goto LABEL_70; /*0x55906a*/
      v22 = SendMessageA(v16, 0x199u, v21, 0); /*0x55907b*/
      switch ( this->SaveLoadDialog_field_0x04 ) /*0x559081*/
      {
        case 1: /*0x559081*/
          if ( *(unsigned char *)(v22 + 437) ) /*0x5594ae*/
            break; /*0x5594b6*/
          v42 = Game::CheckForGameCD((Game *)0x3C); /*0x5594c6*/
          v43 = *(unsigned int *)(v22 + 424); /*0x5594c8*/
          if ( v43 == -1 ) /*0x5594d1*/
            v44 = -1; /*0x5594d3*/
          else
            v44 = *(unsigned int *)(*(unsigned int *)(*(int *)((char *)&stru_A83CD9.NeedsSaveOrLink + 3) + 4 * v43) + 152); /*0x5594e0*/
          SetSoundWarning(v44); /*0x5594e6*/
          if ( (unsigned __int8)g_ptr_7E4C30(dword_81C1D0) ) /*0x5594fd*/
          {
            ShowWindow((HWND)Dialog, 0); /*0x559516*/
            (*(void (**)(MouseClass *))(dword_887640->HandleClick_ph + 12))(dword_887640); /*0x559524*/
            if ( (*(unsigned __int8 (**)(SaveLoadDialog *, int))(*(unsigned int *)this->__pad_0 + 4))( /*0x559532*/
                   this,
                   v22 + 256) )
            {
              break; /*0x559537*/
            }
            (*(void (**)(MouseClass *))(dword_887640->HandleClick_ph + 16))(dword_887640); /*0x559541*/
            ShowWindow((HWND)Dialog, 5); /*0x55954d*/
            v51 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_LoadDlg_CPP, 550); /*0x559573*/
            v45 = (int *)GetStringCSF(aTxtErrorLoadin, 0, g_Str_File_LoadDlg_CPP, 550); /*0x559585*/
            Dialog::ShowMessageBox(v45, v51, 0, 0, 0, v55); /*0x55958f*/
            ShowWindow((HWND)Dialog, 0); /*0x559597*/
          }
          else
          {
            SetSoundWarning(v42); /*0x559509*/
          }
          goto LABEL_70; /*0x55950e*/
        case 2: /*0x559081*/
          v28 = GetDlgItem((HWND)Dialog, 1319); /*0x5591b2*/
          wParama = 0; /*0x5591b6*/
          if ( v28 ) /*0x5591be*/
          {
            v29 = SendMessageA(v28, 0x4EFu, 0, 0); /*0x5591ca*/
            wParama = v29; /*0x5591d2*/
            if ( v29 ) /*0x5591d6*/
              SetDialogActiveFlag(v29, 1); /*0x5591dc*/
          }
          v30 = GetDlgItem((HWND)Dialog, 1318); /*0x5591e7*/
          SendMessageA(v30, 0x4B3u, 0x50u, (LPARAM)&v62[0].BufferOffset); /*0x5591f9*/
          WideString::Trim((WideString *)&v62[0].BufferOffset); /*0x559206*/
          if ( !wcslen((const wchar_t *)&v62[0].BufferOffset) ) /*0x559213*/
          {
            v48 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_LoadDlg_CPP, 574); /*0x559240*/
            v31 = (int *)GetStringCSF(aTxtMustenterDe, 0, g_Str_File_LoadDlg_CPP, 574); /*0x559252*/
            Dialog::ShowMessageBox(v31, v48, 0, 0, 0, v55); /*0x55925c*/
            v32 = GetDlgItem((HWND)Dialog, 1318); /*0x559267*/
            SetFocus(v32); /*0x55926a*/
            v33 = GetDlgItem((HWND)Dialog, 1318); /*0x55927f*/
            SendMessageA(v33, 0xB1u, 0xFFFFFFFF, -1); /*0x559282*/
LABEL_70:
            this->u32_18 = -1; /*0x559599*/
            break; /*0x559599*/
          }
          if ( v22 && *(unsigned char *)(v22 + 436) ) /*0x559291*/
          {
            v34 = (char *)(v22 + 256); /*0x55929b*/
          }
          else
          {
            CCFileClass::Construct3((int)&v59); /*0x5592a7*/
            do /*0x5592e9*/
            {
              SaveLoadDialog_field_0x08 = (const char *)this->SaveLoadDialog_field_0x08; /*0x5592af*/
              v35 = rand(); /*0x5592b0*/
              sprintf(Buffer, "SAVE%04lX.%3s", v35, SaveLoadDialog_field_0x08); /*0x5592c3*/
              FileClass::SetFileName(&v59, Buffer); /*0x5592d7*/
            }
            while ( (unsigned __int8)CCFileClass::Open(&v59, 0) == 1 ); /*0x5592e9*/
            /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E16B0) */  /*0x5592f2*/
            v61 = 0; /*0x5592fa*/
            Vector::Clear((int)v60); /*0x559305*/
            *(unsigned int *)v59.__tail_0 = &off_7E1668; /*0x55930e*/
            ((BufferIOFileClass *)&v59)->Dtor(); /*0x559316*/
            v34 = Buffer; /*0x55931b*/
          }
          if ( v34 ) /*0x559324*/
          {
            v36 = RawFileClass::Construct(v62, (int)v34); /*0x559332*/
            v37 = v36->Open_1(0) == 1; /*0x559349*/
            RawFileClass::Dtor(v62); /*0x55934c*/
            if ( v37 /*0x5593aa*/
              && (v53 = GetStringCSF(g_Str_TXT_NO, 0, g_Str_File_LoadDlg_CPP, 594),
                  v49 = GetStringCSF(g_Str_TXT_YES, 0, g_Str_File_LoadDlg_CPP, 594),
                  v38 = (int *)GetStringCSF(aTxtConfirmSave, 0, g_Str_File_LoadDlg_CPP, 594),
                  Dialog::ShowMessageBox(v38, v49, v53, 0, 0, v55)) )
            {
              this->u32_18 = -1; /*0x5593b3*/
            }
            else
            {
              ShowWindow((HWND)Dialog, 0); /*0x5593c8*/
              if ( (*(unsigned __int8 (**)(SaveLoadDialog *, char *, int *))(*(unsigned int *)this->__pad_0 + 8))( /*0x5593d7*/
                     this,
                     v34,
                     &v62[0].BufferOffset) )
              {
                ShowWindow((HWND)Dialog, 5); /*0x559431*/
                SaveLoadDialog::FindDialogTemplate((SaveLoadDialog *)Dialog); /*0x559435*/
                v40 = (int *)(*(int (**)(SaveLoadDialog *))(*(unsigned int *)this->__pad_0 + 32))(this); /*0x559458*/
                v41 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_LoadDlg_CPP, 617); /*0x559462*/
                Dialog::ShowMessageBox(v40, v41, 0, 0, 0, v55); /*0x55946d*/
                SaveLoadDialog::LookupDialogHash((SaveLoadDialog *)Dialog); /*0x559474*/
                ShowWindow((HWND)Dialog, 0); /*0x55947c*/
                if ( this->u32_C ) /*0x55947e*/
                  wcscpy((wchar_t *)&v62[0].BufferOffset, this->u32_C); /*0x55948e*/
              }
              else
              {
                ShowWindow((HWND)Dialog, 5); /*0x5593e1*/
                v50 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_LoadDlg_CPP, 609); /*0x559407*/
                v39 = (int *)GetStringCSF(aTxtErrorSaving, 0, g_Str_File_LoadDlg_CPP, 609); /*0x559419*/
                Dialog::ShowMessageBox(v39, v50, 0, 0, 0, v55); /*0x559423*/
                this->u32_18 = -1; /*0x559428*/
              }
            }
          }
          if ( wParama ) /*0x55949c*/
            SetDialogActiveFlag(wParama, 0); /*0x5594a4*/
          break;
        case 3: /*0x559081*/
          v23 = GetStringCSF(aTxtDeleteFileQ, 0, g_Str_File_LoadDlg_CPP, 635); /*0x5590a7*/
          swprintf((wchar_t *const)&v62[0].BufferOffset, (const size_t)&off_829F24, v23, v22); /*0x5590ba*/
          v24 = GetDlgItem((HWND)Dialog, 1320); /*0x5590c8*/
          v25 = 0; /*0x5590ce*/
          if ( v24 ) /*0x5590d2*/
          {
            v26 = SendMessageA(v24, 0x4EFu, 0, 0); /*0x5590dc*/
            v25 = v26; /*0x5590e2*/
            if ( v26 ) /*0x5590e6*/
              SetDialogActiveFlag(v26, 1); /*0x5590ec*/
          }
          v52 = GetStringCSF(g_Str_TXT_NO, 0, g_Str_File_LoadDlg_CPP, 646); /*0x559113*/
          v27 = GetStringCSF(g_Str_TXT_YES, 0, g_Str_File_LoadDlg_CPP, 646); /*0x559125*/
          if ( Dialog::ShowMessageBox(&v62[0].BufferOffset, v27, v52, 0, 0, v55) /*0x559187*/
            || ((*(void (**)(SaveLoadDialog *, int))(*(unsigned int *)this->__pad_0 + 12))(this, v22 + 256),
                SendMessageA(hWnd, 0x182u, wParam, 0),
                SendMessageA(hWnd, 0x186u, 0, 0),
                SendMessageA(hWnd, 0x18Bu, 0, 0) > 0) )
          {
            this->u32_18 = -1; /*0x559189*/
          }
          if ( v25 ) /*0x559192*/
            SetDialogActiveFlag(v25, 0); /*0x55919c*/
          break;
      }
    }
    if ( this->u32_18 != -1 ) /*0x5595a4*/
      break; /*0x5595a4*/
    v16 = hWnd; /*0x558ff4*/
  }
  for ( i = 0; i < this->u32_30; ++i ) /*0x5595b1*/
    __3_YAXPAX_Z(*(void **)(this->u32_24 + 4 * i)); /*0x5595ba*/
  (*(void (**)(char *))(this->u32_20 + 12))(&this->u32_20); /*0x5595d0*/
  Dialog::Destroy(Dialog); /*0x5595d5*/
  return this->u32_18 == 1039; /*0x558ea9*/

}
// 0x608380
void SaveLoadDialog::LookupDialogHash()
{
  int result; // eax
  SaveLoadDialog *v2; // [esp+0h] [ebp-4h] BYREF

  result = *(unsigned int *)&g_DialogHashMap_Count; /*0x608381*/
  v2 = this; /*0x608386*/
  if ( *(unsigned int *)&g_DialogHashMap_Count ) /*0x60838c*/
  {
    result = *(unsigned int *)(*(unsigned int *)&g_DialogHashMap_Base /*0x6083ad*/
                       + 4
                       * ((*(int (**)(SaveLoadDialog **))&g_DialogHashMap_Hasher)(&v2)
                        & ((1 << g_DialogHashMap_Buckets) - 1)));
    if ( result ) /*0x6083b2*/
    {
      while ( *(SaveLoadDialog **)result != v2 ) /*0x6083ba*/
      {
        result = result->u32_204; /*0x6083bc*/
        if ( !result ) /*0x6083c4*/
          return result; /*0x6083c4*/
      }
      result += 4; /*0x6083cc*/
      if ( result ) /*0x6083d1*/
        result->u8_BD = 1; /*0x6083d3*/
    }
  }
  return result; /*0x6083c7*/
}
// 0x6083e0
void SaveLoadDialog::FindDialogTemplate()
{
  int result; // eax
  SaveLoadDialog *v2; // [esp+0h] [ebp-4h] BYREF

  result = *(unsigned int *)&g_DialogHashMap_Count; /*0x6083e1*/
  v2 = this; /*0x6083e6*/
  if ( *(unsigned int *)&g_DialogHashMap_Count ) /*0x6083ec*/
  {
    result = *(unsigned int *)(*(unsigned int *)&g_DialogHashMap_Base /*0x60840d*/
                       + 4
                       * ((*(int (**)(SaveLoadDialog **))&g_DialogHashMap_Hasher)(&v2)
                        & ((1 << g_DialogHashMap_Buckets) - 1)));
    if ( result ) /*0x608412*/
    {
      while ( *(SaveLoadDialog **)result != v2 ) /*0x60841a*/
      {
        result = result->u32_204; /*0x60841c*/
        if ( !result ) /*0x608424*/
          return result; /*0x608424*/
      }
      result += 4; /*0x60842c*/
      if ( result ) /*0x608431*/
        result->u8_BD = 0; /*0x608433*/
    }
  }
  return result; /*0x608427*/
}
// 0x4e3b90
void SkirmishDialog::FillComboBoxes()
{
  int v1; // esi
  LRESULT ComboBoxSelectedDefault; // eax
  bool v4; // bl
  int v5; // edx
  HWND DlgItem; // esi
  bool v7; // bl
  wchar_t *StringCSF; // eax
  LRESULT v9; // eax
  int result; // eax
  int v11; // [esp+10h] [ebp-4h]

  v1 = 0; /*0x4e3b94*/
  v11 = 0; /*0x4e3b9f*/
  do
  {
    ComboBoxSelectedDefault = GetComboBoxSelectedDefault((HWND)this, v1, -1); /*0x4e3ba9*/
    v4 = 0; /*0x4e3bb4*/
    if ( g_Lobby_MaxPlayers ) /*0x4e3bb8*/
      v4 = ComboBoxSelectedDefault == g_Lobby_MaxPlayers; /*0x4e3bbe*/
    if ( v1 )
    {
      switch ( v1 )
      {
        case 1:
          v5 = 1296; /*0x4e3bd0*/
          break;
        case 2:
          v5 = 1299; /*0x4e3bdc*/
          break;
        case 3:
          v5 = 1310; /*0x4e3be8*/
          break;
        case 4:
          v5 = 1300; /*0x4e3bf4*/
          break;
        case 5:
          v5 = 1311; /*0x4e3c00*/
          break;
        case 6:
          v5 = 1312; /*0x4e3c0c*/
          break;
        default:
          v5 = v1 != 7 ? -1 : 1313;
          break;
      }
    }
    else
    {
      v5 = 1697; /*0x4e3bc4*/
    }
    if ( v4 ) /*0x4e3c2a*/
    {
      DlgItem = GetDlgItem((HWND)this, v5); /*0x4e3c38*/
      v7 = !ShowWindow(DlgItem, 0); /*0x4e3c4f*/
      SendMessageA(DlgItem, 0x14Bu, 0, 0); /*0x4e3c52*/
      SendMessageA(DlgItem, 0x4DEu, 0, 7); /*0x4e3c5e*/
      StringCSF = GetStringCSF(aGuiObserver, 0, g_Str_File_GDlgSupp_cpp, 309); /*0x4e3c71*/
      v9 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)StringCSF); /*0x4e3c7f*/
      SendMessageA(DlgItem, 0x151u, v9, -3); /*0x4e3c8a*/
      SendMessageA(DlgItem, 0x14Eu, 0, 0); /*0x4e3c96*/
      result = SendMessageA(DlgItem, 0x4F1u, 0, 1); /*0x4e3ca2*/
      if ( !v7 ) /*0x4e3ca6*/
        result = ShowWindow(DlgItem, 5); /*0x4e3cab*/
      v1 = v11; /*0x4e3cb1*/
    }
    else
    {
      result = FillComboBoxRandomOnly((HWND)this, v5); /*0x4e3ccb*/
    }
    v11 = ++v1; /*0x4e3cb9*/
  }
  while ( v1 < 8 );
  return result; /*0x4e3cc3*/
}
// 0x5b9a60
void SkirmishDialog::HandleGameStart()
{
  int v2; // ebp
  Skirmish *v3; // esi
  ObjectClass *v4; // eax
  Skirmish *v5; // eax
  HWND DlgItem; // eax
  Skirmish *v7; // esi
  ObjectClass *v8; // eax
  Skirmish *v9; // eax
  char v10[132]; // [esp+10h] [ebp-188h] BYREF
  wchar_t Destination[130]; // [esp+94h] [ebp-104h] BYREF

  Debug::Log(); /*0x5b9a71*/
  v2 = *(unsigned int *)&g_GameRulesOptions; /*0x5b9a8a*/
  strcpy(v10, byte_A8B8E0); /*0x5b9a9e*/
  wcscpy(Destination, g_abs_A8B322); /*0x5b9aaf*/
  ShowWindow(*(HWND *)this->__pad_000, 0); /*0x5b9ac2*/
  if ( SkirmishDialog::Show(g_hWnd, (int)this, v2) == 2 ) /*0x5b9ad2*/
  {
    *(unsigned int *)&g_GameRulesOptions = v2; /*0x5b9ada*/
    LoadScenarioClassByIndex(v2); /*0x5b9ae0*/
    Session::PrepareGame(*(Session **)this->__pad_000); /*0x5b9ae7*/
    ShowWindow(*(HWND *)this->__pad_000, 5); /*0x5b9af1*/
    if ( _strcmpi( /*0x5b9b0b*/
           (char *)(*(unsigned int *)(dword_A8B8CC + 4 * *(unsigned int *)&g_GameRulesOptions) + 88),
           &stru_82BA00.Selectable) )
    {
      Session::PrepareGame(*(Session **)this->__pad_000); /*0x5b9b8c*/
      InvalidateRect(*(HWND *)this->__pad_000, 0, 0); /*0x5b9b98*/
    }
    else
    {
      v3 = g_UIControlState; /*0x5b9b1d*/
      if ( g_UIControlState ) /*0x5b9b25*/
      {
        ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x5b9b29*/
        delete[] (v3); /*0x5b9b2f*/
      }
      v4 = (ObjectClass *)new unsigned char[4u]; /*0x5b9b39*/
      if ( v4 ) /*0x5b9b43*/
        v5 = (Skirmish *)unknown_libname_27(v4); /*0x5b9b47*/
      else
        v5 = 0; /*0x5b9b4e*/
      g_UIControlState = v5; /*0x5b9b57*/
      Surface::LoadToSurfaceSHP((Surface *)v5, ExistingFileName); /*0x5b9b5c*/
      if ( !*(unsigned int *)g_UIControlState ) /*0x5b9b67*/
        Session::PrepareGame(*(Session **)this->__pad_000); /*0x5b9b6e*/
      InvalidateRect(*(HWND *)this->__pad_000, 0, 0); /*0x5b9b7a*/
      InvalidateRect(*(HWND *)this->__pad_000, 0, 0); /*0x5b9b83*/
    }
  }
  else
  {
    ShowWindow(*(HWND *)this->__pad_000, 5); /*0x5b9ba4*/
    if ( LoadScenarioClassByIndex(*(int *)&g_GameRulesOptions) == 1 ) /*0x5b9bb3*/
    {
      DlgItem = GetDlgItem(*(HWND *)this->__pad_000, 1448); /*0x5b9bc1*/
      SendMessageA(DlgItem, 0x4B2u, 0, 11055906); /*0x5b9bd4*/
      if ( _strcmpi( /*0x5b9bf1*/
             (char *)(*(unsigned int *)(dword_A8B8CC + 4 * *(unsigned int *)&g_GameRulesOptions) + 88),
             &stru_82BA00.Selectable) )
      {
        Session::PrepareGame(*(Session **)this->__pad_000); /*0x5b9c64*/
      }
      else
      {
        v7 = g_UIControlState; /*0x5b9bfd*/
        if ( g_UIControlState ) /*0x5b9c05*/
        {
          ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x5b9c09*/
          delete[] (v7); /*0x5b9c0f*/
          v8 = (ObjectClass *)new unsigned char[4u]; /*0x5b9c19*/
          if ( v8 ) /*0x5b9c23*/
            v9 = (Skirmish *)unknown_libname_27(v8); /*0x5b9c27*/
          else
            v9 = 0; /*0x5b9c2e*/
          g_UIControlState = v9; /*0x5b9c37*/
          Surface::LoadToSurfaceSHP((Surface *)v9, ExistingFileName); /*0x5b9c3c*/
          v7 = g_UIControlState; /*0x5b9c41*/
        }
        if ( !*(unsigned int *)v7 ) /*0x5b9c47*/
          Session::PrepareGame(*(Session **)this->__pad_000); /*0x5b9c4e*/
        InvalidateRect(*(HWND *)this->__pad_000, 0, 0); /*0x5b9c5a*/
      }
    }
    else
    {
      *(unsigned int *)&g_GameRulesOptions = v2; /*0x5b9c6b*/
    }
  }
  this->q008 = ((this->q008) & 0xFFFF00FFu) | (((unsigned int)(1) & 0xFFu) << 8); /*0x5b9c76*/
  Debug::Log(); /*0x5b9c7a*/
}
// 0x5e68a0
void SkirmishDialog::Show()
{
  int v4; // esi
  AudioController *v6; // [esp+0h] [ebp-4h]

  Screen::Capture(1, 0, a2, a3); /*0x5e68a7*/
  UI_Show(); /*0x5e68ac*/
  hDlg = (HWND)CreateDialogIndirect(g_hInstance, (HWND)0x6B, hWndParent, (DLGPROC)SkirmishSetup::DlgProc, 0); /*0x5e68d0*/
  SetupDialog(hDlg, 107); /*0x5e68d5*/
  SendMessageA(hDlg, 0x4A9u, 0, 1); /*0x5e68e9*/
  ShowWindow(hDlg, 1); /*0x5e68f8*/
  v4 = MessageDialogLoopAlt(hDlg, (uint8_t (*)(void))sub_5E66F0, 0, 1, 1); /*0x5e6914*/
  AudioController::GetVolume(v6); /*0x5e6916*/
  return v4; /*0x5e691d*/
}
// 0x596300
void SkirmishMapGen::DlgProc()
{

  int result; // eax
  unsigned int *WindowLongA; // ecx
  HWND v7; // eax
  HWND v8; // eax
  int *v9; // edx
  int v10; // edi
  unsigned int *v11; // ebx
  int v12; // eax
  int v13; // ecx
  int *i; // esi
  int v15; // edx
  int v16; // esi
  HWND v17; // eax
  HWND v18; // eax
  HWND v19; // eax
  HWND v20; // eax
  HWND v21; // eax
  HWND v22; // eax
  HWND v23; // eax
  HWND v24; // eax
  HWND v25; // eax
  HWND v26; // eax
  HWND v27; // eax
  HWND v28; // eax
  HWND v29; // eax
  wchar_t *String; // eax
  HWND v31; // eax
  HWND v32; // eax
  HWND v33; // eax
  HWND v34; // eax
  HWND v35; // eax
  HWND v36; // eax
  HWND v37; // eax
  HWND v38; // eax
  HWND v39; // eax
  HWND v40; // eax
  HWND v41; // eax
  HWND v42; // eax
  HWND v43; // eax
  void *v44; // eax
  HWND *v45; // eax
  wchar_t *v46; // eax
  void *v47; // edi
  HWND v48; // eax
  HWND v49; // eax
  HWND v50; // eax
  unsigned __int8 v51; // si
  HWND v52; // eax
  HWND v53; // eax
  HWND v54; // eax
  HWND v55; // eax
  HWND v56; // eax
  HWND v57; // eax
  HWND DlgItem; // eax
  HWND v59; // eax
  HWND v60; // eax
  HWND v61; // eax
  HWND v62; // eax
  HWND v63; // [esp+20h] [ebp+10h]
  unsigned __int8 v64; // [esp+20h] [ebp+10h]
  unsigned __int8 v65; // [esp+20h] [ebp+10h]
  unsigned __int8 v66; // [esp+20h] [ebp+10h]

  result = BaseDialogProc(hWnd, a2, a3, (unsigned int)a4); /*0x59631a*/
  if ( result ) /*0x596321*/
    return result; /*0x596321*/
  WindowLongA = (unsigned int *)GetWindowLongA(hWnd, 8); /*0x596330*/
  v63 = (HWND)WindowLongA; /*0x596338*/
  if ( a2 > 0x114 ) /*0x59633c*/
  {
    if ( a2 == 1175 ) /*0x596b71*/
    {
      dword_82B02C = -1; /*0x596b83*/
      DlgItem = GetDlgItem(hWnd, 1568); /*0x596b8d*/
      EnableWindow(DlgItem, MEMORY[0xA8ED6B] == 0); /*0x596ba6*/
      if ( dword_ABE04C == -1 ) /*0x596baf*/
      {
        dword_ABE04C = ((Random *)((unsigned int *)dword_A8B230 + 134))->Range(0, 0xFFFF); /*0x596bc8*/
        byte_ABE2D8 = 1; /*0x596bcd*/
      }
      byte_82B030 = 1; /*0x596bda*/
      RandomMap::SetupDialog(stru_ABDFD8, hWnd); /*0x596be1*/
      v66 = LoadOptions::Check((const char **)stru_ABDFD8); /*0x596bf6*/
      v59 = GetDlgItem(hWnd, 1730); /*0x596bfa*/
      if ( v59 ) /*0x596c02*/
        EnableWindow(v59, v66); /*0x596c0e*/
      v60 = GetDlgItem(hWnd, 1732); /*0x596c16*/
      if ( v60 ) /*0x596c1a*/
        EnableWindow(v60, v66); /*0x596c24*/
      v61 = GetDlgItem(hWnd, 1733); /*0x596c2c*/
      if ( v61 ) /*0x596c30*/
        EnableWindow(v61, 0); /*0x596c35*/
      v62 = GetDlgItem(hWnd, 1731); /*0x596c3d*/
      if ( v62 ) /*0x596c41*/
        EnableWindow(v62, 0); /*0x596c46*/
    }
    return 0; /*0x596c46*/
  }
  switch ( a2 ) /*0x596342*/
  {
    case 0x114u: /*0x596342*/
      if ( a4 && GetDlgCtrlID(a4) == 1003 ) /*0x596b18*/
      {
        v56 = GetDlgItem(hWnd, 1733); /*0x596b2a*/
        if ( v56 ) /*0x596b34*/
          EnableWindow(v56, 0); /*0x596b39*/
        v57 = GetDlgItem(hWnd, 1731); /*0x596b41*/
        if ( v57 ) /*0x596b45*/
          EnableWindow(v57, 0); /*0x596b4a*/
        goto LABEL_18; /*0x596b4a*/
      }
      return 0; /*0x596b18*/
    case 0xFu: /*0x596342*/
      if ( dword_ABE154 ) /*0x596aad*/
      {
        v55 = GetDlgItem(hWnd, 1128); /*0x596ab5*/
        if ( !(unsigned __int8)SkirmishMapGen::LookupDialogHash(v55) ) /*0x596abd*/
          Skirmish::RenderPreview(dword_ABE154, hWnd); /*0x596acd*/
      }
      if ( LoadScreen::IsActive(MEMORY[0xAC4F58]) ) /*0x596ad7*/
        LoadScreen::Render((int)MEMORY[0xAC4F58], a3, (int)hWnd, NAN); /*0x596aed*/
      ValidateRect(hWnd, 0); /*0x596af5*/
      return 0; /*0x596afe*/
    case 0x111u: /*0x596342*/
      if ( (unsigned __int16)a3 > 0x621u ) /*0x596369*/
      {
        switch ( (__int16)a3 ) /*0x5968c5*/
        {
          case 1730: /*0x5968c5*/
            Skirmish::ReadSettings(stru_ABDFD8, hWnd); /*0x596945*/
            if ( (unsigned __int8)LoadOptions::Run(stru_ABDFD8) ) /*0x59694f*/
            {
              byte_82B030 = 0; /*0x596963*/
              v53 = GetDlgItem(hWnd, 1568); /*0x59696a*/
              PostMessageA(hWnd, 0x111u, 0x620u, (LPARAM)v53); /*0x59697c*/
            }
            while ( (*(int (**)(int))(*(unsigned int *)dword_887640 + 40))(dword_887640) ) /*0x59698a*/
              (*(void (**)(int))(*(unsigned int *)dword_887640 + 16))(dword_887640); /*0x596999*/
            RandomMap::SetupDialog(stru_ABDFD8, hWnd); /*0x5969b1*/
            return 0; /*0x5969bc*/
          case 1731: /*0x5968c5*/
            Skirmish::ReadSettings(stru_ABDFD8, hWnd); /*0x5968d2*/
            ShowSaveLoadDialog(&unk_ABE050); /*0x5968e1*/
            v64 = LoadOptions::Check((const char **)stru_ABDFD8); /*0x5968fc*/
            v50 = GetDlgItem(hWnd, 1730); /*0x596900*/
            v51 = v64; /*0x596908*/
            if ( v50 ) /*0x59690e*/
              EnableWindow(v50, v64); /*0x59691a*/
            v52 = GetDlgItem(hWnd, 1732); /*0x596922*/
            if ( !v52 ) /*0x596926*/
              return 0; /*0x596926*/
            goto LABEL_53; /*0x596926*/
          case 1732: /*0x5968c5*/
            Skirmish::ReadSettings(stru_ABDFD8, hWnd); /*0x5969c5*/
            Options::PrepareSaveLoadDlg(stru_ABDFD8); /*0x5969cf*/
            v65 = LoadOptions::Check((const char **)stru_ABDFD8); /*0x5969ea*/
            v54 = GetDlgItem(hWnd, 1730); /*0x5969ee*/
            v51 = v65; /*0x5969f6*/
            if ( v54 ) /*0x5969fc*/
              EnableWindow(v54, v65); /*0x596a08*/
            v52 = GetDlgItem(hWnd, 1732); /*0x596a10*/
            if ( !v52 ) /*0x596a14*/
              return 0; /*0x596a14*/
LABEL_53:
            EnableWindow(v52, v51); /*0x59692c*/
            return 0; /*0x59693c*/
          case 1733: /*0x5968c5*/
            Skirmish::ReadSettings(stru_ABDFD8, hWnd); /*0x596a33*/
            if ( MEMORY[0xA8ED6B] ) /*0x596a3f*/
            {
              RandomMap::Generate((int *)stru_ABDFD8, 0, hWnd); /*0x596a49*/
            }
            else if ( dword_ABE154 && *(unsigned int *)dword_ABE154 /*0x596a72*/
                   || (RandomMap::Generate((int *)stru_ABDFD8, 1, hWnd), !MEMORY[0xA8ED6B]) )
            {
LABEL_69:
              *(unsigned int *)v63 = 1; /*0x596a90*/
              return 1; /*0x596aa3*/
            }
            ScenarioClass::SetFileName((char *)dword_A8B230, aRandomMap); /*0x596a7f*/
            SaveScenarioToINI(aRandmapMap); /*0x596a8b*/
            goto LABEL_69; /*0x596a8b*/
          default:
            return 0;
        }
      }
      if ( (unsigned __int16)a3 != 1569 ) /*0x59636f*/
      {
        if ( (unsigned __int16)a3 <= 0x5C0u ) /*0x59637a*/
        {
          if ( (unsigned __int16)a3 == 1472 ) /*0x596380*/
          {
            *WindowLongA = 2; /*0x5963fb*/
            return 1; /*0x596407*/
          }
          if ( ((unsigned __int16)a3 == 1002 || (unsigned __int16)a3 > 0x404u && (unsigned __int16)a3 <= 0x408u) /*0x5963a5*/
            && HIWORD(a3) == 1 )
          {
            v7 = GetDlgItem(hWnd, 1733); /*0x5963b7*/
            if ( v7 ) /*0x5963c1*/
              EnableWindow(v7, 0); /*0x5963c6*/
            v8 = GetDlgItem(hWnd, 1731); /*0x5963ce*/
            if ( v8 ) /*0x5963d2*/
              EnableWindow(v8, 0); /*0x5963d7*/
LABEL_18:
            Skirmish::ReadSettings(stru_ABDFD8, hWnd); /*0x5963d9*/
            InvalidateRect(hWnd, 0, 0); /*0x5963e9*/
            return 0; /*0x5963f5*/
          }
          return 0; /*0x5963a5*/
        }
        if ( (unsigned __int16)a3 == 1568 ) /*0x59640f*/
        {
          (*(void (**)(int))(*(unsigned int *)dword_887640 + 12))(dword_887640); /*0x59641d*/
          if ( byte_82B030 ) /*0x596427*/
          {
            byte_ABE2D8 = 1; /*0x596429*/
          }
          else
          {
            byte_ABE2D8 = 0; /*0x596432*/
            byte_82B030 = 1; /*0x596439*/
          }
          Skirmish::ReadSettings(stru_ABDFD8, hWnd); /*0x596446*/
          dword_ABED0C = 0; /*0x59645c*/
          v9 = &dword_ABE328; /*0x596464*/
          memset32(dword_ABE304, dword_ABE300, 8u); /*0x596469*/
          do /*0x596479*/
          {
            *v9 = 0; /*0x59646b*/
            v9[1] = 0; /*0x59646d*/
            v9 += 2; /*0x596470*/
          }
          while ( (int)v9 < (int)&dbl_ABE368 ); /*0x596479*/
          v10 = 0; /*0x596480*/
          dword_ABDFD4 = 0; /*0x596484*/
          dword_ABDFD0 = 0; /*0x59648a*/
          dword_ABEC90 = 0; /*0x596490*/
          dword_ABECD0 = 0; /*0x596496*/
          if ( dword_A8B230 ) /*0x59649c*/
          {
            *((unsigned int *)dword_A8B230 + 1103) = 0; /*0x5964a2*/
            v11 = dword_A8B230; /*0x5964a8*/
            if ( *((int *)dword_A8B230 + 1103) > 0 ) /*0x5964b4*/
            {
              v12 = 1104; /*0x5964b6*/
              v13 = 1136; /*0x5964c0*/
              for ( i = &dword_ABE328 - 1104; ; i = &dword_ABE328 - 1104 ) /*0x5964ca*/
              {
                if ( v12 < 1104 || v10 >= dword_ABED0C ) /*0x5964e9*/
                {
                  v15 = 0; /*0x5964f4*/
                  v16 = 0; /*0x5964f6*/
                }
                else
                {
                  v15 = i[v12]; /*0x5964eb*/
                  v16 = i[v12 + 1]; /*0x5964ee*/
                }
                v11[v12] = v15; /*0x5964f8*/
                ++v10; /*0x596501*/
                ++v13; /*0x596502*/
                *(unsigned int *)((char *)dword_A8B230 + v12 * 4 + 4) = v16; /*0x596505*/
                v12 += 2; /*0x596513*/
                *(unsigned int *)((char *)dword_A8B230 + v13 * 4 - 4) = dword_ABE304[v13 - 1137]; /*0x59651a*/
                v11 = dword_A8B230; /*0x59651e*/
                if ( v10 >= *((unsigned int *)dword_A8B230 + 1103) ) /*0x59652a*/
                  break; /*0x59652a*/
              }
            }
            v11->startX = dword_ABDFD4; /*0x596531*/
            *((unsigned int *)dword_A8B230 + 1100) = dword_ABDFD0; /*0x596543*/
            *((unsigned int *)dword_A8B230 + 1101) = dword_ABEC90; /*0x596554*/
            *((unsigned int *)dword_A8B230 + 1102) = dword_ABECD0; /*0x596565*/
          }
          v17 = GetDlgItem(hWnd, 1029); /*0x596579*/
          EnableWindow(v17, 0); /*0x596582*/
          v18 = GetDlgItem(hWnd, 1002); /*0x59658c*/
          EnableWindow(v18, 0); /*0x59658f*/
          v19 = GetDlgItem(hWnd, 1031); /*0x596599*/
          EnableWindow(v19, 0); /*0x59659c*/
          v20 = GetDlgItem(hWnd, 1030); /*0x5965a6*/
          EnableWindow(v20, 0); /*0x5965a9*/
          v21 = GetDlgItem(hWnd, 1032); /*0x5965b3*/
          EnableWindow(v21, 0); /*0x5965b6*/
          v22 = GetDlgItem(hWnd, 1003); /*0x5965c0*/
          EnableWindow(v22, 0); /*0x5965c3*/
          v23 = GetDlgItem(hWnd, 1569); /*0x5965cd*/
          EnableWindow(v23, 0); /*0x5965d0*/
          v24 = GetDlgItem(hWnd, 1568); /*0x5965da*/
          EnableWindow(v24, 0); /*0x5965dd*/
          v25 = GetDlgItem(hWnd, 1730); /*0x5965e7*/
          EnableWindow(v25, 0); /*0x5965ea*/
          v26 = GetDlgItem(hWnd, 1731); /*0x5965f4*/
          EnableWindow(v26, 0); /*0x5965f7*/
          v27 = GetDlgItem(hWnd, 1732); /*0x596601*/
          EnableWindow(v27, 0); /*0x596604*/
          v28 = GetDlgItem(hWnd, 1733); /*0x59660e*/
          EnableWindow(v28, 0); /*0x596611*/
          v29 = GetDlgItem(hWnd, 1472); /*0x59661b*/
          EnableWindow(v29, 0); /*0x59661e*/
          String = GetStringCSF(aTxtRandomMapDe, 0, aDRa2mdpostMapg, 3934); /*0x596631*/
          wcscpy(&unk_ABE050, String); /*0x59663c*/
          RandomMap::Generate((int *)stru_ABDFD8, 1, hWnd); /*0x59664c*/
          MiniMap::Render((char **)dword_ABE154); /*0x596657*/
          v31 = GetDlgItem(hWnd, 1029); /*0x596664*/
          EnableWindow(v31, 1); /*0x596667*/
          v32 = GetDlgItem(hWnd, 1002); /*0x596671*/
          EnableWindow(v32, 1); /*0x596674*/
          v33 = GetDlgItem(hWnd, 1031); /*0x59667e*/
          EnableWindow(v33, 1); /*0x596681*/
          v34 = GetDlgItem(hWnd, 1030); /*0x59668b*/
          EnableWindow(v34, 1); /*0x59668e*/
          v35 = GetDlgItem(hWnd, 1032); /*0x596698*/
          EnableWindow(v35, 1); /*0x59669b*/
          v36 = GetDlgItem(hWnd, 1003); /*0x5966a5*/
          EnableWindow(v36, 1); /*0x5966a8*/
          v37 = GetDlgItem(hWnd, 1569); /*0x5966b2*/
          EnableWindow(v37, 1); /*0x5966b5*/
          v38 = GetDlgItem(hWnd, 1568); /*0x5966bf*/
          EnableWindow(v38, 1); /*0x5966c2*/
          v39 = GetDlgItem(hWnd, 1730); /*0x5966cc*/
          EnableWindow(v39, 1); /*0x5966cf*/
          v40 = GetDlgItem(hWnd, 1731); /*0x5966d9*/
          EnableWindow(v40, 1); /*0x5966dc*/
          v41 = GetDlgItem(hWnd, 1732); /*0x5966e6*/
          EnableWindow(v41, 1); /*0x5966e9*/
          v42 = GetDlgItem(hWnd, 1733); /*0x5966f3*/
          EnableWindow(v42, 1); /*0x5966f6*/
          v43 = GetDlgItem(hWnd, 1472); /*0x596700*/
          EnableWindow(v43, 1); /*0x596703*/
          if ( dword_ABE150 ) /*0x59670d*/
            (**(void (***)(int, int))dword_ABE150)(dword_ABE150, 1); /*0x596713*/
          v44 = __2_YAPAXI_Z(0x178u); /*0x59671a*/
          if ( v44 ) /*0x596724*/
            v45 = (HWND *)MapSeedClass::Constructor(v44); /*0x596728*/
          else
            v45 = 0; /*0x59672f*/
          dword_ABE150 = (int)v45; /*0x59673d*/
          memcpy(v45, stru_ABDFD8, 0x178u); /*0x596742*/
          (*(void (**)(int))(*(unsigned int *)dword_887640 + 16))(dword_887640); /*0x59674c*/
          Timer::PumpMessages((HWND *)dword_87F770); /*0x596755*/
          PostMessageA(hWnd, 0xFu, 0, 0); /*0x596761*/
          return 0; /*0x59676d*/
        }
        return 0; /*0x596c48*/
      }
      Skirmish::ReadSettings(stru_ABDFD8, hWnd); /*0x596776*/
      RandomMap::SetupDialog(stru_ABDFD8, hWnd); /*0x596781*/
      dword_ABE010 = (unsigned int)((Random *)(&Randomizer_Global))->Range(0, 100) >= 0x32; /*0x59679e*/
      dword_ABE014 = ((Random *)(&Randomizer_Global))->Range(1, 4); /*0x5967b7*/
      dword_ABE020 = ((Random *)(&Randomizer_Global))->Range(0, 3); /*0x5967ca*/
      dword_ABE018 = ((Random *)(&Randomizer_Global))->Range(0, 3); /*0x5967dd*/
      dword_ABE03C = ((Random *)(&Randomizer_Global))->Range(0, 3); /*0x5967f3*/
      dword_ABE040 = dword_ABE03C; /*0x5967f8*/
      Skirmish::RandomizeSettings(stru_ABDFD8, dword_ABE014); /*0x5967fd*/
      v46 = GetStringCSF(aTxtRandomMapDe, 0, aDRa2mdpostMapg, 3934); /*0x596813*/
      wcscpy(&unk_ABE050, v46); /*0x59681e*/
      dword_ABE04C = ((Random *)(&Randomizer_Global))->Range(0, 0xFFFF); /*0x59683c*/
      SettingsClass::ClampValues((int *)stru_ABDFD8); /*0x596841*/
      RandomMap::SetupDialog(stru_ABDFD8, hWnd); /*0x59684c*/
      v47 = dword_ABE154; /*0x596851*/
      if ( dword_ABE154 ) /*0x596859*/
      {
        ComPtr::Dtor(dword_ABE154); /*0x59685d*/
        __3_YAXPAX_Z(v47); /*0x596863*/
      }
      dword_ABE154 = 0; /*0x596877*/
      v48 = GetDlgItem(hWnd, 1733); /*0x596881*/
      if ( v48 ) /*0x59688b*/
        EnableWindow(v48, 0); /*0x596890*/
      v49 = GetDlgItem(hWnd, 1731); /*0x596898*/
      if ( v49 ) /*0x59689c*/
        EnableWindow(v49, 0); /*0x5968a1*/
      InvalidateRect(hWnd, 0, 0); /*0x5968a8*/
      return 0; /*0x5968b1*/
    default:
      return 0; /*0x596357*/
  }

}
// 0x6067a0
void SkirmishMapGen::LookupDialogHash()
{

  SkirmishMapGen **v1; // eax
  unsigned int *v3; // eax
  SkirmishMapGen *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this; /*0x6067a6*/
  if ( !*(unsigned int *)&g_DialogPool.__pad_208[60] ) /*0x6067ac*/
    return 0; /*0x6067ac*/
  v1 = *(SkirmishMapGen ***)(*(unsigned int *)&g_DialogPool.__pad_208[56] /*0x6067cd*/
                           + 4
                           * ((*(int (**)(SkirmishMapGen **))&g_DialogPool.__pad_208[80])(&v4)
                            & ((1 << g_DialogPool.__pad_208[68]) - 1)));
  if ( !v1 ) /*0x6067d2*/
    return 0; /*0x6067d2*/
  while ( *v1 != v4 ) /*0x6067da*/
  {
    v1 = v1->SkirmishMapGen_204; /*0x6067dc*/
    if ( !v1 ) /*0x6067e4*/
      return 0; /*0x6067e4*/
  }
  v3 = v1 + 1; /*0x6067ee*/
  if ( v3 ) /*0x6067f3*/
    return *((unsigned char *)v3 + 188); /*0x6067f5*/
  else
    return 0; /*0x6067e6*/

}
// 0x5eee40
void SkirmishVector::PushBack()
{
  int v3; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // edx

  v3 = this->u32_8; /*0x5eee43*/
  if ( this->u32_10 >= v3 ) /*0x5eee4b*/
  {
    if ( !this->u32_D && v3 ) /*0x5eee56*/
      return 0; /*0x5eee56*/
    v4 = this->u32_14; /*0x5eee58*/
    if ( v4 <= 0 /*0x5eee68*/
      || !(*(uint8_t (**)(SkirmishVector *, int, unsigned int))(*&this->u32_20))(this, v3 + v4, 0) )
    {
      return 0; /*0x5eee6f*/
    }
  }
  v6 = this->u32_10; /*0x5eee75*/
  v7 = this->u32_4; /*0x5eee78*/
  this->u32_10 = v6 + 1; /*0x5eee7e*/
  *(unsigned int *)(v7 + 4 * v6) = *a2; /*0x5eee88*/
  return 1; /*0x5eee71*/
}
// 0x55dee0
void SyncDelayClass::ProcessNetworkSync()
{

  int v2; // eax
  int v3; // edi
  unsigned __int8 *v4; // ebx
  unsigned int *v5; // eax
  int *v6; // ecx
  int v7; // esi
  int v8; // eax
  const wchar_t *v9; // eax
  int v10; // esi
  ObjectClass *v12; // [esp+0h] [ebp-14h]
  int v13; // [esp+Ch] [ebp-8h] BYREF
  int v14; // [esp+10h] [ebp-4h] BYREF

  Chat::ProcessMessages((Chat *)this); /*0x55dee8*/
  v2 = (int)*this; /*0x55deed*/
  if ( !*(unsigned int *)this ) /*0x55def2*/
    return v2; /*0x55def2*/
  (v2) &= ~(((~(~8u)) & 0xFF) << 8); /*0x55def8*/
  v3 = v2; /*0x55defc*/
  v4 = (unsigned __int8 *)v2; /*0x55df03*/
  BYTE1(v4) = (((v2) >> 8) & 0xFF) & 0xE8; /*0x55df05*/
  v14 = (int)v4; /*0x55df0a*/
  if ( dword_87F684 ) /*0x55df0e*/
  {
    v5 = (unsigned int *)dword_87F690; /*0x55df10*/
    if ( dword_87F690 && *(unsigned __int8 **)dword_87F690 == v4 ) /*0x55df1b*/
      goto LABEL_7; /*0x55df1b*/
    v5 = (unsigned int *)SortedVector::BinarySearch(&stru_87F680, &v14); /*0x55df27*/
    if ( v5 ) /*0x55df2e*/
    {
      dword_87F690 = (int)v5; /*0x55df30*/
LABEL_7:
      v6 = v5 + 1; /*0x55df35*/
      goto LABEL_9; /*0x55df38*/
    }
  }
  v5 = (unsigned int *)dword_87F690; /*0x55df3a*/
  v6 = (int *)&unk_B7883C; /*0x55df3f*/
LABEL_9:
  v7 = *v6; /*0x55df44*/
  if ( !*v6 ) /*0x55df44*/
  {
    v13 = v3; /*0x55df50*/
    if ( dword_87F684 ) /*0x55df56*/
    {
      if ( v5 && *v5 == v3 ) /*0x55df5e*/
        goto LABEL_15; /*0x55df5e*/
      v5 = (unsigned int *)SortedVector::BinarySearch(&stru_87F680, &v13); /*0x55df6a*/
      if ( v5 ) /*0x55df71*/
      {
        dword_87F690 = (int)v5; /*0x55df73*/
LABEL_15:
        v2 = (int)(v5 + 1); /*0x55df78*/
LABEL_23:
        v7 = *(unsigned int *)v2; /*0x55dfd1*/
        goto LABEL_24; /*0x55dfd1*/
      }
    }
    goto LABEL_22; /*0x55df71*/
  }
  LOBYTE(v2) = (*(int (**)(int, int))(*(unsigned int *)v7 + 20))(v7, v3); /*0x55df82*/
  if ( !(unsigned char)v2 ) /*0x55df87*/
  {
    v13 = v3; /*0x55df8e*/
    if ( dword_87F684 ) /*0x55df94*/
    {
      if ( !SyncDelay::Check((SyncDelay *)&stru_87F680, &v13) ) /*0x55dfa0*/
      {
        v8 = SortedVector::BinarySearch(&stru_87F680, &v13); /*0x55dfb3*/
        if ( !v8 ) /*0x55dfba*/
          goto LABEL_22; /*0x55dfba*/
        dword_87F690 = v8; /*0x55dfbc*/
      }
      v2 = dword_87F690 + 4; /*0x55dfc7*/
      goto LABEL_23; /*0x55dfca*/
    }
LABEL_22:
    v2 = (int)&unk_B7883C; /*0x55dfcc*/
    goto LABEL_23; /*0x55dfcc*/
  }
LABEL_24:
  if ( !v7 /*0x55dffc*/
    || stru_A8E960.random[552]
    && (v9 = (const wchar_t *)(*(int (**)(int))(*(unsigned int *)v7 + 12))(v7),
        (v2 = _wcsicmp(v9, g_INI_Key_De)) != 0) )
  {
    if ( v4 == (unsigned __int8 *)27 ) /*0x55e07c*/
    {
      LOBYTE(v2) = UI_Create(v12); /*0x55e07e*/
    }
    else if ( v4 == (unsigned __int8 *)9 ) /*0x55e08d*/
    {
      LOBYTE(v2) = Network_Process_6ABC40(); /*0x55e094*/
    }
    else if ( v4 == (unsigned __int8 *)37 ) /*0x55e0a3*/
    {
      v2 = dword_ABCE14; /*0x55e0ab*/
      if ( (*(unsigned int *)this & 0x800) != 0 ) /*0x55e0b0*/
        (v2) = ((v2) & ~(0xFF << 8)) | ((((((dword_ABCE14) >> 8) & 0xFF) & 0xFE) & 0xFF) << 8); /*0x55e0b2*/
      else
        (v2) = ((v2) & ~(0xFF << 8)) | ((((((dword_ABCE14) >> 8) & 0xFF) | 1) & 0xFF) << 8); /*0x55e0c1*/
      dword_ABCE14 = v2; /*0x55e0b7*/
    }
    else if ( v4 == (unsigned __int8 *)39 ) /*0x55e0d3*/
    {
      v2 = dword_ABCE14; /*0x55e0db*/
      if ( (*(unsigned int *)this & 0x800) != 0 ) /*0x55e0e0*/
        (v2) = ((v2) & ~(0xFF << 8)) | ((((((dword_ABCE14) >> 8) & 0xFF) & 0xEF) & 0xFF) << 8); /*0x55e0e2*/
      else
        (v2) = ((v2) & ~(0xFF << 8)) | ((((((dword_ABCE14) >> 8) & 0xFF) | 0x10) & 0xFF) << 8); /*0x55e0f1*/
      dword_ABCE14 = v2; /*0x55e0e7*/
    }
    else if ( v4 == (unsigned __int8 *)38 ) /*0x55e103*/
    {
      v2 = dword_ABCE14; /*0x55e10b*/
      if ( (*(unsigned int *)this & 0x800) != 0 ) /*0x55e110*/
        (v2) = ((v2) & ~0xFF) | ((dword_ABCE14 & 0xFE) & 0xFF); /*0x55e112*/
      else
        (v2) = ((v2) & ~0xFF) | ((dword_ABCE14 | 1) & 0xFF); /*0x55e120*/
      dword_ABCE14 = v2; /*0x55e116*/
    }
    else if ( v4 == (unsigned __int8 *)40 ) /*0x55e131*/
    {
      v2 = dword_ABCE14; /*0x55e139*/
      if ( (*(unsigned int *)this & 0x800) != 0 ) /*0x55e13e*/
        (v2) = ((v2) & ~0xFF) | ((dword_ABCE14 & 0xEF) & 0xFF); /*0x55e140*/
      else
        (v2) = ((v2) & ~0xFF) | ((dword_ABCE14 | 0x10) & 0xFF); /*0x55e14e*/
      dword_ABCE14 = v2; /*0x55e144*/
    }
  }
  else
  {
    if ( (*(unsigned __int8 (**)(int, SyncDelayClass))(*(unsigned int *)v7 + 24))(v7, *this) ) /*0x55e006*/
      (*(void (**)(int, SyncDelayClass))(*(unsigned int *)v7 + 32))(v7, *this); /*0x55e015*/
    LOBYTE(v2) = (*(int (**)(int, SyncDelayClass))(*(unsigned int *)v7 + 28))(v7, *this); /*0x55e020*/
    if ( (unsigned char)v2 ) /*0x55e025*/
    {
      v10 = 0; /*0x55e031*/
      v2 = (unsigned __int16)EventQueue::Process((EventQueue *)dword_87F770); /*0x55e03b*/
      if ( v2 == *this ) /*0x55e042*/
      {
        do /*0x55e070*/
        {
          EventQueue::Read((EventQueue *)dword_87F770); /*0x55e04e*/
          v2 = (unsigned __int16)EventQueue::Process((EventQueue *)dword_87F770); /*0x55e05e*/
          ++v10; /*0x55e063*/
        }
        while ( v10 < 10 && v2 == *this ); /*0x55e070*/
      }
    }
  }
  return v2; /*0x55e072*/

}
} // namespace gamemd