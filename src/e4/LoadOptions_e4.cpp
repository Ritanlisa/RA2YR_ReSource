// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>

#include "e4/e4_globals.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/LoadOptions_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/LoadGame_e4.hpp"
#include "e4/classes/Display_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/MixFile_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/String_e4.hpp"

// 0x559D60
namespace gamemd {
char LoadOptions::AddRef(LPCCH lpMultiByteStr)
{

  int v1; // esi
  wchar_t *StringCSF; // eax
  void * MessageBox;
  char Saved; // bl

  v1 = (HWND)((*(int (**)(int))(*(unsigned int *)MEMORY[0x887640] + 40))(MEMORY[0x887640]));
  StringCSF = GetStringCSF(aTxtLoading, 0, MEMORY[0x829F5C], 1052); /*0x559d83*/
  MessageBox = CreateMessageBox((LPARAM)StringCSF, 0, 0); /*0x559d97*/
  (*(void (**)(int))(*(unsigned int *)MEMORY[0x887640] + 12))(MEMORY[0x887640]); /*0x559d9b*/
  if ( MessageBox ) /*0x559da0*/
    Dialog::Show(MessageBox); /*0x559da4*/
  MEMORY[0xA8ED5C] = 0; /*0x559dae*/
  MEMORY[0xA8E378] = 0; /*0x559db5*/
  WTFMode::Shutdown(MEMORY[0xA8B238]); /*0x559dbc*/
  Saved = Game::LoadSaved(lpMultiByteStr); /*0x559dd0*/
  while ( (*(int (**)(int))(*(unsigned int *)MEMORY[0x887640] + 40))(MEMORY[0x887640]) < v1 ) /*0x559dd9*/
    (*(void (**)(int))(*(unsigned int *)MEMORY[0x887640] + 16))(MEMORY[0x887640]); /*0x559de3*/
  while ( (*(int (**)(int))(*(unsigned int *)MEMORY[0x887640] + 40))(MEMORY[0x887640]) > v1 ) /*0x559e02*/
    (*(void (**)(int))(*(unsigned int *)MEMORY[0x887640] + 12))(MEMORY[0x887640]); /*0x559e0c*/
  if ( MessageBox ) /*0x559e20*/
    Dialog::Destroy(MessageBox); /*0x559e24*/
  return Saved; /*0x559e29*/

}
} // namespace gamemd

