// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/DroppodLocomotionClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/DropPodLocomotionClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Object_e4.hpp"

// 0x4B5B70
namespace gamemd {
int DroppodLocomotionClass::ILoco_Process(int a1)
{
{
  double v4; // st7
  ObjectClass *v5; // rax
  double v6; // st7
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int *v10; // esi
  void **v13; // esi
  void **v16; // eax
  void **v17; // eax
  void **v18; // eax
  _DWORD *VeteranRatio_high; // esi
  void **v20; // ebp
  int Index; // eax
  int ClosestObjectCell; // eax
  void **v27; // edi
  void *WarheadVersusMultiplier; // eax
  __int64 VeteranSpeed; // [esp-8h] [ebp-48h]
  double v32; // [esp+10h] [ebp-30h] BYREF
  int v33[2]; // [esp+1Ch] [ebp-24h] BYREF
  int v35; // [esp+28h] [ebp-18h] BYREF
  int v36; // [esp+2Ch] [ebp-14h]
  TechnoClass *v37; // [esp+30h] [ebp-10h]
  int v38[3]; // [esp+34h] [ebp-Ch] BYREF
  int VeteranCombat_high; // [esp+44h] [ebp+4h]

  int * v2 = *(int **)(a1 + 8); /*0x4b5b7b*/
  v35 = v2[39]; /*0x4b5b88*/
  v36 = v2[40]; /*0x4b5b8f*/
  TechnoClass *v3 = v2[41]; /*0x4b5b93*/
  v38[0] = v35; /*0x4b5b96*/
  v37 = v3; /*0x4b5b9a*/
  v38[1] = v36; /*0x4b5b9e*/
  v38[2] = v3; /*0x4b5ba2*/
  VeteranCombat_high = (*(int (__thiscall **)(int *))(*v2 + 456))(v2) / 10 + 2; /*0x4b5bc9*/
  if ( SHIDWORD(g_RulesClass_Instance->DropPodHeight) > VeteranCombat_high ) /*0x4b5bd5*/
    VeteranCombat_high = HIDWORD(g_RulesClass_Instance->DropPodHeight); /*0x4b5bd7*/
  VeteranSpeed = g_RulesClass_Instance->DropPodAngle; /*0x4b5bf3*/
  if ( *(_BYTE *)(a1 + 24) ) /*0x4b5bdb*/
  {
    v32 = (double)VeteranCombat_high; /*0x4b5bf4*/
    v4 = Math::ArcTan2(*(double *)&VeteranSpeed) * v32 + (double)v35; /*0x4b5c04*/
  }
  else
  {
    *(double *)v33 = (double)v35; /*0x4b5c1c*/
    v32 = (double)VeteranCombat_high; /*0x4b5c24*/
    v4 = *(double *)v33 - Math::ArcTan2(*(double *)&VeteranSpeed) * v32; /*0x4b5c34*/
  }
  v35 = Math::RoundToInt(v4); /*0x4b5c41*/
  v5 = g_RulesClass_Instance->DropPodAngle; /*0x4b5c50*/
  *(double *)v33 = (double)v37; /*0x4b5c56*/
  v6 = Math::SinCos(*(double *)&v5); /*0x4b5c5c*/
  v7 = Math::RoundToInt(*(double *)v33 - v6 * v32); /*0x4b5c6c*/
  v8 = *(_DWORD *)(a1 + 8); /*0x4b5c71*/
  v37 = v7; /*0x4b5c74*/
  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 456))(v8); /*0x4b5c7a*/
  v10 = *(int **)(a1 + 8); /*0x4b5c80*/
  if ( v9 > 0 ) /*0x4b5c87*/
  {
    (*(void (__thiscall **)(int *, int *))(*v10 + 436))(v10, &v35); /*0x4b5eaa*/
    VeteranRatio_high = (_DWORD *)HIDWORD(g_RulesClass_Instance->MissileSafetyAltitude); /*0x4b5eb6*/
    if ( VeteranRatio_high ) /*0x4b5ebe*/
    {
      if ( !((int)g_CurrentFrame % 6) ) /*0x4b5ecf*/
      {
        v20 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x4b5edf*/
        if ( v20 ) /*0x4b5ee6*/
        {
          Index = AnimTypeClass::FindIndex(&unk_820320); /*0x4b5eed*/
          AnimClass::ctor(v20, *((void **)g_AnimTypeCount + Index), v38, 0, 1, (void *)0x600, 0, 0); /*0x4b5f0f*/
        }
      }
      if ( !((int)g_CurrentFrame % 3) ) /*0x4b5f1f*/
      {
        v32 = 0.0; /*0x4b5f39*/
        _DWORD * v22 = Coord::To_Cell(&DataGlobal_87F7E8, (_DWORD *)(a1 + 28)); /*0x4b5f41*/
        ClosestObjectCell = Object::FindClosestObjectCell(v22, &v32, 0, 0); /*0x4b5f48*/
        if ( !Object::IsAlliedWithObjectHouse(*(_DWORD **)(*(_DWORD *)(a1 + 8) + 540), ClosestObjectCell) ) /*0x4b5f57*/
        {
          int * v24 = RandomCoordScatter((int *)&v32, (int *)(a1 + 28), 85, 0); /*0x4b5f6d*/
          unsigned int v25 = VeteranRatio_high[51]; /*0x4b5f74*/
          v33[0] = *v24; /*0x4b5f7a*/
          v33[1] = v24[1]; /*0x4b5f86*/
          int v34 = v24[2]; /*0x4b5f8d*/
          unsigned int v26 = Random::State(Randomizer_Global); /*0x4b5f91*/
          StartAudioControllerAt(*(_DWORD *)(VeteranRatio_high[48] + 4 * (v26 % v25)), (int)&v35, 0); /*0x4b5fa8*/
          PlaySoundEffectAt(v33, 2 * VeteranRatio_high[41], *(_DWORD **)(a1 + 8), VeteranRatio_high[43], 1, 0); /*0x4b5fc7*/
          v27 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x4b5fd6*/
          if ( v27 ) /*0x4b5fdd*/
          {
            void * v31 = (void *)Return::HRESULT_Fail(v33[0], v33[1], v34); /*0x4b5ffe*/
            WarheadVersusMultiplier = (void *)GetWarheadVersusMultiplier( /*0x4b6020*/
                                                2 * VeteranRatio_high[41],
                                                VeteranRatio_high[43],
                                                0,
                                                v33);
            AnimClass::ctor(v27, WarheadVersusMultiplier, v33, 0, 1, (void *)0x2600, v31, 0); /*0x4b6028*/
          }
        }
      }
    }
    return 1; /*0x4b6030*/
  }
  else
  {
    (*(void (__thiscall **)(int *, _DWORD))(*v10 + 460))(v10, 0); /*0x4b5c92*/
    v35 = v10[39]; /*0x4b5ca4*/
    v36 = v10[40]; /*0x4b5cab*/
    v37 = v10[41]; /*0x4b5cb2*/
    (*(void (__thiscall **)(int *))(*v10 + 212))(v10); /*0x4b5cba*/
    int v11 = a1 - 4; /*0x4b5cc3*/
    (*(void (__stdcall **)(int))(*(_DWORD *)(a1 - 4) + 4))(a1 - 4); /*0x4b5cc7*/
    _DWORD * v12 = (_DWORD *)(*(_DWORD *)(a1 + 8) + 1652); /*0x4b5ccd*/
    if ( *v12 ) /*0x4b5cd3*/
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v12 + 8))(*v12); /*0x4b5cdd*/
    *v12 = 0; /*0x4b5ce3*/
    (*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)(a1 + 20) + 16))(a1 + 20, v12); /*0x4b5cee*/
    if ( (*(unsigned __int8 (__thiscall **)(int *, int *, _DWORD))(*v10 + 216))(v10, &v35, 0) ) /*0x4b5cfc*/
    {
      v16 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x4b5dae*/
      if ( v16 ) /*0x4b5db8*/
        AnimClass::ctor(v16, (void *)g_RulesClass_Instance->FlashFrameTime, &v35, 0, 1, (void *)0x600, 0, 0); /*0x4b5dd8*/
      if ( *(_BYTE *)(a1 + 24) ) /*0x4b5ddd*/
      {
        v17 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x4b5de9*/
        if ( v17 ) /*0x4b5df3*/
          AnimClass::ctor(v17, *(void **)(g_RulesClass_Instance->GUITabSound[3] + 4), &v35, 0, 1, (void *)0x600, 0, 0); /*0x4b5e16*/
      }
      else
      {
        v18 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x4b5e18*/
        if ( v18 ) /*0x4b5e22*/
          AnimClass::ctor(v18, *(void **)g_RulesClass_Instance->GUITabSound[3], &v35, 0, 1, (void *)0x600, 0, 0); /*0x4b5e47*/
      }
      (*(void (__thiscall **)(int *, int))(*v10 + 292))(v10, 1); /*0x4b5e52*/
      (*(void (__thiscall **)(int *, _DWORD))(*v10 + 460))(v10, 0); /*0x4b5e5e*/
      (*(void (__thiscall **)(int *, _DWORD, int))(*v10 + 1156))(v10, 0, 1); /*0x4b5e6c*/
      (*(void (__thiscall **)(int *))(*v10 + 492))(v10); /*0x4b5e76*/
      (*(void (__thiscall **)(int *, int *, _DWORD, _DWORD))(*v10 + 372))(v10, &DataGlobal_8A0820, 0, 0); /*0x4b5e89*/
    }
    else
    {
      PlaySoundEffectAt(&v35, 100, *(_DWORD **)(a1 + 8), g_RulesClass_Instance->?[5], 1, 0); /*0x4b5d28*/
      v13 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x4b5d37*/
      if ( v13 ) /*0x4b5d3e*/
      {
        void * v30 = (void *)Return::HRESULT_Fail(v35, v36, v37); /*0x4b5d64*/
        void * v14 = (void *)GetWarheadVersusMultiplier(100, g_RulesClass_Instance->?[5], 0, &v35); /*0x4b5d8a*/
        AnimClass::ctor(v13, v14, &v35, 0, 1, (void *)0x2600, v30, 0); /*0x4b5d92*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v11 + 8))(a1 - 4); /*0x4b5d9a*/
        return 1; /*0x4b5da6*/
      }
    }
    (*(void (__stdcall **)(int))(*(_DWORD *)v11 + 8))(a1 - 4); /*0x4b5e92*/
    return 1; /*0x4b5e95*/
  }
}
} // namespace gamemd
}

