// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/E4Recv_4F2280_e4.hpp"
#include "e4/classes/E4Recv_4F2300_e4.hpp"
#include "e4/classes/E4Recv_4F2640_e4.hpp"
#include "e4/classes/E4Recv_4F26E0_e4.hpp"
#include "e4/classes/E4Recv_4F2770_e4.hpp"
#include "e4/classes/E4Recv_4F2C00_e4.hpp"
#include "e4/classes/E4Recv_4F2F10_e4.hpp"
#include "e4/classes/E4Recv_4F3460_e4.hpp"
#include "e4/classes/E4Recv_4F3AB0_e4.hpp"
#include "e4/classes/E4Recv_4F3C40_e4.hpp"
#include "e4/classes/E4Recv_4F3D40_e4.hpp"
#include "e4/classes/E4Recv_4F4D30_e4.hpp"
#include "e4/classes/E4Recv_4F7850_e4.hpp"
#include "e4/classes/E4Recv_4F9670_e4.hpp"
#include "e4/classes/E4Recv_4FA210_e4.hpp"
#include "e4/classes/E4Recv_4FBD00_e4.hpp"
#include "e4/classes/E4Recv_4FBD80_e4.hpp"
#include "e4/classes/E4Recv_4FCE00_e4.hpp"
#include "e4/classes/E4Recv_4FFD50_e4.hpp"
#include "e4/classes/E4Recv_4FFD90_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/GameClass_e4.hpp"
#include "e4/classes/MSEngine_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/Options_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Skirmish_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/E4Recv_501750_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/ProgressTimer_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/E4Recv_5093C0_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/E4Recv_50DA40_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/Input_e4.hpp"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/E4Recv_50C160_e4.hpp"
#include "e4/classes/AnimTypeClass_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/InfantryTypeVector_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/UnitTypeVector_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"
#include "e4/classes/PriorityQueue_e4.hpp"
#include "e4/classes/ArtConfig_e4.hpp"
#include "e4/classes/MSVQAnim_e4.hpp"
#include "e4/classes/DDraw_e4.hpp"
#include "e4/classes/MSPCXAnim_e4.hpp"
#include "e4/classes/Map_e4.hpp"
#include "e4/classes/Theme_e4.hpp"
#include "e4/classes/FileStraw_e4.hpp"
#include "e4/classes/GenericNode_e4.hpp"
#include "classes/DSurface_e4.hpp"  // G42.57w9 method-carrier supply
#include "e4/classes/ThemeClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
#include "e4/classes/GraphicMenuItem_e4.hpp"  // G57w10 D supply
#include "e4/classes/_tree_full_e4.hpp"
// [w14e3] vocab extender (raw call-form evidence)
namespace gamemd { int CreateDialog(unsigned __int16 a1, INT_PTR (__stdcall *a2)(HWND, UINT, WPARAM, LPARAM), LPARAM a3); }  // x4:ida@0x622650
namespace gamemd { int sub_4F2C00(int p0, int p1, int p2); }  // x4:signals@0x4f2c00
namespace gamemd { int Find(int* p0); }  // x4:signals@0x4e0550
namespace gamemd { int sub_4F2F10(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7); }  // x4:signals@0x4f2f10
namespace gamemd { int sub_4F3460(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9); }  // x4:signals@0x4f3460
namespace gamemd { int sub_4F3C40(int p0, int p1, int p2); }  // x4:signals@0x4f3c40
namespace gamemd { int sub_7B5410(int p0, int p1); }  // x4:signals@0x7b5410
namespace gamemd { int ClearAndFree3(int p_this); }  // x4:ida@0x50f830
namespace gamemd { int sub_4F3AB0(int p0, int p1); }  // x4:signals@0x4f3ab0
namespace gamemd { int sub_4F3D40(int p0); }  // x4:signals@0x4f3d40
// ==== G42.57w9 data-label supply (IDA truth; e4_globals pending) ====
extern char aActiverect[];  // data: 0x824240 truth(IDA G42.57w9)
extern char aAlt[];  // data: 0x82437c truth(IDA G42.57w9)
extern char aCtrl[];  // data: 0x824384 truth(IDA G42.57w9)
extern char aKeys[];  // data: 0x824340 truth(IDA G42.57w9)
extern char aOrigin[];  // data: 0x82424c truth(IDA G42.57w9)
extern char aSelectsound[];  // data: 0x8242fc truth(IDA G42.57w9)
extern char aShift[];  // data: 0x824374 truth(IDA G42.57w9)
extern char aShortcut[];  // data: 0x824308 truth(IDA G42.57w9)
extern unsigned char aLoop;  // data: 0x824238 truth(IDA G42.57w9)


