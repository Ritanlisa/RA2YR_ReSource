// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x41D7E0
bool Warhead::GetWarheadSound(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall sub_41D7E0(int this, int a2)
{
  int v3; // eax

  if ( VeterancyStruct::IsElite((float *)(*(_DWORD *)(this + 76) + 336)) ) /*0x41d7ec*/
    v3 = *(_DWORD *)(this + 72); /*0x41d7f5*/
  else
    v3 = *(_DWORD *)(this + 68); /*0x41d7fa*/
  return !*(_BYTE *)(this + 60) && v3 + *(_DWORD *)(this + 64) <= (int)MEMORY[0xA8ED84] || a2 != *(_DWORD *)(this + 80); /*0x41d814*/
}
}

// 0x452820
char Warhead::RemoveFromDamageList(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_452820(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  int v8; // edx

  v2 = this + 411; /*0x452827*/
  v3 = (*(int (__thiscall **)(_DWORD *, int *))(*(this + 411) + 16))(this + 411, &a2); /*0x452834*/
  if ( v3 != -1 ) /*0x45283a*/
  {
    v4 = v2[4]; /*0x45283c*/
    if ( v3 < v4 ) /*0x452841*/
    {
      v5 = v4 - 1; /*0x452843*/
      for ( v2[4] = v5; v3 < v2[4]; *(_DWORD *)(v2[1] + 4 * v3 - 4) = *(_DWORD *)(v2[1] + 4 * v3) ) /*0x452849*/
        ++v3; /*0x45284e*/
    }
  }
  v6 = v2[2]; /*0x45285d*/
  if ( v2[4] < v6 /*0x452887*/
    || ((LOBYTE(v7) = *((_BYTE *)v2 + 13), (_BYTE)v7) || !v6)
    && (v7 = v2[5], v7 > 0)
    && (LOBYTE(v7) = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*v2 + 8))(v2, v6 + v7, 0), (_BYTE)v7) )
  {
    v7 = v2[4]; /*0x452889*/
    v8 = v2[1]; /*0x45288c*/
    v2[4] = v7 + 1; /*0x452892*/
    *(_DWORD *)(v8 + 4 * v7) = a2; /*0x452899*/
  }
  return v7; /*0x45289c*/
}
}

// 0x4690B0
char Warhead::ApplyDamage(ObjectClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (v3 export truncated pseudocode — commented out; live version via get_context)
// char __thiscall Warhead::ApplyDamage(char *this, ObjectClass *aP1)
// {
//   int v3; // eax
//   IUnknown *v4; // ecx
//   int v5; // eax
//   IUnknown *v6; // ecx
//   int v7; // ecx
//   InfantryClass *v8; // edi
//   Concurrency::details::SchedulerBase *v9; // ebx
//   _DWORD *NumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ; // eax
//   _DWORD *v11; // eax
//   RadSiteClass *v12; // edi
//   _BYTE *v13; // eax
//   TechnoClass *v14; // eax
//   int v15; // eax
//   int v16; // edi
//   bool v17; // bl
//   void **v18; // ecx
//   int v19; // edi
//   int v20; // eax
//   int v21; // ecx
//   TechnoClass *v22; // ecx
//   TechnoClass *v23; // ecx
//   int v24; // eax
//   int v25; // eax
//   int v26; // ecx
//   _DWORD *v27; // edi
//   TechnoClass *v28; // eax
//   int v29; // ecx
//   int v30; // edi
//   _DWORD *v31; // eax
//   ObjectClass *Member; // ebx
//   int v33; // edi
//   int v34; // eax
//   int v35; // eax
//   _DWORD *v36; // eax
//   TechnoClass *v37; // ecx
//   int v38; // eax
//   int v39; // ecx
//   int v40; // edi
//   int v41; // ecx
//   int v42; //... [32675 chars total]
// end truncated pseudocode
}

