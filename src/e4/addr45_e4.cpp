// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_4517D0_e4.hpp"
#include "e4/classes/E4Recv_4528A0_e4.hpp"
#include "e4/classes/E4Recv_457A10_e4.hpp"
#include "e4/classes/E4Recv_45DD20_e4.hpp"
#include "e4/classes/E4Recv_45DD50_e4.hpp"
#include "e4/classes/E4Recv_45E8B0_e4.hpp"

// 0x451400
namespace gamemd {
char UpdateBuildingActiveAnim(int a1, int edx0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall UpdateBuildingActiveAnim(int a1, int edx0)
{
  int v3; // eax
  IUnknown *v4; // edi
  int v5; // esi
  _DWORD *v6; // ebx
  int v7; // ecx
  double HealthRatio; // st7
  int v9; // edx
  int v10; // ecx
  int v11; // edi
  int v12; // esi
  _DWORD *v13; // ebx
  int v14; // ecx
  int v15; // ecx
  int v16; // eax
  int v17; // ebx
  unsigned int v18; // edx
  unsigned int v19; // ecx
  char v21; // al
  BOOL v22; // edx
  IUnknown *v23; // eax
  _BYTE *v24; // ecx
  char a2[64]; // [esp+10h] [ebp-40h] BYREF

  v3 = *(_DWORD *)(*(_DWORD *)(a1 + 1312) + 160); /*0x451412*/
  if ( *(_DWORD *)(a1 + 108) != v3 ) /*0x45141a*/
  {
    *(_DWORD *)(a1 + 108) = v3; /*0x451420*/
    if ( *(_BYTE *)(a1 + 1766) ) /*0x451423*/
    {
      v4 = 0; /*0x45142d*/
      *(_BYTE *)(a1 + 1766) = 0; /*0x45142f*/
      v5 = 0; /*0x451436*/
      v6 = (_DWORD *)(a1 + 1372); /*0x451438*/
      do /*0x451475*/
      {
        if ( *v6 ) /*0x45143e*/
        {
          v7 = *(_DWORD *)(a1 + 1312); /*0x451443*/
          if ( v5 + v7 != -3916 ) /*0x451452*/
          {
            if ( *(_BYTE *)(v5 + v7 + 3916) ) /*0x451454*/
              BuildingClass::PlayAnim((ObjectClass *)a1, edx0, (void *)(v5 + v7 + 3916), v4, 0, 0, 0); /*0x451463*/
          }
        }
        v5 += 68; /*0x451468*/
        v4 = (IUnknown *)((char *)v4 + 1); /*0x45146b*/
        ++v6; /*0x45146c*/
      }
      while ( v5 < 1428 ); /*0x451475*/
    }
    HealthRatio = BuildingClass::GetHealthRatio((int *)a1); /*0x451479*/
    v9 = *(_DWORD *)&stru_87C374.__pad_579C[22224]; /*0x45147e*/
    if ( HealthRatio > *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5888) ) /*0x45148f*/
    {
      v10 = *(_DWORD *)(a1 + 784); /*0x451491*/
      if ( v10 ) /*0x451499*/
        (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 248))(v10); /*0x45149d*/
    }
    v11 = 3; /*0x4514a3*/
    v12 = 204; /*0x4514a8*/
    v13 = (_DWORD *)(a1 + 1384); /*0x4514ad*/
    do /*0x4514ea*/
    {
      if ( !*v13 ) /*0x4514b3*/
      {
        v14 = *(_DWORD *)(a1 + 1312); /*0x4514b8*/
        if ( v12 + v14 != -3916 ) /*0x4514c7*/
        {
          if ( *(_BYTE *)(v12 + v14 + 3916) ) /*0x4514c9*/
            BuildingClass::PlayAnim((ObjectClass *)a1, v9, (void *)(v12 + v14 + 3916), (IUnknown *)v11, 0, 0, 0); /*0x4514d8*/
        }
      }
      v12 += 68; /*0x4514dd*/
      ++v11; /*0x4514e0*/
      ++v13; /*0x4514e1*/
    }
    while ( v12 <= 408 ); /*0x4514ea*/
    *(_BYTE *)(a1 + 128) = 1; /*0x4514ec*/
  }
  v15 = *(_DWORD *)(a1 + 1312); /*0x4514f9*/
  if ( v15 == *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 2172) ) /*0x451505*/
  {
    v16 = *(_DWORD *)(a1 + 1532); /*0x45150b*/
    v17 = v16 + 1; /*0x451511*/
    if ( v16 + 1 > 2 ) /*0x451517*/
      v17 = 0; /*0x451519*/
    if ( v17 != v16 && !*(_BYTE *)(v15 + 5829) ) /*0x451523*/
    {
      BuildingClass::ClearAnims((int *)a1, (TechnoClass *)9); /*0x451535*/
      if ( v17 != -1 ) /*0x45153d*/
      {
        strcpy(a2, (const char *)(*(_DWORD *)(a1 + 1312) + 504)); /*0x45156b*/
        v18 = strlen(asc_818D7C) + 1; /*0x45158c*/
        qmemcpy(&a2[strlen(a2)], asc_818D7C, v18); /*0x451599*/
        v19 = strlen(a2); /*0x4515b3*/
        a2[v19] = v17 + 66; /*0x4515b6*/
        a2[v19 + 1] = 0; /*0x4515ba*/
        BuildingClass::PlayAnim((ObjectClass *)a1, v18, a2, (IUnknown *)9, 0, 0, 0); /*0x4515c6*/
        *(_DWORD *)(a1 + 1532) = v17; /*0x4515cb*/
      }
    }
    ++*(_BYTE *)(a1 + 1794); /*0x4515db*/
    return 1; /*0x4515e2*/
  }
  else
  {
    v21 = *(_BYTE *)(a1 + 1794); /*0x4515e9*/
    if ( v21 == *(_DWORD *)(v15 + 5344) ) /*0x4515fa*/
    {
      return 0; /*0x4515ff*/
    }
    else
    {
      *(_BYTE *)(a1 + 1794) = v21 + 1; /*0x45160a*/
      v22 = BuildingClass::GetHealthRatio((int *)a1) <= *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5888); /*0x451625*/
      v23 = (IUnknown *)(*(char *)(a1 + 1794) - 1); /*0x451637*/
      if ( v22 ) /*0x45163c*/
        v24 = (_BYTE *)(*(_DWORD *)(a1 + 1312) + 68 * (_DWORD)v23 + 3932); /*0x451649*/
      else
        v24 = (_BYTE *)(*(_DWORD *)(a1 + 1312) + 68 * (_DWORD)v23 + 3916); /*0x45165d*/
      if ( v24 && *v24 ) /*0x451668*/
        BuildingClass::PlayAnim((ObjectClass *)a1, v22, v24, v23, (IUnknown *)v22, 0, 0); /*0x451676*/
      return 1; /*0x45167e*/
    }
  }
}
}
} // namespace gamemd

