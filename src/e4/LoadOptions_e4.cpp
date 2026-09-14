// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x559D60
namespace gamemd {
char LoadOptions::AddRef(LPCCH lpMultiByteStr)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall LoadOptions::_vt01(LPCCH lpMultiByteStr)
{
  int v1; // esi
  wchar_t *StringCSF; // eax
  HWND MessageBox; // edi
  char Saved; // bl

  v1 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 40))(MEMORY[0x887640]); /*0x559d81*/
  StringCSF = GetStringCSF(aTxtLoading, 0, MEMORY[0x829F5C], 1052); /*0x559d83*/
  MessageBox = CreateMessageBox((LPARAM)StringCSF, 0, 0); /*0x559d97*/
  (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 12))(MEMORY[0x887640]); /*0x559d9b*/
  if ( MessageBox ) /*0x559da0*/
    Dialog::Show(MessageBox); /*0x559da4*/
  MEMORY[0xA8ED5C] = 0; /*0x559dae*/
  MEMORY[0xA8E378] = 0; /*0x559db5*/
  WTFMode::Shutdown(MEMORY[0xA8B238]); /*0x559dbc*/
  Saved = Game::LoadSaved(lpMultiByteStr); /*0x559dd0*/
  while ( (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 40))(MEMORY[0x887640]) < v1 ) /*0x559dd9*/
    (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 16))(MEMORY[0x887640]); /*0x559de3*/
  while ( (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 40))(MEMORY[0x887640]) > v1 ) /*0x559e02*/
    (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 12))(MEMORY[0x887640]); /*0x559e0c*/
  if ( MessageBox ) /*0x559e20*/
    Dialog::Destroy(MessageBox); /*0x559e24*/
  return Saved; /*0x559e29*/
}
}
} // namespace gamemd

// 0x559E40
namespace gamemd {
char LoadOptions::Release(LPCCH lpMultiByteStr, wchar_t * Source)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall LoadOptions::_vt02(LPCCH lpMultiByteStr, wchar_t *Source)
{
  wchar_t *StringCSF; // eax
  HWND MessageBox; // esi
  char v4; // bl

  StringCSF = GetStringCSF(aTxtSavingGame, 0, MEMORY[0x829F5C], 1107); /*0x559e55*/
  MessageBox = CreateMessageBox((LPARAM)StringCSF, 0, 0); /*0x559e69*/
  (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 12))(MEMORY[0x887640]); /*0x559e6d*/
  if ( MessageBox ) /*0x559e72*/
    Dialog::Show(MessageBox); /*0x559e76*/
  v4 = SaveScenarioClassGame_AdjustMPSaveFileName(lpMultiByteStr, Source, 0); /*0x559e90*/
  (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 16))(MEMORY[0x887640]); /*0x559e94*/
  if ( MessageBox ) /*0x559e99*/
    Dialog::Destroy(MessageBox); /*0x559e9d*/
  return v4; /*0x559ea4*/
}
}
} // namespace gamemd

// 0x55A0D0
namespace gamemd {
LoadOptions * LoadOptions::QueryInterface(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LoadOptions *__thiscall LoadOptions::QueryInterface(char *this, char a2)
{
  int v3; // esi
  void *v4; // eax

  v3 = 0; /*0x55a0d4*/
  for ( *(_DWORD *)this = &vt_LoadOptionsClass; v3 < this->capacity; ++v3 ) /*0x55a0e1*/
    __3_YAXPAX_Z(*(void **)(*((_DWORD *)this + 9) + 4 * v3)); /*0x55a0ea*/
  (*(void (__thiscall **)(char *))(*((_DWORD *)this + 8) + 12))(this + 32); /*0x55a102*/
  v4 = (void *)*((_DWORD *)this + 9); /*0x55a105*/
  *((_DWORD *)this + 8) = &vt_VectorClass_FileEntryClass; /*0x55a108*/
  if ( v4 && *(this + 45) ) /*0x55a112*/
  {
    __3_YAXPAX_Z(v4); /*0x55a11a*/
    *((_DWORD *)this + 9) = 0; /*0x55a122*/
  }
  *(this + 45) = 0; /*0x55a12d*/
  *((_DWORD *)this + 10) = 0; /*0x55a133*/
  if ( (a2 & 1) != 0 ) /*0x55a13a*/
    __3_YAXPAX_Z(this); /*0x55a13d*/
  return (LoadOptions *)this; /*0x55a147*/
}
}
} // namespace gamemd

