// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_7011A0_e4.hpp"
#include "e4/classes/E4Recv_706BD0_e4.hpp"
#include "e4/classes/E4Recv_707280_e4.hpp"
#include "e4/classes/E4Recv_7087C0_e4.hpp"
#include "e4/classes/E4Recv_70DE20_e4.hpp"
#include "e4/classes/E4Recv_70E5A0_e4.hpp"
#include "e4/classes/E4Recv_70F1D0_e4.hpp"
#include "e4/classes/E4Recv_70F740_e4.hpp"
#include "e4/classes/E4Recv_70FE40_e4.hpp"
#include "e4/classes/E4Recv_70FE50_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Voxel_e4.hpp"

// 0x7049C0
namespace gamemd {
void DrawTacticalMapLine(FootClass * aP0, FootClass * aP1, int a3, int a4, int a5, int a6, int a7, char a8, char a9)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
        FootClass *aP0,
        FootClass *aP1,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        char a8,
        char a9)
{
  IUnknown *v12; // eax
  AbstractClass *v13; // eax
  IUnknown *v16; // eax
  AbstractClass *v17; // eax
  IUnknown *v21; // eax
  AbstractClass *v22; // eax
  IUnknown *v24; // eax
  AbstractClass *v25; // eax
  char result; // al
  AbstractClass aP2; // [esp+2Ch] [ebp-80h] BYREF
  int v30; // [esp+50h] [ebp-5Ch]
  int a2[9]; // [esp+54h] [ebp-58h] BYREF
  IUnknown *v42; // [esp+78h] [ebp-34h]
  int v33; // [esp+7Ch] [ebp-30h] BYREF
  int v34; // [esp+80h] [ebp-2Ch]
  int v35; // [esp+84h] [ebp-28h]
  int v36; // [esp+88h] [ebp-24h]
  _DWORD v37[4]; // [esp+8Ch] [ebp-20h] BYREF
  _DWORD v38[4]; // [esp+9Ch] [ebp-10h] BYREF

  Coord::To_Screen(*(_DWORD **)&stru_87C374[44976], &aP0, (IUnknown *)&aP2[8]); /*0x7049dc*/
  Coord::To_Screen(*(_DWORD **)&stru_87C374[44976], &a4, (IUnknown *)&aP2); /*0x7049f4*/
  int v9 = *(_DWORD *)&stru_87C374[44080]; /*0x7049fd*/
  char v10 = a9; /*0x704a07*/
  *(_DWORD *)&aP2[12] += *(_DWORD *)&stru_87C374[44080]; /*0x704a14*/
  *(_DWORD *)&aP2[4] += *(_DWORD *)&stru_87C374[44080]; /*0x704a1f*/
  aP2.referenceCount = *(_DWORD *)&aP2[12] + 1; /*0x704a23*/
  aP2.nextArrayIndex = *(_DWORD *)&aP2[8]; /*0x704a30*/
  aP2.uniqueId = *(_DWORD *)aP2[0]; /*0x704a36*/
  aP2.abstractFlags = *(_DWORD *)&aP2[4] + 1; /*0x704a3a*/
  if ( a9 ) /*0x704a43*/
  {
    if ( *(_DWORD *)(*(_DWORD *)&stru_87C374[13136] + 4) == 1 ) /*0x704a51*/
      int v11 = **(unsigned __int8 **)(*(_DWORD *)&stru_87C374[13136] + 372); /*0x704a5d*/
    else
      v11 = **(unsigned __int16 **)(*(_DWORD *)&stru_87C374[13136] + 372); /*0x704a69*/
    v30 = -2; /*0x704a77*/
    aP2.NeedsSaveOrLink = (void *)-2; /*0x704a89*/
    v12 = (IUnknown *)Coord2D::Add(&aP2.NeedsSaveOrLink, (AbstractClass *)a2, (AbstractClass *)&aP2.nextArrayIndex); /*0x704a8d*/
    v13 = Rect::Construct(v37, v12, (AbstractClass *)3, (AbstractClass *)3); /*0x704a97*/
    a2[6] = *(_DWORD *)v13->__pad_0; /*0x704aa0*/
    a2[7] = *(_DWORD *)&v13->__pad_0[4]; /*0x704aa9*/
    a2[8] = *(_DWORD *)&v13->__pad_0[8]; /*0x704ab0*/
    v42 = *(IUnknown **)&v13->__pad_0[12]; /*0x704ac2*/
    int * v14 = ClipRectIntersection((IUnknown *)v38, (IUnknown *)&stru_87C374[44076], (IUnknown *)&a2[6], 0, 0); /*0x704acc*/
    v33 = *v14; /*0x704ad4*/
    v34 = v14[1]; /*0x704adb*/
    v35 = v14[2]; /*0x704ae2*/
    v36 = v14[3]; /*0x704aef*/
    (*(void (__thiscall **)(_DWORD, int *, int))(**(_DWORD **)&stru_87C374[44968] + 20))( /*0x704afa*/
      *(_DWORD *)&stru_87C374[44968],
      &v33,
      v11);
    if ( *(_DWORD *)(*(_DWORD *)&stru_87C374[13136] + 4) == 1 ) /*0x704b05*/
      int v15 = **(unsigned __int8 **)(*(_DWORD *)&stru_87C374[13136] + 372); /*0x704b11*/
    else
      v15 = **(unsigned __int16 **)(*(_DWORD *)&stru_87C374[13136] + 372); /*0x704b1d*/
    aP2.NeedsSaveOrLink = (void *)-2; /*0x704b29*/
    v30 = -2; /*0x704b2d*/
    v16 = (IUnknown *)Coord2D::Add(&aP2.NeedsSaveOrLink, (AbstractClass *)a2, (AbstractClass *)&aP2.uniqueId); /*0x704b41*/
    v17 = Rect::Construct(v38, v16, (AbstractClass *)3, (AbstractClass *)3); /*0x704b4e*/
    v33 = *(_DWORD *)v17->__pad_0; /*0x704b57*/
    v34 = *(_DWORD *)&v17->__pad_0[4]; /*0x704b60*/
    v35 = *(_DWORD *)&v17->__pad_0[8]; /*0x704b6c*/
    v36 = *(_DWORD *)&v17->__pad_0[12]; /*0x704b7c*/
    int * v18 = ClipRectIntersection((IUnknown *)v37, (IUnknown *)&stru_87C374[44076], (IUnknown *)&v33, 0, 0); /*0x704b80*/
    a2[6] = *v18; /*0x704b88*/
    a2[7] = v18[1]; /*0x704b8f*/
    a2[8] = v18[2]; /*0x704b9c*/
    v42 = (IUnknown *)v18[3]; /*0x704ba3*/
    (*(void (__thiscall **)(_DWORD, int *, int))(**(_DWORD **)&stru_87C374[44968] + 20))( /*0x704bae*/
      *(_DWORD *)&stru_87C374[44968],
      &a2[6],
      v15);
    v9 = *(_DWORD *)&stru_87C374[44080]; /*0x704bb1*/
  }
  a2[3] = v9; /*0x704bc2*/
  a2[2] = *(_DWORD *)&stru_87C374[44076]; /*0x704bce*/
  a2[4] = *(_DWORD *)&stru_87C374[44084]; /*0x704bd2*/
  a2[5] = *(_DWORD *)&stru_87C374[44088]; /*0x704bd6*/
  if ( v10 && ClipLine((IUnknown *)&aP2.nextArrayIndex, &aP2.uniqueId, &a2[2]) ) /*0x704be9*/
  {
    if ( *(_DWORD *)(*(_DWORD *)&stru_87C374[13136] + 4) == 1 ) /*0x704bfa*/
      int v19 = **(unsigned __int8 **)(*(_DWORD *)&stru_87C374[13136] + 372); /*0x704c04*/
    else
      v19 = **(unsigned __int16 **)(*(_DWORD *)&stru_87C374[13136] + 372); /*0x704c10*/
    (*(void (__thiscall **)(_DWORD, int *, int *, int))(**(_DWORD **)&stru_87C374[44968] + 48))( /*0x704c26*/
      *(_DWORD *)&stru_87C374[44968],
      &aP2.nextArrayIndex,
      &aP2.uniqueId,
      v19);
  }
  int v20; // esi
  v20 = ((unsigned __int8)a7 >> stru_89E138[11420] << stru_89E138[11416]) /*0x704c89*/
      | (BYTE2(a7) >> stru_89E138[11428] << stru_89E138[11424])
      | (BYTE1(a7) >> stru_89E138[11436] << stru_89E138[11432]);
  aP2.NeedsSaveOrLink = (void *)-2; /*0x704c92*/
  v30 = -2; /*0x704c96*/
  v21 = (IUnknown *)Coord2D::Add(&aP2.NeedsSaveOrLink, (AbstractClass *)a2, (AbstractClass *)&aP2[8]); /*0x704ca4*/
  v22 = Rect::Construct(v38, v21, (AbstractClass *)3, (AbstractClass *)3); /*0x704cb1*/
  v33 = *(_DWORD *)v22->__pad_0; /*0x704cba*/
  v34 = *(_DWORD *)&v22->__pad_0[4]; /*0x704cc3*/
  v35 = *(_DWORD *)&v22->__pad_0[8]; /*0x704cca*/
  v36 = *(_DWORD *)&v22->__pad_0[12]; /*0x704cd9*/
  int * v23 = ClipRectIntersection((IUnknown *)v37, (IUnknown *)&stru_87C374[44076], (IUnknown *)&v33, 0, 0); /*0x704ce3*/
  a2[6] = *v23; /*0x704ceb*/
  a2[7] = v23[1]; /*0x704cf2*/
  a2[8] = v23[2]; /*0x704cf9*/
  v42 = (IUnknown *)v23[3]; /*0x704d06*/
  (*(void (__thiscall **)(_DWORD, int *, int))(**(_DWORD **)&stru_87C374[44968] + 20))( /*0x704d11*/
    *(_DWORD *)&stru_87C374[44968],
    &a2[6],
    v20);
  aP2.NeedsSaveOrLink = (void *)-2; /*0x704d1d*/
  v30 = -2; /*0x704d21*/
  v24 = (IUnknown *)Coord2D::Add(&aP2.NeedsSaveOrLink, (AbstractClass *)a2, &aP2); /*0x704d35*/
  v25 = Rect::Construct(v38, v24, (AbstractClass *)3, (AbstractClass *)3); /*0x704d42*/
  v33 = *(_DWORD *)v25->__pad_0; /*0x704d49*/
  v34 = *(_DWORD *)&v25->__pad_0[4]; /*0x704d52*/
  v35 = *(_DWORD *)&v25->__pad_0[8]; /*0x704d5f*/
  v36 = *(_DWORD *)&v25->__pad_0[12]; /*0x704d70*/
  int * v26 = ClipRectIntersection((IUnknown *)v37, (IUnknown *)&stru_87C374[44076], (IUnknown *)&v33, 0, 0); /*0x704d74*/
  a2[6] = *v26; /*0x704d7c*/
  a2[7] = v26[1]; /*0x704d83*/
  a2[8] = v26[2]; /*0x704d90*/
  v42 = (IUnknown *)v26[3]; /*0x704d97*/
  (*(void (__thiscall **)(_DWORD, int *, int))(**(_DWORD **)&stru_87C374[44968] + 20))( /*0x704da2*/
    *(_DWORD *)&stru_87C374[44968],
    &a2[6],
    v20);
  if ( a8 ) /*0x704dae*/
  {
    int v27 = (0x7FFFFFFF - *(_DWORD *)&HouseClass_Player[45112]) % 15; /*0x704dc9*/
    result = ClipLine((IUnknown *)&aP2[8], (int *)aP2[0], &a2[2]); /*0x704dd4*/
    if ( result ) /*0x704ddb*/
      return (*(char (__thiscall **)(_DWORD, char *, AbstractClass *, int, char *, int, _DWORD))(**(_DWORD **)&stru_87C374[44968] /*0x704df8*/
                                                                                               + 76))(
               *(_DWORD *)&stru_87C374[44968],
               &aP2[8],
               &aP2,
               v20,
               &stru_830620[76552],
               v27,
               0);
  }
  else
  {
    result = ClipLine((IUnknown *)&aP2[8], (int *)aP2[0], &a2[2]); /*0x704e14*/
    if ( result ) /*0x704e1b*/
      return (*(char (__thiscall **)(_DWORD, char *, AbstractClass *, int))(**(_DWORD **)&stru_87C374[44968] /*0x704e30*/
                                                                          + 48))(
               *(_DWORD *)&stru_87C374[44968],
               &aP2[8],
               &aP2,
               v20);
  }
  return result; /*0x704dfb*/
}
}
} // namespace gamemd