// 0x4F10E0
namespace gamemd {  // G42.18 ns repair
int InGameUI_Open()
{
  uint16_t v0; // cx
  HWND v1; // eax
  HWND v2; // esi
  LONG dwNewLong; // [esp+0h] [ebp-4h] BYREF

  dwNewLong = 0; /*0x4f10e9*/
  if ( !dword_A8B238 || dword_A8B238 == 5 ) /*0x4f10f6*/
  {
    v0 = 181; /*0x4f1130*/
  }
  else
  {
    if ( dword_A8B238 != 4 ) /*0x4f10fb*/
    {
      v1 = (HWND)CreateDialog(0xBBAu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))Options::DlgProc, 0); /*0x4f1127*/
      goto LABEL_10; /*0x4f1127*/
    }
    if ( dword_A8B538 ) /*0x4f110b*/
      v0 = 3002; /*0x4f110d*/
    else
      v0 = 255; /*0x4f1114*/
  }
  v1 = (HWND)CreateDialog(v0, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))Options::DlgProc, 0); /*0x4f1135*/
  LABEL_10:
  v2 = v1; /*0x4f113a*/
  if ( v1 ) /*0x4f113e*/
  {
    SetWindowLongA(v1, 8, (LONG)&dwNewLong); /*0x4f1148*/
    ((gamemd::Dialog *)(v2))->Show(); /*0x4f1150*/
    if ( !dwNewLong ) /*0x4f115b*/
    {
      while ( Dialog::PumpMessages() != 1 ) /*0x4f1164*/
      {
        if ( dwNewLong ) /*0x4f116c*/
          goto LABEL_16; /*0x4f116c*/
      }
      dwNewLong = 1; /*0x4f1170*/
    }
  LABEL_16:
    ((Dialog *)(v2))->Destroy(); /*0x4f1178*/
  }
  if ( dwNewLong == 1004 ) /*0x4f1189*/
    ScenarioClass::ShowMissionBriefing((gamemd::ScenarioClass *)(dword_A8B230)); /*0x4f1191*/
  return MapClass::MarkForRedraw(2); /*0x4f11a2*/
}
}  // G42.18 ns repair
// 0x4F1840
namespace gamemd {
long sub_4F1840()
{
  HWND Dialog; // esi
  LONG dwNewLong; // [esp+4h] [ebp-4h] BYREF

  dwNewLong = 0; /*0x4f184e*/
  Dialog = (HWND)CreateDialog(0xB6u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_4F18B0, 0); /*0x4f185b*/
  if ( Dialog ) /*0x4f185f*/
  {
    SetWindowLongA(Dialog, 8, (LONG)&dwNewLong); /*0x4f1869*/
    ((Dialog *)(Dialog))->Show(); /*0x4f1871*/
    if ( !dwNewLong ) /*0x4f187c*/
    {
      while ( Dialog::PumpMessages() != 1 ) /*0x4f1885*/
      {
        if ( dwNewLong ) /*0x4f188d*/
          goto LABEL_7; /*0x4f188d*/
      }
      dwNewLong = 1; /*0x4f1891*/
    }
  LABEL_7:
    ((Dialog *)(Dialog))->Destroy(); /*0x4f1899*/
  }
  return dwNewLong; /*0x4f18a4*/
}
}
// 0x4F18B0
namespace gamemd {
int sub_4F18B0(HWND hDlg, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int result; // eax
  HWND DlgItem; // ebp
  wchar_t *StringCSF; // eax
  HWND v7; // esi
  int v8; // edi
  wchar_t *v9; // eax
  HouseClass *v10; // ecx
  int v11; // edx
  wchar_t *v12; // eax
  unsigned int *WindowLongA; // eax

  result = (int)(BaseDialogProc((gamemd::SkirmishDialog *)(hDlg), a2, a3, a4)); /*0x4f18c9*/
  if ( !result ) /*0x4f18d0*/
  {
    if ( a2 == 273 ) /*0x4f18dc*/
    {
      WindowLongA = (unsigned int *)GetWindowLongA(hDlg, 8); /*0x4f1a3a*/
      if ( !(*(((unsigned short *)&(a3)) + 1)) ) /*0x4f1a42*/
      {
        if ( (uint16_t)a3 > 0x6C9u ) /*0x4f1a55*/
        {
          if ( (uint16_t)a3 == 1810 ) /*0x4f1a88*/
            *WindowLongA = dword_A8EE80; /*0x4f1a90*/
        }
        else
        {
          if ( (uint16_t)a3 == 1737 ) /*0x4f1a57*/
          {
            *WindowLongA = dword_A8EE7C; /*0x4f1a79*/
            return 0; /*0x4f1a7f*/
          }
          if ( (uint16_t)a3 == 1 || (uint16_t)a3 == 1670 ) /*0x4f1a62*/
          {
            *WindowLongA = 1; /*0x4f1a65*/
            return 0; /*0x4f1a6f*/
          }
        }
      }
    }
    else if ( a2 == 1175 ) /*0x4f18e8*/
    {
      DlgItem = GetDlgItem(hDlg, 1737); /*0x4f190e*/
      StringCSF = GetStringCSF((wchar_t *)(aGuiLeave), 0,(const char *)(g_Str_File_GOptions_CPP), 547); /*0x4f1910*/
      SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)StringCSF); /*0x4f1924*/
      dword_A8EE7C = 2; /*0x4f192c*/
      v7 = GetDlgItem(hDlg, 1810); /*0x4f1938*/
      v8 = 0; /*0x4f193f*/
      dword_A8EE80 = 0; /*0x4f1943*/
      if ( ((unsigned int *)(dword_A8B238))[0] ) /*0x4f1949*/
      {
        if ( ((unsigned int *)(dword_A8B238))[0] == 5 ) /*0x4f197d*/
          goto LABEL_18; /*0x4f197d*/
        if ( ((unsigned int *)(dword_A8B238))[0] != 3 && dword_A8B238[0] != 4 ) /*0x4f198d*/
          goto LABEL_19; /*0x4f198d*/
        if ( dword_A80238 <= 0 ) /*0x4f199a*/
          goto LABEL_18; /*0x4f199a*/
        v10 = (gamemd::HouseClass *)(dword_A8022C); /*0x4f199c*/
        v11 = dword_A80238; /*0x4f19a2*/
        do /*0x4f19bd*/
        {
          if ( *(unsigned char *)(*(unsigned int *)v10->vfptr + 492) && !*(unsigned char *)(*(unsigned int *)v10->vfptr + 501) ) /*0x4f19af*/
            ++v8; /*0x4f19b8*/
          v10 = (gamemd::HouseClass *)(&v10->vtable2); /*0x4f19b9*/
          --v11; /*0x4f19bc*/
        }
        while ( v11 ); /*0x4f19bd*/
        if ( v8 < 2 || dword_A83D4C->defeated ) /*0x4f19ca*/
        {
  LABEL_18:
          ShowWindow(v7, 0); /*0x4f1a0e*/
        }
        else
        {
          dword_A8EE7C = 3; /*0x4f19e5*/
          v12 = GetStringCSF((wchar_t *)(g_Str_GUI_Observe), 0,(const char *)(g_Str_File_GOptions_CPP), 586); /*0x4f19ef*/
          SendMessageA(v7, 0x4B2u, 0, (LPARAM)v12); /*0x4f19fd*/
          dword_A8EE80 = 4; /*0x4f19ff*/
        }
      }
      else
      {
        v9 = GetStringCSF((wchar_t *)(aGuiRestart), 0,(const char *)(g_Str_File_GOptions_CPP), 558); /*0x4f195c*/
        SendMessageA(v7, 0x4B2u, 0, (LPARAM)v9); /*0x4f1969*/
        dword_A8EE80 = 5; /*0x4f196b*/
      }
  LABEL_19:
      sub_603E40((int)DlgItem, dword_A8EE7C); /*0x4f1a14*/
      sub_603E40((int)v7, dword_A8EE80); /*0x4f1a29*/
      return 0; /*0x4f1a34*/
    }
    return 0; /*0x4f1a92*/
  }
  return result; /*0x4f1a2f*/
}
}
// 0x4F1CA0
namespace gamemd {
char ** LoadFromINIGraphicMenu(void * a1, void * a2, void * a3)
{
  String *v3; // edx
  uint8_t *v5; // eax
  void * v7;
  int v8; // ebp
  int v9; // edi
  bool v10; // bl
  unsigned int *Config; // esi
  unsigned int *v12; // eax
  char v13; // bl
  MSVQAnim *v14; // eax
  unsigned int *v15; // eax
  char v16; // bl
  ArtConfig *v17; // eax
  MSAnim *v18; // esi
  char *v19; // eax
  char v20; // bl
  int (***v21)(unsigned int, int); // eax
  int *v22; // eax
  int v23; // ecx
  int v24; // eax
  char **abstractFlags; // esi
  bool *uniqueId; // ebp
  bool v27; // bl
  int Int; // esi
  int v29; // ebp
  bool v30; // bl
  int v31; // esi
  int v32; // ecx
  int v33; // eax
  int v34; // eax
  int v35; // edx
  unsigned int * p_nextObject;
  unsigned int *v37; // [esp+0h] [ebp-C0h]
  ObjectClass v38; // [esp+Ch] [ebp-B4h] BYREF
  int v39; // [esp+B8h] [ebp-8h]
  int v40; // [esp+BCh] [ebp-4h]
  void *retaddr; // [esp+C0h] [ebp+0h]

  v38.vfptr.abstractFlags = (unsigned int)((int)v3);
  v38.vfptr.uniqueId = (int)a2; /*0x4f1cb3*/
  v40 = (unsigned int)(0);
  v5 = (uint8_t *)((String *)(v3))->GetOrEmpty_Alt(); /*0x4f1cbe*/
  if ( !INIClass::BinarySearchSection((gamemd::INIClass *)((int)a2), v5) ) /*0x4f1cc6*/
    return 0; /*0x4f1cc6*/
  v7 = (void *)((int)(operator new(0x70u))); /*0x4f1cdd*/
  v8 = (int)(v7); /*0x4f1ce2*/
  v38.vfptr.NeedsSaveOrLink = v7; /*0x4f1ce9*/
  if ( !v7 ) /*0x4f1ced*/
    return 0; /*0x4f1cda*/
  p_nextObject = (unsigned int *)((int *)a3); /*0x4f1cef*/
  ((MSEngine *)((MSEngine *)(v7 + 4)))->Construct(); /*0x4f1cf3*/
  ((String *)((String *)(v8 + 76)))->Assign(aTitlePcx); /*0x4f1d02*/
  v38.vfptr.referenceCount = v8 + 80; /*0x4f1d0f*/
  ((String *)((String *)(v8 + 80)))->Assign((const char *)(g_INI_Key_Intro)); /*0x4f1d13*/
  v9 = v8 + 88; /*0x4f1d18*/
  *(unsigned int *)(v8 + 84) = 0; /*0x4f1d1b*/
  sub_4F2C00((int)((VectorClass *)(v8 + 88)), 0, 0); /*0x4f1d22*/
  *(unsigned int *)(v8 + 88) = (unsigned int)(&vt_DynamicVectorClass); /*0x4f1d27*/
  *(unsigned int *)(v8 + 108) = 10; /*0x4f1d2d*/
  *(unsigned int *)(v8 + 104) = 0; /*0x4f1d34*/
  *(unsigned int *)v8 = (unsigned int)(&vt_GraphicMenu); /*0x4f1d3b*/
  unknown_libname_73(&v38.vfptr.vfptr2); /*0x4f1d42*/
  ((String *)((String *)&v38.vfptr.vfptr3))->Assign(&g_INI_DefaultBuffer); /*0x4f1d50*/
  ((String *)((String *)&v38))->Assign((const char *)(aBackground)); /*0x4f1d5e*/
  v10 = INIClass::ReadString( /*0x4f1d86*/
          (INIClass *)v38.vfptr.uniqueId,
          (char **)v38.vfptr.abstractFlags,
          (char **)&v38,
          (char **)&v38.vfptr.vfptr3,
          (int)&v38.vfptr.vfptr2) > 0;
  DeleteAndZero(&v38); /*0x4f1d89*/
  DeleteAndZero((ObjectClass *)&v38.vfptr.vfptr3); /*0x4f1d92*/
  ((String *)((String *)&v38.vfptr.vfptr2))->Concat2((char **)&v38.vfptr.nextArrayIndex, g_Str_File__PCX); /*0x4f1da5*/
  ((String *)((String *)(v8 + 76)))->Reassign((const char **)&v38.vfptr.nextArrayIndex); /*0x4f1db1*/
  Config = 0; /*0x4f1db6*/
  v38.occupant = 0; /*0x4f1dba*/
  v38.owningHouseIndex = 0; /*0x4f1dbe*/
  if ( v10 ) /*0x4f1dc2*/
  {
    ((String *)((String *)&v38.vfptr.vfptr2))->Concat2((char **)&v38, aVqa); /*0x4f1dd6*/
    v12 = (unsigned int *)(CCFileClass::Construct2((CCFileClass *)&v38.ambientSoundController[2], (char **)&v38)); /*0x4f1de4*/
    v13 = v12->Open(0, p_nextObject); /*0x4f1df8*/
    v38.ambientSoundController[3] = (int)&vt_CCFileClass; /*0x4f1dfa*/
    v39 = 0; /*0x4f1e02*/
    Vector::Clear((int)&v38.location[1]); /*0x4f1e09*/
    v38.ambientSoundController[3] = (int)&off_7E1668; /*0x4f1e12*/
    ((BufferIOFileClass *)((BufferIOFileClass *)&v38.ambientSoundController[3]))->Dtor(); /*0x4f1e1a*/
    if ( v13 ) /*0x4f1e21*/
    {
      v14 = (MSVQAnim *)operator new(0x30u); /*0x4f1e25*/
      if ( v14 ) /*0x4f1e2f*/
      {
        Config = MSVQAnim::ConstructMSVQAnimHidden( /*0x4f1e4e*/
                   v14,
                   (char **)&v38.vfptr.vfptr1,
                   &DSurface_Alternate->DSurface_field_0x0,
                   v8 + 28,
                   1);
        if ( Config ) /*0x4f1e52*/
        {
  LABEL_18: v21 = (unsigned int)(*(int (****)(unsigned int, int))(v8 + 84));
          if ( v21 ) /*0x4f1f71*/
            UI_Load_5D1C90((ObjectClass *)(v8 + 4), v21, (int (***)(unsigned int, int))Config); /*0x4f1f77*/
          else
            ((PriorityQueue *)((PriorityQueue *)(v8 + 4)))->Add((int)Config); /*0x4f1f81*/
          *(unsigned int *)(v8 + 84) = (unsigned int)(Config); /*0x4f1f86*/
          p_nextObject = (unsigned int)(&v38.nextObject); /*0x4f1f91*/
          v22 = (int *)Config->GetFrameRect(); /*0x4f1f92*/
          v23 = *v22; /*0x4f1f95*/
          v24 = v22[1]; /*0x4f1f97*/
          v38.occupant = v23; /*0x4f1f9a*/
          v38.owningHouseIndex = v24; /*0x4f1fa2*/
          DeleteAndZero(&v38); /*0x4f1fa6*/
          goto LABEL_22; /*0x4f1fa6*/
        }
      }
      else
      {
        Config = 0; /*0x4f1f4d*/
      }
    }
    ((String *)((String *)&v38.vfptr.vfptr3))->Concat2((char **)&v38.vfptr.uniqueId, aBik_0); /*0x4f1e66*/
    v15 = CCFileClass::Construct2((CCFileClass *)&v38.ambientSoundController[3], (char **)&v38.vfptr.uniqueId); /*0x4f1e74*/
    v16 = v15->Open(0); /*0x4f1e89*/
    v38.ambientSoundController[3] = (int)&vt_CCFileClass; /*0x4f1e8b*/
    v39 = 0; /*0x4f1e93*/
    Vector::Clear((int)&v38.location[1]); /*0x4f1e9e*/
    v38.ambientSoundController[3] = (int)&off_7E1668; /*0x4f1ea7*/
    ((BufferIOFileClass *)((BufferIOFileClass *)&v38.ambientSoundController[3]))->Dtor(); /*0x4f1eaf*/
    if ( v16 ) /*0x4f1eb6*/
    {
      Config = 0; /*0x4f1ec3*/
      v38.nextObject = 0; /*0x4f1ec7*/
      v38.attachedTag = 0; /*0x4f1ecb*/
      *(unsigned long long *)&v38.attachedBomb = *(unsigned long long *)&g_DisplayWidth; /*0x4f1ecf*/
      v17 = (ArtConfig *)operator new(0x3Cu); /*0x4f1ed7*/
      if ( v17 ) /*0x4f1ee1*/
        Config = ArtConfig::loadConfig( /*0x4f1f01*/
                   v17,
                   (char **)&v38.vfptr.uniqueId,
                   (int)DSurface_Alternate,
                   v8 + 28,
                   &v38.nextObject,
                   1);
    }
    DeleteAndZero((ObjectClass *)&v38.vfptr.uniqueId); /*0x4f1f07*/
    if ( !Config ) /*0x4f1f0e*/
    {
      v18 = (MSAnim *)operator new(0x3Cu); /*0x4f1f17*/
      if ( v18 ) /*0x4f1f1e*/
      {
        v19 = ((String *)((String *)&v38.vfptr.referenceCount))->GetOrEmpty(); /*0x4f1f24*/
        ((String *)((String *)&v38.vfptr.vfptr2))->Assign(v19); /*0x4f1f2e*/
        v20 = 1; /*0x4f1f33*/
        Config = UI_Load(v18, (const char **)&v38.vfptr.vfptr2, v8 + 28, 1); /*0x4f1f49*/
      }
      else
      {
        v20 = (char)retaddr; /*0x4f1f54*/
        Config = 0; /*0x4f1f5b*/
      }
      if ( (v20 & 1) != 0 ) /*0x4f1f60*/
        DeleteAndZero((ObjectClass *)&v38.vfptr.vfptr2); /*0x4f1f66*/
    }
    goto LABEL_18; /*0x4f1f66*/
  }
  LABEL_22:
  ((String *)((String *)&v38))->Assign(&g_INI_DefaultBuffer); /*0x4f1fab*/
  ((String *)((String *)&v38.vfptr.vfptr1))->Assign(g_INI_Key_Theme); /*0x4f1fc2*/
  abstractFlags = (char **)v38.vfptr.abstractFlags; /*0x4f1fcf*/
  uniqueId = (bool *)v38.vfptr.uniqueId; /*0x4f1fd3*/
  v27 = INIClass::ReadString( /*0x4f1fec*/
          (INIClass *)v38.vfptr.uniqueId,
          (char **)v38.vfptr.abstractFlags,
          (char **)&v38.vfptr.vfptr1,
          (char **)&v38,
          (int)&v38.vfptr.vfptr2) > 0;
  DeleteAndZero((ObjectClass *)&v38.vfptr.vfptr1); /*0x4f1fef*/
  DeleteAndZero(&v38); /*0x4f1ff8*/
  if ( v27 ) /*0x4f1fff*/
    ((String *)((String *)v38.vfptr.referenceCount))->Reassign((const char **)&v38.vfptr.vfptr2); /*0x4f200a*/
  ((String *)((String *)&v38.vfptr.vfptr1))->Assign(aItemmax); /*0x4f2018*/
  Int = INIClass::ReadInt(uniqueId, abstractFlags, (char **)&v38.vfptr.vfptr1, 100); /*0x4f202c*/
  v38.vfptr.referenceCount = Int; /*0x4f2032*/
  DeleteAndZero((ObjectClass *)&v38.vfptr.vfptr1); /*0x4f2036*/
  v29 = 0; /*0x4f203b*/
  if ( Int >= 0 ) /*0x4f203f*/
  {
    do /*0x4f210e*/
    {
      sprintf((char *const)v38.ambientSoundController, "%d", v29); /*0x4f2050*/
      ((String *)((String *)&v38))->Assign(&g_INI_DefaultBuffer); /*0x4f2061*/
      ((String *)((String *)&v38.vfptr.vfptr1))->Assign((const char *)v38.ambientSoundController); /*0x4f206f*/
      v30 = INIClass::ReadString( /*0x4f2099*/
              (INIClass *)v38.vfptr.uniqueId,
              (char **)v38.vfptr.abstractFlags,
              (char **)&v38.vfptr.vfptr1,
              (char **)&v38,
              (int)&v38.vfptr.vfptr2) > 0;
      DeleteAndZero((ObjectClass *)&v38.vfptr.vfptr1); /*0x4f209c*/
      DeleteAndZero(&v38); /*0x4f20a5*/
      if ( v30 ) /*0x4f20ac*/
      {
        v31 = sub_4F38B0((char **)(v38.vfptr.NeedsSaveOrLink + 4), &v38.occupant, (int)p_nextObject, v37); /*0x4f20c6*/
        if ( v31 ) /*0x4f20ca*/
        {
          v32 = v9->Capacity; /*0x4f20cc*/
          if ( v9->Items < v32 /*0x4f20f1*/
            || (v9->IsAllocated || !v32)
            && (v33 = v9->u32_14, v33 > 0)
            && (*(uint8_t (**)(int, int, unsigned int))(v9->Capacity)(v9, v32 + v33, 0) )
          {
            v34 = v9->Items; /*0x4f20f8*/
            v35 = v9->Items; /*0x4f20fb*/
            v9->Items = v34 + 1; /*0x4f2101*/
            *(unsigned int *)(v35 + 4 * v34) = v31; /*0x4f2104*/
          }
        }
      }
      ++v29; /*0x4f210b*/
    }
    while ( v29 <= v38.vfptr.referenceCount ); /*0x4f210e*/
  }
  DeleteAndZero((ObjectClass *)&v38.vfptr.nextArrayIndex); /*0x4f2118*/
  DeleteAndZero((ObjectClass *)&v38.vfptr.vfptr2); /*0x4f2121*/
  return (char **)v38.vfptr.NeedsSaveOrLink; /*0x4f1ccf*/
}
}
// 0x4F2300
namespace gamemd {
ObjectClass * * E4Recv_4F2300::ProcessGraphicMenu()
{
  char *v2; // eax
  int v3; // eax
  State *v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // esi
  uint16_t v8; // ax
  int v10; // ecx
  State *v11; // esi
  int v12; // ecx
  State *v13; // esi
  int v14; // ecx
  ObjectClass *v16; // [esp+Ah] [ebp-44h]
  char v17; // [esp+1Dh] [ebp-31h]
  unsigned int v18[2]; // [esp+1Eh] [ebp-30h] BYREF
  _VectorCursor_PAVGraphicMenuItem_V_DynamicVectorClass_PAVGraphicMenuItem v19; // [esp+26h] [ebp-28h] BYREF
  int v20; // [esp+2Eh] [ebp-20h]
  _VectorCursor_PAVGraphicMenuItem_V_DynamicVectorClass_PAVGraphicMenuItem v21; // [esp+32h] [ebp-1Ch] BYREF
  int v22; // [esp+3Ah] [ebp-14h]
  _VectorCursor_PAVGraphicMenuItem_V_DynamicVectorClass_PAVGraphicMenuItem v23; // [esp+3Eh] [ebp-10h] BYREF
  int v24; // [esp+46h] [ebp-8h]

  v2 = ((String *)((String *)this->q132 + 14)))->GetOrEmpty(); /*0x4f230c*/
  v3 = StringList::Find((StringList *)&unk_A83D10, v2); /*0x4f2317*/
  ThemeClass::Play((ThemeClass *)&unk_A83D10, v3); /*0x4f2322*/
  (*((void (**)(DSurface *, unsigned int))DSurface_Alternate->DSurface_field_0x0 + 6))(DSurface_Alternate, 0); /*0x4f2331*/
  (*((void (**)(ObjectClass *, unsigned int))g_DSurface_Hidden->vfptr + 6))(g_DSurface_Hidden, 0); /*0x4f233e*/
  (*((void (**)(DSurface *, ObjectClass *, unsigned int, int))g_DSurface_Primary + 1))( /*0x4f2354*/
    g_DSurface_Primary,
    g_DSurface_Hidden,
    0,
    1);
  v17 = 0; /*0x4f235d*/
  v4 = 0; /*0x4f2362*/
  Timer::PumpMessages(*(Timer **)&g_BinkMoviePlayer); /*0x4f2364*/
  v5 = this->M84; /*0x4f2369*/
  if ( v5 ) /*0x4f236e*/
    MSEngine::ProcessEvents((MSEngine *)this->vfptr + 16), v5, 300000); /*0x4f2379*/
  v6 = (*((int (**)(DSurface *, _VectorCursor_PAVGraphicMenuItem_V_DynamicVectorClass_PAVGraphicMenuItem *))DSurface_Alternate->u32_78 /*0x4f238e*/
        + 30))(
         DSurface_Alternate,
         &v23);
  ((Team *)((Team *)this->vfptr + 16)))->ReleaseAll(v6); /*0x4f2394*/
  DSurface::Flip2(); /*0x4f239b*/
  do /*0x4f25fd*/
  {
    (*(void (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x4f23a8*/
    DDraw::HandleSuspend((DDraw *)this->vfptr + 16)); /*0x4f23ad*/
    (*(void (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x4f23ba*/
    v7 = (*(int (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 48))(stru_887598.lineTrailer); /*0x4f23ce*/
    v18[0] = (*(int (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 44))(stru_887598.lineTrailer); /*0x4f23db*/
    v18[1] = v7; /*0x4f23df*/
    if ( EventQueue::Process(*(EventQueue **)&g_BinkMoviePlayer) ) /*0x4f23e3*/
    {
      v8 = EventQueue::Read(*(EventQueue **)&g_BinkMoviePlayer); /*0x4f23f7*/
      v8 = v8; /*0x4f23ff*/
      if ( v8 == 1 || v8 == 13 ) /*0x4f2411*/
      {
        v11 = 0; /*0x4f24a7*/
        *(unsigned int *)&v21.m_1[3] = this->M84 + 4); /*0x4f24a9*/
        v22 = 0; /*0x4f24b1*/
        *(unsigned int *)v21.__pad_0 = &vt_VectorCursorGraphicMenuItemDynamicVectorClass; /*0x4f24b5*/
        if ( Map::CanScroll(&v21) ) /*0x4f24bd*/
        {
          do /*0x4f24f6*/
          {
            v12 = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&v21.m_1[3] + 4) + 4 * v22); /*0x4f24d2*/
            if ( (*(uint8_t (**)(int, unsigned int *))(*(unsigned int *)v12 + 8))(v12, v18) ) /*0x4f24dc*/
              break; /*0x4f24e1*/
            (*(void (**)(_VectorCursor_PAVGraphicMenuItem_V_DynamicVectorClass_PAVGraphicMenuItem *))(*(unsigned int *)v21.__pad_0 + 8))(&v21); /*0x4f24eb*/
          }
          while ( (*(uint8_t (**)(_VectorCursor_PAVGraphicMenuItem_V_DynamicVectorClass_PAVGraphicMenuItem *))(*(unsigned int *)v21.__pad_0 + 4))(&v21) ); /*0x4f24f6*/
        }
        if ( (*(uint8_t (**)(_VectorCursor_PAVGraphicMenuItem_V_DynamicVectorClass_PAVGraphicMenuItem *))(*(unsigned int *)v21.__pad_0 + 4))(&v21) ) /*0x4f2505*/
          v11 = *(State **)(*(unsigned int *)(*(unsigned int *)&v21.m_1[3] + 4) + 4 * v22); /*0x4f2517*/
        *(unsigned int *)v21.__pad_0 = &vt_VectorCursorGraphicMenuItemDynamicVectorClass; /*0x4f251a*/
      }
      else
      {
        *(unsigned int *)&v19.m_1[3] = this->M84 + 4); /*0x4f241e*/
        v20 = 0; /*0x4f2422*/
        *(unsigned int *)v19.__pad_0 = &vt_VectorCursorGraphicMenuItemDynamicVectorClass; /*0x4f242a*/
        if ( Map::CanScroll(&v19) ) /*0x4f2432*/
        {
          do /*0x4f2467*/
          {
            v10 = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&v19.m_1[3] + 4) + 4 * v20); /*0x4f2448*/
            if ( (*(uint8_t (**)(int, int))(*(unsigned int *)v10 + 4))(v10, v8) ) /*0x4f244d*/
              break; /*0x4f2452*/
            (*(void (**)(_VectorCursor_PAVGraphicMenuItem_V_DynamicVectorClass_PAVGraphicMenuItem *))(*(unsigned int *)v19.__pad_0 + 8))(&v19); /*0x4f245c*/
          }
          while ( (*(uint8_t (**)(_VectorCursor_PAVGraphicMenuItem_V_DynamicVectorClass_PAVGraphicMenuItem *))(*(unsigned int *)v19.__pad_0 + 4))(&v19) ); /*0x4f2467*/
        }
        if ( (*(uint8_t (**)(_VectorCursor_PAVGraphicMenuItem_V_DynamicVectorClass_PAVGraphicMenuItem *))(*(unsigned int *)v19.__pad_0 + 4))(&v19) ) /*0x4f2476*/
          v11 = *(State **)(*(unsigned int *)(*(unsigned int *)&v19.m_1[3] + 4) + 4 * v20); /*0x4f2488*/
        else
          v11 = 0; /*0x4f2498*/
        *(unsigned int *)v19.__pad_0 = &vt_VectorCursorGraphicMenuItemDynamicVectorClass; /*0x4f248b*/
      }
      if ( v11 ) /*0x4f2524*/
      {
        if ( v4 != v11 ) /*0x4f252c*/
        {
          if ( v4 ) /*0x4f2530*/
            State::SetIfChanged(v4, 0); /*0x4f2536*/
          v4 = v11; /*0x4f253f*/
          State::SetIfChanged(v11, 1); /*0x4f2541*/
        }
        v17 = 1; /*0x4f2546*/
      }
    }
    else
    {
      v13 = 0; /*0x4f2553*/
      *(unsigned int *)&v23.m_1[3] = this->M84 + 4); /*0x4f2559*/
      v24 = 0; /*0x4f255d*/
      *(unsigned int *)v23.__pad_0 = &vt_VectorCursorGraphicMenuItemDynamicVectorClass; /*0x4f2561*/
      if ( Map::CanScroll(&v23) ) /*0x4f2569*/
      {
        do /*0x4f25a2*/
        {
          v14 = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&v23.m_1[3] + 4) + 4 * v24); /*0x4f257e*/
          if ( (*(uint8_t (**)(int, unsigned int *))(*(unsigned int *)v14 + 8))(v14, v18) ) /*0x4f2588*/
            break; /*0x4f258d*/
          (*(void (**)(_VectorCursor_PAVGraphicMenuItem_V_DynamicVectorClass_PAVGraphicMenuItem *))(*(unsigned int *)v23.__pad_0 + 8))(&v23); /*0x4f2597*/
        }
        while ( (*(uint8_t (**)(_VectorCursor_PAVGraphicMenuItem_V_DynamicVectorClass_PAVGraphicMenuItem *))(*(unsigned int *)v23.__pad_0 + 4))(&v23) ); /*0x4f25a2*/
      }
      if ( (*(uint8_t (**)(_VectorCursor_PAVGraphicMenuItem_V_DynamicVectorClass_PAVGraphicMenuItem *))(*(unsigned int *)v23.__pad_0 + 4))(&v23) ) /*0x4f25b1*/
        v13 = *(State **)(*(unsigned int *)(*(unsigned int *)&v23.m_1[3] + 4) + 4 * v24); /*0x4f25c3*/
      *(unsigned int *)v23.__pad_0 = &vt_VectorCursorGraphicMenuItemDynamicVectorClass; /*0x4f25c8*/
      if ( v13 != v4 ) /*0x4f25d0*/
      {
        if ( v4 ) /*0x4f25d4*/
          State::SetIfChanged(v4, 0); /*0x4f25da*/
        v4 = v13; /*0x4f25e1*/
        if ( v13 ) /*0x4f25e3*/
          State::SetIfChanged(v13, 1); /*0x4f25e9*/
      }
    }
    GameClass::FrameLoop((GameClass *)this->vfptr + 16), 1); /*0x4f25f2*/
  }
  while ( !v17 ); /*0x4f25fd*/
  if ( v4 ) /*0x4f2605*/
    (*(void (**)(State *, int))(*(unsigned int *)v4->ConstructorWithVtable + 12))(v4, this->vfptr + 4)); /*0x4f260c*/
  UI_Process(v16); /*0x4f260f*/
  Theme::QueueSong((int)&unk_A83D10, -3); /*0x4f261b*/
  if ( v4 ) /*0x4f2622*/
    return v4->Players; /*0x4f2624*/
  else
    return -1; /*0x4f2632*/
}
}
// 0x4F2640
namespace gamemd {
int E4Recv_4F2640::sub_4F2640(int (***a2)(unsigned int, int))
{

  int (***v3)(unsigned int, int); // eax
  int result; // eax

  v3 = (int (***)(unsigned int, int))this->customSound_controller[1]; /*0x4f2648*/
  if ( v3 ) /*0x4f264e*/
    result = UI_Load_5D1C90this->ptr_4, v3, a2); /*0x4f2654*/
  else
    result = PriorityQueue::Add((int)(&this->ptr_4), (int)a2); /*0x4f2664*/
  this->customSound_controller[1] = (int)a2; /*0x4f2659*/
  return result; /*0x4f265c*/

}
}
// 0x4F2C70
namespace gamemd {
int ParseINIAnimGadgetDefinition(void * a2, void * a4, void * a3, void * aOrigin)
{
  int Int; // ebx
  int *v8; // ebp
  int *CoordPair; // eax
  int v10; // ecx
  int v11; // eax
  unsigned int *vtable0; // ebx
  int v13; // ecx
  int v14; // edx
  int *Rect; // eax
  uint8_t *v16; // eax
  int v17; // esi
  GraphicMenuAnimItem *v18; // eax
  String v19; // [esp+Ch] [ebp-38h] BYREF
  String v20; // [esp+14h] [ebp-30h] BYREF
  String v21; // [esp+24h] [ebp-20h] BYREF
  int v22; // [esp+2Ch] [ebp-18h] BYREF
  int v23; // [esp+30h] [ebp-14h]
  int v24; // [esp+34h] [ebp-10h] BYREF
  int v25; // [esp+38h] [ebp-Ch]
  int v26; // [esp+3Ch] [ebp-8h]
  int v27; // [esp+40h] [ebp-4h]

  ((String *)(&v20))->Assign((const char *)(ValueName)); /*0x4f2c83*/
  Int = INIClass::ReadInt((bool *)a2->__pad_0, Source, (char **)&v20, -1); /*0x4f2c97*/
  *(unsigned int *)&v21.headNode = Int; /*0x4f2c9d*/
  DeleteAndZero((ObjectClass *)&v20); /*0x4f2ca1*/
  if ( Int == -1 ) /*0x4f2ca9*/
    return 0; /*0x4f2cad*/
  unknown_libname_73(&v19); /*0x4f2cba*/
  ((String *)(&v21))->Assign((const char *)(&g_INI_DefaultBuffer)); /*0x4f2cc8*/
  ((String *)(&v20))->Assign(g_INI_Key_Image); /*0x4f2cd6*/
  ((INIClass *)(a2))->ReadString((char **)(Source), (char **)&v20, (char **)&v21, (int)&v19); /*0x4f2ced*/
  DeleteAndZero((ObjectClass *)&v20); /*0x4f2cf6*/
  DeleteAndZero((ObjectClass *)&v21); /*0x4f2cff*/
  if ( String::Length(&v19) ) /*0x4f2d08*/
  {
    unknown_libname_73(&v19.ptr_4); /*0x4f2d29*/
    ((String *)(&v20))->Assign((const char *)(&g_INI_DefaultBuffer)); /*0x4f2d37*/
    ((String *)(&v21))->Assign(g_INI_Key_Palette); /*0x4f2d45*/
    ((INIClass *)(a2))->ReadString((char **)(Source), (char **)&v21, (char **)&v20, (int)&v19.ptr_4); /*0x4f2d5c*/
    DeleteAndZero((ObjectClass *)&v21); /*0x4f2d65*/
    DeleteAndZero((ObjectClass *)&v20); /*0x4f2d6e*/
    if ( String::Length((String *)&v19.ptr_4) ) /*0x4f2d77*/
    {
      v8 = 0; /*0x4f2d9e*/
      v22 = 0; /*0x4f2da9*/
      v23 = 0; /*0x4f2dad*/
      ((String *)(&v21))->Assign((const char *)(aOrigin)); /*0x4f2db1*/
      CoordPair = (int *)(INIClass::GetCoordPair(a2, &v20, (char *)Source, (char **)&v21, &v22)); /*0x4f2dc8*/
      v10 = *CoordPair; /*0x4f2dcd*/
      v11 = CoordPair->headNode; /*0x4f2dcf*/
      v22 = v10; /*0x4f2dd2*/
      v23 = v11; /*0x4f2dda*/
      DeleteAndZero((ObjectClass *)&v21); /*0x4f2dde*/
      vtable0 = a4.vfptr; /*0x4f2de3*/
      v13 = *(unsigned int *)a4.vfptr; /*0x4f2df4*/
      v24 = 0; /*0x4f2df6*/
      v22 += v13; /*0x4f2e00*/
      v14 = *((unsigned int *)a4.vfptr + 1); /*0x4f2e04*/
      v25 = 0; /*0x4f2e09*/
      v23 += v14; /*0x4f2e0d*/
      v26 = 0; /*0x4f2e11*/
      v27 = 0; /*0x4f2e15*/
      ((String *)((String *)&a4))->Assign(aActiverect); /*0x4f2e19*/
      Rect = (int *)(INIClass::GetRect(a2, &v20, Source, (char **)&a4, &v24)); /*0x4f2e30*/
      v24 = *Rect; /*0x4f2e37*/
      v25 = Rect[1]; /*0x4f2e3e*/
      v26 = Rect[2]; /*0x4f2e45*/
      v27 = Rect[3]; /*0x4f2e50*/
      DeleteAndZero(&a4); /*0x4f2e54*/
      v24 += *vtable0; /*0x4f2e65*/
      v25 += vtable0->vtable2; /*0x4f2e77*/
      v16 = (uint8_t *)((String *)((String *)Source))->GetOrEmpty_Alt(); /*0x4f2e7b*/
      v21.q000 = INIClass::ReadBool_Overwrite((int *)a2->__pad_0, v16, aLoop, 1); /*0x4f2e91*/
      ((String *)((String *)&a4))->Assign((const char *)(g_INI_Key_Rate)); /*0x4f2e95*/
      v17 = INIClass::ReadInt((bool *)a2->__pad_0, Source, (char **)&a4, 5); /*0x4f2ead*/
      DeleteAndZero(&a4); /*0x4f2eaf*/
      v18 = (GraphicMenuAnimItem *)operator new(0x28u); /*0x4f2eb6*/
      if ( v18 ) /*0x4f2ec0*/
                v8 = sub_4F2F10((int)(/*0x4f2eed*/                v18),                *(int *)&v21.headNode,                a3,                &v22,                &v24,                (char **)&v19,                (char **)&v19.ptr_4,                v17,                v21.q000);
      DeleteAndZero((ObjectClass *)&v19.ptr_4); /*0x4f2ef3*/
      DeleteAndZero((ObjectClass *)&v19); /*0x4f2efc*/
      return v8; /*0x4f2f01*/
    }
    else
    {
      DeleteAndZero((ObjectClass *)&v19.ptr_4); /*0x4f2d84*/
      DeleteAndZero((ObjectClass *)&v19); /*0x4f2d8d*/
      return 0; /*0x4f2d92*/
    }
  }
  else
  {
    DeleteAndZero((ObjectClass *)&v19); /*0x4f2d15*/
    return 0; /*0x4f2d1a*/
  }
}
}
// 0x4F3140
namespace gamemd {
ReferenceCounted * * ParseINIGadgetDefinition(ObjectClass * aP0, ObjectClass * a2, unsigned int * a3, ObjectClass)
{
  int Int; // ebx
  int v8; // ebp
  int *CoordPair; // eax
  int v10; // ecx
  int v11; // eax
  unsigned int *vtable0; // ebx
  int v13; // ecx
  int v14; // edx
  int *Rect; // eax
  int v16; // eax
  void *v17; // [esp+Ch] [ebp-44h] BYREF
  void *v18; // [esp+10h] [ebp-40h] BYREF
  void *v19; // [esp+14h] [ebp-3Ch] BYREF
  void *v20; // [esp+18h] [ebp-38h] BYREF
  void *v21; // [esp+1Ch] [ebp-34h] BYREF
  String v22; // [esp+20h] [ebp-30h] BYREF
  int v23; // [esp+28h] [ebp-28h] BYREF
  int v24; // [esp+2Ch] [ebp-24h]
  int v25[4]; // [esp+30h] [ebp-20h] BYREF
  int v26; // [esp+40h] [ebp-10h] BYREF
  int v27; // [esp+44h] [ebp-Ch]
  int v28; // [esp+48h] [ebp-8h]
  int v29; // [esp+4Ch] [ebp-4h]

  ((String *)(&v22))->Assign(ValueName); /*0x4f3153*/
  Int = INIClass::ReadInt((bool *)a2->vtable1, Source, (char **)&v22, -1); /*0x4f3167*/
  *(unsigned int *)&v22.vtable2 = Int; /*0x4f316d*/
  DeleteAndZero((ObjectClass *)&v22); /*0x4f3171*/
  if ( Int == -1 ) /*0x4f3179*/
    return 0; /*0x4f317d*/
  v8 = 0; /*0x4f3187*/
  v23 = 0; /*0x4f3192*/
  v24 = 0; /*0x4f3196*/
  ((String *)(&v22))->Assign(aOrigin); /*0x4f319a*/
  CoordPair = INIClass::GetCoordPair(a2, v25, (char *)Source, (char **)&v22, &v23); /*0x4f31b1*/
  v10 = *CoordPair; /*0x4f31b6*/
  v11 = CoordPair->headNode; /*0x4f31b8*/
  v23 = v10; /*0x4f31bb*/
  v24 = v11; /*0x4f31c3*/
  DeleteAndZero((ObjectClass *)&v22); /*0x4f31c7*/
  vtable0 = a4.vfptr; /*0x4f31cc*/
  v13 = *(unsigned int *)a4.vfptr; /*0x4f31dd*/
  v26 = 0; /*0x4f31df*/
  v23 += v13; /*0x4f31e9*/
  v14 = *((unsigned int *)a4.vfptr + 1); /*0x4f31ed*/
  v27 = 0; /*0x4f31f2*/
  v24 += v14; /*0x4f31f6*/
  v28 = 0; /*0x4f31fa*/
  v29 = 0; /*0x4f31fe*/
  ((String *)((String *)&a4))->Assign(aActiverect); /*0x4f3202*/
  Rect = INIClass::GetRect(a2, v25, Source, (char **)&a4, &v26); /*0x4f3219*/
  v26 = *Rect; /*0x4f3220*/
  v27 = Rect[1]; /*0x4f3227*/
  v28 = Rect[2]; /*0x4f322e*/
  v29 = Rect[3]; /*0x4f3239*/
  DeleteAndZero(&a4); /*0x4f323d*/
  v26 += *vtable0; /*0x4f324e*/
  v27 += vtable0->vtable2; /*0x4f325b*/
  unknown_libname_73(&v21); /*0x4f325f*/
  unknown_libname_73(&v20); /*0x4f3268*/
  unknown_libname_73(&v19); /*0x4f3271*/
  ((String *)(&v22))->Assign(&g_INI_DefaultBuffer); /*0x4f327f*/
  ((String *)((String *)&a4))->Assign(g_INI_Key_Image); /*0x4f328d*/
  ((INIClass *)(a2))->ReadString(Source, (char **)&a4, (char **)&v22, (int)&v21); /*0x4f32a4*/
  DeleteAndZero(&a4); /*0x4f32ad*/
  DeleteAndZero((ObjectClass *)&v22); /*0x4f32b6*/
  ((String *)(&v22))->Assign(&g_INI_DefaultBuffer); /*0x4f32c4*/
  ((String *)((String *)&a4))->Assign(aHighlighted); /*0x4f32d2*/
  ((INIClass *)(a2))->ReadString(Source, (char **)&a4, (char **)&v22, (int)&v20); /*0x4f32e9*/
  DeleteAndZero(&a4); /*0x4f32f2*/
  DeleteAndZero((ObjectClass *)&v22); /*0x4f32fb*/
  ((String *)(&v22))->Assign(&g_INI_DefaultBuffer); /*0x4f3309*/
  ((String *)((String *)&a4))->Assign(aDisabled); /*0x4f3317*/
  ((INIClass *)(a2))->ReadString(Source, (char **)&a4, (char **)&v22, (int)&v19); /*0x4f332e*/
  DeleteAndZero(&a4); /*0x4f3337*/
  DeleteAndZero((ObjectClass *)&v22); /*0x4f3340*/
  unknown_libname_73(&v18); /*0x4f3349*/
  ((String *)(&v22))->Assign(&g_INI_DefaultBuffer); /*0x4f3357*/
  ((String *)((String *)&a4))->Assign(aHighlightsound); /*0x4f3365*/
  ((INIClass *)(a2))->ReadString(Source, (char **)&a4, (char **)&v22, (int)&v18); /*0x4f337c*/
  DeleteAndZero(&a4); /*0x4f3385*/
  DeleteAndZero((ObjectClass *)&v22); /*0x4f338e*/
  unknown_libname_73(&v17); /*0x4f3397*/
  ((String *)(&v22))->Assign(&g_INI_DefaultBuffer); /*0x4f33a5*/
  ((String *)((String *)&a4))->Assign(aSelectvq); /*0x4f33b3*/
  ((INIClass *)(a2))->ReadString(Source, (char **)&a4, (char **)&v22, (int)&v17); /*0x4f33ca*/
  DeleteAndZero(&a4); /*0x4f33d3*/
  DeleteAndZero((ObjectClass *)&v22); /*0x4f33dc*/
  v16 = operator new(0x38u); /*0x4f33e3*/
  if ( v16 ) /*0x4f33ed*/
    v8 = sub_4F3460( /*0x4f3423*/
           v16,
           *(int *)&v22.q054,
           a3,
           &v23,
           &v26,
           (const char **)&v21,
           (const char **)&v20,
           (const char **)&v19,
           (const char **)&v18,
           (const char **)&v17);
  DeleteAndZero((ObjectClass *)&v17); /*0x4f3429*/
  DeleteAndZero((ObjectClass *)&v18); /*0x4f3432*/
  DeleteAndZero((ObjectClass *)&v19); /*0x4f343b*/
  DeleteAndZero((ObjectClass *)&v20); /*0x4f3444*/
  DeleteAndZero((ObjectClass *)&v21); /*0x4f344d*/
  return v8; /*0x4f317b*/
}
}
// 0x4F3460
namespace gamemd {
MSAnim * * E4Recv_4F3460::sub_4F3460(int a2, ReferenceCounted * a3, unsigned int * a4, ReferenceCounted * a5, const char ** a6, ReferenceCounted * a7, const char ** a8, ReferenceCounted * a9, const char ** a10)
{
  char v10; // bl
  int v14; // edx
  int v16; // eax
  unsigned int v18; // eax
  unsigned int *v20; // eax
  unsigned int *v21; // eax
  unsigned int *v23; // eax
  unsigned int *v24; // eax
  unsigned int *v26; // eax
  unsigned int *v27; // eax

  v10 = 0; /*0x4f3469*/
  GraphicMenuItem::Constructor(a2); /*0x4f3472*/
  a3 = a3; /*0x4f3477*/
  a5 = a5; /*0x4f347b*/
  this->u32_4 = a3; /*0x4f347f*/
  this->u32_14 = *a5; /*0x4f3487*/
  this->u32_18 = a5[1]; /*0x4f348c*/
  this->u32_1C = a5[2]; /*0x4f3492*/
  v14 = a5[3]; /*0x4f3495*/
  this->q024 = 0; /*0x4f3498*/
  this->q020 = v14; /*0x4f349b*/
  this->q028 = 0; /*0x4f34a1*/
  this->M44 = 0; /*0x4f34a4*/
  this->M48 = 0; /*0x4f34a7*/
  unknown_libname_73this->q084 + 76); /*0x4f34aa*/
  a9 = a9; /*0x4f34af*/
  /* X11: vtable install elided (implicit via GraphicMenuImageItem virtuals 0x4f34b3) */
  if ( String::Length(a9) && (a3 = operator new(0x10u)) != 0 ) /*0x4f34d4*/
  {
    ((String *)((char **)&a2))->Assign(aHighlightsound); /*0x4f34df*/
    v10 = 1; /*0x4f34ee*/
    v16 = Audio::ParseVolume((int)a3, (const char **)&a2, a9); /*0x4f34f3*/
  }
  else
  {
    v16 = 0; /*0x4f34fa*/
  }
  this->M48 = v16; /*0x4f34ff*/
  if ( (v10 & 1) != 0 ) /*0x4f3502*/
    DeleteAndZero((void **)&a2); /*0x4f3508*/
  ((String *)((char **)this->q084 + 76)))->Reassign(a10); /*0x4f3515*/
  a7 = a7; /*0x4f351a*/
  v18 = String::Length(a7); /*0x4f3520*/
  a4 = a4; /*0x4f3525*/
  if ( v18 )
  {
    v20 = operator new(0x3Cu); /*0x4f352f*/
    v21 = v20 ? MSPCXAnim::Construct(v20, a7, (int)(a3 + 6), a4, 1) : 0;
    this->q028 = v21; /*0x4f3550*/
    if ( v21 ) /*0x4f3553*/
    {
      (*(void (**)(unsigned int *, unsigned int))(*v21 + 4))(v21, 0); /*0x4f355b*/
      ((PriorityQueue *)(a3))->Add(this->q028); /*0x4f3564*/
    }
  }
  a6 = a6; /*0x4f3569*/
  if ( String::Length(a6) )
  {
    v23 = operator new(0x3Cu); /*0x4f357a*/
    v24 = v23 ? MSPCXAnim::Construct(v23, a6, (int)(a3 + 6), a4, 1) : 0;
    this->q024 = v24; /*0x4f359b*/
    if ( v24 ) /*0x4f359e*/
      ((PriorityQueue *)(a3))->Add((int)v24); /*0x4f35a3*/
  }
  a8 = a8; /*0x4f35a8*/
  if ( String::Length(a8) ) /*0x4f35ae*/
  {
    v26 = operator new(0x3Cu); /*0x4f35b9*/
    if ( v26 ) /*0x4f35c3*/
      v27 = MSPCXAnim::Construct(v26, a8, (int)(a3 + 6), a4, 1); /*0x4f35cf*/
    else
      v27 = 0; /*0x4f35d6*/
    this->M44 = v27; /*0x4f35da*/
    if ( v27 ) /*0x4f35dd*/
    {
      v27->AddRef(0); /*0x4f35e5*/
      ((PriorityQueue *)(a3))->Add(this->M44); /*0x4f35ee*/
    }
  }
  return this; /*0x4f35f5*/
}
}
// 0x4F38B0
namespace gamemd {
unsigned int * sub_4F38B0(char ** Source, bool * a2, char * a3, char * a4)
{
    unsigned int *v6; // ebp
    unsigned int *v7; // eax
    bool v8; // bl
    int v9; // esi
    char v10; // bl
    int v11; // eax
    char *v13; // [esp+Ch] [ebp-10h] BYREF
    char *v14; // [esp+10h] [ebp-Ch] BYREF
    char *v15; // [esp+14h] [ebp-8h] BYREF
    int v16; // [esp+18h] [ebp-4h]

    v16 = 0; /*0x4f38be*/
    unknown_libname_73( (void *)(&v13)); /*0x4f38c6*/
    ((String *)&v15)->Assign( (const char *)(&g_INI_DefaultBuffer)); /*0x4f38d4*/
    ((String *)&v14)->Assign( (const char *)(g_INI_Key_Type)); /*0x4f38e2*/
    ((INIClass *)a2)->ReadString( (char **)(Source), (char **)(&v14), (char **)(&v15), (int)&v13); /*0x4f38f9*/
    j_DeleteAndZero( (void *)((void **)&v14)); /*0x4f3902*/
    j_DeleteAndZero( (void *)((void **)&v15)); /*0x4f390b*/
    v6 = (unsigned int *)(0); /*0x4f3914*/
    if ( (uint8_t)((String *)(const char **)&v13)->Equals_Alt( (const char *)(g_INI_Key_Image)) ) /*0x4f391b*/
    {
      v7 = (unsigned int *)ParseINIGadgetDefinition((gamemd::ObjectClass *)(Source),(gamemd::ObjectClass *)( a2),(unsigned int *)( a3), (gamemd::ObjectClass)(a4)); /*0x4f3932*/
    }
    else if ( (uint8_t)((String *)(const char **)&v13)->Equals_Alt( aShortcut) ) /*0x4f3942*/
    {
      v7 = (unsigned int *)(sub_4F3B80(Source, a2)); /*0x4f394f*/
    }
    else
    {
      if ( !(uint8_t)((String *)(const char **)&v13)->Equals_Alt( (const char *)(aAnim_0)) ) /*0x4f3966*/
        goto LABEL_15; /*0x4f3966*/
      v7 = (unsigned int *)(ParseINIAnimGadgetDefinition(Source, a2, a3, a4)); /*0x4f397a*/
    }
    v6 = v7; /*0x4f397f*/
    if ( v7 ) /*0x4f3983*/
    {
      unknown_libname_73( (void *)(&a4)); /*0x4f398e*/
      ((String *)&v15)->Assign( (const char *)(&g_INI_DefaultBuffer)); /*0x4f399c*/
      ((String *)&a3)->Assign( aSelectsound); /*0x4f39aa*/
      v8 = ((INIClass *)a2)->ReadString( (char **)(Source), (char **)(&a3), (char **)(&v15), (int)&a4) > 0; /*0x4f39cc*/
      j_DeleteAndZero( (void *)((void **)&a3)); /*0x4f39cf*/
      j_DeleteAndZero( (void *)((void **)&v15)); /*0x4f39d8*/
      if ( v8 ) /*0x4f39df*/
      {
        v9 = (int)(operator new(0x10u)); /*0x4f39e8*/
        if ( v9 ) /*0x4f39ef*/
        {
          ((String *)&a3)->Assign( aSelectsound); /*0x4f39fa*/
          v10 = 1; /*0x4f3a0b*/
          v11 = (int)(((Audio *)v9)->ParseVolume( (const char **)&a3, (ObjectClass *)((const char **)&a4))); /*0x4f3a10*/
        }
        else
        {
          v10 = v16; /*0x4f3a17*/
          v11 = 0; /*0x4f3a1b*/
        }
        v6->u32_C = v11; /*0x4f3a20*/
        if ( (v10 & 1) != 0 ) /*0x4f3a23*/
          j_DeleteAndZero( (void *)((void **)&a3)); /*0x4f3a29*/
      }
      j_DeleteAndZero( (void *)((void **)&a4)); /*0x4f3a32*/
    }
  LABEL_15:
    j_DeleteAndZero( (void *)((void **)&v13)); /*0x4f3a38*/
    return v6; /*0x4f3a43*/
}
}
// 0x4F3AB0
namespace gamemd {
int E4Recv_4F3AB0::sub_4F3AB0(int a2)
{

  int result; // eax
  int (**vtable0)(int); // edx

  result = a2; /*0x4f3ab0*/
  if ( (unsigned char)a2 != BYTE1(this->M9) ) /*0x4f3ab9*/
  {
    vtable0 = (int (**)(int))this->AbstractClass; /*0x4f3abb*/
    BYTE1(this->M9) = a2; /*0x4f3abe*/
    return vtable0[5](a2); /*0x4f3ac1*/
  }
  return result; /*0x4f3ac4*/

}
}
// 0x4F3B80
namespace gamemd {
unsigned int * sub_4F3B80(ObjectClass * a1, ObjectClass * edx0)
{
  char **v4; // eax
  int Int; // ebx
  ObjectClass *v7; // eax
  unsigned int *v8; // esi
  char *v9; // [esp+Ch] [ebp-Ch] BYREF
  String v10; // [esp+10h] [ebp-8h] BYREF

  v4 = ((String *)((String *)&v10.vtable2))->Assign(ValueName); /*0x4f3b95*/
  Int = INIClass::ReadInt((bool *)edx0->vtable1, a1, v4, -1); /*0x4f3ba7*/
  DeleteAndZero((ObjectClass *)&v10.vtable2); /*0x4f3ba9*/
  if ( Int == -1 ) /*0x4f3bb1*/
    return 0; /*0x4f3bb5*/
  unknown_libname_73(&v9); /*0x4f3bc0*/
  ((String *)((String *)&v10.vtable2))->Assign(&g_INI_DefaultBuffer); /*0x4f3bce*/
  ((String *)(&v10))->Assign(aKeys); /*0x4f3bdc*/
  ((INIClass *)(edx0))->ReadString(a1, (char **)&v10, (char **)&v10.vtable2, (int)&v9); /*0x4f3bf3*/
  DeleteAndZero((ObjectClass *)&v10); /*0x4f3bfc*/
  DeleteAndZero((ObjectClass *)&v10.vtable2); /*0x4f3c05*/
  v7 = (ObjectClass *)operator new(0x28u); /*0x4f3c0c*/
  if ( v7 ) /*0x4f3c16*/
    v8 = sub_4F3C40(v7, Int, (const char **)&v9); /*0x4f3c25*/
  else
    v8 = 0; /*0x4f3c29*/
  DeleteAndZero((ObjectClass *)&v9); /*0x4f3c2f*/
  return v8; /*0x4f3bb3*/
}
}
// 0x4F3D40
namespace gamemd {
int E4Recv_4F3D40::sub_4F3D40()
{
  int v1; // ebx
  int v2; // eax
  int v3; // edi
  const char **v4; // esi
  int v5; // ebx
  int v7; // eax
  String v8; // [esp+Ch] [ebp-8h] BYREF

  v1 = 0; /*0x4f3d4b*/
  String::AssignFromPtr(&v8, (const char **)this); /*0x4f3d4d*/
  ((String *)(&v8))->ToLower(); /*0x4f3d56*/
  String::AssignFromPtr((String *)&v8.ptr_4, (const char **)&v8); /*0x4f3d64*/
  String::CopyTruncated((String *)&v8.ptr_4, 5u); /*0x4f3d6f*/
  if ( (uint8_t)((String *)((String *)&v8.ptr_4))->Equals_Alt(aCtrl) ) /*0x4f3d7d*/
  {
    v1 = 512; /*0x4f3d8e*/
    String::Erase(&v8, 0, 5); /*0x4f3d93*/
  }
  ((String *)((String *)&v8.ptr_4))->Reassign((const char **)&v8); /*0x4f3da1*/
  String::CopyTruncated((String *)&v8.ptr_4, 4u); /*0x4f3dac*/
  if ( (uint8_t)((String *)((String *)&v8.ptr_4))->Equals_Alt(aAlt) ) /*0x4f3dba*/
  {
    (((unsigned char *)&(v1))[1]) |= 4u; /*0x4f3dcb*/
    String::Erase(&v8, 0, 4); /*0x4f3dce*/
  }
  ((String *)((String *)&v8.ptr_4))->Reassign((const char **)&v8); /*0x4f3ddc*/
  String::CopyTruncated((String *)&v8.ptr_4, 6u); /*0x4f3de7*/
  if ( (uint8_t)((String *)((String *)&v8.ptr_4))->Equals_Alt(aShift) ) /*0x4f3df5*/
  {
    (((unsigned char *)&(v1))[1]) |= 1u; /*0x4f3e06*/
    String::Erase(&v8, 0, 6); /*0x4f3e09*/
  }
  v2 = String::Length(&v8); /*0x4f3e12*/
  if ( v2 ) /*0x4f3e1a*/
  {
    if ( v2 == 1 ) /*0x4f3e1d*/
    {
      v7 = sub_7B5410((ObjectClass *)&v8, 0) - 32; /*0x4f3e7d*/
    }
    else
    {
      v3 = 1; /*0x4f3e1f*/
      v4 = (const char **)&off_824328; /*0x4f3e24*/
      while ( (uint8_t)String::NotEquals(&v8, *v4) ) /*0x4f3e37*/
      {
        v4 -= 2; /*0x4f3e39*/
        --v3; /*0x4f3e3c*/
        if ( (int)v4 < (int)&off_824320 ) /*0x4f3e43*/
          goto LABEL_12; /*0x4f3e43*/
      }
      if ( v3 < 0 ) /*0x4f3e64*/
        goto LABEL_12; /*0x4f3e64*/
      v7 = dword_824324[2 * v3]; /*0x4f3e66*/
    }
    if ( v7 ) /*0x4f3e82*/
    {
      v5 = v7 | v1; /*0x4f3e84*/
      goto LABEL_13; /*0x4f3e86*/
    }
  }
  LABEL_12:
  v5 = 0; /*0x4f3e45*/
  LABEL_13:
  DeleteAndZero((ObjectClass *)&v8.ptr_4); /*0x4f3e47*/
  DeleteAndZero((ObjectClass *)&v8); /*0x4f3e54*/
  return v5; /*0x4f3e5b*/
}
}
// 0x4F4E53
namespace gamemd {
unsigned char * sub_4F4E53(unsigned char * result, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // edi
  int16_t v8; // cx
  int v9; // edx

  v7 = a2; /*0x4f4e5a*/
  do /*0x4f4ea3*/
  {
    v8 = 0; /*0x4f4e5e*/
    if ( !*result && !a7 ) /*0x4f4e66*/
      v8 = 0x8000; /*0x4f4e68*/
    (*((unsigned char *)&(a3))) = result[2]; /*0x4f4e70*/
    (*((unsigned short *)&(a2))) = result[1] & 0xF8; /*0x4f4e77*/
    result += 4; /*0x4f4e7e*/
    (*((unsigned short *)&(a3))) = a3 & 0xF8; /*0x4f4e81*/
    v9 = a3 | (32 * a2); /*0x4f4e88*/
    (*((unsigned short *)&(a3))) = *(result - 1) >> 3; /*0x4f4e90*/
    a2 = a3 | (4 * v9); /*0x4f4e97*/
    a4 += 2; /*0x4f4e99*/
    --v7; /*0x4f4e9e*/
    *(unsigned short *)(a4 - 2) = a2 | v8; /*0x4f4e9f*/
  }
  while ( v7 ); /*0x4f4ea3*/
  return result; /*0x4f4ea9*/
}
}
// 0x4FA210
namespace gamemd {
int E4Recv_4FA210::sub_4FA210(int a2, int a3)
{
  int v3; // eax
  bool v4; // zf
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  void *v9; // eax
  void **v11; // [esp+8h] [ebp-1Ch] BYREF
  void *Block; // [esp+Ch] [ebp-18h]
  int v13; // [esp+10h] [ebp-14h]
  char v14; // [esp+15h] [ebp-Fh]
  int v15; // [esp+18h] [ebp-Ch]
  int v16; // [esp+1Ch] [ebp-8h]

  AISelectTeamHouseClass(&v11, (int)this, a3); /*0x4fa220*/
  a2->u32_4 = 0; /*0x4fa231*/
  a2->VtableStub_8 = 0; /*0x4fa234*/
  a2->u32_C = 1; /*0x4fa237*/
  a2->u8_D = 0; /*0x4fa23b*/
  *(unsigned int *)a2 = &vt_VectorClass; /*0x4fa23e*/
  if ( (void ***)a2 != &v11 ) /*0x4fa244*/
  {
    VectorClass::ClearAndFree3(a2); /*0x4fa248*/
    v3 = v13; /*0x4fa24e*/
    v4 = v13 == 0; /*0x4fa252*/
    a2->VtableStub_8 = v13; /*0x4fa254*/
    if ( v4 ) /*0x4fa257*/
    {
      a2->u32_4 = 0; /*0x4fa294*/
      a2->u8_D = 0; /*0x4fa297*/
    }
    else
    {
      v5 = operator new(4 * v3); /*0x4fa261*/
      a2->u32_4 = v5; /*0x4fa26b*/
      if ( v5 ) /*0x4fa26e*/
      {
        v6 = a2->VtableStub_8; /*0x4fa270*/
        v7 = 0; /*0x4fa273*/
        a2->u8_D = 1; /*0x4fa277*/
        if ( v6 > 0 ) /*0x4fa27b*/
        {
          do /*0x4fa290*/
          {
            *(unsigned int *)(a2->u32_4 + 4 * v7) = *((unsigned int *)Block + v7); /*0x4fa287*/
            ++v7; /*0x4fa28d*/
          }
          while ( v7 < a2->VtableStub_8 ); /*0x4fa290*/
        }
      }
    }
  }
  v8 = v16; /*0x4fa29e*/
  a2->u32_10 = v15; /*0x4fa2a2*/
  v9 = Block; /*0x4fa2a5*/
  v4 = Block == 0; /*0x4fa2a9*/
  a2->AudioBuffer_14 = v8; /*0x4fa2ab*/
  *(unsigned int *)a2 = &vt_TypeList; /*0x4fa2ae*/
  v11 = &vt_VectorClass; /*0x4fa2b4*/
  if ( !v4 && v14 ) /*0x4fa2c2*/
    operator delete((void *)(v9)); /*0x4fa2c5*/
  return a2; /*0x4fa2cf*/
}
}
// 0x4FBD80
namespace gamemd {
AbstractClass * * E4Recv_4FBD80::sub_4FBD80(int a2, int a3)
{
  int v3; // ecx
  int result; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx

  switch ( a2 ) /*0x4fbd92*/
  {
    case 1: /*0x4fbd92*/
    case 40: /*0x4fbd92*/
      v5 = this->M22096; /*0x4fbdaf*/
      if ( v5 == -1 ) /*0x4fbdb8*/
        goto LABEL_10; /*0x4fbdb8*/
      result = *((unsigned int *)dword_A83CE4 + v5); /*0x4fbdc0*/
      break; /*0x4fbdc3*/
    case 2: /*0x4fbd92*/
    case 3: /*0x4fbd92*/
      v3 = this->M22104; /*0x4fbd99*/
      if ( v3 == -1 ) /*0x4fbda2*/
        goto LABEL_10; /*0x4fbda2*/
      result = *((unsigned int *)dword_A8B21C + v3); /*0x4fbda9*/
      break; /*0x4fbdac*/
    case 6: /*0x4fbd92*/
    case 7: /*0x4fbd92*/
      v7 = this->M22092; /*0x4fbddc*/
      if ( v7 == -1 ) /*0x4fbde5*/
        goto LABEL_10; /*0x4fbde5*/
      result = *((unsigned int *)dword_A83C6C + v7); /*0x4fbded*/
      break; /*0x4fbdf0*/
    case 15: /*0x4fbd92*/
    case 16: /*0x4fbd92*/
      v6 = this->M22100; /*0x4fbdc6*/
      if ( v6 == -1 ) /*0x4fbdcf*/
        goto LABEL_10; /*0x4fbdcf*/
      result = *((unsigned int *)dword_A8E34C + v6); /*0x4fbdd6*/
      break; /*0x4fbdd9*/
    default:
  LABEL_10:
      result = 0; /*0x4fbdf3*/
      break; /*0x4fbdf3*/
  }
  return result; /*0x4fbdac*/
}
}
// 0x4F0ED0
namespace gamemd {
int sub_4F0ED0()
{
  dword_A8EDE8 = 0; /*0x4f0ed2*/
  dword_A8EDEC = 0; /*0x4f0ed7*/
  dword_A8EDF0 = 0; /*0x4f0edc*/
  dword_A8EDF4 = 0; /*0x4f0ee1*/
  return 0; /*0x4f0ee6*/
}
} // namespace gamemd

