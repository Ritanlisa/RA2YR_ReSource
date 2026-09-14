// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x540D80
int IPXManagerClass::sendPacket(int a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall IPXManagerClass::_vt18(_DWORD *this, int a2, int a3, int a4)
{
  int v4; // eax
  int result; // eax

  v4 = *(this + 19); /*0x540d80*/
  if ( v4 ) /*0x540d93*/
  {
    *(_DWORD *)(v4 + 40) = a2; /*0x540d95*/
    *(_DWORD *)(*(this + 19) + 44) = a3; /*0x540d9b*/
    *(_DWORD *)(*(this + 19) + 48) = a4; /*0x540da1*/
  }
  result = *(this + 20); /*0x540da4*/
  if ( result ) /*0x540da9*/
  {
    *(_DWORD *)(result + 40) = a2; /*0x540dab*/
    result = *(this + 20); /*0x540dae*/
    *(_DWORD *)(result + 44) = a3; /*0x540db1*/
    *(_DWORD *)(*(this + 20) + 48) = a4; /*0x540db7*/
  }
  return result; /*0x540dba*/
}
}

// 0x541040
int IPXManagerClass::send(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall IPXManagerClass::_vt06(int *this, int a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = *(this + 17); /*0x541040*/
  result = 0; /*0x541043*/
  if ( v2 <= 0 ) /*0x541049*/
    return -1; /*0x541061*/
  for ( i = this + 10; *(_DWORD *)(*i + 100) != a2; ++i ) /*0x54104f*/
  {
    if ( ++result >= v2 ) /*0x54105f*/
      return -1; /*0x54105f*/
  }
  return result; /*0x541064*/
}
}

// 0x541070
int IPXManagerClass::receivePacket(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall IPXManagerClass::_vt19(_DWORD *this, int a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *v4; // esi

  v2 = *(this + 17); /*0x541070*/
  result = 0; /*0x541074*/
  if ( v2 <= 0 ) /*0x54107d*/
  {
LABEL_5:
    if ( a2 == *(this + 20) ) /*0x541091*/
    {
      return -4; /*0x541095*/
    }
    else if ( a2 == *(this + 19) ) /*0x5410a0*/
    {
      return -3; /*0x5410a4*/
    }
    else
    {
      return (a2 != *(this + 18)) - 2; /*0x5410b6*/
    }
  }
  else
  {
    v4 = this + 10; /*0x54107f*/
    while ( *v4 != a2 ) /*0x541084*/
    {
      ++result; /*0x541086*/
      ++v4; /*0x541087*/
      if ( result >= v2 ) /*0x54108c*/
        goto LABEL_5; /*0x54108c*/
    }
  }
  return result; /*0x541093*/
}
}

// 0x5415F0
int IPXManagerClass::ddtor(int a2, int a3, unsigned int * a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall IPXManagerClass::_vt03(int this, int a2, int a3, _DWORD *a4)
{
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // edi
  int v11; // edx
  int v13; // [esp+10h] [ebp-4h]

  if ( !this->Initialized ) /*0x5415f7*/
    return 0; /*0x5415f7*/
  if ( !this->Active ) /*0x5415fe*/
    return 0; /*0x5415fe*/
  v5 = *(_DWORD *)(this + 68); /*0x541605*/
  if ( !v5 ) /*0x54160c*/
    return 0; /*0x54160c*/
  if ( *(_DWORD *)(this + 84) >= v5 ) /*0x541611*/
    *(_DWORD *)(this + 84) = 0; /*0x541613*/
  v13 = 0; /*0x541618*/
  if ( v5 <= 0 ) /*0x54161c*/
    return 0; /*0x541661*/
  while ( 1 ) /*0x54162b*/
  {
    v6 = *(_DWORD *)(this + 4 * *(_DWORD *)(this + 84) + 40); /*0x54162b*/
    v7 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v6 + 16))(v6, a2, a3); /*0x541631*/
    v8 = *(_DWORD *)(this + 84); /*0x541634*/
    v9 = *(_DWORD *)(this + 4 * v8++ + 40); /*0x541637*/
    v10 = *(_DWORD *)(v9 + 100); /*0x54163c*/
    v11 = *(_DWORD *)(this + 68); /*0x54163f*/
    *(_DWORD *)(this + 84) = v8; /*0x541644*/
    if ( v8 >= v11 ) /*0x541647*/
      *(_DWORD *)(this + 84) = 0; /*0x541649*/
    if ( v7 ) /*0x541652*/
      break; /*0x541652*/
    if ( ++v13 >= v11 ) /*0x54165f*/
      return 0; /*0x54165f*/
  }
  *a4 = v10; /*0x54166f*/
  return 1; /*0x541661*/
}
}

// 0x543040
void IPXManagerClass::StubReturnFalse(int a1, int a2)
{
  ;
}

// 0x5430E0
IPXManagerClass * IPXManagerClass::QueryInterface(char a2)
{
{
    IPXManagerClass::processPacket(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (IPXManagerClass *)this;
}
}