// 0x4517D0
namespace gamemd {
int E4Recv_4517D0::sub_4517D0()
{
{
    int *v2;
    int v3;
    int v4;
    int result;
    int *v6;
    int *v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int **v12;
    int v13;
    int v14;
    int v15;
    int v16[3];
    int v17[3];
    v2 = (int *)((int (__thiscall *)(int **, int *))(*(void**)this)[43])(this, v16);
    v3 = 0;
    v13 = *v2;
    v14 = v2[1];
    v4 = v2[2];
    result = (int)(this + 343);
    v15 = v4;
    v12 = this + 343;
    do
  {
    v6 = *v12;
    if ( *v12 )
    {
    v7 = Matrix3x4::TransformCell((float *)g_TacticalClass_Instance, v17, &(this->M1312)[v3 + 991]);
    v8 = v13 + *v7;
    v9 = v7[1];
    v10 = v7[2];
    v16[1] = v14 + v9;
    v11 = *v6;
    v16[2] = v15 + v10;
    v16[0] = v8;
    result = (*(int (__thiscall **)(int *, int *))(v11 + 436))(v6, v16);
    }
    v3 += 17;
    ++v12;
  }
    while ( v3 < 357 );
    return result;
}
}
} // namespace gamemd

// 0x452000
namespace gamemd {
int sub_452000(unsigned int * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_452000(_DWORD *a1)
{
  int v2; // eax
  int v3; // edi
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  int v6; // ecx
  int v7; // ebx
  _DWORD *v8; // ecx
  int v9; // ebp
  bool v10; // zf
  int v11; // ebx
  int *v12; // ecx
  int v13; // esi
  int result; // eax
  _DWORD *v15; // [esp+10h] [ebp-10h]
  int v16; // [esp+14h] [ebp-Ch]
  int v17; // [esp+18h] [ebp-8h]

  v17 = (*(int (__thiscall **)(_DWORD *))(*a1 + 484))(a1); /*0x452015*/
  v2 = (*(int (__thiscall **)(_DWORD *))(*a1 + 444))(a1); /*0x452019*/
  v3 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*a1 + 1124))(a1, *(__int16 *)(v2 + 266)); /*0x452031*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 352))(a1)
    || a1[165]
    && (a1 ? (v4 = (*(int (__thiscall **)(_DWORD *))(*a1 + 44))(a1) == 6 ? a1 : 0) : (v4 = 0),
        *(_DWORD **)(a1[165] + 80) == v4) )
  {
    LOWORD(v3) = Techno::StartInvulnerability(v3); /*0x452078*/
  }
  *((_WORD *)a1 + 896) = v3; /*0x45207a*/
  v15 = a1 + 343; /*0x452091*/
  v16 = 21; /*0x452095*/
  do /*0x45211d*/
  {
    v5 = (_DWORD *)*v15; /*0x4520a1*/
    if ( *v15 ) /*0x4520a1*/
    {
      v6 = v5[50]; /*0x4520a7*/
      if ( v6 && *(_BYTE *)(v6 + 860) ) /*0x4520b1*/
      {
        v5[53] = v17; /*0x4520c3*/
        v5[63] = (unsigned __int16)v3; /*0x4520c9*/
      }
      v7 = *((char *)a1 + 1773); /*0x4520cf*/
      if ( v7 == 15 && (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*a1 + 104))(a1, 0, 0) == 5 ) /*0x4520e9*/
        LOBYTE(v7) = 16; /*0x4520eb*/
      v8 = a1 + 343; /*0x4520f0*/
      v9 = 21; /*0x4520f2*/
      do /*0x452107*/
      {
        if ( *v8 ) /*0x4520f7*/
          *(_BYTE *)(*v8 + 376) = v7; /*0x4520fd*/
        ++v8; /*0x452103*/
        --v9; /*0x452106*/
      }
      while ( v9 ); /*0x452107*/
    }
    v10 = v16 == 1; /*0x452114*/
    ++v15; /*0x452115*/
    --v16; /*0x452119*/
  }
  while ( !v10 ); /*0x45211d*/
  v11 = *((char *)a1 + 1773); /*0x452123*/
  if ( v11 == 15 && (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*a1 + 104))(a1, 0, 0) == 5 ) /*0x45213d*/
    LOBYTE(v11) = 16; /*0x45213f*/
  v12 = a1 + 343; /*0x452144*/
  v13 = 21; /*0x452146*/
  do /*0x45215b*/
  {
    result = *v12; /*0x45214b*/
    if ( *v12 ) /*0x45214b*/
      *(_BYTE *)(result + 376) = v11; /*0x452151*/
    ++v12; /*0x452157*/
    --v13; /*0x45215a*/
  }
  while ( v13 ); /*0x45215b*/
  return result; /*0x45215d*/
}
}
} // namespace gamemd

