// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x629210
namespace ra2 {
namespace game {
int ParasiteClass::Constructor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_629210(int this)
{
  wchar_t *v2; // ecx
  int v3; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x629213*/
  *(_DWORD *)(this + 44) = MEMORY[0xA8ED84]; /*0x62921f*/
  this->ParasiteClass_field_34 = 0; /*0x629222*/
  v2 = MEMORY[0xA8ED84]; /*0x629225*/
  this->ParasiteClass_field_40 = 0; /*0x62922b*/
  this->ParasiteClass_field_38 = v2; /*0x62922e*/
  *(_DWORD *)this = &ParasiteClass::`vftable'; /*0x629231*/
  this->vtable1 = &ParasiteClass::`vftable'; /*0x629237*/
  this->vtable2 = &ParasiteClass::`vftable'; /*0x62923e*/
  this->vtable3 = &ParasiteClass::`vftable'; /*0x629245*/
  if ( MEMORY[0xAC4920] < MEMORY[0xAC4918] /*0x62927e*/
    || (MEMORY[0xAC491D] || !MEMORY[0xAC4918])
    && MEMORY[0xAC4924] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xAC4910] + 8))(
         &MEMORY[0xAC4910],
         MEMORY[0xAC4918] + MEMORY[0xAC4924],
         0) )
  {
    v3 = MEMORY[0xAC4920]++; /*0x62928b*/
    *((_DWORD *)MEMORY[0xAC4914] + v3) = this; /*0x62929a*/
  }
  return this; /*0x62929f*/
}
}
} // namespace game
} // namespace ra2

// 0x6292B0
namespace ra2 {
namespace game {
int ParasiteClass::ParasiteClass(TechnoClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ParasiteClass::ParasiteClass(int this, TechnoClass *aP1)
{
  IUnknown *v3; // ecx
  int v4; // eax
  int v6; // [esp+8h] [ebp-8h]

  AbstractClass::Constructor((AbstractClass *)this); /*0x6292b6*/
  *(_DWORD *)(this + 44) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6292c4*/
  this->ParasiteClass_field_34 = 0; /*0x6292c9*/
  this->ParasiteClass_field_38 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6292d2*/
  this->ParasiteClass_field_40 = 0; /*0x6292d5*/
  *(_DWORD *)this = &ParasiteClass::`vftable'; /*0x6292d8*/
  this->vtable1 = &ParasiteClass::`vftable'; /*0x6292de*/
  this->vtable2 = &ParasiteClass::`vftable'; /*0x6292e5*/
  this->vtable3 = &ParasiteClass::`vftable'; /*0x6292ec*/
  this->creationFrame = aP1; /*0x6292f3*/
  *(_DWORD *)(this + 40) = 0; /*0x6292f6*/
  this->ParasiteClass_field_38 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x629303*/
  this->ParasiteClass_field_3C = v6; /*0x62930a*/
  this->ParasiteClass_field_40 = 0; /*0x62930d*/
  v3 = *(IUnknown **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x629310*/
  *(_BYTE *)(this + 84) = 0; /*0x629316*/
  *(_DWORD *)(this + 44) = v3; /*0x629319*/
  this->ParasiteClass_field_30 = v6; /*0x62931c*/
  this->ParasiteClass_field_34 = 0; /*0x62931f*/
  *(_DWORD *)(this + 76) = 0; /*0x629322*/
  *(_DWORD *)(this + 80) = 0; /*0x629325*/
  *(_DWORD *)(this + 68) = 0; /*0x629328*/
  *(_DWORD *)(this + 72) = 0; /*0x62932b*/
  if ( (int)*(&g_MatrixTransformState + 5828) < (int)*(&g_MatrixTransformState + 5826) /*0x629360*/
    || (*((_BYTE *)&g_MatrixTransformState + 23309) || !*(&g_MatrixTransformState + 5826))
    && (int)*(&g_MatrixTransformState + 5829) > 0
    && ((unsigned __int8 (__thiscall *)(CoordStruct **, char *, _DWORD))(*(&g_MatrixTransformState + 5824))->Z)(
         &g_MatrixTransformState + 5824,
         (char *)*(&g_MatrixTransformState + 5829) + (_DWORD)*(&g_MatrixTransformState + 5826),
         0) )
  {
    v4 = (int)*(&g_MatrixTransformState + 5828); /*0x62936d*/
    *(&g_MatrixTransformState + 5828) = (CoordStruct *)((char *)*(&g_MatrixTransformState + 5828) + 1); /*0x629370*/
    *(&(*(&g_MatrixTransformState + 5825))->X + v4) = this; /*0x62937c*/
  }
  return this; /*0x629381*/
}
}
} // namespace game
} // namespace ra2

// 0x6294D0
namespace ra2 {
namespace game {
int ParasiteClass::Attach(int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ParasiteClass::_vt13(int this, int *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // edx

  AbstractClass::ProcessPower((#378 *)this); /*0x6294d9*/
  v3 = *(_DWORD *)(this + 68); /*0x6294de*/
  if ( v3 ) /*0x6294e3*/
  {
    v4 = (*(int (__stdcall **)(int))(*(_DWORD *)(v3 + 4) + 16))(v3 + 4); /*0x6294ec*/
    Power::TimerProcess(v4); /*0x6294f2*/
  }
  Power::TimerProcess(*(_DWORD *)(this + 72)); /*0x6294fd*/
  Power::TimerProcess(*(_DWORD *)(this + 76)); /*0x629508*/
  Power::TimerProcess(*(_DWORD *)(this + 80)); /*0x629513*/
  LOBYTE(v5) = *(_BYTE *)(this + 84); /*0x629518*/
  return Power::FlagProcess(a2, v5); /*0x629523*/
}
}
} // namespace game
} // namespace ra2

// 0x6295B0
namespace ra2 {
namespace game {
int ParasiteClass::LoadParasite(int * a0, AbstractClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall ParasiteClass::LoadParasite(int *a0, AbstractClass *aP1)
{
  int result; // eax
  int v3; // ebp
  IUnknown *v4; // edx
  int v5; // eax

  result = AbstractClass::SaveLoad_Prefix_0((AbstractClass *)a0, aP1); /*0x6295bc*/
  v3 = result; /*0x6295c1*/
  if ( result >= 0 ) /*0x6295c5*/
  {
    if ( a0 ) /*0x6295cd*/
    {
      AbstractClass::InitVtables(a0, (IUnknown *)&aP1); /*0x6295d6*/
      v4 = *(IUnknown **)&HouseClass_Player.__pad_5568[23248]; /*0x6295db*/
      a0[13] = 0; /*0x6295e1*/
      a0[11] = (int)v4; /*0x6295e8*/
      a0[14] = *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x6295f0*/
      a0[16] = 0; /*0x6295f3*/
      *a0 = (int)&ParasiteClass::`vftable'; /*0x6295fa*/
      a0[1] = (int)&ParasiteClass::`vftable'; /*0x629600*/
      a0[2] = (int)&ParasiteClass::`vftable'; /*0x629607*/
      a0[3] = (int)&ParasiteClass::`vftable'; /*0x62960e*/
    }
    if ( a0[17] /*0x629657*/
      && (*(int *)&stru_B05488.__pad_579C[18852] < *(int *)&stru_B05488.__pad_579C[18844]
       || (stru_B05488.__pad_579C[18849] || !*(_DWORD *)&stru_B05488.__pad_579C[18844])
       && *(int *)&stru_B05488.__pad_579C[18856] > 0
       && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488.__pad_579C[18836] + 8))(
            &stru_B05488.__pad_579C[18836],
            *(_DWORD *)&stru_B05488.__pad_579C[18844] + *(_DWORD *)&stru_B05488.__pad_579C[18856],
            0)) )
    {
      v5 = (*(_DWORD *)&stru_B05488.__pad_579C[18852])++; /*0x629664*/
      *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[18840] + 4 * v5) = a0; /*0x629673*/
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)(a0 + 9)); /*0x62967f*/
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)(a0 + 10)); /*0x62968d*/
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)(a0 + 17)); /*0x629698*/
    return v3; /*0x62969e*/
  }
  return result; /*0x6296a0*/
}
}
} // namespace game
} // namespace ra2

