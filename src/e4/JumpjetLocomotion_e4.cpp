// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/JumpjetLocomotion_e4.hpp"

// 0x4B0AD0
namespace gamemd {
char JumpjetLocomotion::MoveTo(IUnknown * aP1, int aP3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall JumpjetLocomotion::MoveTo(int this, IUnknown *aP1, int aP3)
{
  IUnknown *v3; // edx
  int v5; // eax
  int v6; // ebp
  int v7; // eax
  int v8; // ecx
  _DWORD *v9; // ecx
  int v10; // eax
  int v11; // edi
  int v12; // ebx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  _DWORD v18[2]; // [esp+10h] [ebp-14h] BYREF
  int v19; // [esp+18h] [ebp-Ch] BYREF
  int v20; // [esp+1Ch] [ebp-8h]
  int v21; // [esp+20h] [ebp-4h]

  v3 = aP1; /*0x4b0ad0*/
  if ( aP1->field_0 != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[772] /*0x4b0afe*/
    || aP1->field_4 != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[776]
    || (v5 = aP1->field_8, v5 != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[780]) )
  {
    LOBYTE(v5) = *(_BYTE *)(this + 96); /*0x4b0b04*/
    v6 = aP3; /*0x4b0b07*/
    if ( !(_BYTE)v5 ) /*0x4b0b0d*/
    {
      v5 = *(_DWORD *)(this + 88); /*0x4b0b13*/
      if ( v5 != -1 ) /*0x4b0b19*/
      {
        v5 = byte_7E7B28[12 * v5]; /*0x4b0b22*/
        if ( v5 ) /*0x4b0b2c*/
        {
          v7 = 4 * v5; /*0x4b0b32*/
          v8 = dword_7E7A28[v7]; /*0x4b0b35*/
          v5 = dword_7E7A34[v7]; /*0x4b0b3b*/
          if ( v5 > -1 ) /*0x4b0b44*/
          {
            v9 = (_DWORD *)(v8 + 12 * v5); /*0x4b0b4d*/
            aP3 = v9[2]; /*0x4b0b53*/
            if ( *(_DWORD *)(this + 92) < v5 ) /*0x4b0b5c*/
            {
              v10 = v9[1]; /*0x4b0b64*/
              v18[0] = *v9; /*0x4b0b67*/
              v18[1] = v10; /*0x4b0b6f*/
              v5 = (int)JumpjetLocomotion::TransformCoords( /*0x4b0b80*/
                          (_DWORD *)this,
                          (IUnknown *)&v19,
                          (IUnknown *)v18,
                          (ObjectClass *)&aP3);
              v11 = *(_DWORD *)v5; /*0x4b0b85*/
              v12 = *(_DWORD *)(v5 + 4); /*0x4b0b89*/
              if ( !v6 ) /*0x4b0b8c*/
              {
                v13 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 464))(*(_DWORD *)(this + 12)); /*0x4b0b93*/
                v14 = *(_DWORD *)(this + 12); /*0x4b0b99*/
                v19 = v11; /*0x4b0b9c*/
                v20 = v12; /*0x4b0ba0*/
                v21 = v13; /*0x4b0ba4*/
                (*(void (__thiscall **)(int, int *))(*(_DWORD *)v14 + 244))(v14, &v19); /*0x4b0baf*/
                LOBYTE(v5) = (*(char (__thiscall **)(_DWORD, IUnknown *))(**(_DWORD **)(this + 12) + 244))( /*0x4b0bbf*/
                               *(_DWORD *)(this + 12),
                               aP1);
                return v5; /*0x4b0bcc*/
              }
              if ( v6 == 1 || v6 == 3 ) /*0x4b0bd7*/
              {
                v15 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 464))(*(_DWORD *)(this + 12)); /*0x4b0bde*/
                v16 = *(_DWORD *)(this + 12); /*0x4b0be4*/
                v21 = v15; /*0x4b0be7*/
                v19 = v11; /*0x4b0beb*/
                v20 = v12; /*0x4b0bef*/
                LOBYTE(v5) = (*(int (__thiscall **)(int, int *))(*(_DWORD *)v16 + 240))(v16, &v19); /*0x4b0bfa*/
              }
              v3 = aP1; /*0x4b0c00*/
            }
          }
        }
      }
    }
    if ( v6 ) /*0x4b0c06*/
    {
      if ( v6 == 1 || v6 == 3 ) /*0x4b0c26*/
        LOBYTE(v5) = (*(char (__thiscall **)(_DWORD, IUnknown *))(**(_DWORD **)(this + 12) + 240))( /*0x4b0c2e*/
                       *(_DWORD *)(this + 12),
                       v3);
    }
    else
    {
      LOBYTE(v5) = (*(char (__thiscall **)(_DWORD, IUnknown *))(**(_DWORD **)(this + 12) + 244))( /*0x4b0c0e*/
                     *(_DWORD *)(this + 12),
                     v3);
    }
  }
  return v5; /*0x4b0bc5*/
}
}
} // namespace gamemd