// 0x4528A0
namespace gamemd {
bool E4Recv_4528A0::sub_4528A0(int a2)
{
{
    int *v3;
    int v4;
    int v5;
    int v6;
    int *v7;
    int v8;
    int v9;
    double v10;
    int v12;
    int v13;
    int v14;
    v3 = (int *)this->Vf72(&v12);
    v4 = *v3;
    v5 = v3[1];
    v6 = v3[2];
    v7 = (int *)(*(int (__thiscall **)(int, int *))(*(int *)(a2) + 72))(a2, &v12);
    v8 = v4 - *v7;
    v9 = v7[2];
    v13 = v5 - v7[1];
    v12 = v8;
    v14 = v6 - v9;
    v10 = Math::Sqrt((double)v8 * (double)v8 + (double)(v6 - v9) * (double)(v6 - v9) + (double)v13 * (double)v13);
    return (int)Math::RoundToInt(v10) <= *(int *)(this->M1312 + 5900) << 8;
}
}
} // namespace gamemd

// 0x452D40
namespace gamemd {
int sub_452D40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_452D40()
{
  int result; // eax
  int i; // edi
  int v2; // esi

  result = MEMORY[0xA8EB50]; /*0x452d40*/
  for ( i = 0; i < MEMORY[0xA8EB50]; ++i ) /*0x452d4a*/
  {
    v2 = *((_DWORD *)MEMORY[0xA8EB44] + i); /*0x452d52*/
    if ( v2 /*0x452d7c*/
      && *(_BYTE *)(*(_DWORD *)(v2 + 1312) + 5822)
      && !MEMORY[0xA8E7AC]
      && *(_BYTE *)(v2 + 144)
      && !*(_BYTE *)(v2 + 129) )
    {
      BuildingClass::DemolishBridge((#377 *)v2); /*0x452d8a*/
      BuildingClass::DemolishBridge((#377 *)v2); /*0x452d93*/
      BuildingClass::DemolishBridge((#377 *)v2); /*0x452d9c*/
      BuildingClass::DemolishBridge((#377 *)v2); /*0x452da5*/
      BuildingClass::RepairPlacement((_BYTE *)v2, 1); /*0x452dae*/
    }
    result = MEMORY[0xA8EB50]; /*0x452db3*/
  }
  return result; /*0x452dbe*/
}
}
} // namespace gamemd

// 0x456980
namespace gamemd {
char DrawTechnoDeployCircle(IUnknown * aP0, IUnknown * aP1, int a1, int a4, int a5, int a6, float a7, char a8, char a9)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall DrawTechnoDeployCircle(
        IUnknown *aP0,
        IUnknown *aP1,
        int a1,
        int a4,
        int a5,
        int a6,
        float a7,
        char a8,
        char a9)
{
  double v9; // st7
  int v10; // eax
  double v11; // st7
  int v12; // esi
  double *v13; // edx
  int v14; // eax
  double v15; // st7
  double *v16; // ebx
  double v17; // st7
  double v18; // st7
  int v19; // eax
  IUnknown *v20; // ecx
  Tactical *v21; // edx
  char *v22; // esi
  Tactical *v23; // eax
  double v24; // st7
  double v25; // st7
  int v26; // esi
  int v27; // eax
  Tactical *v28; // edi
  double v29; // st7
  float aP0_4; // [esp+5Ch] [ebp-8Ch]
  char v32; // [esp+6Eh] [ebp-7Ah]
  char v33; // [esp+6Fh] [ebp-79h]
  unsigned __int8 a2[4]; // [esp+70h] [ebp-78h] BYREF
  int v35; // [esp+74h] [ebp-74h]
  double v36; // [esp+78h] [ebp-70h]
  unsigned __int8 v37[8]; // [esp+80h] [ebp-68h] BYREF
  Tactical *v38; // [esp+88h] [ebp-60h] BYREF
  IUnknown *v39; // [esp+8Ch] [ebp-5Ch]
  double v40; // [esp+90h] [ebp-58h]
  double v41; // [esp+98h] [ebp-50h]
  double v42; // [esp+A0h] [ebp-48h]
  double v43; // [esp+A8h] [ebp-40h]
  double v44; // [esp+B0h] [ebp-38h]
  _DWORD v45[4]; // [esp+B8h] [ebp-30h] BYREF
  double v46; // [esp+C8h] [ebp-20h] BYREF
  _DWORD v47[4]; // [esp+D8h] [ebp-10h] BYREF

  v9 = a7; /*0x45698d*/
  v32 = (char)aP1; /*0x456994*/
  v33 = (char)aP0; /*0x456998*/
  if ( a9 ) /*0x45699c*/
    v9 = (double)(int)Math::RoundToInt(v9); /*0x4569a7*/
  if ( a8 ) /*0x4569b0*/
  {
    v10 = Math::RoundToInt(v9); /*0x4569b2*/
  }
  else
  {
    v46 = v9 + 0.5; /*0x4569c6*/
    v11 = Math::Sqrt(0); /*0x4569ca*/
    v10 = Math::RoundToInt(v46 / v11 * 60.0); /*0x4569dc*/
  }
  v12 = v10; /*0x4569e1*/
  v35 = v10; /*0x4569f2*/
  Coord::To_Screen(*(_DWORD **)&stru_87C374.__pad_579C[22548], &a1, (IUnknown *)&v38); /*0x4569f6*/
  v38 = (Tactical *)((char *)v38 + *(_DWORD *)&stru_87C374.__pad_579C[21648]); /*0x456a11*/
  v39 = (IUnknown *)((char *)v39 + *(_DWORD *)&stru_87C374.__pad_579C[21652]); /*0x456a20*/
  v47[1] = (char *)v39 - v12 / 2; /*0x456a2f*/
  LODWORD(v36) = v12 / 2; /*0x456a48*/
  v47[0] = (char *)v38 - v12; /*0x456a4c*/
  v47[2] = 2 * v12; /*0x456a53*/
  v47[3] = v12; /*0x456a5a*/
  v13 = (double *)ClipRectIntersection( /*0x456a66*/
                    (IUnknown *)v45,
                    (IUnknown *)v47,
                    (IUnknown *)&stru_87C374.__pad_579C[21648],
                    0,
                    0);
  v46 = *v13; /*0x456a6a*/
  v14 = *((_DWORD *)v13 + 2); /*0x456a75*/
  if ( v14 > 0 && *((int *)v13 + 3) > 0 ) /*0x456a85*/
  {
    v37[2] = BYTE2(a6); /*0x456a92*/
    a2[0] = 0; /*0x456a9c*/
    a2[1] = 0; /*0x456aa1*/
    a2[2] = 0; /*0x456aa6*/
    *(_WORD *)v37 = a6; /*0x456aab*/
    if ( v32 ) /*0x456ab0*/
      Color::Lerp(v37, (ObjectClass *)0x32, a2); /*0x456abd*/
    (*(void (__thiscall **)(_DWORD, Tactical *, IUnknown *, int, int, _DWORD, _DWORD, _DWORD, _DWORD, int))(**(_DWORD **)&stru_87C374.__pad_579C[22532] + 32))( /*0x456b57*/
      *(_DWORD *)&stru_87C374.__pad_579C[22532],
      v38,
      v39,
      v12,
      v12 / 2,
      *(_DWORD *)&stru_87C374.__pad_579C[21648],
      *(_DWORD *)&stru_87C374.__pad_579C[21652],
      *(_DWORD *)&stru_87C374.__pad_579C[21656],
      *(_DWORD *)&stru_87C374.__pad_579C[21660],
      (v37[0] >> stru_89E138.__pad_14B0[6124] << stru_89E138.__pad_14B0[6120])
    | (v37[1] >> stru_89E138.__pad_14B0[6140] << stru_89E138.__pad_14B0[6136])
    | (v37[2] >> stru_89E138.__pad_14B0[6132] << stru_89E138.__pad_14B0[6128]));
    (*(void (__thiscall **)(_DWORD, Tactical *, IUnknown *, int, int, _DWORD, _DWORD, _DWORD, _DWORD, int))(**(_DWORD **)&stru_87C374.__pad_579C[22532] + 32))( /*0x456beb*/
      *(_DWORD *)&stru_87C374.__pad_579C[22532],
      v38,
      v39,
      v12 - 1,
      v12 / 2 - 1,
      *(_DWORD *)&stru_87C374.__pad_579C[21648],
      *(_DWORD *)&stru_87C374.__pad_579C[21652],
      *(_DWORD *)&stru_87C374.__pad_579C[21656],
      *(_DWORD *)&stru_87C374.__pad_579C[21660],
      (v37[0] >> stru_89E138.__pad_14B0[6124] << stru_89E138.__pad_14B0[6120])
    | (v37[1] >> stru_89E138.__pad_14B0[6140] << stru_89E138.__pad_14B0[6136])
    | (v37[2] >> stru_89E138.__pad_14B0[6132] << stru_89E138.__pad_14B0[6128]));
    LOBYTE(v14) = v33; /*0x456bee*/
    if ( v33 ) /*0x456bf4*/
    {
      v15 = (double)v35; /*0x456bfa*/
      v35 = 0; /*0x456bfe*/
      v16 = (double *)dword_818CC8; /*0x456c06*/
      v41 = v15; /*0x456c0b*/
      v40 = (double)SLODWORD(v36); /*0x456c13*/
      do /*0x456c23*/
      {
        LODWORD(v36) = v35 + *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x456c23*/
        v17 = (double)(v35 + *(_DWORD *)&HouseClass_Player.__pad_5568[23248]) * 0.005; /*0x456c2b*/
        v36 = v17 - (double)(int)Math::RoundToInt(v17) * 6.283185307179586; /*0x456c4e*/
        if ( fabs(v36 - 1.570796326794897) >= 0.001 ) /*0x456c6b*/
        {
          if ( fabs(v36 - 4.71238898038469) >= 0.001 ) /*0x456ca1*/
          {
            v24 = Math::Sin(v36); /*0x456cb3*/
            v43 = v40 * v40; /*0x456cc0*/
            v42 = v41 * v41; /*0x456ccc*/
            v44 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(1.0 / (v24 * v24 / v43 + 1.0 / v42))); /*0x456cf4*/
            v25 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((1.0 - v44 * v44 / v42) * v43)); /*0x456d0f*/
            if ( v36 < 3.141592653589793 ) /*0x456d54*/
              v25 = -v25; /*0x456d5a*/
            v26 = Math::RoundToInt(v25); /*0x456d61*/
            v27 = Math::RoundToInt(v25); /*0x456d63*/
            v21 = v38; /*0x456d68*/
            v20 = v39; /*0x456d6c*/
            v28 = (Tactical *)((char *)v38 + v26); /*0x456d70*/
            v22 = (char *)v39 + v27; /*0x456d73*/
            v23 = v28; /*0x456d76*/
            goto LABEL_20; /*0x456d76*/
          }
          v18 = v40; /*0x456ca3*/
        }
        else
        {
          v18 = -v40; /*0x456c71*/
        }
        v19 = Math::RoundToInt(v18); /*0x456c73*/
        v20 = v39; /*0x456c78*/
        v21 = v38; /*0x456c7c*/
        v22 = (char *)v39 + v19; /*0x456c80*/
        v23 = v38; /*0x456c83*/
LABEL_20:
        v29 = *v16; /*0x456d78*/
        v45[0] = (char *)v23 - *(_DWORD *)&stru_87C374.__pad_579C[21648]; /*0x456d88*/
        HIDWORD(v46) = (char *)v20 - *(_DWORD *)&stru_87C374.__pad_579C[21652]; /*0x456d91*/
        LODWORD(v46) = (char *)v21 - *(_DWORD *)&stru_87C374.__pad_579C[21648]; /*0x456da3*/
        aP0_4 = v29; /*0x456da7*/
        v45[1] = &v22[-*(_DWORD *)&stru_87C374.__pad_579C[21652]]; /*0x456dc9*/
        LOBYTE(v14) = (*(int (__thiscall **)(_DWORD, char *, double *, _DWORD *, int *, int, int, _DWORD, int, int, int, _DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22532] + 60))( /*0x456dd8*/
                        *(_DWORD *)&stru_87C374.__pad_579C[22532],
                        &stru_87C374.__pad_579C[21648],
                        &v46,
                        v45,
                        &a6,
                        -500,
                        -500,
                        0,
                        1,
                        1,
                        1,
                        LODWORD(aP0_4));
        ++v16; /*0x456ddf*/
        ++v35; /*0x456de9*/
      }
      while ( (int)v16 < (int)aStructures ); /*0x456c23*/
    }
  }
  return v14; /*0x456df5*/
}
}
} // namespace gamemd

// 0x456FB0
namespace gamemd {
int sub_456FB0(unsigned int * a1, int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_456FB0(_DWORD *a1, int a2, int a3)
{
  int v4; // edi
  _DWORD *v5; // eax

  v4 = (*(int (__thiscall **)(_DWORD *, int))(*a1 + 1124))(a1, a3); /*0x456fc7*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 352))(a1) ) /*0x456fc9*/
    return Techno::StartInvulnerability(v4); /*0x456fc9*/
  if ( a1[165]
    && (a1 ? (v5 = (*(int (__thiscall **)(_DWORD *))(*a1 + 44))(a1) == 6 ? a1 : 0) : (v5 = 0),
        *(_DWORD **)(a1[165] + 80) == v5) )
  {
    return Techno::StartInvulnerability(v4); /*0x457005*/
  }
  else
  {
    return v4; /*0x45700f*/
  }
}
}
} // namespace gamemd

// 0x459F40
namespace gamemd {
int ObjectType_IsBuildingType(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall ObjectType_IsBuildingType(int a1)
{
  if ( a1 )
    return (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 44))(a1) == 6 ? a1 : 0;
  else
    return 0; /*0x459f47*/
}
}
} // namespace gamemd

// 0x45C300
namespace gamemd {
int Map_InitCellOffsets()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (v3 export truncated pseudocode — commented out; live version via get_context)
// int Map_InitCellOffsets()
// {
//   int v1; // [esp+10h] [ebp-4h] BYREF
//
//   unk_89D368 = 0x10000; /*0x45c32b*/
//   unk_89D36C = 0x1FFFF; /*0x45c33e*/
//   unk_89D370 = 65537; /*0x45c352*/
//   unk_89D374 = 0xFFFF; /*0x45c365*/
//   unk_89D378 = 1; /*0x45c379*/
//   unk_89D380 = -1; /*0x45c38c*/
//   unk_89D37C = -65536; /*0x45c391*/
//   unk_89D384 = -65535; /*0x45c3b8*/
//   unk_89D388 = 2147450879; /*0x45c3be*/
//   memset(&unk_89D38C, 0, 0x54u); /*0x45c3d4*/
//   unk_89D3E0 = 0x10000; /*0x45c3ed*/
//   unk_89D3E4 = 65537; /*0x45c406*/
//   unk_89D3E8 = 0x1FFFF; /*0x45c419*/
//   unk_89D3EC = 65538; /*0x45c42d*/
//   unk_89D3F0 = 0xFFFF; /*0x45c440*/
//   unk_89D3F4 = 2; /*0x45c454*/
//   unk_89D3F8 = -65536; /*0x45c467*/
//   unk_89D3FC = -65535; /*0x45c46d*/
//   unk_89D404 = -65534; /*0x45c48e*/
//   unk_89D400 = -1; /*0x45c498*/
//   unk_89D408 = 2147450879; /*0x45c4ac*/
//   memset(&unk_89D40C, 0, 0x4Cu); /*0x45c4be*/
//   unk_89D458 = 0x20000; /*0x45c4dc*/
//   unk_89D45C = 131073; /*0x45c4ef*/
//   unk_89D460 = 196607; /*0x45c503*/
//   unk_89D464 = 0x1FFF... [14497 chars total]
// end truncated pseudocode
}
} // namespace gamemd

// 0x45DD20
namespace gamemd {
char * E4Recv_45DD20::sub_45DD20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall sub_45DD20(void *this)
{
  int v1; // edx
  int *v2; // eax

  v1 = 0; /*0x45dd20*/
  v2 = &dword_81928C; /*0x45dd22*/
  while ( (void *)*v2 != this ) /*0x45dd29*/
  {
    v2 += 2; /*0x45dd2b*/
    ++v1; /*0x45dd2e*/
    if ( (int)v2 >= (int)dword_8192BC ) /*0x45dd34*/
      return off_819288; /*0x45dd3b*/
  }
  return (&off_819288)[2 * v1]; /*0x45dd3b*/
}
}
} // namespace gamemd

// 0x45DD50
namespace gamemd {
int E4Recv_45DD50::sub_45DD50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_45DD50(void *this)
{
  ObjectClass *v2; // edi
  const void **v3; // esi

  v2 = 0; /*0x45dd55*/
  v3 = (const void **)&off_819288; /*0x45dd57*/
  while ( _strcmpi(*v3, this) ) /*0x45dd6a*/
  {
    v3 += 2; /*0x45dd6c*/
    v2 = (ObjectClass *)((char *)v2 + 1); /*0x45dd6f*/
    if ( (int)v3 >= (int)dword_8192B8 ) /*0x45dd76*/
      return 0; /*0x45dd7d*/
  }
  return dword_81928C[2 * (_DWORD)v2]; /*0x45dd78*/
}
}
} // namespace gamemd