// 0x704E40
namespace gamemd {
void* DrawTacticalLaserLine()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// local variable allocation has failed, the output may be wrong!
{
  DWORD Time; // eax
  int result; // eax
  __int16 v19; // [esp+10h] [ebp-90h] BYREF
  unsigned __int8 v20; // [esp+12h] [ebp-8Eh]
  __int16 v26; // [esp+2Ch] [ebp-74h] BYREF
  v19 = 0; /*0x704e62*/
  v20 = 0; /*0x704e6c*/
  v26 = -1; /*0x704e71*/
  char v27 = -1; /*0x704e79*/
  int v24; // [esp+24h] [ebp-7Ch] BYREF
  Coord::To_Screen(g_TacticalClass_Instance, &a1, &v24); /*0x704e7d*/
  int v21; // [esp+18h] [ebp-88h] BYREF
  Coord::To_Screen(g_TacticalClass_Instance, &a4, &v21); /*0x704e95*/
  int v22; // [esp+1Ch] [ebp-84h]
  v22 += g_Map_VisibleRect; /*0x704ec3*/
  int v25; // [esp+28h] [ebp-78h]
  v25 += g_Map_VisibleRect; /*0x704ece*/
  int v29 = v25 - 2; /*0x704eeb*/
  int v28 = v24 - 2; /*0x704f13*/
  int v7; // esi
  v7 = ((unsigned __int8)a7 >> g_BitShift_Green_0 << g_DDraw_BlueMask) /*0x704f1e*/
     | (BYTE1(a7) >> g_BitMask_Blue << g_BitMask_Green)
     | (BYTE2(a7) >> g_BitShift_Blue << g_BitShift_Blue);
  _DWORD v45[4]; // [esp+80h] [ebp-20h] BYREF
  int * v8 = Rect::Construct(v45, &v28, 3, 3); /*0x704f25*/
  int v34 = *v8; /*0x704f2e*/
  int v35 = v8[1]; /*0x704f37*/
  int v36 = v8[2]; /*0x704f3e*/
  int v37 = v8[3]; /*0x704f50*/
  _DWORD v46[4]; // [esp+90h] [ebp-10h] BYREF
  int * v9 = ClipRectIntersection(v46, &DSurface_ViewBounds, &v34, 0, 0); /*0x704f5a*/
  int v30 = *v9; /*0x704f61*/
  int v31 = v9[1]; /*0x704f68*/
  int v32 = v9[2]; /*0x704f6f*/
  int v33 = v9[3]; /*0x704f7c*/
  (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)DSurface_Composite + 20))(DSurface_Composite, &v30, v7); /*0x704f88*/
  v29 = v22 - 2; /*0x704f9f*/
  v28 = v21 - 2; /*0x704fad*/
  int * v10 = Rect::Construct(v46, &v28, 3, 3); /*0x704fb1*/
  v30 = *v10; /*0x704fba*/
  v31 = v10[1]; /*0x704fc3*/
  v32 = v10[2]; /*0x704fca*/
  v33 = v10[3]; /*0x704fdc*/
  int * v11 = ClipRectIntersection(v45, &DSurface_ViewBounds, &v30, 0, 0); /*0x704fe6*/
  v34 = *v11; /*0x704fee*/
  v35 = v11[1]; /*0x704ff5*/
  v36 = v11[2]; /*0x704ffc*/
  v37 = v11[3]; /*0x705009*/
  (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)DSurface_Composite + 20))(DSurface_Composite, &v34, v7); /*0x705014*/
  int v44[4]; // [esp+70h] [ebp-30h] BYREF
  v44[0] = DSurface_ViewBounds; /*0x705028*/
  v44[1] = g_Map_VisibleRect; /*0x705031*/
  v44[2] = g_Map_VisibleRectOffset; /*0x705035*/
  v44[3] = g_DSurface_WindowOffset; /*0x705039*/
  Time = timeGetTime(); /*0x70503d*/
  int v13 = a1; /*0x70504a*/
  int v42 = a2; /*0x705054*/
  int v14 = 1; /*0x70505f*/
  int v15 = 31; /*0x705064*/
  int v23 = 1; /*0x70506c*/
  int v41 = a1; /*0x705070*/
  int v43 = a3; /*0x705074*/
  int v16 = 8; /*0x705078*/
  v28 = 8 * (Time >> 4); /*0x70507d*/
  while ( 1 ) /*0x7050b0*/
  {
    int v38 = (v15 * v13 + v14 * a4) / 32; /*0x7050b0*/
    int v39 = (v14 * a5 + v15 * a2) / 32; /*0x7050d3*/
    double v17 = ((double)v23 - 16.0) * 0.0625; /*0x7050f2*/
    v23 = (v14 * a6 + v15 * a3) / 32; /*0x7050f8*/
    int v40 = Math::RoundToInt(v17); /*0x705119*/
    Coord::To_Screen(g_TacticalClass_Instance, &v41, &v24); /*0x70512f*/
    Coord::To_Screen(g_TacticalClass_Instance, &v38, &v21); /*0x705144*/
    v25 += g_Map_VisibleRect; /*0x705158*/
    v22 += g_Map_VisibleRect; /*0x70516b*/
    if ( ClipLine(&v24, &v21, v44) ) /*0x70516f*/
    {
      v20 = BYTE2(a7); /*0x70518f*/
      v19 = a7; /*0x705195*/
      if ( (((_WORD)v16 - (_WORD)v28) & 0x1F8u) <= 0xF8 && (((_WORD)v16 - (_WORD)v28) & 0x1F8) != 0 ) /*0x7051aa*/
        Color::Lerp((unsigned __int8 *)&v19, (v16 - v28) & 0xF8, (unsigned __int8 *)&v26); /*0x7051b6*/
      (*(void (__thiscall **)(int, int *, int *, int))(*(_DWORD *)DSurface_Composite + 48))( /*0x705226*/
        DSurface_Composite,
        &v24,
        &v21,
        ((unsigned __int8)v19 >> g_BitShift_Green_0 << g_DDraw_BlueMask)
      | (HIBYTE(v19) >> g_BitMask_Blue << g_BitMask_Green)
      | (v20 >> g_BitShift_Blue << g_BitShift_Blue));
    }
    result = v38; /*0x705229*/
    ++v14; /*0x705235*/
    v16 += 8; /*0x705236*/
    --v15; /*0x705239*/
    v23 = v14; /*0x705240*/
    v41 = v38; /*0x705244*/
    v42 = v39; /*0x705248*/
    v43 = v40; /*0x70524c*/
    if ( v16 > 256 ) /*0x705250*/
      break; /*0x705250*/
    v13 = a1; /*0x705083*/
  }
  return result; /*0x705256*/
}
}
} // namespace gamemd