// 0x4B0F20
namespace gamemd {
char JumpjetLocomotion::ProcessCollision(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (v3 export truncated pseudocode — commented out; live version via get_context)
// char __thiscall JumpjetLocomotion::ProcessCollision(int this, char a2)
// {
//   int v3; // eax
//   int v4; // edx
//   bool v5; // al
//   int v6; // esi
//   int v7; // eax
//   _DWORD *v8; // esi
//   int v9; // edx
//   int v10; // esi
//   double v11; // st7
//   int v12; // eax
//   MouseClass *v13; // ecx
//   int v14; // edi
//   char v15; // bl
//   int v16; // edx
//   int v17; // eax
//   int v18; // esi
//   double v19; // st7
//   double v20; // st7
//   MouseClass *v21; // ecx
//   double v22; // st7
//   int v23; // eax
//   double v24; // st7
//   _DWORD *v25; // esi
//   int v26; // eax
//   MouseClass *v27; // ecx
//   int v28; // edx
//   int v29; // eax
//   int v30; // edx
//   _DWORD *v31; // esi
//   TechnoClass *v32; // eax
//   int v33; // edx
//   int v34; // ebx
//   int v35; // ecx
//   MouseClass *v36; // eax
//   int v37; // edx
//   _DWORD *v38; // eax
//   ObjectClass *Coords; // eax
//   _DWORD *v40; // ecx
//   int *v41; // ecx
//   int GroundHeight; // esi
//   int v43; // ebx
//   char *v45; // esi
//   char v46; // dl
//   int v47; // edx
//   int v48; // ebx
//   __int16 v49; // cx
//   i... [47012 chars total]
// end truncated pseudocode
}
} // namespace gamemd

// 0x4B2630
namespace gamemd {
char JumpjetLocomotion::Update(unsigned char * a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (v3 export truncated pseudocode — commented out; live version via get_context)
// char __thiscall JumpjetLocomotion_Update(int this, _BYTE *a2, int a3, int a4)
// {
//   int v5; // ecx
//   unsigned int v6; // ebx
//   int v7; // ecx
//   char v8; // al
//   char result; // al
//   int v10; // ecx
//   int v11; // ecx
//   _DWORD *v12; // eax
//   _DWORD *v13; // eax
//   int v14; // eax
//   int v15; // eax
//   wchar_t *v16; // edi
//   int v17; // edx
//   wchar_t **v18; // esi
//   int v19; // eax
//   wchar_t *v20; // eax
//   wchar_t *v21; // ecx
//   _DWORD *v22; // ebx
//   int v23; // ecx
//   char v24; // al
//   _DWORD *v25; // ecx
//   int v26; // ecx
//   _DWORD *v27; // eax
//   _DWORD *v28; // eax
//   _DWORD *v29; // ecx
//   _DWORD *Value; // edi
//   _DWORD *v31; // esi
//   int v32; // kr0C_4
//   unsigned int v33; // edx
//   _DWORD *v34; // eax
//   _BYTE *v35; // ecx
//   int v36; // edi
//   unsigned int v37; // esi
//   void *v38; // eax
//   int v39; // eax
//   int v40; // edx
//   _DWORD *v41; // edi
//   _DWORD *v42; // ecx
//   int v43; // esi
//   int GroundHeight; // eax
//   int ClosestObject; // eax
//   _DWORD *v46; // eax
//   _DWORD *v47; // eax
//   _DWORD *v48;... [58134 chars total]
// end truncated pseudocode
}
} // namespace gamemd

// 0x4B4780
namespace gamemd {
unsigned int * JumpjetLocomotion::TransformCoords(IUnknown * aP1, IUnknown * aP2, ObjectClass * aP3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall JumpjetLocomotion::TransformCoords(_DWORD *this, IUnknown *aP1, IUnknown *aP2, ObjectClass *aP3)
{
  int v4; // eax
  int v5; // ebx
  int v6; // edi
  int v7; // esi
  int v8; // edx
  int v9; // ecx

  v4 = *(_DWORD *)aP3->__pad_0; /*0x4b478d*/
  v5 = dword_7E7B30[3 * *(this + 22)]; /*0x4b4791*/
  v6 = aP2->field_0; /*0x4b479f*/
  v7 = aP2->field_4; /*0x4b47a1*/
  if ( (v5 & 1) != 0 ) /*0x4b47a4*/
  {
    v6 = aP2->field_4; /*0x4b47a8*/
    v7 = aP2->field_0; /*0x4b47aa*/
    v4 = (unsigned __int8)(-64 - v4); /*0x4b47b9*/
  }
  if ( (v5 & 2) != 0 ) /*0x4b47be*/
  {
    v6 = -v6; /*0x4b47c2*/
    v4 = (unsigned __int8)-(char)v4; /*0x4b47c4*/
  }
  if ( (v5 & 4) != 0 ) /*0x4b47cc*/
  {
    v7 = -v7; /*0x4b47d5*/
    v4 = (unsigned __int8)(0x80 - v4); /*0x4b47dd*/
  }
  *(_DWORD *)aP3->__pad_0 = v4; /*0x4b47df*/
  v8 = *(this + 16); /*0x4b47e2*/
  v9 = *(this + 17); /*0x4b47e5*/
  aP1->field_0 = v6 + v8; /*0x4b47f2*/
  aP1->field_4 = v7 + v9; /*0x4b47f5*/
  return &aP1->field_0; /*0x4b47f0*/
}
}
} // namespace gamemd