// 0x45E8B0
namespace gamemd {
int E4Recv_45E8B0::sub_45E8B0(int a2, int a3, int a4, int a5)
{
{
    int result;
    char *v6;
    result = 3 * a2 + 963;
    v6 = (char *)(this + 3 * a2);
    *((int *)(v6) + 961) = a3;
    *((int *)(v6) + 962) = a4;
    *(this + result) = a5;
    return result;
}
}
} // namespace gamemd

// 0x4503E0
namespace gamemd {
void nullsub_101()
{
  ;
}
} // namespace gamemd

// 0x451EE0
namespace gamemd {
void globalHelper_051EE0(int a1, int a2, IUnknown * aP4)
{
{
    IUnknown *v4;
    IUnknown *v5;
    int v6;
    int *v7;
    char *v8;
    v4 = aP4;
    if ( *(char *)(a1 + 1766) != (char)aP4 )
  {
    v5 = 0;
    *(char *)(a1 + 1766) = (char)aP4;
    v6 = 0;
    v7 = (int *)(a1 + 1372);
    do
    {
    if ( *v7 )
      {
    if ( (char)v4 )
        {
    v8 = (char *)(*(int *)(a1 + 1312) + v6 + 3932);
        }
    else
        {
    a2 = *(int *)(a1 + 1312);
    v8 = (char *)(a2 + v6 + 3916);
        }
    if ( v8 )
        {
    if ( *v8 )
          {
    BuildingClass::PlayAnim((ObjectClass *)a1, a2, v8, v5, v4, 0, 0);
    v4 = aP4;
          }
        }
      }
    v6 += 68;
    v5 = (IUnknown *)((char *)(v5) + 1);
    ++v7;
    }
    while ( v6 < 1428 );
  }
}
}
} // namespace gamemd