// 0x706ED0
namespace gamemd {
void * TechnoClass_RenderVoxel(int * a1, int a2, void * a3, unsigned int * a4, const void * a5, int a6, int * a7, unsigned int a8, int a9, int a10, int a11)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int v19; // ebx
  _DWORD *v20; // edi
  __int16 v21; // ax
  struct IPersistStreamVtbl *lpVtbl; // esi
  unsigned int v24; // ebx
  _DWORD *v25; // esi
  int v26; // edx
  int v29; // ecx
  int v30; // edx
  int *v31; // eax
  int *SHPFrame; // [esp-18h] [ebp-154h]
  int v34; // [esp-14h] [ebp-150h]
  int v35; // [esp-10h] [ebp-14Ch]
  int v36; // [esp-4h] [ebp-140h]
  _DWORD *v37; // [esp+10h] [ebp-12Ch] BYREF
  int v38; // [esp+14h] [ebp-128h]
  int v41; // [esp+20h] [ebp-11Ch] BYREF
  int v42; // [esp+24h] [ebp-118h]
  int v43; // [esp+28h] [ebp-114h]
  int v44; // [esp+2Ch] [ebp-110h]
  _DWORD *v45; // [esp+30h] [ebp-10Ch]
  _DWORD v46[6]; // [esp+34h] [ebp-108h] BYREF
  float v47[12]; // [esp+4Ch] [ebp-F0h] BYREF
  float v48[12]; // [esp+7Ch] [ebp-C0h] BYREF
  int v49[12]; // [esp+ACh] [ebp-90h] BYREF