// 0x4F0EF0
namespace gamemd {
void sub_4F0EF0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4f0efc*/
  dbl_A8EE00 = Math::Sqrt(v0 + v0); /*0x4f0f0e*/
}
} // namespace gamemd

// 0x4F0F20
namespace gamemd {
void sub_4F0F20()
{
  dbl_A8EE70 = dbl_A8EE00 / 60.0; /*0x4f0f2c*/
}
} // namespace gamemd

// 0x4F0F40
namespace gamemd {
void sub_4F0F40()
{
  dbl_A8EE58 = 1.0 / dbl_A8EE70; /*0x4f0f4c*/
}
} // namespace gamemd

// 0x4F0F60
namespace gamemd {
void sub_4F0F60()
{
  dbl_A8EE50 = 0.0174532925199433 * 45.0; /*0x4f0f6c*/
}
} // namespace gamemd

// 0x4F0F80
namespace gamemd {
void sub_4F0F80()
{
  dbl_A8EE08 = 0.0174532925199433 * 60.0; /*0x4f0f8c*/
}
} // namespace gamemd

// 0x4F0FA0
namespace gamemd {
void sub_4F0FA0()
{
  dbl_A8EDE0 = 0.0174532925199433 * 90.0; /*0x4f0fac*/
}
} // namespace gamemd

