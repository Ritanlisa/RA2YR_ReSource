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

// 0x559D60
namespace gamemd {
char LoadOptions::AddRef(LPCCH lpMultiByteStr)
{

  int v1; // esi
  wchar_t *StringCSF; // eax
  Dialog *MessageBox; // edi
  char Saved; // bl
  const CHAR *lpMultiByteStr; // [esp+10h] [ebp+4h]

  v1 = (wchar_t *)((*(int (**)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 40))(dword_887640));
  StringCSF = (wchar_t *)(GetStringCSF((wchar_t *)(aTxtLoading), 0,(const char *)(g_Str_File_LoadDlg_CPP), 1052));
  MessageBox = (Dialog *)CreateMessageBox((LPARAM)StringCSF, 0, 0); /*0x559d97*/
  (*(void (**)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 12))(dword_887640); /*0x559d9b*/
  if ( MessageBox ) /*0x559da0*/
    ((Dialog *)(MessageBox))->Show(); /*0x559da4*/
  byte_A8ED5C = 0; /*0x559dae*/
  byte_A8E378 = 0; /*0x559db5*/
  WTFMode::Shutdown(&dword_A8B238); /*0x559dbc*/
  Saved = Game::LoadSaved(lpMultiByteStr); /*0x559dd0*/
  while ( (*(int (**)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 40))(dword_887640) < v1 ) /*0x559dd9*/
    (*(void (**)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 16))(dword_887640); /*0x559de3*/
  while ( (*(int (**)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 40))(dword_887640) > v1 ) /*0x559e02*/
    (*(void (**)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 12))(dword_887640); /*0x559e0c*/
  if ( MessageBox ) /*0x559e20*/
    Dialog::Destroy(MessageBox); /*0x559e24*/
  return Saved; /*0x559e29*/

}
} // namespace gamemd

// 0x559E40
namespace gamemd {
char LoadOptions::Release(LPCCH lpMultiByteStr, wchar_t * Source)
{

  wchar_t *StringCSF; // eax
  Dialog *MessageBox; // esi
  char v4; // bl
  wchar_t *Sourcea; // [esp+10h] [ebp+8h]
StringCSF = (wchar_t *)(GetStringCSF((wchar_t *)(aTxtSavingGame), 0,(const char *)(g_Str_File_LoadDlg_CPP), 1107));
  MessageBox = (Dialog *)CreateMessageBox((LPARAM)StringCSF, 0, 0); /*0x559e69*/
  (*(void (**)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 12))(dword_887640); /*0x559e6d*/
  if ( MessageBox ) /*0x559e72*/
    ((Dialog *)(MessageBox))->Show(); /*0x559e76*/
  v4 = SaveScenarioClassGame_AdjustMPSaveFileName((LPCCH)Source, Sourcea, 0); /*0x559e90*/
  (*(void (**)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 16))(dword_887640); /*0x559e94*/
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

  return DeleteFileA(lpFileName); /*0x559ec1*/

}
} // namespace gamemd

