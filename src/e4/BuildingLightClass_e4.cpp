// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/BuildingLightClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/BuildingLight_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/BulletTypeClass_e4.hpp"
#include "e4/classes/MixFileClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/StreamClass_e4.hpp"
#include "e4/classes/LogicClass_flat_e4.hpp"  // X74 typed-global (LogicClass cluster)

// 0x436BE0
namespace gamemd {  // G42.18 ns repair
unsigned int * BuildingLightClass::FindTarget(unsigned int *a2, int aP1, int a1, int aP0, int aP2)
{


  unsigned int *result; // eax
  result = (unsigned int *)(aP1); /*0x436be9*/
  BuildingLightClass *v4; // edi
  v4 = (gamemd::BuildingLightClass *)(aP1); /*0x436bef*/
  aP1->Speed[1] = 0; /*0x436bfa*/
  aP1->BehaviourMode = (int)aP1; /*0x436c00*/
  *(unsigned int *)aP1->__pad_B4 = 0; /*0x436c06*/
  if ( aP1 == 3 ) /*0x436c0c*/
  {
    int v5; // edx
    Object *nextArrayIndex; // [esp+38h] [ebp-30h] BYREF
    v5 = *(unsigned int *)(*((int (**)(BuildingLightClass *, Object **))aP1->ObjectClass + 110))( /*0x436c21*/
                      aP1,
                      &nextArrayIndex);
    ObjectClass *FollowingObject; // eax
    FollowingObject = v4->FollowingObject; /*0x436c23*/
    int v25; // [esp+3Ch] [ebp-2Ch]
    v25 = v5; /*0x436c29*/
    void *v19; // [esp+24h] [ebp-44h]
    v19 = &unk_98967F; /*0x436c2d*/
    unsigned int *v22; // [esp+30h] [ebp-38h]
    v22 = 0; /*0x436c3b*/
    nextArrayIndex = FollowingObject->ptr_C.?; /*0x436c3f*/
    int v17; // [esp+1Ch] [ebp-4Ch]
    v17 = -1; /*0x436c43*/
    do /*0x436d74*/
    {
      int v7 = -1; // ebx /*0x436c53*/
      int v21; // [esp+2Ch] [ebp-3Ch]
      v21 = -1; /*0x436c58*/
      int v18; // [esp+20h] [ebp-48h]
      (v18) = ((v18) & ~0xFFFF) | ((v25 + v17) & 0xFFFF); /*0x436c5c*/
      do /*0x436d62*/
      {
        (v18) = ((v18) & ~(0xFFFF << 16)) | (((v7 + (((v25) >> 16) & 0xFFFF)) & 0xFFFF) << 16); /*0x436c6c*/
        __int16 v23[2]; // [esp+34h] [ebp-34h] BYREF
        *(unsigned int *)v23 = v18; /*0x436c7b*/
        unsigned int *v8; // esi
        v8 = (unsigned int *)*((unsigned int *)((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(v23) + 57); /*0x436c84*/
        if ( v8 ) /*0x436c8c*/
        {
          while ( 1 ) /*0x436c98*/
          {
            if ( (v8->ReturnZeroPos() == 15 /*0x436cb9*/
               || v8->ReturnZeroPos() == 1)
              && !(unsigned __int8)(nextArrayIndex)->IsAlliedWithObjectHouse((int)v8) )
            {
              int v9 = *v8; // eax /*0x436ccc*/
              int *location; // ecx
              location = (int *)(v4->FollowingObject); /*0x436cce*/
              int v11; // edi
              v11 = (int)(v4->FollowingObject); /*0x436cd0*/
              int v12 = location->ptr_4; // ebx /*0x436cd2*/
              int v29; // [esp+58h] [ebp-10h]
              v29 = location->ptr_8; /*0x436cdf*/
              unsigned int *v13; // eax
              char v30[12]; // [esp+5Ch] [ebp-Ch] BYREF
              v13 = (unsigned int *)(*(int (**)(unsigned int *, char *))(v9 + 72))(v8, v30); /*0x436ce3*/
              int v14; // ecx
              v14 = v13[1] - v12; /*0x436ced*/
              int v26; // [esp+44h] [ebp-24h]
              v26 = *v13 - v11; /*0x436cf3*/
              int v15; // edx
              v15 = v13[2]; /*0x436cf7*/
              int v27; // [esp+48h] [ebp-20h]
              v27 = v14; /*0x436cfa*/
              int v28; // [esp+4Ch] [ebp-1Ch]
              v28 = v15 - v29; /*0x436d07*/
              Math::Sqrt((double)v26 * (double)v26 + (double)(v15 - v29) * (double)(v15 - v29) + (double)v14 /*0x436d2c*/
              * (double)v14);
              double v2; // st7
              void *v16; // eax
              LOWORD(v16) = Math::RoundToInt(v2); /*0x436d34*/
              if ( (int)v16 < (int)v19 ) /*0x436d3d*/
              {
                v22 = v8; /*0x436d3f*/
                v19 = v16; /*0x436d43*/
              }
            }
            v8 = v8->ptr_30; /*0x436d47*/
            if ( !v8 ) /*0x436d4c*/
              break; /*0x436d4c*/
            v4 = (gamemd::BuildingLightClass *)(aP1); /*0x436c94*/
          }
          v7 = v21; /*0x436d52*/
          v4 = (gamemd::BuildingLightClass *)(aP1); /*0x436d56*/
        }
        v21 = ++v7; /*0x436d5e*/
      }
      while ( v7 < 2 ); /*0x436d62*/
      ++v17; /*0x436d70*/
    }
    while ( v17 < 2 ); /*0x436d74*/
    result = v22; /*0x436d7a*/
    if ( v22 ) /*0x436d80*/
      v4->BuildingLightClass_field_E0 = (int)v22; /*0x436d82*/
  }
  return result; /*0x436d88*/

}
}  // G42.18 ns repair
// 0x4370C0
namespace gamemd {
BuildingLightClass * BuildingLightClass::SDDTOR(char a2, int a1, int aP0, int aP2)
{


  /* X11: vtable install elided (implicit via BuildingLightClass virtuals 0x4370c4) */
  /* X11: vtable install elided (implicit via BuildingLightClass virtuals 0x4370ca) */
  /* X11: vtable install elided (implicit via BuildingLightClass virtuals 0x4370d1) */
  /* X11: vtable install elided (implicit via BuildingLightClass virtuals 0x4370d8) */
  if ( (unsigned __int8)(a1)->Undeploy() ) /*0x4370df*/
    ((DynamicVectorClass *)&g_LogicClass)->RemoveItem((int)a1); /*0x4370ee*/
  BuildingLightClass *v5; // [esp+4h] [ebp-4h] BYREF
  v5 = (gamemd::BuildingLightClass *)(a1); /*0x437103*/
  int v3; // eax
  v3 = (*(int (**)(int *, BuildingLightClass **))(dword_8B4190 + 16))(&dword_8B4190, &v5); /*0x437107*/
  if ( v3 != -1 && v3 < dword_8B41A0 && v3 < --dword_8B41A0 ) /*0x437122*/
  {
    do /*0x43713a*/
    {
      ++v3; /*0x43712a*/
      *((unsigned int *)dword_8B4194 + v3 - 1) = *((unsigned int *)dword_8B4194 + v3); /*0x43712e*/
    }
    while ( v3 < dword_8B41A0 ); /*0x43713a*/
  }
  (a1)->Dtor(); /*0x43713e*/
  if ( (a1 & 1) != 0 ) /*0x437148*/
    __3_YAXPAX_Z(a1); /*0x43714b*/
  return (gamemd::BuildingLightClass *)(a1); /*0x437155*/

}
} // namespace gamemd

// 0x513D20
namespace gamemd {
signed int BuildingLightClass::UpdateOscillation()
{

  unsigned int *ptr_8; // eax
  int *v3; // eax
  int GroundHeight; // edi
  unsigned int *v5; // eax
  int *v6; // ecx
  int v7; // eax
  int v8; // edx
  int v9; // ebx
  int v10; // ebp
  int v11; // ecx
  int v12; // eax
  double v13; // st7
  int v14; // eax
  int v15; // eax
  double v16; // st6
  int v17; // edi
  double v18; // st6
  int v19; // eax
  int v20; // eax
  unsigned char *v21; // ecx
  char v22; // bl
  signed int result; // eax
  int v24; // ecx
  double v25; // st7
  int v26; // [esp+1Ch] [ebp-18h]
  int v27; // [esp+1Ch] [ebp-18h]
  int v28; // [esp+20h] [ebp-14h]
  int v29; // [esp+28h] [ebp-Ch] BYREF
  int v30; // [esp+2Ch] [ebp-8h]
  int v31; // [esp+30h] [ebp-4h]

  v26 = (*(int (**)(void *))(*(unsigned int *)this->ptr_C + 456))(this->ptr_C); /*0x513d3a*/
  v28 = v26; /*0x513d3e*/
  ptr_8 = this->ptr_C; /*0x513d42*/
  if ( ptr_8[376] != -1 ) /*0x513d4c*/
  {
    v3 = ptr_8 + 39; /*0x513d52*/
    v29 = *v3; /*0x513d59*/
    v30 = v3[1]; /*0x513d65*/
    v31 = v3[2]; /*0x513d71*/
    GroundHeight = Cell::GetGroundHeight(&v29); /*0x513d7a*/
    v5 = this->ptr_C; /*0x513d7c*/
    v6 = v5 + 39; /*0x513d8b*/
    v7 = v5[376] & 7; /*0x513d8d*/
    v8 = *v6; /*0x513d90*/
    v9 = v6[1]; /*0x513d92*/
    v10 = v6[2]; /*0x513d95*/
    v11 = 8 * v7 + 9041624; /*0x513d98*/
    v12 = v8 + g_DDrawSurfaceManager.scenario[2 * v7 + 102]; /*0x513dab*/
    v30 = v9 + *(unsigned int *)(v11 + 4); /*0x513dad*/
    v29 = v12; /*0x513dbb*/
    v31 = v10; /*0x513dbf*/
    if ( Cell::GetGroundHeight(&v29) > GroundHeight ) /*0x513dca*/
      v28 = v26 - *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1484); /*0x513ddc*/
  }
  v13 = (double)v26 + *&this->q0A0; /*0x513de4*/
  (v14) = ((v14) & ~0xFFFF) | ((Math::RoundToInt(v13)) & 0xFFFF); /*0x513de7*/
  v27 = v14; /*0x513dec*/
  v15 = (*(int (**)(char *))(*((unsigned int *)this->ptr_C + 1) + 16))((char *)this->ptr_C + 4); /*0x513df9*/
  if ( (v15 & 1) != 0 ) /*0x513dfe*/
    v16 = 1.0; /*0x513e00*/
  else
    v16 = 1.1; /*0x513e08*/
  v17 = *(unsigned int *)&MEMORY[0xA8EB00].?[416] + 2 * v15; /*0x513e20*/
  v18 = v16 * *(double *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1488) * 900.0; /*0x513e23*/
  (v19) = ((v19) & ~0xFFFF) | ((Math::RoundToInt(v13)) & 0xFFFF); /*0x513e2b*/
  Math::SinCos((double)(v17 % v19) * 6.283185307179586 / v18); /*0x513e4f*/
  (v20) = ((v20) & ~0xFFFF) | ((Math::RoundToInt(v13 + v13 + (double)v27)) & 0xFFFF); /*0x513e5d*/
  if ( v20 < 0 ) /*0x513e66*/
  {
    this->customSound_controller[4] = 0; /*0x513e68*/
    this->customSound = 0; /*0x513e6b*/
    v20 = 0; /*0x513e6e*/
  }
  v21 = this->ptr_C; /*0x513e70*/
  v22 = v21[116]; /*0x513e74*/
  v21[116] = 0; /*0x513e77*/
  (*(void (**)(void *, int))(*(unsigned int *)this->ptr_C + 460))(this->ptr_C, v20); /*0x513e7f*/
  result = (signed int)this->ptr_C; /*0x513e85*/
  *(unsigned char *)(result + 116) = v22; /*0x513e8c*/
  v24 = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x513e8f*/
  if ( v28 < *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1484) ) /*0x513e9b*/
  {
    if ( (unsigned __int8)StreamClass::GetDirty(&this->ptr_4) ) /*0x513ea1*/
      *&this->q0A0 = ((double)*(int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] /*0x513ec8*/
                                                                    + 1484)
                                                   + (double)*(int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]
                                                                    + 1484)
                                                   - (double)v28)
                                                  / (double)*(int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1484)
                                                  * (double)*(int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5816)
                                                  + *&this->q0A0;
    v24 = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x513ecd*/
    result = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1484) / 4; /*0x513edf*/
    if ( v28 < result ) /*0x513ee4*/
    {
      result = (unsigned int)((unsigned __int64)(1431655766LL /*0x513ef5*/
                                               * *(int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5816)) >> 32) >> 31;
      *&this->q0A0 = (double)(*(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] /*0x513f05*/
                                                                       + 5816)
                                                           / 3)
                                                  + *&this->q0A0;
      v24 = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x513f08*/
    }
  }
  v25 = *&this->q0A0 - (double)v24->RepairRate; /*0x513f15*/
  *&this->q0A0 = v25; /*0x513f18*/
  *&this->q0A0 = v25 * *(double *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1520); /*0x513f27*/
  return result; /*0x513f2a*/

}
}
// 0x436900
namespace gamemd {
int BuildingLightClass::SD_vt12()
{
  return 232; /*0x436905*/
}
} // namespace gamemd

// 0x436910
namespace gamemd {
int BuildingLightClass::SD_vt03(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x436916*/
    return -2147467261; /*0x436918*/
  *a2 = 1417814616; /*0x436926*/
  a2[1] = 298965160; /*0x43692e*/
  a2[2] = 1610638004; /*0x436937*/
  a2[3] = unk_7E973C; /*0x436940*/
  return 0; /*0x43691d*/
}
} // namespace gamemd

// 0x4369C0
namespace gamemd {
int BuildingLightClass::SD_vt06(TechnoTypeClass * aP0, int * a1, int aP2)
{
  return AbstractClass::SaveLoad_Prefix((int *)aP0, a1, aP2); /*0x4369d4*/
}
} // namespace gamemd

// 0x4369E0
namespace gamemd {
int BuildingLightClass::SD_vt34()
{
  return 0; /*0x4369e2*/
}
} // namespace gamemd

// 0x4369F0
namespace gamemd {
int BuildingLightClass::SD_vt30()
{
  return 3; /*0x4369f5*/
}
} // namespace gamemd

// 0x4370B0
namespace gamemd {
int BuildingLightClass::SD_vt11()
{
  return 19; /*0x4370b5*/
}
} // namespace gamemd
