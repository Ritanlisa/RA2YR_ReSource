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
namespace gamemd {
char LoadOptions::AddRef(LPCCH lpMultiByteStr)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x559D60)
}
} // namespace gamemd

// 0x559E40
namespace gamemd {
char LoadOptions::Release(LPCCH lpMultiByteStr, wchar_t * Source)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x559E40)
}
} // namespace gamemd

// 0x67FD20
namespace gamemd {
char LoadOptions_Load(LPCCH lpMultiByteStr, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x67FD20)
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
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x559ED0)
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
wchar_t * LoadOptions::Seek(void *a1, void *a2, void *a3)
{

  return GetStringCSF((wchar_t *)(aGuiSavemission), 0,(const char *)(g_Str_File_LoadDlg_CPP), 1222); /*0x55a086*/

}
} // namespace gamemd

// 0x55A090
namespace gamemd {
wchar_t * LoadOptions::Open(void *a1, void *a2, void *a3)
{

  return GetStringCSF((wchar_t *)(aGuiDeletemissi), 0,(const char *)(g_Str_File_LoadDlg_CPP), 1228); /*0x55a0a6*/

}
} // namespace gamemd

// 0x55A0B0
namespace gamemd {
wchar_t * LoadOptions::Close(void *a1, void *a2)
{

  return GetStringCSF((wchar_t *)(aTxtGameWasSave), 0,(const char *)(g_Str_File_LoadDlg_CPP), 1234); /*0x55a0c6*/

}
} // namespace gamemd

// 0x55A0D0
namespace gamemd {
LoadOptions * LoadOptions::QueryInterface(char a2, int a3, int a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x55A0D0)
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
    (*(void (**)(void *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x55a3be*/
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
VectorClass_flat * LoadOptions::Constructor_VectorClass_FileEntryClass___(char a2, int a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x55A410)
}
} // namespace gamemd

// 0x55A460
namespace gamemd {
DynamicVector * LoadOptions::vt00(char a2, int a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x55A460)
}
} // namespace gamemd

// 0x681100
namespace gamemd {
char * LoadOptions::GetData(void *a1)
{

  return (char *)((unsigned char *)this + 264); /*0x681106*/

}
} // namespace gamemd