// 0x4F0FC0
namespace gamemd {
long long sub_4F0FC0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_A8EDE0 - dbl_A8EE08); /*0x4f0fd2*/
  result = Math::RoundToInt(v0 * dbl_A8EE00 * 0.5); /*0x4f0fe6*/
  dword_A8EE78 = result; /*0x4f0feb*/
  return result; /*0x4f0ff0*/
}
} // namespace gamemd

// 0x4F1000
namespace gamemd {
void sub_4F1000()
{
  dbl_A8EE10 = Math::ArcTan((double)dword_A8EE78 * 0.00390625); /*0x4f1017*/
}
} // namespace gamemd

// 0x4F1030
namespace gamemd {
void sub_4F1030()
{
  dbl_A8EE28 = Math::ArcTan((double)(2 * dword_A8EE78) / dbl_A8EE00); /*0x4f1052*/
}
} // namespace gamemd

// 0x4F1060
namespace gamemd {
long long sub_4F1060()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_A8EE78) + 0.5); /*0x4f107b*/
  dword_A8EE6C = result; /*0x4f1080*/
  return result; /*0x4f1086*/
}
} // namespace gamemd

// 0x4F1090
namespace gamemd {
int sub_4F1090()
{
  word_A8EDFC = 0; /*0x4f1092*/
  word_A8EDFE = 0; /*0x4f1098*/
  return 0; /*0x4f109e*/
}
} // namespace gamemd