// 0x46A310
int Warhead::ApplyPostDamageEffects()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Warhead_ApplyPostDamageEffects(int *this)
{
  int v2; // eax
  int v3; // esi
  int *v4; // ecx
  int v5; // ebx
  int v6; // ebp
  int v7; // edx
  _DWORD *v8; // eax
  int *v9; // eax
  int result; // eax
  int v11; // eax
  int v12; // edx
  int v13; // esi
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int *v18; // ecx
  int v19; // edx
  bool v20; // cc
  _WORD *v21; // ebx
  __int16 v22; // ax
  _BYTE *v23; // ebp
  int v24; // eax
  char v25; // al
  int v26; // edx
  int v27; // ebx
  int v28; // eax
  int *v29; // ebx
  int v30; // ecx
  int v31; // edx
  _DWORD *v32; // eax
  double v33; // st7
  __int16 v34; // ax
  double v35; // st7
  double v36; // st7
  double v37; // st7
  double v38; // st7
  double v39; // st7
  double v40; // st7
  int v41; // ecx
  int v42; // edx
  char v43; // al
  _DWORD *v44; // ecx
  int *v45; // ecx
  __int16 v46; // ax
  __int16 v47; // ax
  char v48; // dl
  int v49; // ecx
  int v50; // eax
  int v51; // ebx
  int v52; // ebp
  int *v53; // eax
  int *v54; // ebx
  int v55; // edx
  _DWORD *v56; // eax
  double v57; // st7
  __int16 v58; // bp
  unsigned int v59; // ebp
  double v60; // st7
  double v61; // st7
  double v62; // st7
  double v63; // st7
  unsigned int v64; // ebp
  double v65; // st7
  int v66; // ecx
  int v67; // edx
  int v68; // ecx
  int v69; // edx
  char v70; // al
  _BYTE *v71; // eax
  _BYTE *v72; // eax
  double v73; // [esp+3Ch] [ebp-A4h] BYREF
  double v74; // [esp+44h] [ebp-9Ch]
  double v75; // [esp+4Ch] [ebp-94h]
  int v76; // [esp+54h] [ebp-8Ch] BYREF
  double v77; // [esp+58h] [ebp-88h]
  double v78; // [esp+60h] [ebp-80h]
  LPVOID v79; // [esp+68h] [ebp-78h] BYREF
  int v80; // [esp+6Ch] [ebp-74h]
  _WORD *v81; // [esp+70h] [ebp-70h]
  LPVOID v82; // [esp+74h] [ebp-6Ch] BYREF
  int v83; // [esp+78h] [ebp-68h] BYREF
  int v84; // [esp+7Ch] [ebp-64h] BYREF
  int v85; // [esp+80h] [ebp-60h]
  int v86; // [esp+84h] [ebp-5Ch]
  double v87; // [esp+88h] [ebp-58h]
  double v88; // [esp+90h] [ebp-50h] BYREF
  int v89; // [esp+9Ch] [ebp-44h]
  int v90; // [esp+A0h] [ebp-40h] BYREF
  int v91; // [esp+A4h] [ebp-3Ch]
  int v92; // [esp+A8h] [ebp-38h]
  int v93; // [esp+ACh] [ebp-34h] BYREF
  int v94; // [esp+B0h] [ebp-30h]
  int v95; // [esp+B4h] [ebp-2Ch]
  LPVOID ppv; // [esp+B8h] [ebp-28h] BYREF
  void *v97; // [esp+BCh] [ebp-24h]
  int v98; // [esp+C0h] [ebp-20h]
  int v99; // [esp+C4h] [ebp-1Ch]
  int v100; // [esp+C8h] [ebp-18h]
  int v101; // [esp+CCh] [ebp-14h]
  int v102; // [esp+D0h] [ebp-10h]
  _BYTE v103[12]; // [esp+D4h] [ebp-Ch] BYREF

  v2 = *(this + 43); /*0x46a322*/
  v3 = *(_DWORD *)(v2 + 696); /*0x46a328*/
  if ( v3 >= 0 ) /*0x46a330*/
  {
    v76 = *(_DWORD *)(v2 + 696); /*0x46a3d2*/
  }
  else
  {
    v4 = (int *)*(this + 44); /*0x46a336*/
    if ( v4 ) /*0x46a33e*/
    {
      v5 = *(this + 39); /*0x46a353*/
      v6 = *(this + 40); /*0x46a359*/
      v7 = *v4; /*0x46a35f*/
      v92 = *(this + 41); /*0x46a361*/
      v8 = (_DWORD *)(*(int (__thiscall **)(int *, int *))(v7 + 72))(v4, &v93); /*0x46a370*/
      v9 = Coord::Subtract(&v90, *v8 - v5, v8[1] - v6, v8[2] - v92); /*0x46a392*/
      v84 = *v9; /*0x46a399*/
      v85 = v9[1]; /*0x46a3a4*/
      v86 = v9[2]; /*0x46a3ab*/
      result = (int)Coord::Length(&v84) / 256; /*0x46a3bd*/
      v76 = -v3 - result; /*0x46a3c6*/
      if ( v76 <= 0 ) /*0x46a3ca*/
        return result; /*0x46a3ca*/
    }
    else
    {
      v76 = 3; /*0x46a340*/
    }
  }
  result = (*(int (__thiscall **)(int *))(*this + 444))(this); /*0x46a3da*/
  if ( *(_DWORD *)(result + 228) ) /*0x46a3e0*/
  {
    v11 = (*(int (__thiscall **)(int *))(*this + 444))(this); /*0x46a3f2*/
    result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v11 + 228) + 44))(*(_DWORD *)(v11 + 228)); /*0x46a400*/
    if ( result != 6 ) /*0x46a406*/
    {
      v12 = *this; /*0x46a412*/
      v13 = *(_DWORD *)(*(this + 43) + 692); /*0x46a414*/
      v99 = *(_DWORD *)(v13 + 160); /*0x46a425*/
      v14 = *(_DWORD *)(*(int (__thiscall **)(int *, int *))(v12 + 440))(this, &v83); /*0x46a434*/
      v15 = *(_DWORD *)(v13 + 180); /*0x46a43c*/
      v98 = v14; /*0x46a443*/
      v16 = 0; /*0x46a44c*/
      v17 = v15 / 256; /*0x46a44e*/
      v83 = v17; /*0x46a454*/
      v89 = 0; /*0x46a458*/
      v80 = 1; /*0x46a45c*/
      if ( v17 >= 1 ) /*0x46a464*/
      {
        v18 = &dword_7ED3D4; /*0x46a46a*/
        v79 = &dword_7ED3D4; /*0x46a46f*/
        do /*0x46a926*/
        {
          v19 = *(v18 - 1); /*0x46a475*/
          v20 = v19 < *v18; /*0x46a478*/
          LODWORD(v78) = *v18; /*0x46a47a*/
          v100 = v19; /*0x46a47e*/
          if ( v20 ) /*0x46a485*/
          {
            v21 = (_WORD *)(4 * v19 + 11261072); /*0x46a48b*/
            v81 = v21; /*0x46a492*/
            do /*0x46a906*/
            {
              v22 = HIWORD(v98) + v21[1]; /*0x46a4a5*/
              LOWORD(v97) = v98 + *v21; /*0x46a4ad*/
              HIWORD(v97) = v22; /*0x46a4b5*/
              v82 = v97; /*0x46a4c8*/
              v23 = (_BYTE *)*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v82) + 57); /*0x46a4d7*/
              if ( v23 ) /*0x46a4df*/
              {
                v24 = *(this + 44); /*0x46a4e5*/
                if ( v23 != (_BYTE *)v24 && v24 && !Object::IsAlliedWithObjectHouse(*(_DWORD **)(v24 + 540), (int)v23) ) /*0x46a502*/
                {
                  v25 = *(_BYTE *)(v13 + 303); /*0x46a515*/
                  v26 = *(_DWORD *)(v13 + 164); /*0x46a51b*/
                  v27 = *(_DWORD *)(v13 + 168); /*0x46a521*/
                  v102 = *(_DWORD *)(v13 + 172); /*0x46a527*/
                  LOBYTE(v101) = v25; /*0x46a53b*/
                  v28 = *(this + 44); /*0x46a542*/
                  LODWORD(v88) = v26; /*0x46a551*/
                  LODWORD(v77) = v28; /*0x46a555*/
                  ppv = 0; /*0x46a559*/
                  if ( CoCreateInstance(&rclsid, 0, 7u, &IID_IUnknown, &ppv) >= 0 ) /*0x46a56c*/
                  {
                    v82 = ppv; /*0x46a59d*/
                    Particle::Init((int)ppv, v99, (int)v23, SLODWORD(v77), SLODWORD(v88), v102, v27, v101); /*0x46a5a1*/
                    if ( v82 ) /*0x46a5ac*/
                    {
                      v29 = this + 39; /*0x46a5b2*/
                      v73 = 0.0; /*0x46a5b8*/
                      v74 = 0.0; /*0x46a5ca*/
                      v30 = *(this + 39); /*0x46a5da*/
                      v75 = 0.0; /*0x46a5dc*/
                      v93 = v30; /*0x46a5ec*/
                      v94 = *(this + 40); /*0x46a5f8*/
                      v31 = *(_DWORD *)v23; /*0x46a5ff*/
                      v95 = *(this + 41); /*0x46a605*/
                      v32 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(v31 + 72))(v23, v103); /*0x46a614*/
                      LODWORD(v77) = *v32; /*0x46a61c*/
                      v33 = Math::CalcAngle((double)v94 - (double)(int)v32[1], (double)SLODWORD(v77) - (double)v93); /*0x46a63f*/
                      v34 = Math::RoundToInt((v33 - 1.570796326794897) * -10430.06004058427); /*0x46a653*/
                      v35 = v73; /*0x46a658*/
                      LOWORD(v87) = v34; /*0x46a662*/
                      if ( v73 == 0.0 ) /*0x46a66c*/
                      {
                        v35 = v74; /*0x46a66e*/
                        if ( v74 == 0.0 ) /*0x46a67d*/
                          v73 = 100.0; /*0x46a67f*/
                      }
                      Function::Method_41C430(&v73); /*0x46a693*/
                      v88 = v35; /*0x46a69d*/
                      LODWORD(v77) = SLOWORD(v87) - 0x3FFF; /*0x46a6a7*/
                      v77 = (double)SLODWORD(v77) * -0.00009587672516830327; /*0x46a6b5*/
                      v73 = Math::ArcTan2(v77) * v35; /*0x46a6d6*/
                      v36 = -(Math::SinCos(v77) * v88); /*0x46a6ea*/
                      v74 = v36; /*0x46a6ec*/
                      Math::Hypotenuse2D(&v73); /*0x46a6f0*/
                      v37 = Math::CalcAngle(v75, v36); /*0x46a705*/
                      v38 = (double)((__int16)Math::RoundToInt((v37 - 1.570796326794897) * -10430.06004058427) - 0x3FFF) /*0x46a732*/
                          * -0.00009587672516830327;
                      v77 = v38; /*0x46a738*/
                      Vector3::Magnitude(&v73); /*0x46a73c*/
                      v88 = v38; /*0x46a741*/
                      if ( v77 != 0.0 ) /*0x46a754*/
                      {
                        v73 = v73 / Math::ArcTan2(v77); /*0x46a773*/
                        v74 = v74 / Math::ArcTan2(v77); /*0x46a783*/
                      }
                      v73 = Math::ArcTan2(0.7853262558535721) * v73; /*0x46a7a4*/
                      v74 = Math::ArcTan2(0.7853262558535721) * v74; /*0x46a7bb*/
                      v75 = Math::SinCos(0.7853262558535721) * v88; /*0x46a7ce*/
                      v77 = (double)*(int *)(v13 + 168); /*0x46a7d8*/
                      v39 = v73; /*0x46a7dc*/
                      if ( v73 == 0.0 ) /*0x46a7eb*/
                      {
                        v39 = v74; /*0x46a7ed*/
                        if ( v74 == 0.0 ) /*0x46a7fc*/
                        {
                          v39 = v75; /*0x46a7fe*/
                          if ( v75 == 0.0 ) /*0x46a80d*/
                            v73 = 100.0; /*0x46a80f*/
                        }
                      }
                      Vector3::Magnitude(&v73); /*0x46a823*/
                      v40 = v77 / v39; /*0x46a828*/
                      v90 = *v29; /*0x46a830*/
                      v91 = *(this + 40); /*0x46a837*/
                      v92 = *(this + 41); /*0x46a842*/
                      v73 = v40 * v73; /*0x46a859*/
                      v74 = v74 * v40; /*0x46a863*/
                      v75 = v75 * v40; /*0x46a86d*/
                      (*(void (__thiscall **)(LPVOID, int *, double *))(*(_DWORD *)v82 + 496))(v82, &v90, &v73); /*0x46a875*/
                      v41 = *(this + 40); /*0x46a87d*/
                      v42 = *(this + 41); /*0x46a880*/
                      v84 = *v29; /*0x46a883*/
                      v43 = *(_BYTE *)(v13 + 329); /*0x46a887*/
                      v85 = v41; /*0x46a88d*/
                      v86 = v42; /*0x46a893*/
                      if ( v43 ) /*0x46a897*/
                      {
                        v44 = (_DWORD *)*(this + 44); /*0x46a899*/
                        if ( v44 ) /*0x46a8a1*/
                          TechnoClass::CreateFireEffect(v44, v23, 0, v13, &v84); /*0x46a8ac*/
                      }
                      if ( *(_BYTE *)(v13 + 337) ) /*0x46a8b1*/
                      {
                        v45 = (int *)*(this + 44); /*0x46a8bb*/
                        if ( v45 ) /*0x46a8c3*/
                          TechnoClass::CreateRadarBlip(v45, v23, v13, &v84); /*0x46a8cc*/
                      }
                    }
                  }
                  result = ++v89; /*0x46a8d9*/
                  if ( v89 == v76 ) /*0x46a8e0*/
                    return result; /*0x46a8e0*/
                  v21 = v81; /*0x46a8e6*/
                }
              }
              v21 += 2; /*0x46a8f6*/
              v20 = ++v100 < SLODWORD(v78); /*0x46a8f9*/
              v81 = v21; /*0x46a902*/
            }
            while ( v20 ); /*0x46a906*/
            v17 = v83; /*0x46a90c*/
            v18 = (int *)v79; /*0x46a910*/
          }
          v79 = ++v18; /*0x46a91c*/
          ++v80; /*0x46a922*/
        }
        while ( v80 <= v17 ); /*0x46a926*/
        v16 = v89; /*0x46a92c*/
      }
      result = v76; /*0x46a930*/
      if ( v16 < v76 ) /*0x46a936*/
      {
        v81 = (_WORD *)(v76 - v16); /*0x46a93e*/
        do /*0x46adc7*/
        {
          v76 = *(_DWORD *)(*(int (__thiscall **)(int *, double *))(*this + 440))(this, &v88); /*0x46a962*/
          v46 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, -2, 2); /*0x46a966*/
          LOWORD(v76) = v46 + v76; /*0x46a971*/
          v47 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, -2, 2); /*0x46a980*/
          v48 = *(_BYTE *)(v13 + 303); /*0x46a985*/
          v49 = *(this + 44); /*0x46a98b*/
          HIWORD(v76) += v47; /*0x46a991*/
          v50 = *(_DWORD *)(v13 + 164); /*0x46a996*/
          v51 = *(_DWORD *)(v13 + 168); /*0x46a99c*/
          v52 = *(_DWORD *)(v13 + 172); /*0x46a9a2*/
          LOBYTE(v83) = v48; /*0x46a9a8*/
          LODWORD(v87) = v49; /*0x46a9b0*/
          LODWORD(v78) = v50; /*0x46a9ba*/
          LODWORD(v77) = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v76); /*0x46a9c3*/
          v79 = 0; /*0x46a9da*/
          if ( CoCreateInstance(&rclsid, 0, 7u, &IID_IUnknown, &v79) >= 0 ) /*0x46a9ea*/
          {
            v80 = (int)v79; /*0x46aa12*/
            Particle::Init((int)v79, v99, SLODWORD(v77), SLODWORD(v87), SLODWORD(v78), v52, v51, v83); /*0x46aa16*/
            if ( v80 ) /*0x46aa21*/
            {
              v73 = 0.0; /*0x46aa31*/
              v74 = 0.0; /*0x46aa41*/
              v75 = 0.0; /*0x46aa51*/
              v53 = (int *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v76); /*0x46aa61*/
              v54 = this + 39; /*0x46aa66*/
              v84 = *(this + 39); /*0x46aa70*/
              v85 = *(this + 40); /*0x46aa77*/
              v55 = *v53; /*0x46aa7b*/
              v86 = *(this + 41); /*0x46aa80*/
              v56 = (_DWORD *)(*(int (__thiscall **)(int *, _BYTE *))(v55 + 72))(v53, v103); /*0x46aa8e*/
              LODWORD(v78) = *v56; /*0x46aa96*/
              v57 = Math::CalcAngle((double)v85 - (double)(int)v56[1], (double)SLODWORD(v78) - (double)v84); /*0x46aab3*/
              v58 = Math::RoundToInt((v57 - 1.570796326794897) * -10430.06004058427); /*0x46aad6*/
              if ( v73 == 0.0 && v74 == 0.0 ) /*0x46aaef*/
                v73 = 100.0; /*0x46aaf1*/
              v87 = Math::Sqrt(v74 * v74 + v73 * v73); /*0x46ab26*/
              LODWORD(v78) = v58 - 0x3FFF; /*0x46ab2a*/
              v78 = (double)SLODWORD(v78) * -0.00009587672516830327; /*0x46ab38*/
              v59 = HIDWORD(v78); /*0x46ab3c*/
              v73 = Math::ArcTan2(v78) * v87; /*0x46ab55*/
              v60 = -(Math::SinCos(COERCE_DOUBLE(__PAIR64__(v59, LODWORD(v78)))) * v87); /*0x46ab65*/
              v74 = v60; /*0x46ab67*/
              v78 = (double)*(int *)(v13 + 168); /*0x46ab71*/
              if ( v73 == 0.0 && v60 == 0.0 && v75 == 0.0 ) /*0x46aba2*/
                v73 = 100.0; /*0x46aba4*/
              v61 = Math::Sqrt(v75 * v75 + v73 * v73 + v60 * v60); /*0x46abd6*/
              v62 = v78 / v61; /*0x46abdb*/
              v73 = v62 * v73; /*0x46abec*/
              v74 = v74 * v62; /*0x46abf6*/
              v75 = v75 * v62; /*0x46ac00*/
              Math::Hypotenuse2D(&v73); /*0x46ac06*/
              v63 = Math::CalcAngle(v75, v62); /*0x46ac1b*/
              LODWORD(v78) = (__int16)Math::RoundToInt((v63 - 1.570796326794897) * -10430.06004058427) - 0x3FFF; /*0x46ac3d*/
              v78 = (double)SLODWORD(v78) * -0.00009587672516830327; /*0x46ac4b*/
              v87 = Math::Sqrt(v74 * v74 + v75 * v75 + v73 * v73); /*0x46ac73*/
              if ( v78 != 0.0 ) /*0x46ac89*/
              {
                v64 = HIDWORD(v78); /*0x46ac8b*/
                v73 = v73 / Math::ArcTan2(v78); /*0x46aca4*/
                v74 = v74 / Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v64, LODWORD(v78)))); /*0x46acb4*/
              }
              v73 = Math::ArcTan2(0.7853262558535721) * v73; /*0x46acd5*/
              v74 = Math::ArcTan2(0.7853262558535721) * v74; /*0x46acec*/
              v65 = Math::SinCos(0.7853262558535721); /*0x46acf0*/
              v90 = *v54; /*0x46ad00*/
              v66 = *(this + 40); /*0x46ad04*/
              v75 = v65 * v87; /*0x46ad07*/
              v67 = *(this + 41); /*0x46ad0b*/
              v91 = v66; /*0x46ad0e*/
              v92 = v67; /*0x46ad16*/
              (*(void (__thiscall **)(int, int *, double *))(*(_DWORD *)v80 + 496))(v80, &v90, &v73); /*0x46ad29*/
              v68 = *(this + 40); /*0x46ad31*/
              v69 = *(this + 41); /*0x46ad34*/
              v93 = *v54; /*0x46ad37*/
              v70 = *(_BYTE *)(v13 + 329); /*0x46ad3e*/
              v94 = v68; /*0x46ad44*/
              v95 = v69; /*0x46ad4d*/
              if ( v70 && *(this + 44) ) /*0x46ad56*/
              {
                v71 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v76); /*0x46ad75*/
                TechnoClass::CreateFireEffect((_DWORD *)*(this + 44), v71, 0, v13, &v93); /*0x46ad81*/
              }
              if ( *(_BYTE *)(v13 + 337) ) /*0x46ad86*/
              {
                if ( *(this + 44) ) /*0x46ad90*/
                {
                  v72 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v76); /*0x46adad*/
                  TechnoClass::CreateRadarBlip((int *)*(this + 44), v72, v13, &v93); /*0x46adb9*/
                }
              }
            }
          }
          result = (int)v81 - 1; /*0x46adc2*/
          v81 = (_WORD *)((char *)v81 - 1); /*0x46adc3*/
        }
        while ( v81 ); /*0x46adc7*/
      }
    }
  }
  return result; /*0x46adcd*/
}
}