// 0x54CA90
namespace gamemd {
char JumpjetLocomotion::Land()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall JumpjetLocomotion_Land(int this)
{
  int v2; // ecx
  int v3; // ebp
  char v4; // al
  double v5; // st7
  double v6; // st7
  int v7; // eax
  double v8; // st7
  int v9; // esi
  _BYTE *v10; // ecx
  _DWORD *v11; // eax
  _DWORD *v12; // esi
  _DWORD *v13; // ebp
  int *v14; // eax
  int v15; // edx
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  int v21; // ecx
  int *v22; // ecx
  _DWORD *v23; // esi
  int v24; // eax
  bool v25; // bl
  int v26; // eax
  int v27; // ecx
  int v28; // ebp
  int v29; // eax
  _DWORD *v30; // ecx
  int v31; // ecx
  _DWORD *v32; // ecx
  int v33; // eax
  int v34; // esi
  _DWORD *v35; // eax
  int v36; // ecx
  int v37; // ecx
  int v38; // eax
  int v39; // eax
  int v40; // esi
  _DWORD *v41; // eax
  int v42; // ecx
  char v44; // [esp+32h] [ebp-24h]
  char v45; // [esp+33h] [ebp-23h]
  char v46; // [esp+34h] [ebp-22h]
  char v47; // [esp+35h] [ebp-21h]
  int v48; // [esp+36h] [ebp-20h] BYREF
  int v49; // [esp+3Ah] [ebp-1Ch] BYREF
  int v50; // [esp+3Eh] [ebp-18h] BYREF
  int v51; // [esp+42h] [ebp-14h]
  int v52; // [esp+46h] [ebp-10h]
  int v53; // [esp+4Ah] [ebp-Ch] BYREF
  int v54; // [esp+4Eh] [ebp-8h]
  int v55; // [esp+52h] [ebp-4h]

  v2 = *(_DWORD *)(this + 12); /*0x54ca99*/
  v50 = *(_DWORD *)(v2 + 156); /*0x54caa6*/
  v51 = *(_DWORD *)(v2 + 160); /*0x54caad*/
  v52 = *(_DWORD *)(v2 + 164); /*0x54cab4*/
  v3 = *(_DWORD *)(v2 + 164); /*0x54caba*/
  v53 = *(_DWORD *)(v2 + 156); /*0x54cabd*/
  v4 = *(_BYTE *)(v2 + 1709); /*0x54cac4*/
  v54 = *(_DWORD *)(v2 + 160); /*0x54cacc*/
  if ( v4 ) /*0x54cad0*/
  {
    v5 = (double)v52; /*0x54cad2*/
    *(_DWORD *)(this + 112) = 0; /*0x54cad8*/
    *(_DWORD *)(this + 120) = 0; /*0x54cadb*/
    v6 = v5 - *(float *)(this + 40); /*0x54cade*/
    *(_DWORD *)(this + 116) = 0; /*0x54cae1*/
    *(_DWORD *)(this + 124) = 0; /*0x54cae4*/
    v7 = Math::RoundToInt(v6); /*0x54cae7*/
    v8 = *(float *)(this + 40) + 1.0; /*0x54caef*/
    v52 = v7; /*0x54caf5*/
    *(float *)(this + 40) = v8; /*0x54caf9*/
  }
  else
  {
    v52 = Math::RoundToInt((double)v52 - *(float *)(this + 40)); /*0x54cb0a*/
    LOWORD(v48) = *(_WORD *)ProgressTimer::GetValue((_WORD *)(this + 84), &v49) + 11520; /*0x54cb2a*/
    FacingClass::Update((char *)(this + 84), &v48); /*0x54cb39*/
  }
  v9 = dword_ABC5DC + Cell::GetGroundHeight(&v50); /*0x54cb5e*/
  if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v50) + 80) & 0x100) == 0 || v3 < v9 || (v44 = 1, v52 >= v9) ) /*0x54cb7f*/
    v44 = 0; /*0x54cb81*/
  LOWORD(v48) = v50 / 256; /*0x54cba0*/
  HIWORD(v48) = v51 / 256; /*0x54cbb5*/
  if ( LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (__int16 *)&v48) ) /*0x54cbc2*/
  {
    RemoveTarget(*(_DWORD *)(this + 12)); /*0x54cbd4*/
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 12) + 292))(*(_DWORD *)(this + 12), 0); /*0x54cbe1*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 12) + 436))(*(_DWORD *)(this + 12), &v50); /*0x54cbf1*/
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 292))(*(_DWORD *)(this + 12), 1); /*0x54cbfe*/
    Targeting::Readd(*(_DWORD **)(this + 12)); /*0x54cc0d*/
  }
  v45 = 0; /*0x54cc19*/
  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 456))(*(_DWORD *)(this + 12)) > 0 && !v44 ) /*0x54cc30*/
    goto LABEL_74; /*0x54cc30*/
  v10 = *(_BYTE **)(this + 12); /*0x54cc36*/
  if ( !v10[1063] ) /*0x54cc39*/
    goto LABEL_74; /*0x54cc41*/
  v46 = 0; /*0x54cc4e*/
  v11 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, int *))(*(_DWORD *)v10 + 72))(v10, &v53); /*0x54cc53*/
  LOWORD(v48) = *v11 / 256; /*0x54cc66*/
  HIWORD(v48) = v11[1] / 256; /*0x54cc7f*/
  v49 = v48; /*0x54cc8d*/
  v12 = (_DWORD *)*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v49) + 57); /*0x54cc96*/
  if ( v12 == *(_DWORD **)(this + 12) ) /*0x54cca1*/
    v12 = (_DWORD *)v12[12]; /*0x54cca3*/
  if ( v12 ) /*0x54cca8*/
  {
    if ( (*(int (__thiscall **)(_DWORD *))(*v12 + 44))(v12) == 1 /*0x54ccc8*/
      || (*(int (__thiscall **)(_DWORD *))(*v12 + 44))(v12) == 6 )
    {
      goto LABEL_64; /*0x54ccc8*/
    }
    if ( (*(int (__thiscall **)(_DWORD *))(*v12 + 44))(v12) == 15 ) /*0x54ccd8*/
    {
      do /*0x54cd78*/
      {
        v13 = (_DWORD *)v12[12]; /*0x54cce1*/
        v14 = (int *)(*(_DWORD *)(this + 12) + 156); /*0x54cce4*/
        v53 = *v14; /*0x54ccf0*/
        v54 = v14[1]; /*0x54ccf9*/
        v15 = *v12; /*0x54ccfd*/
        v55 = v14[2]; /*0x54cd02*/
        v16 = (*(int (__thiscall **)(_DWORD *))(v15 + 136))(v12); /*0x54cd06*/
        StartAudioControllerAt(*(_DWORD *)(v16 + 496), (int)&v53, 0); /*0x54cd14*/
        v17 = *(_DWORD *)(this + 12); /*0x54cd19*/
        v18 = *(_DWORD *)(v17 + 1064); /*0x54cd1e*/
        if ( v18 ) /*0x54cd26*/
        {
          (*(void (__thiscall **)(_DWORD *, int))(*v12 + 224))(v12, v18); /*0x54cd2d*/
        }
        else
        {
          v19 = *v12; /*0x54cd3b*/
          if ( *(_DWORD *)(v17 + 1068) ) /*0x54cd35*/
            (*(void (__thiscall **)(_DWORD *, _DWORD))(v19 + 228))(v12, *(_DWORD *)(v17 + 1068)); /*0x54cd44*/
          else
            (*(void (__thiscall **)(_DWORD *, _DWORD))(v19 + 224))(v12, *(_DWORD *)(this + 12)); /*0x54cd4f*/
        }
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*v12 + 292))(v12, 0); /*0x54cd5a*/
        (*(void (__thiscall **)(_DWORD *))(*v12 + 212))(v12); /*0x54cd64*/
        (*(void (__thiscall **)(_DWORD *))(*v12 + 248))(v12); /*0x54cd6e*/
        v12 = v13; /*0x54cd76*/
      }
      while ( v13 ); /*0x54cd78*/
    }
    else
    {
      v20 = *(_DWORD *)(this + 12); /*0x54cd80*/
      v21 = *(_DWORD *)(v20 + 1064); /*0x54cd83*/
      if ( v21 ) /*0x54cd8b*/
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD, int, int, int, _DWORD, _DWORD))(*v12 + 364))( /*0x54cd94*/
          v12,
          v12 + 27,
          0,
          MEMORY[0x8871E0]->?[6],
          v21,
          1,
          0,
          0);
      }
      else if ( *(_DWORD *)(v20 + 1068) ) /*0x54cd96*/
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD, int, int, int, _DWORD, _DWORD))(*v12 + 364))( /*0x54cda3*/
          v12,
          v12 + 27,
          0,
          MEMORY[0x8871E0]->?[6],
          v20,
          1,
          0,
          *(_DWORD *)(v20 + 1068));
      }
      else
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD, int, int, int, _DWORD, _DWORD))(*v12 + 364))( /*0x54cdbd*/
          v12,
          v12 + 27,
          0,
          MEMORY[0x8871E0]->?[6],
          v20,
          1,
          0,
          0);
      }
    }
  }
  v46 = 1; /*0x54cdc6*/
  v22 = (int *)(*(_DWORD *)(this + 12) + 156); /*0x54cdcb*/
  v53 = *v22; /*0x54cdd3*/
  v54 = v22[1]; /*0x54cddf*/
  v55 = v22[2]; /*0x54cde6*/
  v23 = Coord::To_Cell(&MEMORY[0x87F7E8], &v53); /*0x54cdf4*/
  v24 = v23[59]; /*0x54cdf6*/
  if ( v24 != 2 || (v47 = 1, v44) ) /*0x54ce0c*/
    v47 = 0; /*0x54ce0e*/
  v25 = v24 == 6 && !v44; /*0x54ce24*/
  v26 = (*(int (__thiscall **)(_DWORD, _DWORD *, int, int, _DWORD, int))(**(_DWORD **)(this + 12) + 428))( /*0x54ce34*/
          *(_DWORD *)(this + 12),
          v23,
          -1,
          -1,
          0,
          1);
  v27 = *(_DWORD *)(this + 12); /*0x54ce3a*/
  v28 = v26; /*0x54ce3d*/
  if ( v27 /*0x54ce5c*/
    && (*(int (__thiscall **)(int))(*(_DWORD *)v27 + 44))(v27) == 2
    && !Cell::IsBuildable((int)v23, 2, 1, 1, -1, 0, -1, 1) )
  {
    v28 = 7; /*0x54ce65*/
  }
  if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 3476) /*0x54ce9a*/
    && !Cell::IsBuildable((int)v23, 2, 1, 1, -1, 0, -1, 1)
    || v28 )
  {
    if ( v47 && !v25 ) /*0x54ceae*/
    {
      *(_BYTE *)(*(_DWORD *)(this + 12) + 973) = 1; /*0x54ceb7*/
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 928))(*(_DWORD *)(this + 12)); /*0x54cec3*/
      v29 = *(_DWORD *)(this + 12); /*0x54cec9*/
      v30 = *(_DWORD **)(v29 + 728); /*0x54cecc*/
      if ( v30 ) /*0x54ced4*/
      {
        TechnoClass::MutateAll(v30, *(_DWORD *)(v29 + 1064), 0); /*0x54cedf*/
        v31 = *(_DWORD *)(*(_DWORD *)(this + 12) + 728); /*0x54cee7*/
        if ( v31 ) /*0x54ceef*/
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v31 + 32))(v31, 1); /*0x54cef5*/
        *(_DWORD *)(*(_DWORD *)(this + 12) + 728) = 0; /*0x54cefb*/
      }
      v32 = *(_DWORD **)(this + 12); /*0x54cf05*/
      if ( v32[266] ) /*0x54cf08*/
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*v32 + 224))(v32, v32[266]); /*0x54cf15*/
      }
      else if ( v32[267] ) /*0x54cf20*/
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*v32 + 228))(v32, v32[267]); /*0x54cf31*/
      }
      goto LABEL_65; /*0x54cf1b*/
    }
  }
  else
  {
    v33 = *(_DWORD *)(this + 12); /*0x54cf3c*/
    if ( *(_DWORD *)(v33 + 1400) /*0x54cf75*/
      || *(_DWORD *)(v33 + 1404) != 1075052544 && (*(_DWORD *)(v33 + 1400) || *(_DWORD *)(v33 + 1404) != 1075576832)
      || v47 && !v25 )
    {
      v34 = *(_DWORD *)(this + 12); /*0x54cf77*/
      if ( *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v34 + 444))(v34) + 224) == v34 ) /*0x54cf8a*/
      {
        v35 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v34 + 444))(v34); /*0x54cf92*/
        CellClass::AttachObject(v35, 0); /*0x54cf9a*/
      }
      v36 = *(_DWORD *)(this + 12); /*0x54cf9f*/
      *(_DWORD *)(this + 80) = 4; /*0x54cfa2*/
      (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v36 + 1152))(v36, 0, 1); /*0x54cfaf*/
      goto LABEL_65; /*0x54cfb5*/
    }
  }