// 0x4F10A0
namespace gamemd {
int sub_4F10A0()
{
  dword_A8EE18 = 0; /*0x4f10a2*/
  dword_A8EE1C = 0; /*0x4f10a7*/
  dword_A8EE20 = 0; /*0x4f10ac*/
  return 0; /*0x4f10b1*/
}
} // namespace gamemd

// 0x4F10C0
namespace gamemd {
int sub_4F10C0()
{
  dword_A8EE68 = 0; /*0x4f10c5*/
  dword_A8EE60 = 128; /*0x4f10cf*/
  dword_A8EE64 = 128; /*0x4f10d4*/
  return 128; /*0x4f10d9*/
}
} // namespace gamemd

// 0x4F1700
namespace gamemd {
void nullsub_13()
{
  ; /*0x4f1700*/
}
} // namespace gamemd

// 0x4F1710
namespace gamemd {
void nullsub_14()
{
  ; /*0x4f1710*/
}
} // namespace gamemd

// 0x4F1B60
namespace gamemd {
int sub_4F1B60()
{
  dword_A8EE88 = 0; /*0x4f1b62*/
  dword_A8EE8C = 0; /*0x4f1b67*/
  dword_A8EE90 = 0; /*0x4f1b6c*/
  dword_A8EE94 = 0; /*0x4f1b71*/
  return 0; /*0x4f1b76*/
}
} // namespace gamemd