  qmemcpy(v48, a5, sizeof(v48)); /*0x706eeb*/
  int v12 = *a1; /*0x706ef4*/
  qmemcpy(v49, a5, sizeof(v49)); /*0x706efe*/
  if ( *(_BYTE *)((*(int (__thiscall **)(int *))(v12 + 132))(a1) + 3500) ) /*0x706f08*/
    dword_B43180 = 1; /*0x706f12*/
  _DWORD * v14 = (_DWORD *)a4[1]; /*0x706f36*/
  v45 = (_DWORD *)*a4; /*0x706f45*/
  _DWORD * v13 = v45; /*0x706f34*/
  v37 = v14; /*0x706f49*/
  Audio_Render(0, (int)v49, (int)DataGlobal_887430, (int)&DataGlobal_887470, 3.0); /*0x706f4d*/
  Viewport::Clear(); /*0x706f52*/
  unsigned int v15 = 0; /*0x706f5a*/
  if ( v45[1] ) /*0x706f57*/
  {
    do /*0x706fe5*/
    {
      if ( v14 ) /*0x706f66*/
      {
        qmemcpy(v47, (const void *)(v14[3] + 48 * (v15 + v14[1] * (a8 % v14[2]))), sizeof(v47)); /*0x706f92*/
  float v50[12]; // [esp+DCh] [ebp-60h] BYREF
        qmemcpy(v48, MultiplyMatrix3x4(v50, (float *)v49, v47), sizeof(v48)); /*0x706fb3*/
        v13 = v45; /*0x706fb5*/
        v14 = v37; /*0x706fb9*/
      }
  float v51[12]; // [esp+10Ch] [ebp-30h] BYREF
      float * v16 = MultiplyMatrix3x4(v51, DataGlobal_887430, v48); /*0x706fce*/
      TransformVoxelVertex(v13, v15++, 0, v16); /*0x706fda*/
    }
    while ( v15 < v13[1] ); /*0x706fe5*/
  }
  float * v17 = Voxel::RenderFrame(v47); /*0x706fef*/
  int v18 = *a1; /*0x706ff4*/
  qmemcpy(v46, v17, sizeof(v46)); /*0x707002*/
  if ( (*(unsigned __int8 (__thiscall **)(int *))(v18 + 468))(a1)
    || (*(unsigned __int8 (__thiscall **)(int *))(*a1 + 472))(a1) )
  {
    if ( a1
      && (*(int (__thiscall **)(int *))(*a1 + 44))(a1) == 6
      && *(_BYTE *)(*((*(int (__thiscall **)(int *))(*a1 + 44))(a1) == 6 ? a1 + 328 : (int *)1312) + 5809) )
    {
      v19 = a9 | 6; /*0x70705a*/
    }
    else
    {
      v19 = a9 | 4; /*0x707066*/
    }
  }
  else
  {
    v19 = a9; /*0x70706b*/
  }
  if ( (unsigned __int8)House::IsHumanPlayer((#375 *)a1[135]) /*0x707086*/
    && (*(unsigned __int8 (__thiscall **)(int *))(*a1 + 196))(a1) )
  {
    v19 = (*(int (__thiscall **)(int *, int))(*a1 + 1084))(a1, v19); /*0x70709c*/
  }
  v20 = (_DWORD *)a6; /*0x7070a5*/
  v41 = *a7; /*0x7070ae*/
  v42 = a7[1]; /*0x7070b5*/
  v43 = a7[2]; /*0x7070bc*/
  v44 = a7[3]; /*0x7070c9*/
  if ( g_DSurface_Hidden_2 != dword_B1D13C ) /*0x7070d4*/
  {
    v21 = *((_WORD *)a1 + 485); /*0x7070da*/
    if ( v21 <= 0 ) /*0x7070e6*/
    {
      if ( *((_BYTE *)a1 + 973) ) /*0x707140*/
        *((_WORD *)a1 + 485) = LOWORD(v46[5]) /*0x707166*/
                             + LOWORD(v46[1])
                             + *(_WORD *)(a6 + 4)
                             + LOWORD(g_TacticalClass_Instance[45].__tail_0);
    }
    else
    {
      lpVtbl = g_TacticalClass_Instance[45].__tail_0; /*0x7070f2*/
      v37 = 0; /*0x707100*/
      int v40 = v21 - (_DWORD)lpVtbl; /*0x707104*/
      v38 = 0; /*0x70710c*/
      int v39 = g_Map_VisibleRectOffset; /*0x707110*/
      int * v23 = ClipRectIntersection(v47, &v41, (int *)&v37, 0, 0); /*0x70711e*/
      v41 = *v23; /*0x707125*/
      v42 = v23[1]; /*0x70712c*/
      v43 = v23[2]; /*0x707133*/
      v44 = v23[3]; /*0x70713a*/
    }
  }
  v24 = v19 & 0xFFFFFFEF; /*0x707172*/
  if ( (*(int (__thiscall **)(int *))(*a1 + 44))(a1) == 1 && *((_BYTE *)a1 + 1747) ) /*0x70717d*/
    v25 = (_DWORD *)unk_B1D140; /*0x707187*/
  else
    v25 = (_DWORD *)(*(int (__thiscall **)(int *))(*a1 + 484))(a1); /*0x70719a*/
  v26 = 0; /*0x70719c*/
  if ( (v24 & 8) != 0 ) /*0x7071a1*/
  {
    int v27 = (*(int (__stdcall **)(int *))(a1[1] + 16))(a1 + 1); /*0x7071b3*/
    int v28 = v27 + Math::RoundToInt(*((float *)a1 + 147)); /*0x7071ba*/
    v20 = (_DWORD *)a6; /*0x7071bc*/
    v26 = v28 % 400; /*0x7071c9*/
  }
  v29 = v20[1]; /*0x7071d3*/
  v36 = v26; /*0x7071da*/
  v37 = (_DWORD *)(v46[0] + *v20); /*0x7071e4*/
  v30 = *a1; /*0x7071f0*/
  v38 = v46[1] + v29; /*0x7071f3*/
  v35 = (*(int (__thiscall **)(int *))(v30 + 752))(a1); /*0x707200*/
  v34 = (*(int (__thiscall **)(int *))(*a1 + 748))(a1); /*0x70720c*/
  SHPFrame = (int *)BuildingClass::GetSHPFrame(v25, v24); /*0x707215*/
  v31 = Miles::DriverGet(); /*0x707227*/
  BlitterDrawSHP( /*0x707235*/
    (int *)g_DSurface_Hidden_2,
    (int)v25,
    v31,
    &v46[2],
    (int *)&v37,
    &v41,
    0,
    SHPFrame,
    v34,
    v35,
    a10,
    a11,
    v36);
  if ( *(_BYTE *)((*(int (__thiscall **)(int *))(*a1 + 132))(a1) + 3500) ) /*0x707245*/
    dword_B43180 = 0; /*0x70724f*/
  qmemcpy(a3, v46, 0x18u); /*0x70726b*/
  return a3; /*0x70726d*/
}
}
} // namespace gamemd