// 0x4B6200
int DropPodLocomotionClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1247291205;
  a2[1] = 298948665;
  a2[2] = -1610610249;
  a2[3] = -777003740;
  return 0;
}

// 0x4B6240
HRESULT DropPodLocomotionClass::BeginMove(int * a1, int * pStm)
{
{
    IStream *v2;
    int v3;
    int v4;
    LPVOID *v5;
    v2 = (IStream *)pStm;
    v3 = SwizzleManager::SaveLoad(a1, pStm);
    if ( v3 < 0 )
    return v3;
    if ( a1 )
  {
    *((int*)(a1) + 11) = 0;
    *a1 = (int)(unsigned int)vt_DropPodLocomotionClass;
    a1[1] = (unsigned int)vt_DropPodLocomotionClass;
    *((int*)(a1) + 6) = (int)&vt_DropPodLocomotionClass;
  }
    v2->__pad_0->Read(v2, &pStm, 1, 0);
    if ( !(char)pStm )
    return v3;
    v4 = *((int*)(a1) + 11);
    v5 = (LPVOID *)(a1 + 11);
    if ( v4 )
    (*(void (__stdcall **)(int))(*(int *)(v4) + 8))(v4);
    *v5 = 0;
    return OleLoadFromStream(v2, &IID_ILocomotion, v5);
}
}