// 0x55A180
namespace gamemd {
unsigned int LoadOptions::vt05(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall LoadOptions::vt05(int this, int a2)
{
  if ( (unsigned char)this->field_0C ) /*0x55a180*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x55a195*/
  else
    return 0; /*0x55a187*/
}
}
} // namespace gamemd

// 0x55A1A0
namespace gamemd {
int LoadOptions::vt06(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall LoadOptions::vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(*(this + 1) + 4 * a2); /*0x55a1aa*/
}
}
} // namespace gamemd

// 0x55A1B0
namespace gamemd {
char LoadOptions::vt01(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall LoadOptions::vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = *(this + 2); /*0x55a1b2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x55a1bd*/
  {
    v3 = 0; /*0x55a1bf*/
    if ( v2 <= 0 ) /*0x55a1c3*/
      return 1; /*0x55a1e3*/
    v4 = (_DWORD *)*(this + 1); /*0x55a1c5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x55a1cb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x55a1d4*/
    {
      ++v3; /*0x55a1d6*/
      ++v4; /*0x55a1d7*/
      if ( v3 >= v2 ) /*0x55a1dc*/
        return 1; /*0x55a1dc*/
    }
  }
  return 0; /*0x55a1de*/
}
}
} // namespace gamemd

// 0x55A330
namespace gamemd {
char LoadOptions::vt02(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall LoadOptions::vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x55a33c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x55a342*/
    if ( a3 ) /*0x55a348*/
      v4 = a3; /*0x55a35e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x55a35a*/
    *((_BYTE *)this + 12) = 1; /*0x55a362*/
    if ( !v4 ) /*0x55a366*/
      return 0; /*0x55a3da*/
    if ( *((_DWORD *)this + 1) ) /*0x55a368*/
    {
      v5 = *((_DWORD *)this + 2); /*0x55a36f*/
      if ( a2 < v5 ) /*0x55a374*/
        v5 = a2; /*0x55a376*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(*((_DWORD *)this + 1) + 4 * i - 4) ) /*0x55a37c*/
        ++i; /*0x55a381*/
      if ( *((_BYTE *)this + 13) ) /*0x55a38e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x55a399*/
        *((_DWORD *)this + 1) = 0; /*0x55a3a1*/
      }
    }
    *((_DWORD *)this + 1) = v4; /*0x55a3aa*/
    *((_DWORD *)this + 2) = a2; /*0x55a3b2*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x55a3b5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x55a3be*/
  }
  v7 = *((_DWORD *)this + 2); /*0x55a3c1*/
  if ( v7 < this->max_entries ) /*0x55a3c9*/
    this->max_entries = v7; /*0x55a3cb*/
  return 1; /*0x55a3ce*/
}
}
} // namespace gamemd

// 0x55A3E0
namespace gamemd {
int LoadOptions::vt04(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall LoadOptions::vt04(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = *(this + 4); /*0x55a3e0*/
  result = 0; /*0x55a3e3*/
  if ( v2 <= 0 ) /*0x55a3e8*/
    return -1; /*0x55a3ff*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x55a3ee*/
  {
    if ( ++result >= v2 ) /*0x55a3fd*/
      return -1; /*0x55a3fd*/
  }
  return result; /*0x55a402*/
}
}
} // namespace gamemd

// 0x55A410
namespace gamemd {
VectorClass * LoadOptions::Constructor_VectorClass_FileEntryClass___(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
VectorClass *__thiscall LoadOptions::Constructor_VectorClass_FileEntryClass___(_DWORD *this, char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 1); /*0x55a413*/
  *this = &vt_VectorClass_FileEntryClass; /*0x55a416*/
  if ( v3 && *((_BYTE *)this + 13) ) /*0x55a420*/
  {
    __3_YAXPAX_Z(v3); /*0x55a428*/
    *(this + 1) = 0; /*0x55a430*/
  }
  *((_BYTE *)this + 13) = 0; /*0x55a43b*/
  *(this + 2) = 0; /*0x55a441*/
  if ( (a2 & 1) != 0 ) /*0x55a448*/
    __3_YAXPAX_Z(this); /*0x55a44b*/
  return (VectorClass *)this; /*0x55a455*/
}
}
} // namespace gamemd

