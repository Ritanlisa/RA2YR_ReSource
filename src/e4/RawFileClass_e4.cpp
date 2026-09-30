// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/RawFileClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x65CA00
namespace gamemd {
int RawFileClass::Dtor()
{

  int v2; // edi
  DWORD LastError; // eax
  int v4; // [esp-8h] [ebp-Ch]

  *this = (int)&vt_RawFileClass; /*0x65ca03*/
  if ( (unsigned __int8)RawFileClass::Write() ) /*0x65ca09*/
  {
    if ( !CloseHandle((HANDLE)*((char *)this + 5)) ) /*0x65ca17*/
    {
      v2 = *this; /*0x65ca25*/
      v4 = *((char *)this + 6); /*0x65ca27*/
      LastError = GetLastError(); /*0x65ca29*/
      (*(void (**)(int *, DWORD, unsigned int, int))(v2 + 64))(this, LastError, 0, v4); /*0x65ca32*/
    }
    *((char *)this + 5) = -1; /*0x65ca36*/
  }
  if ( *((unsigned char *)this + 32) && *((char *)this + 6) ) /*0x65ca44*/
  {
    free((void *)*((char *)this + 6)); /*0x65ca4c*/
    *((char *)this + 6) = 0; /*0x65ca54*/
    *((unsigned char *)this + 32) = 0; /*0x65ca5b*/
  }
  *this = (int)&vt_FileClass; /*0x65ca5f*/

}
} // namespace gamemd
// 0x65CB30
namespace gamemd {
int RawFileClass::Close(int a2, int a3)
{

  (*(void (**)(void *, int))(*(unsigned int *)this + 8))(this, a2); /*0x65cb3c*/
  return (*(int (**)(void *, int))(*(unsigned int *)this + 28))(this, a3); /*0x65cb4b*/

}
} // namespace gamemd