// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/BinkMovie_e4.hpp"

// 0x5CD290
void * MSVQAnim::GetFrameRect(int * a2)
{
  int v3; // eax
  int *v4; // ecx

  if ( (byte_ABFB98 & 1) == 0 ) /*0x5cd2a0*/
  {
    dword_ABFBA0 = 0; /*0x5cd2ab*/
    byte_ABFB98 |= 1u; /*0x5cd2b1*/
    dword_ABFBA4 = 0; /*0x5cd2b7*/
    dword_ABFBA8 = 0; /*0x5cd2bd*/
    dword_ABFBAC = 0; /*0x5cd2c3*/
    atexit(nullsub_190); /*0x5cd2c9*/
  }
  v3 = *(this + 7); /*0x5cd2d1*/
  v4 = (int *)(v3 + 52); /*0x5cd2d6*/
  if ( !v3 ) /*0x5cd2d9*/
    v4 = &dword_ABFBA0; /*0x5cd2db*/
  *a2 = *v4; /*0x5cd2e9*/
  a2[1] = v4[1]; /*0x5cd2ee*/
  a2[2] = v4[2]; /*0x5cd2f4*/
  a2[3] = v4[3]; /*0x5cd2fb*/
  return a2; /*0x5cd2e8*/
}
// 0x5CD320
int MSVQAnim::Stub()
{
  return *(this + 45); /*0x5cd323*/
}
// 0x5CECB0
MSVQAnim * MSVQAnim::QueryInterface(char a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx
  _DWORD **v4; // ecx
  void *v5; // edi

  v3 = (void (__thiscall ***)(_DWORD, int))*(this + 10); /*0x5cecb3*/
  *this = &MSVQAnim::`vftable'; /*0x5cecb6*/
  if ( v3 ) /*0x5cecbe*/
    (**v3)(v3, 1); /*0x5cecc4*/
  v4 = (_DWORD **)*(this + 7); /*0x5cecc6*/
  if ( v4 ) /*0x5ceccc*/
  {
    MovieContext::Cleanup(v4); /*0x5cecce*/
    v5 = (void *)*(this + 7); /*0x5cecd3*/
    if ( v5 ) /*0x5cecd8*/
    {
      BinkMovie::Cleanup((_DWORD *)*(this + 7)); /*0x5cecdc*/
      __3_YAXPAX_Z(v5); /*0x5cece2*/
    }
  }
  *this = &MSAnim::`vftable'; /*0x5cecee*/
  if ( (a2 & 1) != 0 ) /*0x5cecf7*/
    __3_YAXPAX_Z(this); /*0x5cecfa*/
  return this; /*0x5ced04*/
}