// 0x709550
namespace gamemd {
AbstractClass * __usercall SelectTargetByWeight(unsigned int *a1@<ecx> a1, int a2@<esi> a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int i; // edx
  int k; // eax
  int j; // [esp+10h] [ebp-38h]
  void **v29; // [esp+18h] [ebp-30h] BYREF
  void *Block; // [esp+1Ch] [ebp-2Ch]
  void **v35; // [esp+30h] [ebp-18h] BYREF

  if ( a1[282] ) /*0x709559*/
  {
  char v38; // [esp+3Dh] [ebp-Bh]
  void *v36; // [esp+34h] [ebp-14h]
  int v32; // [esp+24h] [ebp-24h]
  int v31; // [esp+20h] [ebp-28h]
    for ( i = a1[288] - 1; i >= 0; --i ) /*0x70957f*/
    {
      int v4 = 0; /*0x709587*/
      int v5 = a1[282]; /*0x70958c*/
      if ( v5 <= 0 ) /*0x709594*/
      {
LABEL_8:
        int v7 = a1[288]; /*0x7095a8*/
        if ( i < v7 ) /*0x7095b0*/
        {
          int v8 = v7 - 1; /*0x7095b2*/
          int v9 = i; /*0x7095b5*/
          for ( a1[288] = v8; v9 < a1[288]; *(_DWORD *)(a1[285] + 4 * v9 - 4) = *(_DWORD *)(a1[285] + 4 * v9) ) /*0x7095bf*/
            ++v9; /*0x7095c7*/
        }
      }
      else
      {
        _DWORD * v6 = (_DWORD *)a1[279]; /*0x709596*/
        while ( *(_DWORD *)(a1[285] + 4 * i) != *v6 ) /*0x70959e*/
        {
          ++v4; /*0x7095a0*/
          ++v6; /*0x7095a1*/
          if ( v4 >= v5 ) /*0x7095a6*/
            goto LABEL_8; /*0x7095a6*/
        }
      }
    }
    AbstractClassVector::Construct(&v35, 0, 0); /*0x7095e2*/
    v35 = &vt_DynamicVectorClass_AbstractClass; /*0x7095f2*/
    int v40 = 10; /*0x7095fa*/
    int v39 = 0; /*0x7095fe*/
    VectorClass::Construct(&v29, 0, 0); /*0x709602*/
    int v10 = a1[288]; /*0x709607*/
    v29 = &vt_DynamicVectorClass_int; /*0x70960d*/
    int v34 = 10; /*0x709617*/
    int v33 = 0; /*0x70961b*/
    if ( v10 > 0 ) /*0x70961f*/
    {
      int v11 = 0; /*0x70962b*/
      int v28 = a1[282]; /*0x70962f*/
      for ( j = 0; j < v28; ++j ) /*0x709637*/
      {
        int v12 = 4 * v11; /*0x709643*/
        int v13 = 0; /*0x70964a*/
        int v14 = *(_DWORD *)(a1[279] + v12); /*0x70964c*/
        _DWORD * v15 = (_DWORD *)a1[285]; /*0x709653*/
        while ( v14 != *v15 ) /*0x70965b*/
        {
          ++v13; /*0x709661*/
          ++v15; /*0x709662*/
          if ( v13 >= v10 ) /*0x709667*/
          {
  int v37; // [esp+38h] [ebp-10h]
            if ( v39 < v37 /*0x709696*/
              || (v38 || !v37)
              && v40 > 0
              && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v35[2])(&v35, v40 + v37, 0) )
            {
              int v16 = v39++; /*0x7096a1*/
              *((_DWORD *)v36 + v16) = v14; /*0x7096ac*/
            }
            _DWORD * v17 = (_DWORD *)(v12 + a1[273]); /*0x7096bd*/
            if ( v33 < v31 /*0x7096e4*/
              || (BYTE1(v32) || !v31)
              && v34 > 0
              && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v29[2])(&v29, v34 + v31, 0) )
            {
              int v18 = v33++; /*0x7096f3*/
              *((_DWORD *)Block + v18) = *v17; /*0x7096fc*/
            }
            break; /*0x7096fc*/
          }
        }
        v11 = j + 1; /*0x7096ff*/
      }
    }
    if ( v39 ) /*0x70971a*/
    {
      int v23 = 0; /*0x709765*/
      int v24 = 0; /*0x709767*/
      for ( k = 0; k < v39; ++k ) /*0x70976d*/
      {
        if ( *((_DWORD *)Block + k) > v23 ) /*0x70977c*/
        {
          v24 = *((_DWORD *)v36 + k); /*0x70977e*/
          v23 = *((_DWORD *)Block + k); /*0x709782*/
        }
      }
      (*(void (__thiscall **)(_DWORD *, int))(*a1 + 968))(a1, v24); /*0x709792*/
    }
    else
    {
      (*(void (__thiscall **)(_DWORD *, int))(a1[284] + 12))(a1 + 284, a2); /*0x709728*/
      int v19 = a1[282]; /*0x70972b*/
      int v20 = 0; /*0x709731*/
      int v21 = 0; /*0x709735*/
      if ( v19 > 0 ) /*0x709739*/
      {
        int v22 = a1[273]; /*0x70973b*/
        do /*0x709756*/
        {
          if ( *(_DWORD *)(v22 + 4 * v21) > v20 ) /*0x709746*/
            v20 = *(_DWORD *)(v22 + 4 * v21); /*0x709748*/
          ++v21; /*0x709753*/
        }
        while ( v21 < v19 ); /*0x709756*/
      }
      (*(void (__thiscall **)(_DWORD *))(*a1 + 968))(a1); /*0x70975d*/
    }
    v29 = &vt_VectorClass_int; /*0x7097a0*/
    if ( Block && BYTE1(v32) ) /*0x7097b0*/
    {
      __3_YAXPAX_Z(Block); /*0x7097b3*/
      Block = 0; /*0x7097bb*/
    }
    v31 = 0; /*0x7097c3*/
    BYTE1(v32) = 0; /*0x7097ca*/
    v35 = &vt_VectorClass_AbstractClass; /*0x7097cf*/
    if ( v36 ) /*0x7097d8*/
    {
      if ( v38 ) /*0x7097e0*/
        __3_YAXPAX_Z(v36); /*0x7097e3*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *))(a1[284] + 12))(a1 + 284); /*0x70956d*/
  }
}
}
} // namespace gamemd