// 0x559E40
namespace gamemd {
char LoadOptions::Release(LPCCH lpMultiByteStr, wchar_t * Source)
{

  #72 *StringCSF; // eax
  int MessageBox; // esi
  char v4; // bl

  StringCSF = GetStringCSF((#72 *)aTxtSavingGame, 0, g_Str_File_LoadDlg_CPP, 1107); /*0x559e55*/
  MessageBox = CreateMessageBox(StringCSF, 0, 0); /*0x559e69*/
  (*(void (**)(unsigned int))(*(unsigned int *)MEMORY[0x87F7E8][8086] + 12))(MEMORY[0x87F7E8][8086]); /*0x559e6d*/
  if ( MessageBox ) /*0x559e72*/
    Dialog::Show(MessageBox); /*0x559e76*/
  v4 = SaveScenarioClassGame_AdjustMPSaveFileName(lpMultiByteStr, Source, 0); /*0x559e90*/
  (*(void (**)(unsigned int))(*(unsigned int *)MEMORY[0x87F7E8][8086] + 16))(MEMORY[0x87F7E8][8086]); /*0x559e94*/
  if ( MessageBox ) /*0x559e99*/
    Dialog::Destroy(MessageBox); /*0x559e9d*/
  return v4; /*0x559ea4*/

}
} // namespace gamemd

// 0x67FD20
namespace gamemd {
char LoadOptions_Load(LPCCH lpMultiByteStr, int a2)
{
  IStorage *v3; // eax
  bool v4; // sf
  IStorage *ppstgOpen; // [esp+4h] [ebp-84h] BYREF
  WCHAR WideCharStr[64]; // [esp+8h] [ebp-80h] BYREF

  MultiByteToWideChar(0, 0, lpMultiByteStr, -1, WideCharStr, 64); /*0x67fd3f*/
  ppstgOpen = 0; /*0x67fd65*/
  if ( StgOpenStorage(WideCharStr, 0, 0x12u, 0, 0, &ppstgOpen) < 0 ) /*0x67fd75*/
  {
    v3 = ppstgOpen; /*0x67fd77*/
  LABEL_4:
    if ( v3 ) /*0x67fd93*/
      v3->lpVtbl->Release(v3); /*0x67fd98*/
    return 0; /*0x67fda4*/
  }
  v4 = ScenarioPropertyReadCOM(a2, (int)ppstgOpen) < 0; /*0x67fd89*/
  v3 = ppstgOpen; /*0x67fd8b*/
  if ( v4 ) /*0x67fd8f*/
    goto LABEL_4; /*0x67fd8f*/
  if ( ppstgOpen ) /*0x67fda7*/
    ppstgOpen->lpVtbl->Release(ppstgOpen); /*0x67fdac*/
  return 1; /*0x67fd9d*/
}
} // namespace gamemd

// 0x559EB0
namespace gamemd {
bool LoadOptions::ddtor(LPCSTR lpFileName)
{

  return ((int (*)(int))DeleteFileA)(lpFileName) == 1; /*0x559ec1*/

}
} // namespace gamemd

// 0x559ED0
namespace gamemd {
char LoadOptions::Read(wchar_t * Destination, int a2)
{

  const CHAR *v2; // edi
  char v3; // bl
  const wchar_t *v4; // eax
  const wchar_t *v5; // eax
  char *v6; // eax
  unsigned int v8[253]; // [esp+Ch] [ebp-3F4h] BYREF

  if ( !Destination && !a2 ) /*0x559eed*/
    return 0; /*0x559eed*/
  v2 = (const CHAR *)(a2 + 44); /*0x559eff*/
  if ( !_strcmpi((const void *)(a2 + 44), MultiByteStr) ) /*0x559f03*/
    return 0; /*0x559f03*/
  GameState::Reset(v8); /*0x559f17*/
  v3 = LoadOptions_Load(v2, (int)v8); /*0x559f27*/
  if ( !v3 ) /*0x559f2b*/
    return 0; /*0x55a03f*/
  if ( ReadPointerFromECX3(v8) == (_T)((_T))((_T))(g_abs_83D560) ) /*0x559f46*/
  {
    v5 = (const wchar_t *)_raw_name_type_info__QBEPBDXZ((type_info *)v8); /*0x559f60*/
    wcscpy(Destination, v5); /*0x559f67*/
    *((unsigned char *)Destination + 437) = 0; /*0x559f6f*/
  }
  else
  {
    v4 = (const wchar_t *)_raw_name_type_info__QBEPBDXZ((type_info *)v8); /*0x559f48*/
    wcscpy(Destination, v4); /*0x559f4f*/
    *((unsigned char *)Destination + 437) = 1; /*0x559f57*/
  }
  *((unsigned char *)Destination + 436) = v3; /*0x559f7b*/
  *((unsigned int *)Destination + 72) = LoadOptions::GetFlag99(v8); /*0x559f8a*/
  *((unsigned int *)Destination + 106) = LoadOptions::GetFlag98(v8); /*0x559f99*/
  *((unsigned int *)Destination + 110) = LoadOptions::GetFlag252(v8); /*0x559fa4*/
  strcpy((char *)Destination + 256, v2); /*0x559fc4*/
  v6 = LoadOptions::GetData((char *)v8); /*0x559fd1*/
  wcscpy(Destination + 148, (const wchar_t *)v6); /*0x559fde*/
  if ( !strlen((const char *)Destination + 256) ) /*0x559fed*/
    strcpy((char *)Destination + 256, (const char *)(a2 + 304)); /*0x55a013*/
  *((unsigned int *)Destination + 108) = *(unsigned int *)(a2 + 24); /*0x55a020*/
  *((unsigned int *)Destination + 107) = *(unsigned int *)(a2 + 20); /*0x55a029*/
  return 1; /*0x55a02f*/

}
} // namespace gamemd

// 0x55A050
namespace gamemd {
wchar_t * LoadOptions::Write()
{

  return GetStringCSF(aGuiLoadmission, 0, g_Str_File_LoadDlg_CPP, 1216); /*0x55a066*/

}
} // namespace gamemd

// 0x55A070
namespace gamemd {
void LoadOptions::Seek()
{

  return GetStringCSF(aGuiSavemission, 0, g_Str_File_LoadDlg_CPP, 1222); /*0x55a086*/

}
} // namespace gamemd

// 0x55A090
namespace gamemd {
void LoadOptions::Open()
{

  return GetStringCSF(aGuiDeletemissi, 0, g_Str_File_LoadDlg_CPP, 1228); /*0x55a0a6*/

}
} // namespace gamemd

// 0x55A0B0
namespace gamemd {
void LoadOptions::Close()
{

  return GetStringCSF(aTxtGameWasSave, 0, g_Str_File_LoadDlg_CPP, 1234); /*0x55a0c6*/

}
} // namespace gamemd

// 0x55A0D0
namespace gamemd {
LoadOptions * LoadOptions::QueryInterface(char * Block, char a2)
{

  int v3; // esi
  void *v4; // eax

  v3 = 0; /*0x55a0d4*/
  for ( *(unsigned int *)Block = &LoadOptionsClass::`vftable'; v3 < *((unsigned int *)Block + 12); ++v3 ) /*0x55a0e1*/
    __3_YAXPAX_Z(*(void **)(*((unsigned int *)Block + 9) + 4 * v3)); /*0x55a0ea*/
  (*(void (**)(char *))(*((unsigned int *)Block + 8) + 12))(Block + 32); /*0x55a102*/
  v4 = (void *)*((unsigned int *)Block + 9); /*0x55a105*/
  *((unsigned int *)Block + 8) = &VectorClass<FileEntryClass *>::`vftable'; /*0x55a108*/
  if ( v4 && *(Block + 45) ) /*0x55a112*/
  {
    __3_YAXPAX_Z(v4); /*0x55a11a*/
    *((unsigned int *)Block + 9) = 0; /*0x55a122*/
  }
  *(Block + 45) = 0; /*0x55a12d*/
  *((unsigned int *)Block + 10) = 0; /*0x55a133*/
  if ( (a2 & 1) != 0 ) /*0x55a13a*/
    __3_YAXPAX_Z(Block); /*0x55a13d*/
  return Block; /*0x55a147*/

}
} // namespace gamemd

// 0x55A180
namespace gamemd {
unsigned int LoadOptions::vt05(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x55a180*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x55a195*/
  else
    return 0; /*0x55a187*/

}
} // namespace gamemd

// 0x55A1A0
namespace gamemd {
int LoadOptions::vt06(int a2)
{

  return *(unsigned int *)(*((unsigned int *)this + 1) + 4 * a2); /*0x55a1aa*/

}
} // namespace gamemd

// 0x55A1B0
namespace gamemd {
char LoadOptions::vt01(int a2)
{

  int v2; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  v2 = *((char *)this + 2); /*0x55a1b2*/
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x55a1bd*/
  {
    v3 = 0; /*0x55a1bf*/
    if ( v2 <= 0 ) /*0x55a1c3*/
      return 1; /*0x55a1e3*/
    v4 = (unsigned int *)*((char *)this + 1); /*0x55a1c5*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x55a1cb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x55a1d4*/
    {
      ++v3; /*0x55a1d6*/
      ++v4; /*0x55a1d7*/
      if ( v3 >= v2 ) /*0x55a1dc*/
        return 1; /*0x55a1dc*/
    }
  }
  return 0; /*0x55a1de*/

}
} // namespace gamemd

// 0x55A330
namespace gamemd {
char LoadOptions::vt02(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x55a33c*/
  {
    *((unsigned char *)this + 12) = 0; /*0x55a342*/
    if ( a3 ) /*0x55a348*/
      v4 = a3; /*0x55a35e*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x55a35a*/
    *((unsigned char *)this + 12) = 1; /*0x55a362*/
    if ( !v4 ) /*0x55a366*/
      return 0; /*0x55a3da*/
    if ( *((unsigned int *)this + 1) ) /*0x55a368*/
    {
      v5 = *((unsigned int *)this + 2); /*0x55a36f*/
      if ( a2 < v5 ) /*0x55a374*/
        v5 = a2; /*0x55a376*/
      for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) ) /*0x55a37c*/
        ++i; /*0x55a381*/
      if ( *((unsigned char *)this + 13) ) /*0x55a38e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x55a399*/
        *((unsigned int *)this + 1) = 0; /*0x55a3a1*/
      }
    }
    *((unsigned int *)this + 1) = v4; /*0x55a3aa*/
    *((unsigned int *)this + 2) = a2; /*0x55a3b2*/
    *((unsigned char *)this + 13) = a3 == 0; /*0x55a3b5*/
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this + 12))(this); /*0x55a3be*/
  }
  v7 = *((unsigned int *)this + 2); /*0x55a3c1*/
  if ( v7 < *((unsigned int *)this + 4) ) /*0x55a3c9*/
    *((unsigned int *)this + 4) = v7; /*0x55a3cb*/
  return 1; /*0x55a3ce*/

}
} // namespace gamemd

