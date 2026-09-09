// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4052F0
int VocClass::Release()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall VocClass_Cleanup(int this)
{
  int v2; // ecx
  int result; // eax
  int v4; // ebx
  _DWORD **v5; // edi

  if ( (*(_BYTE *)(this + 24) & 1) == 0 ) /*0x4052f7*/
  {
    v2 = this->pVoiceChannel; /*0x4052fd*/
    if ( v2 && this == *(_DWORD *)(v2 + 192) ) /*0x405311*/
    {
      if ( (*(_BYTE *)(this + 24) & 2) != 0 ) /*0x405317*/
        Voice::Stop(v2); /*0x405319*/
      AudioStream::ReleaseChannel(*(_DWORD **)(this + 176)); /*0x405324*/
      *(_DWORD *)(this->pVoiceChannel + 192) = 0; /*0x40532f*/
      *(_DWORD *)(this->pVoiceChannel + 188) = 0; /*0x40533b*/
      *(_DWORD *)(this->pVoiceChannel + 180) = 0; /*0x405347*/
      *(_DWORD *)(this->pVoiceChannel + 184) = 0; /*0x405353*/
      *(_DWORD *)(this->pVoiceChannel + 144) = 0; /*0x40535f*/
      *(_DWORD *)(this->pVoiceChannel + 152) = 0; /*0x40536b*/
      *(_DWORD *)(this->pVoiceChannel + 156) = 0; /*0x405377*/
      this->pVoiceChannel = 0; /*0x40537d*/
    }
    result = this->ActiveBufferCount; /*0x405383*/
    v4 = 0; /*0x405389*/
    if ( result > 0 ) /*0x40538d*/
    {
      v5 = (_DWORD **)(this + 40); /*0x405390*/
      do /*0x4053a8*/
      {
        RefCount::Decrement(*v5); /*0x405395*/
        *v5 = 0; /*0x40539a*/
        result = this->ActiveBufferCount; /*0x40539c*/
        ++v4; /*0x4053a2*/
        ++v5; /*0x4053a3*/
      }
      while ( v4 < result ); /*0x4053a8*/
    }
    this->ActiveBufferCount = 0; /*0x4053ab*/
    *(_DWORD *)(this + 28) = 4; /*0x4053b1*/
    this->Attack = 0; /*0x4053b8*/
    *(_DWORD *)(this + 632) = 0; /*0x4053be*/
    *(_DWORD *)(this + 24) |= 1u; /*0x4053ca*/
  }
  return result; /*0x4053cf*/
}
}

// 0x751590
char * VocClass::GetSampleNameByIndex(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__fastcall VocClass::GetSampleNameByIndex(int a1)
{
  char *v1; // ecx

  if ( a1 < 0 || a1 >= MEMORY[0xB1D388] ) /*0x75159a*/
    return MEMORY[0x817474]; /*0x7515b5*/
  v1 = (char *)**((_DWORD **)MEMORY[0xB1D37C] + a1); /*0x7515a4*/
  if ( v1 ) /*0x7515a8*/
    return VocClass::GetSampleName(v1); /*0x7515aa*/
  else
    return MEMORY[0x846574]; /*0x7515af*/
}
}

// 0x753250
int VocClass::FindByName()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall VocClass::FindByName(void *this)
{
  int v3; // esi

  if ( !this ) /*0x753255*/
    return -1; /*0x753257*/
  v3 = 0; /*0x753262*/
  if ( *(int *)&stru_B1D188.__pad_2B8[112] <= 0 ) /*0x753266*/
    return -1; /*0x753288*/
  while ( _strcmpi(this, *(const void **)(*(_DWORD *)&stru_B1D188.__pad_2B8[100] + 4 * v3)) ) /*0x75327c*/
  {
    if ( ++v3 >= *(int *)&stru_B1D188.__pad_2B8[112] ) /*0x753286*/
      return -1; /*0x753286*/
  }
  return v3; /*0x75325a*/
}
}