LABEL_64:
  v45 = 1; /*0x54cfb7*/
LABEL_65:
  v37 = *(_DWORD *)(this + 12); /*0x54cfbc*/
  if ( v37 && (*(int (__thiscall **)(int))(*(_DWORD *)v37 + 456))(v37) > 0 ) /*0x54cfcf*/
  {
    if ( !v44 ) /*0x54cfd7*/
    {
      v38 = *(_DWORD *)(this + 12); /*0x54cfd9*/
      if ( !*(_BYTE *)(v38 + 1709) || v45 ) /*0x54cfec*/
      {
        *(_DWORD *)(v38 + 1064) = 0; /*0x54cfee*/
        *(_DWORD *)(*(_DWORD *)(this + 12) + 1068) = 0; /*0x54cff7*/
      }
      goto LABEL_74; /*0x54cffd*/
    }
  }
  else if ( !v44 ) /*0x54d005*/
  {
    goto LABEL_74; /*0x54d005*/
  }
  if ( v46 ) /*0x54d00d*/
    *(_BYTE *)(*(_DWORD *)(this + 12) + 140) = 1; /*0x54d012*/
LABEL_74:
  if ( ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 456))(*(_DWORD *)(this + 12)) <= 0 /*0x54d043*/
     || (LOBYTE(v39) = v44) != 0)
    && (!*(_BYTE *)(*(_DWORD *)(this + 12) + 1709) || (LOBYTE(v39) = v45) != 0) )
  {
    v40 = *(_DWORD *)(this + 12); /*0x54d045*/
    if ( *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v40 + 444))(v40) + 224) == v40 ) /*0x54d058*/
    {
      v41 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v40 + 444))(v40); /*0x54d05f*/
      CellClass::AttachObject(v41, 0); /*0x54d067*/
    }
    GadgetGrid::RemoveItem(MEMORY[0x887888], *(_DWORD *)(this + 12)); /*0x54d075*/
    v42 = *(_DWORD *)(this + 12); /*0x54d07a*/
    *(_DWORD *)(this + 120) = 0; /*0x54d07d*/
    *(_DWORD *)(this + 80) = 6; /*0x54d083*/
    *(_DWORD *)(this + 124) = 0; /*0x54d08a*/
    (**(void (__thiscall ***)(int, int, _DWORD))(v42 + 8))(v42 + 8, 4476, 0); /*0x54d095*/
    v39 = *(_DWORD *)(this + 12); /*0x54d097*/
    if ( v39 ) /*0x54d09c*/
    {
      *(_DWORD *)(v39 + 1064) = 0; /*0x54d09e*/
      v39 = *(_DWORD *)(this + 12); /*0x54d0a4*/
      *(_DWORD *)(v39 + 1068) = 0; /*0x54d0a7*/
    }
  }
  return v39; /*0x54d0ad*/
}
}
} // namespace gamemd

