// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4717D0
namespace ra2 {
namespace game {
int CaptureManagerClass::CaptureManagerClass(TechnoClass * aP1, int a3, char a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall CaptureManagerClass::CaptureManagerClass(int this, TechnoClass *aP1, int a3, char a4)
{
  int v5; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x4717d3*/
  *(_BYTE *)(this + 48) = 1; /*0x4717e2*/
  this->controlNodeCount = 0; /*0x4717e6*/
  this->controlNodeCapacity = 0; /*0x4717e9*/
  *(_BYTE *)(this + 49) = 0; /*0x4717ec*/
  this->controlNodes = &vt_DynamicVectorClass_ControlNode; /*0x4717ef*/
  *(_DWORD *)(this + 56) = 10; /*0x4717f6*/
  this->originalOwner = 0; /*0x4717fd*/
  this->overloadCount = aP1; /*0x471800*/
  *(_DWORD *)this = &CaptureManagerClass::`vftable'; /*0x471807*/
  this->vtable1 = &CaptureManagerClass::`vftable'; /*0x47180d*/
  this->vtable2 = &CaptureManagerClass::`vftable'; /*0x471814*/
  this->vtable3 = &vt_CaptureManagerClass; /*0x47181b*/
  *(_DWORD *)(this + 60) = a3; /*0x471822*/
  this->CaptureManagerClass_field_40 = a4; /*0x471825*/
  this->CaptureManagerClass_field_41 = 0; /*0x471828*/
  this->linkCount = 30; /*0x47182b*/
  this->overloadLimit = 0; /*0x471832*/
  if ( dword_89E100 < dword_89E0F8 /*0x471868*/
    || (unk_89E0FD || !dword_89E0F8)
    && dword_89E104 > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_89E0F0 + 8))(
         &dword_89E0F0,
         dword_89E0F8 + dword_89E104,
         0) )
  {
    v5 = dword_89E100++; /*0x471875*/
    *((_DWORD *)unk_89E0F4 + v5) = this; /*0x471884*/
  }
  return this; /*0x471889*/
}
}
} // namespace game
} // namespace ra2

// 0x471A50
namespace ra2 {
namespace game {
char CaptureManagerClass::HandleOverload()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall ProcessCashCrateEffect(int this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // edx
  int v6; // eax
  _DWORD *v7; // ecx
  int v8; // ebp
  int v9; // ecx
  int *v10; // eax
  int *v11; // eax
  int v12; // ebx
  int v13; // edi
  int v14; // ebp
  int *v15; // edx
  int v16; // eax
  void *v17; // eax
  double v18; // st7
  int v20; // [esp+1Ch] [ebp-30h]
  float v21; // [esp+1Ch] [ebp-30h]
  int v22; // [esp+20h] [ebp-2Ch]
  int v23; // [esp+24h] [ebp-28h] BYREF
  int v24; // [esp+28h] [ebp-24h] BYREF
  int v25; // [esp+2Ch] [ebp-20h]
  int v26; // [esp+30h] [ebp-1Ch]
  int v27[3]; // [esp+34h] [ebp-18h] BYREF
  int v28; // [esp+40h] [ebp-Ch]
  int v29; // [esp+44h] [ebp-8h]
  int v30; // [esp+48h] [ebp-4h]

  LOBYTE(v2) = this->CaptureManagerClass_field_40; /*0x471a59*/
  if ( (_BYTE)v2 ) /*0x471a5e*/
  {
    v3 = this->overloadLimit; /*0x471a64*/
    if ( v3 > 0 ) /*0x471a69*/
      this->overloadLimit = v3 - 1; /*0x471a6c*/
    v4 = this->linkCount; /*0x471a6f*/
    if ( v4 <= 0 ) /*0x471a74*/
    {
      v5 = this->originalOwner; /*0x471a88*/
      v6 = 0; /*0x471a8b*/
      v7 = (_DWORD *)MEMORY[0x8871E0]->?[1]; /*0x471a8d*/
      v20 = 0; /*0x471a93*/
      if ( v5 > *v7 ) /*0x471a99*/
      {
        do /*0x471aaf*/
        {
          if ( v6 >= MEMORY[0x8871E0]->?[0] - 1 ) /*0x471aa4*/
            break; /*0x471aa4*/
          v8 = v7[1]; /*0x471aa6*/
          ++v7; /*0x471aa9*/
          ++v6; /*0x471aac*/
        }
        while ( v5 > v8 ); /*0x471aaf*/
        v20 = v6; /*0x471ab1*/
      }
      this->linkCount = *(_DWORD *)(HIDWORD(MEMORY[0x8871E0]->?) + 4 * v6); /*0x471abe*/
      v2 = *(_DWORD *)(MEMORY[0x8871E0]->?[0] + 4 * v6); /*0x471acd*/
      v23 = v2; /*0x471ad2*/
      if ( v2 <= 0 ) /*0x471ad6*/
      {
        this->CaptureManagerClass_field_41 = 0; /*0x471c83*/
      }
      else
      {
        v9 = this->overloadCount; /*0x471adc*/
        this->overloadLimit = 10; /*0x471adf*/
        (*(void (__thiscall **)(int, int *, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v9 + 364))( /*0x471b04*/
          v9,
          &v23,
          0,
          MEMORY[0x8871E0]->?[5],
          0,
          0,
          0,
          0);
        if ( !this->CaptureManagerClass_field_41 ) /*0x471b0a*/
        {
          v10 = (int *)(this->overloadCount + 156); /*0x471b16*/
          v24 = *v10; /*0x471b1d*/
          v25 = v10[1]; /*0x471b2a*/
          v26 = v10[2]; /*0x471b35*/
          StartAudioControllerAt(MEMORY[0x8871E0]->?, (int)&v24, 0); /*0x471b3f*/
          this->CaptureManagerClass_field_41 = 1; /*0x471b44*/
        }
        v22 = 5; /*0x471b48*/
        do /*0x471c23*/
        {
          v11 = (int *)(this->overloadCount + 156); /*0x471b58*/
          v12 = *(_DWORD *)(this->overloadCount + 160); /*0x471b64*/
          v28 = *v11; /*0x471b69*/
          v29 = v11[1]; /*0x471b70*/
          v13 = v11[2]; /*0x471b7a*/
          v28 = *v11; /*0x471b88*/
          v30 = v13; /*0x471b8c*/
          v14 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, -200, 200); /*0x471b98*/
          v15 = (int *)(this->overloadCount + 156); /*0x471b9a*/
          v24 = *v15; /*0x471bac*/
          v25 = v15[1]; /*0x471bb8*/
          v26 = v15[2]; /*0x471bc5*/
          v16 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, -200, 200); /*0x471bc9*/
          v27[0] = v24 + v16; /*0x471bde*/
          v27[1] = v14 + v12; /*0x471be2*/
          v27[2] = v13 + 100; /*0x471be6*/
          v17 = __2_YAPAXI_Z(0x100u); /*0x471bea*/
          if ( v17 ) /*0x471bf4*/
            ParticleSystemClass::Constructor((int)v17, MEMORY[0x8871E0]->?, v27, 0, 0, &stru_89E138, 0); /*0x471c15*/
          --v22; /*0x471c1f*/
        }
        while ( v22 ); /*0x471c23*/
        v2 = v20; /*0x471c29*/
        if ( v20 > 0 && *(_BYTE *)(this->overloadCount + 144) ) /*0x471c34*/
        {
          v21 = 0.015; /*0x471c41*/
          if ( v2 != 1 ) /*0x471c49*/
            v21 = 0.029999999; /*0x471c4b*/
          v2 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 100); /*0x471c62*/
          v18 = v21; /*0x471c67*/
          if ( v2 < 50 ) /*0x471c6e*/
            v18 = -v18; /*0x471c70*/
          *(float *)(this->overloadCount + 816) = v18; /*0x471c78*/
        }
      }
    }
    else
    {
      v2 = v4 - 1; /*0x471a76*/
      this->linkCount = v2; /*0x471a78*/
    }
  }
  return v2; /*0x471a77*/
}
}
} // namespace game
} // namespace ra2

// 0x471C90
namespace ra2 {
namespace game {
bool CaptureManagerClass::CanCapture(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall CaptureManagerClass::CanCapture(int this, _DWORD *a2)
{
  int v3; // edi
  int v4; // ebp
  int v5; // eax
  int v6; // esi
  bool result; // al

  result = 0; /*0x471d36*/
  if ( a2 ) /*0x471c9a*/
  {
    v3 = this->overloadCount; /*0x471ca4*/
    v4 = (*(int (__thiscall **)(_DWORD *))(*a2 + 60))(a2); /*0x471cb0*/
    if ( v4 != (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 60))(v3) /*0x471cfe*/
      && !*(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*a2 + 132))(a2) + 3381)
      && (!a2[185] || (*(int (__thiscall **)(_DWORD *))(*a2 + 44))(a2) != 1)
      && !BuildingClass::IsBeingRepairedOrCaptured((int)a2)
      && !a2[179]
      && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 352))(a2) )
    {
      if ( this->CaptureManagerClass_field_40 || (v5 = *(_DWORD *)(this + 60), this->originalOwner < v5) || v5 == 1 ) /*0x471d1c*/
      {
        v6 = a2[43]; /*0x471d1e*/
        if ( v6 != 19 && v6 != 18 ) /*0x471d2c*/
          return 1; /*0x471ce3*/
      }
    }
  }
  return result; /*0x471d2e*/
}
}
} // namespace game
} // namespace ra2

// 0x471D40
namespace ra2 {
namespace game {
char CaptureManagerClass::CaptureUnit(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall CaptureManagerClass::CaptureUnit(int this, int a2)
{
  char result; // al
  int v5; // esi
  int i; // edi
  int v7; // eax
  int v8; // ebp
  int v9; // edi
  int v10; // eax
  int v11; // eax
  int *v12; // ebp
  IUnknown *v13; // ecx
  IUnknown *v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // edx
  _DWORD *v18; // ebp
  int v19; // ecx
  int v20; // eax
  int v21; // ebx
  int v22; // edi
  int v23; // eax
  IUnknown *v24; // ecx
  int v25; // edx
  AnimClass *v26; // eax
  void **v27; // eax
  AnimClass *v28; // eax
  int v29; // [esp+4h] [ebp-28h]
  IUnknown *v30; // [esp+8h] [ebp-24h]
  IUnknown *v31; // [esp+Ch] [ebp-20h]
  int v32; // [esp+10h] [ebp-1Ch]
  CoordStruct aP2; // [esp+14h] [ebp-18h] BYREF
  int v34[3]; // [esp+20h] [ebp-Ch] BYREF

  if ( !a2 ) /*0x471d4f*/
    return 0; /*0x471d54*/
  v5 = (*(_BYTE *)(a2 + 20) & 1) != 0 ? a2 : 0;
  result = CaptureManagerClass::CanCapture(this, (_DWORD *)v5); /*0x471d6e*/
  if ( result )
  {
    if ( *(_DWORD *)(this + 60) == 1 ) /*0x471d85*/
    {
      for ( i = this->originalOwner - 1; i >= 0; --i ) /*0x471d8b*/
        CaptureManagerClass::FreeUnit( /*0x471d98*/
          **(IUnknown ***)(this->controlNodeCount + 4 * i),
          v29,
          v30,
          v31,
          v32,
          (IUnknown **)aP2.X);
    }
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 60))(v5); /*0x471da4*/
    v8 = *(_DWORD *)v5; /*0x471daa*/
    v9 = v7; /*0x471dac*/
    v10 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 72) + 60))(this->overloadCount, 1); /*0x471db2*/
    result = (*(int (__thiscall **)(int, int))(v8 + 980))(v5, v10); /*0x471db8*/
    if ( result )
    {
      v11 = __2_YAPAXI_Z(0x14u); /*0x471dce*/
      v12 = 0; /*0x471dd3*/
      if ( v11 ) /*0x471dda*/
      {
        v13 = *(IUnknown **)&HouseClass_Player.__pad_5568[23248]; /*0x471ddc*/
        *(_DWORD *)(v11 + 16) = 0; /*0x471de2*/
        *(_DWORD *)(v11 + 8) = v13; /*0x471de5*/
        v12 = (int *)v11; /*0x471de8*/
      }
      v12[1] = v9; /*0x471dea*/
      *v12 = v5; /*0x471df0*/
      v14 = *(IUnknown **)(this + 44); /*0x471df3*/
      if ( this->originalOwner < (int)v14 /*0x471e18*/
        || (*(_BYTE *)(this + 49) || !v14)
        && (v15 = *(_DWORD *)(this + 56), v15 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, char *, _DWORD))(this->controlNodes + 8))(
             this + 36,
             (char *)v14 + v15,
             0) )
      {
        v16 = this->originalOwner; /*0x471e1f*/
        v17 = this->controlNodeCount; /*0x471e22*/
        this->originalOwner = v16 + 1; /*0x471e28*/
        *(_DWORD *)(v17 + 4 * v16) = v12; /*0x471e2b*/
      }
      v18 = v12 + 2; /*0x471e31*/
      *(_DWORD *)(v5 + 704) = this->overloadCount; /*0x471e34*/
      v19 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 784); /*0x471e45*/
      *v18 = *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x471e4b*/
      v18[1] = aP2.Y; /*0x471e52*/
      v18[2] = v19; /*0x471e57*/
      if ( !v5
        || (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 44))(v5) != 1
        || !*(_BYTE *)(*(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v5 + 44))(v5) == 1 ? v5 + 0x6C4 : 1732) + 3603)
        || *(_DWORD *)(v5 + 172) != 16 )
      {
        v20 = *(_DWORD *)(v5 + 172); /*0x471e91*/
        if ( v20 != 19 && v20 != 18 ) /*0x471e9f*/
          (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 976))(v5); /*0x471ea5*/
      }
      CaptureManagerClass::DecideUnitFate((_DWORD *)this, (IUnknown *)v5); /*0x471eae*/
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2) == 6 ) /*0x471ec1*/
      {
        v21 = a2; /*0x471ecb*/
        v22 = stru_89E138.field_40 * *(_DWORD *)(*(_DWORD *)(a2 + 1312) + 3828); /*0x471ed8*/
      }
      else
      {
        v21 = 0; /*0x471eea*/
        v22 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v5 + 132))(v5) + 1548); /*0x471ef2*/
      }
      v23 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)v5 + 72))(v5, v34); /*0x471ee1*/
      v24 = *(IUnknown **)v23; /*0x471f04*/
      v25 = *(_DWORD *)(v23 + 4); /*0x471f06*/
      v26 = (AnimClass *)(v22 + *(_DWORD *)(v23 + 8)); /*0x471f11*/
      aP2.X = (int)v24; /*0x471f13*/
      aP2.Y = v25; /*0x471f17*/
      aP2.Z = (int)v26; /*0x471f1b*/
      v27 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x471f1f*/
      if ( v27 ) /*0x471f29*/
        v28 = AnimClass::ctor( /*0x471f4c*/
                v27,
                *(CoordStruct **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 800),
                &aP2,
                0,
                (CoordStruct *)1,
                (void *)0x600,
                0,
                0);
      else
        v28 = 0; /*0x471f53*/
      *(_DWORD *)(v5 + 712) = v28; /*0x471f57*/
      if ( v28 ) /*0x471f5d*/
      {
        BuildingClass::AimTurret(v28, (IUnknown *)v5); /*0x471f62*/
        if ( v21 ) /*0x471f69*/
          *(_DWORD *)(*(_DWORD *)(v5 + 712) + 256) = -1024; /*0x471f71*/
      }
      return 1; /*0x471f7e*/
    }
  }
  return result; /*0x471d51*/
}
}
} // namespace game
} // namespace ra2

// 0x471FF0
namespace ra2 {
namespace game {
char CaptureManagerClass::FreeUnit(IUnknown * aP0, int _28, IUnknown * a2, IUnknown * aP1, int _34, IUnknown ** a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char CaptureManagerClass::FreeUnit(IUnknown *aP0, int _28, IUnknown *a2, IUnknown *aP1, int _34, IUnknown **a5)
{
  _DWORD *v6; // ecx
  int v7; // ebx
  IUnknown *v8; // ebp
  _DWORD *v9; // edi
  int v11; // ebx
  IUnknown **v12; // ebp
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  IUnknown *v20; // [esp-8h] [ebp-28h]
  int v21; // [esp-4h] [ebp-24h]
  int v22[3]; // [esp+10h] [ebp-10h] BYREF
  int v23; // [esp+1Ch] [ebp-4h] BYREF
  _UNKNOWN *retaddr; // [esp+20h] [ebp+0h]

  v9 = v6; /*0x471ff9*/
  if ( !aP0 ) /*0x471ffd*/
    return 0; /*0x472000*/
  v21 = v7; /*0x472009*/
  v11 = v6[13] - 1; /*0x47200d*/
  if ( v11 >= 0 ) /*0x47200e*/
  {
    v20 = v8; /*0x472014*/
    do /*0x47212b*/
    {
      v12 = *(IUnknown ***)(v9[10] + 4 * v11); /*0x472018*/
      if ( *v12 == aP0 ) /*0x472022*/
      {
        v13 = *(_DWORD *)&aP0->__pad_2B8[16]; /*0x472028*/
        if ( v13 ) /*0x472030*/
        {
          (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 248))(v13); /*0x472034*/
          *(_DWORD *)&aP0->__pad_2B8[16] = 0; /*0x47203a*/
        }
        if ( *(_DWORD *)((*(int (__thiscall **)(IUnknown *, IUnknown *, int))(aP0->field_0 + 132))(aP0, v20, v21) + 1456) == -1 ) /*0x472059*/
        {
          if ( *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 612) != -1 ) /*0x4720a3*/
          {
            v23 = aP0->field_9C; /*0x4720af*/
            retaddr = *(_UNKNOWN **)aP0->__pad_A0; /*0x4720b6*/
            StartAudioControllerAt(*(AudioController **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 612), (int)&v23, 0); /*0x4720cb*/
          }
        }
        else
        {
          v22[0] = aP0->field_9C; /*0x472069*/
          v14 = aP0->field_0; /*0x47206d*/
          v22[1] = *(_DWORD *)aP0->__pad_A0; /*0x472072*/
          v22[2] = aP0->field_A4; /*0x472079*/
          v15 = (*(int (__thiscall **)(IUnknown *))(v14 + 132))(aP0); /*0x47207f*/
          StartAudioControllerAt(*(AudioController **)(v15 + 1456), (int)v22, 0); /*0x47208d*/
          v12 = (IUnknown **)a2; /*0x472092*/
        }
        v21 = 1; /*0x4720d5*/
        v20 = v12[1]; /*0x4720d7*/
        (*(void (__thiscall **)(IUnknown *))(aP0->field_0 + 980))(aP0); /*0x4720da*/
        CaptureManagerClass::DecideUnitFate(v9, aP0); /*0x4720e3*/
        *(_DWORD *)&aP0->__pad_2B8[8] = 0; /*0x4720e8*/
        v16 = v9[10]; /*0x4720f2*/
        if ( *(_DWORD *)(v16 + 4 * v11) ) /*0x4720f5*/
          __3_YAXPAX_Z(*(void **)(v16 + 4 * v11)); /*0x4720fd*/
        v17 = v9[13]; /*0x472105*/
        if ( v11 < v17 ) /*0x47210a*/
        {
          v18 = v17 - 1; /*0x47210c*/
          v19 = v11; /*0x47210f*/
          for ( v9[13] = v18; v19 < v9[13]; *(_DWORD *)(v9[10] + 4 * v19 - 4) = *(_DWORD *)(v9[10] + 4 * v19) ) /*0x472116*/
            ++v19; /*0x47211b*/
        }
      }
      --v11; /*0x47212a*/
    }
    while ( v11 >= 0 ); /*0x47212b*/
  }
  return 1; /*0x471fff*/
}
}
} // namespace game
} // namespace ra2

// 0x472160
namespace ra2 {
namespace game {
char CaptureManagerClass::DrawLinks(int a1, ... a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char CaptureManagerClass::DrawLinks(int a1, ...)
{
  int v1; // ecx
  int v2; // edi
  int v3; // eax
  int v4; // ebp
  char v5; // bl
  int *v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // ebp
  int v11; // esi
  int v12; // eax
  _DWORD *v13; // ecx
  int *v14; // eax
  int v16; // [esp+0h] [ebp-30h]
  int v17; // [esp+4h] [ebp-2Ch]
  void *v18; // [esp+8h] [ebp-28h]
  int v19; // [esp+Ch] [ebp-24h]
  int v20; // [esp+10h] [ebp-20h]
  int v21; // [esp+28h] [ebp-8h]
  void *retaddr; // [esp+30h] [ebp+0h]
  va_list va; // [esp+38h] [ebp+8h] BYREF

  va_start(va, a1);
  v2 = v1; /*0x472167*/
  v3 = *(_DWORD *)(v1 + 72); /*0x47216e*/
  HIBYTE(v20) = *(_BYTE *)(v3 + 131) != 0; /*0x47217b*/
  v4 = *(_DWORD *)(v1 + 52) - 1; /*0x472183*/
  if ( v4 >= 0 ) /*0x472188*/
  {
    while ( 1 ) /*0x472191*/
    {
      v5 = 0; /*0x472191*/
      v6 = *(int **)(*(_DWORD *)(v2 + 40) + 4 * v4); /*0x472193*/
      v7 = *v6; /*0x472196*/
      v8 = v6[4]; /*0x472198*/
      v9 = v6[2]; /*0x47219b*/
      if ( v9 == -1 ) /*0x4721a1*/
        goto LABEL_5; /*0x4721a1*/
      if ( (int)MEMORY[0xA8ED84] - v9 < v8 ) /*0x4721ad*/
        break; /*0x4721ad*/
LABEL_7:
      if ( *(_BYTE *)(v7 + 131) ) /*0x4721b7*/
        v5 = 1; /*0x4721c1*/
      v3 = *(_DWORD *)(v2 + 72); /*0x4721c3*/
      if ( v3 ) /*0x4721c8*/
      {
        if ( v7 ) /*0x4721d0*/
        {
          LOBYTE(v3) = HIBYTE(v20); /*0x4721d6*/
          if ( HIBYTE(v20) || v5 ) /*0x4721e0*/
          {
            v10 = *(_DWORD *)(v7 + 156); /*0x4721ec*/
            v11 = *(_DWORD *)(v7 + 164); /*0x4721f9*/
            v12 = (*(int (__thiscall **)(int, int, int, void *, int, int))(*(_DWORD *)v7 + 132))( /*0x4721fe*/
                    v7,
                    v16,
                    v17,
                    v18,
                    v19,
                    v20);
            v13 = *(_DWORD **)(v2 + 72); /*0x47220c*/
            HIBYTE(v20) = HIBYTE(v13); /*0x47220f*/
            LOWORD(v20) = *(_WORD *)(v13[135] + 22265); /*0x472223*/
            BYTE2(v20) = *(_BYTE *)(v13[135] + 22267); /*0x47222e*/
            v17 = v10; /*0x47223a*/
            v4 = v21; /*0x47223c*/
            v18 = retaddr; /*0x472240*/
            v19 = *(_DWORD *)(v12 + 988) + v11; /*0x472245*/
            v16 = 0; /*0x472251*/
            v14 = (int *)(*(int (__thiscall **)(_DWORD *))(*v13 + 176))(v13); /*0x472264*/
            LOBYTE(v3) = DrawTacticalLaserLine(*v14, v14[1], v14[2], (int)va, -1 - v21 % 5, 0, 0); /*0x472282*/
          }
        }
      }
      if ( --v4 < 0 ) /*0x47228c*/
        return v3; /*0x47228c*/
    }
    v8 -= (int)MEMORY[0xA8ED84] - v9; /*0x4721af*/
LABEL_5:
    if ( v8 > 0 ) /*0x4721b3*/
      v5 = 1; /*0x4721b5*/
    goto LABEL_7; /*0x4721b5*/
  }
  return v3; /*0x472292*/
}
}
} // namespace game
} // namespace ra2

// 0x4722A0
namespace ra2 {
namespace game {
bool CaptureManagerClass::CannotControlAnyMore()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall CaptureManagerClass::CannotControlAnyMore(int this)
{
  return !this->CaptureManagerClass_field_40 && this->originalOwner >= *(_DWORD *)(this + 60); /*0x4722a7*/
}
}
} // namespace game
} // namespace ra2

// 0x4723B0
namespace ra2 {
namespace game {
void CaptureManagerClass::DecideUnitFate(IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall CaptureManagerClass::DecideUnitFate(_DWORD *this, IUnknown *aP1)
{
  AbstractClass *v3; // edi
  int v5; // ecx
  _DWORD *v6; // ecx
  int v7; // ecx
  int v8; // eax
  AbstractClass **v9; // esi
  int v10; // ebp
  int v11; // eax
  bool cc21; // cc
  AbstractClass *v12; // esi
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  void *ecx31; // ecx
  char v19; // al
  AbstractClass *v18; // [esp-4h] [ebp-24h]
  AbstractClass *v21; // [esp+10h] [ebp-10h]
  AbstractClass *v22; // [esp+10h] [ebp-10h]
  float v23; // [esp+18h] [ebp-8h]
  int v24; // [esp+18h] [ebp-8h]
  bool aP1a; // [esp+24h] [ebp+4h]

  v3 = 0; /*0x4723bb*/
  if ( !aP1 ) /*0x4723c5*/
    return; /*0x4723c5*/
  if ( (aP1->__pad_10[4] & 4) != 0 ) /*0x4723cf*/
  {
    v5 = *(_DWORD *)&aP1->__pad_524[176]; /*0x4723d1*/
    if ( v5 ) /*0x4723d9*/
      TeamClass::LiberateMember_Start(v5, aP1, 0xFFFFFFFF, 0); /*0x4723df*/
  }
  v6 = *(_DWORD **)&aP1->__pad_220[84]; /*0x4723e4*/
  if ( v6 && v6[10] ) /*0x4723ee*/
    FactoryClass::CompleteItem(v6); /*0x4723f3*/
  if ( *(_BYTE *)((*(int (__thiscall **)(IUnknown *))(aP1->field_0 + 132))(aP1) + 1508) ) /*0x472402*/
    CCINIClass::IterateNodes(aP1, 0); /*0x47240f*/
  v7 = aP1->field_21C; /*0x472417*/
  v8 = *(_DWORD *)(*(this + 18) + 540); /*0x472422*/
  aP1a = v7 != v8; /*0x47242c*/
  if ( *(_BYTE *)(v7 + 492) ) /*0x472431*/
    return; /*0x472439*/
  v21 = 0; /*0x472446*/
  if ( (*(int (__stdcall **)(int))(*(_DWORD *)(v8 + 36) + 24))(v8 + 36) >= *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] /*0x472459*/
                                                                                     + 3772) )
  {
    if ( HouseClass::GetPowerRatio((int *)*(_DWORD *)(*(this + 18) + 540)) >= 1.0 ) /*0x472480*/
    {
      v23 = (float)*(int *)&aP1->__pad_68[4]; /*0x47249e*/
      if ( v23 / (double)*(int *)((*(int (__thiscall **)(IUnknown *))(aP1->field_0 + 132))(aP1) + 160) >= *(float *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 3776) ) /*0x4724c3*/
        v9 = (AbstractClass **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 3660); /*0x4724dd*/
      else
        v9 = (AbstractClass **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 3688); /*0x4724cd*/
    }
    else
    {
      v9 = (AbstractClass **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 3716); /*0x47248f*/
    }
  }
  else
  {
    v9 = (AbstractClass **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 3744); /*0x47245f*/
  }
  v10 = Random::Range(&MEMORY[0xA8B230]->random[1], (IUnknown *)1, (IUnknown *)0x64); /*0x4724f7*/
  v24 = 0; /*0x4724f9*/
  if ( v10 <= 0 )
  {
LABEL_22:
    v12 = v21; /*0x472537*/
    (*(int (__thiscall **)(IUnknown *))(aP1->field_0 + 132))(aP1); /*0x47253b*/
    Debug::Log(); /*0x472563*/
    v14 = *(this + 18); /*0x47256f*/
    if ( v14 ) /*0x472574*/
    {
      if ( (*(_BYTE *)(v14 + 20) & 4) != 0 ) /*0x47257a*/
      {
        v15 = *(_DWORD *)(v14 + 1492); /*0x47257c*/
        if ( v15 ) /*0x472584*/
        {
          v16 = *(_DWORD *)(v15 + 36); /*0x472586*/
          if ( *(_DWORD *)(v16 + 192) ) /*0x472589*/
          {
            v22 = *(AbstractClass **)(v16 + 192); /*0x47259a*/
            Debug::Log(); /*0x4725a4*/
            v12 = v22; /*0x4725a9*/
          }
        }
      }
    }
    if ( v12 == (AbstractClass *)1 )
    {
      if ( !aP1a )
      {
        v17 = *(this + 18); /*0x4725bd*/
        if ( v17 )
        {
          if ( (*(_BYTE *)(v17 + 20) & 4) != 0 )
          {
            ecx31 = *(void **)(v17 + 1492); /*0x4725ca*/
            if ( ecx31 )
            {
              v19 = CaptureManagerClass::AddMember(ecx31, (aP1->__pad_10[4] & 4) != 0 ? (TechnoClass *)aP1 : 0);
              goto LABEL_33; /*0x4725e0*/
            }
          }
        }
      }
LABEL_34:
      Debug::Log(); /*0x4725e9*/
      (*(void (__thiscall **)(IUnknown *, int, _DWORD))(aP1->field_0 + 488))(aP1, 15, 0); /*0x4725fe*/
      return; /*0x4725fe*/
    }
    if ( v12 == (AbstractClass *)2 ) /*0x472611*/
    {
      v19 = (*(int (__thiscall **)(IUnknown *))(aP1->field_0 + 828))(aP1); /*0x472617*/
    }
    else
    {
      if ( v12 != (AbstractClass *)3 ) /*0x472622*/
      {
        if ( v12 == (AbstractClass *)5 ) /*0x472633*/
          return; /*0x472633*/
        goto LABEL_34; /*0x472633*/
      }
      v19 = (*(int (__thiscall **)(IUnknown *))(aP1->field_0 + 832))(aP1); /*0x472628*/
    }
LABEL_33:
    if ( v19 ) /*0x4725e7*/
      return; /*0x4725e7*/
    goto LABEL_34; /*0x4725e7*/
  }
  while ( v21 != (AbstractClass *)6 && v3 != v9[4] ) /*0x47250f*/
  {
    v21 = (AbstractClass *)((char *)v21 + 1); /*0x47251e*/
    v18 = v3; /*0x472524*/
    v3 = (AbstractClass *)((char *)v3 + 1); /*0x472525*/
    v11 = ((int (__thiscall *)(AbstractClass **, AbstractClass *))(*v9)->nextArrayIndex)(v9, v18); /*0x472526*/
    cc21 = v10 <= v11 + v24; /*0x47252f*/
    v24 += v11; /*0x472531*/
    if ( cc21 ) /*0x472535*/
      goto LABEL_22; /*0x472535*/
  }
}
}
} // namespace game
} // namespace ra2

// 0x472640
namespace ra2 {
namespace game {
char CaptureManagerClass::NeedsToDrawLinks()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall CaptureManagerClass::NeedsToDrawLinks(_DWORD *this)
{
  int v1; // eax
  int v3; // eax
  int v4; // esi
  int i; // edi
  int v6; // eax
  int v7; // edx
  int v8; // ecx

  v1 = *(this + 18); /*0x472640*/
  if ( *(_BYTE *)(v1 + 131) ) /*0x472646*/
    return 1; /*0x472655*/
  v3 = *(_DWORD *)(v1 + 284); /*0x472656*/
  if ( v3 && *(_BYTE *)(v3 + 131) ) /*0x472660*/
    return 1; /*0x47266f*/
  v4 = *(this + 13) - 1; /*0x472673*/
  if ( v4 >= 0 ) /*0x472674*/
  {
    for ( i = *(this + 10) + 4 * v4; ; i -= 4 ) /*0x47267f*/
    {
      v6 = *(_DWORD *)i; /*0x472682*/
      if ( *(_BYTE *)(**(_DWORD **)i + 131) ) /*0x472686*/
        return 1; /*0x47268e*/
      v7 = *(_DWORD *)(v6 + 8); /*0x472690*/
      v8 = *(_DWORD *)(v6 + 16); /*0x472693*/
      if ( v7 == -1 ) /*0x472699*/
        goto LABEL_12; /*0x472699*/
      if ( (int)MEMORY[0xA8ED84] - v7 < v8 ) /*0x4726a1*/
        break; /*0x4726a1*/
LABEL_13:
      if ( --v4 < 0 ) /*0x4726af*/
        return 0; /*0x4726af*/
    }
    v8 -= (int)MEMORY[0xA8ED84] - v7; /*0x4726a3*/
LABEL_12:
    if ( v8 > 0 ) /*0x4726a7*/
      return 1; /*0x4726a7*/
    goto LABEL_13; /*0x4726a7*/
  }
  return 0; /*0x472650*/
}
}
} // namespace game
} // namespace ra2

// 0x4726C0
namespace ra2 {
namespace game {
char CaptureManagerClass::IsOverloading(bool * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall CaptureManagerClass::IsOverloading(int this, bool *a2)
{
  if ( !this->CaptureManagerClass_field_40 || this->originalOwner <= *(_DWORD *)(this + 60) ) /*0x4726cf*/
    return 0; /*0x4726e4*/
  *a2 = this->overloadLimit > 0; /*0x4726dd*/
  return 1; /*0x4726e1*/
}
}
} // namespace game
} // namespace ra2

// 0x472720
namespace ra2 {
namespace game {
int CaptureManagerClass::LoadFromStream(int a1, int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall CaptureManagerClass::LoadFromStream(int a1, int *a2)
{
  int *v2; // ebx
  int v3; // ebp
  int result; // eax
  _DWORD *v5; // edi
  int v6; // edx
  int v7; // eax
  _DWORD *v8; // eax
  wchar_t *v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  int v15; // esi
  int v16; // [esp+34h] [ebp-18h] BYREF
  int v17; // [esp+38h] [ebp-14h]
  int v18; // [esp+3Ch] [ebp-10h]
  int v19; // [esp+44h] [ebp-8h]

  v2 = a2; /*0x472724*/
  v3 = a1; /*0x472729*/
  result = AbstractClass::SaveLoad_Prefix_0(a1, a2); /*0x472731*/
  v5 = 0; /*0x472736*/
  if ( result >= 0 ) /*0x47273a*/
  {
    if ( v3 ) /*0x472742*/
    {
      AbstractClass::InitVtables((_DWORD *)v3, (int)&a2); /*0x47274b*/
      CaptureManagerClass::Constructor_473140(0, 0); /*0x472757*/
      *(_DWORD *)(v3 + 36) = &vt_DynamicVectorClass_ControlNode; /*0x47275c*/
      *(_DWORD *)(v3 + 56) = 10; /*0x472762*/
      *(_DWORD *)(v3 + 52) = 0; /*0x472769*/
      *(_DWORD *)v3 = &CaptureManagerClass::`vftable'; /*0x47276c*/
      *(_DWORD *)(v3 + 4) = &CaptureManagerClass::`vftable'; /*0x472773*/
      *(_DWORD *)(v3 + 8) = &CaptureManagerClass::`vftable'; /*0x47277a*/
      *(_DWORD *)(v3 + 12) = &vt_CaptureManagerClass; /*0x472781*/
    }
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v3 + 72)); /*0x472791*/
    v6 = *v2; /*0x472796*/
    a1 = 0; /*0x4727a1*/
    result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v6 + 12))(v2, &a1, 4, 0); /*0x4727a5*/
    v18 = result; /*0x4727aa*/
    if ( result >= 0 ) /*0x4727ae*/
    {
      v7 = a1; /*0x4727b4*/
      v17 = 0; /*0x4727b8*/
      if ( a1 <= 0 ) /*0x4727be*/
      {
LABEL_19:
        v15 = 0; /*0x472894*/
        if ( v7 > 0 ) /*0x472898*/
        {
          do /*0x4728c4*/
          {
            ObjectPtr::RegisterForTracking( /*0x4728a9*/
              (int)&MEMORY[0xB0C110],
              (int *)(*(_DWORD *)(*(_DWORD *)(v3 + 40) + 4 * v15) + 4));
            ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], *(int **)(*(_DWORD *)(v3 + 40) + 4 * v15++)); /*0x4728ba*/
          }
          while ( v15 < a1 ); /*0x4728c4*/
        }
        return v18; /*0x4728c6*/
      }
      else
      {
        while ( 1 ) /*0x4727ca*/
        {
          v8 = __2_YAPAXI_Z(0x14u); /*0x4727ca*/
          if ( v8 ) /*0x4727d4*/
          {
            v9 = MEMORY[0xA8ED84]; /*0x4727d6*/
            v8[4] = 0; /*0x4727dc*/
            v8[2] = v9; /*0x4727df*/
            v5 = v8; /*0x4727e2*/
          }
          v10 = *v2; /*0x4727e4*/
          a2 = 0; /*0x4727f1*/
          v16 = 0; /*0x4727f5*/
          result = (*(int (__stdcall **)(int *, int **, int, _DWORD))(v10 + 12))(v2, &a2, 4, 0); /*0x4727f9*/
          if ( result < 0 ) /*0x4727fe*/
            break; /*0x4727fe*/
          result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(*v2 + 12))(v2, &v16, 4, 0); /*0x47280f*/
          v18 = result; /*0x472814*/
          if ( result < 0 ) /*0x472818*/
            break; /*0x472818*/
          v5[1] = a2; /*0x472825*/
          *v5 = v16; /*0x47282c*/
          v5[2] = MEMORY[0xA8ED84]; /*0x472833*/
          v5[3] = v19; /*0x47283e*/
          v5[4] = 0; /*0x472841*/
          v11 = *(_DWORD *)(v3 + 44); /*0x472844*/
          if ( *(_DWORD *)(v3 + 52) < v11 /*0x472867*/
            || (*(_BYTE *)(v3 + 49) || !v11)
            && (v12 = *(_DWORD *)(v3 + 56), v12 > 0)
            && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v3 + 36) + 8))(v3 + 36, v11 + v12, 0) )
          {
            v13 = *(_DWORD *)(v3 + 52); /*0x47286e*/
            v14 = *(_DWORD *)(v3 + 40); /*0x472871*/
            *(_DWORD *)(v3 + 52) = v13 + 1; /*0x472877*/
            *(_DWORD *)(v14 + 4 * v13) = v5; /*0x47287a*/
          }
          v7 = a1; /*0x472881*/
          if ( ++v17 >= a1 ) /*0x47288c*/
            goto LABEL_19; /*0x47288c*/
          v5 = 0; /*0x4727c6*/
        }
      }
    }
  }
  return result; /*0x4728ca*/
}
}
} // namespace game
} // namespace ra2