// 0x4F1B80
namespace gamemd {
int sub_4F1B80(char ** a1, int a2)
{
  char **v4; // esi
  ObjectClass *v5; // [esp+0h] [ebp-B4h]
  INIClass v6; // [esp+8h] [ebp-ACh] BYREF
  CCFileClass v7; // [esp+48h] [ebp-6Ch] BYREF
  int v8[3]; // [esp+A0h] [ebp-14h] BYREF
  int v9; // [esp+ACh] [ebp-8h]

  CCFileClass::Construct2(&v7, a1); /*0x4f1b8f*/
  if ( (uint8_t)((CCFileClass *)(&v7))->Open(0) ) /*0x4f1b9b*/
  {
    v6.headNode[0] = 0; /*0x4f1bdf*/
    v6.headNode[1] = 0; /*0x4f1be3*/
    v6.sectionHead[1] = 0; /*0x4f1be7*/
    v6.sectionHead[2] = 0; /*0x4f1beb*/
    v6.sectionHead[0] = (int)&vt_GenericNode; /*0x4f1bef*/
    GenericNode::Constructor((GenericNode *)&v6.sectionCount); /*0x4f1bf7*/
    LinkedList::Prepend((LinkedList *)v6.sectionHead, (int)&v6.sectionCount); /*0x4f1c0d*/
    v6.headNode[2] = (int)&vt_List; /*0x4f1c16*/
    memset(&v6.needsSave_flag, 0, 13); /*0x4f1c24*/
    v6.unknown38 = 0; /*0x4f1c34*/
    v6.INIClass_field_3C = 0; /*0x4f1c38*/
    /* X11: vtable install elided (implicit via INIClass virtuals 0x4f1c3c) */
    if ( FileStraw::Open((FileStraw *)&v6, (int)&v7, 0) <= 0 ) /*0x4f1c4b*/
      v4 = 0; /*0x4f1c5c*/
    else
      v4 = LoadFromINIGraphicMenu(v5, &v6, a2); /*0x4f1c58*/
    HashTable::DestroyHashTableINIClass(&v6); /*0x4f1c62*/
    *(unsigned int *)v7.__pad_000 = &vt_CCFileClass; /*0x4f1c6e*/
    v9 = 0; /*0x4f1c76*/
    Vector::Clear((int)v8); /*0x4f1c7d*/
    *(unsigned int *)v7.__pad_000 = &off_7E1668; /*0x4f1c86*/
    ((BufferIOFileClass *)((BufferIOFileClass *)&v7))->Dtor(); /*0x4f1c8e*/
    return v4; /*0x4f1c93*/
  }
  else
  {
    *(unsigned int *)v7.__pad_000 = &vt_CCFileClass; /*0x4f1bab*/
    v9 = 0; /*0x4f1bb3*/
    Vector::Clear((int)v8); /*0x4f1bba*/
    *(unsigned int *)v7.__pad_000 = &off_7E1668; /*0x4f1bc3*/
    ((BufferIOFileClass *)((BufferIOFileClass *)&v7))->Dtor(); /*0x4f1bcb*/
    return 0; /*0x4f1bd0*/
  }
}
} // namespace gamemd

// 0x4F2280
namespace gamemd {
int ObjectClass::sub_4F2280(int a2, int a3)
{

  int result; // eax
  _VectorCursor_PAVGraphicMenuItem_V_DynamicVectorClass_PAVGraphicMenuItem v4; // [esp+0h] [ebp-Ch] BYREF
  int v5; // [esp+8h] [ebp-4h]

  v5 = 0; /*0x4f2286*/
  *(unsigned int *)&v4.m_1[3] = &this->customSound_controller[2]; /*0x4f228e*/
  *(unsigned int *)v4.__pad_0 = &vt_VectorCursorGraphicMenuItemDynamicVectorClass; /*0x4f2296*/
  for ( result = Map::CanScroll(&v4); /*0x4f22a6*/
        (unsigned char)result;
        result = (*(int (**)(_VectorCursor_PAVGraphicMenuItem_V_DynamicVectorClass_PAVGraphicMenuItem *))(*(unsigned int *)v4.__pad_0 + 4))(&v4) )
  {
    if ( *(unsigned int *)(*(unsigned int *)(*(unsigned int *)(*(unsigned int *)&v4.m_1[3] + 4) + 4 * v5) + 4) == a2 ) /*0x4f22c3*/
      sub_4F3AB0(*(ObjectClass **)(*(unsigned int *)(*(unsigned int *)&v4.m_1[3] + 4) + 4 * v5), a3); /*0x4f22cc*/
    (*(void (**)(_VectorCursor_PAVGraphicMenuItem_V_DynamicVectorClass_PAVGraphicMenuItem *))(*(unsigned int *)v4.__pad_0 + 8))(&v4); /*0x4f22d9*/
  }
  return result; /*0x4f22ed*/

}
} // namespace gamemd

// 0x4F26E0
namespace gamemd {
int ObjectClass::sub_4F26E0(int a2)
{

  int v2; // ecx
  _VectorCursor_PAVGraphicMenuItem_V_DynamicVectorClass_PAVGraphicMenuItem v4; // [esp+4h] [ebp-Ch] BYREF
  int v5; // [esp+Ch] [ebp-4h]

  *(unsigned int *)&v4.m_1[3] = &this->customSound_controller[2]; /*0x4f26e7*/
  v5 = 0; /*0x4f26ef*/
  *(unsigned int *)v4.__pad_0 = &vt_VectorCursorGraphicMenuItemDynamicVectorClass; /*0x4f26f7*/
  if ( Map::CanScroll(&v4) ) /*0x4f26ff*/
  {
    do /*0x4f2738*/
    {
      v2 = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&v4.m_1[3] + 4) + 4 * v5); /*0x4f2719*/
      if ( (*(unsigned __int8 (**)(int, int))(*(unsigned int *)v2 + 8))(v2, a2) ) /*0x4f271e*/
        break; /*0x4f2723*/
      (*(void (**)(_VectorCursor_PAVGraphicMenuItem_V_DynamicVectorClass_PAVGraphicMenuItem *))(*(unsigned int *)v4.__pad_0 + 8))(&v4); /*0x4f272d*/
    }
    while ( (*(unsigned __int8 (**)(_VectorCursor_PAVGraphicMenuItem_V_DynamicVectorClass_PAVGraphicMenuItem *))(*(unsigned int *)v4.__pad_0 + 4))(&v4) ); /*0x4f2738*/
  }
  if ( (*(unsigned __int8 (**)(_VectorCursor_PAVGraphicMenuItem_V_DynamicVectorClass_PAVGraphicMenuItem *))(*(unsigned int *)v4.__pad_0 + 4))(&v4) ) /*0x4f2747*/
    return *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&v4.m_1[3] + 4) + 4 * v5); /*0x4f275a*/
  else
    return 0; /*0x4f2763*/

}
} // namespace gamemd