// 0x6296B0
namespace ra2 {
namespace game {
int ParasiteClass::SaveParasite(TechnoTypeClass * aP0, int * a1, int aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall ParasiteClass::SaveParasite(TechnoTypeClass *aP0, int *a1, int aP2)
{
  return AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x6296c4*/
}
}
} // namespace game
} // namespace ra2

// 0x6297F0
namespace ra2 {
namespace game {
void ParasiteClass::DeploySquad()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall ParasiteClass_DeploySquad(unsigned int this)
{
  _DWORD *v2; // eax
  int *v3; // ecx
  int v4; // edi
  int *v5; // eax
  int v6; // esi
  int v7; // edx
  _DWORD *v8; // esi
  int v9; // ecx
  _DWORD *v10; // edx
  int Index; // eax
  void *v12; // edi
  void **v13; // eax
  void **v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // ebx
  double v18; // st7
  int v19; // edi
  int v20; // eax
  void **v21; // edi
  int v22; // eax
  int v23; // edi
  int v24; // ebp
  int v25; // eax
  int v26; // eax
  _BYTE *v27; // edi
  int v28; // eax
  int v29; // ecx
  int v30; // eax
  _DWORD *v31; // edx
  int v32; // ecx
  int v33; // eax
  _DWORD *v34; // edi
  int v35; // ecx
  int v36; // ebp
  int v37; // ecx
  int v38; // eax
  int v39; // [esp-4h] [ebp-6Ch]
  double v40; // [esp+10h] [ebp-58h]
  double v41; // [esp+10h] [ebp-58h]
  int i; // [esp+10h] [ebp-58h]
  _DWORD v43[3]; // [esp+1Ch] [ebp-4Ch] BYREF
  int v44; // [esp+28h] [ebp-40h] BYREF
  int v45; // [esp+2Ch] [ebp-3Ch] BYREF
  double v46; // [esp+30h] [ebp-38h]
  double v47; // [esp+38h] [ebp-30h]
  double v48; // [esp+40h] [ebp-28h]
  double v49; // [esp+48h] [ebp-20h]
  int v50; // [esp+50h] [ebp-18h] BYREF
  int v51; // [esp+54h] [ebp-14h]
  int v52; // [esp+58h] [ebp-10h]
  int v53; // [esp+5Ch] [ebp-Ch] BYREF
  int v54; // [esp+60h] [ebp-8h]
  int v55; // [esp+64h] [ebp-4h]
  int savedregs; // [esp+68h] [ebp+0h] BYREF

  v2 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 36) + 1016))(this->creationFrame, 0); /*0x629807*/
  v3 = *(int **)(this + 40); /*0x62980d*/
  v43[1] = *v2; /*0x629812*/
  v4 = *(_DWORD *)(v43[1] + 172); /*0x629816*/
  v43[0] = v4; /*0x629822*/
  v50 = v3[39]; /*0x629828*/
  v51 = v3[40]; /*0x62982f*/
  v52 = v3[41]; /*0x629836*/
  v5 = (int *)(*(int (__thiscall **)(int *))(*v3 + 444))(v3); /*0x62983c*/
  v40 = 1.0; /*0x629844*/
  if ( !v5 || Cell::IsValidHeight(v5) ) /*0x629854*/
  {
    v9 = *(_DWORD *)(v4 + 368); /*0x629898*/
    v10 = (_DWORD *)(*(_DWORD *)(this + 40) + 1696); /*0x62989e*/
    *v10 = MEMORY[0xA8ED84]; /*0x6298a4*/
    v10[1] = v54; /*0x6298aa*/
    v10[2] = v9; /*0x6298ad*/
    switch ( *(_DWORD *)(this + 72) ) /*0x6298bc*/
    {
      case 0: /*0x6298bc*/
        *(_DWORD *)(*(_DWORD *)(this + 40) + 808) = 0; /*0x6298c6*/
        Index = AnimTypeClass::FindIndex(MEMORY[0x83665C]); /*0x6298d1*/
        if ( Index != -1 ) /*0x6298d9*/
        {
          v12 = (void *)*((_DWORD *)MEMORY[0x8B4154] + Index); /*0x6298e5*/
          if ( v12 ) /*0x6298ea*/
          {
            v13 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x6298f5*/
            if ( v13 ) /*0x6298ff*/
            {
              v14 = AnimClass::ctor(v13, v12, &v50, 0, 1, (void *)0x600, 0, 0); /*0x629913*/
              if ( v14 ) /*0x62991a*/
              {
                *(_DWORD *)(this + 68) = v14; /*0x62991c*/
                if ( MEMORY[0xB0F5C8] < MEMORY[0xB0F5C0] /*0x629953*/
                  || (MEMORY[0xB0F5C5] || !MEMORY[0xB0F5C0])
                  && MEMORY[0xB0F5CC] > 0
                  && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xB0F5B8] + 8))(
                       &MEMORY[0xB0F5B8],
                       MEMORY[0xB0F5CC] + MEMORY[0xB0F5C0],
                       0) )
                {
                  v15 = MEMORY[0xB0F5C8]++; /*0x629960*/
                  *((_DWORD *)MEMORY[0xB0F5BC] + v15) = this; /*0x62996f*/
                }
              }
            }
          }
        }
        *(_DWORD *)(this + 72) = 1; /*0x629974*/
        *(_DWORD *)(this + 80) = 0; /*0x62997b*/
        *(_DWORD *)(this + 76) = 0; /*0x62997e*/
        BuildingClass::AnimController((int *)this); /*0x629981*/
        goto LABEL_47; /*0x629986*/
      case 1: /*0x6298bc*/
        if ( BuildingClass::AnimController((int *)this) ) /*0x62998d*/
        {
          v16 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 1); /*0x6299a9*/
          *(_DWORD *)(this + 80) = 0; /*0x6299b7*/
          *(_DWORD *)(this + 72) = 3 - (v16 != 0); /*0x6299ba*/
          *(_DWORD *)(this + 76) = 0; /*0x6299bd*/
          BuildingClass::AnimController((int *)this); /*0x6299c0*/
          FootClass::CreateWakes(v50, v51, v52); /*0x6299e1*/
        }
        goto LABEL_47; /*0x6299e6*/
      case 2: /*0x6298bc*/
        v40 = -1.0; /*0x6299eb*/
        goto LABEL_20; /*0x6299eb*/
      case 3: /*0x6298bc*/