// 0x4728E0
namespace ra2 {
namespace game {
int CaptureManagerClass::SaveToINI(TechnoTypeClass * aP0, int * a1, int aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall CaptureManagerClass::SaveToINI(TechnoTypeClass *aP0, int *a1, int aP2)
{
  int Prefix; // edi
  int v5; // edx
  int result; // eax
  int v7; // ebp
  int v8; // edi
  ObjectTypeClass *aP1; // [esp+30h] [ebp+8h]

  Prefix = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x4728f8*/
  aP1 = (ObjectTypeClass *)Prefix; /*0x4728fc*/
  if ( Prefix < 0 ) /*0x472900*/
    return Prefix; /*0x472900*/
  v5 = *a1; /*0x472905*/
  aP2 = *(_DWORD *)&aP0->BarrelVoxel[16]; /*0x472911*/
  result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v5 + 16))(a1, &aP2, 4, 0); /*0x472915*/
  if ( result < 0 ) /*0x47291a*/
    return result; /*0x47291a*/
  v7 = 0; /*0x472920*/
  if ( aP2 <= 0 ) /*0x472924*/
    return Prefix; /*0x472956*/
  while ( 1 ) /*0x47292f*/
  {
    v8 = *(_DWORD *)(*(_DWORD *)&aP0->BarrelVoxel[4] + 4 * v7); /*0x47292f*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*a1 + 16))(a1, v8 + 4, 4, 0); /*0x472937*/
    result = (*(int (__stdcall **)(int *, int, int, _DWORD))(*a1 + 16))(a1, v8, 4, 0); /*0x472942*/
    if ( result < 0 ) /*0x472947*/
      break; /*0x472947*/
    if ( ++v7 >= aP2 ) /*0x472950*/
      return (int)aP1->__pad_0; /*0x472952*/
  }
  return result; /*0x472958*/
}
}
} // namespace game
} // namespace ra2