// 0x4F2770
namespace gamemd {
int ObjectClass::sub_4F2770(int a2)
{

  int v2; // ecx
  _VectorCursor_PAVGraphicMenuItem_V_DynamicVectorClass_PAVGraphicMenuItem v4; // [esp+4h] [ebp-Ch] BYREF
  int v5; // [esp+Ch] [ebp-4h]

  *(unsigned int *)&v4.m_1[3] = &this->customSound_controller[2]; /*0x4f2777*/
  v5 = 0; /*0x4f277f*/
  *(unsigned int *)v4.__pad_0 = &vt_VectorCursorGraphicMenuItemDynamicVectorClass; /*0x4f2787*/
  if ( Map::CanScroll(&v4) ) /*0x4f278f*/
  {
    do /*0x4f27c8*/
    {
      v2 = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&v4.m_1[3] + 4) + 4 * v5); /*0x4f27a9*/
      if ( (*(unsigned __int8 (**)(int, int))(*(unsigned int *)v2 + 4))(v2, a2) ) /*0x4f27ae*/
        break; /*0x4f27b3*/
      (*(void (**)(_VectorCursor_PAVGraphicMenuItem_V_DynamicVectorClass_PAVGraphicMenuItem *))(*(unsigned int *)v4.__pad_0 + 8))(&v4); /*0x4f27bd*/
    }
    while ( (*(unsigned __int8 (**)(_VectorCursor_PAVGraphicMenuItem_V_DynamicVectorClass_PAVGraphicMenuItem *))(*(unsigned int *)v4.__pad_0 + 4))(&v4) ); /*0x4f27c8*/
  }
  if ( (*(unsigned __int8 (**)(_VectorCursor_PAVGraphicMenuItem_V_DynamicVectorClass_PAVGraphicMenuItem *))(*(unsigned int *)v4.__pad_0 + 4))(&v4) ) /*0x4f27d7*/
    return *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&v4.m_1[3] + 4) + 4 * v5); /*0x4f27ea*/
  else
    return 0; /*0x4f27f3*/

}
} // namespace gamemd

// 0x4F2C00
namespace gamemd {
unsigned int VectorClass::sub_4F2C00(int a2, int a3)
{
  this->Items = 0; /*0x4f2c0b*/
  this->Capacity = a2; /*0x4f2c0e*/
  this->IsInitialized = 1; /*0x4f2c11*/
  this->IsAllocated = 0; /*0x4f2c15*/
  /* X11: vtable install elided (implicit via VectorClass virtuals 0x4f2c18) */
  if ( a2 ) /*0x4f2c1e*/
  {
    if ( a3 ) /*0x4f2c26*/
    {
      this->Items = (void *)a3; /*0x4f2c28*/
      return &this->vfptr; /*0x4f2c2e*/
    }
    this->Items = (void *)operator new(4 * a2); /*0x4f2c3d*/
    this->IsAllocated = 1; /*0x4f2c40*/
  }
  return &this->vfptr; /*0x4f2c2d*/
}
} // namespace gamemd

// 0x4F2C50
namespace gamemd {
int sub_4F2C50()
{
  dword_A8EE98 = 0; /*0x4f2c52*/
  dword_A8EE9C = 0; /*0x4f2c57*/
  dword_A8EEA0 = 0; /*0x4f2c5c*/
  dword_A8EEA4 = 0; /*0x4f2c61*/
  return 0; /*0x4f2c66*/
}
} // namespace gamemd

// 0x4F2F10
namespace gamemd {
int * E4Recv_4F2F10::sub_4F2F10(GraphicMenuAnimItem * a2, unsigned int * a3, GraphicMenuAnimItem * a4, int * a5, GraphicMenuAnimItem * a6, char ** a7, GraphicMenuAnimItem * a8, GraphicMenuAnimItem * a9)
{

  int v10; // edx
  char *v11; // eax
  MSShapeAnim *v12; // eax
  void *v13; // eax
  ObjectClass v15; // [esp+10h] [ebp-DCh] BYREF
  char v16[12]; // [esp+D8h] [ebp-14h] BYREF
  int v17; // [esp+E4h] [ebp-8h]

  GraphicMenuItem::Constructor((GraphicMenuItem *)this, a2); /*0x4f2f21*/
  this->M16 = *a5; /*0x4f2f3c*/
  this->M20 = a5[1]; /*0x4f2f41*/
  this->M24 = a5[2]; /*0x4f2f47*/
  v10 = a5[3]; /*0x4f2f4a*/
  this->u32_20 = 0; /*0x4f2f4d*/
  this->M28 = v10; /*0x4f2f50*/
  this->u32_24 = 0; /*0x4f2f5a*/
  /* X11: vtable install elided (implicit via GraphicMenuAnimItem virtuals 0x4f2f5d) */
  CCFileClass::Construct2((CCFileClass *)&v15.estimatedHealth, a6); /*0x4f2f63*/
  CCFileClass::Construct2((CCFileClass *)&v15.?, a7); /*0x4f2f74*/
  if ( (unsigned __int8)CCFileClass::Open((CCFileClass *)&v15.estimatedHealth, 0) ) /*0x4f2f81*/
  {
    if ( (unsigned __int8)CCFileClass::Open((CCFileClass *)&v15.?, 0) ) /*0x4f2f8f*/
    {
      v11 = String::GetOrEmpty_Alt((String *)a7); /*0x4f2f9a*/
      String::Assign((String *)&v15, v11); /*0x4f2fa4*/
      this->u32_24 = PaletteClass::Load((PaletteClass *)&v15); /*0x4f2fb6*/
      DeleteAndZero(&v15); /*0x4f2fb9*/
      v12 = (MSShapeAnim *)__2_YAPAXI_Z(0x40u); /*0x4f2fc0*/
      if ( v12 ) /*0x4f2fca*/
      {
        v13 = MSShapeAnim::Constructor(v12, a6, *a4, a4[1], this->u32_24, a8, a9, 0); /*0x4f2ff2*/
        if ( v13 ) /*0x4f2ff9*/
          PriorityQueue::Add((PriorityQueue *)a3, (int)v13); /*0x4f3003*/
      }
    }
  }
  /* X11: vtable install elided (implicit via CCFileClass virtuals 0x4f3011) */
  *(unsigned int *)&v15.bombVisible = 0; /*0x4f3015*/
  Vector::Clear((int)&v15.customSound_controller[3]); /*0x4f3019*/
  /* X11: vtable install elided (implicit via off_7E1668 virtuals 0x4f3027) */
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v15.?); /*0x4f302b*/
  v15.estimatedHealth = (int)&vt_CCFileClass; /*0x4f3037*/
  v17 = 0; /*0x4f303e*/
  Vector::Clear((int)v16); /*0x4f3045*/
  v15.estimatedHealth = (int)&off_7E1668; /*0x4f3051*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v15.estimatedHealth); /*0x4f3058*/
  return (int *)this->__pad_0; /*0x4f305f*/

}
} // namespace gamemd

// 0x4F3120
namespace gamemd {
int sub_4F3120()
{
  dword_A8EEA8 = 0; /*0x4f3122*/
  dword_A8EEAC = 0; /*0x4f3127*/
  dword_A8EEB0 = 0; /*0x4f312c*/
  dword_A8EEB4 = 0; /*0x4f3131*/
  return 0; /*0x4f3136*/
}
} // namespace gamemd

// 0x4F3890
namespace gamemd {
int sub_4F3890()
{
  dword_A8EEB8 = 0; /*0x4f3892*/
  dword_A8EEBC = 0; /*0x4f3897*/
  dword_A8EEC0 = 0; /*0x4f389c*/
  dword_A8EEC4 = 0; /*0x4f38a1*/
  return 0; /*0x4f38a6*/
}
} // namespace gamemd

// 0x4F3B60
namespace gamemd {
int sub_4F3B60()
{
  dword_A8EEC8 = 0; /*0x4f3b62*/
  dword_A8EECC = 0; /*0x4f3b67*/
  dword_A8EED0 = 0; /*0x4f3b6c*/
  dword_A8EED4 = 0; /*0x4f3b71*/
  return 0; /*0x4f3b76*/
}
} // namespace gamemd

// 0x4F3C40
namespace gamemd {
unsigned int * E4Recv_4F3C40::sub_4F3C40(int a2, const char ** a3)
{
  ObjectClass *v3; // ebp
  int *p_uniqueId; // esi
  int v5; // edi
  int v6; // ebp
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // edx

  v3 = this; /*0x4f3c49*/
  GraphicMenuItem::Constructor(a2); /*0x4f3c50*/
  p_uniqueId = &v3->uniqueId; /*0x4f3c55*/
  v3->abstractFlags = 0; /*0x4f3c5e*/
  v3->nextArrayIndex = 0; /*0x4f3c61*/
  (v3->u8_C) = 1; /*0x4f3c64*/
  (v3->u8_E) = 0; /*0x4f3c68*/
  v3->uniqueId = (int)&vt_DynamicVectorClass; /*0x4f3c6b*/
  v3->occupant = 10; /*0x4f3c71*/
  v3->NeedsSaveOrLink = 0; /*0x4f3c78*/
  /* X11: vtable install elided (implicit via GraphicMenuShortcutItem virtuals 0x4f3c7b) */
  unknown_libname_73(&a2); /*0x4f3c82*/
  v5 = String::Tokenize((String *)a3, 0, Str, (void **)&a2); /*0x4f3c9f*/
  if ( String::Length((String *)&a2) ) /*0x4f3ca1*/
  {
    do /*0x4f3d19*/
    {
      v6 = sub_4F3D40((ObjectClass *)&a2); /*0x4f3cb3*/
      if ( v6 ) /*0x4f3cb7*/
      {
        v7 = p_uniqueId->vtable3; /*0x4f3cb9*/
        if ( p_uniqueId->uniqueId < v7 /*0x4f3cdb*/
          || (p_uniqueId->u32_D || !v7)
          && (v8 = p_uniqueId->abstractFlags, v8 > 0)
          && p_uniqueId->COMStub_Release(v7 + v8, 0) )
        {
          v9 = p_uniqueId->uniqueId; /*0x4f3ce2*/
          v10 = p_uniqueId->vtable2; /*0x4f3ce5*/
          p_uniqueId->uniqueId = v9 + 1; /*0x4f3ceb*/
          *(unsigned int *)(v10 + 4 * v9) = v6; /*0x4f3cee*/
        }
      }
      v5 = String::Tokenize((String *)a3, v5, asc_824370, (void **)&a2); /*0x4f3d05*/
      if ( v5 == -1 ) /*0x4f3d0a*/
        DeleteAndZero::Alt2((DeleteAndZero *)&a2); /*0x4f3d10*/
    }
    while ( String::Length((String *)&a2) ); /*0x4f3d19*/
    v3 = this; /*0x4f3d22*/
  }
  DeleteAndZero((ObjectClass *)&a2); /*0x4f3d2a*/
  return &v3->vfptr; /*0x4f3d2f*/
}
} // namespace gamemd

// 0x4F4010
namespace gamemd {
int sub_4F4010()
{
  dword_A8EEE0 = 0; /*0x4f4012*/
  dword_A8EEE4 = 0; /*0x4f4017*/
  dword_A8EEE8 = 0; /*0x4f401c*/
  dword_A8EEEC = 0; /*0x4f4021*/
  return 0; /*0x4f4026*/
}
} // namespace gamemd

// 0x4F4030
namespace gamemd {
void sub_4F4030()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4f403c*/
  dbl_A8EEF8 = Math::Sqrt(v0 + v0); /*0x4f404e*/
}
} // namespace gamemd

// 0x4F4060
namespace gamemd {
void sub_4F4060()
{
  dbl_A8EF48 = dbl_A8EEF8 / 60.0; /*0x4f406c*/
}
} // namespace gamemd

// 0x4F4080
namespace gamemd {
void sub_4F4080()
{
  dbl_A8EF30 = 1.0 / dbl_A8EF48; /*0x4f408c*/
}
} // namespace gamemd

// 0x4F40A0
namespace gamemd {
void sub_4F40A0()
{
  dbl_A8EF28 = 0.0174532925199433 * 45.0; /*0x4f40ac*/
}
} // namespace gamemd

// 0x4F40C0
namespace gamemd {
void sub_4F40C0()
{
  dbl_A8EF00 = 0.0174532925199433 * 60.0; /*0x4f40cc*/
}
} // namespace gamemd

// 0x4F40E0
namespace gamemd {
void sub_4F40E0()
{
  dbl_A8EED8 = 0.0174532925199433 * 90.0; /*0x4f40ec*/
}
} // namespace gamemd

// 0x4F4100
namespace gamemd {
long long sub_4F4100()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_A8EED8 - dbl_A8EF00); /*0x4f4112*/
  result = Math::RoundToInt(v0 * dbl_A8EEF8 * 0.5); /*0x4f4126*/
  dword_A8EF50 = result; /*0x4f412b*/
  return result; /*0x4f4130*/
}
} // namespace gamemd