LABEL_20:
        if ( BuildingClass::AnimController((int *)this) ) /*0x6299fd*/
        {
          *(_DWORD *)(this + 72) = 4; /*0x629a08*/
          *(_DWORD *)(this + 80) = 0; /*0x629a0f*/
          *(_DWORD *)(this + 76) = 0; /*0x629a12*/
          BuildingClass::AnimController((int *)this); /*0x629a15*/
        }
        *(double *)&v43[1] = (double)*(int *)(this + 76) * v40 * 0.3141592653589793; /*0x629a27*/
        *(float *)(*(_DWORD *)(this + 40) + 808) = Math::SinCos(*(double *)&v43[1]) * 0.78539819; /*0x629a46*/
        goto LABEL_47; /*0x629a4c*/
      case 4: /*0x6298bc*/
        *(_DWORD *)(*(_DWORD *)(this + 40) + 808) = 0; /*0x629a59*/
        v17 = *((_DWORD *)MEMORY[0x8871E0] + 756); /*0x629a67*/
        v41 = -((double)(*(__int16 *)ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(this + 40) + 904), &v45) - 0x3FFF) /*0x629a91*/
              * -0.00009587672516830327);
        v49 = Math::ArcTan2(v41); /*0x629aa4*/
        v48 = Math::SinCos(v41); /*0x629aaf*/
        for ( i = 0; i < 3; ++i ) /*0x629ab8*/
        {
          v46 = 64.0; /*0x629ac8*/
          v47 = (double)i * 128.0 - 128.0; /*0x629aea*/
          if ( Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 1) ) /*0x629aee*/
            v18 = -64.0; /*0x629af7*/
          else
            v18 = v46; /*0x629aff*/
          v19 = Math::RoundToInt(v18); /*0x629b26*/
          v20 = Math::RoundToInt(v47 * v48 + v18 * v49); /*0x629b2a*/
          v53 = v19 + v50; /*0x629b44*/
          v54 = v51 + v20; /*0x629b48*/
          v55 = v52; /*0x629b4c*/
          v21 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x629b55*/
          if ( v21 ) /*0x629b5c*/
          {
            v22 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, v17 - 1); /*0x629b6f*/
            AnimClass::ctor( /*0x629b97*/
              v21,
              *(void **)(*((_DWORD *)MEMORY[0x8871E0] + 753) + 4 * v22),
              &v53,
              (void *)2,
              1,
              (void *)0x600,
              (void *)0xFFFFFFF6,
              0);
          }
        }
        if ( *(_BYTE *)(v43[0] + 372) /*0x629be6*/
          && (!BuildingClass::GetSellPriority(*(int **)(this + 40))
           || BuildingClass::GetSellPriority(*(int **)(this + 40)) == 1
           && VeterancyStruct::IsElite((float *)(this->creationFrame + 336))) )
        {
          if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 132))(this->creationFrame) + 3214) ) /*0x629bfe*/
          {
            v23 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 40) + 132))(*(_DWORD *)(this + 40)); /*0x629c16*/
            v24 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 132))(this->creationFrame); /*0x629c23*/
            v39 = *(_DWORD *)(*(_DWORD *)(this + 40) + 540); /*0x629c2f*/
            v25 = (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 132))(v23); /*0x629c30*/
            v26 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v24 + 132))( /*0x629c46*/
                    v24,
                    *(_DWORD *)(this->creationFrame + 540),
                    v25);
            VeterancyStruct::Accumulate((float *)(this->creationFrame + 336), v26, v39); /*0x629c56*/
          }
          v27 = *(_BYTE **)(this + 40); /*0x629c5d*/
          BuildingClass::Deploy(this, 0, (int)v27); /*0x629c62*/
          v28 = *(_DWORD *)v27; /*0x629c67*/
          v27[973] = 1; /*0x629c69*/
          (*(void (__thiscall **)(_BYTE *, _DWORD))(v28 + 952))(v27, this->creationFrame); /*0x629c76*/
          (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v27 + 928))(v27); /*0x629c80*/
          v29 = *(_DWORD *)(this + 68); /*0x629c86*/
          *(_DWORD *)(this + 76) = 0; /*0x629c89*/
          *(_DWORD *)(this + 80) = 0; /*0x629c8e*/
          *(_DWORD *)(this + 72) = 0; /*0x629c91*/
          if ( v29 ) /*0x629c94*/
          {
            (*(void (__thiscall **)(int))(*(_DWORD *)v29 + 248))(v29); /*0x629c98*/
            *(_DWORD *)(this + 68) = 0; /*0x629c9e*/
          }
          if ( *(_BYTE *)(this + 84) ) /*0x629ca1*/
          {
            v43[0] = this; /*0x629cb8*/
            v30 = (*(int (__thiscall **)(int *, _DWORD *))(MEMORY[0xB0F5B8] + 16))(&MEMORY[0xB0F5B8], v43); /*0x629cbc*/
            if ( v30 != -1 && v30 < MEMORY[0xB0F5C8] && v30 < --MEMORY[0xB0F5C8] ) /*0x629cd7*/
            {
              do /*0x629cef*/
              {
                ++v30; /*0x629cdf*/
                *((_DWORD *)MEMORY[0xB0F5BC] + v30 - 1) = *((_DWORD *)MEMORY[0xB0F5BC] + v30); /*0x629ce3*/
              }
              while ( v30 < MEMORY[0xB0F5C8] ); /*0x629cef*/
            }
            *(_BYTE *)(this + 84) = 0; /*0x629cf1*/
          }
          v31 = (_DWORD *)(this->creationFrame + 1696); /*0x629cff*/
          *v31 = MEMORY[0xA8ED84]; /*0x629d05*/
          v31[1] = v54; /*0x629d0b*/
          v31[2] = 0; /*0x629d0e*/
        }
        else
        {
          v32 = *(_DWORD *)(this + 40); /*0x629d27*/
          v44 = *(_DWORD *)(v43[1] + 164); /*0x629d2a*/
          (*(void (__thiscall **)(int, int *, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)v32 + 364))( /*0x629d3b*/
            v32,
            &v44,
            0,
            v43[0],
            this->creationFrame,
            0,
            1,
            0);
          if ( *(_DWORD *)(this + 40) ) /*0x629d41*/
          {
            v33 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 1); /*0x629d58*/
            *(_DWORD *)(this + 80) = 0; /*0x629d66*/
            *(_DWORD *)(this + 72) = 3 - (v33 != 0); /*0x629d69*/
            *(_DWORD *)(this + 76) = 0; /*0x629d6c*/
            BuildingClass::AnimController((int *)this); /*0x629d6f*/
            FootClass::CreateWakes(v50, v51, v52); /*0x629d90*/
          }
          else
          {
            v37 = *(_DWORD *)(this + 68); /*0x629df3*/
            *(_DWORD *)(this + 76) = 0; /*0x629df6*/
            *(_DWORD *)(this + 80) = 0; /*0x629dfb*/
            *(_DWORD *)(this + 72) = 0; /*0x629dfe*/
            if ( v37 ) /*0x629e01*/
            {
              (*(void (__thiscall **)(int))(*(_DWORD *)v37 + 248))(v37); /*0x629e05*/
              *(_DWORD *)(this + 68) = 0; /*0x629e0b*/
            }
            if ( *(_BYTE *)(this + 84) ) /*0x629e0e*/
            {
              v43[1] = this; /*0x629e25*/
              v38 = (*(int (__thiscall **)(int *, _DWORD *))(MEMORY[0xB0F5B8] + 16))(&MEMORY[0xB0F5B8], &v43[1]); /*0x629e29*/
              if ( v38 != -1 && v38 < MEMORY[0xB0F5C8] && v38 < --MEMORY[0xB0F5C8] ) /*0x629e44*/
              {
                do /*0x629e5c*/
                {
                  ++v38; /*0x629e4c*/
                  *((_DWORD *)MEMORY[0xB0F5BC] + v38 - 1) = *((_DWORD *)MEMORY[0xB0F5BC] + v38); /*0x629e50*/
                }
                while ( v38 < MEMORY[0xB0F5C8] ); /*0x629e5c*/
              }
              *(_BYTE *)(this + 84) = 0; /*0x629e5e*/
            }
          }
