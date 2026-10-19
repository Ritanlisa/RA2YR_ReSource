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
#include "e4/classes/E4Recv_6810C0_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/GameState_e4.hpp"
#include "e4/classes/WTFMode_e4.hpp"
#include "e4/classes/Block_e4.hpp"  // G42.36 C2027 supply

// 0x559D60
namespace gamemd {  // G42.18 ns repair
char LoadOptions::AddRef(LPCCH lpMultiByteStr)
{

  int v1; // esi
  v1 = (*(int (**)(MouseClass *))(dword_887640->HandleClick_ph + 40))(dword_887640); /*0x559d81*/
  wchar_t *StringCSF; // eax
  StringCSF = GetStringCSF((char *)(aTxtLoading), 0, g_Str_File_LoadDlg_CPP, 1052); /*0x559d83*/
  Dialog *MessageBox; // edi
  MessageBox = (Dialog *)CreateMessageBox((LPARAM)StringCSF, 0, 0); /*0x559d97*/
  (*(void (**)(MouseClass *))(dword_887640->HandleClick_ph + 12))(dword_887640); /*0x559d9b*/
  if ( MessageBox ) /*0x559da0*/
    ((Dialog *)(MessageBox))->Show(); /*0x559da4*/
  byte_A8ED5C = 0; /*0x559dae*/
  byte_A8E378 = 0; /*0x559db5*/
  ((WTFMode*)&dword_A8B238)->Shutdown(); /*0x559dbc*/
  char Saved; // bl
  const CHAR *lpMultiByteStr; // [esp+10h] [ebp+4h]
  Saved = ((Game *)(lpMultiByteStr))->LoadSaved(); /*0x559dd0*/
  while ( (*(int (**)(MouseClass *))(dword_887640->HandleClick_ph + 40))(dword_887640) < v1 ) /*0x559dd9*/
    (*(void (**)(MouseClass *))(dword_887640->HandleClick_ph + 16))(dword_887640); /*0x559de3*/
  while ( (*(int (**)(MouseClass *))(dword_887640->HandleClick_ph + 40))(dword_887640) > v1 ) /*0x559e02*/
    (*(void (**)(MouseClass *))(dword_887640->HandleClick_ph + 12))(dword_887640); /*0x559e0c*/
  if ( MessageBox ) /*0x559e20*/
    ((Dialog *)(MessageBox))->Destroy(); /*0x559e24*/
  return Saved; /*0x559e29*/
}  // G42.18 ns repair
} // namespace gamemd

// 0x559E40
namespace gamemd {
char LoadOptions::Release(LPCCH lpMultiByteStr, wchar_t * Source)
{

  wchar_t *StringCSF; // eax
  StringCSF = GetStringCSF(aTxtSavingGame, 0, g_Str_File_LoadDlg_CPP, 1107); /*0x559e55*/
  Dialog *MessageBox; // esi
  MessageBox = (Dialog *)CreateMessageBox((LPARAM)StringCSF, 0, 0); /*0x559e69*/
  (*(void (**)(MouseClass *))(dword_887640->HandleClick_ph + 12))(dword_887640); /*0x559e6d*/
  if ( MessageBox ) /*0x559e72*/
    ((Dialog *)(MessageBox))->Show(); /*0x559e76*/
  char v4; // bl
  wchar_t *Sourcea; // [esp+10h] [ebp+8h]
  v4 = SaveScenarioClassGame_AdjustMPSaveFileName((LPCCH)Source, Sourcea, 0); /*0x559e90*/
  (*(void (**)(MouseClass *))(dword_887640->HandleClick_ph + 16))(dword_887640); /*0x559e94*/
  if ( MessageBox ) /*0x559e99*/
    ((Dialog *)(MessageBox))->Destroy(); /*0x559e9d*/
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
  return DeleteFileA(lpFileName); /*0x559ec1*/
}
} // namespace gamemd