// 0x55A3E0
namespace gamemd {
int LoadOptions::vt04(unsigned int * a2)
{

  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

  v2 = *((char *)this + 4); /*0x55a3e0*/
  result = 0; /*0x55a3e3*/
  if ( v2 <= 0 ) /*0x55a3e8*/
    return -1; /*0x55a3ff*/
  for ( i = (unsigned int *)*((char *)this + 1); *i != *a2; ++i ) /*0x55a3ee*/
  {
    if ( ++result >= v2 ) /*0x55a3fd*/
      return -1; /*0x55a3fd*/
  }
  return result; /*0x55a402*/

}
}
// 0x55A410
namespace gamemd {
VectorClass_flat * LoadOptions::Constructor_VectorClass_FileEntryClass___(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x55a413*/
  *Block = &VectorClass<FileEntryClass *>::`vftable'; /*0x55a416*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x55a420*/
  {
    RA2_OPDEL(v3); /*0x55a428*/
    *(Block + 1) = 0; /*0x55a430*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x55a43b*/
  *(Block + 2) = 0; /*0x55a441*/
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x55a448*/
    RA2_OPDEL(Block); /*0x55a44b*/
  return Block; /*0x55a455*/

}
} // namespace gamemd

// 0x55A460
namespace gamemd {
DynamicVector * LoadOptions::vt00(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x55a463*/
  *Block = &VectorClass<FileEntryClass *>::`vftable'; /*0x55a466*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x55a470*/
  {
    RA2_OPDEL(v3); /*0x55a478*/
    *(Block + 1) = 0; /*0x55a480*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x55a48b*/
  *(Block + 2) = 0; /*0x55a491*/
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x55a498*/
    RA2_OPDEL(Block); /*0x55a49b*/
  return Block; /*0x55a4a5*/

}
} // namespace gamemd

// 0x681100
namespace gamemd {
void LoadOptions::GetData()
{

  return (unsigned char *)this + 264; /*0x681106*/

}
} // namespace gamemd