// 0x472D70
namespace ra2 {
namespace game {
int CaptureManagerClass::Capture(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall CaptureManagerClass::_vt04(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = *(this + 4); /*0x472d70*/
  result = 0; /*0x472d73*/
  if ( v2 <= 0 ) /*0x472d78*/
    return -1; /*0x472d8f*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x472d7e*/
  {
    if ( ++result >= v2 ) /*0x472d8d*/
      return -1; /*0x472d8d*/
  }
  return result; /*0x472d92*/
}
}
} // namespace game
} // namespace ra2

// 0x4722F0
namespace ra2 {
namespace game {
int CaptureManagerClass::GetOriginalOwner(int a2)
{
{
    int v2;
    int v3;
    int **i;
    v2 = this->originalOwner - 1;
    if ( v2 < 0 )
    return 0;
    v3 = this->controlNodeCount;
    for ( i = (int **)(v3 + 4 * v2); **i != a2; --i )
  {
    if ( --v2 < 0 )
    return 0;
  }
    return *(int *)(*(int *)(v3 + 4 * v2) + 4);
}
}
} // namespace game
} // namespace ra2

// 0x4726F0
namespace ra2 {
namespace game {
int CaptureManagerClass::PowerDrainUpdate(int a2)
{
{
    int result;
    int v4;
    int v5;
    result = AbstractClass::ProcessPower((#378 *)this);
    v4 = this->overloadCount;
    if ( v4 )
  {
    v5 = (*(int (__stdcall **)(int))(*(int *)(v4 + 4) + 16))(v4 + 4);
    return Power::TimerProcess(v5);
  }
    return result;
}
}
} // namespace game
} // namespace ra2

// 0x472960
namespace ra2 {
namespace game {
int CaptureManagerClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 108652930;
  a2[1] = 299085213;
  a2[2] = 268441278;
  a2[3] = 1822515787;
  return 0;
}
} // namespace game
} // namespace ra2

// 0x4729A0
namespace ra2 {
namespace game {
int CaptureManagerClass::GetObjectSize()
{
return 80;
}
} // namespace game
} // namespace ra2

// 0x4729B0
namespace ra2 {
namespace game {
int CaptureManagerClass::GetTypeIdentifier()
{
return 66;
}
} // namespace game
} // namespace ra2

// 0x4729C0
namespace ra2 {
namespace game {
CaptureManagerClass * CaptureManagerClass::ddtor(char a2)
{
{
    int v3;
    void *v4;
    int *v6;
    *(void**)this = vt_CaptureManagerClass;
    *(this + 1) = (unsigned int)vt_CaptureManagerClass;
    *(this + 2) = (unsigned int)vt_CaptureManagerClass;
    *(this + 3) = &vt_CaptureManagerClass;
    v6 = this;
    v3 = (*(int (__thiscall **)(int *, int **))(DataGlobal_89E0F0 + 16))(&DataGlobal_89E0F0, &v6);
    if ( v3 != -1 && v3 < DataGlobal_89E100 && v3 < --DataGlobal_89E100 )
  {
    do
    {
    ++v3;
    *((int *)(DataGlobal_89E0F4) + v3 - 1) = *((int *)(DataGlobal_89E0F4) + v3);
    }
    while ( v3 < DataGlobal_89E100 );
  }
    v4 = (void *)*(this + 10);
    *(this + 9) = &vt_VectorClass_ControlNode;
    if ( v4 && *((char *)(this) + 49) )
  {
    __3_YAXPAX_Z(v4);
    *(this + 10) = 0;
  }
    *((char *)(this) + 49) = 0;
    *(this + 11) = 0;
    AbstractClass::DTOR(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (CaptureManagerClass *)this;
}
}
} // namespace game
} // namespace ra2

// 0x472AB0
namespace ra2 {
namespace game {
unsigned int CaptureManagerClass::LoadTypeData(int a2)
{
{
    if ( (unsigned char)this->vtable3 )
    return (unsigned int)(a2 - this->vtable1) >> 2;
    else
    return 0;
}
}
} // namespace game
} // namespace ra2

// 0x472B40
namespace ra2 {
namespace game {
char CaptureManagerClass::AddRef(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->vtable2;
    if ( v2 == *(int *)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int *)this->vtable1;
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
} // namespace game
} // namespace ra2

// 0x472B80
namespace ra2 {
namespace game {
char CaptureManagerClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->vtable3 = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->vtable3 = 1;
    if ( v4 )
    {
    if ( this->vtable1 )
      {
    v6 = this->vtable2;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int *)(this->vtable1 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->vtable1 = 0;
        }
      }
    this->vtable1 = v4;
    this->vtable2 = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->GetClassIdentifier();
    return 1;
  }
}
}
} // namespace game
} // namespace ra2