// 0x559ED0
namespace gamemd {
char LoadOptions::Read(wchar_t * Destination, int a2, void *a3)
{

  const CHAR *v2; // edi
  char Options_Load; // bl
  const wchar_t *v4; // eax
  const wchar_t *v5; // eax
  char *Data; // eax
  ObjectClass v8; // [esp+Ch] [ebp-3F4h] BYREF
  CHAR *v9; // [esp+408h] [ebp+8h]

  if ( !Destination && !v9 ) /*0x559eed*/
    return 0; /*0x559eed*/
  v2 = v9 + 44; /*0x559eff*/
  if ( !_strcmpi(v9 + 44, MultiByteStr) ) /*0x559f03*/
    return 0; /*0x559f03*/
  GameState::Reset((GameState *)&v8); /*0x559f17*/
  Options_Load = LoadOptions_Load(v2, (int)&v8); /*0x559f27*/
  if ( !Options_Load ) /*0x559f2b*/
    return 0; /*0x55a03f*/
  if ( ReadPointerFromECX3(&v8) == dword_83D560 ) /*0x559f46*/
  {
    v5 = (const wchar_t *)_raw_name_type_info__QBEPBDXZ((type_info *)&v8); /*0x559f60*/
    wcscpy((wchar_t *)Destination, v5); /*0x559f67*/
    Destination->u8_1B5 = 0; /*0x559f6f*/
  }
  else
  {
    v4 = (const wchar_t *)_raw_name_type_info__QBEPBDXZ((type_info *)&v8); /*0x559f48*/
    wcscpy((wchar_t *)Destination, v4); /*0x559f4f*/
    Destination->u8_1B5 = 1; /*0x559f57*/
  }
  Destination->u8_1B4 = Options_Load; /*0x559f7b*/
  Destination->u32_120 = LoadOptions::GetFlag99((LoadOptions *)&v8); /*0x559f8a*/
  Destination->u32_1A8 = LoadOptions::GetFlag98((LoadOptions *)&v8); /*0x559f99*/
  Destination->u32_1B8 = LoadOptions::GetFlag252((LoadOptions *)&v8); /*0x559fa4*/
  strcpy(&Destination->q100, v2); /*0x559fc4*/
  Data = LoadOptions::GetData((char *)&v8); /*0x559fd1*/
  wcscpy(&Destination->q128, (const wchar_t *)Data); /*0x559fde*/
  if ( !strlen(&Destination->q100) ) /*0x559fe5*/
    strcpy((char *)(Destination + 256), v9 + 304); /*0x55a013*/
  Destination->u32_1B0 = *((unsigned int *)v9 + 6); /*0x55a020*/
  Destination->u32_1AC = *((unsigned int *)v9 + 5); /*0x55a029*/
  return 1; /*0x55a02f*/

}
} // namespace gamemd

// 0x55A050
namespace gamemd {
wchar_t * LoadOptions::Write(void *a1)
{
  return GetStringCSF((char *)(aGuiLoadmission), 0, g_Str_File_LoadDlg_CPP, 1216); /*0x55a066*/
}
} // namespace gamemd

// 0x55A070
namespace gamemd {
wchar_t * LoadOptions::Seek(void *a1, void *a2, void *a3)
{
  return GetStringCSF((char *)(aGuiSavemission), 0, g_Str_File_LoadDlg_CPP, 1222); /*0x55a086*/
}
} // namespace gamemd

// 0x55A090
namespace gamemd {
wchar_t * LoadOptions::Open(void *a1, void *a2, void *a3)
{
  return GetStringCSF((char *)(aGuiDeletemissi), 0, g_Str_File_LoadDlg_CPP, 1228); /*0x55a0a6*/
}
} // namespace gamemd

// 0x55A0B0
namespace gamemd {
wchar_t * LoadOptions::Close(void *a1, void *a2)
{
  return GetStringCSF((char *)(aTxtGameWasSave), 0, g_Str_File_LoadDlg_CPP, 1234); /*0x55a0c6*/
}
} // namespace gamemd

// 0x55A0D0
namespace gamemd {
LoadOptions * LoadOptions::QueryInterface(char a2, int a3, int a1)
{


  int v3 = 0; // esi /*0x55a0d4*/
  for ( a3->m_0 = (int)&g_ptr_7ED2E4; v3 < *((unsigned int *)a3 + 12); ++v3 ) /*0x55a0e1*/
    __3_YAXPAX_Z(*(void **)(*((unsigned int *)a3 + 9) + 4 * v3)); /*0x55a0ea*/
  (*(void (**)(LoadOptionsClass *))(*((unsigned int *)a3 + 8) + 12))(a3 + 2); /*0x55a102*/
  void *v4; // eax
  v4 = (void *)*((unsigned int *)a3 + 9); /*0x55a105*/
  *((unsigned int *)a3 + 8) = (unsigned int)(&g_ptr_7E8500); /*0x55a108*/
  if ( v4 && *((unsigned char *)a3 + 45) ) /*0x55a112*/
  {
    __3_YAXPAX_Z(v4); /*0x55a11a*/
    *((unsigned int *)a3 + 9) = 0; /*0x55a122*/
  }
  *((unsigned char *)a3 + 45) = 0; /*0x55a12d*/
  *((unsigned int *)a3 + 10) = 0; /*0x55a133*/
  if ( (a3 & 1) != 0 ) /*0x55a13a*/
    __3_YAXPAX_Z(a3); /*0x55a13d*/
  return (gamemd::LoadOptions *)((char *)a3); /*0x55a147*/

}
} // namespace gamemd

// 0x55A180
namespace gamemd {
unsigned int LoadOptions::vt05(int a2)
{
  if ( (this->__pad_00C) ) /*0x55a180*/
    return (unsigned int)(a2 - *&this->max_entries) >> 2; /*0x55a195*/
  else
    return 0; /*0x55a187*/
}
} // namespace gamemd

// 0x55A1A0
namespace gamemd {
int LoadOptions::vt06(int a2)
{
  return *(unsigned int *)(*&this->max_entries + 4 * a2); /*0x55a1aa*/
}
} // namespace gamemd