LABEL_47:
          v34 = *(_DWORD **)(this + 68); /*0x629d97*/
          if ( v34 ) /*0x629d9c*/
          {
            if ( this->creationFrame ) /*0x629d9e*/
            {
              v35 = *(_DWORD *)(this + 40); /*0x629da3*/
              if ( v35 ) /*0x629da8*/
              {
                v36 = (*(int (__thiscall **)(int))(*(_DWORD *)v35 + 444))(v35); /*0x629db8*/
                if ( *(_DWORD *)(this + 40) != v34[51] ) /*0x629dbf*/
                {
                  BuildingClass::AimTurret(v34, *(_BYTE **)(this + 40)); /*0x629dc4*/
                  v34[53] = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 484))(this->creationFrame); /*0x629dd6*/
                  if ( v36 ) /*0x629ddc*/
                    v34[63] = *(__int16 *)(v36 + 266); /*0x629de5*/
                }
              }
            }
          }
        }
        break; /*0x629d18*/
      default:
        BuildingClass::Deploy(this, (int)&savedregs, v4); /*0x629e69*/
        goto LABEL_47; /*0x629e6e*/
    }
  }
  else
  {
    BuildingClass::Deploy(this, (int)&savedregs, v4); /*0x62985f*/
    v6 = this->creationFrame; /*0x629864*/
    if ( v6 ) /*0x629869*/
    {
      v7 = v54; /*0x629874*/
      v8 = (_DWORD *)(v6 + 1696); /*0x62987a*/
      *v8 = MEMORY[0xA8ED84]; /*0x629880*/
      v8[1] = v7; /*0x629882*/
      v8[2] = 0; /*0x629885*/
    }
  }
}
}
} // namespace game
} // namespace ra2

// 0x629FD0
namespace ra2 {
namespace game {
void ParasiteClass::TickDamage()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall ParasiteClass::_vt23(unsigned int this)
{
  int v2; // eax
  int *v3; // ecx
  _DWORD *v4; // edi
  int v5; // ebp
  int v6; // eax
  int v7; // edx
  int v8; // eax
  int v9; // edx
  _DWORD *v10; // ecx
  _DWORD *v11; // ecx
  void *v12; // eax
  unsigned int v13; // ebx
  void *v14; // ebp
  void **v15; // eax
  int v16; // eax
  int v17; // ebx
  double v18; // st7
  double v19; // st7
  int v20; // ecx
  int v21; // eax
  _DWORD v22[3]; // [esp+10h] [ebp-3Ch] BYREF
  int v23; // [esp+1Ch] [ebp-30h] BYREF
  int v24; // [esp+20h] [ebp-2Ch]
  double v25; // [esp+24h] [ebp-28h]
  double v26; // [esp+2Ch] [ebp-20h]
  int v27; // [esp+34h] [ebp-18h] BYREF
  int v28; // [esp+38h] [ebp-14h]
  int v29; // [esp+3Ch] [ebp-10h]
  int v30; // [esp+40h] [ebp-Ch] BYREF
  int v31; // [esp+44h] [ebp-8h]
  int v32; // [esp+48h] [ebp-4h]

  if ( !*(_DWORD *)(this + 40) ) /*0x629fde*/
    return; /*0x629fde*/
  if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 132))(this->creationFrame) + 3278) /*0x62a004*/
    && *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 132))(this->creationFrame) + 3479) )
  {
    ParasiteClass::DeploySquad(this); /*0x62a010*/
    return; /*0x62a01c*/
  }
  v2 = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 36) + 1016))(this->creationFrame, 0); /*0x62a024*/
  v3 = *(int **)(this + 40); /*0x62a02a*/
  v4 = *(_DWORD **)v2; /*0x62a02d*/
  v5 = *(_DWORD *)(*(_DWORD *)v2 + 172); /*0x62a02f*/
  v24 = v5; /*0x62a03b*/
  v27 = v3[39]; /*0x62a041*/
  v28 = v3[40]; /*0x62a048*/
  v6 = this->ParasiteClass_field_40; /*0x62a04c*/
  v29 = v3[41]; /*0x62a052*/
  v7 = this->ParasiteClass_field_38; /*0x62a056*/
  if ( v7 == -1 ) /*0x62a05c*/
    goto LABEL_8; /*0x62a05c*/
  if ( (int)MEMORY[0xA8ED84] - v7 < v6 ) /*0x62a068*/
  {
    v6 -= (int)MEMORY[0xA8ED84] - v7; /*0x62a06a*/
LABEL_8:
    if ( v6 ) /*0x62a06e*/
      return; /*0x62a06e*/
  }
  v8 = v4[44]; /*0x62a074*/
  this->ParasiteClass_field_38 = MEMORY[0xA8ED84]; /*0x62a080*/
  this->ParasiteClass_field_3C = v31; /*0x62a087*/
  this->ParasiteClass_field_40 = v8; /*0x62a08a*/
  v9 = *(_DWORD *)(v5 + 368); /*0x62a092*/
  v10 = v3 + 424; /*0x62a098*/
  *v10 = MEMORY[0xA8ED84]; /*0x62a09e*/
  v10[1] = v31; /*0x62a0a4*/
  v10[2] = v9; /*0x62a0a7*/
  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 40) + 44))(*(_DWORD *)(this + 40)) == 15 ) /*0x62a0b5*/
  {
    v11 = *(_DWORD **)(this + 40); /*0x62a0b7*/
    v22[0] = v11[27]; /*0x62a0c3*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int, _DWORD, int, int, _DWORD))(*v11 + 364))( /*0x62a0ce*/
      v22,
      0,
      v5,
      this->creationFrame,
      1,
      1,
      0);
  }
  else
  {
    v12 = __2_YAPAXI_Z(0x100u); /*0x62a0d8*/
    if ( v12 ) /*0x62a0e2*/
      ParticleSystemClass::Constructor((int)v12, MEMORY[0x8871E0]->?, &v27, 0, 0, &MEMORY[0xAC4948], 0); /*0x62a103*/
    v13 = *ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(this + 40) + 904), &v23); /*0x62a11b*/
    if ( v4[65] ) /*0x62a11d*/
    {
      v14 = *(void **)(v4[62] + 4 * ((((v13 >> 12) + 1) >> 1) & 7)); /*0x62a138*/
      if ( v14 ) /*0x62a13d*/
      {
        v15 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x62a144*/
        if ( v15 ) /*0x62a14e*/
          AnimClass::ctor(v15, v14, &v27, 0, 1, (void *)0x600, 0, 0); /*0x62a165*/
      }
    }
    v16 = -(Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 1) != 0); /*0x62a189*/
    v22[1] = (__int16)(v13 - 0x3FFF) - 0x3FFF; /*0x62a191*/
    LOBYTE(v16) = v16 & 0xFC; /*0x62a195*/
    v17 = v29; /*0x62a19e*/
    v23 = v16 + 2; /*0x62a1a2*/
    *(double *)&v22[1] = (double)v22[1] * -0.00009587672516830327; /*0x62a1ac*/
    v26 = (double)v28; /*0x62a1be*/
    v25 = (double)(v16 + 2); /*0x62a1c6*/
    v18 = Math::SinCos(*(double *)&v22[1]); /*0x62a1ca*/
    v23 = Math::RoundToInt(v26 - v18 * v25); /*0x62a1dc*/
    v19 = Math::ArcTan2(*(double *)&v22[1]); /*0x62a1e6*/
    v30 = Math::RoundToInt(v19 * v25 + (double)v27); /*0x62a1ff*/
    v31 = v23; /*0x62a203*/
    v20 = *(_DWORD *)(this + 40); /*0x62a207*/
    v32 = v17; /*0x62a20a*/
    (*(void (__thiscall **)(int, int *, int, _DWORD))(*(_DWORD *)v20 + 984))(v20, &v30, 1069547520, 0); /*0x62a21c*/
    v21 = this->creationFrame; /*0x62a228*/
    v22[0] = v4[41]; /*0x62a22f*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int, int, _DWORD, int, _DWORD))(**(_DWORD **)(this + 40) + 364))( /*0x62a247*/
      v22,
      0,
      v24,
      v21,
      0,
      1,
      0);
  }
}
}
} // namespace game
} // namespace ra2