// 0x54D0F0
namespace gamemd {
int JumpjetLocomotion::UpdateFacing()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall JumpjetLocomotion_UpdateFacing(int this)
{
  int v2; // eax
  _BYTE *v3; // ecx
  double v4; // st7
  double v5; // st7
  unsigned __int8 v7; // c0
  unsigned __int8 v8; // c3
  int v9; // edi
  int v10; // ebp
  _WORD *v11; // eax
  int v12; // eax
  double v13; // st7
  __int64 v14; // rax
  int v15; // ecx
  int v16; // ebp
  int v17; // ecx
  int GroundHeight; // ebx
  int v19; // eax
  int v20; // edx
  int v21; // edx
  int v22; // eax
  int v23; // edi
  int v24; // ebp
  int v25; // ecx
  int v26; // eax
  int *v27; // eax
  int v28; // ebx
  int v29; // ecx
  int v30; // ebp
  int v31; // ebp
  int v32; // ebx
  _WORD *v33; // eax
  int v34; // ecx
  int *v35; // eax
  double v36; // st7
  int v37; // edi
  unsigned int v38; // ebp
  unsigned int v39; // ebx
  double v40; // st7
  double v41; // st7
  int v42; // eax
  int v43; // ecx
  _BYTE *v44; // ecx
  int v45; // edi
  int v46; // eax
  int *v47; // ecx
  int result; // eax
  double v49; // [esp+0h] [ebp-58h]
  int *v50; // [esp+4h] [ebp-54h]
  _DWORD *Value; // [esp+4h] [ebp-54h]
  char v52; // [esp+19h] [ebp-3Fh]
  char v53; // [esp+1Ah] [ebp-3Eh]
  char v54; // [esp+1Ah] [ebp-3Eh]
  char v55; // [esp+1Bh] [ebp-3Dh]
  int v56; // [esp+1Ch] [ebp-3Ch] BYREF
  double v57; // [esp+20h] [ebp-38h]
  double v58; // [esp+28h] [ebp-30h] BYREF
  double v59; // [esp+30h] [ebp-28h] BYREF
  int v60; // [esp+38h] [ebp-20h]
  int v61; // [esp+40h] [ebp-18h]
  int v62; // [esp+44h] [ebp-14h]
  _DWORD v63[3]; // [esp+4Ch] [ebp-Ch] BYREF

  v2 = *(_DWORD *)(this + 80); /*0x54d0ff*/
  if ( v2 == 2 || (v52 = 1, v2 == 3) ) /*0x54d10f*/
    v52 = 0; /*0x54d111*/
  v3 = *(_BYTE **)(this + 12); /*0x54d116*/
  v55 = v3[116]; /*0x54d11c*/
  if ( v52 ) /*0x54d126*/
    (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v3 + 292))(v3, 0); /*0x54d12c*/
  else
    v3[116] = 0; /*0x54d134*/
  if ( *(double *)(this + 120) > *(double *)(this + 112) ) /*0x54d143*/
  {
    v4 = *(float *)(this + 48) + *(double *)(this + 112); /*0x54d148*/
    *(double *)(this + 112) = v4; /*0x54d14b*/
    v58 = (double)*(int *)(this + 32); /*0x54d151*/
    if ( v4 >= v58 ) /*0x54d15e*/
      v4 = v58; /*0x54d162*/
    *(double *)(this + 112) = v4; /*0x54d166*/
  }
  if ( *(double *)(this + 120) < *(double *)(this + 112) ) /*0x54d174*/
  {
    v5 = *(double *)(this + 112) - *(float *)(this + 48) * 1.5; /*0x54d17f*/
    *(double *)(this + 112) = v5; /*0x54d188*/
    if ( v7 | v8 ) /*0x54d18d*/
      v5 = 0.0; /*0x54d194*/
    *(double *)(this + 112) = v5; /*0x54d19a*/
  }
  v49 = *(double *)(this + 112) / (double)*(int *)(this + 32); /*0x54d1ab*/
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 12) + 1348))( /*0x54d1ae*/
    *(_DWORD *)(this + 12),
    LODWORD(v49),
    HIDWORD(v49));
  v9 = *(_DWORD *)(this + 64) / 256; /*0x54d1da*/
  v10 = *(_DWORD *)(this + 68) / 256; /*0x54d1dd*/
  v11 = (_WORD *)(*(int (__thiscall **)(_DWORD, double *))(**(_DWORD **)(this + 12) + 440))( /*0x54d1e0*/
                   *(_DWORD *)(this + 12),
                   &v58);
  if ( *v11 != (_WORD)v9 || (v53 = 1, v11[1] != (_WORD)v10) ) /*0x54d1f4*/
    v53 = 0; /*0x54d1f6*/
  v12 = *(_DWORD *)(this + 80); /*0x54d1fb*/
  if ( (v12 == 2 || v12 == 3) && !*(_BYTE *)(this + 60) ) /*0x54d208*/
  {
    *(double *)(this + 136) = 6.283185307179586 / (15.0 / *(float *)(this + 52)) + *(double *)(this + 136); /*0x54d224*/
  }
  else
  {
    *(_DWORD *)(this + 136) = 0; /*0x54d22e*/
    *(_DWORD *)(this + 140) = 0; /*0x54d234*/
  }
  v13 = Math::SinCos(*(double *)(this + 136)); /*0x54d248*/
  v14 = Math::RoundToInt(v13 * (double)*(int *)(this + 56) + (double)*(int *)(this + 128)); /*0x54d259*/
  v15 = *(_DWORD *)(this + 12); /*0x54d25e*/
  LODWORD(v57) = v14; /*0x54d261*/
  v16 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)v15 + 464))(v15, HIDWORD(v14)); /*0x54d270*/
  v17 = *(_DWORD *)(this + 12) + 156; /*0x54d272*/
  v56 = v16; /*0x54d278*/
  v59 = *(double *)v17; /*0x54d27e*/
  v60 = *(_DWORD *)(v17 + 8); /*0x54d291*/
  GroundHeight = Cell::GetGroundHeight(&v59); /*0x54d29f*/
  v19 = *(_DWORD *)(this + 12) + 156; /*0x54d2a4*/
  v59 = *(double *)v19; /*0x54d2ab*/
  v60 = *(_DWORD *)(v19 + 8); /*0x54d2c3*/
  if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v59) + 80) & 0x100) != 0 ) /*0x54d2d5*/
  {
    v20 = *(_DWORD *)(this + 12) + 156; /*0x54d2da*/
    v59 = *(double *)v20; /*0x54d2e2*/
    v21 = *(_DWORD *)(v20 + 8); /*0x54d2f5*/
    LODWORD(v58) = GroundHeight + 4 * dword_ABC5E8; /*0x54d2f8*/
    v60 = v21; /*0x54d2fc*/
    if ( (double)SLODWORD(v58) - *(float *)(this + 40) <= (double)v21 ) /*0x54d312*/
      GroundHeight += dword_ABC5DC; /*0x54d314*/
  }
  v22 = *(_DWORD *)(this + 80); /*0x54d31a*/
  if ( v22 == 4 /*0x54d339*/
    || !v22
    || v53
    && !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 3434) )
  {
    v23 = v16 - GroundHeight; /*0x54d352*/
  }
  else
  {
    v23 = v16 - JumpjetLocomotionClass::GetFloorZSetContext(this); /*0x54d34c*/
  }
  LODWORD(v58) = v23; /*0x54d358*/
  v54 = 0; /*0x54d35e*/
  if ( v23 < SLODWORD(v57) ) /*0x54d363*/
  {
    v24 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 456))(*(_DWORD *)(this + 12)); /*0x54d377*/
    v25 = *(_DWORD *)(this + 12) + 156; /*0x54d379*/
    v59 = *(double *)v25; /*0x54d381*/
    v60 = *(_DWORD *)(v25 + 8); /*0x54d394*/
    if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v59) + 80) & 0x100) != 0 ) /*0x54d3ab*/
    {
      v26 = *(_DWORD *)(this + 12); /*0x54d3ad*/
      if ( !*(_BYTE *)(v26 + 140) ) /*0x54d3b0*/
      {
        v27 = (int *)(v26 + 156); /*0x54d3ba*/
        v61 = *v27; /*0x54d3c3*/
        v62 = v27[1]; /*0x54d3ca*/
        v28 = v27[2]; /*0x54d3ce*/
        v59 = *(double *)v27; /*0x54d3d3*/
        v60 = v27[2]; /*0x54d3eb*/
        if ( v28 >= dword_ABC5DC + Cell::GetGroundHeight(&v59) ) /*0x54d3ff*/
          v24 -= dword_ABC5DC; /*0x54d401*/
      }
    }
    if ( !v24 ) /*0x54d405*/
    {
      v29 = *(_DWORD *)(this + 12); /*0x54d407*/
      v59 = *(double *)(v29 + 156); /*0x54d416*/
      v60 = *(_DWORD *)(v29 + 164); /*0x54d424*/
      (*(void (__thiscall **)(int, double *))(*(_DWORD *)v29 + 244))(v29, &v59); /*0x54d42f*/
      *(_BYTE *)(*(_DWORD *)(this + 12) + 140) = 0; /*0x54d438*/
    }
    if ( (double)SLODWORD(v57) >= (double)SLODWORD(v58) + *(float *)(this + 36) ) /*0x54d451*/
      v56 = Math::RoundToInt((double)v56 + *(float *)(this + 36)); /*0x54d471*/
    else
      v56 += LODWORD(v57) - v23; /*0x54d45f*/