// 0x70E920
namespace gamemd {
void UpdateTimedStateMachine(int * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  if ( a1
    && (*(int (__thiscall **)(int *))(*a1 + 44))(a1) == 6
    && a1[165]
    && *(_DWORD *)(a1[165] + 80) == ((*(int (__thiscall **)(int *))(*a1 + 44))(a1) == 6 ? (unsigned int)a1 : 0) )
  {
    switch ( a1[112] ) /*0x70e97d*/
    {
      case 0: /*0x70e97d*/
        a1[112] = 1; /*0x70e988*/
        _DWORD * v2 = a1 + 109; /*0x70e997*/
        *v2 = g_CurrentFrame; /*0x70e9a3*/
        int v21 = v21; /*0x70e9a5*/
        v2[2] = 6; /*0x70e9a8*/
        return; /*0x70e9af*/
      case 1: /*0x70e97d*/
        int v3 = a1[109]; /*0x70e9b0*/
        int v4 = a1[111]; /*0x70e9b6*/
        if ( v3 == -1 ) /*0x70e9c5*/
          goto LABEL_10; /*0x70e9c5*/
        if ( (int)g_CurrentFrame - v3 >= v4 ) /*0x70e9d1*/
          goto LABEL_11; /*0x70e9d1*/
        v4 -= (int)g_CurrentFrame - v3; /*0x70e9d3*/
LABEL_10:
        if ( !v4 ) /*0x70e9d7*/
        {
LABEL_11:
          a1[112] = 2; /*0x70e9dd*/
          a1[109] = (int)g_CurrentFrame; /*0x70e9ed*/
          a1[110] = v21; /*0x70e9f8*/
          a1[111] = 4; /*0x70e9fc*/
        }
        break; /*0x70ea03*/
      case 2: /*0x70e97d*/
        int v5 = a1[109]; /*0x70ea04*/
        int v6 = a1[111]; /*0x70ea0a*/
        if ( v5 == -1 ) /*0x70ea19*/
          goto LABEL_15; /*0x70ea19*/
        if ( (int)g_CurrentFrame - v5 >= v6 ) /*0x70ea25*/
          goto LABEL_16; /*0x70ea25*/
        v6 -= (int)g_CurrentFrame - v5; /*0x70ea27*/
LABEL_15:
        if ( !v6 ) /*0x70ea2b*/
        {
LABEL_16:
          a1[112] = 3; /*0x70ea31*/
          int v7 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, -5, 5); /*0x70ea4b*/
          a1[109] = (int)g_CurrentFrame; /*0x70ea59*/
          a1[110] = v21; /*0x70ea5f*/
          a1[111] = v7 + 20; /*0x70ea62*/
        }
        break; /*0x70ea6a*/
      case 3: /*0x70e97d*/
        int v8 = a1[109]; /*0x70ea6b*/
        int v9 = a1[111]; /*0x70ea71*/
        if ( v8 == -1 ) /*0x70ea80*/
          goto LABEL_20; /*0x70ea80*/
        if ( (int)g_CurrentFrame - v8 >= v9 ) /*0x70ea8c*/
          goto LABEL_21; /*0x70ea8c*/
        v9 -= (int)g_CurrentFrame - v8; /*0x70ea8e*/
LABEL_20:
        if ( !v9 ) /*0x70ea92*/
        {
LABEL_21:
          a1[112] = 4; /*0x70ea98*/
          a1[109] = (int)g_CurrentFrame; /*0x70eaa8*/
          a1[110] = v21; /*0x70eab3*/
          a1[111] = 64; /*0x70eab7*/
        }
        break; /*0x70eabe*/
      case 4: /*0x70e97d*/
        int v10 = a1[109]; /*0x70eabf*/
        int v11 = a1[111]; /*0x70eac5*/
        if ( v10 == -1 ) /*0x70ead4*/
          goto LABEL_25; /*0x70ead4*/
        if ( (int)g_CurrentFrame - v10 >= v11 ) /*0x70eae0*/
          goto LABEL_26; /*0x70eae0*/
        v11 -= (int)g_CurrentFrame - v10; /*0x70eae2*/
LABEL_25:
        if ( !v11 ) /*0x70eae6*/
        {
LABEL_26:
          a1[112] = 5; /*0x70eaec*/
          a1[109] = (int)g_CurrentFrame; /*0x70eafc*/
          a1[110] = v21; /*0x70eb07*/
          a1[111] = 64; /*0x70eb0b*/
        }
        break; /*0x70eb12*/
      case 5: /*0x70e97d*/
        int v12 = a1[109]; /*0x70eb13*/
        int v13 = a1[111]; /*0x70eb19*/
        if ( v12 == -1 ) /*0x70eb28*/
          goto LABEL_30; /*0x70eb28*/
        if ( (int)g_CurrentFrame - v12 >= v13 ) /*0x70eb34*/
          goto LABEL_31; /*0x70eb34*/
        v13 -= (int)g_CurrentFrame - v12; /*0x70eb36*/
LABEL_30:
        if ( !v13 ) /*0x70eb3a*/
        {
LABEL_31:
          if ( Timeout::GetRemaining(a1 + 106) >= 158 ) /*0x70eb50*/
          {
            a1[112] = 4; /*0x70eb66*/
            a1[109] = (int)g_CurrentFrame; /*0x70eb7a*/
            a1[110] = v21; /*0x70eb7c*/
            a1[111] = 64; /*0x70eb7f*/
          }
          else
          {
            a1[112] = 6; /*0x70eb52*/
          }
        }
        break; /*0x70eb61*/
      case 6: /*0x70e97d*/
        if ( Timeout::GetRemaining(a1 + 106) <= 30 ) /*0x70eb96*/
        {
          a1[112] = 7; /*0x70eb9c*/
          _DWORD * v14 = a1 + 109; /*0x70ebab*/
          *v14 = g_CurrentFrame; /*0x70ebb7*/
          v14[1] = v21; /*0x70ebbd*/
          v14[2] = 6; /*0x70ebc0*/
        }
        return; /*0x70ebc7*/
      case 7: /*0x70e97d*/
        int v15 = a1[109]; /*0x70ebc8*/
        int v16 = a1[111]; /*0x70ebce*/
        if ( v15 == -1 ) /*0x70ebdd*/
          goto LABEL_39; /*0x70ebdd*/
        if ( (int)g_CurrentFrame - v15 >= v16 ) /*0x70ebe9*/
          goto LABEL_40; /*0x70ebe9*/
        v16 -= (int)g_CurrentFrame - v15; /*0x70ebeb*/
LABEL_39:
        if ( !v16 ) /*0x70ebef*/
        {
LABEL_40:
          a1[112] = 8; /*0x70ebf5*/
          a1[109] = (int)g_CurrentFrame; /*0x70ec05*/
          a1[110] = v21; /*0x70ec10*/
          a1[111] = 4; /*0x70ec14*/
        }
        break; /*0x70ec1b*/
      case 8: /*0x70e97d*/
        int v17 = a1[109]; /*0x70ec1c*/
        int v18 = a1[111]; /*0x70ec22*/
        if ( v17 == -1 ) /*0x70ec31*/
          goto LABEL_44; /*0x70ec31*/
        if ( (int)g_CurrentFrame - v17 >= v18 ) /*0x70ec3d*/
          goto LABEL_45; /*0x70ec3d*/
        v18 -= (int)g_CurrentFrame - v17; /*0x70ec3f*/
LABEL_44:
        if ( !v18 ) /*0x70ec43*/
        {
LABEL_45:
          a1[112] = 9; /*0x70ec45*/
          a1[109] = (int)g_CurrentFrame; /*0x70ec55*/
          a1[110] = v21; /*0x70ec60*/
          a1[111] = 20; /*0x70ec64*/
        }
        break; /*0x70ec6b*/
      case 9: /*0x70e97d*/
        int v19 = a1[109]; /*0x70ec6c*/
        int v20 = a1[111]; /*0x70ec72*/
        if ( v19 != -1 ) /*0x70ec7b*/
        {
          if ( (int)g_CurrentFrame - v19 >= v20 ) /*0x70ec87*/
            goto LABEL_50; /*0x70ec87*/
          v20 -= (int)g_CurrentFrame - v19; /*0x70ec89*/
        }
        if ( !v20 ) /*0x70ec8d*/
          goto LABEL_50; /*0x70ec8d*/
        return; /*0x70ec8d*/
      default:
LABEL_50:
        a1[112] = 10; /*0x70ec8f*/
        return; /*0x70ec9e*/
    }
  }
  else
  {
    a1[112] = 0; /*0x70ec9f*/
  }
}
}
} // namespace gamemd

