// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/ConnectionPointClass_9_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"

// 0x4A0760
void ConnectionPointClass::GetConnectionInterface(unsigned int * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int i; // esi

  if ( !a2 ) /*0x4a076a*/
    return -2147467261; /*0x4a076d*/
  _DWORD * v3 = __2_YAPAXI_Z(0x24u); /*0x4a077d*/
  if ( !v3 ) /*0x4a0784*/
    return -2147024882; /*0x4a0864*/
  v3[2] = 0; /*0x4a0798*/
  v3[3] = 0; /*0x4a079b*/
  *((_BYTE *)v3 + 16) = 1; /*0x4a079e*/
  *((_BYTE *)v3 + 17) = 0; /*0x4a07a2*/
  v3[1] = &vt_VectorClass_tagCONNECTDATA; /*0x4a07a5*/
  if ( v3 + 1 != a1 + 7 ) /*0x4a07ab*/
  {
    VectorClass::ClearAndFree2((int)(v3 + 1)); /*0x4a07af*/
    int v4 = a1[9]; /*0x4a07b5*/
    v3[3] = v4; /*0x4a07ba*/
    if ( v4 ) /*0x4a07bd*/
    {
      void * v5 = __2_YAPAXI_Z(8 * v4); /*0x4a07c7*/
      v3[2] = v5; /*0x4a07d1*/
      if ( v5 ) /*0x4a07d4*/
      {
        int v6 = v3[3]; /*0x4a07d6*/
        int v7 = 0; /*0x4a07d9*/
        *((_BYTE *)v3 + 17) = 1; /*0x4a07dd*/
        if ( v6 > 0 ) /*0x4a07e1*/
        {
          do /*0x4a0806*/
          {
            _DWORD * v8 = (_DWORD *)(a1[8] + 8 * v7); /*0x4a07ef*/
            _DWORD * v9 = (_DWORD *)(v3[2] + 8 * v7++); /*0x4a07f4*/
            *v9 = *v8; /*0x4a07f9*/
            v9[1] = v8[1]; /*0x4a07fe*/
          }
          while ( v7 < v3[3] ); /*0x4a0806*/
        }
      }
    }
    else
    {
      v3[2] = 0; /*0x4a080c*/
      *((_BYTE *)v3 + 17) = 0; /*0x4a080f*/
    }
  }
  v3[5] = a1[11]; /*0x4a0815*/
  v3[6] = a1[12]; /*0x4a081b*/
  v3[1] = &vt_DynamicVectorClass_tagCONNECTDATA; /*0x4a081e*/
  v3[7] = 0; /*0x4a0824*/
  v3[8] = 0; /*0x4a0827*/
  *v3 = &vt_EnumConnectionsClass; /*0x4a082a*/
  for ( i = 0; i < v3[5]; ++i ) /*0x4a0837*/
  {
    int v11 = *(_DWORD *)(v3[2] + 8 * i); /*0x4a083f*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v11 + 4))(v11); /*0x4a0842*/
  }
  return (*(int (__stdcall **)(_DWORD *, void *, int))*v3)(v3, &unk_7F7CB0, a2); /*0x4a076c*/
}
}

// 0x4A0870
unsigned int * ConnectionPointClass::Construct(unsigned int * a1, ConnectionPointClass * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  this->q004 = *a1; /*0x4a087c*/
  this->q008 = a1[1]; /*0x4a0881*/
  this->q00C = a1[2]; /*0x4a0887*/
  this->q010 = a1[3]; /*0x4a088d*/
  this->q018 = aP2; /*0x4a0896*/
  this->q014 = 0; /*0x4a0899*/
  this->q020 = 0; /*0x4a089c*/
  this->q024 = 0; /*0x4a089f*/
  *((_BYTE *)this + 40) = 1; /*0x4a08a2*/
  *((_BYTE *)this + 41) = 0; /*0x4a08a6*/
  this->q01C = &vt_DynamicVectorClass_tagCONNECTDATA; /*0x4a08a9*/
  this->q00C = 10; /*0x4a08b0*/
  this->q00B = 0; /*0x4a08b7*/
  *this = &vt_ConnectionPointClass; /*0x4a08ba*/
  (*(void (__stdcall **)(ConnectionPointClass *))(*(_DWORD *)aP2->__pad_0 + 4))(aP2); /*0x4a08c3*/
  return this; /*0x4a08c8*/
}
}

