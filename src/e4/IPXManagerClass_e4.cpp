// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x540D80
int IPXManagerClass::sendPacket(int a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax

  IPXManagerClass *v4 = this->q04C; /*0x540d80*/
  if ( v4 ) /*0x540d93*/
  {
    v4->connTable = a2; /*0x540d95*/
    *(_DWORD *)(this->q04C + 44) = a3; /*0x540d9b*/
    *(_DWORD *)(this->q04C + 48) = a4; /*0x540da1*/
  }
  result = this->q050; /*0x540da4*/
  if ( result ) /*0x540da9*/
  {
    *(_DWORD *)(result + 40) = a2; /*0x540dab*/
    result = this->q050; /*0x540dae*/
    *(_DWORD *)(result + 44) = a3; /*0x540db1*/
    *(_DWORD *)(this->q050 + 48) = a4; /*0x540db7*/
  }
  return result; /*0x540dba*/
}
}

// 0x541040
int IPXManagerClass::send(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  _DWORD *i; // ecx

  IPXManagerClass *v2 = this->connCount; /*0x541040*/
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
{
  int result; // eax

  IPXManagerClass *v2 = this->connCount; /*0x541070*/
  result = 0; /*0x541074*/
  if ( v2 <= 0 ) /*0x54107d*/
  {
LABEL_5:
    if ( a2 == this->q050 ) /*0x541091*/
    {
      return -4; /*0x541095*/
    }
    else if ( a2 == this->q04C ) /*0x5410a0*/
    {
      return -3; /*0x5410a4*/
    }
    else
    {
      return (a2 != this->q048) - 2; /*0x5410b6*/
    }
  }
  else
  {
    _DWORD * v4 = this + 10; /*0x54107f*/
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
    if ( !this->Initialized )
        return 0;
    if ( !this->Active )
        return 0;
    int v5 = this->connCount;
    if ( !v5 )
        return 0;
    if ( this->curConnIndex >= v5 )
        this->curConnIndex = 0;
    int v13 = 0;
    if ( v5 <= 0 )
        return 0;
    while ( 1 )
    {
        IPXConnStub *v6 = this->connTable[this->curConnIndex];
        int v7 = v6->vt16(a2, a3);
        int v8 = this->curConnIndex;
        IPXConnStub *v9 = this->connTable[v8++];
        int v10 = v9->connField100;
        int v11 = this->connCount;
        this->curConnIndex = v8;
        if ( v8 >= v11 )
            this->curConnIndex = 0;
        if ( v7 )
            break;
        if ( ++v13 >= v11 )
            return 0;
    }
    *a4 = v10;
    return 1;
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