// 0x55A1B0
namespace gamemd {
char LoadOptions::vt01(int a2)
{

  int m_8; // esi
  m_8 = (int)(*&this->Capacity); /*0x55a1b2*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x55a1bd*/
  {
    int v3 = 0; // edx /*0x55a1bf*/
    if ( m_8 <= 0 ) /*0x55a1c3*/
      return 1; /*0x55a1e3*/
    unsigned int *v4; // eax
    v4 = (unsigned int *)(*&this->max_entries); /*0x55a1c5*/
    int v5; // ecx
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x55a1cb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x55a1d4*/
    {
      ++v3; /*0x55a1d6*/
      ++v4; /*0x55a1d7*/
      if ( v3 >= m_8 ) /*0x55a1dc*/
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


  if ( a2 ) /*0x55a33c*/
  {
    LOBYTE(this->__pad_00C) = 0; /*0x55a342*/
    unsigned int *v4; // edi
    if ( a3 ) /*0x55a348*/
      v4 = a3; /*0x55a35e*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x55a35a*/
    LOBYTE(this->__pad_00C) = 1; /*0x55a362*/
    if ( !v4 ) /*0x55a366*/
      return 0; /*0x55a3da*/
    if ( *&this->mode ) /*0x55a368*/
    {
      int m_8; // ecx
      m_8 = (int)(this->Capacity); /*0x55a36f*/
      if ( a2 < m_8 ) /*0x55a374*/
        m_8 = a2; /*0x55a376*/
      int i; // eax
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->mode + 4 * i - 4) ) /*0x55a37c*/
        ++i; /*0x55a381*/
      if ( BYTE1(this->__pad_00C) ) /*0x55a38e*/
      {
        __3_YAXPAX_Z(*&this->mode); /*0x55a399*/
        *&this->mode = 0; /*0x55a3a1*/
      }
    }
    *&this->mode = v4; /*0x55a3aa*/
    this->Capacity = (void *)(a2); /*0x55a3b2*/
    BYTE1(this->__pad_00C) = a3 == 0; /*0x55a3b5*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_PAVFileEntryClass *))(*(unsigned int *)this->extension + 12))(this); /*0x55a3be*/
  }
  int v7; // eax
  v7 = (int)(this->Capacity); /*0x55a3c1*/
  if ( v7 < this->max_entries ) /*0x55a3c9*/
    this->max_entries = v7; /*0x55a3cb*/
  return 1; /*0x55a3ce*/

}
} // namespace gamemd

// 0x55A3E0
namespace gamemd {
int LoadOptions::vt04(unsigned int * a2)
{

  int m_10 = this->max_entries; // edx /*0x55a3e0*/
  int result = 0; // eax /*0x55a3e3*/
  if ( m_10 <= 0 ) /*0x55a3e8*/
    return -1; /*0x55a3ff*/
  unsigned int *i; // ecx
  for ( i = *&this->max_entries; *i != *a2; ++i ) /*0x55a3ee*/
  {
    if ( ++result >= m_10 ) /*0x55a3fd*/
      return -1; /*0x55a3fd*/
  }
  return result; /*0x55a402*/
}
}
// 0x55A410
namespace gamemd {
VectorClass_flat * LoadOptions::Constructor_VectorClass_FileEntryClass___(char a2, int a1)
{

  void *v3; // eax
  v3 = *(void **)&a1->m_1[3]; /*0x55a413*/
  /* X11: vtable install elided (X67 star-deref, RHS g_ptr_7E8500) */  /*0x55a416*/
  if ( v3 && (((unsigned char *)&(a1->m_C))[1]) ) /*0x55a420*/
  {
    operator delete((v3)); /*0x55a428*/
    *(unsigned int *)&a1->m_1[3] = 0; /*0x55a430*/
  }
  (((unsigned char *)&(a1->m_C))[1]) = 0; /*0x55a43b*/
  a1->m_8 = 0; /*0x55a441*/
  if ( (a1 & 1) != 0 ) /*0x55a448*/
    operator delete((void *)(a1)); /*0x55a44b*/
  return a1->__pad_0; /*0x55a455*/
}
} // namespace gamemd

// 0x55A460
namespace gamemd {
DynamicVector * LoadOptions::vt00(char a2, int a1)
{

  void *v3; // eax
  v3 = *(void **)&a1->m_1[3]; /*0x55a463*/
  /* X11: vtable install elided (X67 star-deref, RHS g_ptr_7E8500) */  /*0x55a466*/
  if ( v3 && (((unsigned char *)&(a1->m_C))[1]) ) /*0x55a470*/
  {
    operator delete((v3)); /*0x55a478*/
    *(unsigned int *)&a1->m_1[3] = 0; /*0x55a480*/
  }
  (((unsigned char *)&(a1->m_C))[1]) = 0; /*0x55a48b*/
  a1->m_8 = 0; /*0x55a491*/
  if ( (a1 & 1) != 0 ) /*0x55a498*/
    operator delete((void *)(a1)); /*0x55a49b*/
  return a1->__pad_0; /*0x55a4a5*/
}
} // namespace gamemd

// 0x681100
namespace gamemd {
char * LoadOptions::GetData(void *a1)
{

  return (char *)(a1 + 264); /*0x681106*/

}
} // namespace gamemd