// 0x454CE0
namespace gamemd {
void nullsub_5()
{
  ;
}
} // namespace gamemd

// 0x455DD0
namespace gamemd {
unsigned int * sub_455DD0(int a1, unsigned int * a2)
{
{
    int v2;
    int *v3;
    int v4;
    int *v5;
    double v6;
    int v7;
    int v9;
    int v11;
    int *v12;
    int v14;
    int v15;
    int v16;
    int v17;
    v2 = a1;
    v3 = a2;
    v12 = 0;
    v9 = 0x7FFFFFFF;
    if ( (DataGlobal_89C828 & 1) == 0 )
  {
    DataGlobal_89C828 |= 1u;
    DataGlobal_89C7F0 = Math::RoundToInt(DataGlobal_89C820 * 20.0);
  }
    v4 = 0;
    v14 = *(int *)(v2 + 144);
    v11 = 0;
    if ( v14 <= 0 )
    return 0;
    while ( 1 )
  {
    v5 = *(int **)(*(int *)(v2 + 132) + 4 * v4);
    if ( (*(int (__thiscall **)(int *, int, int *))(*v3 + 632))(v3, 15, v5) )
    {
    v15 = v5[39] - v3[39];
    v16 = v5[40] - v3[40];
    v17 = v5[41] - v3[41];
    v6 = Math::Sqrt((double)v15 * (double)v15 + (double)v17 * (double)v17 + (double)v16 * (double)v16);
    v7 = Math::RoundToInt(v6);
    if ( v7 < v9 && v7 < DataGlobal_89C7F0 )
      {
    v12 = v5;
    v9 = v7;
      }
    v3 = a2;
    }
    v4 = ++v11;
    if ( v11 >= v14 )
    break;
    v2 = a1;
  }
    return v12;
}
}
} // namespace gamemd