// 0x65B580
int Warhead::ProcessDamageArea()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Warhead_ProcessDamageArea(int this)
{
  double *v2; // edi
  int v3; // ebx
  int v4; // ebp
  int v5; // eax
  double v6; // st7
  int v7; // ebx
  double v8; // st7
  double v9; // st7
  int v10; // ebp
  double v11; // st7
  int v12; // eax
  int v13; // ecx
  int v14; // edi
  int v15; // ecx
  void *v16; // eax
  int *v17; // eax
  _DWORD *v18; // eax
  _DWORD *v19; // eax
  int v21; // [esp+10h] [ebp-30h]
  int v22; // [esp+10h] [ebp-30h]
  int v23; // [esp+18h] [ebp-28h]
  int v24; // [esp+1Ch] [ebp-24h]
  int v25; // [esp+20h] [ebp-20h]
  int v26; // [esp+24h] [ebp-1Ch]
  int v27; // [esp+28h] [ebp-18h]
  int v28; // [esp+2Ch] [ebp-14h]
  int v29; // [esp+2Ch] [ebp-14h]
  int v30; // [esp+30h] [ebp-10h]
  _BYTE v31[12]; // [esp+34h] [ebp-Ch] BYREF

  v24 = *((_DWORD *)MEMORY[0x8871E0] + 1540); /*0x65b5a3*/
  v25 = *((_DWORD *)MEMORY[0x8871E0] + 1541); /*0x65b5a7*/
  *(_DWORD *)(this + 40) = MEMORY[0xA8ED84]; /*0x65b5ab*/
  *(_DWORD *)(this + 44) = v28; /*0x65b5b3*/
  *(_DWORD *)(this + 48) = v24; /*0x65b5b9*/
  *(_DWORD *)(this + 52) = MEMORY[0xA8ED84]; /*0x65b5c2*/
  *(_DWORD *)(this + 56) = v28; /*0x65b5c8*/
  *(_DWORD *)(this + 60) = v25; /*0x65b5cb*/
  v2 = (double *)MEMORY[0x8871E0]; /*0x65b5ce*/
  v3 = *((unsigned __int8 *)MEMORY[0x8871E0] + 6194); /*0x65b5e2*/
  v4 = *((unsigned __int8 *)MEMORY[0x8871E0] + 6193); /*0x65b5e8*/
  v5 = *((unsigned __int8 *)MEMORY[0x8871E0] + 6192); /*0x65b5f5*/
  if ( *((_DWORD *)MEMORY[0xA8B230] + 1174) == 1 ) /*0x65b5fb*/
  {
    v3 = -128; /*0x65b5fd*/
    v5 = -128; /*0x65b602*/
  }
  v21 = 1000 * v5 / 255; /*0x65b62a*/
  v6 = (double)*(int *)(this + 76) * *((double *)MEMORY[0x8871E0] + 772); /*0x65b63e*/
  v26 = *(_DWORD *)(this + 72); /*0x65b679*/
  v23 = 1000 * v3 / 255; /*0x65b684*/
  if ( v6 > 2000.0 ) /*0x65b68b*/
    v6 = 2000.0; /*0x65b68f*/
  v7 = Math::RoundToInt(v6); /*0x65b69e*/
  v8 = (double)v21 * v2[773]; /*0x65b6a0*/
  if ( v8 > 2000.0 ) /*0x65b6b3*/
    v8 = 2000.0; /*0x65b6b7*/
  v22 = Math::RoundToInt(v8); /*0x65b6c6*/
  v9 = (double)(1000 * v4 / 255) * v2[773]; /*0x65b6ca*/
  if ( v9 > 2000.0 ) /*0x65b6dd*/
    v9 = 2000.0; /*0x65b6e1*/
  v10 = Math::RoundToInt(v9); /*0x65b6f0*/
  v11 = (double)v23 * v2[773]; /*0x65b6f2*/
  if ( v11 > 2000.0 ) /*0x65b705*/
    v11 = 2000.0; /*0x65b709*/
  v12 = Math::RoundToInt(v11); /*0x65b70f*/
  v13 = *(_DWORD *)(this + 108); /*0x65b714*/
  v14 = v12; /*0x65b71b*/
  *(_DWORD *)(this + 88) = v22; /*0x65b71f*/
  *(_DWORD *)(this + 92) = v10; /*0x65b722*/
  *(_DWORD *)(this + 96) = v12; /*0x65b72a*/
  *(_DWORD *)(this + 84) = v7; /*0x65b72d*/
  *(_DWORD *)(this + 80) = v13 / v24; /*0x65b730*/
  v15 = v13 / v25; /*0x65b73a*/
  *(_DWORD *)(this + 100) = v15; /*0x65b741*/
  *(_DWORD *)(this + 104) = v7 / v15; /*0x65b749*/
  v16 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)(this + 64)); /*0x65b750*/
  v17 = (int *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)v16 + 72))(v16, v31); /*0x65b75e*/
  v27 = *v17; /*0x65b763*/
  v29 = v17[1]; /*0x65b76a*/
  v30 = v17[2]; /*0x65b776*/
  if ( *(_DWORD *)(this + 36) ) /*0x65b76e*/
  {
    TacticalClass::UpdateScrollTarget(v7, v22, v10, v14, 0); /*0x65b7e8*/
    return RadSiteClass::Radiate(this); /*0x65b7ef*/
  }
  else
  {
    v18 = __2_YAPAXI_Z(0x4Cu); /*0x65b77e*/
    if ( v18 ) /*0x65b788*/
      v19 = LightSourceClass::Construct(v18, v27, v29, v30, v26, v7, v22, v10, v14); /*0x65b7b2*/
    else
      v19 = 0; /*0x65b7b9*/
    *(_DWORD *)(this + 36) = v19; /*0x65b7bb*/
    v19[13] = 0; /*0x65b7be*/
    Trigger::EnableOnce(*(_BYTE **)(this + 36), 0); /*0x65b7ca*/
    return RadSiteClass::Radiate(this); /*0x65b7d1*/
  }
}
}