LABEL_49:
    v54 = 1; /*0x54d4bb*/
    goto LABEL_50; /*0x54d4bb*/
  }
  if ( v23 > SLODWORD(v57) )
  {
    if ( (double)SLODWORD(v57) <= (double)SLODWORD(v58) - *(float *)(this + 36) ) /*0x54d48b*/
    {
      v56 = Math::RoundToInt((double)v56 - *(float *)(this + 36)); /*0x54d4a3*/
      v30 = v56; /*0x54d4a7*/
    }
    else
    {
      v30 = LODWORD(v57) - v23 + v16; /*0x54d48f*/
      v56 = v30; /*0x54d491*/
    }
    if ( v30 <= GroundHeight ) /*0x54d4ab*/
      v56 = GroundHeight; /*0x54d4ad*/
    v23 = v23 <= 0 ? 0 : v23;
    goto LABEL_49; /*0x54d4b9*/
  }
LABEL_50:
  v31 = *(_DWORD *)(this + 64) / 256; /*0x54d4c0*/
  v32 = *(_DWORD *)(this + 68) / 256; /*0x54d4e9*/
  v33 = (_WORD *)(*(int (__thiscall **)(_DWORD, double *))(**(_DWORD **)(this + 12) + 440))( /*0x54d4ec*/
                   *(_DWORD *)(this + 12),
                   &v58);
  if ( *v33 != (_WORD)v31 || v33[1] != (_WORD)v32 ) /*0x54d4fb*/
  {
    v34 = LODWORD(v57); /*0x54d4fd*/
    if ( v23 < SLODWORD(v57) / 2 ) /*0x54d50a*/
    {
      *(_DWORD *)(this + 112) = 0; /*0x54d50e*/
      *(_DWORD *)(this + 116) = 0; /*0x54d511*/
    }
    if ( v23 < v34 / 4 ) /*0x54d525*/
    {
      *(_DWORD *)(this + 112) = 0; /*0x54d527*/
      *(_DWORD *)(this + 116) = 0; /*0x54d52a*/
    }
  }
  if ( v54 ) /*0x54d537*/
  {
    ObjectClass::SetAnim(*(_DWORD **)(this + 12), v56); /*0x54d541*/
    if ( v52 ) /*0x54d54c*/
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 12) + 292))(*(_DWORD *)(this + 12), 0); /*0x54d554*/
  }
  v35 = (int *)(*(_DWORD *)(this + 12) + 156); /*0x54d55d*/
  v36 = *(double *)(this + 112); /*0x54d562*/
  v61 = *v35; /*0x54d567*/
  v62 = v35[1]; /*0x54d56e*/
  v37 = v35[2]; /*0x54d572*/
  LODWORD(v57) = Math::RoundToInt(v36); /*0x54d57a*/
  v58 = (double)(*(__int16 *)ProgressTimer::GetValue((_WORD *)(this + 84), &v56) - 0x3FFF) * -0.00009587672516830327; /*0x54d5a2*/
  v38 = HIDWORD(v58); /*0x54d5aa*/
  v39 = LODWORD(v58); /*0x54d5ae*/
  v57 = (double)SLODWORD(v57); /*0x54d5b4*/
  v59 = (double)v62; /*0x54d5bc*/
  v40 = Math::SinCos(v58); /*0x54d5c0*/
  LODWORD(v58) = Math::RoundToInt(v59 - v40 * v57); /*0x54d5d4*/
  v41 = Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v38, v39))); /*0x54d5d8*/
  v42 = Math::RoundToInt(v41 * v57 + (double)v61); /*0x54d5e8*/
  v43 = *(_DWORD *)(this + 12); /*0x54d5f1*/
  v63[1] = LODWORD(v58); /*0x54d5f4*/
  v63[0] = v42; /*0x54d5f8*/
  v63[2] = v37; /*0x54d5fc*/
  (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v43 + 436))(v43, v63); /*0x54d607*/
  v44 = *(_BYTE **)(this + 12); /*0x54d60d*/
  if ( !v44[1709] )
  {
    if ( v44
      && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v44 + 44))(v44) == 15
      && ((v45 = *(_DWORD *)(this + 12)) != 0
        ? (v46 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v45 + 44))(*(_DWORD *)(this + 12)) == 15 ? v45 : 0)
        : (v46 = 0),
          *(_BYTE *)(*(_DWORD *)(v46 + 1728) + 3787)
       && *(_DWORD *)(this + 80) == 2
       && (v47 = *(int **)(this + 12), v47[173])) )
    {
      v50 = ObjectClass::CalcTargetFacing(v47, (int *)&v58, v47[173]); /*0x54d675*/
      FacingClass::Set_SyncLog(v50); /*0x54d679*/
    }
    else
    {
      Value = ProgressTimer::GetValue((_WORD *)(this + 84), &v58); /*0x54d68b*/
      FacingClass::Set_SyncLog(Value); /*0x54d692*/
    }
  }
  if ( v52 ) /*0x54d69d*/
    return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 292))(*(_DWORD *)(this + 12), 1); /*0x54d6a6*/
  result = *(_DWORD *)(this + 12); /*0x54d6b4*/
  *(_BYTE *)(result + 116) = v55; /*0x54d6bd*/
  return result; /*0x54d6ac*/
}
}
} // namespace gamemd