// 0x62A8E0
namespace ra2 {
namespace game {
bool ParasiteClass::CanInfect(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall ParasiteClass::CanInfect(_DWORD *this, _DWORD *a2)
{
  int v3; // ecx
  int *v4; // eax
  bool result; // al

  result = 0; /*0x62a977*/
  if ( a2 ) /*0x62a8ea*/
  {
    if ( !*((_BYTE *)a2 + 129) ) /*0x62a8f0*/
    {
      if ( *((_BYTE *)a2 + 144) ) /*0x62a8fa*/
      {
        if ( a2[27] ) /*0x62a904*/
        {
          if ( !a2[421] ) /*0x62a90b*/
          {
            if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*a2 + 132))(a2) + 3384) ) /*0x62a91f*/
            {
              if ( !a2[185] ) /*0x62a929*/
              {
                v3 = *(this + 9); /*0x62a933*/
                if ( !v3 ) /*0x62a938*/
                  return 1; /*0x62a938*/
                if ( !*(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v3 + 132))(v3) + 3278) ) /*0x62a942*/
                  return 1; /*0x62a942*/
                if ( !(*(int (__thiscall **)(_DWORD *))(*a2 + 444))(a2) ) /*0x62a950*/
                  return 1; /*0x62a950*/
                v4 = (int *)(*(int (__thiscall **)(_DWORD *))(*a2 + 444))(a2); /*0x62a95e*/
                if ( Cell::IsValidHeight(v4) ) /*0x62a966*/
                  return 1; /*0x62a8ea*/
              }
            }
          }
        }
      }
    }
  }
  return result; /*0x62a96f*/
}
}
} // namespace game
} // namespace ra2

// 0x62A980
namespace ra2 {
namespace game {
int ParasiteClass::TryInfect(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ParasiteClass::TryInfect(int this, _DWORD *a2)
{
  int v3; // ecx
  int v4; // eax
  void *v5; // eax
  int v6; // ebx
  int v7; // eax
  char v8; // al
  int v9; // ecx
  int result; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // edi
  int v13; // ebx
  int v14; // [esp+1Ch] [ebp-10h] BYREF
  int v15; // [esp+20h] [ebp-Ch] BYREF
  int v16; // [esp+24h] [ebp-8h]
  int v17; // [esp+28h] [ebp-4h]

  v3 = *(_DWORD *)(this + 68); /*0x62a98b*/
  *(_DWORD *)(this + 76) = 0; /*0x62a98e*/
  *(_DWORD *)(this + 80) = 0; /*0x62a993*/
  *(_DWORD *)(this + 72) = 0; /*0x62a996*/
  if ( v3 ) /*0x62a999*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 248))(v3); /*0x62a99d*/
    *(_DWORD *)(this + 68) = 0; /*0x62a9a3*/
  }
  if ( *(_BYTE *)(this + 84) ) /*0x62a9a6*/
  {
    v14 = this; /*0x62a9bd*/
    v4 = (*(int (__thiscall **)(int *, int *))(MEMORY[0xB0F5B8] + 16))(&MEMORY[0xB0F5B8], &v14); /*0x62a9c1*/
    if ( v4 != -1 ) /*0x62a9c7*/
      DynamicVector::RemoveItem(&MEMORY[0xB0F5B8], v4); /*0x62a9cf*/
    *(_BYTE *)(this + 84) = 0; /*0x62a9d4*/
  }
  this->ParasiteClass_field_38 = MEMORY[0xA8ED84]; /*0x62a9e6*/
  this->ParasiteClass_field_3C = v16; /*0x62a9ed*/
  this->ParasiteClass_field_40 = 0; /*0x62a9f0*/
  if ( ParasiteClass::CanInfect((_DWORD *)this, a2) ) /*0x62a9f5*/
  {
    v12 = (_DWORD *)(this->creationFrame + 1652); /*0x62aae2*/
    v13 = a2[39]; /*0x62aae8*/
    v16 = a2[40]; /*0x62aaed*/
    v17 = a2[41]; /*0x62aaf4*/
    if ( !*v12 ) /*0x62aaf8*/
      WinAPI::Wrapper(-2147467261); /*0x62ab03*/
    result = (*(int (__stdcall **)(_DWORD, int, int, int, int))(*(_DWORD *)*v12 + 112))(*v12, -1, v13, v16, v17); /*0x62ab24*/
    a2[421] = this->creationFrame; /*0x62ab2b*/
    *(_DWORD *)(this + 40) = a2; /*0x62ab31*/
  }
  else
  {
    v5 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)(this->creationFrame + 1372)); /*0x62aa11*/
    v6 = **(_DWORD **)(this + 36); /*0x62aa1f*/
    v7 = (*(int (__thiscall **)(void *, int *, _DWORD))(*(_DWORD *)v5 + 72))(v5, &v15, 0); /*0x62aa25*/
    v8 = (*(int (__thiscall **)(_DWORD, int))(v6 + 216))(this->creationFrame, v7); /*0x62aa2c*/
    v9 = this->creationFrame; /*0x62aa32*/
    if ( v8 ) /*0x62aa37*/
    {
      (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v9 + 1164))(v9, 0, 0, 0, 0); /*0x62aa51*/
      v11 = *(_DWORD **)(this + 36); /*0x62aa57*/
      v15 = v11[39]; /*0x62aa67*/
      v16 = v11[40]; /*0x62aa6e*/
      v17 = v11[41]; /*0x62aa75*/
      MapClass::RevealArea2(&MEMORY[0x87F7E8], &v15, v11[152] - 3, v11[152] + 2, 0); /*0x62aa91*/
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 1196))(this->creationFrame) ) /*0x62aa9b*/
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 36) + 968))(this->creationFrame, 0); /*0x62aaab*/
        (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 36) + 1152))(this->creationFrame, 0, 1); /*0x62aab9*/
      }
      return (*(int (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 36) + 1156))( /*0x62aac9*/
               this->creationFrame,
               0,
               1);
    }
    else
    {
      return (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 248))(v9); /*0x62aa3b*/
    }
  }
  return result; /*0x62aa41*/
}
}
} // namespace game
} // namespace ra2