// 0x4A1280
namespace gamemd {
void ConnectionPointClass_9::Release(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int i; // eax

  if ( a2 ) /*0x4a128c*/
  {
    this->q00C = 0; /*0x4a1296*/
    if ( a3 ) /*0x4a129c*/
      _DWORD * v4 = a3; /*0x4a12b2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4a12ae*/
    this->q00C = 1; /*0x4a12b6*/
    if ( v4 ) /*0x4a12ba*/
    {
      if ( this->ConnectionPointClass_9_field_0x4 ) /*0x4a12c5*/
      {
        int v6 = this->ConnectionPointClass_9_field_0x8; /*0x4a12cc*/
        if ( a2 < v6 ) /*0x4a12d1*/
          v6 = a2; /*0x4a12d3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->ConnectionPointClass_9_field_0x4 + 4 * i - 4) ) /*0x4a12d9*/
          ++i; /*0x4a12de*/
        if ( this->IsAllocated ) /*0x4a12eb*/
        {
          __3_YAXPAX_Z(this->q004); /*0x4a12f6*/
          this->ConnectionPointClass_9_field_0x4 = 0; /*0x4a12fe*/
        }
      }
      this->ConnectionPointClass_9_field_0x4 = v4; /*0x4a1307*/
      this->ConnectionPointClass_9_field_0x8 = a2; /*0x4a130f*/
      this->IsAllocated = a3 == 0; /*0x4a1312*/
      return 1; /*0x4a1318*/
    }
    else
    {
      return 0; /*0x4a12bf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->q00C)(this); /*0x4a1322*/
    return 1; /*0x4a1328*/
  }
}
}
} // namespace gamemd

// 0x4A0630
int ConnectionPointClass::Unadvise(int a1, int (__stdcall ***a2)(unsigned int, int, int *) a2, int * a3)
{
{
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    if ( !a2 || !a3 )
    return -2147467261;
    v9 = AbstractClass::updateAITimer(g_ScenarioClass_Instance);
    if ( (**a2)(a2, a1 + 4, &v8) < 0 )
    return -2147220990;
    v4 = *(int *)(a1 + 36);
    if ( *(int *)(a1 + 44) >= v4 )
  {
    if ( !*(char *)(a1 + 41) && v4 )
    return -2147220991;
    v5 = *(int *)(a1 + 48);
    if ( v5 <= 0 || !(*(unsigned char (__thiscall **)(int, int, int))(*(int *)(a1 + 28) + 8))(a1 + 28, v4 + v5, 0) )
    {
    return -2147220991;
    }
  }
    v6 = *(int *)(a1 + 44);
    v7 = *(int *)(a1 + 32);
    *(int *)(a1 + 44) = v6 + 1;
    *(int *)(v7 + 8 * v6) = v8;
    *(int *)(v7 + 8 * v6 + 4) = v9;
    *a3 = v9;
    return 0;
}
}

// 0x4A0700
int ConnectionPointClass::EnumConnections(int a1, int a2)
{
{
    int v2;
    int v3;
    int *i;
    int v6;
    int v7;
    int v8;
    v2 = 0;
    v3 = *(int *)(a1 + 44);
    if ( v3 <= 0 )
    return -2147220992;
    for ( i = (int *)(*(int *)(a1 + 32) + 4); *i != a2; i += 2 )
  {
    if ( ++v2 >= v3 )
    return -2147220992;
  }
    v6 = *(int *)(a1 + 44);
    if ( v2 < v6 )
  {
    v7 = v6 - 1;
    for ( *(int *)(a1 + 44) = v7; v2 < *(int *)(a1 + 44); *(int *)(v8 + 8 * v2 - 4) = *(int *)(v8 + 8 * v2 + 4) )
    {
    v8 = *(int *)(a1 + 32);
    ++v2;
    *(int *)(v8 + 8 * v2 - 8) = *(int *)(v8 + 8 * v2);
    }
  }
    return 0;
}
}

// 0x4A0F70
namespace gamemd {
int ConnectionPointClass_9::EnumConnections(int a2)
{
{
    return *(int *)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x4A1240
namespace gamemd {
char ConnectionPointClass_9::AddRef(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int *)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int *)this->Items;
    v5 = *(int *)(a2 + 4) - (int)v4;
    while ( *v4 == *(int *)((char *)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x4A1360
namespace gamemd {
int ConnectionPointClass_9::Advise(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !(unsigned char)this->ConnectionPointClass_9_field_0xC )
    return 0;
    v3 = this->ConnectionPointClass_9_field_0x8;
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(int **)(this + 4); *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4A13A0
namespace gamemd {
unsigned int ConnectionPointClass_9::Unadvise(int a2)
{
{
    if ( (unsigned char)this->ConnectionPointClass_9_field_0xC )
    return (unsigned int)(a2 - this->ConnectionPointClass_9_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4A14F0
namespace gamemd {
VectorClass * ConnectionPointClass_9::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_IConnectionPoint;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (VectorClass *)this;
}
}
} // namespace gamemd