// 0x472C30
namespace ra2 {
namespace game {
void CaptureManagerClass::Destroy()
{
{
    if ( this->vtable1 && this->IsAllocated )
  {
    __3_YAXPAX_Z(*(void **)(this + 4));
    this->vtable1 = 0;
  }
    this->IsAllocated = 0;
    this->vtable2 = 0;
}
}
} // namespace game
} // namespace ra2

// 0x472C60
namespace ra2 {
namespace game {
int CaptureManagerClass::IndexOf(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !(unsigned char)this->vtable3 )
    return 0;
    v3 = this->vtable2;
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
} // namespace game
} // namespace ra2

// 0x472CA0
namespace ra2 {
namespace game {
unsigned int CaptureManagerClass::PointerToIndex(int a2)
{
{
    if ( (unsigned char)this->vtable3 )
    return (unsigned int)(a2 - this->vtable1) >> 2;
    else
    return 0;
}
}
} // namespace game
} // namespace ra2

// 0x472CC0
namespace ra2 {
namespace game {
char CaptureManagerClass::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->vtable3 = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->vtable3 = 1;
    if ( !v4 )
    return 0;
    if ( this->vtable1 )
    {
    v5 = this->vtable2;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->vtable1 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->vtable1 = 0;
      }
    }
    this->vtable1 = v4;
    this->vtable2 = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->GetClassIdentifier();
  }
    v7 = this->vtable2;
    if ( v7 < this->uniqueId )
    this->uniqueId = v7;
    return 1;
}
}
} // namespace game
} // namespace ra2

// 0x473000
namespace ra2 {
namespace game {
VectorClass * CaptureManagerClass::Constructor_VectorClass_ControlNode___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_ControlNode;
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
} // namespace game
} // namespace ra2

// 0x473050
namespace ra2 {
namespace game {
DynamicVector * CaptureManagerClass::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_ControlNode;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace game
} // namespace ra2

// 0x473140
namespace ra2 {
namespace game {
unsigned int * CaptureManagerClass::Constructor_473140(int a2, int a3)
{
{
    this->vtable1 = 0;
    this->vtable2 = a2;
    this->vtable3 = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_ControlNode;
    if ( a2 )
  {
    if ( a3 )
    {
    this->vtable1 = a3;
    return this;
    }
    this->vtable1 = __2_YAPAXI_Z(4 * a2);
    this->IsAllocated = 1;
  }
    return this;
}
}
} // namespace game
} // namespace ra2

// 0x6EA4F0
namespace ra2 {
namespace game {
char CaptureManagerClass::AddMember(TechnoClass * aP1)
{
{
    return TeamClass::AddMember((int)this, (IUnknown *)aP1, (IUnknown *)1);
}
}
} // namespace game
} // namespace ra2
