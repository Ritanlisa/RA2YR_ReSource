// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x487E00
int MovementAI::IsPathMovementAllowed()
{
  _DWORD *v2; // esi

  if ( !g_WTFMode ) /*0x487e0b*/
    return *(this + 64) != 0; /*0x487e0b*/
  v2 = (_DWORD *)*(this + 57); /*0x487e0d*/
  if ( !v2 ) /*0x487e15*/
    return *(this + 64) != 0; /*0x487e15*/
  while ( (*(int (__thiscall **)(_DWORD *))(*v2 + 44))(v2) != 6 ) /*0x487e21*/
  {
    v2 = (_DWORD *)v2[12]; /*0x487e23*/
    if ( !v2 ) /*0x487e28*/
      return *(this + 64) != 0; /*0x487e28*/
  }
  return *(this + 64) != 1 && *(this + 64) != 0; /*0x487e48*/
}
// 0x4A5150
int MovementAI::IsProgressAtEnd()
{
  int v1; // esi
  int v2; // edx
  int v3; // eax

  if ( !*(_BYTE *)(this + 24) ) /*0x4a5150*/
    return 1; /*0x4a5150*/
  v1 = *(_DWORD *)(this + 20); /*0x4a515b*/
  if ( !v1 ) /*0x4a5164*/
    return 1; /*0x4a5164*/
  v2 = *(_DWORD *)(this + 8); /*0x4a5166*/
  v3 = *(_DWORD *)(this + 16); /*0x4a5169*/
  if ( v2 != -1 ) /*0x4a516f*/
  {
    if ( (int)g_CurrentFrame - v2 >= v3 ) /*0x4a517b*/
      v3 = 0; /*0x4a5181*/
    else
      v3 -= (int)g_CurrentFrame - v2; /*0x4a517d*/
  }
  return (double)(v1 - v3) / (double)*(int *)(this + 20) == 1.0; /*0x4a519e*/
}
// 0x4A5360
int MovementAI::Check()
{
  char result; // al

  result = 0; /*0x4a5363*/
  if ( *(this + 24) ) /*0x4a5360*/
  {
    if ( *(this + 25) ) /*0x4a5369*/
    {
      *(this + 24) = 0; /*0x4a536e*/
      *(this + 25) = 1; /*0x4a5371*/
    }
    if ( *(this + 24) ) /*0x4a5375*/
    {
      if ( !*(this + 25) ) /*0x4a537a*/
      {
        *(this + 24) = 0; /*0x4a537f*/
        *(this + 25) = 0; /*0x4a5382*/
      }
    }
  }
  return result; /*0x4a5385*/
}