// 0x559ED0
namespace gamemd {
char LoadOptions::Read(wchar_t * Destination, int a2)
{

  const CHAR *v2; // edi
  char Options_Load; // bl
  const wchar_t *v4; // eax
  const wchar_t *v5; // eax
  char *Data; // eax
  ObjectClass v8; // [esp+Ch] [ebp-3F4h] BYREF
  int v9; // [esp+408h] [ebp+8h]

  if ( !a2 && !v9 ) /*0x559eed*/
    return 0; /*0x559eed*/
  v2 = (const CHAR *)(v9 + 44); /*0x559eff*/
  if ( !_strcmpi((char *)(v9 + 44),(const char *)(MultiByteStr)) ) /*0x559f03*/
    return 0; /*0x559f03*/
  GameState::Reset((GameState *)&v8); /*0x559f17*/
  Options_Load = LoadOptions_Load(v2, (int)&v8); /*0x559f27*/
  if ( !Options_Load ) /*0x559f2b*/
    return 0; /*0x55a03f*/
  if ( ReadPointerFromECX3((int)(&v8)) == dword_83D560 ) /*0x559f46*/
  {
    v5 = (const wchar_t *)_raw_name_type_info__QBEPBDXZ((type_info *)&v8); /*0x559f60*/
    wcscpy((wchar_t *)a2, v5); /*0x559f67*/
    *(unsigned char *)(a2 + 437) = 0; /*0x559f6f*/
  }
  else
  {
    v4 = (const wchar_t *)_raw_name_type_info__QBEPBDXZ((type_info *)&v8); /*0x559f48*/
    wcscpy((wchar_t *)a2, v4); /*0x559f4f*/
    *(unsigned char *)(a2 + 437) = 1; /*0x559f57*/
  }
  *(unsigned char *)(a2 + 436) = Options_Load; /*0x559f7b*/
  *(unsigned int *)(a2 + 288) = LoadOptions::GetFlag99((LoadOptions *)&v8); /*0x559f8a*/
  *(unsigned int *)(a2 + 424) = LoadOptions::GetFlag98((LoadOptions *)&v8); /*0x559f99*/
  *(unsigned int *)(a2 + 440) = LoadOptions::GetFlag252((LoadOptions *)&v8); /*0x559fa4*/
  strcpy((char *)(a2 + 256), v2); /*0x559fc4*/
  Data = LoadOptions::GetData((char *)&v8); /*0x559fd1*/
  wcscpy((wchar_t *)(a2 + 296), (const wchar_t *)Data); /*0x559fde*/
  if ( !strlen((const char *)(a2 + 256)) ) /*0x559fe5*/
    strcpy((char *)(a2 + 256), (const char *)(v9 + 304)); /*0x55a013*/
  *(unsigned int *)(a2 + 432) = *(unsigned int *)(v9 + 24); /*0x55a020*/
  *(unsigned int *)(a2 + 428) = *(unsigned int *)(v9 + 20); /*0x55a029*/
  return 1; /*0x55a02f*/

}
} // namespace gamemd

// 0x55A050
namespace gamemd {
wchar_t * LoadOptions::Write()
{

  return GetStringCSF((wchar_t *)(aGuiLoadmission), 0,(const char *)(g_Str_File_LoadDlg_CPP), 1216); /*0x55a066*/

}
} // namespace gamemd

// 0x55A070
namespace gamemd {
void LoadOptions::Seek(void *a1, void *a2, void *a3)
{

  return GetStringCSF((wchar_t *)(aGuiSavemission), 0,(const char *)(g_Str_File_LoadDlg_CPP), 1222); /*0x55a086*/

}
} // namespace gamemd

// 0x55A090
namespace gamemd {
void LoadOptions::Open(void *a1, void *a2, void *a3)
{

  return GetStringCSF((wchar_t *)(aGuiDeletemissi), 0,(const char *)(g_Str_File_LoadDlg_CPP), 1228); /*0x55a0a6*/

}
} // namespace gamemd

// 0x55A0B0
namespace gamemd {
void LoadOptions::Close(void *a1, void *a2)
{

  return GetStringCSF((wchar_t *)(aTxtGameWasSave), 0,(const char *)(g_Str_File_LoadDlg_CPP), 1234); /*0x55a0c6*/

}
} // namespace gamemd

// 0x55A0D0
namespace gamemd {
LoadOptions * LoadOptions::QueryInterface(char * Block, char a2)
{

  int v3; // esi
  void *v4; // eax

  v3 = 0; /*0x55a0d4*/
  for ( Block->m_0 = (int)&vt_LoadOptionsClass; v3 < *((unsigned int *)Block + 12); ++v3 ) /*0x55a0e1*/
    __3_YAXPAX_Z(*(void **)(*((unsigned int *)Block + 9) + 4 * v3)); /*0x55a0ea*/
  (*(void (**)(LoadOptionsClass *))(*((unsigned int *)Block + 8) + 12))(Block + 2); /*0x55a102*/
  v4 = (void *)*((unsigned int *)Block + 9); /*0x55a105*/
  *((unsigned int *)Block + 8) = (unsigned int)(&vt_VectorClass); /*0x55a108*/
  if ( v4 && *((unsigned char *)Block + 45) ) /*0x55a112*/
  {
    __3_YAXPAX_Z(v4); /*0x55a11a*/
    *((unsigned int *)Block + 9) = 0; /*0x55a122*/
  }
  *((unsigned char *)Block + 45) = 0; /*0x55a12d*/
  *((unsigned int *)Block + 10) = 0; /*0x55a133*/
  if ( (a2 & 1) != 0 ) /*0x55a13a*/
    __3_YAXPAX_Z(Block); /*0x55a13d*/
  return (char *)Block; /*0x55a147*/

}
} // namespace gamemd