// 0x55A460
namespace gamemd {
DynamicVector * LoadOptions::vt00(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
DynamicVector *__thiscall LoadOptions::vt00(_DWORD *this, char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 1); /*0x55a463*/
  *this = &vt_VectorClass_FileEntryClass; /*0x55a466*/
  if ( v3 && *((_BYTE *)this + 13) ) /*0x55a470*/
  {
    __3_YAXPAX_Z(v3); /*0x55a478*/
    *(this + 1) = 0; /*0x55a480*/
  }
  *((_BYTE *)this + 13) = 0; /*0x55a48b*/
  *(this + 2) = 0; /*0x55a491*/
  if ( (a2 & 1) != 0 ) /*0x55a498*/
    __3_YAXPAX_Z(this); /*0x55a49b*/
  return (DynamicVector *)this; /*0x55a4a5*/
}
}
} // namespace gamemd

// 0x67FD20
namespace gamemd {
char LoadOptions_Load(LPCCH lpMultiByteStr, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall LoadOptions_Load(LPCCH lpMultiByteStr, int a2)
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
}
} // namespace gamemd

// 0x681100
namespace gamemd {
char * LoadOptions::GetData()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall sub_681100(char *this)
{
  return this + 264; /*0x681106*/
}
}
} // namespace gamemd

// 0x559EB0
namespace gamemd {
bool LoadOptions::ddtor(LPCSTR lpFileName)
{
{
    return DeleteFileA(lpFileName);
}
}
} // namespace gamemd

// 0x559ED0
namespace gamemd {
char LoadOptions::Read(wchar_t * Destination, int a2)
{
{
    const CHAR *v2;
    char v3;
    const wchar_t *v4;
    const wchar_t *v5;
    char *v6;
    int v8[253];
    if ( !Destination && !a2 )
    return 0;
    v2 = (const CHAR *)(a2 + 44);
    if ( !_strcmpi((const void *)(a2 + 44), MultiByteStr) )
    return 0;
    GameState::Reset(v8);
    v3 = LoadOptions_Load(v2, (int)v8);
    if ( !v3 )
    return 0;
    if ( ReadPointerFromECX3(v8) == DataGlobal_83D560 )
  {
    v5 = (const wchar_t *)_raw_name_type_info__QBEPBDXZ((type_info *)v8);
    wcscpy(Destination, v5);
    *((char *)(Destination) + 437) = 0;
  }
    else
  {
    v4 = (const wchar_t *)_raw_name_type_info__QBEPBDXZ((type_info *)v8);
    wcscpy(Destination, v4);
    *((char *)(Destination) + 437) = 1;
  }
    *((char *)(Destination) + 436) = v3;
    *((int *)(Destination) + 72) = LoadOptions::GetFlag99(v8);
    *((int *)(Destination) + 106) = LoadOptions::GetFlag98(v8);
    *((int *)(Destination) + 110) = LoadOptions::GetFlag252(v8);
    strcpy((char *)(Destination) + 256, v2);
    v6 = LoadOptions::GetData((char *)v8);
    wcscpy(Destination + 148, (const wchar_t *)v6);
    if ( !strlen((const char *)(Destination) + 256) )
    strcpy((char *)(Destination) + 256, (const char *)(a2 + 304));
    *((int *)(Destination) + 108) = *(int *)(a2 + 24);
    *((int *)(Destination) + 107) = *(int *)(a2 + 20);
    return 1;
}
}
} // namespace gamemd

// 0x55A050
namespace gamemd {
wchar_t * LoadOptions::Write()
{
{
    return GetStringCSF(aGuiLoadmission, 0, g_Str_File_LoadDlg_CPP, 1216);
}
}
} // namespace gamemd

// 0x55A070
namespace gamemd {
wchar_t * LoadOptions::Seek()
{
{
    return GetStringCSF(aGuiSavemission, 0, g_Str_File_LoadDlg_CPP, 1222);
}
}
} // namespace gamemd

// 0x55A090
namespace gamemd {
wchar_t * LoadOptions::Open()
{
{
    return GetStringCSF(aGuiDeletemissi, 0, g_Str_File_LoadDlg_CPP, 1228);
}
}
} // namespace gamemd

// 0x55A0B0
namespace gamemd {
wchar_t * LoadOptions::Close()
{
{
    return GetStringCSF(aTxtGameWasSave, 0, g_Str_File_LoadDlg_CPP, 1234);
}
}
} // namespace gamemd