// 0x62AB40
namespace ra2 {
namespace game {
bool ParasiteClass::CanExistOnVictimCell()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall ParasiteClass::CanExistOnVictimCell(int this)
{
  int v2; // ecx
  int v4; // ecx
  _DWORD *v5; // eax
  int v6; // eax
  bool v7; // bl
  int v8; // eax
  _DWORD *v9; // eax

  v2 = *(_DWORD *)(this + 40); /*0x62ab44*/
  if ( !v2 ) /*0x62ab49*/
    return 0; /*0x62ab4f*/
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 84))(v2) ) /*0x62ab52*/
    return 0; /*0x62ab5d*/
  if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 132))(this->creationFrame) + 3278) ) /*0x62ab69*/
    goto LABEL_20; /*0x62ab69*/
  v4 = this->creationFrame; /*0x62ab77*/
  if ( v4 ) /*0x62ab7c*/
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) == 1 ) /*0x62ab86*/
    {
      v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 40) + 444))(*(_DWORD *)(this + 40)); /*0x62ab8f*/
      if ( CellClass::FindInfantry(v5, 0) ) /*0x62ab97*/
        return 0; /*0x62aba4*/
    }
  }
  v6 = *(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 40) + 444))(*(_DWORD *)(this + 40)) + 236); /*0x62abb0*/
  if ( v6 == 2 || v6 == 6 || v6 == 3 ) /*0x62abc3*/
  {
    v7 = (*(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 40) + 444))(*(_DWORD *)(this + 40)) + 320) /*0x62abdc*/
        & 0x100) == 0;
    v8 = *(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 40) + 444))(*(_DWORD *)(this + 40)) + 68); /*0x62abe9*/
    if ( v8 >= 74 && v8 <= 99 ) /*0x62abf4*/
      v7 = 0; /*0x62abf6*/
    if ( (v8 < 205 || v8 > 230) && v7 ) /*0x62ac08*/
      return 0; /*0x62ac0b*/
  }
LABEL_20:
  v9 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 40) + 444))(*(_DWORD *)(this + 40)); /*0x62ac14*/
  return Cell::IsBridge(v9) == 0; /*0x62ab4b*/
}
}
} // namespace game
} // namespace ra2

// 0x62AF70
namespace ra2 {
namespace game {
ParasiteClass * ParasiteClass::UpdateParasite(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ParasiteClass *__thiscall ParasiteClass::UpdateParasite(ParasiteClass *this, char a2)
{
  int v3; // ecx
  int v4; // eax
  int v5; // eax
  ParasiteClass *v7; // [esp+8h] [ebp-4h] BYREF

  v3 = *((_DWORD *)this + 17); /*0x62af77*/
  *(_DWORD *)this->__pad_0 = &ParasiteClass::`vftable'; /*0x62af7a*/
  *(_DWORD *)&this->__pad_0[4] = &ParasiteClass::`vftable'; /*0x62af82*/
  *(_DWORD *)&this->__pad_0[8] = &ParasiteClass::`vftable'; /*0x62af89*/
  *(_DWORD *)&this->__pad_0[12] = &ParasiteClass::`vftable'; /*0x62af90*/
  *((_DWORD *)this + 19) = 0; /*0x62af97*/
  *((_DWORD *)this + 20) = 0; /*0x62af9a*/
  *((_DWORD *)this + 18) = 0; /*0x62af9d*/
  if ( v3 ) /*0x62afa0*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 248))(v3); /*0x62afa4*/
    *((_DWORD *)this + 17) = 0; /*0x62afaa*/
  }
  if ( *((_BYTE *)this + 84) ) /*0x62afad*/
  {
    v7 = this; /*0x62afc2*/
    v4 = (*(int (__thiscall **)(int *, ParasiteClass **))(MEMORY[0xB0F5B8] + 16))(&MEMORY[0xB0F5B8], &v7); /*0x62afc6*/
    if ( v4 != -1 && v4 < MEMORY[0xB0F5C8] && v4 < --MEMORY[0xB0F5C8] ) /*0x62afe1*/
    {
      do /*0x62aff9*/
      {
        ++v4; /*0x62afe9*/
        *((_DWORD *)MEMORY[0xB0F5BC] + v4 - 1) = *((_DWORD *)MEMORY[0xB0F5BC] + v4); /*0x62afed*/
      }
      while ( v4 < MEMORY[0xB0F5C8] ); /*0x62aff9*/
    }
    *((_BYTE *)this + 84) = 0; /*0x62affb*/
  }
  v7 = this; /*0x62b00e*/
  v5 = (*(int (__thiscall **)(int *, ParasiteClass **))(MEMORY[0xAC4910] + 16))(&MEMORY[0xAC4910], &v7); /*0x62b012*/
  if ( v5 != -1 && v5 < MEMORY[0xAC4920] && v5 < --MEMORY[0xAC4920] ) /*0x62b02d*/
  {
    do /*0x62b045*/
    {
      ++v5; /*0x62b035*/
      *((_DWORD *)MEMORY[0xAC4914] + v5 - 1) = *((_DWORD *)MEMORY[0xAC4914] + v5); /*0x62b039*/
    }
    while ( v5 < MEMORY[0xAC4920] ); /*0x62b045*/
  }
  AbstractClass::DTOR(this); /*0x62b049*/
  if ( (a2 & 1) != 0 ) /*0x62b053*/
    __3_YAXPAX_Z(this); /*0x62b056*/
  return this; /*0x62b060*/
}
}
} // namespace game
} // namespace ra2