// 0x456970
namespace gamemd {
void nullsub_103()
{
  ;
}
} // namespace gamemd

// 0x457A10
namespace gamemd {
char E4Recv_457A10::sub_457A10()
{
{
    int v2;
    short *i;
    int v5;
    int v6;
    v2 = *(int *)((int (__thiscall *)(int **, int *))(*(void**)this)[110])(this, &v6);
    for ( i = (short *)(*(int (__thiscall **)(int, int))(*(void**)this->M1312 + 144))(this->M1312, 0);
    *i != 0x7FFF || i[1] != 0x7FFF;
    i += 2 ) {
    LOWORD(v5) = v2 + *i;
    HIWORD(v5) = HIWORD(v2) + i[1];
    v6 = v5;
    if ( (*((int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&v6) + 80) & 0x400000) == 0 )
    return 0;
  }
    return 1;
}
}
} // namespace gamemd

// 0x45AFA0
namespace gamemd {
void sub_45AFA0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_89C8B8 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x45AFD0
namespace gamemd {
void sub_45AFD0()
{
{
    DataGlobal_89D360 = DataGlobal_89C8B8 / 60.0;
}
}
} // namespace gamemd

// 0x45AFF0
namespace gamemd {
void sub_45AFF0()
{
{
    DataGlobal_89C8F8 = 1.0 / DataGlobal_89D360;
}
}
} // namespace gamemd

// 0x45B010
namespace gamemd {
void sub_45B010()
{
{
    DataGlobal_89C8F0 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x45B030
namespace gamemd {
void sub_45B030()
{
{
    DataGlobal_89C8C0 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x45B050
namespace gamemd {
void sub_45B050()
{
{
    DataGlobal_89C898 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x45B070
namespace gamemd {
long long sub_45B070()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_89C898 - DataGlobal_89C8C0);
    result = Math::RoundToInt(v0 * DataGlobal_89C8B8 * 0.5);
    DataGlobal_89DDB8 = result;
    return result;
}
}
} // namespace gamemd

// 0x45B0B0
namespace gamemd {
void sub_45B0B0()
{
{
    DataGlobal_89C8C8 = Math::ArcTan((double)DataGlobal_89DDB8 * 0.00390625);
}
}
} // namespace gamemd

// 0x45B0E0
namespace gamemd {
void sub_45B0E0()
{
{
    DataGlobal_89C8E0 = Math::ArcTan((double)(2 * DataGlobal_89DDB8) / DataGlobal_89C8B8);
}
}
} // namespace gamemd

// 0x45B110
namespace gamemd {
long long sub_45B110()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_89DDB8) + 0.5);
    DataGlobal_89D35C = result;
    return result;
}
}
} // namespace gamemd

// 0x45B140
namespace gamemd {
int sub_45B140()
{
{
    DataGlobal_89C8B0 = 0;
    DataGlobal_89C8B2 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x45B150
namespace gamemd {
int sub_45B150()
{
{
    DataGlobal_89C8D0 = 0;
    DataGlobal_89C8D4 = 0;
    DataGlobal_89C8D8 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x45B170
namespace gamemd {
int sub_45B170()
{
{
    DataGlobal_89D358 = 0;
    DataGlobal_89D350 = 128;
    DataGlobal_89D354 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x45B190
namespace gamemd {
int sub_45B190()
{
{
    DataGlobal_89C8A0 = 0;
    DataGlobal_89C8A4 = 0;
    DataGlobal_89C8A8 = 0;
    DataGlobal_89C8AC = 0;
    return 0;
}
}
} // namespace gamemd

// 0x45B1B0
namespace gamemd {
int j_MapData_InitHeights()
{
    int j_MapData_InitHeights()
{
    return MapData::InitHeights();
}
}
} // namespace gamemd

// 0x45C2F0
namespace gamemd {
int j_Map_InitCellOffsets()
{
    int j_Map_InitCellOffsets()
{
    return InitCellOffsetsMap();
}
}
} // namespace gamemd

// 0x45E750
namespace gamemd {
void nullsub_6()
{
  ;
}
} // namespace gamemd

// 0x45E8F0
namespace gamemd {
char sub_45E8F0()
{
{
    int SubFile;
    int v1;
    int v2;
    int v3;
    int i;
    int v6[4];
    LOBYTE(SubFile) = (char)DataGlobal_89DDBC;
    if ( !DataGlobal_89DDBC )
  {
    DataGlobal_89DDBC = (void *)SearchMIXFile(aBuildngzSha, 0);
    Building::GetFoundationSize(v6, 0);
    SubFile = MixFileClass::GetSubFile((char **)DataGlobal_89DDBC, 0);
    v1 = *((short *)(DataGlobal_89DDBC) + 1);
    if ( *((short *)(DataGlobal_89DDBC) + 2) > 0 )
    {
    v2 = SubFile;
    v3 = *((short *)(DataGlobal_89DDBC) + 2);
    do
      {
    for ( i = 0; i < v1; ++i )
        {
    LOBYTE(SubFile) = *(char *)(v2 + i);
    if ( (char)SubFile )
          {
    LOBYTE(SubFile) = SubFile - 65;
    *(char *)(v2 + i) = SubFile;
          }
        }
    v2 += v1;
    --v3;
      }
    while ( v3 );
    }
  }
    return SubFile;
}
}
} // namespace gamemd

// 0x45EC80
namespace gamemd {
void nullsub_107()
{
  ;
}
} // namespace gamemd
