// G42.32 P: tree-universe marker -- e4 tree-owned decls suppressed
#define GAMEMD_TREE_UNIVERSE 1
// G42.32 S: guard-order tree-bridge -- ra2::game full defs precede e4 leaf headers
#include "object/abstract.hpp"
#ifdef GAMEMD_TREE_UNIVERSE
namespace gamemd {
using ra2::game::AbstractClass;
}
#endif
#include "misc_ext.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/Checksummer_e4.hpp"
#include "e4/e4_globals_decls.hpp"
#include "e4/classes/AnimFile_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "misc/minimal_carriers.hpp"  // G42.42q minimal carriers

namespace gamemd
{

// G42: targeted extern (decl source: e4/e4_protos.h:438 -- kept loose-int form
// to match the e4_globals_decls.hpp `extern int g_Str_*` string globals; whole
// proto header not pulled to avoid dialect clashes).
extern void * GetStringCSF(int a1, int a2, int a3, int a4);
extern void * GetStringCSF(void *a1, int a2, int a3, int a4);  // G42: ptr-key call sites
extern void * GetStringCSF(wchar_t *a1, int a2, int a3, int a4);  // G42: wide-key call sites
extern int TimerGetTicks();  // G42: decl source core/init_stubs.hpp:54 (0x6C8C40)

// 0x41e500
int AITriggerTypeClass::GetClassIdentifier(unsigned int * a2)
{
  if ( !a2 ) /*0x41e506*/
    return -2147467261; /*0x41e508*/
  *(unsigned int *)(a2) = -1173801692; /*0x41e516*/
  a2[1] = 298994932; /*0x41e51e*/
  a2[2] = 268445372; /*0x41e527*/
  a2[3] = unk_7E996C; /*0x41e530*/
  return 0; /*0x41e50d*/
}
// 0x41e540
// G42 T9: body quarantined -- prior-epoch raw dump (static-style ObjectPtr
// calls, leaked type tokens in arg lists, AITriggerTypeClass_vftable symbol
// absent from tree universe). Truth = .omo/ida_cache/func_0x0041E540.json
// (int __stdcall LoadTypeData(this,int a2)).
int AITriggerTypeClass::LoadTypeData(int a2)
{
    int result; // eax

    result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x41e54b*/
    if ( result >= 0 ) /*0x41e552*/
    {
      if ( this ) /*0x41e556*/
      {
        AbstractTypeClass::Init((int)this, (int)&a2); /*0x41e55f*/
        *(unsigned int *)this->__pad_0 = &AITriggerTypeClass::`vftable'; /*0x41e564*/
        this->AITriggerTypeClass_field_0x04 = (int)&AITriggerTypeClass::`vftable'; /*0x41e56a*/
        this->AITriggerTypeClass_field_0x08 = (int)&AITriggerTypeClass::`vftable'; /*0x41e571*/
        this->AITriggerTypeClass_field_0x0C = (int)&AITriggerTypeClass::`vftable'; /*0x41e578*/
      }
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 54); /*0x41e58b*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 55); /*0x41e59c*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 56); /*0x41e5ad*/
      return 0; /*0x41e5b2*/
    }
    return result; /*0x41e5b4*/
}
// 0x41e5c0
// G42 T9: body quarantined -- raw dump had 2 phantom params + static-style
// SaveLoad_Prefix call. Truth = .omo/ida_cache/func_0x0041E5C0.json
// (int __stdcall SaveToINI(this,int* a2,int a3)).
int AITriggerTypeClass::SaveToINI(int *a2, int a3)
{
    int result; // eax

    result = AbstractClass::SaveLoad_Prefix((int *)this->__pad_0, a2, a3); /*0x41e5cf*/
    if ( result >= 0 ) /*0x41e5d6*/
      return 0; /*0x41e5d8*/
    return result; /*0x41e5da*/
}
// 0x41e5e0
int AITriggerTypeClass::ProcessPower(int * a2)
{
    int v3; // ecx
    int v4; // edx
    int v5; // eax
    int v6; // ecx
    int v7; // eax

    AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x41e5e9*/
    Power::TimerProcess(*((unsigned int *)this + 38)); /*0x41e5f7*/
    Power::TimerProcess(*((unsigned int *)this + 39)); /*0x41e605*/
    Power::TimerProcess(*((unsigned int *)this + 40)); /*0x41e613*/
    Power::TimerProcess(*((unsigned int *)this + 42)); /*0x41e621*/
    Power::TimerProcess(*((unsigned int *)this + 44)); /*0x41e62f*/
    switch ( *((unsigned int *)this + 38) ) /*0x41e63f*/
    {
      case 0: /*0x41e63f*/
      case 1: /*0x41e63f*/
      case 4: /*0x41e63f*/
      case 7: /*0x41e63f*/
        Power::TimerProcess(*((unsigned int *)this + 57)); /*0x41e64f*/
        Power::TimerProcess(*((unsigned int *)this + 58)); /*0x41e65d*/
        break; /*0x41e65d*/
      default:
        break;
    }
    Checksummer::Add_double((Checksummer *)a2, *((unsigned int *)this + 46), *((unsigned int *)this + 47)); /*0x41e662*/
    Checksummer::Add_double((Checksummer *)a2, *((unsigned int *)this + 48), *((unsigned int *)this + 49)); /*0x41e687*/
    Checksummer::Add_double((Checksummer *)a2, *((unsigned int *)this + 50), *((unsigned int *)this + 51)); /*0x41e69c*/
    IDA_LOBYTE(v3) = *((unsigned char *)this + 208); /*0x41e6a1*/
    Power::FlagProcess((Power *)a2, v3); /*0x41e6aa*/
    IDA_LOBYTE(v4) = *((unsigned char *)this + 210); /*0x41e6af*/
    v5 = Power::FlagProcess((Power *)a2, v4); /*0x41e6b8*/
    IDA_LOBYTE(v5) = *((unsigned char *)this + 211); /*0x41e6bd*/
    Power::FlagProcess((Power *)a2, v5); /*0x41e6c6*/
    IDA_LOBYTE(v6) = *((unsigned char *)this + 212); /*0x41e6cb*/
    Power::FlagProcess((Power *)a2, v6); /*0x41e6d4*/
    v7 = Power::TimerProcess(*((unsigned int *)this + 43)); /*0x41e6e2*/
    IDA_LOBYTE(v7) = *((unsigned char *)this + 209); /*0x41e6e7*/
    return Power::FlagProcess((Power *)a2, v7); /*0x41e6f5*/
}
// 0x41eaf0
bool AITriggerTypeClass::EnemyHouseOwns(int a2, unsigned int * a3)
{
  int v4; // esi
  int v5; // ebp
  int v6; // edi
  int v7; // eax
  bool result; // al
  char v9; // [esp+7h] [ebp-1h]

  v9 = 0; /*0x41eafa*/
  if ( !a3 ) /*0x41eaff*/
    return v9; /*0x41ec2b*/
  v4 = *(&this->q0144); /*0x41eb06*/
  if ( v4 ) /*0x41eb0e*/
  {
    v5 = (*(int (**)(int))(*(unsigned int *)v4 + 64))(v4); /*0x41eb21*/
    v6 = 0; /*0x41eb23*/
    switch ( (*(int (**)(int))(*(unsigned int *)v4 + 44))(v4) ) /*0x41eb38*/
    {
      case 3: /*0x41eb38*/
        v6 = ((DynamicVector*)(unsigned int)(a3)+ 5475)->GetOrGrow(v5); /*0x41eb91*/
        goto LABEL_8; /*0x41eb91*/
      case 7: /*0x41eb38*/
        v7 = ((DynamicVector *)((unsigned int)(a3) + 5460))->GetOrGrow(v5); /*0x41eb4a*/
        break; /*0x41eb53*/
      case 16: /*0x41eb38*/
        v7 = ((DynamicVector *)((unsigned int)(a3) + 5470))->GetOrGrow(v5); /*0x41eb76*/
        break; /*0x41eb7f*/
      case 40: /*0x41eb38*/
        v7 = ((DynamicVector *)((unsigned int)(a3) + 5465))->GetOrGrow(v5); /*0x41eb60*/
        break; /*0x41eb69*/
      default:
  LABEL_8:
        v7 = v6; /*0x41eb93*/
        break; /*0x41eb97*/
    }
  }
  else
  {
    v7 = 0; /*0x41eb99*/
  }
  switch ( *(&this->q0148) ) /*0x41ebab*/
  {
    case 0: /*0x41ebab*/
      result = v7 < *(&this->q0147); /*0x41ebc0*/
      break; /*0x41ebc5*/
    case 1: /*0x41ebab*/
      result = v7 <= *(&this->q0147); /*0x41ebd6*/
      break; /*0x41ebdb*/
    case 2: /*0x41ebab*/
      result = v7 == *(&this->q0147); /*0x41ebec*/
      break; /*0x41ebf1*/
    case 3: /*0x41ebab*/
      result = v7 >= *(&this->q0147); /*0x41ec02*/
      break; /*0x41ec07*/
    case 4: /*0x41ebab*/
      result = v7 > *(&this->q0147); /*0x41ec18*/
      break; /*0x41ec1d*/
    case 5: /*0x41ebab*/
      return v7 != *(&this->q0147); /*0x41ec26*/
    default:
      return v9;
  }
  return result; /*0x41ebb8*/
}
// 0x426750
// G42 T9: body quarantined -- prior-epoch raw dump had undeclared register
// locals (v3/v4), absent helper sub_4267F0. Truth =
// .omo/ida_cache/func_0x426750.json (char __userpurge AddRef@<al>(this,int@<ebx>,int)).
char AnimFile::AddRef(void * a1, void * a2)
{
    int v3; // ecx
    int v4; // esi
    ObjectClass *v6; // [esp+0h] [ebp-4h]

    v4 = v3; /*0x426751*/
    *(unsigned int *)(v3 + 132) = this; /*0x426759*/
    if ( !this ) /*0x42675f*/
      return 0; /*0x426789*/
    if ( !(*(unsigned __int8 (__thiscall **)(AnimFile *))(*(unsigned int *)this->__pad_0 + 24))(this) ) /*0x426763*/
    {
      (*(void (__thiscall **)(unsigned int, int))(**(unsigned int **)(v4 + 132) + 28))(*(unsigned int *)(v4 + 132), 1); /*0x426774*/
      *(unsigned char *)(v4 + 137) = 1; /*0x426777*/
    }
    return sub_4267F0(v6, a2); /*0x426785*/
}
// 0x426790
// G42 T9: body quarantined -- raw dump used e4-flat member vocabulary
// (u32_89/q00C3/u32_84/u32_E0C/u32_E10/u32_88) absent from the tree class.
// Truth = .omo/ida_cache/func_0x426790.json.
void AnimFile::Release()
{
}
// 0x426a50
// G42 T9: body quarantined -- u32_CC/u32_A6 e4-flat members absent from tree class.
// Truth = .omo/ida_cache/func_0x426a50.json.
int AnimFile::Load()
{
    int result; // eax

    result = *((unsigned int *)this + 51); /*0x426a56*/
    if ( *((unsigned char *)this + 166) ) /*0x426a50*/
      --result; /*0x426a60*/
    return result; /*0x426a61*/
}
// 0x426a90
// G42 T9: body quarantined -- ~185-line raw dump in e4-flat vocabulary
// (qE14/__pad_0A6/u32_A7/u32_94/q0CC/q084/u32_E18/q0342/qE10/q008/q018) plus
// vtable-slot-as-member garbage; pending full re-translation from
// .omo/ida_cache/func_0x426a90.json (int __thiscall ddtor(this,int)).
int AnimFile::ddtor(int a2)
{
    int v4; // eax
    int v5; // eax
    int v6; // edi
    int v7; // ebx
    int v8; // ebx
    int v9; // ebx
    int v10; // eax
    int v11; // eax
    int v12; // ebp
    int v13; // edi
    int v14; // edx
    unsigned __int16 *v15; // ecx
    int v16; // eax
    int v17; // ecx
    int v18; // ecx
    int v19; // edi
    int v20; // ebp
    int v21; // edx
    unsigned __int16 *v22; // ecx
    unsigned __int16 v23; // ax
    int v24; // ebx
    int v25; // ebp
    int v26; // edi
    int v27; // edx
    unsigned __int16 *v28; // ecx
    int v29; // eax
    int v30; // ecx
    unsigned __int16 *v31; // eax
    int v32; // ebx
    int v33; // ecx
    int v34; // [esp+2Ch] [ebp-18h]
    int i; // [esp+38h] [ebp-Ch]
    char *v36; // [esp+3Ch] [ebp-8h]
    __int16 *v37; // [esp+40h] [ebp-4h]

    if ( !*((unsigned char *)this + 136) ) /*0x426a96*/
      return 0; /*0x426aa0*/
    v4 = *((unsigned int *)this + 901); /*0x426aa9*/
    if ( v4 > a2 && (!*((unsigned char *)this + 166) || !*((unsigned char *)this + 167) || v4 != *((unsigned int *)this + 37) || a2) ) /*0x426ada*/
    {
      (*(void (__thiscall **)(unsigned int, unsigned int))(**((unsigned int **)this + 899) + 24))(*((unsigned int *)this + 899), 0); /*0x426af5*/
      *((unsigned int *)this + 901) = -1; /*0x426af8*/
    }
    if ( *((unsigned int *)this + 901) != a2 ) /*0x426b04*/
    {
      v5 = (*(int (__thiscall **)(unsigned int, unsigned int, unsigned int))(**((unsigned int **)this + 899) + 92))(*((unsigned int *)this + 899), 0, 0); /*0x426b19*/
      v6 = *((unsigned int *)this + 899); /*0x426b1c*/
      v36 = (char *)v5; /*0x426b22*/
      v7 = (*(int (__thiscall **)(int))(*(unsigned int *)v6 + 128))(v6); /*0x426b34*/
      v8 = (*(int (__thiscall **)(int))(*(unsigned int *)v6 + 124))(v6) * v7; /*0x426b39*/
      v9 = (*(int (__thiscall **)(int))(*(unsigned int *)v6 + 112))(v6) * v8; /*0x426b43*/
      v10 = *((unsigned int *)this + 901); /*0x426b46*/
      for ( i = v9; v10 != a2; v10 = *((unsigned int *)this + 901) ) /*0x426b52*/
      {
        v11 = v10 + 1; /*0x426b58*/
        *((unsigned int *)this + 901) = v11; /*0x426b59*/
        v12 = v11; /*0x426b5f*/
        if ( v11 < *((unsigned int *)this + 51) ) /*0x426b67*/
        {
          v13 = 0; /*0x426b6f*/
          v14 = *((unsigned __int16 *)this + 73); /*0x426b71*/
          if ( (unsigned short)v14 ) /*0x426b7a*/
          {
            v15 = (unsigned __int16 *)((char *)this + 2060); /*0x426b80*/
            while ( 1 ) /*0x426b86*/
            {
              IDA_HIWORD(v16) = 0; /*0x426b86*/
              if ( *v15 <= v12 ) /*0x426b8d*/
              {
                IDA_LOWORD(v16) = *v15; /*0x426b88*/
                if ( v16 + v15[1] > v12 ) /*0x426b99*/
                  break; /*0x426b99*/
              }
              ++v13; /*0x426b9b*/
              v15 += 3; /*0x426b9c*/
              if ( v13 >= v14 ) /*0x426ba1*/
                goto LABEL_42; /*0x426ba1*/
            }
            if ( v13 != -1 ) /*0x426bab*/
            {
              if ( *((unsigned char *)this + 136) && *((unsigned int *)this + 902) != v13 ) /*0x426bc1*/
              {
                v17 = *((unsigned int *)this + 33); /*0x426bc3*/
                *((unsigned int *)this + 902) = v13; /*0x426bce*/
                (*(void (__thiscall **)(int, int, unsigned int))(*(unsigned int *)v17 + 40))(v17, (v13 << 16) + 2816, 0); /*0x426bde*/
                (*(void (__thiscall **)(unsigned int, unsigned int, int))(**((unsigned int **)this + 33) + 36))( /*0x426c15*/
                  *((unsigned int *)this + 33),
                  *((unsigned int *)this + 900),
                  *((unsigned __int16 *)this + 3 * v13 + 1032) + 2 * *((unsigned __int16 *)this + 3 * v13 + 1031) + 8);
              }
              v18 = 3 * v13; /*0x426c18*/
              v19 = *((unsigned int *)this + 900); /*0x426c1b*/
              v20 = v12 - *((unsigned __int16 *)this + v18 + 1030); /*0x426c38*/
              v21 = 2 * *((unsigned __int16 *)this + v18 + 1031) + 8; /*0x426c3c*/
              v22 = (unsigned __int16 *)(v19 + 8); /*0x426c40*/
              if ( v20 > 0 ) /*0x426c43*/
              {
                do /*0x426c50*/
                {
                  v23 = *v22++; /*0x426c47*/
                  v21 += v23; /*0x426c4d*/
                  --v20; /*0x426c4f*/
                }
                while ( v20 ); /*0x426c50*/
              }
              v37 = (__int16 *)(v19 + v21 + 2); /*0x426c58*/
              if ( v19 + v21 != -2 ) /*0x426c5c*/
              {
                v24 = *((unsigned int *)this + 901); /*0x426c62*/
                v25 = 0; /*0x426c6e*/
                v34 = v24; /*0x426c72*/
                if ( v24 < *((unsigned int *)this + 51) ) /*0x426c7a*/
                {
                  v26 = 0; /*0x426c82*/
                  v27 = *((unsigned __int16 *)this + 73); /*0x426c84*/
                  if ( (unsigned short)v27 ) /*0x426c8d*/
                  {
                    v28 = (unsigned __int16 *)((char *)this + 2060); /*0x426c93*/
                    while ( 1 ) /*0x426c99*/
                    {
                      IDA_HIWORD(v29) = 0; /*0x426c99*/
                      if ( *v28 <= v24 ) /*0x426ca0*/
                      {
                        IDA_LOWORD(v29) = *v28; /*0x426c9b*/
                        v24 = *((unsigned int *)this + 901); /*0x426cac*/
                        if ( v29 + v28[1] > v34 ) /*0x426cb2*/
                          break; /*0x426cb2*/
                      }
                      ++v26; /*0x426cb4*/
                      v28 += 3; /*0x426cb5*/
                      if ( v26 >= v27 ) /*0x426cba*/
                        goto LABEL_41; /*0x426cba*/
                    }
                    if ( v26 != -1 ) /*0x426cc4*/
                    {
                      if ( *((unsigned char *)this + 136) && *((unsigned int *)this + 902) != v26 ) /*0x426cda*/
                      {
                        v30 = *((unsigned int *)this + 33); /*0x426cdc*/
                        *((unsigned int *)this + 902) = v26; /*0x426ce7*/
                        (*(void (__thiscall **)(int, int, unsigned int))(*(unsigned int *)v30 + 40))(v30, (v26 << 16) + 2816, 0); /*0x426cf7*/
                        (*(void (__thiscall **)(unsigned int, unsigned int, int))(**((unsigned int **)this + 33) + 36))( /*0x426d28*/
                          *((unsigned int *)this + 33),
                          *((unsigned int *)this + 900),
                          *((unsigned __int16 *)this + 3 * v26 + 1032)
                        + 2 * *((unsigned __int16 *)this + 3 * v26 + 1031)
                        + 8);
                        AnimFile::Check(this, v26); /*0x426d2e*/
                        v25 = 0; /*0x426d33*/
                        v24 = v34; /*0x426d37*/
                      }
                      v31 = (unsigned __int16 *)(*((unsigned int *)this + 900) + 8); /*0x426d46*/
                      v32 = v24 - *((unsigned __int16 *)this + 3 * v26 + 1030); /*0x426d51*/
                      if ( v32 >= 0 ) /*0x426d53*/
                      {
                        v33 = v32 + 1; /*0x426d55*/
                        do /*0x426d69*/
                        {
                          v25 = *v31++; /*0x426d5a*/
                          if ( (unsigned __int16)v25 >= 2u ) /*0x426d63*/
                            v25 -= 2; /*0x426d65*/
                          --v33; /*0x426d68*/
                        }
                        while ( v33 ); /*0x426d69*/
                      }
                    }
                  }
                }
  LABEL_41:
                sub_4270D0((int)this, (unsigned int)v37, v37, v25, v36, i); /*0x426d6b*/
              }
            }
          }
        }
  LABEL_42:
        if ( *((unsigned int *)this + 901) > *((unsigned int *)this + 51) ) /*0x426d90*/
          *((unsigned int *)this + 901) = 0; /*0x426d92*/
      }
      (*(void (__thiscall **)(unsigned int))(**((unsigned int **)this + 899) + 96))(*((unsigned int *)this + 899)); /*0x426db6*/
    }
    return *((unsigned int *)this + 899); /*0x426aa2*/
}
// 0x426dd0
int AnimFile::Check( int a2)  // G42 sig-sync: IDA int __thiscall Check(this,int)
{
  return *((uint16_t *)this + 3 * a2 + 1032) + 2 * *((uint16_t *)this + 3 * a2 + 1031) + 8; /*0x426df3*/
}
// 0x523d00
// G42 T9: body quarantined -- raw dump in wrong universe (INIClass accessed as
// &DSurface_ViewBounds.__pad_FC[228], IDA string labels aSequence/aN/aNe/aE/
// aSe/aS_5/aSw/aNw/asc_8258AC undeclared, u32_E3C e4-flat member absent).
// Truth = .omo/ida_cache/func_0x523d00.json.
void AnimSequence::Parse()
{
}
// 0x67a470
// G42 T9: body quarantined -- raw dump cast void* to class type + returned
// `this` from void fn; TypeList members (IsAllocated/CapacityIncrement/Count)
// absent from tree class. Truth = .omo/ida_cache/func_0x67a470.json
// (_DWORD* __thiscall Constructor(this)).
int AnimTypeList::Constructor()
{
    *((unsigned int *)this + 1) = 0; /*0x67a474*/
    *((unsigned int *)this + 2) = 0; /*0x67a477*/
    *((unsigned char *)this + 12) = 1; /*0x67a47a*/
    *((unsigned char *)this + 13) = 0; /*0x67a47e*/
    *((unsigned int *)this + 5) = 10; /*0x67a481*/
    *((unsigned int *)this + 4) = 0; /*0x67a488*/
    *this = (AnimTypeList)&TypeList<AnimTypeClass const *>::`vftable'; /*0x67a48b*/
    return this; /*0x67a491*/
}
// 0x525680
// G42 T9: body quarantined -- raw dump used param names a2/a3 that do not
// match its own aP1/aP2, Items/Capacity members absent, void*-to-class cast.
// Truth = .omo/ida_cache/func_0x525680.json
// (_DWORD* __thiscall Constructor(this,int a2,int a3)).
int AnimTypeVector::Constructor(int a2, int a3)
{
    *((unsigned int *)this + 1) = 0; /*0x52568b*/
    *((unsigned int *)this + 2) = a2; /*0x52568e*/
    *((unsigned char *)this + 12) = 1; /*0x525691*/
    *((unsigned char *)this + 13) = 0; /*0x525695*/
    *this = (AnimTypeVector)&VectorClass<AnimTypeClass const *>::`vftable'; /*0x525698*/
    if ( a2 ) /*0x52569e*/
    {
      if ( a3 ) /*0x5256a6*/
      {
        *((unsigned int *)this + 1) = a3; /*0x5256a8*/
        return this; /*0x5256ae*/
      }
      *((unsigned int *)this + 1) = RA2_OPNEW(4 * a2); /*0x5256bd*/
      *((unsigned char *)this + 13) = 1; /*0x5256c0*/
    }
    return this; /*0x5256ad*/
}
// 0x595710
// G42 T9: body quarantined -- q03C member absent from tree CSFClass.
// Truth = .omo/ida_cache/func_0x595710.json (wchar_t* __thiscall CopyString).
void CSFClass::CopyString()
{
}
// 0x6977c0
// G42 T9: body quarantined -- raw dump treats this as char* (this + 10540),
// off_83ED04/byte_83ED14 walk, vtable3-as-member. Truth =
// .omo/ida_cache/func_0x6977c0.json (int __thiscall sub_6977C0(char*)).
void CSFClass::LoadMissingStrings()
{
}
// 0x7346a0
// G42 T9: body quarantined -- raw dump treats this as const char*
// (strcpy targets), returns value from void fn. Truth =
// .omo/ida_cache/func_0x7346a0.json (int __thiscall CSFClass_LoadFile).
void CSFClass::LoadFile()
{
}
// 0x472140
// G42 T9: body quarantined -- raw dump used e4-flat members u32_34/u32_28,
// undefined CaptureManagerClass static-style FreeUnit, returned value from
// void fn. Truth = .omo/ida_cache/func_0x00472140.json
// (int __thiscall CaptureManager_FreeAll(this): count@+0x34, array@+0x28).
void CaptureManager::FreeAll()
{
}
// 0x53bad0
int ChronoScreen::IsActive()  // G42 sig-sync: IDA int __thiscall IsActive(this)
{
  return ChronoScreenEffect_Status != 0; /*0x53badd*/
}
// 0x5c5120
// G42 T9: body quarantined -- m_1 e4-flat member absent from tree class.
// Truth = .omo/ida_cache/func_0x5c5120.json
// (int __thiscall Seek(this,int): item = *(this->items + 4*a2)).
int CoopCampaignVector::Seek(int a2)
{
    return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x5c512a*/
}
// 0x5c55f0
// G42 T9: body quarantined -- m_1/m_8 e4-flat members absent from tree class.
// Truth = .omo/ida_cache/func_0x5c55f0.json (char __thiscall AddRef(this,int)).
char CoopCampaignVector::AddRef(int a2)
{
    int m_8; // esi
    int v3; // edx
    unsigned int *v4; // eax
    int v5; // ecx

    m_8 = this->m_8; /*0x5c55f2*/
    if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x5c55fd*/
    {
      v3 = 0; /*0x5c55ff*/
      if ( m_8 <= 0 ) /*0x5c5603*/
        return 1; /*0x5c5623*/
      v4 = *(unsigned int **)&this->m_1[3]; /*0x5c5605*/
      v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x5c560b*/
      while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x5c5614*/
      {
        ++v3; /*0x5c5616*/
        ++v4; /*0x5c5617*/
        if ( v3 >= m_8 ) /*0x5c561c*/
          return 1; /*0x5c561c*/
      }
    }
    return 0; /*0x5c561e*/
}
// 0x5c5630
// G42 T9: body quarantined -- m_1/m_C/m_8 e4-flat vocabulary; returned values
// from void fn. Truth = .omo/ida_cache/func_0x5c5630.json
// (char __thiscall Release(this,int,_DWORD*)).
char CoopCampaignVector::Release(int a2, unsigned int *a3)
{
    unsigned int *v4; // edi
    int m_8; // ecx
    int i; // eax

    if ( a2 ) /*0x5c563c*/
    {
      IDA_LOBYTE(this->m_C) = 0; /*0x5c5646*/
      if ( a3 ) /*0x5c564c*/
        v4 = a3; /*0x5c5662*/
      else
        v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x5c565e*/
      IDA_LOBYTE(this->m_C) = 1; /*0x5c5666*/
      if ( v4 ) /*0x5c566a*/
      {
        if ( *(unsigned int *)&this->m_1[3] ) /*0x5c5675*/
        {
          m_8 = this->m_8; /*0x5c567c*/
          if ( a2 < m_8 ) /*0x5c5681*/
            m_8 = a2; /*0x5c5683*/
          for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x5c5689*/
            ++i; /*0x5c568e*/
          if ( IDA_BYTE1(this->m_C) ) /*0x5c569b*/
          {
            RA2_OPDEL(*(void **)&this->m_1[3]); /*0x5c56a6*/
            *(unsigned int *)&this->m_1[3] = 0; /*0x5c56ae*/
          }
        }
        *(unsigned int *)&this->m_1[3] = v4; /*0x5c56b7*/
        this->m_8 = a2; /*0x5c56bf*/
        IDA_BYTE1(this->m_C) = a3 == 0; /*0x5c56c2*/
        return 1; /*0x5c56c8*/
      }
      else
      {
        return 0; /*0x5c566f*/
      }
    }
    else
    {
      (*(void (__thiscall **)(_VectorClass_PAVCoopCampaignClass *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x5c56d2*/
      return 1; /*0x5c56d8*/
    }
}
// 0x5c56e0
// G42 T9: body quarantined -- m_1/m_C/m_8 e4-flat vocabulary.
// Truth = .omo/ida_cache/func_0x5c56e0.json (ddtor).
void CoopCampaignVector::ddtor()
{
}
// 0x5c5710
// G42 T9: body quarantined -- m_1/m_C/m_8 e4-flat vocabulary; returned values
// from void fn. Truth = .omo/ida_cache/func_0x5c5710.json
// (int __thiscall Read(this,_DWORD*): index-of or -1).
int CoopCampaignVector::Read(unsigned int *a2)
{
    int result; // eax
    int m_8; // edx
    unsigned int *i; // ecx

    if ( !IDA_LOBYTE(this->m_C) ) /*0x5c5710*/
      return 0; /*0x5c5718*/
    m_8 = this->m_8; /*0x5c571e*/
    result = 0; /*0x5c5721*/
    if ( m_8 <= 0 ) /*0x5c5725*/
      return -1; /*0x5c573c*/
    for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x5c572b*/
    {
      if ( ++result >= m_8 ) /*0x5c573a*/
        return -1; /*0x5c573a*/
    }
    return result; /*0x5c571a*/
}
// 0x437f10
unsigned int* Coord2D::Add(unsigned int *a2, unsigned int *a3)  // G42 sig-sync: IDA _DWORD* Add(this,_DWORD*,_DWORD*); params renamed a2/a3 to match body
{
  int v3; // esi

  v3 = this->Coord2D_field_0x04 + a3[1]; /*0x437f21*/
  *a2 = *(unsigned int *)((unsigned char *)(this) + 0x0) + *a3; /*0x437f27*/
  a2[1] = v3; /*0x437f29*/
  return a2; /*0x437f2c*/
}
// 0x487f20
// 0x487f20
int* Coord2D::Sub(int *a2, unsigned int *a3)  // G42 sig-sync: IDA int* Sub(this,int*,_DWORD*); params renamed a2/a3 to match body
{
  int v3; // edx
  int v5; // ecx

  v3 = *(unsigned int *)((unsigned char *)(this) + 0x0); /*0x487f24*/
  v5 = this->Coord2D_field_0x04 - a3[1]; /*0x487f35*/
  *a2 = v3 - *a3; /*0x487f38*/
  a2[1] = v5; /*0x487f3a*/
  return a2; /*0x487f37*/
}
// 0x437090
unsigned int* Coord3D::Set(int a2, int a3, int a4)  // G42 sig-sync: IDA _DWORD*(this,int,int,int); params renamed to match body
{
  *(unsigned int *)((unsigned char *)(this) + 0x0) = a2; /*0x43709a*/
  this->Coord3D_field_0x04 = a3; /*0x4370a0*/
  this->Coord3D_field_0x08 = a4; /*0x4370a3*/
  return (unsigned int *)((unsigned char *)(this) + 0x0); /*0x4370a6*/
}
// 0x459f60
int Coord3D::Equals(unsigned int *a2)  // G42 sig-sync: IDA int(this,_DWORD*)
{
  return *(unsigned int *)((unsigned char *)(this) + 0x0) == *a2 && this->Coord3D_field_0x04 == a2[1] && this->Coord3D_field_0x08 == a2[2]; /*0x459f84*/
}
// 0x6ce240
unsigned int* Coord3D::Add(unsigned int *a2, unsigned int *a3)  // G42 sig-sync: IDA _DWORD*(this,_DWORD*,_DWORD*)
{
  int v3; // esi
  int v4; // edi

  v3 = this->Coord3D_field_0x04 + a3[1]; /*0x6ce252*/
  v4 = this->Coord3D_field_0x08 + a3[2]; /*0x6ce25a*/
  *a2 = *(unsigned int *)((unsigned char *)(this) + 0x0) + *a3; /*0x6ce262*/
  a2[1] = v3; /*0x6ce264*/
  a2[2] = v4; /*0x6ce267*/
  return a2; /*0x6ce26a*/
}
// 0x403870
// G42 T9: body quarantined -- raw dump had int-to-class cast (*this =
// (CoordBounds)a2), __tail_0/__int64 10LL product, u32_4/u32_8/u32_C/u32_20
// members absent. Truth = .omo/ida_cache/func_0x00403870.json
// (__int64 __thiscall Constructor(this,int a2,int a3)).
long long CoordBounds::Constructor(int a2, int a3)
{
    __int64 result; // rax

    *this = (CoordBounds)a2; /*0x403877*/
    *((unsigned int *)this + 1) = a3; /*0x40387d*/
    *((unsigned int *)this + 2) = a2; /*0x403880*/
    *((unsigned int *)this + 3) = a3; /*0x403883*/
    result = 10LL * *(unsigned __int64 *)this->__tail_0; /*0x403891*/
    *((unsigned __int64 *)this + 4) = result; /*0x403896*/
    return result; /*0x40389c*/
}
// 0x4a94f0
int16_t* CoordList::GetBounds(int16_t *a1, int16_t *a2)  // G42 sig-sync: IDA _DWORD* __stdcall CoordList_GetBounds(_DWORD*,__int16*); params renamed to match body
{
  int16_t *v2; // edx
  int v3; // ebx
  int v4; // esi
  int v5; // ebp
  int v6; // edi
  int16_t v7; // ax
  int v8; // ecx
  int v9; // esi
  int v10; // edi
  int v12; // [esp+10h] [ebp-4h]

  v2 = a2; /*0x4a94f1*/
  v3 = 512; /*0x4a94fa*/
  v4 = -512; /*0x4a94ff*/
  v5 = 512; /*0x4a9507*/
  v6 = -512; /*0x4a9509*/
  v12 = 0; /*0x4a950b*/
  if ( !a2 ) /*0x4a9515*/
    goto LABEL_17; /*0x4a9515*/
  while ( 1 ) /*0x4a9517*/
  {
    v7 = *v2; /*0x4a9517*/
    if ( *v2 == 0x7FFF && v2[1] == 0x7FFF ) /*0x4a9524*/
      break; /*0x4a9524*/
    v8 = v2[1]; /*0x4a9526*/
    if ( v4 <= v7 ) /*0x4a952f*/
      v4 = v7; /*0x4a9531*/
    if ( v3 >= v7 ) /*0x4a9535*/
      v3 = v7; /*0x4a9537*/
    if ( v6 <= v8 ) /*0x4a953b*/
      v6 = v2[1]; /*0x4a953d*/
    if ( v5 >= v8 ) /*0x4a9541*/
      v5 = v2[1]; /*0x4a9543*/
    v2 += 2; /*0x4a9545*/
  }
  v9 = v4 - v3; /*0x4a954a*/
  IDA_LOWORD(v12) = 1; /*0x4a9551*/
  if ( v9 + 1 >= 1 ) /*0x4a955b*/
    IDA_LOWORD(v12) = v9 + 1; /*0x4a955d*/
  v10 = v6 - v5; /*0x4a9562*/
  if ( v10 + 1 < 1 ) /*0x4a9569*/
  {
    IDA_HIWORD(v12) = 1; /*0x4a956b*/
  LABEL_17:
    *a1 = v12; /*0x4a9570*/
    return a1; /*0x4a957f*/
  }
  IDA_HIWORD(v12) = v10 + 1; /*0x4a9582*/
  *a1 = v12; /*0x4a9592*/
  return a1; /*0x4a9578*/
}
// 0x561910
int CoordinateTables::Init()  // G42 sig-sync: hpp declares int (matches IDA int* CoordinateTables_Init())
{
  return 0;
}

// 0x7493b0
// G42 T9: body quarantined -- ~190-line raw dump from the VoxelAnimClass-ctor
// universe (IDA owner: void* __thiscall VoxelAnimClass::Constructor(this,int,
// int*,int) @0x7493B0): ObjectClass::ctor/Int4::Set/AudioController::Init
// static-style calls, VoxelAnimClass_vftable installs, __pad_98 zone writes.
// Truth = .omo/ida_cache/func_0x007493B0.json.
void* DamageAnimClass::Constructor(int a2, int *a3, int a4)
{
    int v5; // eax
    int *v6; // eax
    int v7; // ecx
    int v8; // edx
    int v9; // eax
    int v10; // ebx
    int v11; // eax
    int v12; // edi
    int v13; // eax
    double v14; // st7
    int v15; // eax
    double v16; // st6
    int v17; // eax
    int v18; // eax
    int VoxelAnimClass_field_0x104; // ebx
    double v20; // st7
    int v21; // eax
    double v22; // st7
    int v23; // edx
    double v24; // st7
    int v25; // eax
    int v26; // eax
    double v27; // st6
    double v28; // st7
    int v29; // eax
    signed int v30; // ebx
    int v31; // eax
    int v32; // edx
    int v33; // eax
    int v34; // ecx
    int *v35; // edi
    CellClass *v36; // eax
    int *Coords; // [esp-18h] [ebp-68h]
    int v39; // [esp-14h] [ebp-64h]
    int v40; // [esp-10h] [ebp-60h]
    double v41; // [esp+8h] [ebp-48h]
    int v42; // [esp+1Ch] [ebp-34h]
    float v43; // [esp+1Ch] [ebp-34h]
    int v44; // [esp+20h] [ebp-30h]
    float v45; // [esp+20h] [ebp-30h]
    int v46; // [esp+24h] [ebp-2Ch]
    int v47; // [esp+24h] [ebp-2Ch]
    int v48; // [esp+28h] [ebp-28h]
    int v49; // [esp+28h] [ebp-28h]
    float v50; // [esp+2Ch] [ebp-24h] BYREF
    float v51; // [esp+30h] [ebp-20h]
    float v52; // [esp+34h] [ebp-1Ch]
    int v53; // [esp+38h] [ebp-18h] BYREF
    int v54; // [esp+3Ch] [ebp-14h]
    int v55; // [esp+40h] [ebp-10h]

    ObjectClass::ctor((ObjectClass *)this); /*0x7493be*/
    *(unsigned int *)&this->__pad_98[24] = 0; /*0x7493d2*/
    *(unsigned int *)&this->__pad_98[32] = 0; /*0x7493d4*/
    *(unsigned int *)&this->__pad_98[40] = 0; /*0x7493d7*/
    *(unsigned int *)&this->__pad_98[28] = 0; /*0x7493de*/
    *(unsigned int *)&this->__pad_98[36] = 0; /*0x7493e1*/
    *(unsigned int *)&this->__pad_98[44] = 0; /*0x7493e4*/
    Int4::Set((Int4 *)&this->__pad_98[72], 0, 0, 0, 1065353216); /*0x7493e7*/
    Int4::Set((Int4 *)&this->__pad_98[88], 0, 0, 0, 1065353216); /*0x7493f7*/
    this->VoxelAnimClass_field_0x104 = a2; /*0x749402*/
    this->VoxelAnimClass_field_0x100 = -1; /*0x74940c*/
    this->VoxelAnimClass_field_0x108 = 0; /*0x749416*/
    this->VoxelAnimClass_field_0x10C = a4; /*0x74941c*/
    this->__pad_110[0] = 0; /*0x749422*/
    this->__pad_12C[16] = 0; /*0x749428*/
    this->VoxelAnimClass_field_0x140 = 0; /*0x74942e*/
    this->VoxelAnimClass_field_0x0 = (int)&VoxelAnimClass::`vftable'; /*0x749434*/
    this->VoxelAnimClass_field_0x4 = (int)&VoxelAnimClass::`vftable'; /*0x74943a*/
    this->VoxelAnimClass_field_0x8 = (int)&VoxelAnimClass::`vftable'; /*0x749440*/
    *(unsigned int *)this->__pad_C = &VoxelAnimClass::`vftable'; /*0x749447*/
    AbstractClass::GenerateUniqueID((AbstractClass *)&this->VoxelAnimClass_field_0x4); /*0x74944e*/
    AudioController::Init((AudioController *)&this->VoxelAnimClass_field_0x114); /*0x749459*/
    AudioController::Init((AudioController *)&this->VoxelAnimClass_field_0x128); /*0x749464*/
    this->VoxelAnimClass_field_0x140 = *(unsigned int *)(this->VoxelAnimClass_field_0x104 + 668); /*0x749475*/
    if ( dword_887398 < dword_887390 /*0x7494af*/
      || (byte_887395 || !dword_887390)
      && dword_88739C > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, unsigned int))(dword_887388 + 8))(
           &dword_887388,
           dword_887390 + dword_88739C,
           0) )
    {
      v5 = dword_887398++; /*0x7494bc*/
      *((unsigned int *)dword_88738C + v5) = this; /*0x7494cb*/
    }
    if ( *(unsigned char *)(this->VoxelAnimClass_field_0x104 + 720) ) /*0x7494d4*/
    {
      v49 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x74967e*/
      v18 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x749688*/
      VoxelAnimClass_field_0x104 = this->VoxelAnimClass_field_0x104; /*0x74968d*/
      v47 = v18; /*0x749693*/
      v20 = *(double *)(VoxelAnimClass_field_0x104 + 696); /*0x749697*/
      IDA_LOWORD(v21) = Math::RoundToInt(v20); /*0x7496a5*/
      v45 = (double)((int)abs32(v49) % v21) - *(double *)(VoxelAnimClass_field_0x104 + 712); /*0x7496d2*/
      v50 = (double)((int)abs32(v47) % v21) - *(double *)(VoxelAnimClass_field_0x104 + 712); /*0x7496e4*/
      v51 = v45; /*0x7496e8*/
      v52 = v20; /*0x7496ec*/
      v22 = -v45; /*0x7496f4*/
      if ( v50 < v22 ) /*0x749701*/
      {
        v50 = -v50; /*0x749709*/
        v51 = v22; /*0x74970d*/
      }
      v23 = this->VoxelAnimClass_field_0x140 - abs32(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink) % 20); /*0x74973d*/
      this->VoxelAnimClass_field_0x140 = v23; /*0x74973f*/
      v24 = (double)v23; /*0x74974c*/
      IDA_LOWORD(v25) = Math::RoundToInt(v24); /*0x74975a*/
      v53 = v25; /*0x749768*/
      IDA_LOWORD(v26) = Math::RoundToInt(v24); /*0x74976e*/
      v27 = v24; /*0x749776*/
      v28 = (double)a3[2]; /*0x749776*/
      v54 = v26; /*0x74977c*/
      IDA_LOWORD(v29) = Math::RoundToInt(v28 - v27 * v52); /*0x749782*/
      v55 = v29; /*0x749787*/
      ObjectClass::Deploy((ObjectClass *)this); /*0x749794*/
      v30 = abs32(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink)); /*0x7497c7*/
      IDA_LOWORD(v31) = Math::RoundToInt( /*0x7497c9*/
                      *(double *)(this->VoxelAnimClass_field_0x104 + 688)
                    - *(double *)(this->VoxelAnimClass_field_0x104 + 680)
                    + 1.0);
      v32 = v30 % v31; /*0x7497d3*/
      v33 = this->VoxelAnimClass_field_0x104; /*0x7497d5*/
      v41 = (double)v32 + *(double *)(v33 + 680); /*0x7497f6*/
      v40 = *(unsigned int *)(v33 + 676); /*0x74980e*/
      v39 = *(unsigned int *)(v33 + 672); /*0x749813*/
      Coords = (int *)ObjectClass::GetCoords((ObjectClass *)this); /*0x74981c*/
      AnimClass::InitRotation((AnimClass *)&this->__pad_98[24], Coords, v39, v40, 1610612736, 1073112678, 0, 0, &v50, v41); /*0x74981f*/
    }
    else
    {
      ObjectClass::Deploy((ObjectClass *)this); /*0x7494e9*/
      v6 = (int *)ObjectClass::GetCoords((ObjectClass *)this); /*0x7494f5*/
      v7 = *v6; /*0x7494fa*/
      v8 = v6[1]; /*0x7494fc*/
      v9 = v6[2]; /*0x7494ff*/
      v54 = v8; /*0x749502*/
      v53 = v7; /*0x74950f*/
      v55 = v9 + 10; /*0x749513*/
      v48 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x749522*/
      v10 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x74953c*/
      v42 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x74954f*/
      v11 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x749559*/
      v12 = this->VoxelAnimClass_field_0x104; /*0x74955e*/
      v44 = v11; /*0x749564*/
      IDA_LOWORD(v13) = Math::RoundToInt(*(double *)(v12 + 712) + *(double *)(v12 + 712)); /*0x749570*/
      v46 = v13; /*0x74957e*/
      v14 = (double)((int)abs32(v42) % v13) - *(double *)(v12 + 712); /*0x749592*/
      IDA_LOWORD(v15) = Math::RoundToInt(v14); /*0x7495b0*/
      v43 = (double)((int)abs32(v10) % v15) + *(double *)(v12 + 696); /*0x7495d8*/
      v16 = (double)((int)abs32(v44) % v46) - *(double *)(v12 + 712); /*0x7495ec*/
      v52 = v43; /*0x7495f2*/
      v50 = v16; /*0x7495f6*/
      v51 = v14; /*0x7495fa*/
      IDA_LOWORD(v17) = Math::RoundToInt(*(double *)(v12 + 688) - *(double *)(v12 + 680) + 1.0); /*0x749617*/
      AnimClass::InitRotation( /*0x749663*/
        (AnimClass *)&this->__pad_98[24],
        &v53,
        *(unsigned int *)(v12 + 672),
        *(unsigned int *)(v12 + 676),
        1610612736,
        1073112678,
        0,
        0,
        &v50,
        (double)((int)abs32(v48) % v17) + *(double *)(v12 + 680));
    }
    v34 = *(unsigned int *)(this->VoxelAnimClass_field_0x104 + 732); /*0x74982d*/
    if ( v34 == -1 ) /*0x749836*/
      Mixer::ReleaseChannel((Mixer *)&this->VoxelAnimClass_field_0x114); /*0x74984e*/
    else
      StartAudioControllerAt(v34, a3, (int **)&this->VoxelAnimClass_field_0x114); /*0x749841*/
    AudioFile::Stop((AudioFile *)&this->VoxelAnimClass_field_0x128); /*0x749859*/
    if ( *(unsigned int *)(this->VoxelAnimClass_field_0x104 + 764) ) /*0x749864*/
    {
      v35 = (int *)RA2_OPNEW(0x100u); /*0x749878*/
      if ( v35 ) /*0x74987f*/
      {
        v36 = Coord::To_Cell((Coord *)&dword_87F7E8, a3); /*0x74988f*/
        this->VoxelAnimClass_field_0x108 = ParticleSystemClass::Constructor( /*0x7498aa*/
                                             v35,
                                             *(unsigned int *)(this->VoxelAnimClass_field_0x104 + 764),
                                             a3,
                                             (int)v36,
                                             this,
                                             &dword_B1D188,
                                             0);
        return this; /*0x7498b8*/
      }
      this->VoxelAnimClass_field_0x108 = 0; /*0x7498bd*/
    }
    return this; /*0x7498b2*/
}
// 0x4c58c0
// G42 T9: body quarantined -- raw dump had duplicate local v11 (int16_t[2]
// and int), e4-flat members u32_28/u32_26/u32_24/vtable28/vtable29, undefined
// Cell/CellCoord helpers. Truth = .omo/ida_cache/func_0x004C58C0.json
// (int __thiscall IterateCellsInRadius(this)).
int EMPulseClass::IterateCellsInRadius()
{
    int result; // eax
    int v3; // ebx
    int i; // ebp
    int v5; // edi
    unsigned __int16 v6; // cx
    int v7; // eax
    int v8; // edx
    unsigned int *v9; // eax
    __int16 v10[2]; // [esp+Ch] [ebp-8h] BYREF
    int v11; // [esp+10h] [ebp-4h]

    result = *((unsigned int *)this + 10); /*0x4c58c8*/
    v3 = -result; /*0x4c58cf*/
    for ( i = result * result; v3 <= result; ++v3 ) /*0x4c58d6*/
    {
      v5 = -result; /*0x4c58df*/
      if ( -result <= result ) /*0x4c58e3*/
      {
        do /*0x4c5978*/
        {
          v6 = v3 + *((unsigned short *)this + 19); /*0x4c58f4*/
          IDA_LOWORD(v11) = v5 + *((unsigned short *)this + 18); /*0x4c58f7*/
          IDA_HIWORD(v11) = v6; /*0x4c58fc*/
          *(unsigned int *)v10 = v11; /*0x4c5908*/
          if ( (unsigned __int16)v11 < 0x200u /*0x4c592a*/
            && v6 < 0x200u
            && (unsigned __int8)Cell::Exists((Cell *)&stru_87F5F0.__pad_58[416], v10) )
          {
            v7 = v10[0] - *((__int16 *)this + 18); /*0x4c5940*/
            v8 = v10[1] - *((__int16 *)this + 19); /*0x4c5949*/
            if ( v7 * v7 + v8 * v8 <= i ) /*0x4c5957*/
            {
              v9 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v10); /*0x4c5963*/
              v9[80] &= ~0x80000u; /*0x4c5968*/
            }
          }
          ++v5; /*0x4c5975*/
        }
        while ( v5 <= *((unsigned int *)this + 10) ); /*0x4c5978*/
      }
      result = *((unsigned int *)this + 10); /*0x4c597e*/
    }
    return result; /*0x4c598b*/
}
// 0x4c59a0
// G42 T9: body quarantined -- static-style AbstractClass::ProcessPower /
// Checksummer::Add_WORD / Power::TimerProcess calls, e4-flat members
// u32_24/u32_26/u32_28/u32_2C/vtable4. Truth =
// .omo/ida_cache/func_0x004C59A0.json (int __thiscall Stat(this,unsigned int*)).
int EMPulseClass::Stat(unsigned int * a2)
{
    AbstractClass::ProcessPower((AbstractClass *)this); /*0x4c59a9*/
    Checksummer::Add_WORD((Checksummer *)a2, *((unsigned short *)this + 18)); /*0x4c59b5*/
    Checksummer::Add_WORD((Checksummer *)a2, *((unsigned short *)this + 19)); /*0x4c59c1*/
    Power::TimerProcess(*((unsigned int *)this + 10)); /*0x4c59cc*/
    Power::TimerProcess(*((unsigned int *)this + 11)); /*0x4c59d7*/
    return Power::TimerProcess(*((unsigned int *)this + 12)); /*0x4c59e7*/
}
// 0x4a1d50
// 0x4c59f0
int EMPulseClass::ddtor(unsigned int *a2)  // G42 sig-sync: IDA int __stdcall ddtor(this,_DWORD*) (1 param; def had phantom a1)
{
  if ( !a2 ) /*0x4c59f6*/
    return -2147467261; /*0x4c59f8*/
  *a2 = -1205482718; /*0x4c5a06*/
  a2[1] = 298983438; /*0x4c5a0e*/
  a2[2] = 1610656159; /*0x4c5a17*/
  a2[3] = unk_7E996C; /*0x4c5a20*/
  return 0; /*0x4c59fd*/
}
// 0x4c5a30
// G42 T9: body quarantined -- raw dump (EMPulseClass_vftable installs,
// static-style InitVtables, void-returning values). Truth =
// .omo/ida_cache/func_0x004C5A30.json (int __stdcall Write(this,int a2)).
int EMPulseClass::Write(int a2)
{
    int result; // eax

    result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x4c5a3b*/
    if ( result >= 0 ) /*0x4c5a42*/
    {
      if ( this ) /*0x4c5a46*/
      {
        AbstractClass::InitVtables((AbstractClass *)this, (int)&a2); /*0x4c5a4f*/
        *(unsigned int *)this->__pad_0 = &EMPulseClass::`vftable'; /*0x4c5a54*/
        this->EMPulseClass_field_0x04 = (int)&EMPulseClass::`vftable'; /*0x4c5a5a*/
        this->EMPulseClass_field_0x08 = (int)&EMPulseClass::`vftable'; /*0x4c5a61*/
        this->EMPulseClass_field_0x0C = (int)&EMPulseClass::`vftable'; /*0x4c5a68*/
      }
      return 0; /*0x4c5a6f*/
    }
    return result; /*0x4c5a71*/
}
// 0x4c5a80
// G42 T9: body quarantined -- raw dump (phantom params a2/a3, static-style
// SaveLoad_Prefix). Truth = .omo/ida_cache/func_0x004C5A80.json
// (int __stdcall Seek(this,int* a2,int a3)).
int EMPulseClass::Seek(int *a2, int a3)
{
    int result; // eax

    result = AbstractClass::SaveLoad_Prefix((int *)this->__pad_0, a2, a3); /*0x4c5a8f*/
    if ( result >= 0 ) /*0x4c5a96*/
      return 0; /*0x4c5a98*/
    return result; /*0x4c5a9a*/
}
// 0x53cbe0
// G42 T9: body quarantined -- ~270-line raw dump dereferenced an int param
// (Block), Coord::/MapClass globals undefined in this universe. Truth =
// .omo/ida_cache/func_0x0053CBE0.json (void __thiscall ProcessFrame(this)).
void ExplosionClass::ProcessFrame()
{
}
// 0x6263d0
// G42 T9: body quarantined -- raw dump (StringVector/String/MIXFile::Load
// undefined types, DynamicVectorClass_char___vftable, HashStringMod31
// undeclared). Truth = .omo/ida_cache/func_0x006263D0.json
// (int __thiscall FileExtension_MapHandler(const char* this)).
int FileExtension::MapHandler()
{
    unsigned int *v1; // edi
    unsigned int *v3; // eax
    unsigned int *v4; // eax
    unsigned int *v5; // esi
    int v6; // eax
    int v7; // esi
    int v8; // ebp
    int v9; // esi
    int v10; // ebx
    int v11; // edi
    int result; // eax
    unsigned int *v13; // ebp
    unsigned int *v14; // ebx
    char *v15; // edx
    int v16; // esi
    int v17; // ebp
    int v18; // esi
    int v19; // edi
    int v20; // eax
    unsigned int *v21; // esi
    int v22; // esi
    int v23; // ebp
    int v24; // esi
    int i; // ebx
    int v26; // edi
    char *v28; // [esp+14h] [ebp-208h] BYREF
    char String[256]; // [esp+18h] [ebp-204h] BYREF

    v1 = g_FileExtensionState; /*0x6263da*/
    if ( !g_FileExtensionState ) /*0x6263e8*/
    {
      v3 = RA2_OPNEW(0x10u); /*0x6263f0*/
      v1 = v3; /*0x6263f5*/
      if ( v3 ) /*0x6263fc*/
      {
        *v3 = -1; /*0x626404*/
        v4 = RA2_OPNEW(0x18u); /*0x62640a*/
        v5 = v4; /*0x62640f*/
        if ( v4 ) /*0x626416*/
        {
          StringVector::Construct(v4, 0, 0); /*0x62641e*/
          *v5 = &DynamicVectorClass<char *>::`vftable'; /*0x626423*/
          v5[5] = 10; /*0x626429*/
          v5[4] = 0; /*0x626430*/
        }
        else
        {
          v5 = 0; /*0x626439*/
        }
        v1[1] = v5; /*0x62643d*/
        if ( RA2_OPNEW(0x18u) ) /*0x626440*/
          v6 = FileExtension::Constructor(0, 0); /*0x626452*/
        else
          v6 = 0; /*0x626459*/
        v1[2] = v6; /*0x62645d*/
        if ( RA2_OPNEW(0x10u) ) /*0x626460*/
          v1[3] = DynamicVectorArray::Constructor(10, 31, HashStringMod31); /*0x62647c*/
        else
          v1[3] = 0; /*0x626483*/
      }
      else
      {
        v1 = 0; /*0x626488*/
      }
      g_FileExtensionState = v1; /*0x62648a*/
    }
    String::CopyUpper(String, this); /*0x626495*/
    v7 = v1[3]; /*0x62649a*/
    v8 = *(unsigned int *)v7 + 24 * ((*(int (__thiscall **)(char *))(v7 + 4))(String) % *(unsigned int *)(v7 + 8)); /*0x6264b1*/
    v9 = *(unsigned int *)(v8 + 16) - 1; /*0x6264b4*/
    if ( v9 < 0 ) /*0x6264b5*/
      goto LABEL_21; /*0x6264b5*/
    v10 = 260 * v9; /*0x6264be*/
    while ( 1 ) /*0x6264c6*/
    {
      v11 = *(unsigned int *)(v8 + 4) + v10; /*0x6264c6*/
      if ( String::Equals((const char *)v11, String) ) /*0x6264cf*/
        break; /*0x6264cf*/
      --v9; /*0x6264d8*/
      v10 -= 260; /*0x6264d9*/
      if ( v9 < 0 ) /*0x6264e1*/
        goto LABEL_21; /*0x6264e1*/
    }
    if ( v11 == -256 || (result = *(unsigned int *)(*(unsigned int *)(v11 + 256) + 256)) == 0 ) /*0x6264f9*/
    {
  LABEL_21:
      v13 = g_FileExtensionState; /*0x6264ff*/
      v14 = MIXFile::Load(g_FileExtensionState, this); /*0x626511*/
      v15 = (char *)RA2_OPNEW(0x104u); /*0x62651d*/
      if ( v15 ) /*0x626524*/
      {
        strcpy(v15, this); /*0x62653e*/
        *((unsigned int *)v15 + 64) = v14; /*0x626547*/
        v28 = v15; /*0x62654d*/
      }
      else
      {
        v28 = 0; /*0x626553*/
      }
      String::CopyUpper(String, this); /*0x626564*/
      v16 = v13[3]; /*0x626569*/
      v17 = *(unsigned int *)v16 + 24 * ((*(int (__thiscall **)(char *))(v16 + 4))(String) % *(unsigned int *)(v16 + 8)); /*0x626580*/
      v18 = *(unsigned int *)(v17 + 16) - 1; /*0x626583*/
      if ( v18 < 0 ) /*0x626584*/
      {
  LABEL_28:
        v20 = FileExtension::Check(String, &v28); /*0x6265ae*/
        FileExtension::CheckExtensionMatch(v20); /*0x6265c7*/
      }
      else
      {
        v19 = 260 * v18; /*0x62658d*/
        while ( !String::Equals((const char *)(v19 + *(unsigned int *)(v17 + 4)), String) ) /*0x6265a1*/
        {
          --v18; /*0x6265a3*/
          v19 -= 260; /*0x6265a4*/
          if ( v18 < 0 ) /*0x6265ac*/
            goto LABEL_28; /*0x6265ac*/
        }
      }
      v21 = g_FileExtensionState; /*0x6265cc*/
      String::CopyUpper(String, this); /*0x6265d7*/
      v22 = v21[3]; /*0x6265dc*/
      v23 = *(unsigned int *)v22 + 24 * ((*(int (__thiscall **)(char *))(v22 + 4))(String) % *(unsigned int *)(v22 + 8)); /*0x6265f3*/
      v24 = *(unsigned int *)(v23 + 16) - 1; /*0x6265f6*/
      if ( v24 < 0 ) /*0x6265f7*/
        return 0; /*0x6265f7*/
      for ( i = 260 * v24; ; i -= 260 ) /*0x626600*/
      {
        v26 = i + *(unsigned int *)(v23 + 4); /*0x62660a*/
        if ( String::Equals((const char *)v26, String) ) /*0x62660f*/
          break; /*0x62660f*/
        if ( --v24 < 0 ) /*0x626621*/
          return 0; /*0x62662f*/
      }
      if ( v26 == -256 ) /*0x626638*/
        return 0; /*0x62663d*/
      else
        return *(unsigned int *)(*(unsigned int *)(v26 + 256) + 256); /*0x626649*/
    }
    return result; /*0x626623*/
}
// 0x628240
// G42 T9: body quarantined -- raw dump in e4-flat vocabulary (q004 etc.),
// StringVector::Construct static-style. Truth =
// .omo/ida_cache/func_0x00628240.json
// (_DWORD* __thiscall Constructor(this,int a2,int a3)).
unsigned int* FileExtension::Constructor(int a2, int a3)
{
    unsigned char *v4; // eax
    int v5; // ecx
    int v6; // eax
    unsigned char *v7; // ecx
    int v8; // edx

    this->FileExtension_field_0x04 = 0; /*0x62824d*/
    this->FileExtension_field_0x08 = a2; /*0x628250*/
    IDA_LOBYTE(this->FileExtension_field_0x0C) = 1; /*0x628253*/
    IDA_BYTE1(this->FileExtension_field_0x0C) = 0; /*0x628257*/
    *(unsigned int *)this->__pad_0 = &VectorClass<HSVClass>::`vftable'; /*0x62825a*/
    if ( a2 ) /*0x628260*/
    {
      if ( a3 ) /*0x628268*/
      {
        if ( a2 - 1 >= 0 ) /*0x62826f*/
        {
          v4 = (unsigned char *)(a3 + 2); /*0x628271*/
          v5 = a2; /*0x628274*/
          do /*0x628281*/
          {
            *(v4 - 2) = 0; /*0x628275*/
            *(v4 - 1) = 0; /*0x628278*/
            *v4 = 0; /*0x62827b*/
            v4 += 3; /*0x62827d*/
            --v5; /*0x628280*/
          }
          while ( v5 ); /*0x628281*/
        }
        this->FileExtension_field_0x04 = a3; /*0x628283*/
      }
      else
      {
        v6 = RA2_OPNEW(3 * a2); /*0x62828c*/
        if ( v6 ) /*0x628296*/
        {
          if ( a2 - 1 >= 0 ) /*0x62829d*/
          {
            v7 = (unsigned char *)(v6 + 2); /*0x62829f*/
            v8 = a2; /*0x6282a2*/
            do /*0x6282af*/
            {
              *(v7 - 2) = 0; /*0x6282a3*/
              *(v7 - 1) = 0; /*0x6282a6*/
              *v7 = 0; /*0x6282a9*/
              v7 += 3; /*0x6282ab*/
              --v8; /*0x6282ae*/
            }
            while ( v8 ); /*0x6282af*/
          }
        }
        else
        {
          v6 = 0; /*0x6282b3*/
        }
        this->FileExtension_field_0x04 = v6; /*0x6282b5*/
        IDA_BYTE1(this->FileExtension_field_0x0C) = 1; /*0x6282b8*/
      }
    }
    *(unsigned int *)this->__pad_0 = &DynamicVectorClass<HSVClass>::`vftable'; /*0x6282bc*/
    *((unsigned int *)this + 5) = 10; /*0x6282c2*/
    *((unsigned int *)this + 4) = 0; /*0x6282c9*/
    return this->__pad_0; /*0x6282ce*/
}
// 0x628d10
// G42 T9: body quarantined -- String::CopyChecked undefined, u32_14 e4-flat
// member, phantom a2 param. Truth = .omo/ida_cache/func_0x00628D10.json
// (char __thiscall CheckExtensionMatch(this,int a2)).
char FileExtension::CheckExtensionMatch(int a2)
{
    int FileExtension_field_0x08; // ecx
    int v4; // eax
    int v6; // eax
    int v7; // ecx
    int v8; // edx
    int FileExtension_field_0x04; // eax
    int v10; // esi

    FileExtension_field_0x08 = this->FileExtension_field_0x08; /*0x628d13*/
    if ( *((unsigned int *)this + 4) >= FileExtension_field_0x08 ) /*0x628d1b*/
    {
      if ( !IDA_BYTE1(this->FileExtension_field_0x0C) && FileExtension_field_0x08 ) /*0x628d26*/
        return 0; /*0x628d26*/
      v4 = *((unsigned int *)this + 5); /*0x628d28*/
      if ( v4 <= 0 /*0x628d38*/
        || !(*(unsigned __int8 (__thiscall **)(FileExtension *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 8))(
              this,
              FileExtension_field_0x08 + v4,
              0) )
      {
        return 0; /*0x628d3f*/
      }
    }
    v6 = *((unsigned int *)this + 4); /*0x628d45*/
    v7 = v6 + 1; /*0x628d52*/
    v8 = 65 * v6; /*0x628d55*/
    FileExtension_field_0x04 = this->FileExtension_field_0x04; /*0x628d57*/
    *((unsigned int *)this + 4) = v7; /*0x628d5a*/
    v10 = FileExtension_field_0x04 + 4 * v8; /*0x628d5e*/
    String::CopyChecked((char *)v10, (const char *)a2); /*0x628d63*/
    *(unsigned int *)(v10 + 256) = *(unsigned int *)(a2 + 256); /*0x628d6f*/
    return 1; /*0x628d41*/
}
// 0x628dd0
// G42 T9: body quarantined -- String::Copy undefined, u32_100 e4-flat member.
// Truth = .omo/ida_cache/func_0x00628DD0.json
// (int __thiscall sub_628DD0(this,const char*,_DWORD*)).
int FileExtension::Check(const char * a2, unsigned int * a3)
{
    String::Copy((char *)this, a2); /*0x628dd8*/
    *(unsigned int *)(this + 256) = *a3; /*0x628de5*/
    return this; /*0x628deb*/
}
// 0x47b0c0
int FileFind::Next()  // G42 sig-sync: IDA int __thiscall Next(char* this) -- this is the filename buffer
{
  int result; // eax
  struct _WIN32_FIND_DATAA FindFileData; // [esp+4h] [ebp-140h] BYREF

  if ( this ) /*0x47b0cb*/
  {
    result = hFindFile; /*0x47b0cd*/
    if ( hFindFile != -1 ) /*0x47b0d5*/
    {
      result = FindNextFileA((HANDLE)hFindFile, &FindFileData); /*0x47b0dd*/
      if ( result == 1 ) /*0x47b0e6*/
      {
        strcpy((char *)this, FindFileData.cFileName); /*0x47b104*/
        return 1; /*0x47b116*/
      }
    }
    *(char *)this = 0; /*0x47b117*/
  }
  IDA_LOBYTE(result) = 0; /*0x47b11a*/
  return result; /*0x47b10f*/
}
// 0x47b130
int FileFind::CloseHandle()  // G42 sig-sync: hpp int; IDA truth HANDLE FileFind_CloseHandle() free fn
{
  int result; // eax

  result = hFindFile; /*0x47b130*/
  if ( hFindFile != -1 ) /*0x47b138*/
  {
    result = (int)FindClose((HANDLE)hFindFile); /*0x47b13b*/
    hFindFile = -1; /*0x47b141*/
  }
  return result; /*0x47b14b*/
}
// 0x5bbed0
void FileFind::Close()
{
}
// 0x5bbee0
void FileFind::ReleaseAllHandles()
{
}
// 0x477790
// G42 T9: body quarantined -- raw dump (static-style FilePipe::Destructor with
// int-cast this). Truth = .omo/ida_cache/func_0x00477790.json
// (void* __thiscall QueryInterface(this,char a2)).
void* FilePipe::QueryInterface(char a2)
{
    FilePipe::Destructor((int)this); /*0x477793*/
    if ( (a2 & 1) != 0 ) /*0x47779d*/
      RA2_OPDEL(this); /*0x4777a0*/
    return this; /*0x4777aa*/
}
// 0x7ba420
// G42 T9: body quarantined -- raw dump (Pipe_field_0x0C/q004 e4-flat members,
// FilePipe_vftable install, `return Pipe::Dtor(int a1)` syntax garbage).
// Truth = .omo/ida_cache/func_0x007BA420.json (int __thiscall Destructor(Pipe* this)).
int FilePipe::Destructor()
{
    int Pipe_field_0x0C; // ecx

    Pipe_field_0x0C = this->Pipe_field_0x0C; /*0x7ba423*/
    *(unsigned int *)this->__pad_0 = &FilePipe::`vftable'; /*0x7ba426*/
    if ( Pipe_field_0x0C && *((unsigned char *)this + 16) ) /*0x7ba430*/
    {
      *((unsigned char *)this + 16) = 0; /*0x7ba437*/
      (*(void (__thiscall **)(int))(*(unsigned int *)Pipe_field_0x0C + 52))(Pipe_field_0x0C); /*0x7ba43d*/
      this->Pipe_field_0x0C = 0; /*0x7ba440*/
    }
    return Pipe::Dtor(this); /*0x7ba44e*/
}
// 0x7ba450
// G42 T9: body quarantined -- raw dump (vtable-slot-as-member reads).
// Truth = .omo/ida_cache/func_0x007BA450.json (int __thiscall Release(this)).
int FilePipe::Release()
{
    int v2; // eax
    int FilePipe_field_0x0C; // ecx
    int v4; // edi

    v2 = (*(int (__thiscall **)(FilePipe *))(*(unsigned int *)this->__pad_0 + 4))(this); /*0x7ba456*/
    FilePipe_field_0x0C = this->FilePipe_field_0x0C; /*0x7ba459*/
    v4 = v2; /*0x7ba45c*/
    if ( FilePipe_field_0x0C && *((unsigned char *)this + 16) ) /*0x7ba462*/
    {
      *((unsigned char *)this + 16) = 0; /*0x7ba469*/
      (*(void (__thiscall **)(int))(*(unsigned int *)FilePipe_field_0x0C + 52))(FilePipe_field_0x0C); /*0x7ba46f*/
    }
    return v4; /*0x7ba474*/
}
// 0x7ba480
// G42 T9: body quarantined -- raw dump (FilePipe_field_0x0C/q004 e4-flat
// members, returned value from void fn). Truth =
// .omo/ida_cache/func_0x007BA480.json (int __thiscall Read(this,int a2,int a3)).
int FilePipe::Read(int a2, int a3)
{
    int FilePipe_field_0x0C; // ecx
    int v5; // ecx

    FilePipe_field_0x0C = this->FilePipe_field_0x0C; /*0x7ba485*/
    if ( !FilePipe_field_0x0C || !a2 || a3 <= 0 ) /*0x7ba49a*/
      return 0; /*0x7ba4c5*/
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(unsigned int *)FilePipe_field_0x0C + 24))(FilePipe_field_0x0C) ) /*0x7ba49e*/
    {
      v5 = this->FilePipe_field_0x0C; /*0x7ba4a5*/
      *((unsigned char *)this + 16) = 1; /*0x7ba4a8*/
      (*(void (__thiscall **)(int, int))(*(unsigned int *)v5 + 28))(v5, 2); /*0x7ba4b0*/
    }
    return (*(int (__thiscall **)(int, int, int))(*(unsigned int *)this->FilePipe_field_0x0C + 48))( /*0x7ba4bd*/
             this->FilePipe_field_0x0C,
             a2,
             a3);
}
// 0x525a10
// G42 T9: body quarantined -- raw dump (FileStraw_vftable install, INIClass
// undefined, static-style FileStraw::Destructor((int)v5)). Truth =
// .omo/ida_cache/func_0x00525A10.json (int __thiscall Open(this,int a2,char a3)).
int FileStraw::Open(int a2, char a3)
{
    int File; // esi
    int v5[4]; // [esp+4h] [ebp-14h] BYREF
    char v6; // [esp+14h] [ebp-4h]

    this->FileStraw_field_0x04 = 0; /*0x525a19*/
    *((unsigned int *)this + 2) = 0; /*0x525a1c*/
    v5[1] = 0; /*0x525a1f*/
    v5[2] = 0; /*0x525a23*/
    v6 = 0; /*0x525a27*/
    v5[3] = a2; /*0x525a2f*/
    v5[0] = (int)&FileStraw::`vftable'; /*0x525a3a*/
    File = INIClass::LoadFile((INIClass *)this, (int)v5, a3); /*0x525a4b*/
    FileStraw::Destructor((int)v5); /*0x525a4d*/
    return File; /*0x525a54*/
}
// 0x7ba590
// G42 T9: body quarantined -- raw dump (u32_C/q004 e4-flat members,
// FileStraw_vftable install, `return Straw::Dtor(int a1)` syntax garbage).
// Truth = .omo/ida_cache/func_0x007BA590.json (int __thiscall Destructor(Straw* this)).
int FileStraw::Destructor()
{
    int v2; // ecx

    v2 = *((unsigned int *)this + 3); /*0x7ba593*/
    *(unsigned int *)this->__pad_0 = &FileStraw::`vftable'; /*0x7ba596*/
    if ( v2 && *((unsigned char *)this + 16) ) /*0x7ba5a0*/
    {
      (*(void (__thiscall **)(int))(*(unsigned int *)v2 + 52))(v2); /*0x7ba5a9*/
      *((unsigned char *)this + 16) = 0; /*0x7ba5ac*/
      *((unsigned int *)this + 3) = 0; /*0x7ba5b0*/
    }
    return Straw::Dtor(this); /*0x7ba5be*/
}
// 0x477770
// G42 T9: body quarantined -- raw dump (static-style FileStraw::Destructor
// with int-cast this). Truth = .omo/ida_cache/func_0x00477770.json.
void* FileStraw_Destru::QueryInterface(char a2)
{
    FileStraw::Destructor((int)this); /*0x477773*/
    if ( (a2 & 1) != 0 ) /*0x47777d*/
      RA2_OPDEL(this); /*0x477780*/
    return this; /*0x47778a*/
}
// 0x7ba530
// G42 T9: body quarantined -- raw dump (q00C/q0042 e4-flat members, `this+16`
// ptr math). Truth = .omo/ida_cache/func_0x007BA530.json.
int FileStraw_Destru::Release(int a2, int a3)
{
    int v4; // ecx
    int v5; // ecx

    v4 = *((unsigned int *)this + 3); /*0x7ba535*/
    if ( v4 /*0x7ba56e*/
      && a2
      && a3 > 0
      && ((*(unsigned __int8 (__thiscall **)(int))(*(unsigned int *)v4 + 24))(v4)
       || (v5 = *((unsigned int *)this + 3),
           *((unsigned char *)this + 16) = 1,
           (*(unsigned __int8 (__thiscall **)(int, unsigned int))(*(unsigned int *)v5 + 20))(v5, 0))
       && (*(int (__thiscall **)(unsigned int, int))(**((unsigned int **)this + 3) + 28))(*((unsigned int *)this + 3), 1)) )
    {
      return (*(int (__thiscall **)(unsigned int, int, int))(**((unsigned int **)this + 3) + 36))(*((unsigned int *)this + 3), a2, a3); /*0x7ba57c*/
    }
    else
    {
      return 0; /*0x7ba587*/
    }
}
// 0x730100
void FileTree::CleanupAll()
{
}
// 0x69e500
// G42 T9: body quarantined -- recursive raw dump in e4-flat vocabulary
// (__tail_0/u32_C/u32_10/u32_18/u32_1C, static-style recursive self-calls).
// Truth = .omo/ida_cache/func_0x0069E500.json.
int FileTreeNode::Destroy()
{
    int result; // eax
    void *v3; // edi
    FileTreeNode *v4; // eax
    FileTreeNode *v5; // eax

    if ( *(unsigned short *)this->__tail_0 == 0xFFFF ) /*0x69e507*/
    {
      if ( *((unsigned char *)this + 16) ) /*0x69e509*/
      {
        v3 = (void *)*((unsigned int *)this + 3); /*0x69e511*/
        if ( v3 ) /*0x69e516*/
        {
          FileTreeNode::Destroy(*((FileTreeNode **)this + 3)); /*0x69e51a*/
          RA2_OPDEL(v3); /*0x69e520*/
        }
        *((unsigned int *)this + 3) = 0; /*0x69e528*/
        *((unsigned char *)this + 16) = 0; /*0x69e52f*/
      }
      v4 = (FileTreeNode *)*((unsigned int *)this + 6); /*0x69e534*/
      if ( v4 ) /*0x69e539*/
        v4[7] = *(this + 7); /*0x69e53e*/
      v5 = (FileTreeNode *)*((unsigned int *)this + 7); /*0x69e541*/
      if ( v5 ) /*0x69e546*/
        v5[6] = *(this + 6); /*0x69e54b*/
      else
        dword_B077B0 = (void *)*((unsigned int *)this + 6); /*0x69e553*/
      result = *((unsigned int *)this + 2); /*0x69e558*/
      if ( result ) /*0x69e55d*/
      {
        result = free(*((void **)this + 2)); /*0x69e560*/
        *((unsigned int *)this + 2) = 0; /*0x69e568*/
      }
    }
    return result; /*0x69e56f*/
}
// 0x512ae0
void InfantryTypeVector::QueryInterface(unsigned int * Block, char a2)
{
}
// 0x512c80
void InfantryTypeVector::Release( int a2, unsigned int * a3)
{
}
// 0x512d60
void InfantryTypeVector::AddType( unsigned int * a2)
{
}
// 0x512da0
void InfantryTypeVector::Remove( int a2)
{
}
// 0x512dc0
void InfantryTypeVector::Construct( int a2, int a3)
{
}
// 0x6d1eb0
void IsoCoord::ToPixel( int a2, Tactical * aP2)
{
}
// 0x6d62e0
void IsoCoord::ToScreenOffset(AbstractClass * aP0, AbstractClass * aP1, AbstractClass * aP2, AbstractClass * aP3)
{
}
// 0x748750
void IsoTile::Decode16Bit(int a1, uint16_t * a2, int * a3, int a4, int a5, int a6)
{
}
// 0x748c30
void IsoTile::Decode8BitV2(int a1, uint8_t * a2, int * a3, unsigned int a4, int a5, int a6)
{
}
// 0x7c39c0
void IsoTile::Decode16BitV2(int a1, uint16_t * a2, int * a3, int a4, int a5, int a6)
{
}
// 0x7c3eb0
void IsoTile::Decode8Bit(int a1, uint8_t * a2, int * a3, unsigned int a4, int a5, int a6)
{
}
// 0x544a70
void IsometricTileTypeClass::CleanupMembers()
{
}
// 0x544cb0
void IsometricTileTypeClass::LoadTileFileData()
{
}
// 0x549aa0
void IsometricTileTypeClass::GetTerrainType( unsigned short * a2, int a3)
{
}
// 0x549ae0
void IsometricTileTypeClass::GetHeight( int a2)
{
}
// 0x549b50
void IsometricTileTypeClass::vt_entry_6C(unsigned int * a0, IsometricTileTypeClass * aP1)
{
}
// 0x4c1f20
void Lightning::Draw( int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
}
// 0x6b5240
int MapCoords::Init()  // G42 sig-sync: hpp int (matches IDA-style global initializer returning 128)
{
  dword_B0B7D8 = 0; /*0x6b5245*/
  dword_B0B7D0 = 128; /*0x6b524f*/
  dword_B0B7D4 = 128; /*0x6b5254*/
  return 128; /*0x6b5259*/
}
// 0x45b1c0
void MapData::InitHeights()
{
}
// 0x69a3b0
void MapFile::LoadDescription(wchar_t * String_v, uint8_t *** a2, INIClass * aP1)
{
}
// 0x69c500
void MapFile::ddtor()
{
}
// 0x69c560
void MapFile::Write( int a2)
{
}
// 0x69cbc0
void MapFile::Release( int a2, unsigned int * a3)
{
}
// 0x69cd00
void MapFile::Read( const char ** a2)
{
}
// 0x5d63e0
void MapPreview::Check( int a2)
{
}
// 0x5e7eb0
void MapPreview::Upload()
{
}
// 0x595740
int MapResourceClass::Constructor()
{
    MapSeedClass::Constructor((int)this); /*0x595745*/
    *((unsigned int *)this + 94) = 0; /*0x595756*/
    *((unsigned int *)this + 95) = 0; /*0x59575c*/
    *((unsigned int *)this + 96) = 0; /*0x595762*/
    *((unsigned int *)this + 97) = 0; /*0x595768*/
    DynamicVectorClass::Construct((DynamicVectorClass *)(this + 98), 0, 0); /*0x59576e*/
    *((unsigned int *)this + 98) = &TypeList<int>::`vftable'; /*0x595773*/
    DynamicVectorClass::Construct((DynamicVectorClass *)(this + 105), 0, 0); /*0x595783*/
    *((unsigned int *)this + 105) = &TypeList<int>::`vftable'; /*0x595788*/
    DynamicVectorClass::Construct((DynamicVectorClass *)(this + 112), 0, 0); /*0x595798*/
    *((unsigned int *)this + 112) = &TypeList<int>::`vftable'; /*0x59579d*/
    DynamicVectorClass::Construct((DynamicVectorClass *)(this + 119), 0, 0); /*0x5957ad*/
    *((unsigned int *)this + 119) = &TypeList<int>::`vftable'; /*0x5957b2*/
    VectorClass::Construct((VectorClass *)(this + 126), 0, 0); /*0x5957c2*/
    *((unsigned int *)this + 131) = 10; /*0x5957c7*/
    *((unsigned int *)this + 130) = 0; /*0x5957ce*/
    *((unsigned int *)this + 126) = &TypeList<int>::`vftable'; /*0x5957d1*/
    DynamicVectorClass::Construct((DynamicVectorClass *)(this + 133), 0, 0); /*0x5957e1*/
    *((unsigned int *)this + 133) = &TypeList<int>::`vftable'; /*0x5957e6*/
    DynamicVectorClass::Construct((DynamicVectorClass *)(this + 140), 0, 0); /*0x5957f6*/
    *((unsigned int *)this + 140) = &TypeList<int>::`vftable'; /*0x5957fb*/
    DynamicVectorClass::Construct((DynamicVectorClass *)(this + 147), 0, 0); /*0x59580b*/
    *((unsigned int *)this + 147) = &TypeList<int>::`vftable'; /*0x595810*/
    VectorClass::Construct((VectorClass *)(this + 154), 0, 0); /*0x595820*/
    *((unsigned int *)this + 159) = 10; /*0x595825*/
    *((unsigned int *)this + 158) = 0; /*0x59582c*/
    *((unsigned int *)this + 154) = &TypeList<int>::`vftable'; /*0x59582f*/
    DynamicVectorClass::Construct((DynamicVectorClass *)(this + 161), 0, 0); /*0x59583f*/
    *((unsigned int *)this + 161) = &TypeList<int>::`vftable'; /*0x595844*/
    DynamicVectorClass::Construct((DynamicVectorClass *)this + 28, 0, 0); /*0x595854*/
    *((unsigned int *)this + 168) = &TypeList<int>::`vftable'; /*0x595859*/
    *((unsigned int *)this + 175) = 2500; /*0x59585f*/
    *((unsigned int *)this + 176) = 5500; /*0x595873*/
    DynamicVectorClass::BuildingTypeConstructor((DynamicVectorClass *)(this + 177), 0, 0); /*0x59587d*/
    *((unsigned int *)this + 177) = &TypeList<BuildingTypeClass const *>::`vftable'; /*0x595882*/
    VectorClass::BuildingTypeConstructor((VectorClass *)this + 46, 0, 0); /*0x595892*/
    *((unsigned int *)this + 189) = 10; /*0x595897*/
    *((unsigned int *)this + 188) = 0; /*0x59589e*/
    *((unsigned int *)this + 184) = &TypeList<BuildingTypeClass const *>::`vftable'; /*0x5958a1*/
    *((unsigned int *)this + 191) = 500; /*0x5958a7*/
    *((unsigned char *)this + 768) = 1; /*0x5958b1*/
    *((unsigned int *)this + 193) = 0; /*0x5958b8*/
    *((unsigned int *)this + 195) = 4; /*0x5958be*/
    *((unsigned char *)this + 784) = 0; /*0x5958c8*/
    return (int)this; /*0x5958d0*/
}
// 0x56d100
void MapSeed::CheckTileMatch(int16_t *aP1, int16_t *aP2, int aP3, char aP4, char aP5, char aP6)
{
}
// 0x58b7d0
int MapSeed::IsInitialized()  // G42 sig-sync: returns state global (IDA-style)
{
  return dword_ABED0C; /*0x58b7d5*/
}
// 0x5910f0
void MapSeed::PlaceCityBlock( int16_t * a2, int16_t * a3, void * a4)
{
}
// 0x591d80
void MapSeed::PlaceCityBuildings( int16_t * a2, int16_t * a3, void * a4)
{
}
// 0x593550
void MapSeed::PlaceCityBlock2( int16_t * a2, int16_t * a3, ObjectClass * aP2)
{
}
// 0x595680
int MapSeedClass::Constructor()
{
    wchar_t *StringCSF; // eax

    LoadOptions::LoadOptions((unsigned int *)this); /*0x595684*/
    *(unsigned int *)(this + 56) = 0; /*0x595693*/
    *(unsigned int *)(this + 60) = 1; /*0x595696*/
    *(unsigned int *)(this + 64) = 1; /*0x595699*/
    *(unsigned int *)(this + 68) = 0; /*0x59569c*/
    *(unsigned int *)(this + 72) = 1; /*0x59569f*/
    *(unsigned int *)(this + 76) = 0; /*0x5956a2*/
    *(unsigned int *)(this + 80) = 2; /*0x5956a5*/
    *(unsigned int *)(this + 84) = 0; /*0x5956ac*/
    *(unsigned int *)(this + 88) = 0; /*0x5956af*/
    *(unsigned int *)(this + 92) = 0; /*0x5956b2*/
    *(unsigned int *)(this + 96) = 0; /*0x5956b5*/
    *(unsigned int *)(this + 100) = 0; /*0x5956b8*/
    *(unsigned int *)(this + 104) = 0; /*0x5956bb*/
    *(unsigned int *)(this + 108) = 0; /*0x5956be*/
    *(unsigned int *)(this + 112) = 0; /*0x5956c1*/
    *(unsigned int *)(this + 116) = -1; /*0x5956c4*/
    *(unsigned int *)this = &MapSeedClass::`vftable'; /*0x5956cb*/
    *(unsigned int *)(this + 8) = &unk_82BA60; /*0x5956d1*/
    *(unsigned short *)(this + 120) = 0; /*0x5956d8*/
    *(unsigned int *)(this + 12) = this + 120; /*0x5956db*/
    if ( Map_Create_734FD0() ) /*0x5956de*/
    {
      StringCSF = GetStringCSF(aTxtRandomMapDe, 0, aDRa2mdpostMapg, 3934); /*0x5956f8*/
      wcscpy((wchar_t *)(this + 120), StringCSF); /*0x5956ff*/
    }
    return this; /*0x595709*/
}
// 0x597760
void MapSeedClass::Release( char * a2, wchar_t * Source)
{
}
// 0x597a30
char MapSeedClass::AddRef( char * Source)
{
    wchar_t *StringCSF; // eax
    int Int_Overwrite; // eax
    int v5; // ecx
    int v6; // eax
    int v7; // eax
    int v8; // ecx
    int v9; // eax
    int v10; // eax
    int v11; // ecx
    int v12; // eax
    int v13; // eax
    int v14; // ecx
    int v15; // eax
    int v16; // eax
    int v17; // ecx
    int v18; // eax
    int v20; // [esp-4h] [ebp-BCh]
    int v21; // [esp-4h] [ebp-BCh]
    int v22; // [esp-4h] [ebp-BCh]
    int v23; // [esp-4h] [ebp-BCh]
    int v24; // [esp-4h] [ebp-BCh]
    INIClass v25; // [esp+Ch] [ebp-ACh] BYREF
    CCFileClass v26; // [esp+4Ch] [ebp-6Ch] BYREF
    int v27[3]; // [esp+A4h] [ebp-14h] BYREF
    int v28; // [esp+B0h] [ebp-8h]

    if ( Source ) /*0x597a46*/
    {
      Debug::Log(); /*0x597a52*/
      CCFileClass::Construct(&v26, Source); /*0x597a5f*/
      v25.sectionHead[0] = (int)&GenericNode::`vftable'; /*0x597a6d*/
      v25.sectionCount = (int)&GenericNode::`vftable'; /*0x597a71*/
      v25.headNode[0] = 0; /*0x597a79*/
      v25.headNode[1] = 0; /*0x597a7e*/
      v25.sectionHead[1] = 0; /*0x597a82*/
      v25.sectionHead[2] = 0; /*0x597a86*/
      *(unsigned int *)v25.__pad_20 = 0; /*0x597a8a*/
      *(unsigned int *)&v25.__pad_20[4] = 0; /*0x597a8e*/
      LinkedList::Prepend((LinkedList *)v25.sectionHead, (int)&v25.sectionCount); /*0x597a9a*/
      v25.headNode[2] = (int)&List<INIClass::INISection *>::`vftable'; /*0x597aa9*/
      memset(&v25.__pad_20[8], 0, 13); /*0x597ab1*/
      v25.unknown38 = 0; /*0x597ac1*/
      v25.INIClass_field_3C = 0; /*0x597ac5*/
      *(unsigned int *)v25.__pad_0 = &INIClass::`vftable'; /*0x597ac9*/
      if ( FileStraw::Open((FileStraw *)&v25, (int)&v26, 0) ) /*0x597ad1*/
      {
        StringCSF = GetStringCSF((wchar_t *)stru_82BA00.?, 0, ((char *)&stru_82BA00 + 100), 5433); /*0x597af8*/
        INIClass::ParseValue_Wide( /*0x597b0c*/
          &v25,
          (unsigned __int8 *)&stru_82BA00.?[8],
          (unsigned __int8 *)&stru_81AF8C.?[5],
          StringCSF,
          (wchar_t *)this + 60,
          0x80u);
        Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x597b23*/
                          (bool *)v25.__pad_0,
                          (unsigned __int8 *)&stru_82BA00.?[8],
                          (unsigned __int8 *)&stru_82BA00.?[151],
                          *((unsigned int *)this + 25));
        v5 = *((unsigned int *)this + 26); /*0x597b28*/
        *((unsigned int *)this + 25) = Int_Overwrite; /*0x597b2b*/
        v6 = INIClass::ReadInt_Overwrite( /*0x597b3d*/
               (bool *)v25.__pad_0,
               (unsigned __int8 *)&stru_82BA00.?[8],
               (unsigned __int8 *)g_INI_Key_Height,
               v5);
        v20 = *((unsigned int *)this + 20); /*0x597b49*/
        *((unsigned int *)this + 26) = v6; /*0x597b54*/
        *((unsigned int *)this + 20) = INIClass::ReadInt_Overwrite( /*0x597b5c*/
                                   (bool *)v25.__pad_0,
                                   (unsigned __int8 *)&stru_82BA00.?[8],
                                   (unsigned __int8 *)&stru_82BA00.?[139],
                                   v20);
        v7 = INIClass::ReadInt_Overwrite( /*0x597b71*/
               (bool *)v25.__pad_0,
               (unsigned __int8 *)&stru_82BA00.?[8],
               (unsigned __int8 *)&stru_82BA00.?[131],
               *((unsigned int *)this + 29));
        v8 = *((unsigned int *)this + 15); /*0x597b76*/
        *((unsigned int *)this + 29) = v7; /*0x597b79*/
        v9 = INIClass::ReadInt_Overwrite( /*0x597b8b*/
               (bool *)v25.__pad_0,
               (unsigned __int8 *)&stru_82BA00.?[8],
               (unsigned __int8 *)&stru_82BA00.?[123],
               v8);
        v21 = *((unsigned int *)this + 14); /*0x597b97*/
        *((unsigned int *)this + 15) = v9; /*0x597ba2*/
        *((unsigned int *)this + 14) = INIClass::ReadInt_Overwrite( /*0x597baa*/
                                   (bool *)v25.__pad_0,
                                   (unsigned __int8 *)&stru_82BA00.?[8],
                                   (unsigned __int8 *)g_INI_Key_Theater,
                                   v21);
        v10 = INIClass::ReadInt_Overwrite( /*0x597bbf*/
                (bool *)v25.__pad_0,
                (unsigned __int8 *)&stru_82BA00.?[8],
                (unsigned __int8 *)g_INI_Key_Time,
                *((unsigned int *)this + 18));
        v11 = *((unsigned int *)this + 28); /*0x597bc4*/
        *((unsigned int *)this + 18) = v10; /*0x597bc7*/
        v12 = INIClass::ReadInt_Overwrite( /*0x597bd9*/
                (bool *)v25.__pad_0,
                (unsigned __int8 *)&stru_82BA00.?[8],
                (unsigned __int8 *)&stru_82BA00.?[111],
                v11);
        v22 = *((unsigned int *)this + 17); /*0x597be5*/
        *((unsigned int *)this + 28) = v12; /*0x597bf0*/
        *((unsigned int *)this + 17) = INIClass::ReadInt_Overwrite( /*0x597bf8*/
                                   (bool *)v25.__pad_0,
                                   (unsigned __int8 *)&stru_82BA00.?[8],
                                   (unsigned __int8 *)&stru_82BA00.?[99],
                                   v22);
        v13 = INIClass::ReadInt_Overwrite( /*0x597c0d*/
                (bool *)v25.__pad_0,
                (unsigned __int8 *)&stru_82BA00.?[8],
                (unsigned __int8 *)&stru_82BA00.?[83],
                *((unsigned int *)this + 27));
        v14 = *((unsigned int *)this + 19); /*0x597c12*/
        *((unsigned int *)this + 27) = v13; /*0x597c15*/
        v15 = INIClass::ReadInt_Overwrite( /*0x597c27*/
                (bool *)v25.__pad_0,
                (unsigned __int8 *)&stru_82BA00.?[8],
                (unsigned __int8 *)&stru_82BA00.?[71],
                v14);
        v23 = *((unsigned int *)this + 21); /*0x597c33*/
        *((unsigned int *)this + 19) = v15; /*0x597c3e*/
        *((unsigned int *)this + 21) = INIClass::ReadInt_Overwrite( /*0x597c46*/
                                   (bool *)v25.__pad_0,
                                   (unsigned __int8 *)&stru_82BA00.?[8],
                                   (unsigned __int8 *)g_INI_Key_Tiberium,
                                   v23);
        v16 = INIClass::ReadInt_Overwrite( /*0x597c5b*/
                (bool *)v25.__pad_0,
                (unsigned __int8 *)&stru_82BA00.?[8],
                (unsigned __int8 *)&stru_82BA00.?[55],
                *((unsigned int *)this + 22));
        v17 = *((unsigned int *)this + 23); /*0x597c60*/
        *((unsigned int *)this + 22) = v16; /*0x597c63*/
        v18 = INIClass::ReadInt_Overwrite( /*0x597c75*/
                (bool *)v25.__pad_0,
                (unsigned __int8 *)&stru_82BA00.?[8],
                (unsigned __int8 *)&stru_82BA00.?[43],
                v17);
        v24 = *((unsigned int *)this + 24); /*0x597c81*/
        *((unsigned int *)this + 23) = v18; /*0x597c8c*/
        *((unsigned int *)this + 24) = INIClass::ReadInt_Overwrite( /*0x597c94*/
                                   (bool *)v25.__pad_0,
                                   (unsigned __int8 *)&stru_82BA00.?[8],
                                   (unsigned __int8 *)&stru_82BA00.?[27],
                                   v24);
        *((unsigned int *)this + 16) = INIClass::ReadInt_Overwrite( /*0x597cb2*/
                                   (bool *)v25.__pad_0,
                                   (unsigned __int8 *)&stru_82BA00.?[8],
                                   (unsigned __int8 *)&stru_82BA00.?[15],
                                   *((unsigned int *)this + 16));
        HashTable::DestroyHashTableINIClass(&v25); /*0x597cb5*/
        *(unsigned int *)v26.CDFileClass = &CCFileClass::`vftable'; /*0x597cc1*/
        v28 = 0; /*0x597cc9*/
        Vector::Clear((int)v27); /*0x597cd0*/
        *(unsigned int *)v26.CDFileClass = &off_7E1668; /*0x597cd9*/
        BufferIOFileClass::Dtor((BufferIOFileClass *)&v26); /*0x597ce1*/
        return 1; /*0x597cf1*/
      }
      HashTable::DestroyHashTableINIClass(&v25); /*0x597cf8*/
      *(unsigned int *)v26.CDFileClass = &CCFileClass::`vftable'; /*0x597d04*/
      v28 = 0; /*0x597d0c*/
      Vector::Clear((int)v27); /*0x597d13*/
      *(unsigned int *)v26.CDFileClass = &off_7E1668; /*0x597d1c*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v26); /*0x597d24*/
    }
    return 0; /*0x597ce6*/
}
// 0x597d50
bool MapSeedClass::ddtor(char* lpFileName)
{
    return LoadOptions::ddtor(this->__pad_0); /*0x597d5a*/
}
// 0x597f80
void * MapSeedClass::Generate()  // G42 sig-sync: returns CSF string ptr
{
  return GetStringCSF((wchar_t *)&((unsigned int *)&stru_82BA00)[1], 0, (int)&((unsigned int *)&stru_82BA00)[11], 5572); /*0x597f96*/
}
// 0x767740
// 0x767740 (see marker above; G42 T9 quarantine)
void MapSizeGameOption_WorldDominationTour::Read()
{
    // DeleteAndZero::Alt helpers absent; phantom a2/a3 params; returns value
    // from void fn. Truth = ida_cache marker above)
}

// 0x767800
int MapSizeGameOption_WorldDominationTour::ddtor()  // G42 sig-sync: table lookup return
{
  return ((unsigned int *)&dword_848628)[4 * *(uint8_t *)(this->MapSizeGameOption_WorldDominationTour_field_0x04 + 18) /*0x76781b*/
                    + *(uint8_t *)(this->MapSizeGameOption_WorldDominationTour_field_0x04 + 19)];
}
// 0x7678c0
void MapSizeGameOption_WorldDominationTour::QueryInterface( char a2)
{
}
// 0x769c00
void Map_WorldDominationTour::QueryInterface( char a2)
{
}
// 0x5ae5e0
void Matrix::Copy12Float( int a2)
{
}
// 0x5bd730
void Matrix::Scale(float a2)
{
}
// 0x5af1a0
void Matrix2D::Rotate(float aP1)
{
}
// 0x5ae8f0
void Matrix3x3::Multiply(float *a2)
{
}
// 0x5ae9b0
void Matrix3x3::ApplyCol0( AbstractClass * aP1)
{
}
// 0x5ae9e0
void Matrix3x3::ApplyCol1( AbstractClass * aP1)
{
}
// 0x5aef60
void Matrix3x3::RotateX(float aP1)
{
}
// 0x5af4d0
void Matrix3x3::TransformPoint(float *aP1, float *a2)
{
}
// 0x47c4d0
void PlacementList::FindByID( int a2, TechnoClass * aP2)
{
}
// 0x47ebf0
void PlacementList::FindByType( char a2)
{
}
// 0x6370b0
void PlanningNodeClass::CleanupAll()
{
}
// 0x63ebd0
void PlanningNodeClass::RemoveFromArray( DynamicVector * aP1)
{
}
// 0x658890
void RadarHashVector::Clear()
{
}
// 0x6588c0
void RadarHashVector::GetCount( int a2)
{
}
// 0x6588e0
void RadarHashVector::Seek( unsigned int * a2, int a3)
{
}
// 0x658910
char RadarHashVector::AddRef( int a2)
{
    int m_8; // edi
    int v3; // esi
    int v4; // edx
    unsigned int *v5; // eax
    unsigned int *v6; // ecx
    int v7; // edx

    m_8 = this->m_8; /*0x65891b*/
    if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x658920*/
    {
      v3 = 0; /*0x658922*/
      if ( m_8 <= 0 ) /*0x658926*/
        return 1; /*0x658960*/
      v4 = *(unsigned int *)(a2 + 4); /*0x658928*/
      v5 = *(unsigned int **)&this->m_1[3]; /*0x65892b*/
      v6 = (unsigned int *)(v4 + 4); /*0x65892e*/
      v7 = v4 - (unsigned int)v5; /*0x658931*/
      while ( *v5 == *(unsigned int *)((char *)v5 + v7) && v5[1] == *v6 && v5[2] == v6[1] ) /*0x65894d*/
      {
        ++v3; /*0x65894f*/
        v6 += 4; /*0x658950*/
        v5 += 4; /*0x658953*/
        if ( v3 >= m_8 ) /*0x658958*/
          return 1; /*0x658958*/
      }
    }
    return 0; /*0x65895a*/
}
// 0x658970
void RadarHashVector::Release( int a2, char * a3)
{
}
// 0x690c00
void ScoreAnimClass::AdvanceFrame( int a2)
{
}
// 0x690d60
void ScoreAnimClass::AnimateText()
{
}
// 0x690f70
int ScoreAnimClass::AddRef()  // G42 sig-sync: body returns timer result
{
  signed int result; // eax
  int ScoreAnimClass_field_0x14; // edi

  result = this->ScoreAnimClass_field_0x0C; /*0x690f73*/
  if ( result != -1 ) /*0x690f79*/
  {
    ScoreAnimClass_field_0x14 = this->ScoreAnimClass_field_0x14; /*0x690f7c*/
    result = TimerGetTicks() - this->ScoreAnimClass_field_0x0C; /*0x690f8c*/
    if ( result >= ScoreAnimClass_field_0x14 ) /*0x690f91*/
    {
      this->ScoreAnimClass_field_0x14 = 0; /*0x690fa4*/
      this->ScoreAnimClass_field_0x0C = -1; /*0x690fa7*/
    }
    else
    {
      this->ScoreAnimClass_field_0x0C = -1; /*0x690f95*/
      this->ScoreAnimClass_field_0x14 = ScoreAnimClass_field_0x14 - result; /*0x690f9c*/
    }
  }
  return result; /*0x690fa0*/
}
// 0x690fc0
void ScoreAnimClass::Release()
{
}
// 0x690fe0
void ScoreAnimClass::Constructor_ScoreAnimClass(unsigned int * Block, char a2)
{
}
// 0x542620
// G42 T9: body quarantined -- ~360-line render raw dump (broken call parens,
// aGrey IDA string label undeclared, TextRenderer/FindBuildingAnimByName
// absent, DSurface spawnStatus-as-member). Truth = .omo/ida_cache/func_0x00542620.json.
void ScoreBoard::Render()
{
    char *v1; // edi
    int v2; // esi
    int v3; // eax
    unsigned int *v4; // eax
    int v5; // eax
    unsigned int *v6; // eax
    int v7; // eax
    unsigned int *v8; // eax
    signed int v9; // ebx
    unsigned int *v10; // eax
    int BridgeIndex; // eax
    unsigned int *v12; // eax
    int result; // eax
    int v14; // ebp
    unsigned int *v15; // ebx
    int v16; // eax
    int v17; // edi
    unsigned int *v18; // eax
    int v19; // eax
    int v20; // ecx
    int v21; // eax
    unsigned int *v22; // eax
    int v23; // eax
    unsigned int *v24; // eax
    unsigned int *v25; // eax
    unsigned int *v26; // eax
    unsigned int *v27; // eax
    const wchar_t *v28; // ecx
    bool v29; // cc
    unsigned int *v30; // eax
    unsigned int *v31; // eax
    unsigned int *v32; // eax
    unsigned int *v33; // eax
    unsigned int *v34; // eax
    int v35; // [esp+14h] [ebp-53Ch]
    int v36; // [esp+14h] [ebp-53Ch]
    int v37; // [esp+14h] [ebp-53Ch]
    int v38; // [esp+18h] [ebp-538h]
    int v39; // [esp+18h] [ebp-538h]
    int v40; // [esp+18h] [ebp-538h]
    int v41; // [esp+18h] [ebp-538h]
    int v42; // [esp+18h] [ebp-538h]
    int v43; // [esp+18h] [ebp-538h]
    int v44; // [esp+18h] [ebp-538h]
    int v45; // [esp+18h] [ebp-538h]
    int v46; // [esp+18h] [ebp-538h]
    int v47; // [esp+1Ch] [ebp-534h]
    int v48; // [esp+1Ch] [ebp-534h]
    int v49; // [esp+1Ch] [ebp-534h]
    int v50; // [esp+1Ch] [ebp-534h]
    int v51; // [esp+1Ch] [ebp-534h]
    int v52; // [esp+1Ch] [ebp-534h]
    int v53; // [esp+1Ch] [ebp-534h]
    int v54; // [esp+1Ch] [ebp-534h]
    int v55; // [esp+20h] [ebp-530h]
    int v56; // [esp+20h] [ebp-530h]
    int v57; // [esp+20h] [ebp-530h]
    int v58; // [esp+20h] [ebp-530h]
    int v59; // [esp+20h] [ebp-530h]
    int v60; // [esp+20h] [ebp-530h]
    int v61; // [esp+20h] [ebp-530h]
    int v62; // [esp+20h] [ebp-530h]
    int v63; // [esp+20h] [ebp-530h]
    int v64; // [esp+24h] [ebp-52Ch]
    int v65; // [esp+24h] [ebp-52Ch]
    int v66; // [esp+24h] [ebp-52Ch]
    int v67; // [esp+24h] [ebp-52Ch]
    int v68; // [esp+24h] [ebp-52Ch]
    int v69; // [esp+24h] [ebp-52Ch]
    int v70; // [esp+24h] [ebp-52Ch]
    int v71; // [esp+24h] [ebp-52Ch]
    int v72; // [esp+24h] [ebp-52Ch]
    int v73; // [esp+24h] [ebp-52Ch]
    int v74; // [esp+28h] [ebp-528h]
    int v75; // [esp+28h] [ebp-528h]
    int v76; // [esp+28h] [ebp-528h]
    int v77; // [esp+28h] [ebp-528h]
    int v78; // [esp+28h] [ebp-528h]
    int v79; // [esp+28h] [ebp-528h]
    int v80; // [esp+28h] [ebp-528h]
    int v81; // [esp+2Ch] [ebp-524h]
    int v82; // [esp+2Ch] [ebp-524h]
    int v83; // [esp+2Ch] [ebp-524h]
    int v84; // [esp+2Ch] [ebp-524h]
    int v85; // [esp+30h] [ebp-520h]
    int v86; // [esp+30h] [ebp-520h]
    int v87; // [esp+34h] [ebp-51Ch] BYREF
    int v88; // [esp+38h] [ebp-518h] BYREF
    int v89; // [esp+3Ch] [ebp-514h] BYREF
    int v90; // [esp+40h] [ebp-510h] BYREF
    int *v91; // [esp+44h] [ebp-50Ch] BYREF
    int v92; // [esp+48h] [ebp-508h]
    int v93; // [esp+4Ch] [ebp-504h]
    int v94; // [esp+50h] [ebp-500h]
    char *v95; // [esp+54h] [ebp-4FCh]
    const wchar_t *v96; // [esp+58h] [ebp-4F8h]
    int v97; // [esp+5Ch] [ebp-4F4h]
    unsigned int v98[3]; // [esp+68h] [ebp-4E8h] BYREF
    unsigned int v99[2]; // [esp+74h] [ebp-4DCh] BYREF
    unsigned int v100[2]; // [esp+7Ch] [ebp-4D4h] BYREF
    int v101; // [esp+84h] [ebp-4CCh] BYREF
    int v102; // [esp+88h] [ebp-4C8h] BYREF
    unsigned int v103[2]; // [esp+8Ch] [ebp-4C4h] BYREF
    unsigned int v104[3]; // [esp+94h] [ebp-4BCh] BYREF
    int v105; // [esp+A0h] [ebp-4B0h] BYREF
    int v106; // [esp+A4h] [ebp-4ACh]
    int v107; // [esp+B0h] [ebp-4A0h] BYREF
    char v108[4]; // [esp+B4h] [ebp-49Ch] BYREF
    unsigned int v109[5]; // [esp+B8h] [ebp-498h] BYREF
    int v110; // [esp+CCh] [ebp-484h] BYREF
    int v111[3]; // [esp+D4h] [ebp-47Ch] BYREF
    int v112; // [esp+E0h] [ebp-470h] BYREF
    int v113[2]; // [esp+E4h] [ebp-46Ch] BYREF
    int v114[3]; // [esp+ECh] [ebp-464h] BYREF
    int v115[2]; // [esp+F8h] [ebp-458h] BYREF
    int v116[6]; // [esp+100h] [ebp-450h] BYREF
    int v117; // [esp+118h] [ebp-438h] BYREF
    char v118[4]; // [esp+120h] [ebp-430h] BYREF
    char v119[24]; // [esp+124h] [ebp-42Ch] BYREF
    char v120[20]; // [esp+13Ch] [ebp-414h] BYREF
    char v121[8]; // [esp+150h] [ebp-400h] BYREF
    char v122[16]; // [esp+158h] [ebp-3F8h] BYREF
    char v123[12]; // [esp+168h] [ebp-3E8h] BYREF
    char v124[12]; // [esp+174h] [ebp-3DCh] BYREF
    char v125[16]; // [esp+180h] [ebp-3D0h] BYREF
    char v126[20]; // [esp+190h] [ebp-3C0h] BYREF
    char v127[24]; // [esp+1A4h] [ebp-3ACh] BYREF
    char v128[4]; // [esp+1BCh] [ebp-394h] BYREF
    wchar_t Buffer; // [esp+1C0h] [ebp-390h] BYREF
    wchar_t v130; // [esp+1C4h] [ebp-38Ch] BYREF
    wchar_t v131; // [esp+1C8h] [ebp-388h] BYREF
    wchar_t v132; // [esp+1CCh] [ebp-384h] BYREF
    wchar_t v133; // [esp+1D0h] [ebp-380h] BYREF
    wchar_t v134[246]; // [esp+1D4h] [ebp-37Ch] BYREF
    wchar_t v135[10]; // [esp+3C0h] [ebp-190h] BYREF
    char v136[380]; // [esp+3D4h] [ebp-17Ch] BYREF

    v1 = this; /*0x54262a*/
    v2 = DSurface_Composite; /*0x54262c*/
    v95 = this; /*0x542632*/
    swprintf(&Buffer, (const size_t)&off_8288A0, (const wchar_t *const)(1000 * *((unsigned int *)this + 22) / 0x3Cu)); /*0x54265d*/
    v87 = 0; /*0x542674*/
    v88 = 402; /*0x542678*/
    v3 = FindBuildingAnimByName(aGrey, 1); /*0x542680*/
    v4 = (unsigned int *)(*(int (__thiscall **)(int, int *, int *, int))(*(unsigned int *)v2 + 120))(v2, &v107, &v87, v3); /*0x542697*/
    TextRenderer::DrawText((int *)&v91, (size_t)&v131, v2, v4, 0, 25, v64, v74); /*0x5426a9*/
    swprintf(&v131, (const size_t)&off_82887C, (const wchar_t *const)(1000 * *((unsigned int *)v1 + 24) / 0x3Cu)); /*0x5426d5*/
    v89 = 0; /*0x5426e7*/
    v90 = 412; /*0x5426ee*/
    v5 = FindBuildingAnimByName(aGrey, 1); /*0x5426f6*/
    v6 = (unsigned int *)(*(int (__thiscall **)(int, unsigned int *, int *, int, unsigned int, int))(*(unsigned int *)v2 + 120))( /*0x54270d*/
                     v2,
                     v109,
                     &v89,
                     v5,
                     0,
                     25);
    TextRenderer::DrawText(&v90, (size_t)&v130, v2, v6, v38, v47, v55, v65); /*0x54271f*/
    swprintf(&v130, (const size_t)&off_82885C, dword_A8DB9C); /*0x542737*/
    v88 = 0; /*0x542749*/
    v89 = 422; /*0x542750*/
    v7 = FindBuildingAnimByName(aGrey, 1); /*0x542758*/
    v8 = (unsigned int *)(*(int (__thiscall **)(int, char *, int *, int, unsigned int, int))(*(unsigned int *)v2 + 120))( /*0x54276f*/
                     v2,
                     v108,
                     &v88,
                     v7,
                     0,
                     25);
    TextRenderer::DrawText(&v89, (size_t)&Buffer, v2, v8, v35, v39, v48, v56); /*0x542781*/
    if ( (int)(Timer::GetTicks() - dword_AC6648) / 60 ) /*0x5427ad*/
    {
      v9 = Timer::GetTicks() - dword_AC6648; /*0x5427c6*/
      swprintf(&Buffer, (const size_t)aFspsD, (const wchar_t *const)(dword_B0487C / (v9 / 60))); /*0x5427f3*/
      v87 = 0; /*0x542805*/
      v88 = 432; /*0x54280c*/
      v40 = FindBuildingAnimByName(aGrey, 1); /*0x54281b*/
      v10 = (unsigned int *)(*(int (__thiscall **)(int, int *))(*(unsigned int *)v2 + 120))(v2, &v107); /*0x54282b*/
      TextRenderer::DrawText(&v89, (size_t)&Buffer, v2, v10, (int)&v87, v40, 0, 25); /*0x54283d*/
      if ( ((unsigned __int8)dword_A8ED84 & 0x7F) == 0x7F ) /*0x54284f*/
      {
        dword_AC6648 = Timer::GetTicks(); /*0x54285e*/
        dword_AC664C = v90; /*0x542863*/
        dword_B0487C = 0; /*0x542869*/
      }
    }
    if ( dword_A8B238[0] == 4 && byte_A8DBA0 ) /*0x542883*/
    {
      if ( dword_A8EA10 ) /*0x542890*/
        BridgeIndex = CellClass::GetBridgeIndex(*(unsigned int **)(dword_A8EA10 + 4)); /*0x542895*/
      else
        BridgeIndex = 0; /*0x54289c*/
      swprintf(&Buffer, (const size_t)&off_828830, (const wchar_t *const)(1000 * BridgeIndex / 0x3Cu)); /*0x5428c2*/
      v87 = 0; /*0x5428d4*/
      v88 = 442; /*0x5428db*/
      v41 = FindBuildingAnimByName(aGrey, 1); /*0x5428ea*/
      v12 = (unsigned int *)(*(int (__thiscall **)(int, int *))(*(unsigned int *)v2 + 120))(v2, &v107); /*0x5428fa*/
      TextRenderer::DrawText(&v89, (size_t)&Buffer, v2, v12, (int)&v87, v41, 0, 25); /*0x54290c*/
    }
    result = *((unsigned int *)v1 + 17); /*0x542914*/
    v94 = 0; /*0x542917*/
    if ( result > 0 )
    {
      v91 = &dword_AC5210; /*0x542928*/
      v14 = 100; /*0x542932*/
      v15 = v1 + 40; /*0x542937*/
      v87 = (char *)&dword_A8DB54 - v1; /*0x54293a*/
      do
      {
        v16 = *(unsigned int *)&dword_A8022C->AbstractClass[4 * *(unsigned int *)(*v15 + 100)]; /*0x542949*/
        if ( v16 && (void *)v16 != dword_A83D4C )
        {
          v17 = *(unsigned int *)(v16 + 90196); /*0x542960*/
          swprintf(v135, (const size_t)&off_8240B4, (const wchar_t *const)(*v15 + 104)); /*0x542977*/
          v105 = v14; /*0x542985*/
          v106 = 302; /*0x542989*/
          v18 = (unsigned int *)(*(int (__thiscall **)(int, char *, int *, unsigned int, unsigned int, int, int))(*(unsigned int *)v2 + 120))( /*0x5429b0*/
                            v2,
                            v125,
                            &v105,
                            *((unsigned int *)dword_B054D4 + v17),
                            0,
                            25,
                            v66);
          TextRenderer::DrawText(v113, (size_t)v136, v2, v18, v75, v81, v85, v87); /*0x5429c5*/
          v19 = CellClass::GetBridgeIndex(*(unsigned int **)(*v15 + 4)); /*0x5429d2*/
          swprintf(v134, (const size_t)&off_828814, (const wchar_t *const)(1000 * v19 / 60)); /*0x542a04*/
          v99[0] = v14; /*0x542a11*/
          v99[1] = 311; /*0x542a15*/
          v20 = *((unsigned int *)dword_B054D4 + v17); /*0x542a1d*/
          v21 = *(unsigned int *)v2; /*0x542a20*/
          v87 = 25; /*0x542a22*/
          v22 = (unsigned int *)(*(int (__thiscall **)(int, char *, unsigned int *, int, unsigned int))(v21 + 120))(v2, v119, v99, v20, 0); /*0x542a36*/
          TextRenderer::DrawText(&v117, (size_t)&v133, v2, v22, v67, v76, v82, v86); /*0x542a4b*/
          v23 = IPXManagerClass::init(*(unsigned int *)(*v15 + 4)); /*0x542a58*/
          swprintf(&v133, (const size_t)&off_8287F8, (const wchar_t *const)(1000 * v23 / 60)); /*0x542a8a*/
          v109[0] = v14; /*0x542a98*/
          v109[1] = 319; /*0x542a9f*/
          v85 = 25; /*0x542aaf*/
          v24 = (unsigned int *)(*(int (__thiscall **)(int, char *, unsigned int *, unsigned int, unsigned int))(*(unsigned int *)v2 + 120))( /*0x542ac6*/
                            v2,
                            v121,
                            v109,
                            *((unsigned int *)dword_B054D4 + v17),
                            0);
          TextRenderer::DrawText(&v110, (size_t)&v132, v2, v24, v57, v68, v77, v83); /*0x542adb*/
          swprintf(&v132, (const size_t)&off_8287DC, *(const wchar_t *const *)(*v15 + 8)); /*0x542af3*/
          v101 = v14; /*0x542b00*/
          v102 = 327; /*0x542b04*/
          v25 = (unsigned int *)(*(int (__thiscall **)(int, char *, int *, unsigned int, unsigned int, int))(*(unsigned int *)v2 + 120))( /*0x542b25*/
                            v2,
                            v128,
                            &v101,
                            *((unsigned int *)dword_B054D4 + v17),
                            0,
                            25);
          TextRenderer::DrawText(v115, (size_t)&v131, v2, v25, v49, v58, v69, v78); /*0x542b3a*/
          swprintf(&v131, (const size_t)&off_8287C0, *(int *)(*v15 + 12) < 0 ? 0 : *(const wchar_t *const *)(*v15 + 12));
          v105 = v14; /*0x542b6a*/
          v106 = 335; /*0x542b6e*/
          v26 = (unsigned int *)(*(int (__thiscall **)(int, char *, int *, unsigned int, unsigned int, int))(*(unsigned int *)v2 + 120))( /*0x542b92*/
                            v2,
                            v123,
                            &v105,
                            *((unsigned int *)dword_B054D4 + v17),
                            0,
                            25);
          TextRenderer::DrawText(v113, (size_t)&v130, v2, v26, v42, v50, v59, v70); /*0x542ba7*/
          swprintf(&v130, (const size_t)&off_8287A4, *(const wchar_t *const *)(*v15 + 16)); /*0x542bbf*/
          v103[0] = v14; /*0x542bcc*/
          v103[1] = 343; /*0x542bd0*/
          v27 = (unsigned int *)(*(int (__thiscall **)(int, char *, unsigned int *, unsigned int, unsigned int, int))(*(unsigned int *)v2 + 120))( /*0x542bf1*/
                            v2,
                            v127,
                            v103,
                            *((unsigned int *)dword_B054D4 + v17),
                            0,
                            25);
          TextRenderer::DrawText(v116, (size_t)&Buffer, v2, v27, v36, v43, v51, v60); /*0x542c06*/
          v28 = 0; /*0x542c10*/
          v96 = 0; /*0x542c17*/
          v93 = 0; /*0x542c1b*/
          if ( dword_A8DA84 > 0 ) /*0x542c1f*/
          {
            v97 = *(unsigned int *)(*v15 + 100); /*0x542c2c*/
            v92 = dword_A8DA78; /*0x542c30*/
            while ( v97 != *(unsigned int *)(*(unsigned int *)v92 + 111) ) /*0x542c41*/
            {
              v29 = ++v93 < dword_A8DA84; /*0x542c4f*/
              v92 += 4; /*0x542c55*/
              if ( !v29 ) /*0x542c59*/
              {
                swprintf(&Buffer, (const size_t)&off_828788, v96); /*0x542c5f*/
                goto LABEL_21; /*0x542c5f*/
              }
            }
            v28 = *(const wchar_t **)(*(unsigned int *)(dword_A8DA78 + 4 * v93) + 115); /*0x542c6d*/
          }
          swprintf(&Buffer, (const size_t)&off_828788, v28); /*0x542c7e*/
  LABEL_21:
          v98[0] = v14; /*0x542c83*/
          v98[1] = 351; /*0x542c90*/
          v30 = (unsigned int *)(*(int (__thiscall **)(int, char *, unsigned int *, unsigned int, unsigned int))(*(unsigned int *)v2 + 120))( /*0x542cb1*/
                            v2,
                            v118,
                            v98,
                            *((unsigned int *)dword_B054D4 + v17),
                            0);
          TextRenderer::DrawText(v111, (size_t)&v132, v2, v30, 25, v71, v79, v84); /*0x542cc6*/
          swprintf(&v132, (const size_t)&off_82876C, (const wchar_t *const)-*(unsigned int *)((char *)v15 + v90)); /*0x542ce2*/
          v100[0] = v14; /*0x542cef*/
          v100[1] = 359; /*0x542cf3*/
          v81 = 25; /*0x542d00*/
          v31 = (unsigned int *)(*(int (__thiscall **)(int, char *, unsigned int *, unsigned int, unsigned int))(*(unsigned int *)v2 + 120))( /*0x542d14*/
                            v2,
                            v120,
                            v100,
                            *((unsigned int *)dword_B054D4 + v17),
                            0);
          TextRenderer::DrawText(&v112, (size_t)&v131, v2, v31, v52, v61, v72, v80); /*0x542d29*/
          swprintf( /*0x542d48*/
            &v131,
            (const size_t)&off_828748,
            *(const wchar_t *const *)(*(unsigned int *)(*v15 + 4) + 40),
            *(unsigned int *)(*(unsigned int *)(*v15 + 4) + 56));
          v102 = v14; /*0x542d56*/
          v103[0] = 367; /*0x542d5a*/
          v75 = 25; /*0x542d67*/
          v32 = (unsigned int *)(*(int (__thiscall **)(int, char *, int *, unsigned int, unsigned int))(*(unsigned int *)v2 + 120))( /*0x542d7b*/
                            v2,
                            v122,
                            &v102,
                            *((unsigned int *)dword_B054D4 + v17),
                            0);
          TextRenderer::DrawText(v114, (size_t)&v130, v2, v32, v44, v53, v62, v73); /*0x542d90*/
          swprintf(&v130, (const size_t)&off_828724, *(const wchar_t *const *)(*v15 + 20), *(unsigned int *)(*v15 + 24)); /*0x542dac*/
          v104[0] = v14; /*0x542dba*/
          v104[1] = 375; /*0x542dbe*/
          v66 = 25; /*0x542dc9*/
          v33 = (unsigned int *)(*(int (__thiscall **)(int, char *, unsigned int *, unsigned int, unsigned int))(*(unsigned int *)v2 + 120))( /*0x542ddf*/
                            v2,
                            v124,
                            v104,
                            *((unsigned int *)dword_B054D4 + v17),
                            0);
          TextRenderer::DrawText(v115, (size_t)&Buffer, v2, v33, v37, v45, v54, v63); /*0x542df4*/
          if ( dword_A8B238[0] == 4 ) /*0x542e04*/
          {
            if ( byte_A8DBA0 ) /*0x542e11*/
            {
              swprintf(&Buffer, (const size_t)&off_828708, (const wchar_t *const)(1000 * *v91 / 0x3Cu)); /*0x542e3d*/
              v89 = v14; /*0x542e4a*/
              v90 = 383; /*0x542e4e*/
              v46 = *((unsigned int *)dword_B054D4 + v17); /*0x542e5f*/
              v34 = (unsigned int *)(*(int (__thiscall **)(int, char *))(*(unsigned int *)v2 + 120))(v2, v126); /*0x542e6f*/
              TextRenderer::DrawText(&v107, (size_t)&Buffer, v2, v34, (int)&v89, v46, 0, 25); /*0x542e84*/
            }
          }
          v1 = v95; /*0x542e8c*/
        }
        result = v94 + 1; /*0x542e9b*/
        v14 += 100; /*0x542e9c*/
        ++v15; /*0x542e9f*/
        v29 = ++v94 < *((unsigned int *)v1 + 17); /*0x542ea5*/
        ++v91; /*0x542eab*/
      }
      while ( v29 );
    }
    return result; /*0x542eb5*/
}
// 0x5cd3c0
void ScoreClass::SetState( char a2)
{
}
// 0x6907a0
void ScoreFontClass::Release( int16_t * a2)
{
}
// 0x6907e0
char ScoreFontClass::AddRef(int16_t szSrc)
{
    int v2; // eax
    CHAR szDst; // [esp+7h] [ebp-11h] BYREF
    unsigned int v4[4]; // [esp+8h] [ebp-10h] BYREF

    if ( (unsigned short)this == 32 ) /*0x6907f3*/
      return 8; /*0x6907f5*/
    CharToOemBuffA((LPCSTR)&this, &szDst, 1u); /*0x69080d*/
    v2 = szDst - 33; /*0x690818*/
    if ( szDst == 33 ) /*0x69081d*/
    {
      v2 = 0; /*0x69081f*/
    }
    else if ( v2 >= 216 ) /*0x690828*/
    {
      v2 = 216; /*0x69082a*/
    }
    return Building::GetFoundationSize(v4, 3 * v2 + 2)[2]; /*0x6907fa*/
}
// 0x691040
void ScoreFontClass::QueryInterface(unsigned int * Block, char a2)
{
}
// 0x691100
void ScoreFontClass::Constructor_ScoreFontClass(unsigned int * Block, char a2)
{
}
// 0x68cd20
void ScoreScreen::Display()
{
}

// 0x68ec00
void ScoreScreen::Check( char a2)
{
}
// 0x68ef20
int ScoreScreen::AccumulateScoreStats()
{
    // undefined-type derefs, ptr-vs-int compares; truth = ida_cache marker above)
}
// 0x68f9b0
void ScoreScreen::DisplayTimeText( unsigned int a2)
{
}
// 0x690640
void ScoreScreen::LoadAudio()
{
}
// 0x691970
void ScoreScreenClass::ProcessFrame(char * a1, int a2)
{
}
// 0x76ea20
void ScoreText::ShowAlt(const wchar_t **aP1, int a3)
{
}
// 0x76eaf0
void ScoreText::Show( ObjectClass * aP1)
{
}
// 0x567230
void ShroudClass::UpdateVisibility(int *aP1)
{
}
// 0x577ab0
void ShroudClass::Reset( IUnknown * aP1)
{
}
// 0x6b8880
void SpawnControlVector::Constructor( int a2, int a3)
{
}
// 0x510500
void SuperClassVector::Construct( int a2, int a3)
{
}
// 0x539890
int SuperWeaponClass::LoadFromSaveStream()
{
  int result; // eax
  int v3; // eax
  int v4; // edi
  int v5; // ecx
  int v6; // ecx
  int v7; // edi
  int v8; // edx
  int v9; // edx
  int i; // edi
  int v11; // eax
  int v12; // [esp+140h] [ebp-8h] BYREF
  int v13; // [esp+144h] [ebp-4h] BYREF

  result = (*(int (**)(SuperWeaponClass *, int *, int, unsigned int))(*(unsigned int *)((unsigned char *)(this) + 0x0) + 16))( /*0x5398a3*/
             this,
             &LightningStorm_Active,
             1,
             0);
  if ( result >= 0 ) /*0x5398a8*/
  {
    result = (*(int (**)(SuperWeaponClass *, int *, int, unsigned int))(*(unsigned int *)((unsigned char *)(this) + 0x0) + 16))( /*0x5398ba*/
               this,
               &LightningStorm_StartTime,
               4,
               0);
    if ( result >= 0 ) /*0x5398bf*/
    {
      result = (*(int (**)(SuperWeaponClass *, int *, int, unsigned int))(*(unsigned int *)((unsigned char *)(this) + 0x0) + 16))( /*0x5398d1*/
                 this,
                 &LightningStorm_Duration,
                 4,
                 0);
      if ( result >= 0 ) /*0x5398d6*/
      {
        result = (*(int (**)(SuperWeaponClass *, int *, int, unsigned int))(*(unsigned int *)((unsigned char *)(this) + 0x0) + 16))( /*0x5398e8*/
                   this,
                   &LightningStorm_Deferment,
                   4,
                   0);
        if ( result >= 0 ) /*0x5398ed*/
        {
          result = (*(int (**)(SuperWeaponClass *, int *, int, unsigned int))(*(unsigned int *)((unsigned char *)(this) + 0x0) + 16))( /*0x5398ff*/
                     this,
                     &LightningStorm_TimeToEnd,
                     1,
                     0);
          if ( result >= 0 ) /*0x539904*/
          {
            result = (*(int (**)(SuperWeaponClass *, int *, int, unsigned int))(*(unsigned int *)((unsigned char *)(this) + 0x0) + 16))( /*0x539916*/
                       this,
                       &NukeFlash_StartTime,
                       4,
                       0);
            if ( result >= 0 ) /*0x53991b*/
            {
              result = (*(int (**)(SuperWeaponClass *, int *, int, unsigned int))(*(unsigned int *)((unsigned char *)(this) + 0x0) + 16))( /*0x53992d*/
                         this,
                         &NukeFlash_Duration,
                         4,
                         0);
              if ( result >= 0 ) /*0x539932*/
              {
                result = (*(int (**)(SuperWeaponClass *, int *, int, unsigned int))(*(unsigned int *)((unsigned char *)(this) + 0x0) + 16))( /*0x539944*/
                           this,
                           &NukeFlash_Status,
                           4,
                           0);
                if ( result >= 0 ) /*0x539949*/
                {
                  result = (*(int (**)(SuperWeaponClass *, int *, int, unsigned int))(*(unsigned int *)((unsigned char *)(this) + 0x0) + 16))( /*0x53995b*/
                             this,
                             &PsyDom_Status,
                             4,
                             0);
                  if ( result >= 0 ) /*0x539960*/
                  {
                    result = (*(int (**)(SuperWeaponClass *, int *, int, unsigned int))(*(unsigned int *)((unsigned char *)(this) + 0x0) + 16))( /*0x539972*/
                               this,
                               &PsyDom_Anim,
                               4,
                               0);
                    if ( result >= 0 ) /*0x539977*/
                    {
                      result = (*(int (**)(SuperWeaponClass *, int *, int, unsigned int))(*(unsigned int *)((unsigned char *)(this) + 0x0) /*0x539989*/
                                                                                            + 16))(
                                 this,
                                 &LightningStorm_Coords,
                                 4,
                                 0);
                      if ( result >= 0 ) /*0x53998e*/
                      {
                        result = (*(int (**)(SuperWeaponClass *, int *, int, unsigned int))(*(unsigned int *)((unsigned char *)(this) + 0x0) /*0x5399a0*/
                                                                                                  + 16))(
                                   this,
                                   &PsyDom_Coords,
                                   4,
                                   0);
                        if ( result >= 0 ) /*0x5399a5*/
                        {
                          result = (*(int (**)(SuperWeaponClass *, int *, int, unsigned int))(*(unsigned int *)((unsigned char *)(this) + 0x0) /*0x5399b7*/
                                                                                                  + 16))(
                                     this,
                                     &LightningStorm_Owner,
                                     4,
                                     0);
                          if ( result >= 0 ) /*0x5399bc*/
                          {
                            result = (*(int (**)(SuperWeaponClass *, int *, int, unsigned int))(*(unsigned int *)((unsigned char *)(this) + 0x0) + 16))( /*0x5399ce*/
                                       this,
                                       &PsyDom_Owner,
                                       4,
                                       0);
                            if ( result >= 0 ) /*0x5399d3*/
                            {
                              v3 = *(unsigned int *)((unsigned char *)(this) + 0x0); /*0x5399df*/
                              v12 = dword_A9FA70; /*0x5399eb*/
                              result = (*(int (**)(SuperWeaponClass *, int *, int, unsigned int))(v3 + 16))( /*0x5399ef*/
                                         this,
                                         &v12,
                                         4,
                                         0);
                              if ( result >= 0 ) /*0x5399f4*/
                              {
                                v4 = 0; /*0x5399fe*/
                                if ( v12 <= 0 ) /*0x539a02*/
                                {
  LABEL_19:
                                  v6 = *(unsigned int *)((unsigned char *)(this) + 0x0); /*0x539a31*/
                                  v12 = dword_A9F9E0; /*0x539a42*/
                                  result = (*(int (**)(SuperWeaponClass *, int *, int, unsigned int))(v6 + 16))( /*0x539a46*/
                                             this,
                                             &v12,
                                             4,
                                             0);
                                  if ( result >= 0 ) /*0x539a4b*/
                                  {
                                    v7 = 0; /*0x539a55*/
                                    if ( v12 <= 0 ) /*0x539a59*/
                                    {
  LABEL_23:
                                      v9 = *(unsigned int *)((unsigned char *)(this) + 0x0); /*0x539a83*/
                                      v12 = dword_A9FA28; /*0x539a95*/
                                      result = (*(int (**)(SuperWeaponClass *, int *, int, unsigned int))(v9 + 16))( /*0x539a99*/
                                                 this,
                                                 &v12,
                                                 4,
                                                 0);
                                      if ( result >= 0 ) /*0x539a9e*/
                                      {
                                        for ( i = 0; i < v12; ++i ) /*0x539aa8*/
                                        {
                                          v11 = *(unsigned int *)((unsigned char *)(this) + 0x0); /*0x539ab0*/
                                          v13 = *((unsigned int *)dword_A9FA1C + i); /*0x539abf*/
                                          result = (*(int (**)(SuperWeaponClass *, int *, int, unsigned int))(v11 + 16))( /*0x539ac3*/
                                                     this,
                                                     &v13,
                                                     4,
                                                     0);
                                          if ( result < 0 ) /*0x539ac8*/
                                            break; /*0x539ac8*/
                                        }
                                      }
                                    }
                                    else
                                    {
                                      while ( 1 ) /*0x539a60*/
                                      {
                                        v8 = *(unsigned int *)((unsigned char *)(this) + 0x0); /*0x539a60*/
                                        v13 = *((unsigned int *)dword_A9F9D4 + v7); /*0x539a6f*/
                                        result = (*(int (**)(SuperWeaponClass *, int *, int, unsigned int))(v8 + 16))( /*0x539a73*/
                                                   this,
                                                   &v13,
                                                   4,
                                                   0);
                                        if ( result < 0 ) /*0x539a78*/
                                          break; /*0x539a78*/
                                        if ( ++v7 >= v12 ) /*0x539a81*/
                                          goto LABEL_23; /*0x539a81*/
                                      }
                                    }
                                  }
                                }
                                else
                                {
                                  while ( 1 ) /*0x539a0a*/
                                  {
                                    v5 = *(unsigned int *)((unsigned char *)(this) + 0x0); /*0x539a0a*/
                                    v13 = *((unsigned int *)dword_A9FA64 + v4); /*0x539a19*/
                                    result = (*(int (**)(SuperWeaponClass *, int *, int, unsigned int))(v5 + 16))( /*0x539a1d*/
                                               this,
                                               &v13,
                                               4,
                                               0);
                                    if ( result < 0 ) /*0x539a22*/
                                      break; /*0x539a22*/
                                    if ( ++v4 >= v12 ) /*0x539a2f*/
                                      goto LABEL_19; /*0x539a2f*/
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result; /*0x539ad3*/
}
// 0x6c5640
int SuperWeaponClass::ProcessCharged()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c564e*/
}
// 0x6da740
int SuperWeaponClass::UpdateAll()
{
  while ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[228] ) /*0x6da747*/
    (*(void (**)(unsigned int))(***(unsigned int ***)&((unsigned int *)&stru_A8EB00)[216] + 336))(**(unsigned int **)&((unsigned int *)&stru_A8EB00)[216]); /*0x6da752*/
  return 0; /*0x6da752 G42: Selection::SetCurrent absent from tree universe -- truth .omo/ida_cache/func_0x006DA740.json*/
}
// 0x6e38f0
void SuperWeaponClass::CreateChemLauncher( int a2, int a3, int a4, IUnknown * aP4)
{
}
// 0x773030
int SuperWeaponClass::FindByName()
{
  int v1; // esi

  v1 = 0; /*0x773036*/
  if ( g_WeaponTypePool <= 0 ) /*0x77303d*/
    return -1; /*0x773062*/
  while ( _strcmpi((char *)(*((unsigned int *)g_WeaponTypeConfig + v1) + 36), (const char *)((unsigned char *)(this) + 0x0)) ) /*0x773056*/
  {
    if ( ++v1 >= g_WeaponTypePool ) /*0x773060*/
      return -1; /*0x773060*/
  }
  return v1; /*0x773062*/
}
// 0x6c39c0
int TClassFactory_AnimClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c39ce*/
}
// 0x6c39e0
int TClassFactory_AnimClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c39f0*/
  if ( !v1 ) /*0x6c39f4*/
    RA2_OPDEL((void *)Block); /*0x6c39f7*/
  return v1; /*0x6c3a01*/
}
// 0x6c3a10
int TClassFactory_AnimClass::ddtor()
{
    // uninit v9 out-param, __stdcall/__cdecl vtable cast clash; truth = ida_cache marker above)
}
// 0x6c3a90
int TClassFactory_AnimClass::GetSize()
{
    // truth = ida_cache marker above)
}
// 0x6c5040
int TClassFactory_BulletClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c504e*/
}
// 0x6c5060
int TClassFactory_BulletClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c5070*/
  if ( !v1 ) /*0x6c5074*/
    RA2_OPDEL((void *)Block); /*0x6c5077*/
  return v1; /*0x6c5081*/
}
// 0x6c5090
int TClassFactory_BulletClass::ddtor()
{
    // uninit v9 out-param, __stdcall/__cdecl vtable cast clash; truth = ida_cache marker above)
}
// 0x6c5110
int TClassFactory_BulletClass::GetSize()
{
    // truth = ida_cache marker above)
}
// 0x6c00c0
int TClassFactory_CampaignClass::AddRefCOM()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c00ce*/
}
// 0x6c00e0
int TClassFactory_CampaignClass::Release()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c00f0*/
  if ( !v1 ) /*0x6c00f4*/
    RA2_OPDEL((void *)Block); /*0x6c00f7*/
  return v1; /*0x6c0101*/
}
// 0x6c0110
void TClassFactory_CampaignClass::CreateInstanceCOM()
{
}
// 0x6c0190
int TClassFactory_CampaignClass::AdjustRefCOM()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c019a*/
    if ( v5 ) /*0x6c019d*/
      v3 = v2 + 1; /*0x6c019f*/
    else
      v3 = v2 - 1; /*0x6c01a8*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c01a0*/
    return 0; /*0x6c01a5*/
}
// 0x6c0240
int TClassFactory_CampaignClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c024e*/
}
// 0x6bf940
int TClassFactory_CellClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bf94e*/
}
// 0x6bf960
int TClassFactory_CellClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bf970*/
  if ( !v1 ) /*0x6bf974*/
    RA2_OPDEL((void *)Block); /*0x6bf977*/
  return v1; /*0x6bf981*/
}
// 0x6bf990
int TClassFactory_CellClass::ddtor()
{
    // uninit v9 out-param, __stdcall/__cdecl vtable cast clash; truth = ida_cache marker above)
}
// 0x6bfa10
int TClassFactory_CellClass::GetSize()
{
    // truth = ida_cache marker above)
}
// 0x6bfac0
int TClassFactory_EMPulseClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bface*/
}
// 0x6bfae0
int TClassFactory_EMPulseClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bfaf0*/
  if ( !v1 ) /*0x6bfaf4*/
    RA2_OPDEL((void *)Block); /*0x6bfaf7*/
  return v1; /*0x6bfb01*/
}
// 0x6bfb10
int TClassFactory_EMPulseClass::ddtor()
{
    // uninit v9 out-param, __stdcall/__cdecl vtable cast clash; truth = ida_cache marker above)
}
// 0x6bfb90
int TClassFactory_EMPulseClass::GetSize()
{
    // truth = ida_cache marker above)
}
// 0x50e830
void TeamTypeVector::CopyConstruct( unsigned int * a2)
{
}
// 0x4e01e0
void AbstractClassVector::Seek( int a2)
{
}
// 0x4e02d0
void AbstractClassVector::QueryInterface(unsigned int * Block, char a2)
{
}
// 0x4e0320
char AbstractClassVector::AddRef( int a2)
{
    int m_8; // esi
    int v3; // edx
    unsigned int *v4; // eax
    int v5; // ecx

    m_8 = this->m_8; /*0x4e0322*/
    if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4e032d*/
    {
      v3 = 0; /*0x4e032f*/
      if ( m_8 <= 0 ) /*0x4e0333*/
        return 1; /*0x4e0353*/
      v4 = *(unsigned int **)&this->m_1[3]; /*0x4e0335*/
      v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4e033b*/
      while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4e0344*/
      {
        ++v3; /*0x4e0346*/
        ++v4; /*0x4e0347*/
        if ( v3 >= m_8 ) /*0x4e034c*/
          return 1; /*0x4e034c*/
      }
    }
    return 0; /*0x4e034e*/
}
// 0x4e0360
void AbstractClassVector::Release( int a2, unsigned int * a3)
{
}
// 0x4e0410
void AbstractClassVector::ddtor()
{
}
// 0x53cb10
void ActionQueue::PushEntry(int a2, int a3, int a4)
{
}
// 0x5bddc0
void Actions::Reset( int * a1, MouseClass * aP2)
{
}
// 0x412b40
void AircraftTrackerClass::FillCurrentVector( void * aP1, int a3)
{
}
// 0x513990
void AircraftTypeVector::Constructor( int a2, int a3)
{
}
// 0x420960
void AlphaShapeClass::CTOR( ObjectClass * aP1, int a3, AbstractClass * aP3)
{
}
// 0x420af0
int AlphaShapeClass::Constructor()
{
    int v2; // eax
    int v3; // eax
    int i; // esi
    int v5; // edx

    AbstractClass::Constructor((AbstractClass *)this); /*0x420af4*/
    this->AlphaShapeClass_field_0x24 = 0; /*0x420afb*/
    *((unsigned int *)this + 10) = 0; /*0x420afe*/
    *((unsigned int *)this + 11) = 0; /*0x420b01*/
    *((unsigned int *)this + 12) = 0; /*0x420b04*/
    *((unsigned int *)this + 13) = 0; /*0x420b07*/
    *((unsigned int *)this + 14) = 0; /*0x420b0a*/
    *((unsigned char *)this + 60) = 0; /*0x420b0d*/
    *(unsigned int *)this->__pad_0 = &AlphaShapeClass::`vftable'; /*0x420b10*/
    this->AlphaShapeClass_field_0x04 = (int)&AlphaShapeClass::`vftable'; /*0x420b16*/
    this->AlphaShapeClass_field_0x08 = (int)&AlphaShapeClass::`vftable'; /*0x420b1d*/
    this->AlphaShapeClass_field_0x0C = (int)&AlphaShapeClass::`vftable'; /*0x420b24*/
    if ( g_AlphaShapeLimit < dword_88A0F8 /*0x420b5c*/
      || (byte_88A0FD || !dword_88A0F8)
      && dword_88A104 > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, unsigned int))(dword_88A0F0 + 8))(
           &dword_88A0F0,
           dword_88A0F8 + dword_88A104,
           0) )
    {
      v2 = g_AlphaShapeLimit++; /*0x420b69*/
      *((unsigned int *)dword_88A0F4 + v2) = this; /*0x420b78*/
    }
    if ( g_BuildingLoadQueue_Array.Foundation[0] < g_BuildingLoadQueue_Array.ExtraPowerBonus /*0x420baf*/
      || (IDA_BYTE1(g_BuildingLoadQueue_Array.ExtraPowerDrain) || !g_BuildingLoadQueue_Array.ExtraPowerBonus)
      && g_BuildingLoadQueue_Array.Height > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.PowerBonus + 8))(
           &g_BuildingLoadQueue_Array.PowerBonus,
           g_BuildingLoadQueue_Array.ExtraPowerBonus + g_BuildingLoadQueue_Array.Height,
           0) )
    {
      v3 = g_BuildingLoadQueue_Array.Foundation[0]++; /*0x420bbc*/
      *(unsigned int *)(g_BuildingLoadQueue_Array.PowerDrain + 4 * v3) = this; /*0x420bcb*/
    }
    if ( byte_89A134 ) /*0x420bd4*/
      return (int)this->__pad_0; /*0x420c4a*/
    byte_89A134 = 1; /*0x420bd7*/
    for ( i = 0; i < 0x10000; ++i ) /*0x420bde*/
    {
      v5 = i % 256 * (i / 256) / 127; /*0x420c16*/
      if ( v5 > 255 ) /*0x420c1e*/
      {
        IDA_LOBYTE(v5) = -1; /*0x420c30*/
      }
      else if ( v5 < 0 ) /*0x420c22*/
      {
        IDA_LOBYTE(v5) = 0; /*0x420c24*/
      }
      byte_88A118[i] = v5; /*0x420c35*/
    }
    return (int)this->__pad_0; /*0x420c47*/
}
// 0x420d40
void AlphaShapeClass::SD_vt03(int a1, unsigned int * a2)
{
}
// 0x420d80
int AlphaShapeClass::SD_vt11()  // G42 sig-sync
{
  return 62; /*0x420d85*/
}
// 0x420d90
int AlphaShapeClass::SD_vt12()  // G42 sig-sync
{
  return 64; /*0x420d95*/
}
// 0x5106e0
void AngerVector::Construct( int a2, unsigned int * a3)
{
}
// 0x5f3320
void AppState::CallMethod(int a1)
{
}
// 0x7492b0
void ArcTan::Update()
{
}
// 0x4753f0
void ArmorType::FindIndex( CCINIClass * aP1, uint8_t * a2, Armor)
{
}
// 0x772a50
int ArmorType::LookupByName()  // G42 sig-sync: returns index
{
  int v2; // edi
  char **v3; // esi

  if ( !this ) /*0x772a57*/
    return 0; /*0x772a7c*/
  v2 = 0; /*0x772a59*/
  v3 = (char **)&off_7E5210; /*0x772a5b*/
  while ( _strcmpi(*v3, (const char *)((unsigned char *)(this) + 0x0)) ) /*0x772a6e*/
  {
    ++v3; /*0x772a70*/
    ++v2; /*0x772a73*/
    if ( (int)v3 >= (int)&off_7E523C ) /*0x772a7a*/
      return 0; /*0x772a7a*/
  }
  return v2; /*0x772a7c*/
}
// 0x5cc760
void ArtConfig::loadConfig(char **aP1, int aP2, int aP3, int *aP4, char aP5)
{
}
// 0x7681e0
void ArtConfig::ReadLayout( INIClass * a2, PriorityQueue * a3, int a4)
{
}
// 0x768f50
void ArtConfig::ParseLayoutEntry( unsigned int * a1, ObjectClass * aP2, char ** a3, int a5)
{
}
// 0x7691e0
void ArtConfig::saveConfig( ObjectClass * aP1)
{
}
// 0x76fb90
void ArtConfig::resetConfig( unsigned int * a1, int a3, Selection_WorldDominationTour * aP3)
{
}
// 0x534e50
int AssetClass::ReleaseAndReload()
{
    void (__thiscall ***v1)(unsigned int, int); // ecx
    int v2; // ecx
    MixFileClass *v3; // eax
    MixFileClass *v5; // eax

    if ( dword_884E5C ) /*0x534e5a*/
    {
      Debug::Log(); /*0x534e65*/
      if ( dword_884E5C ) /*0x534e75*/
        (**(void (__thiscall ***)(int, int))dword_884E5C)(dword_884E5C, 1); /*0x534e7b*/
      dword_884E5C = 0; /*0x534e82*/
      if ( dword_884E58 ) /*0x534e8a*/
      {
        Debug::Log(); /*0x534e99*/
        v1 = (void (__thiscall ***)(unsigned int, int))dword_884E58; /*0x534e9e*/
        if ( dword_884E58 ) /*0x534ea9*/
          goto LABEL_14; /*0x534ea9*/
        goto LABEL_15; /*0x534ea9*/
      }
    }
    else
    {
      v2 = dword_884E58; /*0x534ead*/
      if ( dword_884E58 ) /*0x534eb5*/
      {
        if ( dword_884E5C ) /*0x534eb9*/
        {
          Debug::Log(); /*0x534ec4*/
          if ( dword_884E5C ) /*0x534ed4*/
            (**(void (__thiscall ***)(int, int))dword_884E5C)(dword_884E5C, 1); /*0x534eda*/
          v2 = dword_884E58; /*0x534edc*/
          dword_884E5C = 0; /*0x534ee2*/
        }
        if ( v2 ) /*0x534eea*/
        {
          Debug::Log(); /*0x534ef5*/
          v1 = (void (__thiscall ***)(unsigned int, int))dword_884E58; /*0x534efa*/
          if ( dword_884E58 ) /*0x534f05*/
  LABEL_14:
            (**v1)(v1, 1); /*0x534f07*/
  LABEL_15:
          dword_884E58 = 0; /*0x534f0d*/
        }
      }
    }
    v3 = (MixFileClass *)RA2_OPNEW(0x28u); /*0x534f13*/
    if ( v3 ) /*0x534f1f*/
    {
      dword_884E58 = (int)MixFileClass::FromFile(v3, aNtrlmdMix, (int)dword_886980); /*0x534f34*/
      if ( dword_884E58 ) /*0x534f39*/
      {
        Debug::Log_0(); /*0x534f4e*/
        v5 = (MixFileClass *)RA2_OPNEW(0x28u); /*0x534f55*/
        if ( v5 ) /*0x534f5f*/
        {
          dword_884E5C = (int)MixFileClass::FromFile(v5, aNeutralMix, (int)dword_886980); /*0x534f74*/
          if ( dword_884E5C ) /*0x534f79*/
          {
            Debug::Log_0(); /*0x534f8e*/
            return 1; /*0x534f96*/
          }
          else
          {
            return 0; /*0x534f7b*/
          }
        }
        else
        {
          dword_884E5C = 0; /*0x534f7f*/
          return 0; /*0x534f85*/
        }
      }
      else
      {
        return 0; /*0x534f3b*/
      }
    }
    else
    {
      dword_884E58 = 0; /*0x534f3f*/
      return 0; /*0x534f45*/
    }
}
// 0x69e100
void BTree::DeleteSubtree()
{
}
// 0x42f9c0
void BaseNodeClass_Vector::Release( int a2, char * a3)
{
}
// 0x42fab0
void BaseNodeClass_Vector::ddtor()
{
}
// 0x42fae0
void BaseNodeClass_Vector::Read( int a2)
{
}
// 0x42fb30
void BaseNodeClass_Vector::Write( int a2)
{
}
// 0x42fb50
void BaseNodeClass_Vector::QueryInterface(unsigned int * Block, char a2)
{
}
// 0x5c6fe0
void BigInt::ArrayArithmetic(int * a1, char * a2, unsigned int * a3, int a4)
{
}
// 0x632740
void BigInt::DecryptBlock( Pipe * aP1, Pipe * aP2, Pipe * aP3)
{
}
// 0x632870
void BigInt::RSAOperation( AbstractClass * Src, int a3, char * a4)
{
}
// 0x632bc0
void BigInt::Compare( int a2)
{
}
// 0x433180
void BinkMovieClass::SetPosition( DSurface * aP1, int a3, int a4)
{
}
// 0x4333f0
void BinkMovieClass::RenderFrameToSurface()
{
}
// 0x4335e0
void BinkMovieClass::AllocateRenderSurface(unsigned char * a1, unsigned char * a2, int a3)
{
}
// 0x4336c0
void BinkMovieClass::ReleaseRenderSurface(uint8_t * a1, unsigned char * a2, int a3)
{
}
// 0x433770
void BinkMovieClass::OpenFile(uint8_t * a1, unsigned char * a2, unsigned int a3)
{
}
// 0x438000
void BlowPipe::Draw( int a2, int a3, int a4)
{
}
// 0x438030
void BlowPipe::DrawAlt( int a2, int a3, int a4)
{
}
// 0x438060
void BlowPipe::AddRef()
{
}
// 0x4380a0
void BlowPipe::Read( BombClass * aP1, signed int Size)
{
}
// 0x632f90
void BlowPipe::QueryInterface(int * Block, char a2)
{
}
// 0x438210
void BlowStraw::Get( Straw * aP1, signed int Size)
{
}
// 0x5b45c0
void BlowStraw::QueryInterface(int * Block, char a2)
{
}
// 0x5b4630
void BlowStraw::Constructor_MixFileClass(void * Block, char a2)
{
}
// 0x510920
void BoolVector::Construct( MapClass * aP1, MapClass * aP2)
{
}
// 0x42e820
void BridgeClass::GetCellData( int a2)
{
}
// 0x50e450
void BuildLocation::InitCandidate( int a2, IUnknown * aP2)
{
}
// 0x510860
void BuildLocationVector::Grow( int a2)
{
}
// 0x6301a0
int C07EFB9C::ddtor(int a1, unsigned int *a2)
{
    if ( !a2 ) /*0x6301a6*/
      return -2147467261; /*0x6301a8*/
    *a2 = 237448648; /*0x6301b6*/
    a2[1] = 298949647; /*0x6301be*/
    a2[2] = -1610610249; /*0x6301c7*/
    a2[3] = unk_7E96CC; /*0x6301d0*/
    return 0; /*0x6301ad*/
}
// 0x645620
int C07F0188::ddtor(int a1, unsigned int *a2)
{
    if ( !a2 ) /*0x645626*/
      return -2147467261; /*0x645628*/
    *a2 = 1883112523; /*0x645636*/
    a2[1] = 298979249; /*0x64563e*/
    a2[2] = 1610642049; /*0x645647*/
    a2[3] = unk_7E971C; /*0x645650*/
    return 0; /*0x64562d*/
}
// 0x744600
void C07F5C70::Write(IPersistStream * a0, LPPERSISTSTREAM pPStm, FootClass * aP2)
{
}
// 0x746dd0
int C07F5C70::StubReturn2280()
{
  return 2280; /*0x746dd5*/
}
// 0x746de0
int C07F5C70::ddtor(int a1, unsigned int *a2)
{
    if ( !a2 ) /*0x746de6*/
      return -2147467261; /*0x746de8*/
    *a2 = 237448650; /*0x746df6*/
    a2[1] = 298949647; /*0x746dfe*/
    a2[2] = -1610610249; /*0x746e07*/
    a2[3] = unk_7E96FC; /*0x746e10*/
    return 0; /*0x746ded*/
}
// 0x746e20
int C07F5C70::StubReturn1()
{
  return 1; /*0x746e25*/
}
// 0x746e80
void C07F5C70::Seek(void ** Block, char a2)
{
}
// 0x478ba0
void CCToolTip::CalculatePopupPosition( unsigned int * a2)
{
}
// 0x478db0
void CCToolTip::Release( unsigned int * a2)
{
}
// 0x478e10
void CCToolTip::Draw1( char a2)
{
}
// 0x478e30
void CCToolTip::Draw2()
{
}
// 0x479050
void CCToolTip::Show(int a1)
{
}
// 0x7a41c0
void CChatEventSink::HandleServerList(int a1, int a2, int a3)
{
}
// 0x7a5890
void CChatEventSink::HandleChatEvent(int a1, AnimClass * a2, uint8_t * a3, char * a4)
{
}

// 0x7a7110
void CChatEventSink::HandleChannelJoin(int a1, int a2, int a3, const char * a4)
{
}
// 0x7a8260
void CChatEventSink::HandleLobbyPlayerUpdate(int a1, int a2, int a3, int a4)
{
}
// 0x7a9970
void CChatEventSink::HandleUserSearch( int a2, void * a3)
{
}

// 0x47a3f0
void CDROM::DeviceIoControl(HANDLE hDevice, int a2)
{
    int v2; // esi
    HANDLE v3; // edi
    BOOL v4; // eax
    bool v5; // bl
    char v6; // al
    bool v7; // cc
    char v9; // [esp+10h] [ebp-24h] BYREF
    int v10; // [esp+11h] [ebp-23h]
    unsigned int InBuffer[7]; // [esp+18h] [ebp-1Ch] BYREF

    IDA_LOBYTE(v10) = 0; /*0x47a402*/
    v2 = (char)a2; /*0x47a406*/
    memset(&InBuffer[1], 0, 0x18u); /*0x47a40b*/
    v3 = hDevice; /*0x47a40d*/
    InBuffer[1] = &v9; /*0x47a426*/
    v9 = 2; /*0x47a437*/
    InBuffer[3] = 17421; /*0x47a43c*/
    InBuffer[0] = (char)a2; /*0x47a444*/
    InBuffer[2] = 2120; /*0x47a448*/
    v4 = DeviceIoControl(hDevice, 1u, InBuffer, 0x1Cu, InBuffer, 0x1Cu, (LPDWORD)&hDevice, 0); /*0x47a450*/
    v5 = v4; /*0x47a454*/
    if ( !v4 ) /*0x47a459*/
    {
      GetLastError(); /*0x47a51a*/
      Debug::Log(); /*0x47a526*/
      return 0; /*0x47a526*/
    }
    if ( (InBuffer[6] & 1) != 0 ) /*0x47a464*/
    {
      if ( InBuffer[3] == 176 || InBuffer[3] == 1 ) /*0x47a474*/
      {
        v5 = 1; /*0x47a47a*/
        goto LABEL_6; /*0x47a47a*/
      }
      return 0; /*0x47a537*/
    }
  LABEL_6:
    Debug::Log(); /*0x47a47c*/
    v6 = v10; /*0x47a491*/
    if ( !(unsigned char)v10 ) /*0x47a49a*/
    {
      v6 = 1; /*0x47a49c*/
      IDA_LOBYTE(v10) = 1; /*0x47a49e*/
    }
    a2 = 0; /*0x47a4a4*/
    if ( v6 ) /*0x47a4ac*/
    {
      while ( 1 ) /*0x47a4c1*/
      {
        InBuffer[1] = &v9; /*0x47a4c1*/
        v9 = 1; /*0x47a4d2*/
        InBuffer[3] = 17421; /*0x47a4d7*/
        InBuffer[0] = v2; /*0x47a4df*/
        InBuffer[2] = 2120; /*0x47a4e3*/
        if ( !DeviceIoControl(v3, 1u, InBuffer, 0x1Cu, InBuffer, 0x1Cu, (LPDWORD)&hDevice, 0) ) /*0x47a4eb*/
          break; /*0x47a4eb*/
        if ( (InBuffer[6] & 1) != 0 ) /*0x47a4fb*/
          return 0; /*0x47a4fb*/
        v7 = a2 + 1 < (unsigned __int8)v10; /*0x47a50c*/
        v5 = 1; /*0x47a50e*/
        ++a2; /*0x47a510*/
        if ( !v7 ) /*0x47a514*/
          return v5; /*0x47a514*/
      }
      GetLastError(); /*0x47a53c*/
      Debug::Log(); /*0x47a548*/
      return 0; /*0x47a550*/
    }
    return v5; /*0x47a52e*/
}
// 0x47a6f0
void CDROM::LockVolume(ObjectClass * aP0, AnimClass * aP1, uint8_t a3, DWORD BytesReturned, int16_t a5)
{
}
// 0x473920
void CarryoverClass::QueryInterface(unsigned int * Block, char a2)
{
}
// 0x5ad570
void CellClassVector::Destruct(unsigned int * Block, char a2)
{
}
// 0x5657a0
void* CellCoord::To_CellObj(void* a2, void* a3)
{
    unsigned int v2; // eax
    void *result; // eax

    v2 = *a2 + (a2[1] << 9); /*0x5657af*/
    if ( v2 >= 0x40000 || (result = *(void **)(*((unsigned int *)this + 79) + 4 * v2)) == 0 ) /*0x5657c6*/
    {
      g_MissionQueueFrame.briefing[139] = *(unsigned int *)a2; /*0x5657cf*/
      return &g_MissionQueueFrame.briefing[130]; /*0x5657ca*/
    }
    return result; /*0x5657b1*/
}
// 0x4863d0
void CellLand::IsBuildable()
{
}
// 0x578100
void CellSystem::UpdateVisibility()
{
}
// 0x433c90
void Char::Swap(char aP1)
{
}
// 0x55e420
void Chat::ProcessMessages()
{
}

// 0x5d4390
void Chat::RefreshMessagePositions()
{
}
// 0x79db50
void ChatDialog::DlgProc(HWND hWnd, UINT, WPARAM, HWND a4)
{
}
// 0x6b9740
void ChatEvent::ProcessStrings(char *a2, int a3, int a4, int a5)
{
}
// 0x6bee40
_DWORD * ClassFactory_CStream::Construct()
{
    *((unsigned int *)this + 1) = 0; /*0x6bee42*/
    *this = (ClassFactory_CStream)&TClassFactory<CStreamClass>::`vftable'; /*0x6bee49*/
    return this; /*0x6bee4f*/
}
// 0x6befc0
_DWORD * ClassFactory_Wave::Construct()
{
    *((unsigned int *)this + 1) = 0; /*0x6befc2*/
    *this = (ClassFactory_Wave)&TClassFactory<WaveClass>::`vftable'; /*0x6befc9*/
    return this; /*0x6befcf*/
}
// 0x579010
void Cliff::ProcessTransitions(MapClass * aP0, BombClass * aP1)
{
}
// 0x76b080
void ComStreamClass::initStream()
{
}
// 0x76b090
unsigned char * ComStreamClass::closeStream()  // G42 sig-sync: returns +0x48
{
  return (unsigned char *)((unsigned char *)(this) + 0x048); /*0x76b093*/
}
// 0x7a2fe0
void ComStreamClass::SetSize()
{
}
// 0x7a30d0
int ComStreamClass::Read()
{
    Debug::Log(); /*0x7a30db*/
    if ( !a2 ) /*0x7a30e6*/
      Audio_Read_6C6D00(); /*0x7a30e8*/
    Audio_Read_6C6DE0(); /*0x7a30ed*/
    return 0; /*0x7a30f4*/
}
// 0x7a3b30
void ComStreamClass::Commit()
{
}
// 0x55c350
void Compression::Read( AbstractClass * aP1, IUnknown * aP2)
{
}
// 0x653810
void Conditions::CheckResult(int a1, IUnknown * aP1)
{
}
// 0x653830
void Conditions::CheckResult3(MouseClass * aP0, IUnknown * aP1, char aP3)
{
}
// 0x7667a0
void Conflict_WorldDominationTour::QueryInterface( char a2)
{
}
// 0x4a04b0
void ConnectionPointClass::QueryInterface(int a1, const void * a2, unsigned int * a3)
{
}
// 0x4a0520
char ConnectionPointClass::AddRef(int a1)
{
    ++*(unsigned int *)&g_MissionQueueFrame.waypoints[274]; /*0x4a052f*/
    return InterlockedIncrement(&this->ConnectionPointClass_field_0x14); /*0x4a053b*/
}
// 0x4a0540
void ConnectionPointClass::Release(volatile LONG * Block)
{
}
// 0x4a05d0
int ConnectionPointClass::ddtor(unsigned int *a1, unsigned int *a2)
{
    if ( !a2 ) /*0x4a05d6*/
      return -2147467261; /*0x4a05d8*/
    *a2 = this->ConnectionPointClass_field_0x04; /*0x4a05e9*/
    a2[1] = this->ConnectionPointClass_field_0x08; /*0x4a05ee*/
    a2[2] = this->ConnectionPointClass_field_0x0C; /*0x4a05f4*/
    a2[3] = this->ConnectionPointClass_field_0x10; /*0x4a05fa*/
    return 0; /*0x4a05dd*/
}
// 0x4a0610
void ConnectionPointClass::Advise(int a1, int a2)
{
}
// 0x5105f0
void ConnectionPointVector::Construct( int a2, int a3)
{
}
// 0x481a00
void CrateClass::ProcessPickup(int aP1)
{
}

// 0x56bbe0
void CrateClass::Update()
{
}
// 0x56bd40
void CrateClass::FindPlacement()
{
}
// 0x72dae0
// G42: static-form sync (ui/supplied site 0x60CF6F calls it without an
// instance). IDA truth = free fn int CreatureClass_GetManager() returning
// *(data:0xB0FCC4); that global is only declared as DataGlobal_B0FCC4 in
// e4/e4_globals.hpp (not in this TU's legacy-safe subset), so stubbed.
unsigned int * CreatureClass::GetManager()
{
    return dword_B0FCC4; /*0x72dae5*/
}
// 0x632aa0
void Crypto::DecodeByte( unsigned int * a2)
{
}
// 0x4072c0
int DListNode::Init()
{
    int result; // eax

    *(unsigned int *)this->__pad_0 = this; /*0x4072c0*/
    this->DListNode_field_0x04 = (int)this; /*0x4072c2*/
    *((unsigned int *)this + 2) = this; /*0x4072c5*/
    return result; /*0x4072c8*/
}
// 0x4072d0
void DListNode::InitEmpty()
{
}
// 0x4a53b0
void Dial8Class::Constructor( ControlClass * aP1, ControlClass * aP2, ControlClass * aP3, ControlClass * aP4, ControlClass * aP5, int a7)
{
}
// 0x4a5660
void Dial8Class::SetValue( unsigned int a2, ControlClass * aP2, int a4)
{
}
// 0x4a57b0
int Dial8Class::GetValue()
{
    ControlClass *v5; // ecx
    ControlClass *v6; // esi
    void *v7; // ecx
    int *p_ControlClass_field_0x08; // edi
    int v9; // ebx
    void *v10; // edx
    int v11; // edi
    int v12; // eax
    int v13; // edx
    int ControlClass_field_0x08; // ecx
    int v15; // eax
    int v16; // ecx
    int v17; // eax
    int v18; // eax
    int v19; // edx
    int v20; // eax
    int v21; // ecx
    int v22; // eax
    int v24; // [esp+18h] [ebp-Ch] BYREF
    int v25; // [esp+1Ch] [ebp-8h]
    int ControlClass_field_0x0C; // [esp+20h] [ebp-4h] BYREF
    void *retaddr; // [esp+24h] [ebp+0h]

    v6 = v5; /*0x4a57b4*/
    BuildingAnim::GetType(); /*0x4a57b6*/
    if ( !Control::DispatchClick(v6, (int)this) ) /*0x4a57c6*/
      return 0; /*0x4a5944*/
    (*(void (__thiscall **)(void *, int, int, int))(*(unsigned int *)stru_887598.lineTrailer + 12))( /*0x4a57de*/
      stru_887598.lineTrailer,
      a4,
      a3,
      a2);
    v7 = *(void **)v6[1].__pad_0; /*0x4a57e4*/
    ControlClass_field_0x0C = v6->ControlClass_field_0x0C; /*0x4a57ea*/
    retaddr = v7; /*0x4a57f1*/
    DrawBuildingTilesSHP(&ControlClass_field_0x0C, 0, 1); /*0x4a5805*/
    p_ControlClass_field_0x08 = &v6[3].ControlClass_field_0x08; /*0x4a580a*/
    v9 = 8; /*0x4a580d*/
    do /*0x4a5842*/
    {
      v10 = (void *)(*p_ControlClass_field_0x08 - 1); /*0x4a581d*/
      ControlClass_field_0x0C = *(p_ControlClass_field_0x08 - 1) - 1; /*0x4a581e*/
      retaddr = v10; /*0x4a5822*/
      DrawBuildingTilesSHP(&ControlClass_field_0x0C, 1, 0); /*0x4a5839*/
      p_ControlClass_field_0x08 += 2; /*0x4a583e*/
      --v9; /*0x4a5841*/
    }
    while ( v9 ); /*0x4a5842*/
    v11 = v24; /*0x4a5849*/
    v12 = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&stru_B054D0.m_1[3] + 4 * v24) + 796); /*0x4a5855*/
    if ( *(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x4a5864*/
      v13 = *(unsigned __int8 *)(*(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 372) + v12); /*0x4a5871*/
    else
      v13 = *(unsigned __int16 *)(*(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 372) + 2 * v12); /*0x4a587d*/
    ControlClass_field_0x08 = v6[11].ControlClass_field_0x08; /*0x4a5881*/
    v15 = *(&v6[7].ControlClass_field_0x08 + 2 * ControlClass_field_0x08); /*0x4a588c*/
    v16 = *(unsigned int *)&v6[7].__pad_0[8 * ControlClass_field_0x08 + 4] + 1; /*0x4a5895*/
    v25 = v15 + 1; /*0x4a5896*/
    v17 = v6[2].ControlClass_field_0x0C; /*0x4a589a*/
    v24 = v16; /*0x4a589d*/
    retaddr = (void *)(*(unsigned int *)v6[3].__pad_0 + 1); /*0x4a58a6*/
    ControlClass_field_0x0C = v17 + 1; /*0x4a58b1*/
    (*(void (__thiscall **)(AudioStream *, int *, int *, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 48))( /*0x4a58bc*/
      g_DSurface_Hidden_2,
      &ControlClass_field_0x0C,
      &v24,
      v13);
    v18 = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&stru_B054D0.m_1[3] + 4 * v11) + 808); /*0x4a58c7*/
    if ( *(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x4a58d6*/
      v19 = *(unsigned __int8 *)(*(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 372) + v18); /*0x4a58e3*/
    else
      v19 = *(unsigned __int16 *)(*(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 372) + 2 * v18); /*0x4a58ef*/
    v20 = v6[11].ControlClass_field_0x08; /*0x4a58f3*/
    retaddr = (void *)*(&v6[7].ControlClass_field_0x08 + 2 * v20); /*0x4a5906*/
    v21 = v6[2].ControlClass_field_0x0C; /*0x4a590a*/
    ControlClass_field_0x0C = *(unsigned int *)&v6[7].__pad_0[8 * v20 + 4]; /*0x4a590d*/
    v22 = *(unsigned int *)v6[3].__pad_0; /*0x4a5911*/
    v24 = v21; /*0x4a5914*/
    v25 = v22; /*0x4a591f*/
    (*(void (__thiscall **)(AudioStream *, int *, int *, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 48))( /*0x4a592a*/
      g_DSurface_Hidden_2,
      &v24,
      &ControlClass_field_0x0C,
      v19);
    (*(void (__thiscall **)(void *))(*(unsigned int *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x4a5935*/
    return 1; /*0x4a593d*/
}
// 0x4a59a0
void Dial8Class::QueryInterface(unsigned int * Block, char a2)
{
}
// 0x4a71a0
void DiskLaserClass::Fire( int a2, InfantryClass * aP2, DiskLaserClass * aP3, DiskLaserClass * aP4)
{
}
// 0x4a7340
void DiskLaserClass::Update()
{
}
// 0x4a7900
void DiskLaserClass::PointerGotInvalid( AbstractClass * aP1)
{
}
// 0x4a7b80
void DiskLaserClass::Stat( AbstractClass * aP1)
{
}
// 0x48dd50
int DiskSpace::CheckAvailable()
{
    HMODULE ModuleHandleA; // eax
    FARPROC ProcAddress; // esi
    int v2; // esi
    DWORD v4; // esi
    DWORD SectorsPerCluster; // [esp+4h] [ebp-28h] BYREF
    DWORD BytesPerSector; // [esp+8h] [ebp-24h] BYREF
    DWORD NumberOfFreeClusters; // [esp+Ch] [ebp-20h] BYREF
    DWORD TotalNumberOfClusters; // [esp+10h] [ebp-1Ch] BYREF
    unsigned int v9[2]; // [esp+14h] [ebp-18h] BYREF
    unsigned char v10[8]; // [esp+1Ch] [ebp-10h] BYREF
    unsigned char v11[8]; // [esp+24h] [ebp-8h] BYREF

    Debug::Log(); /*0x48dd59*/
    ModuleHandleA = GetModuleHandleA(ModuleName); /*0x48dd66*/
    if ( ModuleHandleA ) /*0x48dd6e*/
    {
      ProcAddress = GetProcAddress(ModuleHandleA, ProcName); /*0x48dd80*/
      if ( ProcAddress ) /*0x48dd84*/
      {
        Debug::Log(); /*0x48dd8b*/
        if ( ((unsigned __int8 (__stdcall *)(unsigned int, unsigned int *, unsigned char *, unsigned char *))ProcAddress)(0, v9, v11, v10) ) /*0x48dda4*/
        {
          v2 = Math::RoundToInt(((double)v9[1] * 4294967296.0 + (double)v9[0]) * 0.0009765625); /*0x48dddb*/
          Debug::Log(); /*0x48dde6*/
          return v2; /*0x48ddf4*/
        }
        GetLastError(); /*0x48ddac*/
        Debug::Log(); /*0x48ddb8*/
      }
      else
      {
        GetLastError(); /*0x48ddf7*/
        Debug::Log(); /*0x48de03*/
      }
    }
    else
    {
      Debug::Log(); /*0x48de12*/
    }
    if ( !GetDiskFreeSpaceA(0, &SectorsPerCluster, &BytesPerSector, &NumberOfFreeClusters, &TotalNumberOfClusters) ) /*0x48de30*/
      return 0; /*0x48de65*/
    v4 = NumberOfFreeClusters * ((BytesPerSector * SectorsPerCluster) >> 10); /*0x48de46*/
    Debug::Log(); /*0x48de56*/
    return v4; /*0x48ddf0*/
}
// 0x510970
void DistributionVector_BuildingType::Construct( int a2, unsigned int * a3)
{
}
// 0x4129c0
void DynamicArray::AddFromList( int a2)
{
}
// 0x6249a0
void DynamicArray::Resize(int *a1, unsigned int *aP2)
{
}
// 0x625440
int DynamicArray::ShrinkCapacity()
{
    int v2; // eax
    int DynamicArray_field_0x04; // ecx
    int v5; // ebx
    void *v6; // eax
    const void *DynamicArray_field_0x08; // esi
    int v8; // [esp+8h] [ebp-4h]

    v2 = *(unsigned int *)this->__pad_0; /*0x625445*/
    DynamicArray_field_0x04 = this->DynamicArray_field_0x04; /*0x625448*/
    if ( 3 * v2 > DynamicArray_field_0x04 ) /*0x625450*/
      return 0; /*0x625453*/
    v5 = DynamicArray_field_0x04 / 2; /*0x62545f*/
    if ( DynamicArray_field_0x04 / 2 < 10 ) /*0x625464*/
      v5 = 10; /*0x625466*/
    if ( v5 >= DynamicArray_field_0x04 ) /*0x62546d*/
      return 0; /*0x625470*/
    v6 = (void *)RA2_OPNEW(4 * v5); /*0x62547e*/
    DynamicArray_field_0x08 = (const void *)this->DynamicArray_field_0x08; /*0x625483*/
    v8 = (int)v6; /*0x62548b*/
    if ( DynamicArray_field_0x08 ) /*0x62548f*/
      qmemcpy(v6, DynamicArray_field_0x08, 4 * *(unsigned int *)this->__pad_0); /*0x62549f*/
    RA2_OPDEL((void *)this->DynamicArray_field_0x08); /*0x6254ad*/
    this->DynamicArray_field_0x08 = v8; /*0x6254b9*/
    this->DynamicArray_field_0x04 = v5; /*0x6254bc*/
    return 1; /*0x625452*/
}
// 0x7acd60
void DynamicArray::Remove( int a2)
{
}
// 0x7ad9d0
int DynamicArray::Grow()
{
    int result; // eax
    int v3; // eax
    unsigned int v4; // esi
    void *v5; // ebp
    const void *DynamicArray_field_0x08; // esi
    int v7; // [esp+4h] [ebp-4h]

    result = *(unsigned int *)this->__pad_0; /*0x7ad9d4*/
    if ( *(unsigned int *)this->__pad_0 >= this->DynamicArray_field_0x04 ) /*0x7ad9db*/
    {
      v3 = 2 * result; /*0x7ad9e2*/
      v7 = v3; /*0x7ad9e7*/
      if ( v3 < 10 ) /*0x7ad9eb*/
      {
        v7 = 10; /*0x7ad9ed*/
        v3 = 10; /*0x7ad9f5*/
      }
      v4 = 108 * v3; /*0x7ada02*/
      v5 = (void *)RA2_OPNEW(108 * v3); /*0x7ada0d*/
      memset(v5, 0, v4); /*0x7ada1b*/
      DynamicArray_field_0x08 = (const void *)this->DynamicArray_field_0x08; /*0x7ada24*/
      if ( DynamicArray_field_0x08 ) /*0x7ada29*/
        qmemcpy(v5, DynamicArray_field_0x08, 108 * *(unsigned int *)this->__pad_0); /*0x7ada3d*/
      RA2_OPDEL((void *)this->DynamicArray_field_0x08); /*0x7ada4a*/
      this->DynamicArray_field_0x08 = (int)v5; /*0x7ada56*/
      this->DynamicArray_field_0x04 = v7; /*0x7ada59*/
      IDA_LOBYTE(result) = 1; /*0x7ada5f*/
    }
    else
    {
      IDA_LOBYTE(result) = 0; /*0x7ad9dd*/
    }
    return result; /*0x7ad9df*/
}
// 0x7aca00
void DynamicClass::Insert( HashTable * aP1, IUnknown * aP2)
{
}
// 0x7ace30
void DynamicStringArray::Get( ObjectClass * aP1, int a3)
{
}
// 0x628070
void DynamicVectorArray::Constructor( int a2, int a3, int a4)
{
}
// 0x46f5e0
int ErrorCode::Map()
{
  if ( this )
    return this != (ErrorCode *)1 ? -1 : 1042;
  else
    return 1041; /*0x46f5e6*/
}
// 0x7d2f41
void Exception::Destructor()
{
}
// 0x4c85e0
int ExceptionHandler::GenerateReport()
{
    HMODULE LibraryA; // ebp
    FARPROC *v2; // esi
    LPCSTR *i; // edi
    HANDLE v4; // eax
    HANDLE CurrentProcess; // eax
    ExceptionHandler v6; // ebp
    int v7; // edx
    int v8; // eax
    int v9; // esi
    int *v10; // ecx
    const CHAR *v11; // edi
    int v12; // ebx
    int v13; // edi
    int v14; // edi
    int v15; // edi
    int v16; // edi
    HANDLE v17; // eax
    int v18; // edi
    char *ModuleVersion; // eax
    int v20; // edi
    char *ModuleInternalVersion; // eax
    int v22; // edi
    char *v23; // eax
    int v24; // edi
    char *v25; // eax
    char *Name; // eax
    int v27; // edi
    int v28; // edi
    int v29; // edi
    int v30; // edi
    int v31; // edi
    int v32; // edi
    int v33; // edi
    unsigned __int8 *v34; // edi
    int v35; // edi
    int v36; // edi
    FARPROC *v37; // edi
    void (__stdcall *v38)(LPSTR, LPCSTR); // ebp
    bool v39; // zf
    HANDLE v40; // eax
    int v41; // ebp
    HANDLE v42; // eax
    HANDLE v43; // eax
    int v44; // edi
    int result; // eax
    int v46; // [esp+18h] [ebp-4E4h]
    FARPROC v47; // [esp+18h] [ebp-4E4h]
    char *v48; // [esp+1Ch] [ebp-4E0h]
    const char *v49; // [esp+1Ch] [ebp-4E0h]
    FARPROC v50; // [esp+20h] [ebp-4DCh]
    char v51; // [esp+37h] [ebp-4C5h] BYREF
    int v52; // [esp+38h] [ebp-4C4h]
    int v53; // [esp+3Ch] [ebp-4C0h] BYREF
    int v54; // [esp+40h] [ebp-4BCh]
    ExceptionHandler *v55; // [esp+44h] [ebp-4B8h]
    int v56; // [esp+48h] [ebp-4B4h]
    int v57; // [esp+4Ch] [ebp-4B0h]
    int v58; // [esp+50h] [ebp-4ACh] BYREF
    HMODULE hLibModule; // [esp+54h] [ebp-4A8h]
    CHAR String[256]; // [esp+58h] [ebp-4A4h] BYREF
    CHAR String2[32]; // [esp+158h] [ebp-3A4h] BYREF
    unsigned int v62[64]; // [esp+178h] [ebp-384h] BYREF
    char Buffer[128]; // [esp+278h] [ebp-284h] BYREF
    CHAR Filename[260]; // [esp+2F8h] [ebp-204h] BYREF
    char Destination[128]; // [esp+3FCh] [ebp-100h] BYREF
    char v66[128]; // [esp+47Ch] [ebp-80h] BYREF

    v55 = this; /*0x4c85ea*/
    Debug::Log(); /*0x4c85f3*/
    memset(::Buffer, 0, 0x10000u); /*0x4c8607*/
    LibraryA = LoadLibraryA(LibFileName); /*0x4c8614*/
    hLibModule = LibraryA; /*0x4c8618*/
    if ( LibraryA ) /*0x4c861c*/
    {
      Debug::Log(); /*0x4c8623*/
      v2 = (FARPROC *)&dword_8B3A88; /*0x4c8631*/
      for ( i = (LPCSTR *)off_820E64; *i; ++i ) /*0x4c8636*/
        *v2++ = GetProcAddress(LibraryA, *i); /*0x4c8645*/
    }
    else
    {
      Debug::Log(); /*0x4c8654*/
    }
    if ( dword_8B3A98 ) /*0x4c8663*/
      dword_8B3A98(4); /*0x4c8667*/
    v57 = 0; /*0x4c867f*/
    v54 = 0; /*0x4c8683*/
    if ( dword_8B3A90 && (v4 = GetCurrentProcess(), dword_8B3A90(v4, 0, 0)) ) /*0x4c8692*/
    {
      Debug::Log(); /*0x4c86a5*/
      v54 = 1; /*0x4c86b4*/
      if ( dword_8B3A98 ) /*0x4c86bc*/
        dword_8B3A98(6); /*0x4c86c0*/
      GetModuleFileNameA(0, Filename, 0x104u); /*0x4c86d1*/
      if ( !dword_8B3A94 /*0x4c86ff*/
        || (CurrentProcess = GetCurrentProcess(), (v57 = dword_8B3A94(CurrentProcess, 0, Filename, 0, 0, 0)) == 0) )
      {
        GetLastError(); /*0x4c8703*/
        Debug::Log(); /*0x4c8713*/
      }
    }
    else
    {
      GetLastError(); /*0x4c875e*/
      Debug::Log(); /*0x4c8766*/
    }
    v52 = -1; /*0x4c871f*/
    v56 = 0; /*0x4c8727*/
    v6 = v55[1]; /*0x4c8731*/
    if ( **(unsigned int **)v55 == -1073741819 ) /*0x4c873b*/
    {
      Debug::Log(); /*0x4c8742*/
      v7 = *(unsigned int *)(*(unsigned int *)v55 + 24); /*0x4c874f*/
      v52 = *(unsigned int *)(*(unsigned int *)v55 + 20); /*0x4c8752*/
      v56 = v7; /*0x4c8756*/
    }
    else
    {
      Debug::Log(); /*0x4c8776*/
    }
    v8 = -1073741819; /*0x4c877e*/
    v9 = 0; /*0x4c8783*/
    v10 = &dword_7E8838; /*0x4c878e*/
    while ( v8 != **(unsigned int **)v55 ) /*0x4c8795*/
    {
      v8 = v10[1]; /*0x4c8797*/
      ++v10; /*0x4c879a*/
      ++v9; /*0x4c879d*/
      if ( v8 == -1 ) /*0x4c87a1*/
        goto LABEL_24; /*0x4c87a1*/
    }
    Debug::Log(); /*0x4c87aa*/
  LABEL_24:
    v11 = (&lpString2)[v9]; /*0x4c87b2*/
    v12 = lstrlenA(v11); /*0x4c87c2*/
    if ( lstrlenA(::Buffer) + v12 < 0xFFFF ) /*0x4c87d9*/
      lstrcatA(::Buffer, v11); /*0x4c87e1*/
    v13 = lstrlenA(::String2); /*0x4c87ea*/
    if ( lstrlenA(::Buffer) + v13 < 0xFFFF ) /*0x4c87fb*/
      lstrcatA(::Buffer, ::String2); /*0x4c8807*/
    if ( **(unsigned int **)v55 == -1073741819 ) /*0x4c881b*/
    {
      wsprintfA(String, "Access address:%08X ", v56); /*0x4c8830*/
      v14 = lstrlenA(::Buffer); /*0x4c883c*/
      if ( lstrlenA(String) + v14 < 0xFFFF ) /*0x4c884d*/
        lstrcatA(::Buffer, String); /*0x4c8859*/
      if ( v52 ) /*0x4c8865*/
      {
        v15 = lstrlenA(::String); /*0x4c886e*/
        if ( lstrlenA(::Buffer) + v15 < 0xFFFF ) /*0x4c887f*/
          lstrcatA(::Buffer, ::String); /*0x4c8886*/
      }
      else
      {
        v16 = lstrlenA(aWasReadFrom); /*0x4c888f*/
        if ( lstrlenA(::Buffer) + v16 < 0xFFFF ) /*0x4c88a0*/
          lstrcatA(::Buffer, aWasReadFrom); /*0x4c88ac*/
      }
    }
    memset(v62, 0, 0x18u); /*0x4c88c0*/
    v62[0] = 24; /*0x4c88c2*/
    v62[4] = 232; /*0x4c88cd*/
    v62[2] = 0; /*0x4c88d8*/
    v62[1] = *(unsigned int *)(*(unsigned int *)&v6 + 184); /*0x4c88e5*/
    if ( IsBadCodePtr(*(FARPROC *)(*(unsigned int *)&v6 + 184)) ) /*0x4c88f3*/
    {
      Debug::Log(); /*0x4c899d*/
    }
    else if ( dword_8B3A8C /*0x4c8925*/
           && (v46 = *(unsigned int *)(*(unsigned int *)&v6 + 184), v17 = GetCurrentProcess(), dword_8B3A8C(v17, v46, &v53, v62)) )
    {
      wsprintfA( /*0x4c894d*/
        String,
        "Exception occurred at %08X - %s + %08X\r\n",
        *(unsigned int *)(*(unsigned int *)&v6 + 184),
        (const char *)&v62[5],
        v53);
    }
    else
    {
      Debug::Log(); /*0x4c8959*/
      if ( dword_8B3A8C ) /*0x4c8968*/
      {
        GetLastError(); /*0x4c896c*/
        Debug::Log(); /*0x4c8978*/
      }
      wsprintfA(String, "Exception occurred at %08X\r\n", *(unsigned int *)(*(unsigned int *)&v6 + 184)); /*0x4c8991*/
    }
    v18 = lstrlenA(::Buffer); /*0x4c89b0*/
    if ( lstrlenA(String) + v18 < 0xFFFF ) /*0x4c89bd*/
      lstrcatA(::Buffer, String); /*0x4c89c9*/
    ModuleVersion = GetModuleVersion(); /*0x4c89cf*/
    wsprintfA(String, "\r\nVersion %s\r\n", ModuleVersion); /*0x4c89df*/
    v20 = lstrlenA(::Buffer); /*0x4c89ef*/
    if ( lstrlenA(String) + v20 < 0xFFFF ) /*0x4c89fc*/
      lstrcatA(::Buffer, String); /*0x4c8a08*/
    ModuleInternalVersion = GetModuleInternalVersion((ObjectClass * *)((char *)&stru_A8EB00 + 480)); /*0x4c8a13*/
    wsprintfA(String, "Internal Version %s\r\n", ModuleInternalVersion); /*0x4c8a23*/
    v22 = lstrlenA(::Buffer); /*0x4c8a33*/
    if ( lstrlenA(String) + v22 < 0xFFFF ) /*0x4c8a40*/
      lstrcatA(::Buffer, String); /*0x4c8a4c*/
    Buffer[0] = 0; /*0x4c8a5e*/
    Time::FormatDate(Buffer); /*0x4c8a66*/
    v48 = String::CopyConstant(Destination); /*0x4c8a90*/
    v23 = String::FormatDword(v66); /*0x4c8a91*/
    wsprintfA(String, "Release Build: %s by %s - %s\r\n", v23, v48, Buffer);
    v24 = lstrlenA(::Buffer); /*0x4c8ab1*/
    if ( lstrlenA(String) + v24 < 0xFFFF ) /*0x4c8abe*/
      lstrcatA(::Buffer, String); /*0x4c8aca*/
    v58 = 5; /*0x4c8adc*/
    v51 = 0; /*0x4c8ae4*/
    GetVersionString(&v58, &v51, 0, 0); /*0x4c8ae9*/
    v25 = (char *)&off_821F08; /*0x4c8af4*/
    if ( !v51 ) /*0x4c8af9*/
      v25 = g_INI_Key_No; /*0x4c8afb*/
    v49 = v25; /*0x4c8b05*/
    Name = PlayerType::GetName(); /*0x4c8b06*/
    wsprintfA(String, "CPU %s, MMX %s, Vendor: %s\r\n", Name, v49, Source);
    v27 = lstrlenA(::Buffer); /*0x4c8b26*/
    if ( lstrlenA(String) + v27 < 0xFFFF ) /*0x4c8b33*/
      lstrcatA(::Buffer, String); /*0x4c8b3f*/
    v28 = lstrlenA(aDetails); /*0x4c8b4c*/
    if ( lstrlenA(::Buffer) + v28 < 0xFFFF ) /*0x4c8b5d*/
      lstrcatA(::Buffer, aDetails); /*0x4c8b69*/
    Debug::Log(); /*0x4c8b74*/
    wsprintfA( /*0x4c8b98*/
      String,
      "Eip:%08X\tEsp:%08X\tEbp:%08X\r\n",
      *(unsigned int *)(*(unsigned int *)&v6 + 184),
      *(unsigned int *)(*(unsigned int *)&v6 + 196),
      *(unsigned int *)(*(unsigned int *)&v6 + 180));
    v29 = lstrlenA(::Buffer); /*0x4c8ba8*/
    if ( lstrlenA(String) + v29 < 0xFFFF ) /*0x4c8bb5*/
      lstrcatA(::Buffer, String); /*0x4c8bc1*/
    wsprintfA( /*0x4c8be6*/
      String,
      "Eax:%08X\tEbx:%08X\tEcx:%08X\r\n",
      *(unsigned int *)(*(unsigned int *)&v6 + 176),
      *(unsigned int *)(*(unsigned int *)&v6 + 164),
      *(unsigned int *)(*(unsigned int *)&v6 + 172));
    v30 = lstrlenA(::Buffer); /*0x4c8bf6*/
    if ( lstrlenA(String) + v30 < 0xFFFF ) /*0x4c8c03*/
      lstrcatA(::Buffer, String); /*0x4c8c0f*/
    wsprintfA( /*0x4c8c34*/
      String,
      "Edx:%08X\tEsi:%08X\tEdi:%08X\r\n",
      *(unsigned int *)(*(unsigned int *)&v6 + 168),
      *(unsigned int *)(*(unsigned int *)&v6 + 160),
      *(unsigned int *)(*(unsigned int *)&v6 + 156));
    v31 = lstrlenA(::Buffer); /*0x4c8c44*/
    if ( lstrlenA(String) + v31 < 0xFFFF ) /*0x4c8c51*/
      lstrcatA(::Buffer, String); /*0x4c8c5d*/
    wsprintfA(String, "EFlags:%08X \r\n", *(unsigned int *)(*(unsigned int *)&v6 + 192)); /*0x4c8c74*/
    v32 = lstrlenA(::Buffer); /*0x4c8c80*/
    if ( lstrlenA(String) + v32 < 0xFFFF ) /*0x4c8c91*/
      lstrcatA(::Buffer, String); /*0x4c8c9d*/
    wsprintfA( /*0x4c8cd7*/
      String,
      "CS:%04x  SS:%04x  DS:%04x  ES:%04x  FS:%04x  GS:%04x\r\n",
      *(unsigned int *)(*(unsigned int *)&v6 + 188),
      *(unsigned int *)(*(unsigned int *)&v6 + 200),
      *(unsigned int *)(*(unsigned int *)&v6 + 152),
      *(unsigned int *)(*(unsigned int *)&v6 + 148),
      *(unsigned int *)(*(unsigned int *)&v6 + 144),
      *(unsigned int *)(*(unsigned int *)&v6 + 140));
    v33 = lstrlenA(::Buffer); /*0x4c8ce3*/
    if ( lstrlenA(String) + v33 < 0xFFFF ) /*0x4c8cf4*/
      lstrcatA(::Buffer, String); /*0x4c8d00*/
    Debug::Log(); /*0x4c8d0b*/
    wsprintfA(String, "\r\nBytes at CS:EIP (%08X)  : ", *(unsigned int *)(*(unsigned int *)&v6 + 184));
    v34 = *(unsigned __int8 **)(*(unsigned int *)&v6 + 184); /*0x4c8d23*/
    v52 = 32; /*0x4c8d2c*/
    do /*0x4c8d81*/
    {
      if ( IsBadReadPtr(v34, 1u) ) /*0x4c8d37*/
      {
        lstrcatA(String, asc_821DE0); /*0x4c8d4b*/
      }
      else
      {
        wsprintfA(String2, "%02X ", *v34); /*0x4c8d5f*/
        lstrcatA(String, String2); /*0x4c8d71*/
      }
      ++v34; /*0x4c8d77*/
      --v52; /*0x4c8d7d*/
    }
    while ( v52 ); /*0x4c8d81*/
    lstrcatA(String, asc_821DD0); /*0x4c8d8d*/
    v35 = lstrlenA(::Buffer); /*0x4c8d9e*/
    if ( lstrlenA(String) + v35 < 0xFFFF ) /*0x4c8dab*/
      lstrcatA(::Buffer, String); /*0x4c8db7*/
    Debug::Log(); /*0x4c8dc2*/
    v36 = lstrlenA(aStackDumpIndic); /*0x4c8dd1*/
    if ( lstrlenA(::Buffer) + v36 < 0xFFFF ) /*0x4c8de2*/
      lstrcatA(::Buffer, aStackDumpIndic); /*0x4c8dee*/
    v37 = *(FARPROC **)(*(unsigned int *)&v6 + 196); /*0x4c8df4*/
    v38 = (void (__stdcall *)(LPSTR, LPCSTR))lstrcatA; /*0x4c8dfa*/
    v52 = 1024; /*0x4c8e00*/
    do
    {
      if ( IsBadReadPtr(v37, 4u) )
      {
        wsprintfA(String, "%08X: ", v37);
        v38(String, asc_821D78); /*0x4c8e2f*/
      }
      else
      {
        v39 = !IsBadCodePtr(*v37); /*0x4c8e3d*/
        v50 = *v37; /*0x4c8e41*/
        if ( v39 )
        {
          wsprintfA(String, "%08X: %08X", v37, v50);
          if ( v54 ) /*0x4c8e78*/
          {
            v62[0] = 256; /*0x4c8e83*/
            v62[4] = 128; /*0x4c8e8e*/
            v62[2] = 0; /*0x4c8e99*/
            v62[1] = *v37; /*0x4c8ea8*/
            if ( dword_8B3A8C ) /*0x4c8eaf*/
            {
              v47 = *v37; /*0x4c8ec0*/
              v40 = GetCurrentProcess(); /*0x4c8ec1*/
              if ( dword_8B3A8C(v40, v47, &v53, v62) ) /*0x4c8ec8*/
              {
                wsprintfA(Filename, " - %s + %08X", (const char *)&v62[5], v53); /*0x4c8eec*/
                v38(String, Filename); /*0x4c8efe*/
              }
            }
          }
          else
          {
            v38(String, asc_821D40); /*0x4c8f0a*/
          }
          v38(String, ::String2); /*0x4c8f16*/
        }
        else
        {
          wsprintfA(String, "%08X: %08X ", v37, v50);
          v38(String, aDataPtr); /*0x4c8e5e*/
        }
      }
      v41 = lstrlenA(::Buffer); /*0x4c8f23*/
      if ( lstrlenA(String) + v41 >= 0xFFFF ) /*0x4c8f30*/
      {
        v38 = (void (__stdcall *)(LPSTR, LPCSTR))lstrcatA; /*0x4c8f46*/
      }
      else
      {
        v38 = (void (__stdcall *)(LPSTR, LPCSTR))lstrcatA; /*0x4c8f32*/
        lstrcatA(::Buffer, String); /*0x4c8f42*/
      }
      ++v37; /*0x4c8f50*/
      --v52; /*0x4c8f54*/
    }
    while ( v52 );
    if ( v54 ) /*0x4c8f64*/
    {
      if ( dword_8B3A88 ) /*0x4c8f6d*/
      {
        v42 = GetCurrentProcess(); /*0x4c8f6f*/
        dword_8B3A88(v42); /*0x4c8f76*/
      }
      if ( v57 && dword_8B3A9C ) /*0x4c8f8b*/
      {
        v43 = GetCurrentProcess(); /*0x4c8f8f*/
        dword_8B3A9C(v43, 0); /*0x4c8f96*/
      }
    }
    if ( hLibModule ) /*0x4c8fa2*/
      FreeLibrary(hLibModule); /*0x4c8fa5*/
    v44 = lstrlenA(asc_821DD0); /*0x4c8fb2*/
    result = lstrlenA(::Buffer); /*0x4c8fb9*/
    if ( result + v44 < 0xFFFF ) /*0x4c8fc3*/
      return (int)((LPSTR (__stdcall *)(LPSTR, LPCSTR))v38)(::Buffer, asc_821DD0); /*0x4c8fcf*/
    return result; /*0x4c8fd1*/
}
// 0x434110
void Field::Int_Set(int aP1)
{
}
// 0x420270
void FractalNoise::Release(CCINIClass * aP0)
{
}
// 0x41c430
void Function::Method_41C430()
{
}
// 0x424ca0
void Function::Method_424CA0(int a2)
{
}
// 0x46b260
void Function::Method_46B260( int a2)
{
}
// 0x4b4d60
int Function::Method_4B4D60()
{
  int result; // eax

  result = *(unsigned int *)((unsigned char *)(this) + 0x0); /*0x4b4d60*/
  if ( *(unsigned int *)((unsigned char *)(this) + 0x0) ) /*0x4b4d60*/
    return (*(int (**)(int))(*(unsigned int *)result + 8))(result); /*0x4b4d69*/
  return result; /*0x4b4d6c*/
}
// 0x6342d0
void Function::Method_6342D0( int a2)
{
}
// 0x4e5ac0
wchar_t * GDlg::LoadLetterStrings()  // G42 sig-sync: returns CSF string ptr
{
  wchar_t *result; // eax

  dword_8B3FC0 = (int)GetStringCSF((wchar_t *)L"A", 0, g_Str_File_GDlgSupp_cpp, 1079); /*0x4e5ae7*/
  dword_8B3FCC = (int)GetStringCSF((wchar_t *)L"B", 0, g_Str_File_GDlgSupp_cpp, 1080); /*0x4e5b02*/
  dword_8B3FD8 = (int)GetStringCSF((wchar_t *)L"C", 0, g_Str_File_GDlgSupp_cpp, 1081); /*0x4e5b1d*/
  result = (wchar_t *)GetStringCSF((wchar_t *)L"D", 0, g_Str_File_GDlgSupp_cpp, 1082); /*0x4e5b22*/
  dword_8B3FE4 = (int)result; /*0x4e5b27*/
  dword_8B3FF0 = (int)a0_0; /*0x4e5b2c*/
  return result; /*0x4e5b36*/
}
// 0x4e2580
int GaugeClass::SetValue( int a2)
{
    if ( a2 == *((unsigned int *)this + 12) ) /*0x4e2589*/
      return 0; /*0x4e259b*/
    *((unsigned int *)this + 12) = a2; /*0x4e258b*/
    (*(void (__thiscall **)(GaugeClass *))(*(unsigned int *)this->__pad_0 + 72))(this); /*0x4e2590*/
    return 1; /*0x4e2598*/
}
// 0x4e25a0
void GaugeClass::GetValue( SliderClass * aP1)
{
}
// 0x4e25d0
void GaugeClass::GetRange( int a2)
{
}
// 0x4e2650
void GaugeClass::SetColor( int a2)
{
}
// 0x4e29a0
void GaugeClass::SetRange()
{
}
// 0x40cc10
void GenericVector::StubReturnFalse()
{
}
// 0x40ce50
void GenericVector::Resize( int a2, unsigned int * a3)
{
}
// 0x50ea90
void GenericVector::Resize2( int a2, unsigned int * a3)
{
}
// 0x422b20
int GlobalArray::FindString()
{
    int v2; // esi

    if ( !this ) /*0x422b26*/
      return -1; /*0x422b26*/
    if ( !_strcmpi((char *)this, g_Str__none_) ) /*0x422b2e*/
      return -1; /*0x422b2e*/
    v2 = 0; /*0x422b3f*/
    if ( *(unsigned int *)((char *)&FootClass_Array + 889) <= 0 ) /*0x422b43*/
      return -1; /*0x422b68*/
    while ( _strcmpi((char *)(*(unsigned int *)(FootClass_Array.?[3] + 4 * v2) + 36), (char *)this) ) /*0x422b5c*/
    {
      if ( ++v2 >= FootClass_Array.?[0] ) /*0x422b66*/
        return -1; /*0x422b66*/
    }
    return v2; /*0x422b68*/
}
// 0x5f7640
void GlobalInit::RegisterSingleton(int a1)
{
}
// 0x71de40
void GlobalInit::SingletonGetter( int a2)
{
}
// 0x61e700
void GroupLabel::WndProc()
{
}
// 0x759540
void HVAAnimation::LoadFromFile( int a2)
{
}
// 0x759670
void HVAAnimation::ParseFrames( int a2, void * a3, unsigned int a4)
{
}
// 0x5ad870
void Heap::SiftDown( int a2)
{
}
// 0x5654a0
void HexCoord::Convert( IUnknown * aP1, IUnknown * aP2)
{
}
// 0x767c10
void History_WorldDominationTour::QueryInterface( char a2)
{
}
// 0x4016f0
void IDXContainer::LoadSample(int a1, int a2)
{
}
// 0x49e8e0
int INISectionList::Constructor()
{
    unsigned int *result; // eax
    INISectionList *v2; // edx
    int v3; // ebx
    int v4; // edi
    int v5; // edi
    int v6; // edi

    result = this; /*0x49e8e0*/
    v2 = this + 4; /*0x49e8e9*/
    *((unsigned int *)this + 2) = 0; /*0x49e8ef*/
    *((unsigned int *)this + 3) = 0; /*0x49e8f2*/
    *((unsigned int *)this + 1) = &GenericNode::`vftable'; /*0x49e8f5*/
    *((unsigned int *)this + 5) = 0; /*0x49e8fb*/
    *((unsigned int *)this + 6) = 0; /*0x49e8fe*/
    *((unsigned int *)this + 4) = &GenericNode::`vftable'; /*0x49e901*/
    *this = (INISectionList)&GenericList::`vftable'; /*0x49e907*/
    if ( this != (INISectionList *)-16 ) /*0x49e90d*/
    {
      v3 = *((unsigned int *)this + 5); /*0x49e90f*/
      if ( v3 ) /*0x49e914*/
      {
        v4 = *((unsigned int *)this + 6); /*0x49e916*/
        if ( v4 ) /*0x49e91b*/
        {
          *(unsigned int *)(v4 + 4) = v3; /*0x49e91d*/
          *(INISectionList *)(*((unsigned int *)this + 5) + 8) = *(this + 6); /*0x49e926*/
          *((unsigned int *)this + 6) = 0; /*0x49e929*/
          *((unsigned int *)this + 5) = 0; /*0x49e92c*/
        }
      }
    }
    v5 = *((unsigned int *)this + 2); /*0x49e92f*/
    *((unsigned int *)this + 6) = this + 1; /*0x49e932*/
    *((unsigned int *)this + 5) = v5; /*0x49e935*/
    v6 = *((unsigned int *)this + 2); /*0x49e938*/
    if ( v6 ) /*0x49e93d*/
      *(unsigned int *)(v6 + 8) = v2; /*0x49e93f*/
    *((unsigned int *)this + 2) = v2; /*0x49e942*/
    *this = (INISectionList)&List<INIClass::INISection *>::`vftable'; /*0x49e947*/
    return result; /*0x49e945*/
}
// 0x7c89f2
void ImageList::DragEnter(HWND hwndLock, int x, int y)
{
}
// 0x7c89f8
void ImageList::BeginDrag(HIMAGELIST himlTrack, int iTrack, int dxHotspot, int dyHotspot)
{
}
// 0x7c89fe
void ImageList::Destroy(HIMAGELIST himl)
{
}
// 0x7c8a04
void ImageList::EndDrag()
{
}
// 0x7c8a0a
void ImageList::DragMove(int x, int y)
{
}
// 0x645c30
void Int4::Set(int aP1, int aP2, int aP3, int a5)
{
}
// 0x645c50
int Int4::Set2(  // G42 sig-sync: hpp anchor declares int
 int a2, int a3, int a4, int a5)
{
}
// 0x517310
void Int64::Equal( IUnknown * aP1)
{
}
// 0x477b10
void IntDynamicVector::QueryInterface(unsigned int * Block, char a2)
{
}
// 0x717bd0
void IntDynamicVector::Construct( ObjectTypeClass * aP1)
{
}
// 0x477b60
void IntVector::Copy( void * aP1)  // G42: VectorClass->void* (template needs args)
{
}
// 0x49f9d0
void IntVector::Destructor()
{
}
// 0x69adf0
void IsRandMap::Sed()
{
}
// 0x69ae70
int IsRandMap::Sed2()
{
  return _strcmpi((char *)this + 1704, (const char *)&stru_82BA00) == 0; /*0x69ae89*/
}
// 0x52aec0
void KeyValuePair::Init( INIClass * aP1)
{
}
// 0x41cef0
void KeywordClass::FindOrCreate(ObjectClass * Source)
{
}
// 0x524cb0
void KeywordType::FindOrCreate2(ObjectClass * Source)
{
}
// 0x5520a0
void LCW::Compress( BombClass * aP1, signed int Size)
{
}
// 0x552490
void LCW::DecompressReader( BombClass * aP1, signed int Size)
{
}
// 0x55c7c0
void LCW::Decompress( CCINIClass * aP1, signed int Size)
{
}
// 0x551ff0
void LCWPipe::Constructor( int a2, int a3)
{
}
void LCWPipe::Destructor()
{
}

// 0x5522d0
void LCWPipe_Destru::AddRef()
{
}
// 0x552390
void LCWPipe_Destru::QueryInterface(int * Block, char a2)
{
}
// 0x5523e0
void LCWStraw::Constructor( int a2, int a3)
{
}
void LCWStraw::Destructor()
{
}

// 0x5525f0
void LCWStraw_Destru::QueryInterface(int * Block, char a2)
{
}
// 0x55c2b0
void LZOPipe::Constructor( int a2, TechnoTypeClass * aP2)
{
}
// 0x55c310
void LZOPipe::Destructor()
{
}
// 0x55c5e0
void LZOPipe_Destru::AddRef()
{
}
// 0x55c6d0
void LZOPipe_Destru::QueryInterface(int * Block, char a2)
{
}
// 0x55c720
void LZOStraw::Constructor( int a2, int a3)
{
}
// 0x55c780
void LZOStraw::Destructor()
{
}
// 0x55c990
void LZOStraw_Destru::QueryInterface(int * Block, char a2)
{
}
// 0x46fa20
void Lobby::UpdateReadyIcons(HWND hDlg)
{
}
// 0x46fac0
void Lobby::SetupAllFactionSlots()
{
}
// 0x46fb50
void Lobby::EnableStartButton(HWND hDlg)
{
}
// 0x4e4820
void Lobby::FillPlayerFactions(HWND hDlg)
{
}
// 0x4e5310
void Lobby::InvalidateFactionCombos(HWND hDlg)
{
}
// 0x4a8d50
int MIXClass::CopyHeader( IUnknown * aP1)
{
    int result; // eax
    __int16 v4; // cx
    const void *v5; // esi
    bool v6; // zf
    int v7; // eax
    __int16 v8; // cx
    unsigned short v9[4]; // [esp+8h] [ebp-8h] BYREF

    result = *(this + 1123); /*0x4a8d57*/
    if ( result ) /*0x4a8d5f*/
    {
      v4 = *((unsigned short *)this + 2242) + *((unsigned short *)this + 2244); /*0x4a8d76*/
      v9[0] = *((unsigned short *)this + 2241) + *((unsigned short *)this + 2243); /*0x4a8d7f*/
      v9[1] = v4; /*0x4a8d84*/
      result = BuildingClass::MarkExitPath((BuildingClass *)this, v9, 0); /*0x4a8d98*/
    }
    v5 = a2; /*0x4a8d9d*/
    v6 = a2 == 0; /*0x4a8da7*/
    *(int *)((char *)this + 4486) = *(unsigned int *)&stru_8A0390.bombVisible; /*0x4a8da9*/
    if ( v6 ) /*0x4a8daf*/
    {
      *(this + 1123) = 0; /*0x4a8e7f*/
    }
    else
    {
      if ( (byte_8A0619 & 1) == 0 ) /*0x4a8dbc*/
      {
        byte_8A0619 |= 1u; /*0x4a8dc8*/
        atexit(nullsub_11); /*0x4a8dce*/
      }
      qmemcpy(word_8A0298, v5, sizeof(word_8A0298)); /*0x4a8de5*/
      *(this + 1123) = (int)word_8A0298; /*0x4a8def*/
      v7 = *CoordList::GetBounds(&a2, word_8A0298); /*0x4a8dfe*/
      v9[0] = v7 - 1; /*0x4a8e06*/
      v9[1] = IDA_HIWORD(v7) - 1; /*0x4a8e0b*/
      IDA_LOWORD(a2) = (__int16)(1 - v7) / 2; /*0x4a8e24*/
      IDA_HIWORD(a2) = (__int16)(1 - IDA_HIWORD(v7)) / 2; /*0x4a8e31*/
      v8 = (__int16)a2; /*0x4a8e36*/
      *(int *)((char *)this + 4486) = (int)a2; /*0x4a8e3a*/
      IDA_LOWORD(v7) = *((unsigned short *)this + 2244) + *((unsigned short *)this + 2242); /*0x4a8e4e*/
      IDA_LOWORD(a2) = v8 + *((unsigned short *)this + 2241); /*0x4a8e58*/
      IDA_HIWORD(a2) = v7; /*0x4a8e5d*/
      return BuildingClass::MarkExitPath((BuildingClass *)this, &a2, (unsigned short *)1); /*0x4a8e71*/
    }
    return result; /*0x4a8e77*/
}
// 0x5c9470
wchar_t ** MPCombatTeam::Constructor()
{
    wchar_t *StringCSF; // eax
    wchar_t *v4; // [esp+4h] [ebp-4h] BYREF

    StringCSF = GetStringCSF(aMpObserverteam, 0, aDRa2mdpostMpob, 5); /*0x5c9482*/
    WideString::Assign(&v4, StringCSF); /*0x5c948c*/
    MultiplayerTeam::Constructor((MultiplayerTeam *)this, (const wchar_t **)&v4, (wchar_t *)0xFFFFFFFF); /*0x5c949a*/
    DeleteAndZero::Alt((DeleteAndZero *)&v4); /*0x5c94a3*/
    *(unsigned int *)this->__pad_0 = &MultiplayerObserverTeam::`vftable'; /*0x5c94a8*/
    return (wchar_t **)this; /*0x5c94b0*/
}
// 0x5cae10
void MPCombatTeam::MPTeam()
{
}
// 0x5caeb0
void MPCombatTeam::Constructor2()
{
}
// 0x5d8d10
LRESULT MPCombatTeam::AddToList( MultiplayerGameMode * aP1)
{
    wchar_t *v3; // eax
    LRESULT v4; // edi

    v3 = WideString::GetOrEmpty_Alt((wchar_t **)(this + 4)); /*0x5d8d19*/
    v4 = SendMessageA(hWnd, 0x143u, 0, (LPARAM)v3); /*0x5d8d33*/
    SendMessageA(hWnd, 0x151u, v4, *(unsigned int *)(this + 8)); /*0x5d8d40*/
    return v4; /*0x5d8d44*/
}
// 0x5c9b10
void MPScore::DlgProc()
{
}
// 0x5cb840
void MSAnim::GetField( unsigned int a2)
{
    int v2; // eax
    int result; // eax

    v2 = *((unsigned int *)this + 7); /*0x5cb844*/
    *((unsigned int *)this + 11) = a2; /*0x5cb847*/
    result = *(__int16 *)(v2 + 6); /*0x5cb84a*/
    if ( a2 >= result ) /*0x5cb850*/
      *((unsigned int *)this + 11) = --result; /*0x5cb853*/
    return result; /*0x5cb856*/
}
// 0x5cb860
void MSAnim::SetField( unsigned int a2)
{
}
// 0x5cc6a0
void MSAnim::Reset( int a2)
{
}
// 0x5cc850
void MSBinkAnim::Pause( unsigned int * a2)
{
}
// 0x5cc880
int MSBinkAnim::Stop()
{
    BinkMovieHandle *v1; // ecx

    v1 = (BinkMovieHandle *)*((unsigned int *)this + 7); /*0x5cc880*/
    return !v1 || (unsigned __int8)BinkMovie::IsAtEnd(v1); /*0x5cc892*/
}
// 0x5cc8a0
int MSBinkAnim::Load( int a2, unsigned int * a3)
{
    int v3; // ebp
    BinkMovieHandle *v6; // ecx
    unsigned int *v7; // edx
    int v8; // eax
    int i; // edi
    int v10; // ecx

    v3 = a2; /*0x5cc8a1*/
    if ( !a2 ) /*0x5cc8aa*/
      return 0; /*0x5cc8ad*/
    v6 = (BinkMovieHandle *)*((unsigned int *)this + 7); /*0x5cc8b3*/
    if ( !v6 ) /*0x5cc8b8*/
      return 1; /*0x5cc8bb*/
    if ( !(unsigned __int8)BinkMovie::IsAtEnd(v6) && BinkMovie::RenderFrameToSurface(*((BinkMovieHandle **)this + 7)) ) /*0x5cc8cd*/
    {
      (*(void (__thiscall **)(MSBinkAnim *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 20))(this, v3, 0); /*0x5cc8df*/
      v7 = a3; /*0x5cc8e2*/
      a2 = (int)this; /*0x5cc8eb*/
      *a3 = *((unsigned int *)this + 9); /*0x5cc8f1*/
      v7[1] = *((unsigned int *)this + 10); /*0x5cc8f6*/
      v7[2] = *((unsigned int *)this + 11); /*0x5cc8fc*/
      v7[3] = *((unsigned int *)this + 12); /*0x5cc907*/
      a2 = (*(int (__thiscall **)(unsigned int, int *))(**((unsigned int **)this + 13) + 16))(*((unsigned int *)this + 13), &a2); /*0x5cc912*/
      v8 = *((unsigned int *)this + 13); /*0x5cc916*/
      for ( i = 0; i < *(unsigned int *)(v8 + 16); ++i ) /*0x5cc920*/
      {
        if ( i != a2 ) /*0x5cc926*/
        {
          v10 = *(unsigned int *)(*(unsigned int *)(v8 + 4) + 4 * i); /*0x5cc92d*/
          (*(void (__thiscall **)(int, int, char *))(*(unsigned int *)v10 + 20))(v10, v3, (char *)this + 36); /*0x5cc932*/
        }
        v8 = *((unsigned int *)this + 13); /*0x5cc935*/
      }
    }
    return (unsigned __int8)BinkMovie::IsAtEnd(*((BinkMovieHandle **)this + 7)) && !*((unsigned char *)this + 56); /*0x5cc8ac*/
}
// 0x5cc970
void MSBinkAnim::Play( int a2, int a3)
{
}
// 0x5cec70
void MSBinkAnim::QueryInterface(BinkMovie ** Block, char a2)
{
}
// 0x5cd330
void MSBitPrintAnim::Construct( const wchar_t ** a1, MSAnim * aP2, MPCooperative * aP3)
{
}
// 0x5cd3d0
void MSBitPrintAnim::Update( unsigned int * a2)
{
}
// 0x5cd400
void MSBitPrintAnim::Stub()
{
}
// 0x5cd410
void MSBitPrintAnim::SetText( int a2, unsigned int * a3)
{
}
// 0x5cd4d0
void MSBitPrintAnim::Draw( int a2, int * a3)
{
}
// 0x5cf8e0
void MSChoiceClass::LoadFromINI(unsigned int *arg0, const char **aP2)
{
}
// 0x5d0290
void MSChoiceClass::DeleteAndZero( ObjectClass * aP1)
{
}
// 0x5ae4c0
void MSEngine_Destru::CheckStringNotEmpty()
{
}
// 0x5ae590
void MSEngine_Destru::StubReturnFalse(int a1)
{
}
// 0x5ae5a0
void MSEngine_Destru::DestroyComposite( char a2)
{
}
// 0x5d26f0
void MSEngine_Destru::Release()
{
}
// 0x5d2700
void MSEngine_Destru::QueryInterface(unsigned int * Block, char a2)
{
}
// 0x5d2e30
void MSFont::Constructor_MSFont()
{
}
// 0x5d3170
void MSFont::Release( int16_t * a2)
{
}
// 0x5d31d0
char MSFont::AddRef(uint8_t szSrc)
{
    int v2; // eax
    unsigned int v3[4]; // [esp+4h] [ebp-10h] BYREF

    CharToOemBuffA((LPCSTR)&this, (LPSTR)&this, 1u); /*0x5d31ea*/
    if ( (unsigned char)this == 32 ) /*0x5d31f6*/
      return 8; /*0x5d31f8*/
    if ( (unsigned __int8)this <= 0x20u ) /*0x5d3204*/
      return 0; /*0x5d3243*/
    v2 = (unsigned __int8)this - 33; /*0x5d320f*/
    if ( v2 > 0 ) /*0x5d3214*/
    {
      if ( v2 >= 216 ) /*0x5d321f*/
        v2 = 216; /*0x5d3221*/
    }
    else
    {
      v2 = 0; /*0x5d3216*/
    }
    return Building::GetFoundationSize(v3, 3 * v2 + 2)[2] + 1; /*0x5d31fd*/
}
// 0x5d3250
void MSFont::Create( int * a2, uint8_t szSrc, int a4, int a5, int a6, int a7)
{
    int v8; // eax
    int v9; // esi
    int v10; // edx
    int v11; // eax
    int *v12; // eax
    int v13[2]; // [esp+4h] [ebp-28h] BYREF
    unsigned int v14[4]; // [esp+Ch] [ebp-20h] BYREF
    unsigned char v15[16]; // [esp+1Ch] [ebp-10h] BYREF

    if ( (char)szSrc == 176 ) /*0x5d3266*/
      Debug::Log(); /*0x5d326d*/
    CharToOemBuffA((LPCSTR)&szSrc, (LPSTR)&szSrc, 1u); /*0x5d3281*/
    if ( szSrc > 0x20u ) /*0x5d328c*/
    {
      v8 = szSrc - 33; /*0x5d329b*/
      if ( v8 > 0 ) /*0x5d32a0*/
      {
        if ( v8 >= 216 ) /*0x5d32ab*/
          v8 = 216; /*0x5d32ad*/
      }
      else
      {
        v8 = 0; /*0x5d32a2*/
      }
      v9 = 3 * v8; /*0x5d32b4*/
      v10 = *Building::GetFoundationSize(v14, 3 * v8 + 2); /*0x5d32d1*/
      v11 = *a2; /*0x5d32dc*/
      v13[0] = a4 - v10; /*0x5d32ea*/
      v13[1] = a5; /*0x5d32fc*/
      v12 = (int *)(*(int (__thiscall **)(int *, unsigned char *))(v11 + 120))(a2, v15); /*0x5d3300*/
      DrawToSurfaceSHP( /*0x5d3319*/
        (int)a2,
        *((unsigned int *)this + 6),
        this->MSFont_field_0x14,
        a6 + v9,
        v13,
        v12,
        1024,
        0,
        0,
        0,
        1000,
        0,
        0,
        0,
        0,
        0);
    }
}
// 0x5d3330
short MSFont::ddtor(int a2, unsigned short *a3, int a4, int a5, int a6)
{
    unsigned short *v6; // esi
    int v8; // eax
    int v9; // eax
    int v10; // esi
    int v11; // ecx
    int *v12; // eax
    CHAR szSrc; // [esp+Ah] [ebp-2Eh] BYREF
    CHAR szDst; // [esp+Bh] [ebp-2Dh] BYREF
    int v16; // [esp+Ch] [ebp-2Ch]
    int v17[2]; // [esp+10h] [ebp-28h] BYREF
    unsigned int v18[4]; // [esp+18h] [ebp-20h] BYREF
    unsigned char v19[16]; // [esp+28h] [ebp-10h] BYREF

    IDA_HIWORD(v8) = IDA_HIWORD(a4); /*0x5d3333*/
    v6 = a3; /*0x5d3338*/
    v16 = a4; /*0x5d333c*/
    IDA_LOWORD(v8) = *a3; /*0x5d3343*/
    if ( *a3 ) /*0x5d3343*/
    {
      do /*0x5d3439*/
      {
        if ( (unsigned short)v8 == 10 ) /*0x5d3355*/
        {
          v8 = this->MSFont_field_0x08 + a5; /*0x5d3362*/
          v16 = a4; /*0x5d3364*/
          a5 = v8; /*0x5d3368*/
        }
        else
        {
          if ( (unsigned __int16)v8 > 0x20u ) /*0x5d3375*/
          {
            szSrc = *(unsigned char *)v6; /*0x5d3389*/
            CharToOemBuffA(&szSrc, &szDst, 1u); /*0x5d338d*/
            v9 = szDst - 33; /*0x5d3398*/
            if ( szDst == 33 ) /*0x5d339d*/
            {
              v9 = 0; /*0x5d339f*/
            }
            else if ( v9 >= 216 ) /*0x5d33a8*/
            {
              v9 = 216; /*0x5d33aa*/
            }
            v10 = 3 * v9; /*0x5d33af*/
            v11 = *Building::GetFoundationSize(v18, 3 * v9 + 2); /*0x5d33cb*/
            v17[1] = a5; /*0x5d33e2*/
            v17[0] = v16 - v11; /*0x5d33e7*/
            v12 = (int *)(*(int (__thiscall **)(int, unsigned char *))(*(unsigned int *)a2 + 120))(a2, v19); /*0x5d33fa*/
            v8 = DrawToSurfaceSHP( /*0x5d3413*/
                   a2,
                   *((unsigned int *)this + 6),
                   this->MSFont_field_0x14,
                   a6 + v10,
                   v17,
                   v12,
                   1024,
                   0,
                   0,
                   0,
                   1000,
                   0,
                   0,
                   0,
                   0,
                   0);
            v6 = a3; /*0x5d3418*/
          }
          IDA_LOWORD(v8) = *v6; /*0x5d341c*/
          v8 = (*(int (__thiscall **)(MSFont *, int))(*(unsigned int *)this->__pad_0 + 4))(this, v8); /*0x5d3424*/
          v16 += v8; /*0x5d3427*/
        }
        IDA_LOWORD(v8) = v6[1]; /*0x5d342b*/
        a3 = ++v6; /*0x5d3435*/
      }
      while ( (unsigned short)v8 ); /*0x5d3439*/
    }
    return v8; /*0x5d3441*/
}
// 0x5cb880
int MSOverlayAnim::Load( int a2, int * a3)
{
    int v4; // edi
    int v5; // eax
    int v6; // edi
    int Ticks; // eax
    unsigned int v8; // ecx
    int *FoundationSize; // eax
    int MSShapeAnim_field_0x04; // ebx
    int v11; // ecx
    int v12; // edi
    int v13; // eax
    int v14; // ebp
    unsigned int v15; // ecx
    unsigned int v16; // eax
    int v17; // eax
    int v18; // edx
    int v19; // eax
    int v21; // eax
    int *v22; // eax
    int *v23; // eax
    int v24; // edi
    int v25; // edx
    int v26; // eax
    int v27; // edx
    int v28; // ebx
    int v29; // edi
    int v30; // esi
    int v31; // edx
    int v32; // esi
    int v33; // edi
    int v34; // edx
    int v35; // esi
    int v36; // edi
    int v37; // [esp-20h] [ebp-68h]
    int v38; // [esp+18h] [ebp-30h] BYREF
    int v39; // [esp+1Ch] [ebp-2Ch]
    int v40; // [esp+20h] [ebp-28h]
    int v41; // [esp+28h] [ebp-20h] BYREF
    int v42; // [esp+2Ch] [ebp-1Ch]
    int v43; // [esp+30h] [ebp-18h]
    int v44; // [esp+34h] [ebp-14h]
    unsigned int v45[4]; // [esp+38h] [ebp-10h] BYREF

    if ( *((unsigned char *)this + 12) != 1 ) /*0x5cb88d*/
      goto LABEL_29; /*0x5cb88d*/
    v4 = *((unsigned int *)this + 6); /*0x5cb896*/
    if ( *((unsigned int *)this + 4) == -1 ) /*0x5cb89c*/
    {
  LABEL_5:
      if ( !v4 ) /*0x5cb8b1*/
        goto LABEL_6; /*0x5cb8b1*/
  LABEL_29:
      *a3 = 0; /*0x5cbb5d*/
      a3[1] = 0; /*0x5cbb67*/
      a3[2] = 0; /*0x5cbb6a*/
      a3[3] = 0; /*0x5cbb6d*/
      return 0; /*0x5cbb71*/
    }
    v5 = Timer::GetTicks() - *((unsigned int *)this + 4); /*0x5cb8a6*/
    if ( v5 < v4 ) /*0x5cb8ab*/
    {
      v4 -= v5; /*0x5cb8ad*/
      goto LABEL_5; /*0x5cb8ad*/
    }
  LABEL_6:
    v6 = *((unsigned int *)this + 9); /*0x5cb8b7*/
    Ticks = Timer::GetTicks(); /*0x5cb8be*/
    v8 = *((unsigned int *)this + 10); /*0x5cb8c3*/
    *((unsigned int *)this + 4) = Ticks; /*0x5cb8c6*/
    *((unsigned int *)this + 5) = v39; /*0x5cb8d5*/
    *((unsigned int *)this + 6) = v6; /*0x5cb8d9*/
    FoundationSize = Building::GetFoundationSize(&v38, v8); /*0x5cb8dc*/
    MSShapeAnim_field_0x04 = this->MSShapeAnim_field_0x04; /*0x5cb8e3*/
    v41 = *FoundationSize; /*0x5cb8e6*/
    v11 = MSShapeAnim_field_0x04 + v41; /*0x5cb8ea*/
    v42 = FoundationSize[1]; /*0x5cb8f4*/
    v43 = FoundationSize[2]; /*0x5cb8fb*/
    v12 = *((unsigned int *)this + 2) + v42; /*0x5cb905*/
    v44 = FoundationSize[3]; /*0x5cb907*/
    v13 = *((unsigned int *)this + 14); /*0x5cb90b*/
    v41 += MSShapeAnim_field_0x04; /*0x5cb910*/
    v42 = v12; /*0x5cb914*/
    if ( (v13 & 0x200) != 0 ) /*0x5cb918*/
    {
      v14 = *((unsigned int *)this + 7); /*0x5cb91a*/
      v41 = *(__int16 *)(v14 + 2) / -2 + v11; /*0x5cb92a*/
      v42 = *(__int16 *)(v14 + 4) / -2 + v12; /*0x5cb93b*/
    }
    (*(void (__thiscall **)(int, int *, DSurface *, int *, unsigned int, int))(*(unsigned int *)a2 + 8))( /*0x5cb95c*/
      a2,
      &v41,
      DSurface_Alternate,
      &v41,
      0,
      1);
    v15 = *((unsigned int *)this + 12); /*0x5cb962*/
    v16 = *((unsigned int *)this + 10) + 1; /*0x5cb966*/
    *((unsigned int *)this + 10) = v16; /*0x5cb968*/
    if ( v16 > v15 ) /*0x5cb96d*/
    {
      if ( !*((unsigned char *)this + 52) ) /*0x5cb96f*/
      {
        v17 = v42; /*0x5cb97e*/
        *a3 = v41; /*0x5cb983*/
        v18 = v43; /*0x5cb985*/
        a3[1] = v17; /*0x5cb98b*/
        v19 = v44; /*0x5cb98e*/
        a3[2] = v18; /*0x5cb993*/
        a3[3] = v19; /*0x5cb996*/
        return 1; /*0x5cb99e*/
      }
      *((unsigned int *)this + 10) = *((unsigned int *)this + 11); /*0x5cb9a4*/
    }
    v21 = *((unsigned int *)this + 14); /*0x5cb9b0*/
    v38 = this->MSShapeAnim_field_0x04; /*0x5cb9bc*/
    IDA_BYTE1(v21) |= 4u; /*0x5cb9c4*/
    v37 = v21; /*0x5cb9c8*/
    v39 = *((unsigned int *)this + 2); /*0x5cb9c9*/
    v22 = (int *)(*(int (__thiscall **)(int, unsigned int *))(*(unsigned int *)a2 + 120))(a2, v45); /*0x5cb9d6*/
    DrawToSurfaceSHP( /*0x5cb9ec*/
      a2,
      *((unsigned int *)this + 8),
      *((unsigned int *)this + 7),
      *((unsigned int *)this + 10),
      &v38,
      v22,
      v37,
      0,
      0,
      0,
      1000,
      0,
      0,
      0,
      0,
      0);
    v23 = Building::GetFoundationSize(v45, *((unsigned int *)this + 10)); /*0x5cb9fd*/
    *a3 = *v23; /*0x5cba0a*/
    a3[1] = v23[1]; /*0x5cba0f*/
    a3[2] = v23[2]; /*0x5cba15*/
    a3[3] = v23[3]; /*0x5cba1b*/
    v24 = this->MSShapeAnim_field_0x04 + *a3; /*0x5cba23*/
    v25 = a3[1]; /*0x5cba25*/
    *a3 = v24; /*0x5cba28*/
    a3[1] = *((unsigned int *)this + 2) + v25; /*0x5cba2f*/
    if ( (*(unsigned int *)(this + 7) & 0x200) != 0 ) /*0x5cba37*/
    {
      *a3 = *(__int16 *)(*((unsigned int *)this + 7) + 2) / -2 + v24; /*0x5cba4b*/
      a3[1] += *(__int16 *)(*((unsigned int *)this + 7) + 4) / -2; /*0x5cba60*/
    }
    if ( a3[2] <= 0 || a3[3] <= 0 ) /*0x5cba73*/
    {
      v34 = v42; /*0x5cbb3a*/
      v35 = v43; /*0x5cbb3e*/
      v36 = v44; /*0x5cbb42*/
      *a3 = v41; /*0x5cbb46*/
      a3[1] = v34; /*0x5cbb48*/
      a3[2] = v35; /*0x5cbb4b*/
      a3[3] = v36; /*0x5cbb4e*/
      return 0; /*0x5cbb54*/
    }
    else if ( v43 <= 0 || v44 <= 0 ) /*0x5cba8b*/
    {
      v31 = a3[1]; /*0x5cbb16*/
      v32 = a3[2]; /*0x5cbb19*/
      v33 = a3[3]; /*0x5cbb1c*/
      *a3 = *a3; /*0x5cbb1f*/
      a3[1] = v31; /*0x5cbb21*/
      a3[2] = v32; /*0x5cbb24*/
      a3[3] = v33; /*0x5cbb27*/
      return 0; /*0x5cbb2d*/
    }
    else
    {
      v26 = *a3; /*0x5cba93*/
      v27 = a3[1]; /*0x5cba95*/
      v28 = a3[2]; /*0x5cba98*/
      v40 = v28; /*0x5cba9b*/
      v29 = a3[3]; /*0x5cba9f*/
      if ( v26 > v41 ) /*0x5cbaa8*/
      {
        v28 += v26 - v41; /*0x5cbaac*/
        v26 = v41; /*0x5cbaae*/
        v40 = v28; /*0x5cbab0*/
      }
      if ( v27 > v42 ) /*0x5cbaba*/
      {
        v29 += v27 - v42; /*0x5cbabe*/
        v27 = v42; /*0x5cbac0*/
      }
      if ( v26 + v28 < v41 + v43 ) /*0x5cbacc*/
        v40 = v43 - v26 + v41 + 1; /*0x5cbad8*/
      if ( v29 + v27 < v42 + v44 ) /*0x5cbaeb*/
        v29 = v44 - v27 + v42 + 1; /*0x5cbaf3*/
      v30 = v40; /*0x5cbaf7*/
      *a3 = v26; /*0x5cbafb*/
      a3[1] = v27; /*0x5cbafd*/
      a3[2] = v30; /*0x5cbb00*/
      a3[3] = v29; /*0x5cbb03*/
      return 0; /*0x5cbb09*/
    }
}
// 0x5cbb80
void MSOverlayAnim::Draw( int a2, int * a3)
{
}
// 0x5cbcb0
void MSOverlayAnim::Update( int * a2)
{
}
// 0x5cc250
void MSOverlayAnim::Init( ObjectClass * aP1, int a3, int a4, int a5, int a6, MSShapeAnim * aP6, char a8, int a9, char a10)
{
}
// 0x5ceac0
char MSOverlayAnim::AddRef( char a2)
{
    *((unsigned char *)this + 12) = a2; /*0x5ceac4*/
    return a2; /*0x5ceac7*/
}
// 0x5ce640
void MSPCXAnim::Construct( ObjectClass * aP1, MSAnim * aP2, unsigned int * a3, char a5)
{
}
// 0x5ce7d0
int MSPCXAnim::Load( unsigned int * a2, unsigned int * a3)
{
    int v4; // ecx
    int v5; // ebx
    int v6; // eax
    unsigned int *v7; // ebx
    unsigned int *v8; // ebp
    int v9; // eax
    int v10; // ecx
    int v11; // edx
    int v12; // edi
    int v13; // ebp
    int v14; // eax
    int i; // edi
    int v16; // ecx
    unsigned int v18[4]; // [esp+24h] [ebp-20h] BYREF
    char v19[16]; // [esp+34h] [ebp-10h] BYREF

    if ( !*((unsigned char *)this + 41) ) /*0x5ce7d6*/
    {
      if ( IDA_LOBYTE(this->MSPCXAnim_field_0x0C) ) /*0x5ce7e1*/
      {
        v4 = *((unsigned int *)this + 9); /*0x5ce7ec*/
        if ( v4 ) /*0x5ce7f1*/
        {
          v5 = **((unsigned int **)this + 7); /*0x5ce7fe*/
          v6 = (*(int (__thiscall **)(int, char *, unsigned int, int))(*(unsigned int *)v4 + 120))(v4, v19, 0, 1); /*0x5ce80d*/
          (*(void (__thiscall **)(unsigned int, char *, unsigned int, int))(v5 + 8))( /*0x5ce819*/
            *((unsigned int *)this + 7),
            (char *)this + 44,
            *((unsigned int *)this + 9),
            v6);
          v7 = pad_0; /*0x5ce81c*/
          (*(void (__thiscall **)(MSPCXAnim *, unsigned int *, unsigned int))(*(unsigned int *)this->__pad_0 + 20))(this, pad_0, 0); /*0x5ce827*/
          v8 = a3; /*0x5ce82a*/
          v9 = *((unsigned int *)this + 11); /*0x5ce82e*/
          v10 = *((unsigned int *)this + 12); /*0x5ce830*/
          v11 = *((unsigned int *)this + 13); /*0x5ce833*/
          v12 = *((unsigned int *)this + 14); /*0x5ce836*/
          *a3 = v9; /*0x5ce839*/
          v18[1] = v10; /*0x5ce83c*/
          v18[2] = v11; /*0x5ce840*/
          v8[1] = v10; /*0x5ce844*/
          v18[0] = v9; /*0x5ce847*/
          v18[3] = v12; /*0x5ce84b*/
          pad_0 = this->__pad_0; /*0x5ce84f*/
          v8[2] = v11; /*0x5ce853*/
          v8[3] = v12; /*0x5ce85b*/
          v13 = (*(int (__thiscall **)(unsigned int, unsigned int **))(**((unsigned int **)this + 8) + 16))(*((unsigned int *)this + 8), &pad_0); /*0x5ce866*/
          v14 = *((unsigned int *)this + 8); /*0x5ce868*/
          for ( i = 0; i < *(unsigned int *)(v14 + 16); ++i ) /*0x5ce872*/
          {
            if ( i != v13 ) /*0x5ce876*/
            {
              v16 = *(unsigned int *)(*(unsigned int *)(v14 + 4) + 4 * i); /*0x5ce87b*/
              (*(void (__thiscall **)(int, unsigned int *, unsigned int *))(*(unsigned int *)v16 + 20))(v16, v7, v18); /*0x5ce886*/
            }
            v14 = *((unsigned int *)this + 8); /*0x5ce889*/
          }
        }
        *((unsigned char *)this + 41) = 1; /*0x5ce895*/
      }
      if ( !*((unsigned char *)this + 41) ) /*0x5ce899*/
        return 0; /*0x5ce899*/
    }
    return !*((unsigned char *)this + 40); /*0x5ce8a7*/
}
// 0x5ce8c0
void MSPCXAnim::Draw( int * a2, int * a3)
{
}
// 0x5cea40
void MSPCXAnim::SetPalette( int a2)
{
}
// 0x5cea80
void MSPCXAnim::GetFrame( unsigned int * a2)
{
}
// 0x5cdc50
void MSPrintAnim::SetText( int a2, unsigned int * a3)
{
}
// 0x5cdee0
void MSPrintAnim::Draw( int a2, int * a3)
{
}
// 0x5ce2b0
void MSPrintAnim::Update( unsigned int * a2)
{
}
// 0x5ce300
void MSPrintAnim::Clear()
{
}
// 0x5ced40
void MSPrintAnim::QueryInterface(void ** Block, char a2)
{
}
// 0x76ebe0
void MSSfxClass::FindByName( ObjectClass * aP1)
{
}
// 0x5cb6d0
void MSShapeAnim::Constructor( MSShapeAnim * aP1, MSShapeAnim * aP2, int a4, MSShapeAnim * aP4, int a6, MSShapeAnim * aP6, MSShapeAnim * aP7)
{
}
// 0x5cebd0
void MSShapeAnim::Destruct(unsigned int * Block, char a2)
{
}
// 0x5cca20
void MSVQAnim::Construct( char ** a2, int a3, int a4, unsigned int * a5, char a6)
{
}
// 0x5ccc30
void MSVQAnim::ConstructMSVQAnimHidden(char **aP1, int *aP2, int aP3, char aP3a)
{
}
// 0x5cce90
int MSVQAnim::Load( int a2, unsigned int * a3)
{
    char **MSVQAnim_field_0x1C; // ecx
    char v5; // al
    char v6; // al
    unsigned int *v7; // edi
    int v8; // ebp
    unsigned int *v9; // ecx
    int v10; // eax
    int j; // ebx
    char v12; // al
    int v13; // ecx
    int v14; // ebx
    int v15; // eax
    unsigned int *v16; // eax
    int v17; // ebx
    int v18; // eax
    int k; // edi
    int v20; // ecx
    int v21; // ecx
    int *v22; // eax
    int v23; // ecx
    int v24; // ebx
    unsigned int *v25; // ecx
    int v26; // eax
    int v27; // edx
    int v28; // eax
    int v29; // ebp
    int v30; // eax
    int i; // edi
    int v32; // ecx
    int v34; // [esp+3Eh] [ebp-24h] BYREF
    int v35; // [esp+42h] [ebp-20h] BYREF
    int v36; // [esp+46h] [ebp-1Ch]
    int v37; // [esp+4Ah] [ebp-18h]
    int v38; // [esp+4Eh] [ebp-14h]
    unsigned char v39[16]; // [esp+52h] [ebp-10h] BYREF

    MSVQAnim_field_0x1C = (char **)this->MSVQAnim_field_0x1C; /*0x5cce99*/
    if ( !MSVQAnim_field_0x1C ) /*0x5cce9e*/
    {
      if ( !*((unsigned char *)this + 45) ) /*0x5ccfe9*/
      {
        v21 = *((unsigned int *)this + 10); /*0x5ccff4*/
        if ( v21 ) /*0x5ccff9*/
        {
          v22 = (int *)(*(int (__thiscall **)(int, unsigned char *))(*(unsigned int *)v21 + 120))(v21, v39); /*0x5cd006*/
          v35 = *v22; /*0x5cd00d*/
          v36 = v22[1]; /*0x5cd016*/
          v37 = v22[2]; /*0x5cd01d*/
          v23 = *((unsigned int *)this + 8); /*0x5cd021*/
          v38 = v22[3]; /*0x5cd027*/
          (*(void (__thiscall **)(int, int *, unsigned int, int *, unsigned int, int))(*(unsigned int *)v23 + 8))( /*0x5cd03b*/
            v23,
            &v35,
            *((unsigned int *)this + 10),
            &v35,
            0,
            1);
          v24 = a2; /*0x5cd03e*/
          (*(void (__thiscall **)(MSVQAnim *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 20))(this, a2, 0); /*0x5cd049*/
          v25 = a3; /*0x5cd04c*/
          v26 = v36; /*0x5cd054*/
          a2 = (int)this; /*0x5cd058*/
          *a3 = v35; /*0x5cd05c*/
          v27 = v37; /*0x5cd05e*/
          v25[1] = v26; /*0x5cd062*/
          v28 = v38; /*0x5cd065*/
          v25[2] = v27; /*0x5cd069*/
          v25[3] = v28; /*0x5cd06c*/
          v29 = (*(int (__thiscall **)(unsigned int, int *))(**((unsigned int **)this + 9) + 16))(*((unsigned int *)this + 9), &a2); /*0x5cd07c*/
          v30 = *((unsigned int *)this + 9); /*0x5cd07e*/
          for ( i = 0; i < *(unsigned int *)(v30 + 16); ++i ) /*0x5cd088*/
          {
            if ( i != v29 ) /*0x5cd08c*/
            {
              v32 = *(unsigned int *)(*(unsigned int *)(v30 + 4) + 4 * i); /*0x5cd097*/
              (*(void (__thiscall **)(int, int, int *))(*(unsigned int *)v32 + 20))(v32, v24, &v35); /*0x5cd09c*/
            }
            v30 = *((unsigned int *)this + 9); /*0x5cd09f*/
          }
        }
      }
      *((unsigned char *)this + 45) = 1; /*0x5cd0a8*/
  LABEL_24:
      if ( !*((unsigned char *)this + 45) ) /*0x5cd0b1*/
        return 0; /*0x5cd0b1*/
      return !*((unsigned char *)this + 44); /*0x5cd0b1*/
    }
    v5 = *((unsigned char *)this + 45); /*0x5ccea4*/
    IDA_HIBYTE(v34) = 0; /*0x5ccea7*/
    if ( !v5 ) /*0x5cceae*/
    {
      v6 = Entity_Load(MSVQAnim_field_0x1C, (unsigned char *)&v34 + 3); /*0x5cceb8*/
      v7 = a3; /*0x5ccebd*/
      v8 = a2; /*0x5ccec1*/
      if ( v6 == 1 ) /*0x5ccec7*/
      {
        (*(void (__thiscall **)(MSVQAnim *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 20))(this, a2, 0); /*0x5cced0*/
        v9 = (unsigned int *)(this->MSVQAnim_field_0x1C + 52); /*0x5cced8*/
        a2 = (int)this; /*0x5ccedb*/
        *v7 = *v9; /*0x5ccee1*/
        v7[1] = v9[1]; /*0x5ccee6*/
        v7[2] = v9[2]; /*0x5cceec*/
        v7[3] = v9[3]; /*0x5ccef7*/
        a2 = (*(int (__thiscall **)(unsigned int, int *))(**((unsigned int **)this + 9) + 16))(*((unsigned int *)this + 9), &a2); /*0x5ccf02*/
        v10 = *((unsigned int *)this + 9); /*0x5ccf06*/
        for ( j = 0; j < *(unsigned int *)(v10 + 16); ++j ) /*0x5ccf10*/
        {
          if ( j != a2 ) /*0x5ccf16*/
            (*(void (__thiscall **)(unsigned int, int, int))(**(unsigned int **)(*(unsigned int *)(v10 + 4) + 4 * j) + 20))( /*0x5ccf28*/
              *(unsigned int *)(*(unsigned int *)(v10 + 4) + 4 * j),
              v8,
              this->MSVQAnim_field_0x1C + 52);
          v10 = *((unsigned int *)this + 9); /*0x5ccf2b*/
        }
      }
      v12 = IDA_HIBYTE(v34); /*0x5ccf34*/
      if ( IDA_HIBYTE(v34) == 1 ) /*0x5ccf3a*/
      {
        v13 = *((unsigned int *)this + 10); /*0x5ccf40*/
        if ( !v13 ) /*0x5ccf45*/
        {
  LABEL_16:
          *((unsigned char *)this + 45) = v12; /*0x5ccfe1*/
          goto LABEL_24; /*0x5ccfe4*/
        }
        v14 = **((unsigned int **)this + 8); /*0x5ccf54*/
        v15 = (*(int (__thiscall **)(int, int *, unsigned int, int))(*(unsigned int *)v13 + 120))(v13, &v35, 0, 1); /*0x5ccf5b*/
        (*(void (__thiscall **)(unsigned int, int, unsigned int, int))(v14 + 8))( /*0x5ccf6d*/
          *((unsigned int *)this + 8),
          this->MSVQAnim_field_0x1C + 36,
          *((unsigned int *)this + 10),
          v15);
        (*(void (__thiscall **)(MSVQAnim *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 20))(this, v8, 0); /*0x5ccf77*/
        v16 = (unsigned int *)this->MSVQAnim_field_0x1C; /*0x5ccf7a*/
        a2 = (int)this; /*0x5ccf7d*/
        v16 += 13; /*0x5ccf81*/
        *v7 = *v16; /*0x5ccf86*/
        v7[1] = v16[1]; /*0x5ccf8b*/
        v7[2] = v16[2]; /*0x5ccf91*/
        v7[3] = v16[3]; /*0x5ccf97*/
        v17 = (*(int (__thiscall **)(unsigned int, int *))(**((unsigned int **)this + 9) + 16))(*((unsigned int *)this + 9), &a2); /*0x5ccfa7*/
        v18 = *((unsigned int *)this + 9); /*0x5ccfa9*/
        for ( k = 0; k < *(unsigned int *)(v18 + 16); ++k ) /*0x5ccfb3*/
        {
          if ( k != v17 ) /*0x5ccfb7*/
          {
            v20 = *(unsigned int *)(*(unsigned int *)(v18 + 4) + 4 * k); /*0x5ccfbc*/
            (*(void (__thiscall **)(int, int, int))(*(unsigned int *)v20 + 20))(v20, v8, this->MSVQAnim_field_0x1C + 52); /*0x5ccfc9*/
          }
          v18 = *((unsigned int *)this + 9); /*0x5ccfcc*/
        }
        v12 = IDA_HIBYTE(v34); /*0x5ccfd5*/
      }
      if ( !v12 ) /*0x5ccfdb*/
        goto LABEL_24; /*0x5ccfdb*/
      goto LABEL_16; /*0x5ccfdb*/
    }
    return !*((unsigned char *)this + 44); /*0x5cd0ba*/
}
// 0x5cd0e0
void MSVQAnim::Play( int a2, int * a3)
{
}
// 0x5cd240
void MSVQAnim::Stop( int a2)
{
}
// 0x5c9430
void Megawealth::ProcessTick()
{
}
// 0x5c9440
void Megawealth::QueryInterface(unsigned int * Block, char a2)
{
}
// 0x753c70
unsigned int * Miles::DriverGet()  // G42 sig-sync: returns &dword_B2D928
{
  return &dword_B2D928; /*0x753c75*/
}
// 0x641140
void MiniMap::Render()
{
}
// 0x6418b0
void MiniMap::SavePreviewToINI( char * a2)
{
}
// 0x5c23b0
void MovieClass::ReadConfig(HWND aP1, int nIDDlgItem)
{
}
// 0x5c3ec0
HWND MovieClass::Create()
{
    void *v2; // edi
    MissionClass *v3; // eax
    unsigned int *v4; // eax

    v2 = (void *)*((unsigned int *)this + 16); /*0x5c3ec4*/
    if ( v2 ) /*0x5c3ec9*/
    {
      Array::Cleanup(*((Array **)this + 16)); /*0x5c3ecd*/
      RA2_OPDEL(v2); /*0x5c3ed3*/
    }
    *((unsigned int *)this + 16) = 0; /*0x5c3edd*/
    v3 = (MissionClass *)RA2_OPNEW(0x70u); /*0x5c3ee4*/
    if ( v3 ) /*0x5c3eee*/
      v4 = MissionClass::Init(v3); /*0x5c3ef2*/
    else
      v4 = 0; /*0x5c3ef9*/
    *((unsigned int *)this + 16) = v4; /*0x5c3eff*/
    Movie::SetupScreen((int)v4, 0); /*0x5c3f02*/
    if ( dword_A8DA84 == 2 ) /*0x5c3f0e*/
      String::AssignWideToChar(*((char **)this + 16), (char *)*dword_A8DA78, (char *)dword_A8DA78[1]); /*0x5c3f1f*/
    return *((unsigned int *)this + 16) != 0; /*0x5c3f27*/
}
// 0x759940
void MovieClass::RenderLoop( int a2, char a3)
{
}
// 0x759f70
void MovieClass::GetWidth()
{
}
// 0x759f80
void MovieClass::GetHeight()
{
}
// 0x5bff00
void MovieContext::Cleanup()
{
}
// 0x5ef0b0
void MultiMissionVector::Constructor( int a2, int a3)
{
}
// 0x64dea0
void Multiplay::LogToSYNC_NOMPDEBUG()
{
}

// 0x4cb700
void NetMessage::Pack4(char * Destination, RandomStruct * aP1, int a3)
{
}
// 0x4cb830
void NetMessage::Pack(char * Destination, char * Source, IUnknown * aP2, IUnknown * aP3)
{
}
// 0x43a540
void NeuronClass::Fire(AbstractClass * aP0, int aP1)
{
}
// 0x43a5b0
void NeuronClass::Update(TechnoTypeClass * aP0, int * a1, int aP2)
{
}
// 0x43a9a0
int NeuronClass::StubReturn60()
{
  return 60; /*0x43a9a5*/
}
// 0x43a9b0
int NeuronClass::StubReturn56()
{
  return 56; /*0x43a9b5*/
}
// 0x4f3b10
void NullGuard::Call( ObjectClass * aP1)
{
}
// 0x5d3a40
int ObjectManager::InitMessageList()
{
    // undefined type; truth = .omo/ida_cache/func_0x005D3A40.json)
}
// 0x697840
void ObjectManager::CleanupArrays()
{
}
// 0x481180
void ObjectPlacement::CalcPosition( int * a1, IUnknown * aP2, char a4, char a5, char a6)
{
}
// 0x4aca10
void ObjectPlacement::CalcPosition_Wrapper(MouseClass * aP0, IUnknown * aP1, char a3)
{
}
// 0x6cf240
void ObjectPtr::RegisterForTracking(SwizzleManagerClass * aP0, MouseClass * aP1)
{
}
// 0x40cd10
void ObjectVector::Release( int a2, unsigned int * a3)
{
}
// 0x40cdc0
void ObjectVector::ddtor()
{
}
// 0x40cdf0
void ObjectVector::Add( unsigned int * a2)
{
}
// 0x40ce30
void ObjectVector::Remove( int a2)
{
}
// 0x40cf30
void ObjectVector::QueryInterface(unsigned int * Block, char a2)
{
}
// 0x5d6890
void ObserverClass::FindStartingCell(unsigned int * a1, int a2, int a3, int a4)
{
}
// 0x4f1aa0
void OptionQueue::PushEntry( IUnknown * aP1)
{
}
// 0x71af20
void OreManagerClass::AssignMinerToRefinery( unsigned int * a2)
{
}
// 0x624130
void OwnerDrawControl::InitVtable()
{
}
// 0x633050
void PKStrawClass::Initialize( int a2, Straw * aP2)
{
}
// 0x6330c0
void PKStrawClass::RelayBlowfishKey( int a2)
{
}
// 0x633110
void PKStrawClass::SetSource( int a2)
{
}
// 0x48b570
void PacketQueue::ExtractEntry( void * a2, unsigned int * a3, int a4, void * a5, unsigned int * a6, unsigned short * a7)
{
}
// 0x48b890
void PacketQueue::ReleaseEntry(void *a1, unsigned int *a2, int aP3, void *a4, unsigned int *a5)
{
}
// 0x5355d0
int Performance::Profile()
{
    Performance *v1; // edi
    int result; // eax
    int v3; // edi
    signed int v4; // esi
    int v5; // ebx
    char *Name; // eax
    SIZE_T v7; // esi
    unsigned int v8; // esi
    unsigned int v9; // eax
    int i; // edi
    unsigned int *v11; // eax
    unsigned int *v12; // ecx
    int v13; // edx
    int v14; // eax
    int v15; // ecx
    int v16; // eax
    int v17; // esi
    DWORD Time; // esi
    int v19; // eax
    Performance *v20; // [esp+80h] [ebp-1A4h]
    int v21; // [esp+8Ch] [ebp-198h]
    int v22; // [esp+90h] [ebp-194h]
    int v23; // [esp+94h] [ebp-190h]
    unsigned int v24[2]; // [esp+98h] [ebp-18Ch] BYREF
    int v25; // [esp+A0h] [ebp-184h]
    int v26; // [esp+A4h] [ebp-180h]
    unsigned int v27[4]; // [esp+A8h] [ebp-17Ch] BYREF
    struct _MEMORYSTATUS Buffer; // [esp+B8h] [ebp-16Ch] BYREF
    unsigned char v29[16]; // [esp+D8h] [ebp-14Ch] BYREF
    int v30[15]; // [esp+E8h] [ebp-13Ch] BYREF
    unsigned int v31; // [esp+124h] [ebp-100h]
    unsigned int v32; // [esp+128h] [ebp-FCh]

    result = dword_825C8C; /*0x5355d0*/
    if ( dword_825C8C != -1 ) /*0x5355de*/
      return result; /*0x5355de*/
    v20 = v1; /*0x5355e6*/
    *(unsigned int *)((char *)&stru_A8EB00 + 2196) = 0; /*0x5355e7*/
    *(unsigned int *)((char *)&stru_A8EB00 + 2068) = 0; /*0x5355ee*/
    *(unsigned int *)((char *)&stru_A8EB00 + 2464) = 0; /*0x5355f5*/
    *(unsigned int *)((char *)&stru_A8EB00 + 2336) = 0; /*0x5355fc*/
    *(unsigned int *)((char *)&stru_A8EB00 + 2592) = 0; /*0x535603*/
    v3 = DetectProcessorType(); /*0x53560f*/
    v4 = Performance::MeasureTicks(v20); /*0x535616*/
    v5 = 5; /*0x53561b*/
    v23 = 5; /*0x535623*/
    switch ( v3 ) /*0x535629*/
    {
      case -1: /*0x535629*/
        break;
      case 3: /*0x535629*/
      case 5: /*0x535629*/
        v23 = v4 / 100 + 1; /*0x535643*/
        break; /*0x535647*/
      case 4: /*0x535629*/
      case 7: /*0x535629*/
        v23 = v4 / 100 + 2; /*0x53565c*/
        break; /*0x535660*/
      case 6: /*0x535629*/
        v23 = v4 / 100 + 3; /*0x535675*/
        break; /*0x535679*/
      default:
        v23 = 1; /*0x53567b*/
        break; /*0x53567b*/
    }
    PlayerType::GetName(); /*0x535683*/
    Debug::Log(); /*0x535695*/
    Name = PlayerType::GetName(); /*0x53569d*/
    sprintf(&stru_A8EB00.?[1840], "CPU: %d Mhz %s", v4, Name);
    Buffer.dwLength = 32; /*0x5356ba*/
    GlobalMemoryStatus(&Buffer); /*0x5356c3*/
    v21 = 2; /*0x5356d2*/
    v7 = (Buffer.dwTotalPhys + 655360) >> 20; /*0x5356dc*/
    if ( v7 >= 0x40 ) /*0x5356e2*/
      v21 = 5; /*0x5356e4*/
    if ( v7 >= 0x80 ) /*0x5356ee*/
      v21 += 2; /*0x5356f0*/
    if ( v7 == 256 ) /*0x5356ff*/
    {
      v21 += 2; /*0x535701*/
    }
    else if ( v7 > 0x100 ) /*0x535707*/
    {
      v21 = 10; /*0x535709*/
    }
    Debug::Log(); /*0x535718*/
    sprintf(&stru_A8EB00.?[2236], "RAM reported: %d Mb", v7);
    v8 = 4; /*0x535737*/
    v22 = 5; /*0x53573c*/
    if ( g_lpDirectDraw7 ) /*0x535740*/
    {
      v30[0] = 316; /*0x535746*/
      if ( !g_lpDirectDraw7->lpVtbl->GetCaps(g_lpDirectDraw7, (LPDDCAPS)v30, 0) ) /*0x535754*/
      {
        v9 = v31; /*0x53575b*/
        if ( v31 <= v32 ) /*0x53576b*/
          v9 = v32; /*0x53576d*/
        v8 = (v9 + 0xFFFFF) >> 20; /*0x535775*/
        if ( v8 >= 0x20 ) /*0x53577b*/
        {
          v22 = 10; /*0x53577d*/
          goto LABEL_29; /*0x535781*/
        }
        if ( v8 >= 0x10 ) /*0x535786*/
        {
          v22 = 9; /*0x535788*/
          goto LABEL_29; /*0x535790*/
        }
        if ( v8 >= 8 ) /*0x535795*/
        {
          v22 = 7; /*0x535797*/
          goto LABEL_29; /*0x53579f*/
        }
        if ( v8 < 4 ) /*0x5357a4*/
        {
          if ( v8 <= 2 ) /*0x5357ae*/
            v22 = 3; /*0x5357b0*/
          goto LABEL_29; /*0x5357b0*/
        }
      }
    }
    v22 = 5; /*0x5357a6*/
  LABEL_29:
    Debug::Log(); /*0x5357b8*/
    sprintf(&stru_A8EB00.?[2108], "VRAM reported: %d Mb", v8);
    i = 0; /*0x5357e1*/
    if ( DSurface_Tile && IDA_BYTE1(DSurface_Tile->DSurface_field_0x18) && !IDA_BYTE1(DSurface_Alternate->DSurface_field_0x18) ) /*0x5357fc*/
    {
      v11 = (unsigned int *)(*((int (__stdcall **)(unsigned int *))DSurface_Tile->DSurface_field_0x0 + 30))(v27); /*0x53580e*/
      v24[0] = *v11; /*0x535813*/
      v24[1] = v11[1]; /*0x53581a*/
      v25 = v11[2]; /*0x535821*/
      v26 = v11[3]; /*0x53582e*/
      v12 = (unsigned int *)(*((int (__thiscall **)(DSurface *, unsigned char *))DSurface_Alternate->DSurface_field_0x0 + 30))( /*0x53583c*/
                        DSurface_Alternate,
                        v29);
      v27[0] = *v12; /*0x535840*/
      v13 = v25; /*0x535844*/
      v27[1] = v12[1]; /*0x53584b*/
      v14 = v12[2]; /*0x53584f*/
      v15 = v12[3]; /*0x535854*/
      if ( v25 >= v14 ) /*0x535857*/
      {
        v13 = v14; /*0x535859*/
        v25 = v14; /*0x53585b*/
      }
      v16 = v26; /*0x53585f*/
      if ( v26 >= v15 ) /*0x535865*/
      {
        v16 = v15; /*0x535867*/
        v26 = v15; /*0x535869*/
      }
      if ( v13 >= 480 ) /*0x535873*/
        v25 = 480; /*0x535875*/
      if ( v16 >= 400 ) /*0x535882*/
        v26 = 400; /*0x535884*/
      v17 = 4; /*0x535892*/
      do /*0x5358da*/
      {
        (*((void (__thiscall **)(DSurface *, unsigned int *, DSurface *, unsigned int *, unsigned int, int))DSurface_Tile->DSurface_field_0x0 /*0x5358b3*/
         + 2))(
          DSurface_Tile,
          v24,
          DSurface_Alternate,
          v24,
          0,
          1);
        (*((void (__thiscall **)(DSurface *, unsigned int *, DSurface *, unsigned int *, unsigned int, int))DSurface_Alternate->DSurface_field_0x0 /*0x5358d2*/
         + 2))(
          DSurface_Alternate,
          v24,
          DSurface_Tile,
          v24,
          0,
          1);
        Sleep(0); /*0x5358d7*/
        --v17; /*0x5358d9*/
      }
      while ( v17 ); /*0x5358da*/
      Time = timeGetTime(); /*0x5358e4*/
      if ( (Time & 0xFF000000) != 0xFF ) /*0x5358f4*/
      {
        (*((void (__thiscall **)(DSurface *, unsigned int *, DSurface *, unsigned int *, unsigned int, int))DSurface_Tile->DSurface_field_0x0 /*0x535916*/
         + 2))(
          DSurface_Tile,
          v24,
          DSurface_Alternate,
          v24,
          0,
          1);
        (*((void (__thiscall **)(DSurface *, unsigned int *, DSurface *, unsigned int *, unsigned int, int))DSurface_Alternate->DSurface_field_0x0 /*0x535935*/
         + 2))(
          DSurface_Alternate,
          v24,
          DSurface_Tile,
          v24,
          0,
          1);
        for ( i = 1; timeGetTime() - Time <= 0x3E8; ++i ) /*0x535946*/
        {
          if ( i > 5000 ) /*0x53594e*/
            break; /*0x53594e*/
          (*((void (__thiscall **)(DSurface *, unsigned int *, DSurface *, unsigned int *, unsigned int, int))DSurface_Tile->DSurface_field_0x0 /*0x53596c*/
           + 2))(
            DSurface_Tile,
            v24,
            DSurface_Alternate,
            v24,
            0,
            1);
          (*((void (__thiscall **)(DSurface *, unsigned int *, DSurface *, unsigned int *, unsigned int, int))DSurface_Alternate->DSurface_field_0x0 /*0x53598b*/
           + 2))(
            DSurface_Alternate,
            v24,
            DSurface_Tile,
            v24,
            0,
            1);
        }
        v5 = 1; /*0x53599c*/
        if ( i / 4 >= 1 ) /*0x5359ad*/
          v5 = i / 4; /*0x5359af*/
      }
    }
    Debug::Log(); /*0x5359bb*/
    sprintf(((char *)&stru_A8EB00 + 2592), "%d blits per second\n", 2 * i); /*0x5359cb*/
    v19 = v23; /*0x5359d0*/
    dword_825C8C = v23; /*0x5359dd*/
    if ( v23 >= v21 ) /*0x5359e3*/
    {
      v19 = v21; /*0x5359e5*/
      dword_825C8C = v21; /*0x5359e7*/
    }
    if ( v19 >= v22 ) /*0x5359f2*/
    {
      v19 = v22; /*0x5359f4*/
      dword_825C8C = v22; /*0x5359f6*/
    }
    if ( v19 >= v5 ) /*0x5359fd*/
      dword_825C8C = v5; /*0x535a01*/
    Debug::Log(); /*0x535a0c*/
    sprintf(&stru_A8EB00.?[1968], "Profile: %d\n", dword_825C8C);
    return dword_825C8C; /*0x535a32*/
}
// 0x5cafc0
int Performance::MeasureTicks()
{
    int v1; // esi
    int v2; // ebx
    unsigned int result; // eax
    unsigned __int64 v4; // rax
    unsigned __int64 v5; // rax
    unsigned int v6; // esi
    DWORD v7; // edi
    int v8; // ecx
    unsigned int v9; // ecx
    LARGE_INTEGER Frequency; // [esp+8h] [ebp-34h] BYREF
    LARGE_INTEGER PerformanceCount; // [esp+10h] [ebp-2Ch] BYREF
    LARGE_INTEGER v12; // [esp+18h] [ebp-24h] BYREF
    int v13; // [esp+20h] [ebp-1Ch]
    int v14; // [esp+24h] [ebp-18h]
    int v15; // [esp+28h] [ebp-14h]
    unsigned int v16; // [esp+2Ch] [ebp-10h]
    unsigned int v17; // [esp+30h] [ebp-Ch]
    int v18; // [esp+34h] [ebp-8h]
    int v19; // [esp+38h] [ebp-4h]

    v1 = 0; /*0x5cafcb*/
    v2 = 0; /*0x5cafce*/
    v19 = 0; /*0x5cafd0*/
    v17 = 0; /*0x5cafd3*/
    v16 = 0; /*0x5cafd6*/
    result = QueryPerformanceFrequency(&Frequency); /*0x5cafd9*/
    if ( result ) /*0x5cafe1*/
    {
      while ( 1 ) /*0x5caff6*/
      {
        v15 = v1; /*0x5caff6*/
        ++v19; /*0x5cb000*/
        v18 = v2; /*0x5cb003*/
        QueryPerformanceCounter(&PerformanceCount); /*0x5cb006*/
        v12 = PerformanceCount; /*0x5cb010*/
        do /*0x5cb02c*/
          QueryPerformanceCounter(&v12); /*0x5cb01f*/
        while ( v12.LowPart - PerformanceCount.LowPart < 0x32 ); /*0x5cb02c*/
        v4 = __rdtsc(); /*0x5cb02e*/
        v13 = v4; /*0x5cb030*/
        PerformanceCount = v12; /*0x5cb03b*/
        do /*0x5cb05c*/
          QueryPerformanceCounter(&v12); /*0x5cb04c*/
        while ( v12.LowPart - PerformanceCount.LowPart < 0x3E8 ); /*0x5cb05c*/
        v5 = __rdtsc(); /*0x5cb05e*/
        v14 = v5; /*0x5cb060*/
        v6 = v5 - v13; /*0x5cb06f*/
        v7 = (100000 * v12.LowPart - 100000 * PerformanceCount.LowPart) / (Frequency.LowPart / 0xA); /*0x5cb0b1*/
        v16 += v7; /*0x5cb0ba*/
        v17 += v5 - v13; /*0x5cb0bd*/
        if ( v7 % Frequency.LowPart > Frequency.LowPart >> 1 ) /*0x5cb0ca*/
          ++v7; /*0x5cb0cc*/
        v2 = v6 / v7; /*0x5cb0d5*/
        if ( v6 % v7 > v7 >> 1 ) /*0x5cb0df*/
          ++v2; /*0x5cb0e1*/
        v8 = v2 + v15 + v18; /*0x5cb0ee*/
        if ( v19 >= 3 /*0x5cb137*/
          && (v19 >= 20 || (int)abs32(3 * v2 - v8) <= 3 && (int)abs32(3 * v18 - v8) <= 3 && (int)abs32(3 * v15 - v8) <= 3) )
        {
          break; /*0x5cb137*/
        }
        v1 = v18; /*0x5cafec*/
      }
      v9 = 10 * v17 / v16; /*0x5cb14e*/
      if ( 100 * v17 / v16 - 10 * v9 >= 6 ) /*0x5cb165*/
        ++v9; /*0x5cb167*/
      result = v17 / v16; /*0x5cb16c*/
      if ( v9 - 10 * (v17 / v16) >= 6 ) /*0x5cb179*/
        ++result; /*0x5cb17b*/
    }
    return result; /*0x5cafe3*/
}
// 0x631060
void PhoneEditor::PopulateList()
{
}
// 0x55af60
int PingPongBuffer::GetWriteOffset()
{
    int result; // eax

    if ( byte_ABCD50 ) /*0x55af67*/
    {
      result = dword_829FF4 + dword_829FF8; /*0x55af7a*/
      if ( (unsigned int)dword_ABCD44 >= dword_829FF4 + dword_829FF8 ) /*0x55af7e*/
      {
        byte_ABCD50 = 0; /*0x55af80*/
        return dword_829FF4; /*0x55af87*/
      }
    }
    else
    {
      result = dword_829FF4; /*0x55af8a*/
      if ( (unsigned int)dword_ABCD44 < dword_829FF4 ) /*0x55af97*/
      {
        byte_ABCD50 = 1; /*0x55af9f*/
        return dword_829FF8 + dword_829FF4; /*0x55afa6*/
      }
    }
    return result; /*0x55af89*/
}
// 0x4aec80
void Pipe::QueryInterface(int * Block, char a2)
{
}
// 0x631c80
void Pipe::Dtor()
{
}
// 0x631cc0
void Pipe::SetDelegate( int a2)
{
}
// 0x7b7d80
bool Pipe::GetField()
{
  return wcstol(*(const wchar_t **)((unsigned char *)(this) + 0x0), 0, 10); /*0x7b7d8f*/
}
// 0x63a230
void PlanManager::Notify()
{
}
// 0x63f850
int PowerBar::CalcFill()
{
    int v0; // ecx
    int v1; // ebx
    int v2; // edx
    int *v3; // esi
    int v4; // edi
    int v5; // eax
    int v6; // eax
    int v7; // eax
    int v8; // ecx

    v0 = 0; /*0x63f874*/
    v1 = (dword_B0B504 + 3) / 3; /*0x63f876*/
    v2 = 0; /*0x63f878*/
    if ( *((int *)dword_A83D4C + 30) > 0 ) /*0x63f880*/
    {
      v3 = (int *)*((unsigned int *)dword_A83D4C + 27); /*0x63f882*/
      v4 = *((unsigned int *)dword_A83D4C + 30); /*0x63f887*/
      do /*0x63f8a5*/
      {
        v5 = *v3++; /*0x63f889*/
        v6 = *(unsigned int *)(v5 + 1312); /*0x63f88e*/
        v0 += *(unsigned int *)(v6 + 3812); /*0x63f89a*/
        v2 += *(unsigned int *)(v6 + 3808); /*0x63f8a2*/
        --v4; /*0x63f8a4*/
      }
      while ( v4 ); /*0x63f8a5*/
    }
    v7 = Math::RoundToInt(400.0 / ((double)(v0 + v2) + 400.0) * (double)((dword_B0B504 + 3) / 3)); /*0x63f8c3*/
    v8 = v7 <= 0 ? 0 : v7;
    if ( v8 >= v1 - 1 ) /*0x63f8d7*/
      v8 = v1 - 1; /*0x63f8d9*/
    return v1 - v8; /*0x63f8dd*/
}
// 0x63f960
void PowerBar::ComputeFill(PowerClass * aP0, ObjectClass * aP1, ObjectClass * aP2)
{
}
// 0x641ee0
void PreviewClass::ReadPreview(char *Source)
{
}
// 0x689d30
void PreviewClass::RenderMapPreview( CCINIClass * aP1)
{
}
// 0x5d4400
void PriQueue::GetItemPtr()
{
}
// 0x6d4b50
void PrintTimerOnTactical::Start(int ecx0, int a2, int a3, wchar_t * Format, unsigned int * a5, bool * a6)
{
}
// 0x5ac960
int PriorityQueue::Pop()
{
    int v2; // eax
    int v3; // edi
    int v4; // esi
    int v5; // esi
    int v6; // edx
    int v7; // eax
    int v8; // ebp
    int v9; // esi
    int v10; // [esp+0h] [ebp-4h]

    if ( !*(unsigned int *)this->__pad_0 ) /*0x5ac961*/
      return 0; /*0x5ac96a*/
    v2 = *((unsigned int *)this + 2); /*0x5ac96b*/
    v3 = 1; /*0x5ac970*/
    v4 = *(unsigned int *)(v2 + 4); /*0x5ac978*/
    *(unsigned int *)(v2 + 4) = *(unsigned int *)(v2 + 4 * *(unsigned int *)this->__pad_0); /*0x5ac97b*/
    v10 = v4; /*0x5ac983*/
    *(unsigned int *)(*((unsigned int *)this + 2) + 4 * *(unsigned int *)this->__pad_0) = 0; /*0x5ac987*/
    v5 = *(unsigned int *)this->__pad_0 - 1; /*0x5ac991*/
    *(unsigned int *)this->__pad_0 = v5; /*0x5ac993*/
    if ( v5 < 2 /*0x5ac9b5*/
      || (v6 = 2,
          *(float *)(*(unsigned int *)(*((unsigned int *)this + 2) + 4) + 4) <= (double)*(float *)(*(unsigned int *)(*((unsigned int *)this + 2)
                                                                                                 + 8)
                                                                                     + 4)) )
    {
      v6 = 1; /*0x5ac9b7*/
    }
    if ( v5 >= 3 /*0x5ac9d7*/
      && *(float *)(*(unsigned int *)(*((unsigned int *)this + 2) + 4 * v6) + 4) > (double)*(float *)(*(unsigned int *)(*((unsigned int *)this + 2)
                                                                                                    + 12)
                                                                                        + 4) )
    {
      v6 = 3; /*0x5ac9d9*/
      do /*0x5aca45*/
      {
  LABEL_10:
        v7 = *((unsigned int *)this + 2); /*0x5ac9e7*/
        v8 = 2 * v6 + 1; /*0x5ac9ea*/
        v9 = *(unsigned int *)(v7 + 4 * v3); /*0x5ac9f1*/
        *(unsigned int *)(v7 + 4 * v3) = *(unsigned int *)(v7 + 4 * v6); /*0x5ac9f4*/
        v3 = v6; /*0x5ac9fa*/
        *(unsigned int *)(*((unsigned int *)this + 2) + 4 * v6) = v9; /*0x5ac9fc*/
        if ( 2 * v6 <= *(unsigned int *)this->__pad_0 /*0x5aca21*/
          && *(float *)(*(unsigned int *)(*((unsigned int *)this + 2) + 4 * v6) + 4) > (double)*(float *)(*(unsigned int *)(*((unsigned int *)this + 2) + 8 * v6)
                                                                                            + 4) )
        {
          v6 *= 2; /*0x5aca23*/
        }
        if ( v8 <= *(unsigned int *)this->__pad_0 /*0x5aca3f*/
          && *(float *)(*(unsigned int *)(*((unsigned int *)this + 2) + 4 * v6) + 4) > (double)*(float *)(*(unsigned int *)(*((unsigned int *)this + 2) + 4 * v8)
                                                                                            + 4) )
        {
          v6 = v8; /*0x5aca41*/
        }
      }
      while ( v6 != v3 ); /*0x5aca45*/
      return v10; /*0x5aca45*/
    }
    if ( v6 != 1 ) /*0x5ac9e3*/
      goto LABEL_10; /*0x5ac9e3*/
    return v10; /*0x5ac96a*/
}
// 0x5d1c20
void PriorityQueue::Add(int aP1)
{
}
// 0x4c9ea0
void ProductionClass::StartTimer( char a2)
{
}
// 0x4ca1a0
void ProductionQueue::CompleteOrCancel()
{
}
// 0x659ac0
void ProjectileTrail::ComputeRenderData()
{
}
// 0x433c70
void Property::Set(int16_t aP1)
{
}
// 0x726910
void Property::GetField11()
{
}
// 0x6d09c0
void PushCommandClass::Execute(unsigned int * a1, int a2)
{
}
// 0x4a51f0
void RateScaler::Init( double a2)
{
}
// 0x4737f0
void ReinforcementClass::CreateObject()
{
}
// 0x4cb890
int ResultNode::Init()
{
    int result; // eax

    RA2_OPDEL(*((void **)this + 2)); /*0x4cb897*/
    *((unsigned int *)this + 2) = 0; /*0x4cb89f*/
    return result; /*0x4cb8a6*/
}
// 0x625ab0
void ResultNode::CleanupList()
{
}
// 0x642c20
int SHPClass::Load(char *Source, char *aP2, int aP3)
{
    int result; // eax

    if ( Source ) /*0x642c2a*/
    {
      if ( *(unsigned int *)(this + 84) ) /*0x642c2c*/
      {
        if ( *(unsigned char *)(this + 88) ) /*0x642c33*/
        {
          RA2_OPDEL(*(void **)(this + 84)); /*0x642c3b*/
          *(unsigned char *)(this + 88) = 0; /*0x642c43*/
        }
        *(unsigned int *)(this + 84) = 0; /*0x642c47*/
      }
      result = (int)LoadFileSHP(Source, (bool *)(this + 88)); /*0x642c53*/
      *(unsigned int *)(this + 84) = result; /*0x642c5a*/
      if ( result ) /*0x642c5d*/
      {
        if ( a3 ) /*0x642c65*/
        {
          *(unsigned int *)(this + 92) = a3; /*0x642c69*/
          Render_Load(a3); /*0x642c6c*/
        }
        *(unsigned int *)(this + 116) = a4; /*0x642c75*/
        return a4; /*0x642c71*/
      }
    }
    return result; /*0x642c78*/
}
// 0x5c0eb0
void SafeDelete::Conditional(int a1, int a2, void * Block, int a4, int16_t a5, int a6, int a7)
{
}
// 0x7b7040
int SafeDelete::Ptr()
{
  int result; // eax

  result = *(unsigned int *)((unsigned char *)(this) + 0x0); /*0x7b7043*/
  if ( *(unsigned int *)((unsigned char *)(this) + 0x0) ) /*0x7b7043*/
    RA2_OPDEL(*(void **)((unsigned char *)(this) + 0x0)); /*0x7b704a*/
  *(unsigned int *)((unsigned char *)(this) + 0x0) = 0; /*0x7b7052*/
  return result; /*0x7b7058*/
}
// 0x5ac340
void Scalar::Dtor(void ** Block, char a2)
{
}
// 0x7ad310
void ScalarDtor::DeleteAndZero(void ** Block, char a2)
{
}
// 0x510780
void ScoutVector::Construct( int a2, int a3)
{
}
// 0x660b80
int ScriptActionQueue::PushNext()
{
  int result; // eax

  dword_B04D88 = (dword_B04D88 + 1) % 8; /*0x660b92*/
  result = dword_B04D88; /*0x660b91*/
  ((unsigned int *)&dword_B04D48)[dword_B04D88] = *(unsigned int *)((unsigned char *)(this) + 0x0); /*0x660b99*/
  dword_B04DD8 = result; /*0x660ba0*/
  return result; /*0x660ba5*/
}
// 0x63eb80
void ScriptActionVector::PushBack( DynamicVector * aP1)
{
}
// 0x6378b0
void ScriptQueue::PushEntry()
{
}
// 0x774950
void SerialPort::Close()
{
}
// 0x69de00
void ShapeButton::SetShape(int a2, int a3, int a4)
{
}
// 0x69deb0
void ShapeButton::Draw(int a2)
{
}
// 0x69dcf0
int ShapeButtonClass::Init()
{
    ToggleClass::Construct((int)this, 0, 0, 0, 0, 0); /*0x69dcfb*/
    *((unsigned char *)this + 52) = 0; /*0x69dd00*/
    *((unsigned int *)this + 14) = 0; /*0x69dd03*/
    *((unsigned int *)this + 15) = 0; /*0x69dd06*/
    *((unsigned char *)this + 64) = 0; /*0x69dd09*/
    *((unsigned int *)this + 17) = 0; /*0x69dd0c*/
    *((unsigned int *)this + 18) = 0; /*0x69dd0f*/
    *((unsigned char *)this + 76) = 0; /*0x69dd12*/
    *((unsigned int *)this + 20) = *(unsigned int *)&stru_87F5F0.__pad_58[124]; /*0x69dd1a*/
    *((unsigned char *)this + 85) = 0; /*0x69dd1d*/
    *((unsigned char *)this + 92) = 0; /*0x69dd20*/
    *(unsigned int *)this->__pad_0 = &ShapeButtonClass::`vftable'; /*0x69dd23*/
    return this->__pad_0; /*0x69dd2b*/
}
// 0x69dd30
void ShapeButtonClass::Constructor( ControlClass * aP1, ShapeButtonClass * aP2, ShapeButtonClass * aP3, ControlClass * aP4, int a6, int a7, char a8)
{
}
// 0x69ddc0
void ShapeButtonClass::Destructor()
{
}
// 0x4b57f0
void ShapeButtonClass_Destru::QueryInterface(void * Block, char a2)
{
}
// 0x72fbc0
int Sides::MixFileYuriFiles3()
{
    if ( *((unsigned int *)dword_A8B230 + 3374) == 2 ) /*0x72fbcc*/
    {
      LoadPaletteSimple(off_844BF8, &dword_B0FBEC, &dword_B0FBF0); /*0x72fbde*/
      LoadPaletteSimple(off_844BFC[0], &dword_B0FBF4, &dword_B0FBF8); /*0x72fbf3*/
    }
    else
    {
      LoadPaletteSimple(off_844C00, &dword_B0FBF4, &dword_B0FBF8); /*0x72fc05*/
      LoadPaletteSimple(off_844BF4, &dword_B0FBEC, &dword_B0FBF0); /*0x72fc1a*/
    }
    LoadPaletteSimple(off_844BF0, &dword_B0FBE4, &dword_B0FBE8); /*0x72fc2f*/
    LoadPaletteSimple(off_844C04, &dword_B0FBFC, &dword_B0FC00); /*0x72fc44*/
    return LoadPaletteSimple(off_844C08, &dword_B0FC04, &dword_B0FC08); /*0x72fc5e*/
}
// 0x624110
int SimpleDialogControl::Constructor()
{
    *((unsigned int *)this + 1) = 0; /*0x624114*/
    *((unsigned char *)this + 8) = 0; /*0x624117*/
    *this = (SimpleDialogControl)&OwnerDraw::SimpleDialogControl::`vftable'; /*0x62411a*/
    return this; /*0x624120*/
}
// 0x6b1ab0
void SlaveControlVector::Constructor( int a2, int a3)
{
}
// 0x67c280
void SmudgeTypeList::Copy( CCINIClass * aP1)
{
}
// 0x67aeb0
void SmudgeTypeVector::Release( int a2, unsigned int * a3)
{
}
// 0x67af90
void SmudgeTypeVector::AddSmudge( unsigned int * a2)
{
}
// 0x67afd0
void SmudgeTypeVector::Remove( int a2)
{
}
// 0x67aff0
void SmudgeTypeVector::Construct( int a2, int a3)
{
}
// 0x67b100
void SmudgeTypeVector::Add( CCINIClass * aP1)
{
}
// 0x42d570
void SortedArray::GetIndex( int a2)
{
}
// 0x52b170
void SortedArray::Find( CCINIClass * aP1)
{
}
// 0x52b210
void SortedArray::BinarySearch2( Color * aP1)
{
}
// 0x52b430
void SortedArray::FindValue( INIClass * aP1)
{
}
// 0x52b600
void SortedArray::CheckCache( unsigned int * a2)
{
}
// 0x7107e0
void SortedStateVector::BinarySearch( IUnknown * aP1)
{
}
// 0x55f6e0
void SortedVector::BinarySearch( int * a2)
{
}
// 0x7314c0
int SquadClass::SelectAllMembers()
{
    int result; // eax
    int v3; // edi
    int v4; // esi
    char IsHumanPlayer; // al

    TacticalClass::SetObserverMode(&dword_87F7E8, 0); /*0x7314cb*/
    TacticalClass::SetDisplayMode(&dword_87F7E8, 0, 0); /*0x7314d9*/
    BuildingClass::TogglePower2(&dword_87F7E8, 0); /*0x7314e5*/
    BuildingClass::TogglePower(&dword_87F7E8, 0); /*0x7314f1*/
    MapClass::ToggleZoom((int *)&dword_87F7E8, 0); /*0x7314fd*/
    result = dword_A8EC88; /*0x731502*/
    v3 = 0; /*0x731507*/
    g_MoveFeedback = 1; /*0x73150b*/
    if ( dword_A8EC88 <= 0 ) /*0x731512*/
    {
      g_MoveFeedback = 1; /*0x73158f*/
    }
    else
    {
      do /*0x731581*/
      {
        v4 = *((unsigned int *)dword_A8EC7C + v3); /*0x73151a*/
        if ( v4 && !*(unsigned char *)(v4 + 129) && *(char **)(v4 + 532) == this - 1 ) /*0x731536*/
        {
          if ( dword_A8B238[0] ) /*0x73153f*/
            IsHumanPlayer = House::IsHumanPlayer(*(void **)(v4 + 540)); /*0x731555*/
          else
            IsHumanPlayer = *(unsigned char *)(*(unsigned int *)(v4 + 540) + 493); /*0x731547*/
          if ( IsHumanPlayer ) /*0x73155c*/
          {
            if ( !*(unsigned char *)(v4 + 131) ) /*0x73155e*/
            {
              (*(void (__thiscall **)(int))(*(unsigned int *)v4 + 332))(v4); /*0x73156c*/
              g_MoveFeedback = 0; /*0x731572*/
            }
          }
        }
        result = dword_A8EC88; /*0x731579*/
        ++v3; /*0x73157e*/
      }
      while ( v3 < dword_A8EC88 ); /*0x731581*/
      g_MoveFeedback = 1; /*0x731585*/
    }
    return result; /*0x731584*/
}
// 0x731840
void SquadClass::ProcessMove()
{
}
// 0x4e4230
int StartCombo::IDToIndex()
{
    int v2; // eax

    if ( this == (StartCombo *)1698 ) /*0x4e4237*/
      return 0; /*0x4e4239*/
    if ( this == (StartCombo *)1314 ) /*0x4e4241*/
      return 1; /*0x4e4243*/
    if ( this == (StartCombo *)1315 ) /*0x4e424e*/
      return 2; /*0x4e4250*/
    if ( this == (StartCombo *)1316 ) /*0x4e425b*/
      return 3; /*0x4e425d*/
    if ( this == (StartCombo *)1317 ) /*0x4e4268*/
      return 4; /*0x4e426a*/
    if ( this == (StartCombo *)1318 ) /*0x4e4275*/
      return 5; /*0x4e4277*/
    if ( this == (StartCombo *)1319 ) /*0x4e4282*/
      return 6; /*0x4e4284*/
    v2 = -(this != (StartCombo *)1320); /*0x4e4291*/
    IDA_LOBYTE(v2) = v2 & 0xF8; /*0x4e4293*/
    return v2 + 7; /*0x4e423b*/
}
// 0x510690
void StartingTechnoVector::Construct( int a2, int a3)
{
}
// 0x76f6c0
void State_WorldDominationTour::QueryInterface( char a2)
{
}
// 0x43ae10
void StaticButtonClass::ReleaseBuffer( unsigned int * a2)
{
}
// 0x6c6640
void StaticButtonClass::SetText( ControlClass * aP1)
{
}
// 0x6c6680
void StaticButtonClass::Draw( DropListClass * aP1, char a3)
{
}
// 0x6c6740
void StaticButtonClass::HitTest()
{
}
// 0x6c67f0
void StaticButtonClass::OnClick( size_t a2)
{
}
// 0x7af2a0
int StaticString::Factory()
{
    if ( (stru_B77EB0.customSound_controller[3] & 1) == 0 ) /*0x7af2ad*/
    {
      IDA_LOBYTE(stru_B77EB0.customSound_controller[3]) |= 1u; /*0x7af2b6*/
      String::Assign((String *)&stru_B77EB0.estimatedHealth, off_84D784); /*0x7af2c1*/
      atexit(unknown_libname_64); /*0x7af2cb*/
    }
    if ( (stru_B77EB0.customSound_controller[3] & 2) == 0 ) /*0x7af2dd*/
    {
      IDA_LOBYTE(stru_B77EB0.customSound_controller[3]) |= 2u; /*0x7af2e6*/
      String::Assign((String *)&stru_B77EB0.customSound_controller[2], off_816148); /*0x7af2f1*/
      atexit(unknown_libname_63); /*0x7af2fb*/
    }
    if ( (stru_B77EB0.customSound_controller[3] & 4) == 0 ) /*0x7af30d*/
    {
      IDA_LOBYTE(stru_B77EB0.customSound_controller[3]) |= 4u; /*0x7af316*/
      String::Assign((String *)&stru_B77EB0.needsRedraw, off_84D780); /*0x7af321*/
      atexit(unknown_libname_62); /*0x7af32b*/
    }
    if ( this == (StaticString *)1 ) /*0x7af337*/
      return (char **)&stru_B77EB0.estimatedHealth; /*0x7af381*/
    if ( this == (StaticString *)2 ) /*0x7af33a*/
      return (char **)&stru_B77EB0.customSound_controller[2]; /*0x7af37b*/
    if ( this == (StaticString *)3 ) /*0x7af33d*/
      return (char **)&stru_B77EB0.needsRedraw; /*0x7af375*/
    if ( (stru_B77EB0.customSound_controller[3] & 8) == 0 ) /*0x7af349*/
    {
      IDA_LOBYTE(stru_B77EB0.customSound_controller[3]) |= 8u; /*0x7af352*/
      String::Assign((String *)&stru_B77EB0.ambientSoundController[1], aXx); /*0x7af35d*/
      atexit(unknown_libname_61); /*0x7af367*/
    }
    return (char **)&stru_B77EB0.ambientSoundController[1]; /*0x7af335*/
}
// 0x4aec10
void Straw::QueryInterface(int * Block, char a2)
{
}
// 0x6c9850
void Straw::Dtor()
{
}
// 0x581f90
void Subzone::BuildGraph( IUnknown * aP2)
{
}
// 0x589100
void Subzone::Constructor( int a2, int a3)
{
}
// 0x58a500
void Subzone::CopyDataFrom( int a2)
{
}
// 0x40b070
void SubzoneConnectionVector::Destruct(unsigned int * Block, char a2)
{
}
// 0x588d60
void SubzoneConnectionVector::ClearAndFree()
{
}
// 0x589c10
void SubzoneConnectionVector::FindByCoord( int a2)
{
}
// 0x58b070
void SubzoneHashVector::Construct( int a2, int a3)
{
}
// 0x58a5b0
void SubzoneTrackingVector::Destruct(unsigned int * Block, char a2)
{
}
// 0x55aac0
void SwizzleManager::SaveLoad(int * a1, int * a2)
{
}
// 0x6cf230
void SwizzleManager::ConvertWrapper(SwizzleManagerClass * aP0)
{
}
// 0x6cf0f0
void SwizzleManagerClass::Register()
{
}
// 0x6cf2c0
void SwizzleManagerClass::Here_I_Am(SwizzleManagerClass * aP0, AbstractClass * aP1, AbstractClass * aP2)
{
}
// 0x6cf350
void SwizzleManagerClass::ConvertNodes()
{
}
// 0x6cf410
void SwizzleManagerClass::Clear(int a1, unsigned int * a2)
{
}
// 0x6cf430
void SwizzleManagerClass::Process(SwizzleManagerClass * aP0, const void * a1, unsigned int * a2)
{
}
// 0x6234b0
void SymbolTable::Rebuild( int ** a2)
{
}
// 0x624530
void SymbolTable::Insert( unsigned int * a2, int *** Block)
{
}
// 0x7315a0
void TAction::CenterOnStartCoords()
{
}
// 0x6c5c40
int TClassFactory_AITriggerTypeClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c5c4e*/
}
// 0x6c5c60
int TClassFactory_AITriggerTypeClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c5c70*/
  if ( !v1 ) /*0x6c5c74*/
    RA2_OPDEL((void *)Block); /*0x6c5c77*/
  return v1; /*0x6c5c81*/
}
// 0x6c5c90
int TClassFactory_AITriggerTypeClass::GetClassIdentifier()
{
    AnimTypeClass *v5; // eax
    unsigned int *v6; // eax
    unsigned int *v7; // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c5c98*/
      return -2147024809; /*0x6c5c9b*/
    *v9 = 0; /*0x6c5ca8*/
    if ( a3 ) /*0x6c5cb0*/
      return -2147221232; /*0x6c5cb3*/
    v5 = (AnimTypeClass *)RA2_OPNEW(0x110u); /*0x6c5cc1*/
    if ( !v5 ) /*0x6c5ccb*/
      return -2147024882; /*0x6c5ccb*/
    v6 = AnimTypeClass::Construct2(v5, 0); /*0x6c5cd1*/
    v7 = v6; /*0x6c5cd6*/
    if ( !v6 ) /*0x6c5cda*/
      return -2147024882; /*0x6c5cdd*/
    v8 = (*(int (__stdcall **)(unsigned int *, unsigned int *, unsigned int *))*v6)(v6, a4, v9); /*0x6c5cf1*/
    if ( v8 < 0 ) /*0x6c5cf5*/
      (*(void (__thiscall **)(unsigned int *, int))(*v7 + 32))(v7, 1); /*0x6c5cfd*/
    return v8; /*0x6c5c9a*/
}
// 0x6c5d10
int TClassFactory_AITriggerTypeClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c5d1a*/
    if ( v5 ) /*0x6c5d1d*/
      v3 = v2 + 1; /*0x6c5d1f*/
    else
      v3 = v2 - 1; /*0x6c5d28*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c5d20*/
    return 0; /*0x6c5d25*/
}
// 0x6c36c0
int TClassFactory_AircraftClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c36ce*/
}
// 0x6c36e0
int TClassFactory_AircraftClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c36f0*/
  if ( !v1 ) /*0x6c36f4*/
    RA2_OPDEL((void *)Block); /*0x6c36f7*/
  return v1; /*0x6c3701*/
}
// 0x6c3710
int TClassFactory_AircraftClass::ddtor()
{
    int v5; // eax
    int (__stdcall ***v6)(unsigned int, unsigned int *, unsigned int *); // eax
    int (__stdcall ***v7)(unsigned int, unsigned int *, unsigned int *); // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c3718*/
      return -2147024809; /*0x6c371b*/
    *v9 = 0; /*0x6c3728*/
    if ( a3 ) /*0x6c3730*/
      return -2147221232; /*0x6c3733*/
    v5 = RA2_OPNEW(0x6D8u); /*0x6c3741*/
    if ( !v5 ) /*0x6c374b*/
      return -2147024882; /*0x6c374b*/
    v6 = (int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *))AircraftClass::Construct(v5, (int)v9, 0, 0); /*0x6c3753*/
    v7 = v6; /*0x6c3758*/
    if ( !v6 ) /*0x6c375c*/
      return -2147024882; /*0x6c375f*/
    v8 = (**v6)(v6, a4, v9); /*0x6c3773*/
    if ( v8 < 0 ) /*0x6c3777*/
      ((void (__thiscall *)(int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *), int))(*v7)[8])(v7, 1); /*0x6c377f*/
    return v8; /*0x6c371a*/
}
// 0x6c3790
int TClassFactory_AircraftClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c379a*/
    if ( v5 ) /*0x6c379d*/
      v3 = v2 + 1; /*0x6c379f*/
    else
      v3 = v2 - 1; /*0x6c37a8*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c37a0*/
    return 0; /*0x6c37a5*/
}
// 0x6c2ac0
int TClassFactory_AircraftTypeClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c2ace*/
}
// 0x6c2ae0
int TClassFactory_AircraftTypeClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c2af0*/
  if ( !v1 ) /*0x6c2af4*/
    RA2_OPDEL((void *)Block); /*0x6c2af7*/
  return v1; /*0x6c2b01*/
}
// 0x6c2b10
int TClassFactory_AircraftTypeClass::GetClassIdentifier()
{
    int v5; // eax
    int (__stdcall ***v6)(unsigned int, unsigned int *, unsigned int *); // eax
    int (__stdcall ***v7)(unsigned int, unsigned int *, unsigned int *); // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c2b18*/
      return -2147024809; /*0x6c2b1b*/
    *v9 = 0; /*0x6c2b28*/
    if ( a3 ) /*0x6c2b30*/
      return -2147221232; /*0x6c2b33*/
    v5 = RA2_OPNEW(0xE10u); /*0x6c2b41*/
    if ( !v5 ) /*0x6c2b4b*/
      return -2147024882; /*0x6c2b4b*/
    v6 = (int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *))AircraftTypeClass::AircraftTypeClass(v5, 0); /*0x6c2b51*/
    v7 = v6; /*0x6c2b56*/
    if ( !v6 ) /*0x6c2b5a*/
      return -2147024882; /*0x6c2b5d*/
    v8 = (**v6)(v6, a4, v9); /*0x6c2b71*/
    if ( v8 < 0 ) /*0x6c2b75*/
      ((void (__thiscall *)(int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *), int))(*v7)[8])(v7, 1); /*0x6c2b7d*/
    return v8; /*0x6c2b1a*/
}
// 0x6c2b90
int TClassFactory_AircraftTypeClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c2b9a*/
    if ( v5 ) /*0x6c2b9d*/
      v3 = v2 + 1; /*0x6c2b9f*/
    else
      v3 = v2 - 1; /*0x6c2ba8*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c2ba0*/
    return 0; /*0x6c2ba5*/
}
// 0x6c0840
int TClassFactory_AirstrikeClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c084e*/
}
// 0x6c0860
int TClassFactory_AirstrikeClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c0870*/
  if ( !v1 ) /*0x6c0874*/
    RA2_OPDEL((void *)Block); /*0x6c0877*/
  return v1; /*0x6c0881*/
}
// 0x6c0890
void TClassFactory_AirstrikeClass::ddtor()
{
}
// 0x6c0910
int TClassFactory_AirstrikeClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c091a*/
    if ( v5 ) /*0x6c091d*/
      v3 = v2 + 1; /*0x6c091f*/
    else
      v3 = v2 - 1; /*0x6c0928*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c0920*/
    return 0; /*0x6c0925*/
}
// 0x6c60c0
int TClassFactory_AlphaShapeClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c60ce*/
}
// 0x6c60e0
int TClassFactory_AlphaShapeClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c60f0*/
  if ( !v1 ) /*0x6c60f4*/
    RA2_OPDEL((void *)Block); /*0x6c60f7*/
  return v1; /*0x6c6101*/
}
// 0x6c6110
int TClassFactory_AlphaShapeClass::ddtor()
{
    AlphaShapeClass *v5; // eax
    int (__stdcall ***v6)(unsigned int, unsigned int *, unsigned int *); // eax
    int (__stdcall ***v7)(unsigned int, unsigned int *, unsigned int *); // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c6118*/
      return -2147024809; /*0x6c611b*/
    *v9 = 0; /*0x6c6128*/
    if ( a3 ) /*0x6c6130*/
      return -2147221232; /*0x6c6133*/
    v5 = (AlphaShapeClass *)RA2_OPNEW(0x40u); /*0x6c613e*/
    if ( !v5 ) /*0x6c6148*/
      return -2147024882; /*0x6c6148*/
    v6 = (int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *))AlphaShapeClass::Constructor(v5); /*0x6c614c*/
    v7 = v6; /*0x6c6151*/
    if ( !v6 ) /*0x6c6155*/
      return -2147024882; /*0x6c6158*/
    v8 = (**v6)(v6, a4, v9); /*0x6c616c*/
    if ( v8 < 0 ) /*0x6c6170*/
      ((void (__thiscall *)(int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *), int))(*v7)[8])(v7, 1); /*0x6c6178*/
    return v8; /*0x6c611a*/
}
// 0x6c6190
int TClassFactory_AlphaShapeClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c619a*/
    if ( v5 ) /*0x6c619d*/
      v3 = v2 + 1; /*0x6c619f*/
    else
      v3 = v2 - 1; /*0x6c61a8*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c61a0*/
    return 0; /*0x6c61a5*/
}
// 0x6c3b40
int TClassFactory_AnimTypeClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c3b4e*/
}
// 0x6c3b60
int TClassFactory_AnimTypeClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c3b70*/
  if ( !v1 ) /*0x6c3b74*/
    RA2_OPDEL((void *)Block); /*0x6c3b77*/
  return v1; /*0x6c3b81*/
}
// 0x6c3b90
int TClassFactory_AnimTypeClass::GetClassIdentifier()
{
    AnimTypeClass *v5; // eax
    unsigned int *v6; // eax
    unsigned int *v7; // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c3b98*/
      return -2147024809; /*0x6c3b9b*/
    *v9 = 0; /*0x6c3ba8*/
    if ( a3 ) /*0x6c3bb0*/
      return -2147221232; /*0x6c3bb3*/
    v5 = (AnimTypeClass *)RA2_OPNEW(0x378u); /*0x6c3bc1*/
    if ( !v5 ) /*0x6c3bcb*/
      return -2147024882; /*0x6c3bcb*/
    v6 = AnimTypeClass::Construct(v5, 0); /*0x6c3bd1*/
    v7 = v6; /*0x6c3bd6*/
    if ( !v6 ) /*0x6c3bda*/
      return -2147024882; /*0x6c3bdd*/
    v8 = (*(int (__stdcall **)(unsigned int *, unsigned int *, unsigned int *))*v6)(v6, a4, v9); /*0x6c3bf1*/
    if ( v8 < 0 ) /*0x6c3bf5*/
      (*(void (__thiscall **)(unsigned int *, int))(*v7 + 32))(v7, 1); /*0x6c3bfd*/
    return v8; /*0x6c3b9a*/
}
// 0x6c3c10
int TClassFactory_AnimTypeClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c3c1a*/
    if ( v5 ) /*0x6c3c1d*/
      v3 = v2 + 1; /*0x6c3c1f*/
    else
      v3 = v2 - 1; /*0x6c3c28*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c3c20*/
    return 0; /*0x6c3c25*/
}
// 0x6c1140
int TClassFactory_BombClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c114e*/
}
// 0x6c1160
int TClassFactory_BombClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c1170*/
  if ( !v1 ) /*0x6c1174*/
    RA2_OPDEL((void *)Block); /*0x6c1177*/
  return v1; /*0x6c1181*/
}
// 0x6c1190
int TClassFactory_BombClass::ddtor()
{
    BombClass *v5; // eax
    int (__stdcall ***v6)(unsigned int, unsigned int *, unsigned int *); // eax
    int (__stdcall ***v7)(unsigned int, unsigned int *, unsigned int *); // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c1198*/
      return -2147024809; /*0x6c119b*/
    *v9 = 0; /*0x6c11a8*/
    if ( a3 ) /*0x6c11b0*/
      return -2147221232; /*0x6c11b3*/
    v5 = (BombClass *)RA2_OPNEW(0x5Cu); /*0x6c11be*/
    if ( !v5 ) /*0x6c11c8*/
      return -2147024882; /*0x6c11c8*/
    v6 = (int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *))BombClass::AbstractClass(v5); /*0x6c11cc*/
    v7 = v6; /*0x6c11d1*/
    if ( !v6 ) /*0x6c11d5*/
      return -2147024882; /*0x6c11d8*/
    v8 = (**v6)(v6, a4, v9); /*0x6c11ec*/
    if ( v8 < 0 ) /*0x6c11f0*/
      ((void (__thiscall *)(int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *), int))(*v7)[8])(v7, 1); /*0x6c11f8*/
    return v8; /*0x6c119a*/
}
// 0x6c1210
int TClassFactory_BombClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c121a*/
    if ( v5 ) /*0x6c121d*/
      v3 = v2 + 1; /*0x6c121f*/
    else
      v3 = v2 - 1; /*0x6c1228*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c1220*/
    return 0; /*0x6c1225*/
}
// 0x6c3540
int TClassFactory_BuildingClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c354e*/
}
// 0x6c3560
int TClassFactory_BuildingClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c3570*/
  if ( !v1 ) /*0x6c3574*/
    RA2_OPDEL((void *)Block); /*0x6c3577*/
  return v1; /*0x6c3581*/
}
// 0x6c3590
int TClassFactory_BuildingClass::ddtor()
{
    int v5; // eax
    int (__stdcall ***v6)(unsigned int, unsigned int *, unsigned int *); // eax
    int (__stdcall ***v7)(unsigned int, unsigned int *, unsigned int *); // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c3598*/
      return -2147024809; /*0x6c359b*/
    *v9 = 0; /*0x6c35a8*/
    if ( a3 ) /*0x6c35b0*/
      return -2147221232; /*0x6c35b3*/
    v5 = RA2_OPNEW(0x720u); /*0x6c35c1*/
    if ( !v5 ) /*0x6c35cb*/
      return -2147024882; /*0x6c35cb*/
    v6 = (int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *))BuildingClass::Construct(v5, 0, 0); /*0x6c35d3*/
    v7 = v6; /*0x6c35d8*/
    if ( !v6 ) /*0x6c35dc*/
      return -2147024882; /*0x6c35df*/
    v8 = (**v6)(v6, a4, v9); /*0x6c35f3*/
    if ( v8 < 0 ) /*0x6c35f7*/
      ((void (__thiscall *)(int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *), int))(*v7)[8])(v7, 1); /*0x6c35ff*/
    return v8; /*0x6c359a*/
}
// 0x6c3610
int TClassFactory_BuildingClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c361a*/
    if ( v5 ) /*0x6c361d*/
      v3 = v2 + 1; /*0x6c361f*/
    else
      v3 = v2 - 1; /*0x6c3628*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c3620*/
    return 0; /*0x6c3625*/
}
// 0x6c03c0
int TClassFactory_BuildingLightClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c03ce*/
}
// 0x6c03e0
int TClassFactory_BuildingLightClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c03f0*/
  if ( !v1 ) /*0x6c03f4*/
    RA2_OPDEL((void *)Block); /*0x6c03f7*/
  return v1; /*0x6c0401*/
}
// 0x6c0410
int TClassFactory_BuildingLightClass::ddtor()
{
    double v5; // st7
    int *v7; // eax
    int *v8; // esi
    int v9; // edi
    int v10; // [esp+0h] [ebp-8h]

    if ( !a5 ) /*0x6c0418*/
      return -2147024809; /*0x6c041b*/
    *a5 = 0; /*0x6c0428*/
    if ( a3 ) /*0x6c0430*/
      return -2147221232; /*0x6c0433*/
    if ( !RA2_OPNEW(0xE8u) ) /*0x6c0441*/
      return -2147024882; /*0x6c0441*/
    v7 = BuildingLightClass::CTOR(0, v5, v10); /*0x6c0451*/
    v8 = v7; /*0x6c0456*/
    if ( !v7 ) /*0x6c045a*/
      return -2147024882; /*0x6c045d*/
    v9 = (*(int (__stdcall **)(int *, int, unsigned int *))*v7)(v7, a4, a5); /*0x6c0471*/
    if ( v9 < 0 ) /*0x6c0475*/
      (*(void (__thiscall **)(int *, int))(*v8 + 32))(v8, 1); /*0x6c047d*/
    return v9; /*0x6c041a*/
}
// 0x6c0490
int TClassFactory_BuildingLightClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c049a*/
    if ( v5 ) /*0x6c049d*/
      v3 = v2 + 1; /*0x6c049f*/
    else
      v3 = v2 - 1; /*0x6c04a8*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c04a0*/
    return 0; /*0x6c04a5*/
}
// 0x6c2940
int TClassFactory_BuildingTypeClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c294e*/
}
// 0x6c2960
int TClassFactory_BuildingTypeClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c2970*/
  if ( !v1 ) /*0x6c2974*/
    RA2_OPDEL((void *)Block); /*0x6c2977*/
  return v1; /*0x6c2981*/
}
// 0x6c2990
int TClassFactory_BuildingTypeClass::GetClassIdentifier()
{
    int v5; // eax
    int (__stdcall ***v6)(unsigned int, unsigned int *, unsigned int *); // eax
    int (__stdcall ***v7)(unsigned int, unsigned int *, unsigned int *); // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c2998*/
      return -2147024809; /*0x6c299b*/
    *v9 = 0; /*0x6c29a8*/
    if ( a3 ) /*0x6c29b0*/
      return -2147221232; /*0x6c29b3*/
    v5 = RA2_OPNEW(0x1798u); /*0x6c29c1*/
    if ( !v5 ) /*0x6c29cb*/
      return -2147024882; /*0x6c29cb*/
    v6 = (int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *))BuildingTypeClass::ConstructFull(v5, 0); /*0x6c29d1*/
    v7 = v6; /*0x6c29d6*/
    if ( !v6 ) /*0x6c29da*/
      return -2147024882; /*0x6c29dd*/
    v8 = (**v6)(v6, a4, v9); /*0x6c29f1*/
    if ( v8 < 0 ) /*0x6c29f5*/
      ((void (__thiscall *)(int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *), int))(*v7)[8])(v7, 1); /*0x6c29fd*/
    return v8; /*0x6c299a*/
}
// 0x6c2a10
int TClassFactory_BuildingTypeClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c2a1a*/
    if ( v5 ) /*0x6c2a1d*/
      v3 = v2 + 1; /*0x6c2a1f*/
    else
      v3 = v2 - 1; /*0x6c2a28*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c2a20*/
    return 0; /*0x6c2a25*/
}
// 0x6c2dc0
int TClassFactory_BulletTypeClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c2dce*/
}
// 0x6c2de0
int TClassFactory_BulletTypeClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c2df0*/
  if ( !v1 ) /*0x6c2df4*/
    RA2_OPDEL((void *)Block); /*0x6c2df7*/
  return v1; /*0x6c2e01*/
}
// 0x6c2e10
int TClassFactory_BulletTypeClass::GetClassIdentifier()
{
    BulletTypeClass *v5; // eax
    unsigned char *v6; // eax
    unsigned char *v7; // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c2e18*/
      return -2147024809; /*0x6c2e1b*/
    *v9 = 0; /*0x6c2e28*/
    if ( a3 ) /*0x6c2e30*/
      return -2147221232; /*0x6c2e33*/
    v5 = (BulletTypeClass *)RA2_OPNEW(0x2F8u); /*0x6c2e41*/
    if ( !v5 ) /*0x6c2e4b*/
      return -2147024882; /*0x6c2e4b*/
    v6 = BulletTypeClass::Construct(v5, 0); /*0x6c2e51*/
    v7 = v6; /*0x6c2e56*/
    if ( !v6 ) /*0x6c2e5a*/
      return -2147024882; /*0x6c2e5d*/
    v8 = (**(int (__stdcall ***)(unsigned char *, unsigned int *, unsigned int *))v6)(v6, a4, v9); /*0x6c2e71*/
    if ( v8 < 0 ) /*0x6c2e75*/
      (*(void (__thiscall **)(unsigned char *, int))(*(unsigned int *)v7 + 32))(v7, 1); /*0x6c2e7d*/
    return v8; /*0x6c2e1a*/
}
// 0x6c2e90
int TClassFactory_BulletTypeClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c2e9a*/
    if ( v5 ) /*0x6c2e9d*/
      v3 = v2 + 1; /*0x6c2e9f*/
    else
      v3 = v2 - 1; /*0x6c2ea8*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c2ea0*/
    return 0; /*0x6c2ea5*/
}
// 0x6c0cc0
int TClassFactory_CaptureManagerClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c0cce*/
}
// 0x6c0ce0
int TClassFactory_CaptureManagerClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c0cf0*/
  if ( !v1 ) /*0x6c0cf4*/
    RA2_OPDEL((void *)Block); /*0x6c0cf7*/
  return v1; /*0x6c0d01*/
}
// 0x6c0d10
int TClassFactory_CaptureManagerClass::ddtor()
{
    CaptureManagerClass *v5; // eax
    int (__stdcall ***v6)(unsigned int, unsigned int *, unsigned int *); // eax
    int (__stdcall ***v7)(unsigned int, unsigned int *, unsigned int *); // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c0d18*/
      return -2147024809; /*0x6c0d1b*/
    *v9 = 0; /*0x6c0d28*/
    if ( a3 ) /*0x6c0d30*/
      return -2147221232; /*0x6c0d33*/
    v5 = (CaptureManagerClass *)RA2_OPNEW(0x50u); /*0x6c0d3e*/
    if ( !v5 ) /*0x6c0d48*/
      return -2147024882; /*0x6c0d48*/
    v6 = (int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *))SmallFunc_471890(v5); /*0x6c0d4c*/
    v7 = v6; /*0x6c0d51*/
    if ( !v6 ) /*0x6c0d55*/
      return -2147024882; /*0x6c0d58*/
    v8 = (**v6)(v6, a4, v9); /*0x6c0d6c*/
    if ( v8 < 0 ) /*0x6c0d70*/
      ((void (__thiscall *)(int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *), int))(*v7)[8])(v7, 1); /*0x6c0d78*/
    return v8; /*0x6c0d1a*/
}
// 0x6c0d90
int TClassFactory_CaptureManagerClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c0d9a*/
    if ( v5 ) /*0x6c0d9d*/
      v3 = v2 + 1; /*0x6c0d9f*/
    else
      v3 = v2 - 1; /*0x6c0da8*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c0da0*/
    return 0; /*0x6c0da5*/
}
// 0x6c0e40
int TClassFactory_DiskLaserClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c0e4e*/
}
// 0x6c0e60
int TClassFactory_DiskLaserClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c0e70*/
  if ( !v1 ) /*0x6c0e74*/
    RA2_OPDEL((void *)Block); /*0x6c0e77*/
  return v1; /*0x6c0e81*/
}
// 0x6c0e90
int TClassFactory_DiskLaserClass::ddtor()
{
    DiskLaserClass *v5; // eax
    int (__stdcall ***v6)(unsigned int, unsigned int *, unsigned int *); // eax
    int (__stdcall ***v7)(unsigned int, unsigned int *, unsigned int *); // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c0e98*/
      return -2147024809; /*0x6c0e9b*/
    *v9 = 0; /*0x6c0ea8*/
    if ( a3 ) /*0x6c0eb0*/
      return -2147221232; /*0x6c0eb3*/
    v5 = (DiskLaserClass *)RA2_OPNEW(0x40u); /*0x6c0ebe*/
    if ( !v5 ) /*0x6c0ec8*/
      return -2147024882; /*0x6c0ec8*/
    v6 = (int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *))DiskLaserClass::DiskLaserClass(v5); /*0x6c0ecc*/
    v7 = v6; /*0x6c0ed1*/
    if ( !v6 ) /*0x6c0ed5*/
      return -2147024882; /*0x6c0ed8*/
    v8 = (**v6)(v6, a4, v9); /*0x6c0eec*/
    if ( v8 < 0 ) /*0x6c0ef0*/
      ((void (__thiscall *)(int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *), int))(*v7)[8])(v7, 1); /*0x6c0ef8*/
    return v8; /*0x6c0e9a*/
}
// 0x6c0f10
int TClassFactory_DiskLaserClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c0f1a*/
    if ( v5 ) /*0x6c0f1d*/
      v3 = v2 + 1; /*0x6c0f1f*/
    else
      v3 = v2 - 1; /*0x6c0f28*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c0f20*/
    return 0; /*0x6c0f25*/
}
// 0x6c3fc0
int TClassFactory_DriveLocomotionClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c3fce*/
}
// 0x6c3fe0
int TClassFactory_DriveLocomotionClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c3ff0*/
  if ( !v1 ) /*0x6c3ff4*/
    RA2_OPDEL((void *)Block); /*0x6c3ff7*/
  return v1; /*0x6c4001*/
}
// 0x6c4010
int TClassFactory_DriveLocomotionClass::ddtor()
{
    LocomotionClass *v5; // eax
    int (__stdcall ***v6)(unsigned int, unsigned int *, unsigned int *); // eax
    int (__stdcall ***v7)(unsigned int, unsigned int *, unsigned int *); // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c4018*/
      return -2147024809; /*0x6c401b*/
    *v9 = 0; /*0x6c4028*/
    if ( a3 ) /*0x6c4030*/
      return -2147221232; /*0x6c4033*/
    v5 = (LocomotionClass *)RA2_OPNEW(0x70u); /*0x6c403e*/
    if ( !v5 ) /*0x6c4048*/
      return -2147024882; /*0x6c4048*/
    v6 = (int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *))LocomotionClass::Initialize(v5); /*0x6c404c*/
    v7 = v6; /*0x6c4051*/
    if ( !v6 ) /*0x6c4055*/
      return -2147024882; /*0x6c4058*/
    v8 = (**v6)(v6, a4, v9); /*0x6c406c*/
    if ( v8 < 0 ) /*0x6c4070*/
      ((void (__thiscall *)(int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *), int))(*v7)[8])(v7, 1); /*0x6c4078*/
    return v8; /*0x6c401a*/
}
// 0x6c4090
int TClassFactory_DriveLocomotionClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c409a*/
    if ( v5 ) /*0x6c409d*/
      v3 = v2 + 1; /*0x6c409f*/
    else
      v3 = v2 - 1; /*0x6c40a8*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c40a0*/
    return 0; /*0x6c40a5*/
}
// 0x6c48c0
int TClassFactory_DropPodLocomotionClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c48ce*/
}
// 0x6c48e0
int TClassFactory_DropPodLocomotionClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c48f0*/
  if ( !v1 ) /*0x6c48f4*/
    RA2_OPDEL((void *)Block); /*0x6c48f7*/
  return v1; /*0x6c4901*/
}
// 0x6c4910
int TClassFactory_DropPodLocomotionClass::ddtor()
{
    DropPodLocomotionClass *v5; // eax
    int (__stdcall ***v6)(unsigned int, unsigned int *, unsigned int *); // eax
    int (__stdcall ***v7)(unsigned int, unsigned int *, unsigned int *); // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c4918*/
      return -2147024809; /*0x6c491b*/
    *v9 = 0; /*0x6c4928*/
    if ( a3 ) /*0x6c4930*/
      return -2147221232; /*0x6c4933*/
    v5 = (DropPodLocomotionClass *)RA2_OPNEW(0x30u); /*0x6c493e*/
    if ( !v5 ) /*0x6c4948*/
      return -2147024882; /*0x6c4948*/
    v6 = (int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *))SmallFunc_4B5AB0(v5); /*0x6c494c*/
    v7 = v6; /*0x6c4951*/
    if ( !v6 ) /*0x6c4955*/
      return -2147024882; /*0x6c4958*/
    v8 = (**v6)(v6, a4, v9); /*0x6c496c*/
    if ( v8 < 0 ) /*0x6c4970*/
      ((void (__thiscall *)(int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *), int))(*v7)[8])(v7, 1); /*0x6c4978*/
    return v8; /*0x6c491a*/
}
// 0x6c4990
int TClassFactory_DropPodLocomotionClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c499a*/
    if ( v5 ) /*0x6c499d*/
      v3 = v2 + 1; /*0x6c499f*/
    else
      v3 = v2 - 1; /*0x6c49a8*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c49a0*/
    return 0; /*0x6c49a5*/
}
// 0x6c51c0
int TClassFactory_FactoryClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c51ce*/
}
// 0x6c51e0
int TClassFactory_FactoryClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c51f0*/
  if ( !v1 ) /*0x6c51f4*/
    RA2_OPDEL((void *)Block); /*0x6c51f7*/
  return v1; /*0x6c5201*/
}
// 0x6c5210
int TClassFactory_FactoryClass::ddtor()
{
    TeamTypeClass *v5; // eax
    int (__stdcall ***v6)(unsigned int, unsigned int *, unsigned int *); // eax
    int (__stdcall ***v7)(unsigned int, unsigned int *, unsigned int *); // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c5218*/
      return -2147024809; /*0x6c521b*/
    *v9 = 0; /*0x6c5228*/
    if ( a3 ) /*0x6c5230*/
      return -2147221232; /*0x6c5233*/
    v5 = (TeamTypeClass *)RA2_OPNEW(0x74u); /*0x6c523e*/
    if ( !v5 ) /*0x6c5248*/
      return -2147024882; /*0x6c5248*/
    v6 = (int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *))TeamTypeClass::Construct(v5); /*0x6c524c*/
    v7 = v6; /*0x6c5251*/
    if ( !v6 ) /*0x6c5255*/
      return -2147024882; /*0x6c5258*/
    v8 = (**v6)(v6, a4, v9); /*0x6c526c*/
    if ( v8 < 0 ) /*0x6c5270*/
      ((void (__thiscall *)(int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *), int))(*v7)[8])(v7, 1); /*0x6c5278*/
    return v8; /*0x6c521a*/
}
// 0x6c5290
int TClassFactory_FactoryClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c529a*/
    if ( v5 ) /*0x6c529d*/
      v3 = v2 + 1; /*0x6c529f*/
    else
      v3 = v2 - 1; /*0x6c52a8*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c52a0*/
    return 0; /*0x6c52a5*/
}
// 0x6c4a40
int TClassFactory_FlyLocomotionClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c4a4e*/
}
// 0x6c4a60
int TClassFactory_FlyLocomotionClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c4a70*/
  if ( !v1 ) /*0x6c4a74*/
    RA2_OPDEL((void *)Block); /*0x6c4a77*/
  return v1; /*0x6c4a81*/
}
// 0x6c4a90
int TClassFactory_FlyLocomotionClass::ddtor()
{
    FlyLocomotionClass *v5; // eax
    int (__stdcall ***v6)(unsigned int, unsigned int *, unsigned int *); // eax
    int (__stdcall ***v7)(unsigned int, unsigned int *, unsigned int *); // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c4a98*/
      return -2147024809; /*0x6c4a9b*/
    *v9 = 0; /*0x6c4aa8*/
    if ( a3 ) /*0x6c4ab0*/
      return -2147221232; /*0x6c4ab3*/
    v5 = (FlyLocomotionClass *)RA2_OPNEW(0x60u); /*0x6c4abe*/
    if ( !v5 ) /*0x6c4ac8*/
      return -2147024882; /*0x6c4ac8*/
    v6 = (int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *))FlyLocomotionClass::LocomotionClass(v5); /*0x6c4acc*/
    v7 = v6; /*0x6c4ad1*/
    if ( !v6 ) /*0x6c4ad5*/
      return -2147024882; /*0x6c4ad8*/
    v8 = (**v6)(v6, a4, v9); /*0x6c4aec*/
    if ( v8 < 0 ) /*0x6c4af0*/
      ((void (__thiscall *)(int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *), int))(*v7)[8])(v7, 1); /*0x6c4af8*/
    return v8; /*0x6c4a9a*/
}
// 0x6c4b10
int TClassFactory_FlyLocomotionClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c4b1a*/
    if ( v5 ) /*0x6c4b1d*/
      v3 = v2 + 1; /*0x6c4b1f*/
    else
      v3 = v2 - 1; /*0x6c4b28*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c4b20*/
    return 0; /*0x6c4b25*/
}
// 0x6c5f40
int TClassFactory_FoggedObjectClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c5f4e*/
}
// 0x6c5f60
int TClassFactory_FoggedObjectClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c5f70*/
  if ( !v1 ) /*0x6c5f74*/
    RA2_OPDEL((void *)Block); /*0x6c5f77*/
  return v1; /*0x6c5f81*/
}
// 0x6c5f90
int TClassFactory_FoggedObjectClass::ddtor()
{
    ObjectClass *v5; // eax
    unsigned int *v6; // eax
    unsigned int *v7; // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c5f98*/
      return -2147024809; /*0x6c5f9b*/
    *v9 = 0; /*0x6c5fa8*/
    if ( a3 ) /*0x6c5fb0*/
      return -2147221232; /*0x6c5fb3*/
    v5 = (ObjectClass *)RA2_OPNEW(0x78u); /*0x6c5fbe*/
    if ( !v5 ) /*0x6c5fc8*/
      return -2147024882; /*0x6c5fc8*/
    v6 = ObjectClass::Construct(v5); /*0x6c5fcc*/
    v7 = v6; /*0x6c5fd1*/
    if ( !v6 ) /*0x6c5fd5*/
      return -2147024882; /*0x6c5fd8*/
    v8 = (*(int (__stdcall **)(unsigned int *, unsigned int *, unsigned int *))*v6)(v6, a4, v9); /*0x6c5fec*/
    if ( v8 < 0 ) /*0x6c5ff0*/
      (*(void (__thiscall **)(unsigned int *, int))(*v7 + 32))(v7, 1); /*0x6c5ff8*/
    return v8; /*0x6c5f9a*/
}
// 0x6c6010
int TClassFactory_FoggedObjectClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c601a*/
    if ( v5 ) /*0x6c601d*/
      v3 = v2 + 1; /*0x6c601f*/
    else
      v3 = v2 - 1; /*0x6c6028*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c6020*/
    return 0; /*0x6c6025*/
}
// 0x6c3e40
int TClassFactory_HouseClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c3e4e*/
}
// 0x6c3e60
int TClassFactory_HouseClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c3e70*/
  if ( !v1 ) /*0x6c3e74*/
    RA2_OPDEL((void *)Block); /*0x6c3e77*/
  return v1; /*0x6c3e81*/
}
// 0x6c3e90
int TClassFactory_HouseClass::ddtor()
{
    int *v5; // eax
    int (__stdcall ***v6)(unsigned int, unsigned int *, unsigned int *); // eax
    int (__stdcall ***v7)(unsigned int, unsigned int *, unsigned int *); // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c3e98*/
      return -2147024809; /*0x6c3e9b*/
    *v9 = 0; /*0x6c3ea8*/
    if ( a3 ) /*0x6c3eb0*/
      return -2147221232; /*0x6c3eb3*/
    v5 = (int *)RA2_OPNEW(0x160B8u); /*0x6c3ec1*/
    if ( !v5 ) /*0x6c3ecb*/
      return -2147024882; /*0x6c3ecb*/
    v6 = (int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *))HouseClass::Construct(v5, 0); /*0x6c3ed1*/
    v7 = v6; /*0x6c3ed6*/
    if ( !v6 ) /*0x6c3eda*/
      return -2147024882; /*0x6c3edd*/
    v8 = (**v6)(v6, a4, v9); /*0x6c3ef1*/
    if ( v8 < 0 ) /*0x6c3ef5*/
      ((void (__thiscall *)(int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *), int))(*v7)[8])(v7, 1); /*0x6c3efd*/
    return v8; /*0x6c3e9a*/
}
// 0x6c3f10
int TClassFactory_HouseClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c3f1a*/
    if ( v5 ) /*0x6c3f1d*/
      v3 = v2 + 1; /*0x6c3f1f*/
    else
      v3 = v2 - 1; /*0x6c3f28*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c3f20*/
    return 0; /*0x6c3f25*/
}
// 0x6c3cc0
int TClassFactory_HouseTypeClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c3cce*/
}
// 0x6c3ce0
int TClassFactory_HouseTypeClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c3cf0*/
  if ( !v1 ) /*0x6c3cf4*/
    RA2_OPDEL((void *)Block); /*0x6c3cf7*/
  return v1; /*0x6c3d01*/
}
// 0x6c3d10
int TClassFactory_HouseTypeClass::GetClassIdentifier()
{
    SuperWeaponTypeClass *v5; // eax
    unsigned char *v6; // eax
    unsigned char *v7; // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c3d18*/
      return -2147024809; /*0x6c3d1b*/
    *v9 = 0; /*0x6c3d28*/
    if ( a3 ) /*0x6c3d30*/
      return -2147221232; /*0x6c3d33*/
    v5 = (SuperWeaponTypeClass *)RA2_OPNEW(0x1B0u); /*0x6c3d41*/
    if ( !v5 ) /*0x6c3d4b*/
      return -2147024882; /*0x6c3d4b*/
    v6 = SuperWeaponTypeClass::Construct(v5, 0); /*0x6c3d51*/
    v7 = v6; /*0x6c3d56*/
    if ( !v6 ) /*0x6c3d5a*/
      return -2147024882; /*0x6c3d5d*/
    v8 = (**(int (__stdcall ***)(unsigned char *, unsigned int *, unsigned int *))v6)(v6, a4, v9); /*0x6c3d71*/
    if ( v8 < 0 ) /*0x6c3d75*/
      (*(void (__thiscall **)(unsigned char *, int))(*(unsigned int *)v7 + 32))(v7, 1); /*0x6c3d7d*/
    return v8; /*0x6c3d1a*/
}
// 0x6c3d90
int TClassFactory_HouseTypeClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c3d9a*/
    if ( v5 ) /*0x6c3d9d*/
      v3 = v2 + 1; /*0x6c3d9f*/
    else
      v3 = v2 - 1; /*0x6c3da8*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c3da0*/
    return 0; /*0x6c3da5*/
}
// 0x6c42c0
int TClassFactory_HoverLocomotionClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c42ce*/
}
// 0x6c42e0
int TClassFactory_HoverLocomotionClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c42f0*/
  if ( !v1 ) /*0x6c42f4*/
    RA2_OPDEL((void *)Block); /*0x6c42f7*/
  return v1; /*0x6c4301*/
}
// 0x6c4310
int TClassFactory_HoverLocomotionClass::ddtor()
{
    LocomotionClass *v5; // eax
    int (__stdcall ***v6)(unsigned int, unsigned int *, unsigned int *); // eax
    int (__stdcall ***v7)(unsigned int, unsigned int *, unsigned int *); // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c4318*/
      return -2147024809; /*0x6c431b*/
    *v9 = 0; /*0x6c4328*/
    if ( a3 ) /*0x6c4330*/
      return -2147221232; /*0x6c4333*/
    v5 = (LocomotionClass *)RA2_OPNEW(0x78u); /*0x6c433e*/
    if ( !v5 ) /*0x6c4348*/
      return -2147024882; /*0x6c4348*/
    v6 = (int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *))LocomotionClass::ProcessData(v5); /*0x6c434c*/
    v7 = v6; /*0x6c4351*/
    if ( !v6 ) /*0x6c4355*/
      return -2147024882; /*0x6c4358*/
    v8 = (**v6)(v6, a4, v9); /*0x6c436c*/
    if ( v8 < 0 ) /*0x6c4370*/
      ((void (__thiscall *)(int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *), int))(*v7)[8])(v7, 1); /*0x6c4378*/
    return v8; /*0x6c431a*/
}
// 0x6c4390
int TClassFactory_HoverLocomotionClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c439a*/
    if ( v5 ) /*0x6c439d*/
      v3 = v2 + 1; /*0x6c439f*/
    else
      v3 = v2 - 1; /*0x6c43a8*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c43a0*/
    return 0; /*0x6c43a5*/
}
// 0x6c3840
int TClassFactory_InfantryClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c384e*/
}
// 0x6c3860
int TClassFactory_InfantryClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c3870*/
  if ( !v1 ) /*0x6c3874*/
    RA2_OPDEL((void *)Block); /*0x6c3877*/
  return v1; /*0x6c3881*/
}
// 0x6c3890
int TClassFactory_InfantryClass::ddtor()
{
    int v5; // eax
    int (__stdcall ***v6)(unsigned int, unsigned int *, unsigned int *); // eax
    int (__stdcall ***v7)(unsigned int, unsigned int *, unsigned int *); // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c3898*/
      return -2147024809; /*0x6c389b*/
    *v9 = 0; /*0x6c38a8*/
    if ( a3 ) /*0x6c38b0*/
      return -2147221232; /*0x6c38b3*/
    v5 = RA2_OPNEW(0x6F0u); /*0x6c38c1*/
    if ( !v5 ) /*0x6c38cb*/
      return -2147024882; /*0x6c38cb*/
    v6 = (int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *))InfantryClass::Construct(v5, (int)v9, 0, 0); /*0x6c38d3*/
    v7 = v6; /*0x6c38d8*/
    if ( !v6 ) /*0x6c38dc*/
      return -2147024882; /*0x6c38df*/
    v8 = (**v6)(v6, a4, v9); /*0x6c38f3*/
    if ( v8 < 0 ) /*0x6c38f7*/
      ((void (__thiscall *)(int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *), int))(*v7)[8])(v7, 1); /*0x6c38ff*/
    return v8; /*0x6c389a*/
}
// 0x6c3910
int TClassFactory_InfantryClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c391a*/
    if ( v5 ) /*0x6c391d*/
      v3 = v2 + 1; /*0x6c391f*/
    else
      v3 = v2 - 1; /*0x6c3928*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c3920*/
    return 0; /*0x6c3925*/
}
// 0x6c2c40
int TClassFactory_InfantryTypeClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c2c4e*/
}
// 0x6c2c60
int TClassFactory_InfantryTypeClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c2c70*/
  if ( !v1 ) /*0x6c2c74*/
    RA2_OPDEL((void *)Block); /*0x6c2c77*/
  return v1; /*0x6c2c81*/
}
// 0x6c2c90
int TClassFactory_InfantryTypeClass::GetClassIdentifier()
{
    int v5; // eax
    int (__stdcall ***v6)(unsigned int, unsigned int *, unsigned int *); // eax
    int (__stdcall ***v7)(unsigned int, unsigned int *, unsigned int *); // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c2c98*/
      return -2147024809; /*0x6c2c9b*/
    *v9 = 0; /*0x6c2ca8*/
    if ( a3 ) /*0x6c2cb0*/
      return -2147221232; /*0x6c2cb3*/
    v5 = RA2_OPNEW(0xED0u); /*0x6c2cc1*/
    if ( !v5 ) /*0x6c2ccb*/
      return -2147024882; /*0x6c2ccb*/
    v6 = (int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *))InfantryTypeClass::Constructor(v5, 0); /*0x6c2cd1*/
    v7 = v6; /*0x6c2cd6*/
    if ( !v6 ) /*0x6c2cda*/
      return -2147024882; /*0x6c2cdd*/
    v8 = (**v6)(v6, a4, v9); /*0x6c2cf1*/
    if ( v8 < 0 ) /*0x6c2cf5*/
      ((void (__thiscall *)(int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *), int))(*v7)[8])(v7, 1); /*0x6c2cfd*/
    return v8; /*0x6c2c9a*/
}
// 0x6c2d10
int TClassFactory_InfantryTypeClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c2d1a*/
    if ( v5 ) /*0x6c2d1d*/
      v3 = v2 + 1; /*0x6c2d1f*/
    else
      v3 = v2 - 1; /*0x6c2d28*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c2d20*/
    return 0; /*0x6c2d25*/
}
// 0x6c2f40
int TClassFactory_IsometricTileTypeClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c2f4e*/
}
// 0x6c2f60
int TClassFactory_IsometricTileTypeClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c2f70*/
  if ( !v1 ) /*0x6c2f74*/
    RA2_OPDEL((void *)Block); /*0x6c2f77*/
  return v1; /*0x6c2f81*/
}
// 0x6c2f90
int TClassFactory_IsometricTileTypeClass::GetClassIdentifier()
{
    TerrainTypeClass *v5; // eax
    unsigned int *v6; // eax
    unsigned int *v7; // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c2f98*/
      return -2147024809; /*0x6c2f9b*/
    *v9 = 0; /*0x6c2fa8*/
    if ( a3 ) /*0x6c2fb0*/
      return -2147221232; /*0x6c2fb3*/
    v5 = (TerrainTypeClass *)RA2_OPNEW(0x30Cu); /*0x6c2fc1*/
    if ( !v5 ) /*0x6c2fcb*/
      return -2147024882; /*0x6c2fcb*/
    v6 = TerrainTypeClass::Construct(v5, 0, 0, 0, 0, 0); /*0x6c2fd9*/
    v7 = v6; /*0x6c2fde*/
    if ( !v6 ) /*0x6c2fe2*/
      return -2147024882; /*0x6c2fe5*/
    v8 = (*(int (__stdcall **)(unsigned int *, unsigned int *, unsigned int *))*v6)(v6, a4, v9); /*0x6c2ff9*/
    if ( v8 < 0 ) /*0x6c2ffd*/
      (*(void (__thiscall **)(unsigned int *, int))(*v7 + 32))(v7, 1); /*0x6c3005*/
    return v8; /*0x6c2f9a*/
}
// 0x6c3010
int TClassFactory_IsometricTileTypeClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c301a*/
    if ( v5 ) /*0x6c301d*/
      v3 = v2 + 1; /*0x6c301f*/
    else
      v3 = v2 - 1; /*0x6c3028*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c3020*/
    return 0; /*0x6c3025*/
}
// 0x6c4140
int TClassFactory_JumpjetLocomotionClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c414e*/
}
// 0x6c4160
int TClassFactory_JumpjetLocomotionClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c4170*/
  if ( !v1 ) /*0x6c4174*/
    RA2_OPDEL((void *)Block); /*0x6c4177*/
  return v1; /*0x6c4181*/
}
// 0x6c4190
int TClassFactory_JumpjetLocomotionClass::ddtor()
{
    JumpjetLocomotionClass *v5; // eax
    int (__stdcall ***v6)(unsigned int, unsigned int *, unsigned int *); // eax
    int (__stdcall ***v7)(unsigned int, unsigned int *, unsigned int *); // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c4198*/
      return -2147024809; /*0x6c419b*/
    *v9 = 0; /*0x6c41a8*/
    if ( a3 ) /*0x6c41b0*/
      return -2147221232; /*0x6c41b3*/
    v5 = (JumpjetLocomotionClass *)RA2_OPNEW(0x98u); /*0x6c41c1*/
    if ( !v5 ) /*0x6c41cb*/
      return -2147024882; /*0x6c41cb*/
    v6 = (int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *))LocomotionClass::Update(v5); /*0x6c41cf*/
    v7 = v6; /*0x6c41d4*/
    if ( !v6 ) /*0x6c41d8*/
      return -2147024882; /*0x6c41db*/
    v8 = (**v6)(v6, a4, v9); /*0x6c41ef*/
    if ( v8 < 0 ) /*0x6c41f3*/
      ((void (__thiscall *)(int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *), int))(*v7)[8])(v7, 1); /*0x6c41fb*/
    return v8; /*0x6c419a*/
}
// 0x6c4210
int TClassFactory_JumpjetLocomotionClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c421a*/
    if ( v5 ) /*0x6c421d*/
      v3 = v2 + 1; /*0x6c421f*/
    else
      v3 = v2 - 1; /*0x6c4228*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c4220*/
    return 0; /*0x6c4225*/
}
// 0x6bfc40
int TClassFactory_LightSourceClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bfc4e*/
}
// 0x6bfc60
int TClassFactory_LightSourceClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bfc70*/
  if ( !v1 ) /*0x6bfc74*/
    RA2_OPDEL((void *)Block); /*0x6bfc77*/
  return v1; /*0x6bfc81*/
}
// 0x6bfc90
int TClassFactory_LightSourceClass::ddtor()
{
    LightSourceClass *v5; // eax
    int (__stdcall ***v6)(unsigned int, unsigned int *, unsigned int *); // eax
    int (__stdcall ***v7)(unsigned int, unsigned int *, unsigned int *); // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6bfc98*/
      return -2147024809; /*0x6bfc9b*/
    *v9 = 0; /*0x6bfca8*/
    if ( a3 ) /*0x6bfcb0*/
      return -2147221232; /*0x6bfcb3*/
    v5 = (LightSourceClass *)RA2_OPNEW(0x4Cu); /*0x6bfcbe*/
    if ( !v5 ) /*0x6bfcc8*/
      return -2147024882; /*0x6bfcc8*/
    v6 = (int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *))LightSourceClass::Constructor(v5); /*0x6bfccc*/
    v7 = v6; /*0x6bfcd1*/
    if ( !v6 ) /*0x6bfcd5*/
      return -2147024882; /*0x6bfcd8*/
    v8 = (**v6)(v6, a4, v9); /*0x6bfcec*/
    if ( v8 < 0 ) /*0x6bfcf0*/
      ((void (__thiscall *)(int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *), int))(*v7)[8])(v7, 1); /*0x6bfcf8*/
    return v8; /*0x6bfc9a*/
}
// 0x6bfd10
int TClassFactory_LightSourceClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6bfd1a*/
    if ( v5 ) /*0x6bfd1d*/
      v3 = v2 + 1; /*0x6bfd1f*/
    else
      v3 = v2 - 1; /*0x6bfd28*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6bfd20*/
    return 0; /*0x6bfd25*/
}
// 0x6c5dc0
int TClassFactory_NeuronClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c5dce*/
}
// 0x6c5de0
int TClassFactory_NeuronClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c5df0*/
  if ( !v1 ) /*0x6c5df4*/
    RA2_OPDEL((void *)Block); /*0x6c5df7*/
  return v1; /*0x6c5e01*/
}
// 0x6c5e10
int TClassFactory_NeuronClass::ddtor()
{
    NeuronClass *v5; // eax
    int (__stdcall ***v6)(unsigned int, unsigned int *, unsigned int *); // eax
    int (__stdcall ***v7)(unsigned int, unsigned int *, unsigned int *); // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c5e18*/
      return -2147024809; /*0x6c5e1b*/
    *v9 = 0; /*0x6c5e28*/
    if ( a3 ) /*0x6c5e30*/
      return -2147221232; /*0x6c5e33*/
    v5 = (NeuronClass *)RA2_OPNEW(0x38u); /*0x6c5e3e*/
    if ( !v5 ) /*0x6c5e48*/
      return -2147024882; /*0x6c5e48*/
    v6 = (int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *))NeuronClass::NeuronClass(v5); /*0x6c5e4c*/
    v7 = v6; /*0x6c5e51*/
    if ( !v6 ) /*0x6c5e55*/
      return -2147024882; /*0x6c5e58*/
    v8 = (**v6)(v6, a4, v9); /*0x6c5e6c*/
    if ( v8 < 0 ) /*0x6c5e70*/
      ((void (__thiscall *)(int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *), int))(*v7)[8])(v7, 1); /*0x6c5e78*/
    return v8; /*0x6c5e1a*/
}
// 0x6c5e90
int TClassFactory_NeuronClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c5e9a*/
    if ( v5 ) /*0x6c5e9d*/
      v3 = v2 + 1; /*0x6c5e9f*/
    else
      v3 = v2 - 1; /*0x6c5ea8*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c5ea0*/
    return 0; /*0x6c5ea5*/
}
// 0x6c30c0
int TClassFactory_OverlayTypeClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c30ce*/
}
// 0x6c30e0
int TClassFactory_OverlayTypeClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c30f0*/
  if ( !v1 ) /*0x6c30f4*/
    RA2_OPDEL((void *)Block); /*0x6c30f7*/
  return v1; /*0x6c3101*/
}
// 0x6c3110
int TClassFactory_OverlayTypeClass::GetClassIdentifier()
{
    OverlayTypeClass *v5; // eax
    unsigned int *v6; // eax
    unsigned int *v7; // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c3118*/
      return -2147024809; /*0x6c311b*/
    *v9 = 0; /*0x6c3128*/
    if ( a3 ) /*0x6c3130*/
      return -2147221232; /*0x6c3133*/
    v5 = (OverlayTypeClass *)RA2_OPNEW(0x2BCu); /*0x6c3141*/
    if ( !v5 ) /*0x6c314b*/
      return -2147024882; /*0x6c314b*/
    v6 = OverlayTypeClass::OverlayTypeClass(v5, 0); /*0x6c3151*/
    v7 = v6; /*0x6c3156*/
    if ( !v6 ) /*0x6c315a*/
      return -2147024882; /*0x6c315d*/
    v8 = (*(int (__stdcall **)(unsigned int *, unsigned int *, unsigned int *))*v6)(v6, a4, v9); /*0x6c3171*/
    if ( v8 < 0 ) /*0x6c3175*/
      (*(void (__thiscall **)(unsigned int *, int))(*v7 + 32))(v7, 1); /*0x6c317d*/
    return v8; /*0x6c311a*/
}
// 0x6c3190
int TClassFactory_OverlayTypeClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c319a*/
    if ( v5 ) /*0x6c319d*/
      v3 = v2 + 1; /*0x6c319f*/
    else
      v3 = v2 - 1; /*0x6c31a8*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c31a0*/
    return 0; /*0x6c31a5*/
}
// 0x6c0fc0
int TClassFactory_ParasiteClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c0fce*/
}
// 0x6c0fe0
int TClassFactory_ParasiteClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c0ff0*/
  if ( !v1 ) /*0x6c0ff4*/
    RA2_OPDEL((void *)Block); /*0x6c0ff7*/
  return v1; /*0x6c1001*/
}
// 0x6c1010
int TClassFactory_ParasiteClass::ddtor()
{
    ParasiteClass *v5; // eax
    int (__stdcall ***v6)(unsigned int, unsigned int *, unsigned int *); // eax
    int (__stdcall ***v7)(unsigned int, unsigned int *, unsigned int *); // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c1018*/
      return -2147024809; /*0x6c101b*/
    *v9 = 0; /*0x6c1028*/
    if ( a3 ) /*0x6c1030*/
      return -2147221232; /*0x6c1033*/
    v5 = (ParasiteClass *)RA2_OPNEW(0x58u); /*0x6c103e*/
    if ( !v5 ) /*0x6c1048*/
      return -2147024882; /*0x6c1048*/
    v6 = (int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *))ParasiteClass::Constructor(v5); /*0x6c104c*/
    v7 = v6; /*0x6c1051*/
    if ( !v6 ) /*0x6c1055*/
      return -2147024882; /*0x6c1058*/
    v8 = (**v6)(v6, a4, v9); /*0x6c106c*/
    if ( v8 < 0 ) /*0x6c1070*/
      ((void (__thiscall *)(int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *), int))(*v7)[8])(v7, 1); /*0x6c1078*/
    return v8; /*0x6c101a*/
}
// 0x6c1090
int TClassFactory_ParasiteClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c109a*/
    if ( v5 ) /*0x6c109d*/
      v3 = v2 + 1; /*0x6c109f*/
    else
      v3 = v2 - 1; /*0x6c10a8*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c10a0*/
    return 0; /*0x6c10a5*/
}
// 0x6c5660
int TClassFactory_ParticleClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c5670*/
  if ( !v1 ) /*0x6c5674*/
    RA2_OPDEL((void *)Block); /*0x6c5677*/
  return v1; /*0x6c5681*/
}
// 0x6c5690
int TClassFactory_ParticleClass::ddtor()
{
    ObjectClass *v5; // eax
    int (__stdcall ***v6)(unsigned int, unsigned int *, unsigned int *); // eax
    int (__stdcall ***v7)(unsigned int, unsigned int *, unsigned int *); // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c5698*/
      return -2147024809; /*0x6c569b*/
    *v9 = 0; /*0x6c56a8*/
    if ( a3 ) /*0x6c56b0*/
      return -2147221232; /*0x6c56b3*/
    v5 = (ObjectClass *)RA2_OPNEW(0x138u); /*0x6c56c1*/
    if ( !v5 ) /*0x6c56cb*/
      return -2147024882; /*0x6c56cb*/
    v6 = (int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *))ObjectClass::ProcessUpdate(v5); /*0x6c56cf*/
    v7 = v6; /*0x6c56d4*/
    if ( !v6 ) /*0x6c56d8*/
      return -2147024882; /*0x6c56db*/
    v8 = (**v6)(v6, a4, v9); /*0x6c56ef*/
    if ( v8 < 0 ) /*0x6c56f3*/
      ((void (__thiscall *)(int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *), int))(*v7)[8])(v7, 1); /*0x6c56fb*/
    return v8; /*0x6c569a*/
}
// 0x6c5710
int TClassFactory_ParticleClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c571a*/
    if ( v5 ) /*0x6c571d*/
      v3 = v2 + 1; /*0x6c571f*/
    else
      v3 = v2 - 1; /*0x6c5728*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c5720*/
    return 0; /*0x6c5725*/
}
// 0x6c5940
int TClassFactory_ParticleSystemClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c594e*/
}
// 0x6c5960
int TClassFactory_ParticleSystemClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c5970*/
  if ( !v1 ) /*0x6c5974*/
    RA2_OPDEL((void *)Block); /*0x6c5977*/
  return v1; /*0x6c5981*/
}
// 0x6c5990
int TClassFactory_ParticleSystemClass::ddtor()
{
    ParticleSystemClass *v5; // eax
    int (__stdcall ***v6)(unsigned int, unsigned int *, unsigned int *); // eax
    int (__stdcall ***v7)(unsigned int, unsigned int *, unsigned int *); // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c5998*/
      return -2147024809; /*0x6c599b*/
    *v9 = 0; /*0x6c59a8*/
    if ( a3 ) /*0x6c59b0*/
      return -2147221232; /*0x6c59b3*/
    v5 = (ParticleSystemClass *)RA2_OPNEW(0x100u); /*0x6c59c1*/
    if ( !v5 ) /*0x6c59cb*/
      return -2147024882; /*0x6c59cb*/
    v6 = (int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *))ParticleClass::ProcessCreation(v5); /*0x6c59cf*/
    v7 = v6; /*0x6c59d4*/
    if ( !v6 ) /*0x6c59d8*/
      return -2147024882; /*0x6c59db*/
    v8 = (**v6)(v6, a4, v9); /*0x6c59ef*/
    if ( v8 < 0 ) /*0x6c59f3*/
      ((void (__thiscall *)(int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *), int))(*v7)[8])(v7, 1); /*0x6c59fb*/
    return v8; /*0x6c599a*/
}
// 0x6c5a10
int TClassFactory_ParticleSystemClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c5a1a*/
    if ( v5 ) /*0x6c5a1d*/
      v3 = v2 + 1; /*0x6c5a1f*/
    else
      v3 = v2 - 1; /*0x6c5a28*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c5a20*/
    return 0; /*0x6c5a25*/
}
// 0x6c5ac0
int TClassFactory_ParticleSystemTypeClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c5ace*/
}
// 0x6c5ae0
int TClassFactory_ParticleSystemTypeClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c5af0*/
  if ( !v1 ) /*0x6c5af4*/
    RA2_OPDEL((void *)Block); /*0x6c5af7*/
  return v1; /*0x6c5b01*/
}
// 0x6c5b10
int TClassFactory_ParticleSystemTypeClass::GetClassIdentifier()
{
    OverlayTypeClass *v5; // eax
    unsigned int *v6; // eax
    unsigned int *v7; // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c5b18*/
      return -2147024809; /*0x6c5b1b*/
    *v9 = 0; /*0x6c5b28*/
    if ( a3 ) /*0x6c5b30*/
      return -2147221232; /*0x6c5b33*/
    v5 = (OverlayTypeClass *)RA2_OPNEW(0x310u); /*0x6c5b41*/
    if ( !v5 ) /*0x6c5b4b*/
      return -2147024882; /*0x6c5b4b*/
    v6 = OverlayTypeClass::Construct(v5, 0); /*0x6c5b51*/
    v7 = v6; /*0x6c5b56*/
    if ( !v6 ) /*0x6c5b5a*/
      return -2147024882; /*0x6c5b5d*/
    v8 = (*(int (__stdcall **)(unsigned int *, unsigned int *, unsigned int *))*v6)(v6, a4, v9); /*0x6c5b71*/
    if ( v8 < 0 ) /*0x6c5b75*/
      (*(void (__thiscall **)(unsigned int *, int))(*v7 + 32))(v7, 1); /*0x6c5b7d*/
    return v8; /*0x6c5b1a*/
}
// 0x6c5b90
int TClassFactory_ParticleSystemTypeClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c5b9a*/
    if ( v5 ) /*0x6c5b9d*/
      v3 = v2 + 1; /*0x6c5b9f*/
    else
      v3 = v2 - 1; /*0x6c5ba8*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c5ba0*/
    return 0; /*0x6c5ba5*/
}
// 0x6c57c0
int TClassFactory_ParticleTypeClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c57ce*/
}
// 0x6c57e0
int TClassFactory_ParticleTypeClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c57f0*/
  if ( !v1 ) /*0x6c57f4*/
    RA2_OPDEL((void *)Block); /*0x6c57f7*/
  return v1; /*0x6c5801*/
}
// 0x6c5810
int TClassFactory_ParticleTypeClass::GetClassIdentifier()
{
    BuildingTypeClass *v5; // eax
    unsigned int *v6; // eax
    unsigned int *v7; // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c5818*/
      return -2147024809; /*0x6c581b*/
    *v9 = 0; /*0x6c5828*/
    if ( a3 ) /*0x6c5830*/
      return -2147221232; /*0x6c5833*/
    v5 = (BuildingTypeClass *)RA2_OPNEW(0x318u); /*0x6c5841*/
    if ( !v5 ) /*0x6c584b*/
      return -2147024882; /*0x6c584b*/
    v6 = BuildingTypeClass::Construct(v5, 0); /*0x6c5851*/
    v7 = v6; /*0x6c5856*/
    if ( !v6 ) /*0x6c585a*/
      return -2147024882; /*0x6c585d*/
    v8 = (*(int (__stdcall **)(unsigned int *, unsigned int *, unsigned int *))*v6)(v6, a4, v9); /*0x6c5871*/
    if ( v8 < 0 ) /*0x6c5875*/
      (*(void (__thiscall **)(unsigned int *, int))(*v7 + 32))(v7, 1); /*0x6c587d*/
    return v8; /*0x6c581a*/
}
// 0x6c5890
int TClassFactory_ParticleTypeClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c589a*/
    if ( v5 ) /*0x6c589d*/
      v3 = v2 + 1; /*0x6c589f*/
    else
      v3 = v2 - 1; /*0x6c58a8*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c58a0*/
    return 0; /*0x6c58a5*/
}
// 0x6c12c0
int TClassFactory_RadSiteClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c12ce*/
}
// 0x6c12e0
int TClassFactory_RadSiteClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c12f0*/
  if ( !v1 ) /*0x6c12f4*/
    RA2_OPDEL((void *)Block); /*0x6c12f7*/
  return v1; /*0x6c1301*/
}
// 0x6c1310
int TClassFactory_RadSiteClass::ddtor()
{
    RadSiteClass *v5; // eax
    unsigned int *v6; // eax
    unsigned int *v7; // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c1318*/
      return -2147024809; /*0x6c131b*/
    *v9 = 0; /*0x6c1328*/
    if ( a3 ) /*0x6c1330*/
      return -2147221232; /*0x6c1333*/
    v5 = (RadSiteClass *)RA2_OPNEW(0x74u); /*0x6c133e*/
    if ( !v5 ) /*0x6c1348*/
      return -2147024882; /*0x6c1348*/
    v6 = RadSiteClass::RadSiteClass(v5); /*0x6c134c*/
    v7 = v6; /*0x6c1351*/
    if ( !v6 ) /*0x6c1355*/
      return -2147024882; /*0x6c1358*/
    v8 = (*(int (__stdcall **)(unsigned int *, unsigned int *, unsigned int *))*v6)(v6, a4, v9); /*0x6c136c*/
    if ( v8 < 0 ) /*0x6c1370*/
      (*(void (__thiscall **)(unsigned int *, int))(*v7 + 32))(v7, 1); /*0x6c1378*/
    return v8; /*0x6c131a*/
}
// 0x6c1390
int TClassFactory_RadSiteClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c139a*/
    if ( v5 ) /*0x6c139d*/
      v3 = v2 + 1; /*0x6c139f*/
    else
      v3 = v2 - 1; /*0x6c13a8*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c13a0*/
    return 0; /*0x6c13a5*/
}
// 0x6c4440
int TClassFactory_RocketLocomotionClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c444e*/
}
// 0x6c4460
int TClassFactory_RocketLocomotionClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c4470*/
  if ( !v1 ) /*0x6c4474*/
    RA2_OPDEL((void *)Block); /*0x6c4477*/
  return v1; /*0x6c4481*/
}
// 0x6c4490
int TClassFactory_RocketLocomotionClass::ddtor()
{
    RocketLocomotionClass *v5; // eax
    int (__stdcall ***v6)(unsigned int, unsigned int *, unsigned int *); // eax
    int (__stdcall ***v7)(unsigned int, unsigned int *, unsigned int *); // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c4498*/
      return -2147024809; /*0x6c449b*/
    *v9 = 0; /*0x6c44a8*/
    if ( a3 ) /*0x6c44b0*/
      return -2147221232; /*0x6c44b3*/
    v5 = (RocketLocomotionClass *)RA2_OPNEW(0x60u); /*0x6c44be*/
    if ( !v5 ) /*0x6c44c8*/
      return -2147024882; /*0x6c44c8*/
    v6 = (int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *))RocketLocomotionClass::RocketLocomotionClass(v5); /*0x6c44cc*/
    v7 = v6; /*0x6c44d1*/
    if ( !v6 ) /*0x6c44d5*/
      return -2147024882; /*0x6c44d8*/
    v8 = (**v6)(v6, a4, v9); /*0x6c44ec*/
    if ( v8 < 0 ) /*0x6c44f0*/
      ((void (__thiscall *)(int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *), int))(*v7)[8])(v7, 1); /*0x6c44f8*/
    return v8; /*0x6c449a*/
}
// 0x6c4510
int TClassFactory_RocketLocomotionClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c451a*/
    if ( v5 ) /*0x6c451d*/
      v3 = v2 + 1; /*0x6c451f*/
    else
      v3 = v2 - 1; /*0x6c4528*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c4520*/
    return 0; /*0x6c4525*/
}
// 0x6c1d40
int TClassFactory_ScriptClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c1d4e*/
}
// 0x6c1d60
int TClassFactory_ScriptClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c1d70*/
  if ( !v1 ) /*0x6c1d74*/
    RA2_OPDEL((void *)Block); /*0x6c1d77*/
  return v1; /*0x6c1d81*/
}
// 0x6c1d90
void TClassFactory_ScriptClass::ddtor()
{
}
// 0x6c1e10
int TClassFactory_ScriptClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c1e1a*/
    if ( v5 ) /*0x6c1e1d*/
      v3 = v2 + 1; /*0x6c1e1f*/
    else
      v3 = v2 - 1; /*0x6c1e28*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c1e20*/
    return 0; /*0x6c1e25*/
}
// 0x6c1ec0
int TClassFactory_ScriptTypeClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c1ece*/
}
// 0x6c1ee0
int TClassFactory_ScriptTypeClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c1ef0*/
  if ( !v1 ) /*0x6c1ef4*/
    RA2_OPDEL((void *)Block); /*0x6c1ef7*/
  return v1; /*0x6c1f01*/
}
// 0x6c1f10
int TClassFactory_ScriptTypeClass::GetClassIdentifier()
{
    ScriptTypeClass *v5; // eax
    unsigned int *v6; // eax
    unsigned int *v7; // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c1f18*/
      return -2147024809; /*0x6c1f1b*/
    *v9 = 0; /*0x6c1f28*/
    if ( a3 ) /*0x6c1f30*/
      return -2147221232; /*0x6c1f33*/
    v5 = (ScriptTypeClass *)RA2_OPNEW(0x234u); /*0x6c1f41*/
    if ( !v5 ) /*0x6c1f4b*/
      return -2147024882; /*0x6c1f4b*/
    v6 = ScriptTypeClass::Constructor(v5, 0); /*0x6c1f51*/
    v7 = v6; /*0x6c1f56*/
    if ( !v6 ) /*0x6c1f5a*/
      return -2147024882; /*0x6c1f5d*/
    v8 = (*(int (__stdcall **)(unsigned int *, unsigned int *, unsigned int *))*v6)(v6, a4, v9); /*0x6c1f71*/
    if ( v8 < 0 ) /*0x6c1f75*/
      (*(void (__thiscall **)(unsigned int *, int))(*v7 + 32))(v7, 1); /*0x6c1f7d*/
    return v8; /*0x6c1f1a*/
}
// 0x6c1f90
int TClassFactory_ScriptTypeClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c1f9a*/
    if ( v5 ) /*0x6c1f9d*/
      v3 = v2 + 1; /*0x6c1f9f*/
    else
      v3 = v2 - 1; /*0x6c1fa8*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c1fa0*/
    return 0; /*0x6c1fa5*/
}
// 0x6c4ec0
int TClassFactory_ShipLocomotionClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c4ece*/
}
// 0x6c4ee0
int TClassFactory_ShipLocomotionClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c4ef0*/
  if ( !v1 ) /*0x6c4ef4*/
    RA2_OPDEL((void *)Block); /*0x6c4ef7*/
  return v1; /*0x6c4f01*/
}
// 0x6c4f10
int TClassFactory_ShipLocomotionClass::ddtor()
{
    LocomotionClass *v5; // eax
    int (__stdcall ***v6)(unsigned int, unsigned int *, unsigned int *); // eax
    int (__stdcall ***v7)(unsigned int, unsigned int *, unsigned int *); // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c4f18*/
      return -2147024809; /*0x6c4f1b*/
    *v9 = 0; /*0x6c4f28*/
    if ( a3 ) /*0x6c4f30*/
      return -2147221232; /*0x6c4f33*/
    v5 = (LocomotionClass *)RA2_OPNEW(0x70u); /*0x6c4f3e*/
    if ( !v5 ) /*0x6c4f48*/
      return -2147024882; /*0x6c4f48*/
    v6 = (int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *))LocomotionClass::Process(v5); /*0x6c4f4c*/
    v7 = v6; /*0x6c4f51*/
    if ( !v6 ) /*0x6c4f55*/
      return -2147024882; /*0x6c4f58*/
    v8 = (**v6)(v6, a4, v9); /*0x6c4f6c*/
    if ( v8 < 0 ) /*0x6c4f70*/
      ((void (__thiscall *)(int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *), int))(*v7)[8])(v7, 1); /*0x6c4f78*/
    return v8; /*0x6c4f1a*/
}
// 0x6c4f90
int TClassFactory_ShipLocomotionClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c4f9a*/
    if ( v5 ) /*0x6c4f9d*/
      v3 = v2 + 1; /*0x6c4f9f*/
    else
      v3 = v2 - 1; /*0x6c4fa8*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c4fa0*/
    return 0; /*0x6c4fa5*/
}
// 0x6bfdc0
int TClassFactory_SideClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bfdce*/
}
// 0x6bfde0
int TClassFactory_SideClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bfdf0*/
  if ( !v1 ) /*0x6bfdf4*/
    RA2_OPDEL((void *)Block); /*0x6bfdf7*/
  return v1; /*0x6bfe01*/
}
// 0x6bfe10
int TClassFactory_SideClass::ddtor()
{
    SideClass *v5; // eax
    unsigned int *v6; // eax
    unsigned int *v7; // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6bfe18*/
      return -2147024809; /*0x6bfe1b*/
    *v9 = 0; /*0x6bfe28*/
    if ( a3 ) /*0x6bfe30*/
      return -2147221232; /*0x6bfe33*/
    v5 = (SideClass *)RA2_OPNEW(0xB4u); /*0x6bfe41*/
    if ( !v5 ) /*0x6bfe4b*/
      return -2147024882; /*0x6bfe4b*/
    v6 = SideClass::Construct(v5, 0); /*0x6bfe51*/
    v7 = v6; /*0x6bfe56*/
    if ( !v6 ) /*0x6bfe5a*/
      return -2147024882; /*0x6bfe5d*/
    v8 = (*(int (__stdcall **)(unsigned int *, unsigned int *, unsigned int *))*v6)(v6, a4, v9); /*0x6bfe71*/
    if ( v8 < 0 ) /*0x6bfe75*/
      (*(void (__thiscall **)(unsigned int *, int))(*v7 + 32))(v7, 1); /*0x6bfe7d*/
    return v8; /*0x6bfe1a*/
}
// 0x6bfe90
int TClassFactory_SideClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6bfe9a*/
    if ( v5 ) /*0x6bfe9d*/
      v3 = v2 + 1; /*0x6bfe9f*/
    else
      v3 = v2 - 1; /*0x6bfea8*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6bfea0*/
    return 0; /*0x6bfea5*/
}
// 0x6c0b40
int TClassFactory_SlaveManagerClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c0b4e*/
}
// 0x6c0b60
int TClassFactory_SlaveManagerClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c0b70*/
  if ( !v1 ) /*0x6c0b74*/
    RA2_OPDEL((void *)Block); /*0x6c0b77*/
  return v1; /*0x6c0b81*/
}
// 0x6c0b90
int TClassFactory_SlaveManagerClass::ddtor()
{
    SlaveManagerClass *v5; // eax
    int (__stdcall ***v6)(unsigned int, unsigned int *, unsigned int *); // eax
    int (__stdcall ***v7)(unsigned int, unsigned int *, unsigned int *); // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c0b98*/
      return -2147024809; /*0x6c0b9b*/
    *v9 = 0; /*0x6c0ba8*/
    if ( a3 ) /*0x6c0bb0*/
      return -2147221232; /*0x6c0bb3*/
    v5 = (SlaveManagerClass *)RA2_OPNEW(0x64u); /*0x6c0bbe*/
    if ( !v5 ) /*0x6c0bc8*/
      return -2147024882; /*0x6c0bc8*/
    v6 = (int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *))SlaveManagerClass::Constructor(v5); /*0x6c0bcc*/
    v7 = v6; /*0x6c0bd1*/
    if ( !v6 ) /*0x6c0bd5*/
      return -2147024882; /*0x6c0bd8*/
    v8 = (**v6)(v6, a4, v9); /*0x6c0bec*/
    if ( v8 < 0 ) /*0x6c0bf0*/
      ((void (__thiscall *)(int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *), int))(*v7)[8])(v7, 1); /*0x6c0bf8*/
    return v8; /*0x6c0b9a*/
}
// 0x6c0c10
int TClassFactory_SlaveManagerClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c0c1a*/
    if ( v5 ) /*0x6c0c1d*/
      v3 = v2 + 1; /*0x6c0c1f*/
    else
      v3 = v2 - 1; /*0x6c0c28*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c0c20*/
    return 0; /*0x6c0c25*/
}
// 0x6c3240
int TClassFactory_SmudgeTypeClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c324e*/
}
// 0x6c3260
int TClassFactory_SmudgeTypeClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c3270*/
  if ( !v1 ) /*0x6c3274*/
    RA2_OPDEL((void *)Block); /*0x6c3277*/
  return v1; /*0x6c3281*/
}
// 0x6c3290
int TClassFactory_SmudgeTypeClass::GetClassIdentifier()
{
    char *v5; // eax
    char *v6; // eax
    char *v7; // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c3298*/
      return -2147024809; /*0x6c329b*/
    *v9 = 0; /*0x6c32a8*/
    if ( a3 ) /*0x6c32b0*/
      return -2147221232; /*0x6c32b3*/
    v5 = (char *)RA2_OPNEW(0x2A4u); /*0x6c32c1*/
    if ( !v5 ) /*0x6c32cb*/
      return -2147024882; /*0x6c32cb*/
    v6 = SmudgeTypeClass::SmudgeTypeClass(v5, 0); /*0x6c32d1*/
    v7 = v6; /*0x6c32d6*/
    if ( !v6 ) /*0x6c32da*/
      return -2147024882; /*0x6c32dd*/
    v8 = (**(int (__stdcall ***)(char *, unsigned int *, unsigned int *))v6)(v6, a4, v9); /*0x6c32f1*/
    if ( v8 < 0 ) /*0x6c32f5*/
      (*(void (__thiscall **)(char *, int))(*(unsigned int *)v7 + 32))(v7, 1); /*0x6c32fd*/
    return v8; /*0x6c329a*/
}
// 0x6c3310
int TClassFactory_SmudgeTypeClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c331a*/
    if ( v5 ) /*0x6c331d*/
      v3 = v2 + 1; /*0x6c331f*/
    else
      v3 = v2 - 1; /*0x6c3328*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c3320*/
    return 0; /*0x6c3325*/
}
// 0x6c09c0
int TClassFactory_SpawnManagerClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c09ce*/
}
// 0x6c09e0
int TClassFactory_SpawnManagerClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c09f0*/
  if ( !v1 ) /*0x6c09f4*/
    RA2_OPDEL((void *)Block); /*0x6c09f7*/
  return v1; /*0x6c0a01*/
}
// 0x6c0a10
int TClassFactory_SpawnManagerClass::ddtor()
{
    SpawnManagerClass *v5; // eax
    int (__stdcall ***v6)(unsigned int, unsigned int *, unsigned int *); // eax
    int (__stdcall ***v7)(unsigned int, unsigned int *, unsigned int *); // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c0a18*/
      return -2147024809; /*0x6c0a1b*/
    *v9 = 0; /*0x6c0a28*/
    if ( a3 ) /*0x6c0a30*/
      return -2147221232; /*0x6c0a33*/
    v5 = (SpawnManagerClass *)RA2_OPNEW(0x74u); /*0x6c0a3e*/
    if ( !v5 ) /*0x6c0a48*/
      return -2147024882; /*0x6c0a48*/
    v6 = (int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *))SpawnManagerClass::Constructor(v5); /*0x6c0a4c*/
    v7 = v6; /*0x6c0a51*/
    if ( !v6 ) /*0x6c0a55*/
      return -2147024882; /*0x6c0a58*/
    v8 = (**v6)(v6, a4, v9); /*0x6c0a6c*/
    if ( v8 < 0 ) /*0x6c0a70*/
      ((void (__thiscall *)(int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *), int))(*v7)[8])(v7, 1); /*0x6c0a78*/
    return v8; /*0x6c0a1a*/
}
// 0x6c0a90
int TClassFactory_SpawnManagerClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c0a9a*/
    if ( v5 ) /*0x6c0a9d*/
      v3 = v2 + 1; /*0x6c0a9f*/
    else
      v3 = v2 - 1; /*0x6c0aa8*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c0aa0*/
    return 0; /*0x6c0aa5*/
}
// 0x6c18c0
int TClassFactory_TActionClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c18ce*/
}
// 0x6c18e0
int TClassFactory_TActionClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c18f0*/
  if ( !v1 ) /*0x6c18f4*/
    RA2_OPDEL((void *)Block); /*0x6c18f7*/
  return v1; /*0x6c1901*/
}
// 0x6c1910
int TClassFactory_TActionClass::ddtor()
{
    TActionClass *v5; // eax
    int (__stdcall ***v6)(unsigned int, unsigned int *, unsigned int *); // eax
    int (__stdcall ***v7)(unsigned int, unsigned int *, unsigned int *); // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c1918*/
      return -2147024809; /*0x6c191b*/
    *v9 = 0; /*0x6c1928*/
    if ( a3 ) /*0x6c1930*/
      return -2147221232; /*0x6c1933*/
    v5 = (TActionClass *)RA2_OPNEW(0x94u); /*0x6c1941*/
    if ( !v5 ) /*0x6c194b*/
      return -2147024882; /*0x6c194b*/
    v6 = (int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *))TActionClass::ctor(v5); /*0x6c194f*/
    v7 = v6; /*0x6c1954*/
    if ( !v6 ) /*0x6c1958*/
      return -2147024882; /*0x6c195b*/
    v8 = (**v6)(v6, a4, v9); /*0x6c196f*/
    if ( v8 < 0 ) /*0x6c1973*/
      ((void (__thiscall *)(int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *), int))(*v7)[8])(v7, 1); /*0x6c197b*/
    return v8; /*0x6c191a*/
}
// 0x6c1990
int TClassFactory_TActionClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c199a*/
    if ( v5 ) /*0x6c199d*/
      v3 = v2 + 1; /*0x6c199f*/
    else
      v3 = v2 - 1; /*0x6c19a8*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c19a0*/
    return 0; /*0x6c19a5*/
}
// 0x6c1440
int TClassFactory_TEventClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c144e*/
}
// 0x6c1460
int TClassFactory_TEventClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c1470*/
  if ( !v1 ) /*0x6c1474*/
    RA2_OPDEL((void *)Block); /*0x6c1477*/
  return v1; /*0x6c1481*/
}
// 0x6c1490
int TClassFactory_TEventClass::ddtor()
{
    TActionClass *v5; // eax
    int (__stdcall ***v6)(unsigned int, unsigned int *, unsigned int *); // eax
    int (__stdcall ***v7)(unsigned int, unsigned int *, unsigned int *); // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c1498*/
      return -2147024809; /*0x6c149b*/
    *v9 = 0; /*0x6c14a8*/
    if ( a3 ) /*0x6c14b0*/
      return -2147221232; /*0x6c14b3*/
    v5 = (TActionClass *)RA2_OPNEW(0x58u); /*0x6c14be*/
    if ( !v5 ) /*0x6c14c8*/
      return -2147024882; /*0x6c14c8*/
    v6 = (int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *))TActionClass::TActionClass(v5); /*0x6c14cc*/
    v7 = v6; /*0x6c14d1*/
    if ( !v6 ) /*0x6c14d5*/
      return -2147024882; /*0x6c14d8*/
    v8 = (**v6)(v6, a4, v9); /*0x6c14ec*/
    if ( v8 < 0 ) /*0x6c14f0*/
      ((void (__thiscall *)(int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *), int))(*v7)[8])(v7, 1); /*0x6c14f8*/
    return v8; /*0x6c149a*/
}
// 0x6c1510
int TClassFactory_TEventClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c151a*/
    if ( v5 ) /*0x6c151d*/
      v3 = v2 + 1; /*0x6c151f*/
    else
      v3 = v2 - 1; /*0x6c1528*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c1520*/
    return 0; /*0x6c1525*/
}
// 0x6c2040
int TClassFactory_TagClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c204e*/
}
// 0x6c2060
int TClassFactory_TagClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c2070*/
  if ( !v1 ) /*0x6c2074*/
    RA2_OPDEL((void *)Block); /*0x6c2077*/
  return v1; /*0x6c2081*/
}
// 0x6c2090
int TClassFactory_TagClass::ddtor()
{
    int v5; // eax
    int (__stdcall ***Type)(unsigned int, unsigned int *, unsigned int *); // eax
    int (__stdcall ***v7)(unsigned int, unsigned int *, unsigned int *); // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c2098*/
      return -2147024809; /*0x6c209b*/
    *v9 = 0; /*0x6c20a8*/
    if ( a3 ) /*0x6c20b0*/
      return -2147221232; /*0x6c20b3*/
    v5 = RA2_OPNEW(0x38u); /*0x6c20be*/
    if ( !v5 ) /*0x6c20c8*/
      return -2147024882; /*0x6c20c8*/
    Type = (int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *))TeknoClass::GetType(v5, 0); /*0x6c20ce*/
    v7 = Type; /*0x6c20d3*/
    if ( !Type ) /*0x6c20d7*/
      return -2147024882; /*0x6c20da*/
    v8 = (**Type)(Type, a4, v9); /*0x6c20ee*/
    if ( v8 < 0 ) /*0x6c20f2*/
      ((void (__thiscall *)(int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *), int))(*v7)[8])(v7, 1); /*0x6c20fa*/
    return v8; /*0x6c209a*/
}
// 0x6c2110
int TClassFactory_TagClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c211a*/
    if ( v5 ) /*0x6c211d*/
      v3 = v2 + 1; /*0x6c211f*/
    else
      v3 = v2 - 1; /*0x6c2128*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c2120*/
    return 0; /*0x6c2125*/
}
// 0x6c21c0
int TClassFactory_TagTypeClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c21ce*/
}
// 0x6c21e0
int TClassFactory_TagTypeClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c21f0*/
  if ( !v1 ) /*0x6c21f4*/
    RA2_OPDEL((void *)Block); /*0x6c21f7*/
  return v1; /*0x6c2201*/
}
// 0x6c2210
int TClassFactory_TagTypeClass::GetClassIdentifier()
{
    char *v5; // eax
    char *v6; // eax
    char *v7; // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c2218*/
      return -2147024809; /*0x6c221b*/
    *v9 = 0; /*0x6c2228*/
    if ( a3 ) /*0x6c2230*/
      return -2147221232; /*0x6c2233*/
    v5 = (char *)RA2_OPNEW(0xA4u); /*0x6c2241*/
    if ( !v5 ) /*0x6c224b*/
      return -2147024882; /*0x6c224b*/
    v6 = TagTypeClass::Construct(v5, 0); /*0x6c2251*/
    v7 = v6; /*0x6c2256*/
    if ( !v6 ) /*0x6c225a*/
      return -2147024882; /*0x6c225d*/
    v8 = (**(int (__stdcall ***)(char *, unsigned int *, unsigned int *))v6)(v6, a4, v9); /*0x6c2271*/
    if ( v8 < 0 ) /*0x6c2275*/
      (*(void (__thiscall **)(char *, int))(*(unsigned int *)v7 + 32))(v7, 1); /*0x6c227d*/
    return v8; /*0x6c221a*/
}
// 0x6c2290
int TClassFactory_TagTypeClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c229a*/
    if ( v5 ) /*0x6c229d*/
      v3 = v2 + 1; /*0x6c229f*/
    else
      v3 = v2 - 1; /*0x6c22a8*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c22a0*/
    return 0; /*0x6c22a5*/
}
// 0x6c2640
int TClassFactory_TaskForceClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c264e*/
}
// 0x6c2660
int TClassFactory_TaskForceClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c2670*/
  if ( !v1 ) /*0x6c2674*/
    RA2_OPDEL((void *)Block); /*0x6c2677*/
  return v1; /*0x6c2681*/
}
// 0x6c2690
int TClassFactory_TaskForceClass::ddtor()
{
    TaskForceClass *v5; // eax
    unsigned int *v6; // eax
    unsigned int *v7; // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c2698*/
      return -2147024809; /*0x6c269b*/
    *v9 = 0; /*0x6c26a8*/
    if ( a3 ) /*0x6c26b0*/
      return -2147221232; /*0x6c26b3*/
    v5 = (TaskForceClass *)RA2_OPNEW(0xD4u); /*0x6c26c1*/
    if ( !v5 ) /*0x6c26cb*/
      return -2147024882; /*0x6c26cb*/
    v6 = TaskForceClass::Construct(v5, 0); /*0x6c26d1*/
    v7 = v6; /*0x6c26d6*/
    if ( !v6 ) /*0x6c26da*/
      return -2147024882; /*0x6c26dd*/
    v8 = (*(int (__stdcall **)(unsigned int *, unsigned int *, unsigned int *))*v6)(v6, a4, v9); /*0x6c26f1*/
    if ( v8 < 0 ) /*0x6c26f5*/
      (*(void (__thiscall **)(unsigned int *, int))(*v7 + 32))(v7, 1); /*0x6c26fd*/
    return v8; /*0x6c269a*/
}
// 0x6c2710
int TClassFactory_TaskForceClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c271a*/
    if ( v5 ) /*0x6c271d*/
      v3 = v2 + 1; /*0x6c271f*/
    else
      v3 = v2 - 1; /*0x6c2728*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c2720*/
    return 0; /*0x6c2725*/
}
// 0x6c2340
int TClassFactory_TeamClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c234e*/
}
// 0x6c2360
int TClassFactory_TeamClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c2370*/
  if ( !v1 ) /*0x6c2374*/
    RA2_OPDEL((void *)Block); /*0x6c2377*/
  return v1; /*0x6c2381*/
}
// 0x6c2390
int TClassFactory_TeamClass::ddtor()
{
    int v5; // eax
    int (__stdcall ***v6)(unsigned int, unsigned int *, unsigned int *); // eax
    int (__stdcall ***v7)(unsigned int, unsigned int *, unsigned int *); // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c2398*/
      return -2147024809; /*0x6c239b*/
    *v9 = 0; /*0x6c23a8*/
    if ( a3 ) /*0x6c23b0*/
      return -2147221232; /*0x6c23b3*/
    v5 = RA2_OPNEW(0xA0u); /*0x6c23c1*/
    if ( !v5 ) /*0x6c23cb*/
      return -2147024882; /*0x6c23cb*/
    v6 = (int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *))MissionClass::Construct(v5, 0, 0, 0); /*0x6c23d5*/
    v7 = v6; /*0x6c23da*/
    if ( !v6 ) /*0x6c23de*/
      return -2147024882; /*0x6c23e1*/
    v8 = (**v6)(v6, a4, v9); /*0x6c23f5*/
    if ( v8 < 0 ) /*0x6c23f9*/
      ((void (__thiscall *)(int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *), int))(*v7)[8])(v7, 1); /*0x6c2401*/
    return v8; /*0x6c239a*/
}
// 0x6c2410
int TClassFactory_TeamClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c241a*/
    if ( v5 ) /*0x6c241d*/
      v3 = v2 + 1; /*0x6c241f*/
    else
      v3 = v2 - 1; /*0x6c2428*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c2420*/
    return 0; /*0x6c2425*/
}
// 0x6c24c0
int TClassFactory_TeamTypeClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c24ce*/
}
// 0x6c24e0
int TClassFactory_TeamTypeClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c24f0*/
  if ( !v1 ) /*0x6c24f4*/
    RA2_OPDEL((void *)Block); /*0x6c24f7*/
  return v1; /*0x6c2501*/
}
// 0x6c2510
int TClassFactory_TeamTypeClass::GetClassIdentifier()
{
    TeamTypeClass *v5; // eax
    unsigned int *Base; // eax
    unsigned int *v7; // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c2518*/
      return -2147024809; /*0x6c251b*/
    *v9 = 0; /*0x6c2528*/
    if ( a3 ) /*0x6c2530*/
      return -2147221232; /*0x6c2533*/
    v5 = (TeamTypeClass *)RA2_OPNEW(0xF8u); /*0x6c2541*/
    if ( !v5 ) /*0x6c254b*/
      return -2147024882; /*0x6c254b*/
    Base = TechnoTypeClass::LoadBase(v5, 0); /*0x6c2551*/
    v7 = Base; /*0x6c2556*/
    if ( !Base ) /*0x6c255a*/
      return -2147024882; /*0x6c255d*/
    v8 = (*(int (__stdcall **)(unsigned int *, unsigned int *, unsigned int *))*Base)(Base, a4, v9); /*0x6c2571*/
    if ( v8 < 0 ) /*0x6c2575*/
      (*(void (__thiscall **)(unsigned int *, int))(*v7 + 32))(v7, 1); /*0x6c257d*/
    return v8; /*0x6c251a*/
}
// 0x6c2590
int TClassFactory_TeamTypeClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c259a*/
    if ( v5 ) /*0x6c259d*/
      v3 = v2 + 1; /*0x6c259f*/
    else
      v3 = v2 - 1; /*0x6c25a8*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c25a0*/
    return 0; /*0x6c25a5*/
}
// 0x6c4bc0
int TClassFactory_TeleportLocomotionClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c4bce*/
}
// 0x6c4be0
int TClassFactory_TeleportLocomotionClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c4bf0*/
  if ( !v1 ) /*0x6c4bf4*/
    RA2_OPDEL((void *)Block); /*0x6c4bf7*/
  return v1; /*0x6c4c01*/
}
// 0x6c4c10
int TClassFactory_TeleportLocomotionClass::ddtor()
{
    TeleportLocomotionClass *v5; // eax
    int (__stdcall ***v6)(unsigned int, unsigned int *, unsigned int *); // eax
    int (__stdcall ***v7)(unsigned int, unsigned int *, unsigned int *); // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c4c18*/
      return -2147024809; /*0x6c4c1b*/
    *v9 = 0; /*0x6c4c28*/
    if ( a3 ) /*0x6c4c30*/
      return -2147221232; /*0x6c4c33*/
    v5 = (TeleportLocomotionClass *)RA2_OPNEW(0x4Cu); /*0x6c4c3e*/
    if ( !v5 ) /*0x6c4c48*/
      return -2147024882; /*0x6c4c48*/
    v6 = (int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *))TeleportLocomotionClass::TeleportLocomotionClass(v5); /*0x6c4c4c*/
    v7 = v6; /*0x6c4c51*/
    if ( !v6 ) /*0x6c4c55*/
      return -2147024882; /*0x6c4c58*/
    v8 = (**v6)(v6, a4, v9); /*0x6c4c6c*/
    if ( v8 < 0 ) /*0x6c4c70*/
      ((void (__thiscall *)(int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *), int))(*v7)[8])(v7, 1); /*0x6c4c78*/
    return v8; /*0x6c4c1a*/
}
// 0x6c4c90
int TClassFactory_TeleportLocomotionClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c4c9a*/
    if ( v5 ) /*0x6c4c9d*/
      v3 = v2 + 1; /*0x6c4c9f*/
    else
      v3 = v2 - 1; /*0x6c4ca8*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c4ca0*/
    return 0; /*0x6c4ca5*/
}
// 0x6c06c0
int TClassFactory_TemporalClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c06ce*/
}
// 0x6c06e0
int TClassFactory_TemporalClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c06f0*/
  if ( !v1 ) /*0x6c06f4*/
    RA2_OPDEL((void *)Block); /*0x6c06f7*/
  return v1; /*0x6c0701*/
}
// 0x6c0710
int TClassFactory_TemporalClass::ddtor()
{
    TemporalClass *v5; // eax
    int (__stdcall ***v6)(unsigned int, unsigned int *, unsigned int *); // eax
    int (__stdcall ***v7)(unsigned int, unsigned int *, unsigned int *); // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c0718*/
      return -2147024809; /*0x6c071b*/
    *v9 = 0; /*0x6c0728*/
    if ( a3 ) /*0x6c0730*/
      return -2147221232; /*0x6c0733*/
    v5 = (TemporalClass *)RA2_OPNEW(0x50u); /*0x6c073e*/
    if ( !v5 ) /*0x6c0748*/
      return -2147024882; /*0x6c0748*/
    v6 = (int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *))TemporalClass::Constructor(v5); /*0x6c074c*/
    v7 = v6; /*0x6c0751*/
    if ( !v6 ) /*0x6c0755*/
      return -2147024882; /*0x6c0758*/
    v8 = (**v6)(v6, a4, v9); /*0x6c076c*/
    if ( v8 < 0 ) /*0x6c0770*/
      ((void (__thiscall *)(int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *), int))(*v7)[8])(v7, 1); /*0x6c0778*/
    return v8; /*0x6c071a*/
}
// 0x6c0790
int TClassFactory_TemporalClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c079a*/
    if ( v5 ) /*0x6c079d*/
      v3 = v2 + 1; /*0x6c079f*/
    else
      v3 = v2 - 1; /*0x6c07a8*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c07a0*/
    return 0; /*0x6c07a5*/
}
// 0x6bff40
int TClassFactory_TiberiumClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bff4e*/
}
// 0x6bff60
int TClassFactory_TiberiumClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bff70*/
  if ( !v1 ) /*0x6bff74*/
    RA2_OPDEL((void *)Block); /*0x6bff77*/
  return v1; /*0x6bff81*/
}
// 0x6bff90
int TClassFactory_TiberiumClass::ddtor()
{
    TiberiumClass *v5; // eax
    unsigned int *v6; // eax
    unsigned int *v7; // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6bff98*/
      return -2147024809; /*0x6bff9b*/
    *v9 = 0; /*0x6bffa8*/
    if ( a3 ) /*0x6bffb0*/
      return -2147221232; /*0x6bffb3*/
    v5 = (TiberiumClass *)RA2_OPNEW(0x128u); /*0x6bffc1*/
    if ( !v5 ) /*0x6bffcb*/
      return -2147024882; /*0x6bffcb*/
    v6 = TiberiumClass::TiberiumClass(v5, 0); /*0x6bffd1*/
    v7 = v6; /*0x6bffd6*/
    if ( !v6 ) /*0x6bffda*/
      return -2147024882; /*0x6bffdd*/
    v8 = (*(int (__stdcall **)(unsigned int *, unsigned int *, unsigned int *))*v6)(v6, a4, v9); /*0x6bfff1*/
    if ( v8 < 0 ) /*0x6bfff5*/
      (*(void (__thiscall **)(unsigned int *, int))(*v7 + 32))(v7, 1); /*0x6bfffd*/
    return v8; /*0x6bff9a*/
}
// 0x6c0010
int TClassFactory_TiberiumClass::GetSize()
{
    int v2; // ecx
    int result; // eax
    int v4; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c001a*/
    if ( v4 ) /*0x6c001d*/
    {
      *(unsigned int *)(a2 + 4) = v2 + 1; /*0x6c0020*/
      nullsub_114(a2, v4); /*0x6c0024*/
    }
    else
    {
      *(unsigned int *)(a2 + 4) = v2 - 1; /*0x6c0029*/
      return 0; /*0x6c002c*/
    }
    return result; /*0x6c002e*/
}
// 0x6c1a40
int TClassFactory_TriggerClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c1a4e*/
}
// 0x6c1a60
int TClassFactory_TriggerClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c1a70*/
  if ( !v1 ) /*0x6c1a74*/
    RA2_OPDEL((void *)Block); /*0x6c1a77*/
  return v1; /*0x6c1a81*/
}
// 0x6c1a90
int TClassFactory_TriggerClass::ddtor()
{
    int v5; // eax
    int (__stdcall ***v6)(unsigned int, unsigned int *, unsigned int *); // eax
    int (__stdcall ***v7)(unsigned int, unsigned int *, unsigned int *); // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c1a98*/
      return -2147024809; /*0x6c1a9b*/
    *v9 = 0; /*0x6c1aa8*/
    if ( a3 ) /*0x6c1ab0*/
      return -2147221232; /*0x6c1ab3*/
    v5 = RA2_OPNEW(0x48u); /*0x6c1abe*/
    if ( !v5 ) /*0x6c1ac8*/
      return -2147024882; /*0x6c1ac8*/
    v6 = (int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *))TriggerClass::Construct(v5, 0); /*0x6c1ace*/
    v7 = v6; /*0x6c1ad3*/
    if ( !v6 ) /*0x6c1ad7*/
      return -2147024882; /*0x6c1ada*/
    v8 = (**v6)(v6, a4, v9); /*0x6c1aee*/
    if ( v8 < 0 ) /*0x6c1af2*/
      ((void (__thiscall *)(int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *), int))(*v7)[8])(v7, 1); /*0x6c1afa*/
    return v8; /*0x6c1a9a*/
}
// 0x6c1b10
int TClassFactory_TriggerClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c1b1a*/
    if ( v5 ) /*0x6c1b1d*/
      v3 = v2 + 1; /*0x6c1b1f*/
    else
      v3 = v2 - 1; /*0x6c1b28*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c1b20*/
    return 0; /*0x6c1b25*/
}
// 0x6c1bc0
int TClassFactory_TriggerTypeClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c1bce*/
}
// 0x6c1be0
int TClassFactory_TriggerTypeClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c1bf0*/
  if ( !v1 ) /*0x6c1bf4*/
    RA2_OPDEL((void *)Block); /*0x6c1bf7*/
  return v1; /*0x6c1c01*/
}
// 0x6c1c10
int TClassFactory_TriggerTypeClass::GetClassIdentifier()
{
    TriggerTypeClass *v5; // eax
    unsigned int *v6; // eax
    unsigned int *v7; // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c1c18*/
      return -2147024809; /*0x6c1c1b*/
    *v9 = 0; /*0x6c1c28*/
    if ( a3 ) /*0x6c1c30*/
      return -2147221232; /*0x6c1c33*/
    v5 = (TriggerTypeClass *)RA2_OPNEW(0xB4u); /*0x6c1c41*/
    if ( !v5 ) /*0x6c1c4b*/
      return -2147024882; /*0x6c1c4b*/
    v6 = TriggerTypeClass::Construct(v5, 0); /*0x6c1c51*/
    v7 = v6; /*0x6c1c56*/
    if ( !v6 ) /*0x6c1c5a*/
      return -2147024882; /*0x6c1c5d*/
    v8 = (*(int (__stdcall **)(unsigned int *, unsigned int *, unsigned int *))*v6)(v6, a4, v9); /*0x6c1c71*/
    if ( v8 < 0 ) /*0x6c1c75*/
      (*(void (__thiscall **)(unsigned int *, int))(*v7 + 32))(v7, 1); /*0x6c1c7d*/
    return v8; /*0x6c1c1a*/
}
// 0x6c1c90
int TClassFactory_TriggerTypeClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c1c9a*/
    if ( v5 ) /*0x6c1c9d*/
      v3 = v2 + 1; /*0x6c1c9f*/
    else
      v3 = v2 - 1; /*0x6c1ca8*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c1ca0*/
    return 0; /*0x6c1ca5*/
}
// 0x6c45c0
int TClassFactory_TunnelLocomotionClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c45ce*/
}
// 0x6c45e0
int TClassFactory_TunnelLocomotionClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c45f0*/
  if ( !v1 ) /*0x6c45f4*/
    RA2_OPDEL((void *)Block); /*0x6c45f7*/
  return v1; /*0x6c4601*/
}
// 0x6c4610
int TClassFactory_TunnelLocomotionClass::ddtor()
{
    TunnelLocomotionClass *v5; // eax
    int (__stdcall ***v6)(unsigned int, unsigned int *, unsigned int *); // eax
    int (__stdcall ***v7)(unsigned int, unsigned int *, unsigned int *); // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c4618*/
      return -2147024809; /*0x6c461b*/
    *v9 = 0; /*0x6c4628*/
    if ( a3 ) /*0x6c4630*/
      return -2147221232; /*0x6c4633*/
    v5 = (TunnelLocomotionClass *)RA2_OPNEW(0x3Cu); /*0x6c463e*/
    if ( !v5 ) /*0x6c4648*/
      return -2147024882; /*0x6c4648*/
    v6 = (int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *))SmallFunc_728A00(v5); /*0x6c464c*/
    v7 = v6; /*0x6c4651*/
    if ( !v6 ) /*0x6c4655*/
      return -2147024882; /*0x6c4658*/
    v8 = (**v6)(v6, a4, v9); /*0x6c466c*/
    if ( v8 < 0 ) /*0x6c4670*/
      ((void (__thiscall *)(int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *), int))(*v7)[8])(v7, 1); /*0x6c4678*/
    return v8; /*0x6c461a*/
}
// 0x6c4690
int TClassFactory_TunnelLocomotionClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c469a*/
    if ( v5 ) /*0x6c469d*/
      v3 = v2 + 1; /*0x6c469f*/
    else
      v3 = v2 - 1; /*0x6c46a8*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c46a0*/
    return 0; /*0x6c46a5*/
}
// 0x6c33c0
int TClassFactory_UnitClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c33ce*/
}
// 0x6c33e0
int TClassFactory_UnitClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c33f0*/
  if ( !v1 ) /*0x6c33f4*/
    RA2_OPDEL((void *)Block); /*0x6c33f7*/
  return v1; /*0x6c3401*/
}
// 0x6c3410
int TClassFactory_UnitClass::ddtor()
{
    int *v5; // eax
    int (__stdcall ***v6)(unsigned int, unsigned int *, unsigned int *); // eax
    int (__stdcall ***v7)(unsigned int, unsigned int *, unsigned int *); // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c3418*/
      return -2147024809; /*0x6c341b*/
    *v9 = 0; /*0x6c3428*/
    if ( a3 ) /*0x6c3430*/
      return -2147221232; /*0x6c3433*/
    v5 = (int *)RA2_OPNEW(0x8E8u); /*0x6c3441*/
    if ( !v5 ) /*0x6c344b*/
      return -2147024882; /*0x6c344b*/
    v6 = (int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *))UnitClass::Construct(v5, 0, 0); /*0x6c3453*/
    v7 = v6; /*0x6c3458*/
    if ( !v6 ) /*0x6c345c*/
      return -2147024882; /*0x6c345f*/
    v8 = (**v6)(v6, a4, v9); /*0x6c3473*/
    if ( v8 < 0 ) /*0x6c3477*/
      ((void (__thiscall *)(int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *), int))(*v7)[8])(v7, 1); /*0x6c347f*/
    return v8; /*0x6c341a*/
}
    int v2;

// 0x6c3490
int TClassFactory_UnitClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c349a*/
    if ( v5 ) /*0x6c349d*/
      v3 = v2 + 1; /*0x6c349f*/
    else
      v3 = v2 - 1; /*0x6c34a8*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c34a0*/
    return 0; /*0x6c34a5*/
}
// 0x6c27c0
int TClassFactory_UnitTypeClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c27ce*/
}
// 0x6c27e0
int TClassFactory_UnitTypeClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c27f0*/
  if ( !v1 ) /*0x6c27f4*/
    RA2_OPDEL((void *)Block); /*0x6c27f7*/
  return v1; /*0x6c2801*/
}
// 0x6c2810
int TClassFactory_UnitTypeClass::GetClassIdentifier()
{
    int v5; // eax
    int (__stdcall ***v6)(unsigned int, unsigned int *, unsigned int *); // eax
    int (__stdcall ***v7)(unsigned int, unsigned int *, unsigned int *); // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c2818*/
      return -2147024809; /*0x6c281b*/
    *v9 = 0; /*0x6c2828*/
    if ( a3 ) /*0x6c2830*/
      return -2147221232; /*0x6c2833*/
    v5 = RA2_OPNEW(0xE78u); /*0x6c2841*/
    if ( !v5 ) /*0x6c284b*/
      return -2147024882; /*0x6c284b*/
    v6 = (int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *))UnitTypeClass::UnitTypeClass(v5, 0); /*0x6c2851*/
    v7 = v6; /*0x6c2856*/
    if ( !v6 ) /*0x6c285a*/
      return -2147024882; /*0x6c285d*/
    v8 = (**v6)(v6, a4, v9); /*0x6c2871*/
    if ( v8 < 0 ) /*0x6c2875*/
      ((void (__thiscall *)(int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *), int))(*v7)[8])(v7, 1); /*0x6c287d*/
    return v8; /*0x6c281a*/
}
// 0x6c2890
int TClassFactory_UnitTypeClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c289a*/
    if ( v5 ) /*0x6c289d*/
      v3 = v2 + 1; /*0x6c289f*/
    else
      v3 = v2 - 1; /*0x6c28a8*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c28a0*/
    return 0; /*0x6c28a5*/
}
// 0x6c1740
int TClassFactory_VoxelAnimClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c174e*/
}
// 0x6c1760
int TClassFactory_VoxelAnimClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c1770*/
  if ( !v1 ) /*0x6c1774*/
    RA2_OPDEL((void *)Block); /*0x6c1777*/
  return v1; /*0x6c1781*/
}
// 0x6c1790
int TClassFactory_VoxelAnimClass::ddtor()
{
    ObjectClass *v5; // eax
    int (__stdcall ***v6)(unsigned int, unsigned int *, unsigned int *); // eax
    int (__stdcall ***v7)(unsigned int, unsigned int *, unsigned int *); // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c1798*/
      return -2147024809; /*0x6c179b*/
    *v9 = 0; /*0x6c17a8*/
    if ( a3 ) /*0x6c17b0*/
      return -2147221232; /*0x6c17b3*/
    v5 = (ObjectClass *)RA2_OPNEW(0x148u); /*0x6c17c1*/
    if ( !v5 ) /*0x6c17cb*/
      return -2147024882; /*0x6c17cb*/
    v6 = (int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *))ObjectClass::Initialize(v5); /*0x6c17cf*/
    v7 = v6; /*0x6c17d4*/
    if ( !v6 ) /*0x6c17d8*/
      return -2147024882; /*0x6c17db*/
    v8 = (**v6)(v6, a4, v9); /*0x6c17ef*/
    if ( v8 < 0 ) /*0x6c17f3*/
      ((void (__thiscall *)(int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *), int))(*v7)[8])(v7, 1); /*0x6c17fb*/
    return v8; /*0x6c179a*/
}
// 0x6c1810
int TClassFactory_VoxelAnimClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c181a*/
    if ( v5 ) /*0x6c181d*/
      v3 = v2 + 1; /*0x6c181f*/
    else
      v3 = v2 - 1; /*0x6c1828*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c1820*/
    return 0; /*0x6c1825*/
}
// 0x6c15c0
int TClassFactory_VoxelAnimTypeClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c15ce*/
}
// 0x6c15e0
int TClassFactory_VoxelAnimTypeClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c15f0*/
  if ( !v1 ) /*0x6c15f4*/
    RA2_OPDEL((void *)Block); /*0x6c15f7*/
  return v1; /*0x6c1601*/
}
// 0x6c1610
int TClassFactory_VoxelAnimTypeClass::GetClassIdentifier()
{
    VoxelAnimTypeClass *v5; // eax
    unsigned int *v6; // eax
    unsigned int *v7; // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c1618*/
      return -2147024809; /*0x6c161b*/
    *v9 = 0; /*0x6c1628*/
    if ( a3 ) /*0x6c1630*/
      return -2147221232; /*0x6c1633*/
    v5 = (VoxelAnimTypeClass *)RA2_OPNEW(0x308u); /*0x6c1641*/
    if ( !v5 ) /*0x6c164b*/
      return -2147024882; /*0x6c164b*/
    v6 = VoxelAnimTypeClass::Constructor(v5, 0); /*0x6c1651*/
    v7 = v6; /*0x6c1656*/
    if ( !v6 ) /*0x6c165a*/
      return -2147024882; /*0x6c165d*/
    v8 = (*(int (__stdcall **)(unsigned int *, unsigned int *, unsigned int *))*v6)(v6, a4, v9); /*0x6c1671*/
    if ( v8 < 0 ) /*0x6c1675*/
      (*(void (__thiscall **)(unsigned int *, int))(*v7 + 32))(v7, 1); /*0x6c167d*/
    return v8; /*0x6c161a*/
}
// 0x6c1690
int TClassFactory_VoxelAnimTypeClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c169a*/
    if ( v5 ) /*0x6c169d*/
      v3 = v2 + 1; /*0x6c169f*/
    else
      v3 = v2 - 1; /*0x6c16a8*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c16a0*/
    return 0; /*0x6c16a5*/
}
// 0x6c4740
int TClassFactory_WalkLocomotionClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c474e*/
}
// 0x6c4760
int TClassFactory_WalkLocomotionClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c4770*/
  if ( !v1 ) /*0x6c4774*/
    RA2_OPDEL((void *)Block); /*0x6c4777*/
  return v1; /*0x6c4781*/
}
// 0x6c4790
int TClassFactory_WalkLocomotionClass::ddtor()
{
    VoxelAnimClass *v5; // eax
    int (__stdcall ***v6)(unsigned int, unsigned int *, unsigned int *); // eax
    int (__stdcall ***v7)(unsigned int, unsigned int *, unsigned int *); // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c4798*/
      return -2147024809; /*0x6c479b*/
    *v9 = 0; /*0x6c47a8*/
    if ( a3 ) /*0x6c47b0*/
      return -2147221232; /*0x6c47b3*/
    v5 = (VoxelAnimClass *)RA2_OPNEW(0x3Cu); /*0x6c47be*/
    if ( !v5 ) /*0x6c47c8*/
      return -2147024882; /*0x6c47c8*/
    v6 = (int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *))VoxelAnimClass::Reset(v5); /*0x6c47cc*/
    v7 = v6; /*0x6c47d1*/
    if ( !v6 ) /*0x6c47d5*/
      return -2147024882; /*0x6c47d8*/
    v8 = (**v6)(v6, a4, v9); /*0x6c47ec*/
    if ( v8 < 0 ) /*0x6c47f0*/
      ((void (__thiscall *)(int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *), int))(*v7)[8])(v7, 1); /*0x6c47f8*/
    return v8; /*0x6c479a*/
}
// 0x6c4810
int TClassFactory_WalkLocomotionClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c481a*/
    if ( v5 ) /*0x6c481d*/
      v3 = v2 + 1; /*0x6c481f*/
    else
      v3 = v2 - 1; /*0x6c4828*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c4820*/
    return 0; /*0x6c4825*/
}
// 0x6c5340
int TClassFactory_WarheadTypeClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c534e*/
}
// 0x6c5360
int TClassFactory_WarheadTypeClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c5370*/
  if ( !v1 ) /*0x6c5374*/
    RA2_OPDEL((void *)Block); /*0x6c5377*/
  return v1; /*0x6c5381*/
}
// 0x6c5390
int TClassFactory_WarheadTypeClass::GetClassIdentifier()
{
    int v5; // eax
    int (__stdcall ***v6)(unsigned int, unsigned int *, unsigned int *); // eax
    int (__stdcall ***v7)(unsigned int, unsigned int *, unsigned int *); // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c5398*/
      return -2147024809; /*0x6c539b*/
    *v9 = 0; /*0x6c53a8*/
    if ( a3 ) /*0x6c53b0*/
      return -2147221232; /*0x6c53b3*/
    v5 = RA2_OPNEW(0x1D0u); /*0x6c53c1*/
    if ( !v5 ) /*0x6c53cb*/
      return -2147024882; /*0x6c53cb*/
    v6 = (int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *))WarheadTypeClass::Construct(v5, 0); /*0x6c53d1*/
    v7 = v6; /*0x6c53d6*/
    if ( !v6 ) /*0x6c53da*/
      return -2147024882; /*0x6c53dd*/
    v8 = (**v6)(v6, a4, v9); /*0x6c53f1*/
    if ( v8 < 0 ) /*0x6c53f5*/
      ((void (__thiscall *)(int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *), int))(*v7)[8])(v7, 1); /*0x6c53fd*/
    return v8; /*0x6c539a*/
}
// 0x6c5410
int TClassFactory_WarheadTypeClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c541a*/
    if ( v5 ) /*0x6c541d*/
      v3 = v2 + 1; /*0x6c541f*/
    else
      v3 = v2 - 1; /*0x6c5428*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c5420*/
    return 0; /*0x6c5425*/
}
// 0x6c0540
int TClassFactory_WaypointPathClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c054e*/
}
// 0x6c0560
int TClassFactory_WaypointPathClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c0570*/
  if ( !v1 ) /*0x6c0574*/
    RA2_OPDEL((void *)Block); /*0x6c0577*/
  return v1; /*0x6c0581*/
}
// 0x6c0590
int TClassFactory_WaypointPathClass::ddtor()
{
    WaypointPathClass *v5; // eax
    int (__stdcall ***v6)(unsigned int, unsigned int *, unsigned int *); // eax
    int (__stdcall ***v7)(unsigned int, unsigned int *, unsigned int *); // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c0598*/
      return -2147024809; /*0x6c059b*/
    *v9 = 0; /*0x6c05a8*/
    if ( a3 ) /*0x6c05b0*/
      return -2147221232; /*0x6c05b3*/
    v5 = (WaypointPathClass *)RA2_OPNEW(0x40u); /*0x6c05be*/
    if ( !v5 ) /*0x6c05c8*/
      return -2147024882; /*0x6c05c8*/
    v6 = (int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *))WaypointPathClass::Init(v5); /*0x6c05cc*/
    v7 = v6; /*0x6c05d1*/
    if ( !v6 ) /*0x6c05d5*/
      return -2147024882; /*0x6c05d8*/
    v8 = (**v6)(v6, a4, v9); /*0x6c05ec*/
    if ( v8 < 0 ) /*0x6c05f0*/
      ((void (__thiscall *)(int (__stdcall ***)(unsigned int, unsigned int *, unsigned int *), int))(*v7)[8])(v7, 1); /*0x6c05f8*/
    return v8; /*0x6c059a*/
}
// 0x6c0610
int TClassFactory_WaypointPathClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c061a*/
    if ( v5 ) /*0x6c061d*/
      v3 = v2 + 1; /*0x6c061f*/
    else
      v3 = v2 - 1; /*0x6c0628*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c0620*/
    return 0; /*0x6c0625*/
}
// 0x6c54c0
int TClassFactory_WeaponTypeClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c54ce*/
}
// 0x6c54e0
int TClassFactory_WeaponTypeClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c54f0*/
  if ( !v1 ) /*0x6c54f4*/
    RA2_OPDEL((void *)Block); /*0x6c54f7*/
  return v1; /*0x6c5501*/
}
// 0x6c5510
int TClassFactory_WeaponTypeClass::GetClassIdentifier()
{
    WeaponTypeClass *v5; // eax
    unsigned int *v6; // eax
    unsigned int *v7; // esi
    int v8; // edi
    unsigned int *v9; // [esp+18h] [ebp+10h]

    if ( !v9 ) /*0x6c5518*/
      return -2147024809; /*0x6c551b*/
    *v9 = 0; /*0x6c5528*/
    if ( a3 ) /*0x6c5530*/
      return -2147221232; /*0x6c5533*/
    v5 = (WeaponTypeClass *)RA2_OPNEW(0x160u); /*0x6c5541*/
    if ( !v5 ) /*0x6c554b*/
      return -2147024882; /*0x6c554b*/
    v6 = WeaponTypeClass::Constructor(v5, 0); /*0x6c5551*/
    v7 = v6; /*0x6c5556*/
    if ( !v6 ) /*0x6c555a*/
      return -2147024882; /*0x6c555d*/
    v8 = (*(int (__stdcall **)(unsigned int *, unsigned int *, unsigned int *))*v6)(v6, a4, v9); /*0x6c5571*/
    if ( v8 < 0 ) /*0x6c5575*/
      (*(void (__thiscall **)(unsigned int *, int))(*v7 + 32))(v7, 1); /*0x6c557d*/
    return v8; /*0x6c551a*/
}
// 0x6c5590
int TClassFactory_WeaponTypeClass::GetSize()
{
    int v2; // ecx
    int v3; // ecx
    int v5; // [esp+8h] [ebp+8h]

    v2 = *(unsigned int *)(a2 + 4); /*0x6c559a*/
    if ( v5 ) /*0x6c559d*/
      v3 = v2 + 1; /*0x6c559f*/
    else
      v3 = v2 - 1; /*0x6c55a8*/
    *(unsigned int *)(a2 + 4) = v3; /*0x6c55a0*/
    return 0; /*0x6c55a5*/
}
// 0x510640
void TagClassVector::Construct( int a2, int a3)
{
}
// 0x4a9720
void Targeting::Readd(IUnknown * aP0)
{
}
// 0x6b7100
void TaskManager::Update()
{
}
// 0x4cabf0
void TechnoTypeVector::Constructor( int a2, int a3)
{
}
// 0x68c200
void TechnoTypeVector::Construct( int a2, int a3)
{
}
// 0x6e4de0
void TeknoClass::GetType( TeamTypeClass * aP1)
{
}
// 0x67b370
void TerrainTypeVector::Construct( int a2, int a3)
{
}
// 0x770020
void Territory_WorldDominationTour::QueryInterface( char a2)
{
}
// 0x545000
int TheatreClass::InitView()
{
    int v0; // edx
    unsigned int *v1; // esi
    int v2; // eax
    void *v3; // eax
    int v4; // esi
    int v5; // eax
    int result; // eax

    v0 = dword_87F6A8; /*0x545000*/
    if ( dword_87F6A8 > 0 ) /*0x545009*/
    {
      v1 = dword_87F69C; /*0x54500b*/
      do /*0x545054*/
      {
        if ( *v1 ) /*0x545011*/
        {
          (**(void (__thiscall ***)(unsigned int, int))*v1)(*v1, 1); /*0x54501b*/
          v1 = dword_87F69C; /*0x54501d*/
          v0 = dword_87F6A8; /*0x545023*/
        }
        if ( v0 <= 0 ) /*0x54502b*/
          break; /*0x54502b*/
        v2 = 0; /*0x54502e*/
        dword_87F6A8 = v0 - 1; /*0x545032*/
        if ( v0 - 1 <= 0 ) /*0x545038*/
          break; /*0x545038*/
        do /*0x545050*/
        {
          v1[v2] = v1[v2 + 1]; /*0x54503e*/
          v0 = dword_87F6A8; /*0x545041*/
          v1 = dword_87F69C; /*0x545047*/
          ++v2; /*0x54504d*/
        }
        while ( v2 < dword_87F6A8 ); /*0x545050*/
      }
      while ( dword_87F6A8 > 0 ); /*0x545054*/
    }
    v3 = RA2_OPNEW(0x1B4u); /*0x54505b*/
    if ( v3 ) /*0x545065*/
      v4 = LightConvertClass::Constructor( /*0x545094*/
             (int)v3,
             (int)&unk_ABBED0,
             (int)&FileSystem_TEMPERAT_PAL,
             g_DSurface_Primary,
             1000,
             1000,
             1000,
             0,
             0,
             53);
    else
      v4 = 0; /*0x545098*/
    if ( dword_87F6A8 < dword_87F6A0 /*0x5450d0*/
      || (byte_87F6A5 || !dword_87F6A0)
      && dword_87F6AC > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, unsigned int))(dword_87F698 + 8))(
           &dword_87F698,
           dword_87F6A0 + dword_87F6AC,
           0) )
    {
      v5 = dword_87F6A8++; /*0x5450dd*/
      *((unsigned int *)dword_87F69C + v5) = v4; /*0x5450ec*/
    }
    dword_ABDC84 = 0; /*0x54510c*/
    TacticalClass::SetView((int)unk_ABDC50, 0, 0x10000, 0, 1000, 1000, 1000); /*0x545116*/
    LayerClass::CellIteratorReset(&dword_87F7E8); /*0x545120*/
    for ( result = LayerClass::CellIteratorNext(&dword_87F7E8); result; result = LayerClass::CellIteratorNext(&dword_87F7E8) ) /*0x545132*/
      *(unsigned int *)(result + 52) = 0; /*0x545139*/
    return result; /*0x545131*/
}
// 0x58bdc0
int TileData::Constructor()
{
    *((unsigned int *)this + 2) = 0; /*0x58bdc4*/
    *((unsigned int *)this + 4) = 0; /*0x58bdc7*/
    *((unsigned int *)this + 6) = 0; /*0x58bdca*/
    *((unsigned int *)this + 8) = 0; /*0x58bdcd*/
    *((unsigned int *)this + 10) = 0; /*0x58bdd0*/
    *((unsigned int *)this + 12) = 0; /*0x58bdd3*/
    *(unsigned short *)this->__tail_0 = 0; /*0x58bdd6*/
    *(unsigned short *)&this->__tail_0[2] = 0; /*0x58bdd9*/
    *((unsigned int *)this + 3) = 0; /*0x58bddd*/
    *((unsigned int *)this + 5) = 0; /*0x58bde0*/
    *((unsigned int *)this + 7) = 0; /*0x58bde3*/
    *((unsigned int *)this + 9) = 0; /*0x58bde6*/
    *((unsigned int *)this + 11) = 0; /*0x58bde9*/
    *((unsigned int *)this + 13) = 0; /*0x58bdec*/
    *((unsigned int *)this + 14) = 0; /*0x58bdef*/
    *((unsigned int *)this + 15) = 0; /*0x58bdf2*/
    *((unsigned int *)this + 16) = -1; /*0x58bdf5*/
    *((unsigned char *)this + 68) = 0; /*0x58bdfc*/
    *((unsigned char *)this + 69) = 0; /*0x58bdff*/
    *((unsigned char *)this + 70) = 0; /*0x58be02*/
    *((unsigned char *)this + 71) = 0; /*0x58be05*/
    *((unsigned char *)this + 72) = 0; /*0x58be08*/
    *((unsigned char *)this + 73) = 0; /*0x58be0b*/
    *((unsigned char *)this + 74) = 1; /*0x58be0e*/
    *((unsigned char *)this + 75) = 0; /*0x58be12*/
    return this; /*0x58be15*/
}
// 0x58c070
void TileNode::Cleanup()
{
}
// 0x58d0a0
int TileSystem::LookupMapTile()
{
  /* G42: g_MissionQueueFrame is ScenarioClass @0xABC5F8; localVariables member
     at +0x248C (IDA til truth). Byte-exact rewrite of the struct-member access. */
  if ( *(unsigned int *)((unsigned char *)&g_MissionQueueFrame + 0x248C + 163 * 4) ) /*0x58d0a8*/
    return *(unsigned int *)(80 * (*(int16_t *)((unsigned char *)(this) + 0x0) + g_MapCellWidth * *(int16_t *)&((unsigned char *)(this) + 0x0)[2]) /*0x58d0c4*/
                     + *(unsigned int *)((unsigned char *)&g_MissionQueueFrame + 0x248C + 163 * 4)
                     + 56);
  else
    return -1; /*0x58d0aa*/
}
// 0x58d620
void TileSystem::BuildNodes()
{
}

// 0x58e5d0
void TileSystem::AnalyzeTileConnectivity()
{
}
// 0x5ad740
void TileSystem::Constructor( ObjectClass * aP1, ObjectClass * aP2)
{
}
// 0x589c50
void TileVector::PushBack( MouseClass * aP1)
{
}
// 0x4b5810
void ToggleClass::QueryInterface(unsigned int * Block, char a2)
{
}
// 0x723e60
void ToggleClass::Construct( ControlClass * aP1, ControlClass * aP2, ControlClass * aP3, ControlClass * aP4, ControlClass * aP5)
{
}
// 0x536fa0
void ToggleRepairModeCommandClass::Execute(int a1)
{
}
// 0x43a0b0
void Triple::Set( IUnknown * aP1, IUnknown * aP2, IUnknown * aP3)
{
}
// 0x67a740
int UnitTypeList::Constructor()
{
    *((unsigned int *)this + 1) = 0; /*0x67a744*/
    *((unsigned int *)this + 2) = 0; /*0x67a747*/
    *((unsigned char *)this + 12) = 1; /*0x67a74a*/
    *((unsigned char *)this + 13) = 0; /*0x67a74e*/
    *((unsigned int *)this + 5) = 10; /*0x67a751*/
    *((unsigned int *)this + 4) = 0; /*0x67a758*/
    *this = (UnitTypeList)&TypeList<UnitTypeClass const *>::`vftable'; /*0x67a75b*/
    return this; /*0x67a761*/
}
// 0x512b30
void UnitTypeVector::QueryInterface(unsigned int * Block, char a2)
{
}
// 0x513050
void UnitTypeVector::Release( int a2, unsigned int * a3)
{
}
// 0x513130
void UnitTypeVector::Add( unsigned int * a2)
{
}
// 0x513170
void UnitTypeVector::Remove( int a2)
{
}
// 0x513190
void UnitTypeVector::Construct( int a2, int a3)
{
}
// 0x759c30
void VQAClass::AdvanceFrame( unsigned char * a2)
{
}
// 0x74dc00
void VeinholeClass::SelectGrowthPosition()
{
}
// 0x74fff0
int VeinholeClass::GetState()
{
  return *(float *)((unsigned char *)(this) + 0x0) < 0.0; /*0x750004*/
}
// 0x74c420
void VeinholeMonsterClass::Construct( AbstractClass * aP1)
{
}
// 0x74c5b0
void VeinholeMonsterClass::Constructor( IUnknown * aP1)
{
}
// 0x74ce50
void VeinholeMonsterClass::UpdateGrowth()
{
}
// 0x74d5d0
void VeinholeMonsterClass::ProcessExpansion( int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
}
// 0x74e930
void VeinholeMonsterClass::PlaceGrowth()
{
}
// 0x74f760
void VersionInfo::Read()
{
}
// 0x692b60
void Viewport::ProcessScroll( unsigned int * a2)
{
}
// 0x753e00
int Viewport::Clear()
{
    int v1; // esi
    int v2; // edx
    char *v3; // esi
    int v4; // ebx
    char *v5; // edi
    unsigned int v6; // ebx
    char *v7; // esi
    int v8; // edx
    char *v9; // edi

    stru_B2D804.Buffer_field_1C = 0; /*0x753e10*/
    dword_B2FB70 = 0; /*0x753e16*/
    if ( dword_8467E0 ) /*0x753e1c*/
    {
      dword_8467E0 = 0; /*0x753e2a*/
      memset(g_VoxelRenderBuffer, 0, 0x10000u); /*0x753e30*/
      memset(byte_B1D5E0, 0, 0x10000u); /*0x753e3c*/
    }
    else
    {
      v1 = dword_B2FB60; /*0x753e43*/
      v2 = dword_B2FB64; /*0x753e49*/
      if ( dword_B2FB60 < 0 || dword_B2FB64 < 0 || dword_B2FB60 + dword_B2FB68 > 255 || dword_B2FB6C + dword_B2FB64 > 255 ) /*0x753e73*/
      {
        memset(g_VoxelRenderBuffer, 0, 0x10000u); /*0x753ec3*/
      }
      else if ( dword_B2FB64 <= dword_B2FB6C + dword_B2FB64 ) /*0x753e77*/
      {
        v3 = &g_VoxelRenderBuffer[256 * dword_B2FB64 + dword_B2FB60]; /*0x753e81*/
        v4 = dword_B2FB6C + 1; /*0x753e88*/
        do /*0x753eab*/
        {
          v5 = v3; /*0x753e8f*/
          v3 += 256; /*0x753e91*/
          memset(v5, 0, dword_B2FB68 + 1); /*0x753ea1*/
          --v4; /*0x753ea8*/
        }
        while ( v4 ); /*0x753eab*/
        v1 = dword_B2FB60; /*0x753ead*/
      }
      if ( dword_B43180 && v2 <= dword_B2FB6C + v2 ) /*0x753ed8*/
      {
        v6 = dword_B2FB68 + 1; /*0x753ee2*/
        v7 = &byte_B1D5E0[256 * v2 + v1]; /*0x753eeb*/
        v8 = dword_B2FB6C + 1; /*0x753ef2*/
        do /*0x753f0f*/
        {
          memset(v7, 0, 4 * (v6 >> 2)); /*0x753eff*/
          v9 = &v7[4 * (v6 >> 2)]; /*0x753eff*/
          v7 += 256; /*0x753f03*/
          --v8; /*0x753f0c*/
          memset(v9, 0, v6 & 3); /*0x753f0d*/
        }
        while ( v8 ); /*0x753f0f*/
      }
    }
    dword_B2D5E0 = 1176256512; /*0x753f35*/
    dword_B2D5E4 = 1176256512; /*0x753f3b*/
    dword_B2D5E8 = 1176256512; /*0x753f40*/
    stru_B2D93C.Buffer_field_0C = -971227136; /*0x753f6d*/
    stru_B2D93C.Buffer_field_10 = -971227136; /*0x753f73*/
    stru_B2D93C.Buffer_field_14 = -971227136; /*0x753f78*/
    return -971227136; /*0x753f6a*/
}
// 0x407510
void VtableStub::Push_407510(void * Block)
{
}
// 0x425270
void VtableStub::Method_425270()
{
}
// 0x477740
int VtableStub::Method_477740()
{
  return (*(int (**)(VtableStub *))(*(unsigned int *)((unsigned char *)(this) + 0x0) + 4))(this);
}
// 0x5175d0
void VtableStub::Method_5175D0()
{
}
// 0x55cbf0
int VtableStub::Method_55CBF0()
{
  return byte_ABCD58; /*0x55cbf5*/
}
// 0x76f600
void WDTClass::GetCellType(unsigned int a2)
{
}
// 0x76f670
void WDTClass::CountCellType( int a2)
{
}
// 0x7693f0
void WDTGame::ToggleTeamMode( ObjectClass * aP1, ObjectClass * aP2)
{
}
// 0x76d180
void WDTGame::ProcessTerritorySelection( unsigned int * a1, ObjectClass * aP2)
{
}
// 0x76e4f0
void WDTGame::ReviewHistory()
{
}
// 0x76f030
void WDTGame::Constructor( ObjectClass * aP1)
{
}
// 0x76bfa0
void WDTObject::GetSize()
{
}
// 0x76ff30
void WDTObject::GetAndClearFlag()
{
}
// 0x76afc0
void WDTState::Constructor_WDTState()
{
}
// 0x76b6f0
void WDTState::QueryInterface(void * Block, char a2)
{
}
// 0x7693a0
void WDTSurface::ToggleState( ObjectClass * aP1, ObjectClass * aP2)
{
}
// 0x769440
void WDTSurface::PointInRect( unsigned int * a2)
{
}
// 0x7b6970
void WString::Append( CampaignScore * aP1)
{
}
// 0x7b6f40
void WString::TrimRight( const wchar_t ** a2)
{
}
// 0x5a9a70
void WaypointPath::Constructor( rc_ptr_base * aP1, rc_ptr_base * aP2)
{
}
// 0x7cbb76
void WideChar::ToLong(BlowStraw * aP0, int a2, int a3)
{
}
// 0x7dc720
int WinAPI::Wrapper(int a2)
{
  return a2; /*0x7dc720 SetLastError 族封装占位 (G42.33 签名对齐二进制 __fastcall(int))*/
}

// 0x774120
_DWORD * WinModemClass::Construct()
{
    *(unsigned int *)this->__pad_0 = &WinModemClass::`vftable'; /*0x774128*/
    this->WinModemClass_field_0x24 = RA2_OPNEW(0x2000u); /*0x774133*/
    *((unsigned int *)this + 21) = 0; /*0x77413b*/
    *((unsigned int *)this + 22) = 0; /*0x77413e*/
    *((unsigned char *)this + 80) = 0; /*0x774141*/
    *((unsigned char *)this + 81) = 0; /*0x774144*/
    *((unsigned int *)this + 26) = 0; /*0x774147*/
    *((unsigned int *)this + 25) = 0; /*0x77414a*/
    this->WinModemClass_field_0x04 = 0; /*0x77414d*/
    this->WinModemClass_field_0x08 = 0; /*0x774150*/
    this->WinModemClass_field_0x0C = 0; /*0x774153*/
    this->WinModemClass_field_0x10 = 0; /*0x774156*/
    this->WinModemClass_field_0x14 = 0; /*0x774159*/
    this->WinModemClass_field_0x18 = 0; /*0x77415c*/
    *((unsigned int *)this + 23) = -1; /*0x77415f*/
    return this->__pad_0; /*0x774168*/
}
// 0x774410
char WinModemClass::AddRef( const char * a2, DWORD a3, BYTE a4, BYTE a5, char a6)
{
    HANDLE FileA; // ebp
    DWORD v9; // edx
    DWORD cbInQue; // eax
    DWORD cbOutQue; // ecx
    bool v12; // zf
    DWORD Errors; // [esp+10h] [ebp-14Ch] BYREF
    struct _COMSTAT Stat; // [esp+14h] [ebp-148h] BYREF
    struct _DCB DCB; // [esp+20h] [ebp-13Ch] BYREF
    struct _COMMTIMEOUTS CommTimeouts; // [esp+3Ch] [ebp-120h] BYREF
    CHAR FileName[268]; // [esp+50h] [ebp-10Ch] BYREF

    strcpy(FileName, "\\\\.\\"); /*0x774427*/
    memset(&FileName[5], 0, 261); /*0x77443a*/
    strcat(FileName, a2); /*0x774465*/
    if ( *((unsigned int *)this + 23) != -1 ) /*0x774473*/
    {
      Debug::Log(); /*0x77447a*/
      CloseHandle(*((HANDLE *)this + 23)); /*0x774486*/
      *((unsigned int *)this + 23) = -1; /*0x77448c*/
    }
    Debug::Log(); /*0x774499*/
    FileA = CreateFileA(FileName, 0xC0000000, 0, 0, 3u, 0x40000000u, 0); /*0x7744bd*/
    if ( FileA == (HANDLE)-1 ) /*0x7744c2*/
    {
      Debug::Log(); /*0x7744ca*/
      return -1; /*0x7744d2*/
    }
    else
    {
      Debug::Log(); /*0x7744e6*/
      *((unsigned int *)this + 23) = FileA; /*0x7744ee*/
      SetupComm(FileA, 0x2000u, 0x2000u); /*0x7744fc*/
      PurgeComm(*((HANDLE *)this + 23), 0xFu); /*0x774508*/
      this->WinModemClass_field_0x28 = 0; /*0x77451a*/
      this->WinModemClass_field_0x2C = 0; /*0x77451d*/
      this->WinModemClass_field_0x30 = 0; /*0x774520*/
      this->WinModemClass_field_0x34 = 0; /*0x774523*/
      this->WinModemClass_field_0x38 = (int)CreateEventA(0, 1, 1, 0); /*0x77452e*/
      *((unsigned int *)this + 15) = 0; /*0x774531*/
      *((unsigned int *)this + 16) = 0; /*0x774534*/
      *((unsigned int *)this + 17) = 0; /*0x774537*/
      *((unsigned int *)this + 18) = 0; /*0x77453a*/
      *((unsigned int *)this + 19) = CreateEventA(0, 1, 1, 0); /*0x774543*/
      if ( GetCommState(FileA, &DCB) /*0x774598*/
        && (DCB.Parity = a4,
            DCB.BaudRate = a3,
            DCB.ByteSize = a5,
            DCB.StopBits = a6 - 1,
            *((unsigned int *)&DCB + 2) = *((unsigned int *)&DCB + 2) & 0xFFFF88C0 | 0x2015,
            SetCommState(FileA, &DCB)) )
      {
        qmemcpy((char *)this + 8300, &DCB, 0x1Cu); /*0x7745b9*/
      }
      else
      {
        Debug::Log(); /*0x7745c5*/
      }
      CommTimeouts.ReadIntervalTimeout = 1000; /*0x7745d8*/
      CommTimeouts.ReadTotalTimeoutMultiplier = 0; /*0x7745dc*/
      CommTimeouts.ReadTotalTimeoutConstant = 3000; /*0x7745e0*/
      CommTimeouts.WriteTotalTimeoutMultiplier = 500; /*0x7745e8*/
      CommTimeouts.WriteTotalTimeoutConstant = 1000; /*0x7745f0*/
      if ( !SetCommTimeouts(FileA, &CommTimeouts) ) /*0x7745f4*/
        Debug::Log(); /*0x774604*/
      (*(void (__thiscall **)(WinModemClass *, int))(*(unsigned int *)this->__pad_0 + 16))(this, 1); /*0x774612*/
      if ( ClearCommError(*((HANDLE *)this + 23), &Errors, &Stat) ) /*0x774623*/
      {
        v9 = Errors; /*0x77462d*/
        cbInQue = Stat.cbInQue; /*0x774631*/
        cbOutQue = Stat.cbOutQue; /*0x774635*/
        v12 = Errors == 0; /*0x774639*/
        this->WinModemClass_field_0x1C = Stat.cbInQue; /*0x77463b*/
        this->WinModemClass_field_0x20 = cbOutQue; /*0x77463e*/
        if ( !v12 ) /*0x774641*/
          WinModemClass::LogCommErrors(this, v9, *(unsigned char *)&Stat, cbInQue, cbOutQue); /*0x774657*/
      }
      return (int)FileA; /*0x77465d*/
    }
}
// 0x7748a0
void WinModemClass::Release( int a2)
{
}
// 0x7748b0
void WinModemClass::GetClassIdentifier(DWORD a1)
{
}
// 0x774900
void WinModemClass::Init( char a2)
{
}
// 0x7ac5d0
void WonlineStringDialogControl::QueryInterface(DialogControl_OwnerDraw * Block, char a2)
{
}
// 0x42dd60
void WordVector::Constructor( int a2, int a3)
{
}
// 0x6d2070
void World::ToScreen( AbstractClass * aP1, AbstractClass * aP2)
{
}
// 0x7680c0
void WorldDomination::SetupTerritoryNodes()
{
}
// 0x53d580
void ZBuffer::RenderSprite()
{
}
// 0x58a3d0
void ZoneConnectionVector::Destruct(unsigned int * Block, char a2)
{
}
// legal stubs for misc_ext.hpp cleanups (build-redline session)
// 0x41C430 numeric-name legalized
// 0x424CA0 numeric-name legalized
// 0x46B260 numeric-name legalized
// 0x4B4D60 numeric-name legalized
// 0x6342D0 numeric-name legalized
// 0x425270 numeric-name legalized
// 0x477740 numeric-name legalized
// 0x5175D0 numeric-name legalized
// 0x55CBF0 numeric-name legalized
// 0x543780 constructor placeholder
IsometricTileClass::IsometricTileClass() {}  // G42: placeholder ctor synced to hpp decl (params were placeholders)
// 0x4A7A30 constructor placeholder
DiskLaserClass::DiskLaserClass() {}
// 0x43A350 constructor placeholder
NeuronClass::NeuronClass() {}

WorldDominationTour::WorldDominationTour() {}
}  // L-fix: close namespace tail 1