// 0x55A180
namespace gamemd {
unsigned int LoadOptions::vt05(int a2)
{

  if ( LOBYTE(this->m_C) ) /*0x55a180*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x55a195*/
  else
    return 0; /*0x55a187*/

}
} // namespace gamemd

// 0x55A1A0
namespace gamemd {
int LoadOptions::vt06(int a2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x55a1aa*/

}
} // namespace gamemd

// 0x55A1B0
namespace gamemd {
char LoadOptions::vt01(int a2)
{

  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x55a1b2*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x55a1bd*/
  {
    v3 = 0; /*0x55a1bf*/
    if ( m_8 <= 0 ) /*0x55a1c3*/
      return 1; /*0x55a1e3*/
    v4 = *(unsigned int **)&this->m_1[3]; /*0x55a1c5*/
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

  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x55a33c*/
  {
    LOBYTE(this->m_C) = 0; /*0x55a342*/
    if ( a3 ) /*0x55a348*/
      v4 = a3; /*0x55a35e*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x55a35a*/
    LOBYTE(this->m_C) = 1; /*0x55a362*/
    if ( !v4 ) /*0x55a366*/
      return 0; /*0x55a3da*/
    if ( *(unsigned int *)&this->m_1[3] ) /*0x55a368*/
    {
      m_8 = this->m_8; /*0x55a36f*/
      if ( a2 < m_8 ) /*0x55a374*/
        m_8 = a2; /*0x55a376*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x55a37c*/
        ++i; /*0x55a381*/
      if ( BYTE1(this->m_C) ) /*0x55a38e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x55a399*/
        *(unsigned int *)&this->m_1[3] = 0; /*0x55a3a1*/
      }
    }
    *(unsigned int *)&this->m_1[3] = (unsigned int)(v4); /*0x55a3aa*/
    this->m_8 = a2; /*0x55a3b2*/
    BYTE1(this->m_C) = a3 == 0; /*0x55a3b5*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_PAVFileEntryClass *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x55a3be*/
  }
  v7 = this->m_8; /*0x55a3c1*/
  if ( v7 < this->m_10 ) /*0x55a3c9*/
    this->m_10 = v7; /*0x55a3cb*/
  return 1; /*0x55a3ce*/

}
} // namespace gamemd

// 0x55A3E0
namespace gamemd {
int LoadOptions::vt04(unsigned int * a2)
{

  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

  m_10 = this->m_10; /*0x55a3e0*/
  result = 0; /*0x55a3e3*/
  if ( m_10 <= 0 ) /*0x55a3e8*/
    return -1; /*0x55a3ff*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x55a3ee*/
  {
    if ( ++result >= m_10 ) /*0x55a3fd*/
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

  v3 = *(void **)&Block->m_1[3]; /*0x55a413*/
  *(unsigned int *)Block->__pad_0 = &vt_VectorClass; /*0x55a416*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x55a420*/
  {
    __3_YAXPAX_Z(v3); /*0x55a428*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x55a430*/
  }
  BYTE1(Block->m_C) = 0; /*0x55a43b*/
  Block->m_8 = 0; /*0x55a441*/
  if ( (a2 & 1) != 0 ) /*0x55a448*/
    __3_YAXPAX_Z(Block); /*0x55a44b*/
  return Block->__pad_0; /*0x55a455*/

}
} // namespace gamemd

// 0x55A460
namespace gamemd {
DynamicVector * LoadOptions::vt00(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x55a463*/
  *(unsigned int *)Block->__pad_0 = &vt_VectorClass; /*0x55a466*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x55a470*/
  {
    __3_YAXPAX_Z(v3); /*0x55a478*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x55a480*/
  }
  BYTE1(Block->m_C) = 0; /*0x55a48b*/
  Block->m_8 = 0; /*0x55a491*/
  if ( (a2 & 1) != 0 ) /*0x55a498*/
    __3_YAXPAX_Z(Block); /*0x55a49b*/
  return Block->__pad_0; /*0x55a4a5*/

}
} // namespace gamemd

// 0x681100
namespace gamemd {
void LoadOptions::GetData(void *a1)
{

  return (unsigned char *)this + 264; /*0x681106*/

}
} // namespace gamemd