// 0x62BD50
namespace ra2 {
namespace game {
char ParasiteClass::Update()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall ParasiteClass_Update(char *this)
{
  int v2; // edi
  int v3; // esi
  int v4; // ebx
  int v5; // edi
  int v6; // eax
  double v7; // st7
  int *v8; // ebx
  double v9; // st7
  double v10; // st7
  int v11; // eax
  int v12; // eax
  _DWORD *v13; // esi
  double v14; // st7
  _DWORD *v15; // edi
  int Byte284; // eax
  float *v17; // eax
  double v18; // st7
  int v19; // edx
  float *v20; // eax
  float *v21; // eax
  float v22; // edx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int *v26; // esi
  int v27; // edx
  int v28; // edi
  int v29; // eax
  int v30; // ecx
  int *v31; // edi
  int v32; // ecx
  int v33; // eax
  int v34; // edx
  int v35; // eax
  int v36; // ebx
  __int64 v37; // rax
  int v38; // edi
  int v39; // ebx
  char result; // al
  int v41; // [esp-Ch] [ebp-100h]
  int v42; // [esp+0h] [ebp-F4h]
  int v43; // [esp+0h] [ebp-F4h]
  int v44; // [esp+0h] [ebp-F4h]
  int v45; // [esp+4h] [ebp-F0h]
  int v46; // [esp+4h] [ebp-F0h]
  int v47; // [esp+4h] [ebp-F0h]
  bool v48; // [esp+19h] [ebp-DBh]
  char v49; // [esp+1Ah] [ebp-DAh]
  char v50; // [esp+1Bh] [ebp-D9h]
  int v51; // [esp+1Ch] [ebp-D8h] BYREF
  float v52; // [esp+20h] [ebp-D4h]
  float v53; // [esp+24h] [ebp-D0h]
  float v54; // [esp+28h] [ebp-CCh] BYREF
  int GroundHeight; // [esp+2Ch] [ebp-C8h]
  float v56; // [esp+30h] [ebp-C4h]
  float v57; // [esp+34h] [ebp-C0h]
  float v58; // [esp+38h] [ebp-BCh]
  int v59; // [esp+3Ch] [ebp-B8h]
  _DWORD v60[2]; // [esp+40h] [ebp-B4h] BYREF
  int v61; // [esp+48h] [ebp-ACh]
  _DWORD v62[3]; // [esp+4Ch] [ebp-A8h] BYREF
  float v63[2]; // [esp+58h] [ebp-9Ch] BYREF
  int v64; // [esp+60h] [ebp-94h]
  float v65[12]; // [esp+64h] [ebp-90h] BYREF
  float v66[12]; // [esp+94h] [ebp-60h] BYREF
  float v67[12]; // [esp+C4h] [ebp-30h] BYREF

  if ( ((unsigned __int8)MEMORY[0xA8ED84] & 1) != 0 ) /*0x62bd63*/
    goto LABEL_50; /*0x62bd63*/
  v51 = *((_DWORD *)this + 39); /*0x62bd75*/
  v52 = *((float *)this + 40); /*0x62bd88*/
  v53 = *((float *)this + 41); /*0x62bd8f*/
  if ( (abs32(Random::State((_DWORD *)MEMORY[0xA8B230] + 134)) & 7) == 0 ) /*0x62bd9f*/
  {
    v2 = 0; /*0x62bdab*/
    v3 = 0; /*0x62bdad*/
    if ( (abs32(Random::State((_DWORD *)MEMORY[0xA8B230] + 134)) & 1) != 0 ) /*0x62bdc1*/
      v3 = (int)abs32(Random::State((_DWORD *)MEMORY[0xA8B230] + 134)) % 3 - 1; /*0x62be05*/
    else
      v2 = (int)abs32(Random::State((_DWORD *)MEMORY[0xA8B230] + 134)) % 3 - 1; /*0x62bde2*/
    v4 = v2 + *((_DWORD *)this + 48); /*0x62be11*/
    v5 = v3 + *((_DWORD *)this + 49); /*0x62be1b*/
    *((_DWORD *)this + 48) = v4; /*0x62be1f*/
    *((_DWORD *)this + 49) = v5; /*0x62be25*/
    if ( v4 >= -2 ) /*0x62be30*/
    {
      if ( v4 > 2 ) /*0x62be3c*/
        *((_DWORD *)this + 48) = 2; /*0x62be3e*/
    }
    else
    {
      *((_DWORD *)this + 48) = -2; /*0x62be32*/
    }
    v6 = *((_DWORD *)this + 49); /*0x62be44*/
    if ( v6 >= -2 ) /*0x62be4c*/
    {
      if ( v6 > 2 ) /*0x62be58*/
        *((_DWORD *)this + 49) = 2; /*0x62be5a*/
    }
    else
    {
      *((_DWORD *)this + 49) = -2; /*0x62be4e*/
    }
  }
  v7 = (double)v51; /*0x62be60*/
  v8 = (int *)(this + 204); /*0x62be64*/
  v51 = 0; /*0x62be6a*/
  v56 = v7; /*0x62be78*/
  v9 = (double)SLODWORD(v52); /*0x62be7c*/
  v52 = 0.0; /*0x62be80*/
  *((_DWORD *)this + 51) = 0; /*0x62be8c*/
  v57 = v9; /*0x62be8e*/
  v10 = (double)SLODWORD(v53); /*0x62be92*/
  v53 = -2.0; /*0x62be96*/
  *((_DWORD *)this + 52) = 0; /*0x62bea2*/
  v58 = v10; /*0x62bea5*/
  *((_DWORD *)this + 53) = -1073741824; /*0x62bea9*/
  *((float *)this + 53) = *((float *)this + 53) - (double)MEMORY[0x8871E0][1].?; /*0x62bebd*/
  v45 = Math::RoundToInt(v58); /*0x62becd*/
  v42 = Math::RoundToInt(v57); /*0x62bed7*/
  v11 = Math::RoundToInt(v56); /*0x62bed8*/
  Coord3D::Set(v60, v11, v42, v45); /*0x62bee2*/
  Vector3::AddAssign(this + 204); /*0x62beec*/
  v46 = Math::RoundToInt(v58); /*0x62befe*/
  v43 = Math::RoundToInt(v57); /*0x62bf08*/
  v12 = Math::RoundToInt(v56); /*0x62bf09*/
  Coord3D::Set(v62, v12, v43, v46); /*0x62bf13*/
  GroundHeight = Cell::GetGroundHeight(v62); /*0x62bf2d*/
  v59 = MEMORY[0xAC4A0C] + GroundHeight; /*0x62bf3d*/
  v13 = Coord::To_Cell(&MEMORY[0x87F7E8], v62); /*0x62bf46*/
  v50 = 0; /*0x62bf4d*/
  v49 = 0; /*0x62bf52*/
  if ( (v13[80] & 0x100) != 0 || (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], v60) + 80) & 0x100) != 0 ) /*0x62bf74*/
  {
    if ( v62[2] < v59 ) /*0x62bf84*/
    {
      if ( v61 >= v59 ) /*0x62bf93*/
        v50 = 1; /*0x62bf95*/
    }
    else if ( v61 < v59 ) /*0x62bf88*/
    {
      v49 = 1; /*0x62bf8a*/
    }
  }
  v48 = 0; /*0x62bf9e*/
  if ( !v50 && !v49 ) /*0x62bfb1*/
  {
    v14 = (double)GroundHeight; /*0x62bfb7*/
    if ( v58 >= v14 && v58 - 150.0 < v14 ) /*0x62bfdb*/
    {
      v15 = Cell::IsBridge(v13); /*0x62bfe4*/
      if ( v15 || BuildingPlacement::ValidateType(v13, -1, -1) ) /*0x62bff0*/
      {
        v48 = 1; /*0x62c001*/
        if ( v15 ) /*0x62c006*/
        {
          if ( *(_BYTE *)(v15[328] + 5823) ) /*0x62c00e*/
            v48 = v15[390] < 8; /*0x62c021*/
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v15 + 128))(v15) ) /*0x62c02a*/
            v48 = 0; /*0x62c034*/
        }
      }
      else
      {
        v48 = 0; /*0x62bff9*/
      }
    }
  }
  v54 = (float)GroundHeight; /*0x62c041*/
  if ( v58 < (double)v54 ) /*0x62c056*/
  {
    if ( !v50 ) /*0x62c1b7*/
    {
      if ( !v49 ) /*0x62c1cc*/
      {
LABEL_37:
        GroundHeight -= 100; /*0x62c07c*/
        if ( (double)GroundHeight < v58 ) /*0x62c094*/
          v58 = v54; /*0x62c09a*/
        goto LABEL_39; /*0x62c09a*/
      }
      goto LABEL_47; /*0x62c1cc*/
    }
  }
  else if ( !v50 ) /*0x62c05e*/
  {
    if ( !v49 ) /*0x62c06a*/
    {
      if ( !v48 ) /*0x62c076*/
        goto LABEL_40; /*0x62c076*/
      goto LABEL_37; /*0x62c076*/
    }
LABEL_47:
    LODWORD(v54) = v59 - 20; /*0x62c1d2*/
    v58 = (float)(v59 - 20); /*0x62c1e1*/
    goto LABEL_39; /*0x62c1e5*/
  }
  v58 = (float)v59; /*0x62c1bd*/