// 0x4F4140
namespace gamemd {
void sub_4F4140()
{
  dbl_A8EF08 = Math::ArcTan((double)dword_A8EF50 * 0.00390625); /*0x4f4157*/
}
} // namespace gamemd

// 0x4F4170
namespace gamemd {
void sub_4F4170()
{
  dbl_A8EF20 = Math::ArcTan((double)(2 * dword_A8EF50) / dbl_A8EEF8); /*0x4f4192*/
}
} // namespace gamemd

// 0x4F41A0
namespace gamemd {
long long sub_4F41A0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_A8EF50) + 0.5); /*0x4f41bb*/
  dword_A8EF44 = result; /*0x4f41c0*/
  return result; /*0x4f41c6*/
}
} // namespace gamemd

// 0x4F41D0
namespace gamemd {
int sub_4F41D0()
{
  word_A8EEF0 = 0; /*0x4f41d2*/
  word_A8EEF2 = 0; /*0x4f41d8*/
  return 0; /*0x4f41de*/
}
} // namespace gamemd

// 0x4F41E0
namespace gamemd {
int sub_4F41E0()
{
  dword_A8EF10 = 0; /*0x4f41e2*/
  dword_A8EF14 = 0; /*0x4f41e7*/
  dword_A8EF18 = 0; /*0x4f41ec*/
  return 0; /*0x4f41f1*/
}
} // namespace gamemd

// 0x4F4200
namespace gamemd {
int sub_4F4200()
{
  dword_A8EF40 = 0; /*0x4f4205*/
  dword_A8EF38 = 128; /*0x4f420f*/
  dword_A8EF3C = 128; /*0x4f4214*/
  return 128; /*0x4f4219*/
}
} // namespace gamemd

// 0x4F4D30
namespace gamemd {
bool E4Recv_4F4D30::sub_4F4D30(const char * a2)
{
  return strcmp((const char *)this, a2) != 0; /*0x4f4d65*/
}
} // namespace gamemd

// 0x4F4D90
namespace gamemd {
void j_Stub_InfiniteLoop(int a1, int a2)
{
  Stub::InfiniteLoop(a1, a2); /*0x4f4d90*/
}
}
// 0x4F4EE0
namespace gamemd {
int sub_4F4EE0()
{
  dword_A8EF68 = 0; /*0x4f4ee2*/
  dword_A8EF6C = 0; /*0x4f4ee7*/
  dword_A8EF70 = 0; /*0x4f4eec*/
  dword_A8EF74 = 0; /*0x4f4ef1*/
  return 0; /*0x4f4ef6*/
}
} // namespace gamemd

// 0x4F4F00
namespace gamemd {
void sub_4F4F00()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4f4f0c*/
  dbl_A8EFA0 = Math::Sqrt(v0 + v0); /*0x4f4f1e*/
}
} // namespace gamemd

// 0x4F4F30
namespace gamemd {
void sub_4F4F30()
{
  dbl_A8F030 = dbl_A8EFA0 / 60.0; /*0x4f4f3c*/
}
} // namespace gamemd

// 0x4F4F50
namespace gamemd {
void sub_4F4F50()
{
  dbl_A8F018 = 1.0 / dbl_A8F030; /*0x4f4f5c*/
}
} // namespace gamemd

// 0x4F4F70
namespace gamemd {
void sub_4F4F70()
{
  dbl_A8F010 = 0.0174532925199433 * 45.0; /*0x4f4f7c*/
}
} // namespace gamemd

// 0x4F4F90
namespace gamemd {
void sub_4F4F90()
{
  dbl_A8EFE0 = 0.0174532925199433 * 60.0; /*0x4f4f9c*/
}
} // namespace gamemd

// 0x4F4FB0
namespace gamemd {
void sub_4F4FB0()
{
  dbl_A8EF58 = 0.0174532925199433 * 90.0; /*0x4f4fbc*/
}
} // namespace gamemd

// 0x4F4FD0
namespace gamemd {
long long sub_4F4FD0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_A8EF58 - dbl_A8EFE0); /*0x4f4fe2*/
  result = Math::RoundToInt(v0 * dbl_A8EFA0 * 0.5); /*0x4f4ff6*/
  dword_A8F038 = result; /*0x4f4ffb*/
  return result; /*0x4f5000*/
}
} // namespace gamemd

// 0x4F5010
namespace gamemd {
void sub_4F5010()
{
  dbl_A8EFF0 = Math::ArcTan((double)dword_A8F038 * 0.00390625); /*0x4f5027*/
}
} // namespace gamemd

// 0x4F5040
namespace gamemd {
void sub_4F5040()
{
  dbl_A8F008 = Math::ArcTan((double)(2 * dword_A8F038) / dbl_A8EFA0); /*0x4f5062*/
}
} // namespace gamemd

// 0x4F5070
namespace gamemd {
long long sub_4F5070()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_A8F038) + 0.5); /*0x4f508b*/
  dword_A8F02C = result; /*0x4f5090*/
  return result; /*0x4f5096*/
}
} // namespace gamemd

// 0x4F50A0
namespace gamemd {
int sub_4F50A0()
{
  dword_A8EF98 = 0; /*0x4f50a2*/
  return 0; /*0x4f50ae*/
}
} // namespace gamemd

// 0x4F50B0
namespace gamemd {
int sub_4F50B0()
{
  dword_A8EFF8 = 0; /*0x4f50b2*/
  dword_A8EFFC = 0; /*0x4f50b7*/
  dword_A8F000 = 0; /*0x4f50bc*/
  return 0; /*0x4f50c1*/
}
} // namespace gamemd

// 0x4F50D0
namespace gamemd {
int sub_4F50D0()
{
  dword_A8F028 = 0; /*0x4f50d5*/
  dword_A8F020 = 128; /*0x4f50df*/
  dword_A8F024 = 128; /*0x4f50e4*/
  return 128; /*0x4f50e9*/
}
} // namespace gamemd

// 0x4F50F0
namespace gamemd {
int sub_4F50F0()
{
  dword_A8EFCC = 0; /*0x4f50f7*/
  dword_A8EFD0 = 0; /*0x4f50fc*/
  byte_A8EFD4 = 1; /*0x4f5101*/
  byte_A8EFD5 = 0; /*0x4f5108*/
  dword_A8EFC8 = (int)&off_7EA7B4; /*0x4f510d*/
  dword_A8EFDC = 10; /*0x4f5117*/
  dword_A8EFD8 = 0; /*0x4f5121*/
  return atexit(sub_4F5130); /*0x4f512c*/
}
} // namespace gamemd

// 0x4F5130
namespace gamemd {
void sub_4F5130()
{
  if ( (byte_A8EF60 & 1) == 0 ) /*0x4f513a*/
  {
    dword_A8EFC8 = (int)&vt_VectorClass; /*0x4f513e*/
    byte_A8EF60 |= 1u; /*0x4f5151*/
    if ( dword_A8EFCC ) /*0x4f5157*/
    {
      if ( byte_A8EFD5 ) /*0x4f5161*/
      {
        operator delete((void *)(dword_A8EFCC)); /*0x4f5164*/
        dword_A8EFCC = 0; /*0x4f516c*/
      }
    }
    byte_A8EFD5 = 0; /*0x4f5176*/
    dword_A8EFD0 = 0; /*0x4f517d*/
  }
}
} // namespace gamemd

// 0x4F6EB0
namespace gamemd {
void nullsub_15()
{
  ; /*0x4f6eb0*/
}
} // namespace gamemd

// 0x4F7850
namespace gamemd {
unsigned int * E4Recv_4F7850::sub_4F7850()
{

  this->AbstractClass = 0; /*0x4f7854*/
  this->M4 = (void *)1; /*0x4f7856*/
  this->M8 = 0; /*0x4f785d*/
  this->M12 = 0; /*0x4f7860*/
  this->M16 = -1; /*0x4f7863*/
  return &this->AbstractClass; /*0x4f786a*/

}
} // namespace gamemd

// 0x4F9670
namespace gamemd {
int E4Recv_4F9670::sub_4F9670()
{
  int v2; // ebx
  int v3; // edi
  int v4; // esi
  float v7; // [esp+Ch] [ebp-Ch]
  int v8; // [esp+10h] [ebp-8h]
  int spawnStatus; // [esp+14h] [ebp-4h]

  v2 = 0; /*0x4f9678*/
  v3 = 0; /*0x4f967a*/
  v7 = 0.0; /*0x4f967f*/
  spawnStatus = this->spawnStatus; /*0x4f9685*/
  if ( spawnStatus <= 0 ) /*0x4f9689*/
    return 0; /*0x4f96f5*/
  do /*0x4f96e8*/
  {
    v4 = *(unsigned int *)(this->health + 4 * v3); /*0x4f968f*/
    if ( v4 ) /*0x4f9694*/
    {
      if ( *(unsigned char *)(v4 + 116) ) /*0x4f9696*/
      {
        v8 = *(unsigned int *)(*(unsigned int *)(v4 + 1312) + 2048); /*0x4f96ab*/
        if ( v8 > 0 ) /*0x4f96af*/
        {
          __asm { fild [esp+1Ch+var_8] } /*0x4f96b1*/
          __asm { fstp [esp+1Ch+var_8] }
          Float4::Sum((int *)(v4 + 828)); /*0x4f96bf*/
          __asm { fsubr [esp+1Ch+var_8] } /*0x4f96c4*/
          if ( !v2 ) /*0x4f96ca*/
            goto LABEL_7; /*0x4f96ca*/
          __asm /*0x4f96cc*/
          {
            fcom [esp+1Ch+var_C]
            fnstsw ax
          }
          if ( (_AX & 0x4100) != 0 ) /*0x4f96d5*/
          {
            __asm { fstp st } /*0x4f96df*/
          }
          else
          {
  LABEL_7:
            __asm { fstp [esp+1Ch+var_C] } /*0x4f96d7*/
            v2 = v4; /*0x4f96db*/
          }
        }
      }
    }
    ++v3; /*0x4f96e5*/
  }
  while ( v3 < spawnStatus ); /*0x4f96e8*/
  return v2; /*0x4f96eb*/
}
} // namespace gamemd

// 0x4FBD00
namespace gamemd {
char E4Recv_4FBD00::sub_4FBD00(int a2)
{

  int v2; // edi
  int v4; // eax
  ObjectClass *v5; // ecx

  v2 = 0; /*0x4fbd08*/
  if ( dword_A80238 <= 0 ) /*0x4fbd0e*/
    return 0; /*0x4fbd61*/
  while ( 1 ) /*0x4fbd19*/
  {
    v4 = *((unsigned int *)dword_A8022C + v2); /*0x4fbd19*/
    if ( v4 ) /*0x4fbd1e*/
    {
      if ( (ObjectClass *)v4 != this ) /*0x4fbd22*/
      {
        v5 = *(ObjectClass **)(v4 + 48); /*0x4fbd24*/
        if ( v5 != this->nextObject /*0x4fbd55*/
          && (v5 == (ObjectClass *)-1 || ((1 << (char)v5) & this->M22408) == 0)
          && DynamicVector::GetOrGrow((DynamicVector *)(v4 + 21840), a2) > 0 )
        {
          break; /*0x4fbd55*/
        }
      }
    }
    if ( ++v2 >= stru_A80220.? ) /*0x4fbd5f*/
      return 0; /*0x4fbd5f*/
  }
  return 1; /*0x4fbd61*/

}
} // namespace gamemd

// 0x4FCE00
namespace gamemd {
int E4Recv_4FCE00::sub_4FCE00(ObjectClass * a2, int a3, ObjectClass * a4)
{

  int attachedTag; // edx

  attachedTag = this->attachedTag; /*0x4fce04*/
  this->disguiseCreationFrame = a4; /*0x4fce07*/
  this->ambientParticles = a4; /*0x4fce0d*/
  *(unsigned int *)(attachedTag + 192) = a2; /*0x4fce17*/
  this->M90196 = a2; /*0x4fce1d*/
  return a2; /*0x4fce23*/

}
} // namespace gamemd

// 0x4FD120
namespace gamemd {
unsigned int * sub_4FD120(unsigned int * dword_A8EFF8, int a2)
{
  *dword_A8EFF8 = dword_A8EFF8; /*0x4fd12c*/
  dword_A8EFF8[1] = dword_A8EFFC; /*0x4fd134*/
  dword_A8EFF8[2] = dword_A8F000; /*0x4fd13d*/
  return dword_A8EFF8; /*0x4fd140*/
}
} // namespace gamemd

// 0x4FF540
namespace gamemd {
void nullsub_100(int a1)
{
  ; /*0x4ff540*/
}
} // namespace gamemd

// 0x4FFD50
namespace gamemd {
int E4Recv_4FFD50::sub_4FFD50(int a2)
{
  unsigned int *v4; // eax
  unsigned char v5[12]; // [esp+4h] [ebp-Ch] BYREF

  if ( !a2 ) /*0x4ffd5c*/
    return -1; /*0x4ffd5e*/
  v4 = (unsigned int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)a2 + 72))(a2, v5); /*0x4ffd6f*/
  return PathfindingClass::FindPath(v4); /*0x4ffd61*/
}
} // namespace gamemd

// 0x4FFD90
namespace gamemd {
int E4Recv_4FFD90::sub_4FFD90(short * a2)
{
  int v2; // eax
  unsigned int v4[3]; // [esp+0h] [ebp-Ch] BYREF

  v4[2] = 0; /*0x4ffd97*/
  v2 = a2[1]; /*0x4ffda2*/
  v4[0] = (*a2 << 8) + 128; /*0x4ffdaf*/
  v4[1] = (v2 << 8) + 128; /*0x4ffdc0*/
  return PathfindingClass::FindPath(v4); /*0x4ffdc9*/
}
} // namespace gamemd