// 0x4B62C0
HRESULT DropPodLocomotionClass::UpdateMovement(int * a1, int * pPStm, int a3)
{
{
    IStream *v3;
    int *v4;
    HRESULT result;
    int v6;
    int (__stdcall ***v7)(int, void *, int **);
    int v8;
    int *v9;
    HRESULT v10;
    int v11;
    v3 = (IStream *)pPStm;
    v4 = a1;
    result = LoadIPersistStream(a1, pPStm, a3);
    if ( result >= 0 )
  {
    if ( v4[11] )
    {
    v6 = *(int *)v3->__pad_0;
    LOBYTE(a3) = 1;
    (*(void (__stdcall **)(IStream *, int *, int, int))(v6 + 16))(v3, &a3, 1, 0);
    v7 = (int (__stdcall ***)(int, void *, int **))v4[11];
    pPStm = 0;
    if ( v7 )
      {
    v8 = (**v7)(v7, &DataGlobal_820270, &a1);
    if ( v8 >= 0 )
        {
    v9 = a1;
    if ( pPStm )
    (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm);
    pPStm = v9;
        }
    else
        {
    Function::Method_4B4D60((int *)&pPStm);
    pPStm = 0;
        }
    if ( v8 < 0 && v8 != -2147467262 )
    WinAPI::Wrapper(v8);
      }
    v10 = OleSaveToStream((LPPERSISTSTREAM)pPStm, v3);
    if ( pPStm )
    (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm);
    return v10;
    }
    else
    {
    v11 = *(int *)v3->__pad_0;
    LOBYTE(a3) = 0;
    return (*(HRESULT (__stdcall **)(IStream *, int *, int, int))(v11 + 16))(v3, &a3, 1, 0);
    }
  }
    return result;
}
}

// 0x4B66E0
int DropPodLocomotionClass::StubReturn48()
{
return 48;
}

// 0x4B66F0
DropPodLocomotionClass * DropPodLocomotionClass::ProcessMove(char a2)
{
{
    ILocomotion *v3;
    *(void**)this = (unsigned int)vt_DropPodLocomotionClass;
    this->vtable2 = (unsigned int)vt_DropPodLocomotionClass;
    this->vtable3 = (ILocomotion *)&vt_DropPodLocomotionClass;
    v3 = *(&this->vtable21);
    if ( v3 )
    (*(void (__stdcall **)(ILocomotion *))(*(int *)(v3) + 8))(v3);
    LocomotionClass::Construct(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DropPodLocomotionClass *)this;
}
}