// 0x70F120
namespace gamemd {
unsigned long long TechnoClass_RevealRadarEvent(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  DWORD Ticks; // eax
  DWORD result; // eax
  #375 *v7; // [esp-1Ch] [ebp-2Ch]
  int v9; // [esp+8h] [ebp-8h]

  if ( a1 && a2 ) /*0x70f12c*/
  {
    DataGlobal_B0EB3C = a2; /*0x70f134*/
    DataGlobal_B0EB38 = a1; /*0x70f13a*/
    int v3 = *((_DWORD *)g_RulesClass_Instance + 1536); /*0x70f140*/
    Ticks = Timer::GetTicks(); /*0x70f14a*/
    DataGlobal_B0EA74 = v9; /*0x70f161*/
    v7 = HouseClass_Player; /*0x70f169*/
    DataGlobal_B0EA70 = Ticks; /*0x70f16e*/
    DataGlobal_B0EA78 = v3; /*0x70f173*/
  _BYTE v8[4]; // [esp+4h] [ebp-Ch] BYREF
    int v5 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 72))(a1, v8); /*0x70f180*/
    return MapClass::RevealArea0(v5, 2, v7, 0, 0, 0, 1, 1); /*0x70f189*/
  }
  else
  {
    DataGlobal_B0EB3C = 0; /*0x70f198*/
    DataGlobal_B0EB38 = 0; /*0x70f1a2*/
    result = Timer::GetTicks(); /*0x70f1ac*/
    DataGlobal_B0EA70 = result; /*0x70f1b7*/
    DataGlobal_B0EA74 = v9; /*0x70f1bc*/
    DataGlobal_B0EA78 = 0; /*0x70f1c2*/
  }
  return result; /*0x70f18f*/
}
}
} // namespace gamemd