LABEL_39:
  Byte284 = CellClass::GetByte284(v62); /*0x62c09e*/
  qmemcpy(v65, CopyAudioData((char *)v67, Byte284), sizeof(v65)); /*0x62c0cb*/
  v17 = InvertMatrix3x3Signs(v67, v65); /*0x62c0d4*/
  v18 = *((float *)this + 52); /*0x62c0d9*/
  v19 = *v8; /*0x62c0ea*/
  qmemcpy(v66, v17, sizeof(v66)); /*0x62c0ec*/
  *(float *)&v44 = -v18; /*0x62c0f9*/
  Triple::Set(&v51, v19, v44, *((_DWORD *)this + 53)); /*0x62c0fd*/
  v20 = Matrix3x3::TransformPoint(v66, v63, (float *)&v51); /*0x62c113*/
  v51 = *(_DWORD *)v20; /*0x62c11f*/
  v52 = v20[1]; /*0x62c126*/
  v53 = v20[2]; /*0x62c131*/
  Coord::Scale((float *)&v51, 1.0); /*0x62c135*/
  v53 = -v53; /*0x62c14a*/
  v21 = Matrix3x3::TransformPoint(v65, v63, (float *)&v51); /*0x62c152*/
  v51 = *(_DWORD *)v21; /*0x62c159*/
  v52 = v21[1]; /*0x62c160*/
  v22 = v21[2]; /*0x62c164*/
  v23 = v51; /*0x62c167*/
  *((float *)this + 52) = -v52; /*0x62c171*/
  v53 = v22; /*0x62c176*/
  *v8 = v23; /*0x62c17a*/
  *((float *)this + 53) = v22; /*0x62c17c*/
LABEL_40:
  if ( (*(int (__thiscall **)(char *))(*(_DWORD *)this + 456))(this) <= 5 || (int)MEMORY[0xA8ED84] % 2 )
  {
    v24 = *((_DWORD *)this + 50) <= 0 ? 0 : *((_DWORD *)this + 50);
  }
  else
  {
    v24 = *((_DWORD *)this + 50) - 1; /*0x62c1a8*/
    if ( v24 < -5 ) /*0x62c1ac*/
      v24 = -5; /*0x62c1ae*/
  }
  *((_DWORD *)this + 50) = v24; /*0x62c1fa*/
LABEL_50:
  if ( !--*((_WORD *)this + 149) ) /*0x62c207*/
  {
    v25 = *((_DWORD *)this + 43); /*0x62c215*/
    if ( *(_DWORD *)(v25 + 744) ) /*0x62c21b*/
    {
      *((_WORD *)this + 149) = *(_WORD *)(v25 + 732); /*0x62c236*/
      v60[0] = *((_DWORD *)this + 39); /*0x62c23f*/
      v60[1] = *((_DWORD *)this + 40); /*0x62c250*/
      v61 = *((_DWORD *)this + 41); /*0x62c257*/
      v26 = (int *)*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], v60) + 57); /*0x62c260*/
      if ( v26 ) /*0x62c268*/
      {
        do /*0x62c30d*/
        {
          v27 = v26[39]; /*0x62c276*/
          v28 = v26[40]; /*0x62c278*/
          v64 = v26[41]; /*0x62c286*/
          v29 = *((_DWORD *)this + 39) - v27; /*0x62c28c*/
          v30 = *((_DWORD *)this + 40) - v28; /*0x62c291*/
          v31 = (int *)v26[12]; /*0x62c293*/
          v64 = *((_DWORD *)this + 41); /*0x62c299*/
          v32 = abs32(v29) + abs32(v30); /*0x62c2af*/
          if ( *((_BYTE *)v26 + 144) && v26[27] > 0 ) /*0x62c2c0*/
          {
            v33 = *((_DWORD *)this + 73); /*0x62c2c2*/
            if ( v33 ) /*0x62c2ca*/
              v34 = *(_DWORD *)(v33 + 252); /*0x62c2cc*/
            else
              v34 = 0; /*0x62c2d4*/
            v35 = *((_DWORD *)this + 43); /*0x62c2d6*/
            v47 = v34; /*0x62c2dc*/
            v54 = *(float *)(v35 + 744); /*0x62c2e9*/
            v36 = *v26; /*0x62c2f3*/
            v41 = *(_DWORD *)(v35 + 740); /*0x62c2f5*/
            v37 = ZCoordToScreenY(v32); /*0x62c2f6*/
            (*(void (__fastcall **)(int *, _DWORD, float *, _DWORD, int, _DWORD, _DWORD, _DWORD, int))(v36 + 364))( /*0x62c303*/
              v26,
              HIDWORD(v37),
              &v54,
              v37,
              v41,
              0,
              0,
              0,
              v47);
          }
          v26 = v31; /*0x62c30b*/
        }
        while ( v31 ); /*0x62c30d*/
      }
    }
  }
  v38 = *((_DWORD *)this + 43); /*0x62c316*/
  v39 = *(_DWORD *)(v38 + 736) /*0x62c33f*/
      - *((unsigned __int16 *)this + 148)
      + (*(int (__stdcall **)(char *))(this->vtable1 + 16))(this + 4);
  if ( !(v39 % (*(char *)(v38 + 779) + ((*(int (__stdcall **)(char *))(this->vtable1 + 16))(this + 4) & 1))) ) /*0x62c355*/
    ++*(this + 302); /*0x62c35b*/
  result = *(this + 302); /*0x62c361*/
  if ( result == *(_BYTE *)(v38 + 777) ) /*0x62c36f*/
  {
    result = *(_BYTE *)(v38 + 776); /*0x62c371*/
    if ( result ) /*0x62c379*/
      *(this + 305) = 1; /*0x62c37c*/
    else
      *(this + 302) = 0; /*0x62c38d*/
  }
  return result; /*0x62c37b*/
}
}
} // namespace game
} // namespace ra2

// 0x6296D0
namespace ra2 {
namespace game {
int ParasiteClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 486632321;
  a2[1] = 299086411;
  a2[2] = 268441278;
  a2[3] = 1822515787;
  return 0;
}
} // namespace game
} // namespace ra2