// 0x7011A0
namespace gamemd {
int E4Recv_7011A0::sub_7011A0()
{
{
    int v3;
    int v4;
    int v5;
    int *v6;
    char *v7;
    int v8;
    double v9;
    int v10;
    int v11;
    int v12;
    int v13;
    double v14;
    char v15[12];
    if ( this->Vf84() )
    return 0;
    v3 = g_RulesClass_Instance[1].?[11];
    if ( !v3 )
    return 0;
    v4 = g_RulesClass_Instance[1].?[0];
    v5 = *(void**)this;
    LODWORD(v14) = g_RulesClass_Instance[1].?[13];
    HIDWORD(v14) = v4;
    v6 = (int *)(*(int (__thiscall **)(int *, char *))(v5 + 72))(this, v15);
    LOWORD(v12) = *v6 / 256;
    HIWORD(v12) = v6[1] / 256;
    v13 = v12;
    v7 = (char *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&v13);
    v8 = ScenarioClass::CalcMinShroudLevel(&DataGlobal_87F7E8);
    v9 = (double)((v7[283] - v8) / v3) * v14;
    if ( v9 >= *(double *)&g_RulesClass_Instance[1].?[1] )
    v9 = *(double *)&g_RulesClass_Instance[1].?[1];
    v10 = DataGlobal_B0EB34 * v7[283];
    v11 = Math::RoundToInt(v9);
    Math::Sqrt((double)(v10 * v10 + (v11 << 8) * (v11 << 8)));
    return Math::RoundToInt(v9);
}
}
} // namespace gamemd

// 0x70D180
namespace gamemd {
void GlobalFlag_Set(char a1)
{
{
    DataGlobal_843108 = a1;
}
}
} // namespace gamemd

// 0x70DE20
namespace gamemd {
int E4Recv_70DE20::sub_70DE20(int a2)
{
{
    this->M324 += a2;
    return a2;
}
}
} // namespace gamemd

// 0x70F740
namespace gamemd {
int E4Recv_70F740::sub_70F740(int a2)
{
{
    int *v2;
    int v4;
    v2 = this + 96;
    *v2 = g_CurrentFrame;
    v2[1] = v4;
    v2[2] = a2;
    return v4;
}
}
} // namespace gamemd

// 0x70FE40
namespace gamemd {
int E4Recv_70FE40::sub_70FE40(int a2)
{
{
    this->M464 = a2;
    return a2;
}
}
} // namespace gamemd

// 0x70FE50
namespace gamemd {
int E4Recv_70FE50::sub_70FE50()
{
{
    int v2;
    int result;
    v2 = this->M468;
    if ( v2 )
  {
    (*(void (__thiscall **)(int))(*(int *)(v2) + 248))(v2);
    this->M468 = 0;
  }
    result = this->M460;
    if ( result )
  {
    *(int *)(result + 464) = 0;
    result = *(int *)(this->M460 + 540);
    if ( result )
    *(char *)(result + 22392) = 1;
    this->M460 = 0;
  }
    return result;
}
}
} // namespace gamemd
