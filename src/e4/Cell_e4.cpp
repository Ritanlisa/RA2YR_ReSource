// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/Terrain_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/CenterTeamCommand_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/CaptureManagerClass_e4.hpp"
#include "e4/classes/CommandClass_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/IsometricTileTypeClass_e4.hpp"
#include "e4/classes/Isometric_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/TerrainTypeClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers

// 0x419B00
namespace gamemd {
TechnoClass * * Cell::IsOccupied(short * a2, char a3)
{

  Object *v5; // eax
  unsigned int *ClosestObjectCell; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // edi
  Cell *v10; // esi
  unsigned short *v11; // eax
  void *v14; // [esp+10h] [ebp-Ch]
  unsigned int v15[2]; // [esp+14h] [ebp-8h] BYREF
  char v16; // [esp+20h] [ebp+4h]

  if ( !(uint8_t)((LayerClass *)((LayerClass *)&stru_87F5F0.__pad_58[416]))->IsWithinUsableArea(a2, 1) ) /*0x419b18*/
    return (gamemd::TechnoClass **)(1); /*0x419b18*/
  if ( *(unsigned char *)(*((unsigned int *)this + 433) + 3412) ) /*0x419b2b*/
  {
    v15[0] = 0; /*0x419b44*/
    v15[1] = 0; /*0x419b4c*/
    v5 = (Object *)((CellCoord *)((CellCoord *)&stru_87F5F0.__pad_58[416]))->To_CellObj(a2); /*0x419b54*/
    ClosestObjectCell = (unsigned int *)((Object *)(v5))->FindClosestObjectCell(v15, 0, 0); /*0x419b5b*/
    if ( ClosestObjectCell ) /*0x419b62*/
    {
      if ( ClosestObjectCell[180] /*0x419b7c*/
        || *(unsigned char *)((*(int (**)(unsigned int *))(*ClosestObjectCell + 132))(ClosestObjectCell) + 3412) )
      {
        return (gamemd::TechnoClass **)(1); /*0x419b7c*/
      }
    }
  }
  v7 = *((unsigned int *)this + 433); /*0x419b8a*/
  if ( *(unsigned char *)(v7 + 3597) ) /*0x419b90*/
    return (gamemd::TechnoClass **)(1); /*0x419b90*/
  if ( !*(unsigned char *)(v7 + 3580) /*0x419bbf*/
    || (v8 = *((unsigned int *)this + 361)) == 0
    || (v16 = 1, (*(int (**)(int))(*(unsigned int *)v8 + 44))(v8) != 1) )
  {
    v16 = 0; /*0x419bc1*/
  }
  v14 = ((CellCoord *)((CellCoord *)&stru_87F5F0.__pad_58[416]))->To_CellObj(a2); /*0x419bd1*/
  v9 = 0; /*0x419bda*/
  if ( ((char *)&FootClass_Array) <= 0 ) /*0x419bde*/
    return (gamemd::TechnoClass **)(1); /*0x419c6b*/
  while ( 1 ) /*0x419bea*/
  {
    v10 = (Cell *)*((unsigned int *)((char *)&FootClass_Array) + v9); /*0x419bea*/
    if ( v10 && (!v16 || *((Cell **)this + 361) != v10) && (a3 || v10 != this) && !v10->__pad_70[17] && v10->__pad_70[4] ) /*0x419c1d*/
    {
      v11 = (unsigned short *)(*(int (**)(Cell *, unsigned int *))(v10->Cell_field_0x0 + 440))(v10, v15); /*0x419c2d*/
      if ( *v11 == *a2 && v11[1] == a2[1] ) /*0x419c44*/
        break; /*0x419c44*/
      if ( *(void **)&v10[((unsigned int *)(2].__pad_3C))[40] == v14 ) /*0x419c52*/
        break; /*0x419c52*/
    }
    if ( ++v9 >= ((char *)&FootClass_Array) ) /*0x419c5c*/
      return (gamemd::TechnoClass **)(1); /*0x419c5c*/
  }
  return 0; /*0x419c60*/

}
}
// 0x42B1C0
namespace gamemd {
int Cell::PosToIndex()
{

  return ((SLOWORD(this->Cell_field_0x0) - SHIWORD(this->Cell_field_0x0) + *(unsigned int *)&stru_87F5F0.__pad_58[660] - 1) >> 1) /*0x42b1e3*/
       + *(unsigned int *)&stru_87F5F0.__pad_58[660]
       * (SLOWORD(this->Cell_field_0x0) - *(unsigned int *)&stru_87F5F0.__pad_58[660] + SHIWORD(this->Cell_field_0x0) - 1);

}
}
// 0x43B4C0
namespace gamemd {
int Cell::CanPlaceBuilding(unsigned int * a2)
{

  int v2; // esi
  int v3; // edi
  unsigned int *v4; // ebp
  int *v5; // eax
  int v6; // esi
  int v7; // edi
  int v8; // ebx
  int *Coords; // eax
  double v10; // st7
  int v12; // [esp+1Ch] [ebp-30h]
  int v14; // [esp+24h] [ebp-28h]
  char v15[12]; // [esp+34h] [ebp-18h] BYREF
  char v16[12]; // [esp+40h] [ebp-Ch] BYREF

  if ( (uint8_t)HouseClass::IsAlliedWith(dword_A83D4C, a2) ) /*0x43b4d8*/
    return 0; /*0x43b4d8*/
  v2 = 0; /*0x43b4ea*/
  v12 = 0; /*0x43b4ec*/
  v3 = *((unsigned int *)dword_A83D4C + 78); /*0x43b4f0*/
  v14 = v3; /*0x43b4f8*/
  if ( v3 <= 0 ) /*0x43b4fc*/
    return 0; /*0x43b5c9*/
  while ( 1 ) /*0x43b50e*/
  {
    v4 = *(unsigned int **)(*((unsigned int *)dword_A83D4C + 75) + 4 * v2); /*0x43b50e*/
    if ( (*(uint8_t (**)(unsigned int *))(*v4 + 848))(v4) ) /*0x43b516*/
      break; /*0x43b516*/
LABEL_6:
    v12 = ++v2; /*0x43b5b6*/
    if ( v2 >= v3 ) /*0x43b5ba*/
      return 0; /*0x43b5ba*/
  }
  v5 = (int *)(*(int (**)(unsigned int *, char *))(*v4 + 72))(v4, v15); /*0x43b52e*/
  v6 = *v5; /*0x43b531*/
  v7 = v5[1]; /*0x43b53c*/
  v8 = v5[2]; /*0x43b53f*/
  Coords = CellClass::GetCoords(a2, (int *)v16); /*0x43b542*/
  v10 = Math::Sqrt( /*0x43b58b*/
          (double)(v6 - *Coords) * (double)(v6 - *Coords)
        + (double)(v7 - Coords[1]) * (double)(v7 - Coords[1])
        + (double)(v8 - Coords[2]) * (double)(v8 - Coords[2]));
  if ( (int)Math::RoundToInt(v10) > *(unsigned int *)(v4[328] + 5900) << 8 ) /*0x43b5a9*/
  {
    v2 = v12; /*0x43b5ab*/
    v3 = v14; /*0x43b5af*/
    goto LABEL_6; /*0x43b5af*/
  }
  return 1; /*0x43b5c2*/

}
}
// 0x481670
namespace gamemd {
void Cell::ApplyDamage(int aP1, int a3, int a4, char aP4)
{

  AbstractClass *Cell_field_0xE4; // esi
  int *v7; // eax
  unsigned int *v8; // esi
  int v9; // edi
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int *v13; // esi
  char v14; // [esp+13h] [ebp-19h]
  void **v15; // [esp+14h] [ebp-18h] BYREF
  void *Block; // [esp+18h] [ebp-14h]
  int v17; // [esp+1Ch] [ebp-10h]
  char v18; // [esp+20h] [ebp-Ch]
  char v19; // [esp+21h] [ebp-Bh]
  int v20; // [esp+24h] [ebp-8h]
  int v21; // [esp+28h] [ebp-4h]

  if ( aP4 ) /*0x48167e*/
    Cell_field_0xE4 = *(AbstractClass **)this->__pad_E8; /*0x481680*/
  else
    Cell_field_0xE4 = (AbstractClass *)this->Cell_field_0xE4; /*0x481688*/
  v14 = 0; /*0x481692*/
  if ( !(unsigned char)a4 && Cell_field_0xE4 ) /*0x48169f*/
  {
    while ( 1 ) /*0x4816a3*/
    {
      v7 = (int *)AbstractClass::IsTechnoType(Cell_field_0xE4); /*0x4816a3*/
      if ( v7 ) /*0x4816aa*/
      {
        if ( (uint8_t)Audio::IsLoud(v7 + 84) ) /*0x4816b2*/
          break; /*0x4816b2*/
      }
      Cell_field_0xE4 = (AbstractClass *)Cell_field_0xE4[1].vtable3; /*0x4816bb*/
      if ( !Cell_field_0xE4 ) /*0x4816c0*/
        goto LABEL_11; /*0x4816c0*/
    }
    v14 = 1; /*0x4816c4*/
  }
LABEL_11:
  if ( aP4 ) /*0x4816ce*/
    v8 = *(unsigned int **)this->__pad_E8; /*0x4816d0*/
  else
    v8 = (unsigned int *)(this->Cell_field_0xE4); /*0x4816d8*/
  v9 = 0; /*0x4816de*/
  v10 = 0; /*0x4816e0*/
  v11 = 10; /*0x4816e2*/
  Block = 0; /*0x4816e9*/
  v17 = 0; /*0x4816ed*/
  v18 = 1; /*0x4816f1*/
  v19 = 0; /*0x4816f5*/
  v15 = &vt_DynamicVectorClass; /*0x4816f9*/
  v21 = 10; /*0x481701*/
  v20 = 0; /*0x481705*/
  if ( v8 ) /*0x481709*/
  {
    while ( 1 ) /*0x481711*/
    {
      if ( v20 < v10 ) /*0x481715*/
        goto LABEL_22; /*0x481715*/
      if ( (v19 || !v10) && v11 > 0 ) /*0x481725*/
        break; /*0x481725*/
LABEL_24:
      v8 = (unsigned int *)v8[12]; /*0x481750*/
      if ( !v8 ) /*0x481755*/
        goto LABEL_25; /*0x481755*/
      v11 = v21; /*0x48170d*/
    }
    if ( ((uint8_t (*)(void ***, int, unsigned int))v15[2])(&v15, v11 + v10, 0) ) /*0x481733*/
    {
LABEL_22: v12 = (unsigned int)(v20++);
      *((unsigned int *)Block + v12) = (unsigned int)(v8); /*0x481749*/
    }
    v10 = v17; /*0x48174c*/
    goto LABEL_24; /*0x48174c*/
  }
LABEL_25:
  if ( v20 > 0 ) /*0x48175b*/
  {
    do /*0x4817e0*/
    {
      v13 = (int *)AbstractClass::IsTechnoType(*((AbstractClass **)Block + v9)); /*0x481776*/
      if ( v14 /*0x4817c1*/
        || (unsigned char)a4
        || *(unsigned char *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 6125)
        || v13
        && ((uint8_t)TechnoTypeClass::HasVoiceResponse(v13, 3)
         || *(unsigned int *)(v13[135] + 588) >= *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5196)) )
      {
        (*(void (**)(unsigned int, int, int, int))(**((unsigned int **)Block + v9) + 372))( /*0x4817d3*/
          *((unsigned int *)Block + v9),
          aP1,
          a3,
          a4);
      }
      ++v9; /*0x4817dd*/
    }
    while ( v9 < v20 ); /*0x4817e0*/
  }
  v15 = &vt_VectorClass; /*0x4817e9*/
  if ( Block ) /*0x4817f4*/
  {
    if ( v19 ) /*0x4817fc*/
      __3_YAXPAX_Z(Block); /*0x4817ff*/
  }

}
}
// 0x481810
namespace gamemd {  // G42.18c ns repair
int Cell::GetNeighbourContent(unsigned int a2)
{

  void *result; // eax
  int16_t v3; // ax
  int v4; // [esp+0h] [ebp-4h]

  result = this; /*0x481815*/
  if ( a2 < 8 ) /*0x48181a*/
  {
    v4 = *(unsigned int *)&this->__pad_1C[8]; /*0x481822*/
    v3 = HIWORD(v4) + HIWORD(((unsigned int *)(g_DDrawSurfaceManager.scenario))[(a2 & 7) + 82]); /*0x481839*/
    LOWORD(a2) = v4 + LOWORD(g_DDrawSurfaceManager.scenario[(a2 & 7) + 82]); /*0x481841*/
    HIWORD(a2) = v3; /*0x48184a*/
    return ((CellCoord *)((CellCoord *)&stru_87F5F0.__pad_58[416]))->To_CellObj((int16_t *)&a2); /*0x48185d*/
  }
  return (int)(result); /*0x481863*/

}
}
// 0x4834A0
namespace gamemd {
int Cell::IsBuildable(int a2, char a3, char a4, int aP4, int aP5, int aP6, char aP7)
{

  int result; // eax
  int v10; // ecx
  char v11; // cl
  int v12; // esi
  int v13; // esi
  char v14; // fps^1
  double v15; // st7
  bool v16; // c0
  char v17; // c2
  bool v18; // c3

  result = a2; /*0x4834a0*/
  if ( a2 == 4 ) /*0x4834ad*/
    goto LABEL_39; /*0x4834ad*/
  if ( aP4 != (IUnknown *)(-1) ) /*0x4834c2*/
  {
    result = ((MapClass *)((MapClass *)&dword_87F7E8))->GetTileIndex((int16_t *)this + 18, aP5, aP7); /*0x4834cf*/
    if ( aP4 != (IUnknown *)(result) ) /*0x4834d6*/
    {
      LOBYTE(result) = 0; /*0x4834db*/
      return result; /*0x4834de*/
    }
  }
  result = (int)(aP6);
  if ( aP6 != (IUnknown *)(-1) ) /*0x4834ed*/
  {
    v10 = *((unsigned int *)this + 283); /*0x4834ef*/
    if ( aP6 == (IUnknown *)(v10) ) /*0x4834f8*/
    {
      if ( (*((unsigned int *)this + 80) & 0x100) != 0 && !aP7 ) /*0x48351c*/
      {
        LOBYTE(result) = 0; /*0x483521*/
        return result; /*0x483524*/
      }
    }
    else if ( (*((unsigned int *)this + 80) & 0x100) == 0 || aP6 != (IUnknown *)(v10) + 4 ) /*0x483507*/
    {
      LOBYTE(result) = 0; /*0x48350c*/
      return result; /*0x48350f*/
    }
  }
  v11 = 0; /*0x483527*/
  if ( (aP6 == (IUnknown *)(-1) || aP6 == *((unsigned int *)this + 283) + 4) && (*((unsigned int *)this + 80) & 0x100) != 0 ) /*0x483542*/
  {
    v11 = 1; /*0x483546*/
    result = *((unsigned int *)this + 296); /*0x483548*/
  }
  else
  {
    result = *((unsigned int *)this + 292); /*0x483552*/
  }
  if ( a3 ) /*0x48355e*/
    result &= 0xE0u; /*0x483560*/
  if ( a4 ) /*0x48356b*/
    result &= 0x5Fu; /*0x48356d*/
  if ( result ) /*0x483572*/
  {
    LOBYTE(result) = 0; /*0x483577*/
    return result; /*0x48357a*/
  }
  result = *((unsigned int *)this + 59); /*0x48357d*/
  v12 = *((unsigned int *)this + 17); /*0x483583*/
  if ( v12 != -1 ) /*0x483589*/
  {
    v13 = *(&dword_A83D84->vtable1 + v12); /*0x483591*/
    if ( v13 ) /*0x483596*/
    {
      if ( *(unsigned char *)(v13 + 680) ) /*0x483598*/
      {
        if ( aP5 != (IUnknown *)(2) && (IUnknown *)(aP5) != (IUnknown *)(IUnknown *)(3) && aP5 != 8 && (aP5 != (IUnknown *)(1) && aP5 != 4 || !*(unsigned char *)(v13 + 557)) && aP5 != 12 ) /*0x4835c8*/
        {
          LOBYTE(result) = 0; /*0x4835cd*/
          return result; /*0x4835d0*/
        }
        result = 0; /*0x4835d3*/
      }
    }
  }
  result += a2 + 8 * result; /*0x4835dc*/
  v15 = flt_89EA40[result]; /*0x4835de*/
  v16 = v15 < 0.0; /*0x4835e5*/
  v17 = 0; /*0x4835e5*/
  v18 = v15 == 0.0; /*0x4835e5*/
  BYTE1(result) = v14; /*0x4835eb*/
  if ( v15 != 0.0 || v11 ) /*0x4835f4*/
LABEL_39:
    LOBYTE(result) = 1; /*0x483602*/
  else
    LOBYTE(result) = 0; /*0x4835f9*/
  return result; /*0x4834d8*/

}
}
// 0x485060
namespace gamemd {
int Cell::IsValidHeight()
{

  int Cell_field_0x38; // eax

  Cell_field_0x38 = this->Cell_field_0x38; /*0x485060*/
  return Cell_field_0x38 >= g_CellPassabilityLUT && Cell_field_0x38 < g_CellPassabilityLUT + 14; /*0x485079*/

}
}
// 0x486380
namespace gamemd {
int Cell::IsEmpty()
{

  int result; // eax

  result = this->Cell_field_0x38; /*0x486380*/
  LOBYTE(result) = result == 0xFFFF || !result; /*0x486391*/
  return result; /*0x486390*/

}
}
// 0x4865D0
namespace gamemd {
int Cell::IsGroundTypeRange()
{

  int result; // eax

  result = this->Cell_field_0x38; /*0x4865d0*/
  LOBYTE(result) = result >= dword_ABAD28 && result < dword_ABAD28 + 42 /*0x4865e7*/
                || result >= g_CellPassabilityLUT && result < g_CellPassabilityLUT + 14
                || result >= dword_AA073C && result < dword_AA073C + 4
                || result >= dword_ABB110 && result < dword_ABB110 + 4
                || result >= dword_AA1050 && result < dword_AA1050 + 4
                || result >= dword_AA10A0 && result < dword_AA10A0 + 4;
  return result; /*0x4865e6*/

}
}
// 0x486750
namespace gamemd {
int Cell::IsInRange()
{

  int result; // eax

  LOBYTE(result) = g_Cell_BuildabilityLUT != -1 /*0x48676c*/
                && (result = this->Cell_field_0x38, result >= g_Cell_BuildabilityLUT)
                && result < g_Cell_BuildabilityLUT + 16;
  return result; /*0x48676b*/

}
}
// 0x486770
namespace gamemd {
int Cell::IsInRange2()
{

  int result; // eax

  LOBYTE(result) = g_TerrainBridgeIndex != -1 /*0x48678c*/
                && (result = this->Cell_field_0x38, result >= g_TerrainBridgeIndex)
                && result < g_TerrainBridgeIndex + 16;
  return result; /*0x48678b*/

}
}
// 0x4867B0
namespace gamemd {
int Cell::IsShore()
{

  int result; // eax

  result = this->Cell_field_0x38; /*0x4867b0*/
  LOBYTE(result) = result == dword_AA0E18 || result >= dword_AA0748 && result < dword_AA0748 + 16; /*0x4867d1*/
  return result; /*0x4867d0*/

}
}
// 0x486FF0
namespace gamemd {
int Cell::IsBuildableAdvanced()
{

  int result; // eax
  unsigned int *i; // esi
  unsigned int *Cell_field_0xE4; // esi

  result = ((Type *)((Type *)&stru_87F5F0.__pad_58[416]))->CheckAmbiguity((int)this, 1); /*0x486ffc*/
  if ( !(unsigned char)result ) /*0x487003*/
  {
    LOBYTE(result) = 1; /*0x487006*/
    return result; /*0x487009*/
  }
  result = this->Cell_field_0x38; /*0x48700a*/
  if ( result >= 0 /*0x487022*/
    && result < *(int *)(unsigned int *)((char *)&stru_A8EB00 + 340)
    && !*(unsigned char *)(*(unsigned int *)(*(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 328) + 4 * result) + 773) )
  {
    goto LABEL_21; /*0x487022*/
  }
  if ( this->Cell_field_0x11B[1] ) /*0x48702c*/
    goto LABEL_21; /*0x48702c*/
  result = (int)this->Cell_field_0x140; /*0x487036*/
  if ( (result & 0x500) != 0 ) /*0x48703f*/
    goto LABEL_21; /*0x48703f*/
  if ( !byte_A8E9A0 ) /*0x487048*/
    goto LABEL_20; /*0x487048*/
  for ( i = this->Cell_field_0xE4; i; i = (unsigned int *)i[12] ) /*0x487052*/
  {
    result =(int)(unsigned int *)(int)(unsigned int *)(*(int (**)(unsigned int *))(*i + 44))(i); /*0x487058*/
    if ( result == 6 ) /*0x48705e*/
      goto LABEL_21; /*0x48705e*/
  }
  if ( !byte_A8E9A0 || (Cell_field_0xE4 = this->Cell_field_0xE4) == 0 ) /*0x48707e*/
  {
LABEL_20:
    LOBYTE(result) =(unsigned int *)1; /*0x48709d*/
    return result; /*0x4870a0*/
  }
  while ( 1 ) /*0x487084*/
  {
    result = (*(int (**)(unsigned int *))(*Cell_field_0xE4 + 44))(Cell_field_0xE4); /*0x487084*/
    if ( result == 36 ) /*0x48708a*/
      break; /*0x48708a*/
    Cell_field_0xE4 = (unsigned int *)Cell_field_0xE4[12]; /*0x48708c*/
    if ( !Cell_field_0xE4 ) /*0x487091*/
    {
      LOBYTE(result) = 1; /*0x487094*/
      return result; /*0x487097*/
    }
  }
LABEL_21:
  LOBYTE(result) = 0; /*0x4870a1*/
  return result; /*0x487005*/

}
}
// 0x4870B0
namespace gamemd {
int Cell::HasOccupierBit(char aP1)
{

  return ((1 << aP1) & *(unsigned int *)&this->__pad_70[8]) != 0; /*0x4870c8*/

}
}
// 0x487A10
namespace gamemd {
int Cell::SearchEnemies(IUnknown * aP1)
{

  unsigned int *v3; // esi
  char v4; // bl
  unsigned int *v5; // ebp
  int v6; // edx
  int v7; // ebx
  int v8; // ebp
  unsigned int *v9; // eax
  int *v10; // esi
  bool v11; // zf
  int v12; // edx
  int result; // eax
  int v14; // [esp+70h] [ebp-1Ch]
  int v15; // [esp+74h] [ebp-18h]
  unsigned int v16[2]; // [esp+78h] [ebp-14h] BYREF
  unsigned int v17[3]; // [esp+80h] [ebp-Ch] BYREF

  v3 = *(unsigned int **)&this->q0E4; /*0x487a19*/
  if ( v3 ) /*0x487a21*/
  {
    v4 = (char)(aP1); /*0x487a27*/
    while ( 1 ) /*0x487a2d*/
    {
      v5 = (unsigned int *)v3[12]; /*0x487a2d*/
      if ( (*(int (**)(unsigned int *, int, int, int, unsigned int, int))(*v3 + 428))(v3, (int)this, -1, -1, 0, 1) == 7 ) /*0x487a44*/
        goto LABEL_10; /*0x487a44*/
      if ( !v4 ) /*0x487a48*/
        goto LABEL_8; /*0x487a48*/
      if ( v3 ) /*0x487a4c*/
        break; /*0x487a4c*/
LABEL_11:
      v3 = v5; /*0x487aa4*/
      if ( !v5 ) /*0x487aa8*/
        goto LABEL_12; /*0x487aa8*/
    }
    if ( (v3[5] & 1) == 0 || !*(unsigned char *)((*(int (**)(unsigned int *))(*v3 + 132))(v3) + 3476) ) /*0x487a5e*/
    {
LABEL_8:
      if ( !v3 || (*(int (**)(unsigned int *))(*v3 + 44))(v3) != 2 ) /*0x487a76*/
        goto LABEL_11; /*0x487a76*/
    }
LABEL_10:
    v6 = *v3; /*0x487a78*/
    aP1 = (IUnknown *)(v3[27]); /*0x487a84*/
    (*(void (**)(unsigned int *, int *, unsigned int, unsigned int, unsigned int, int, int, unsigned int))(v6 + 364))( /*0x487a9e*/
      v3,
      (int *)&aP1,
      0,
      *((unsigned int *)dword_8871E0 + 1002),
      0,
      1,
      1,
      0);
    goto LABEL_11; /*0x487a9e*/
  }
LABEL_12:
  aP1 = (IUnknown *)(*((unsigned int *)this + 9)); /*0x487aaa*/
  ((Coord *)(v17))->Subtract(((int16_t)aP1 << 8) + 128, (SHIWORD(aP1) << 8) + 128, 0); /*0x487ad0*/
  v16[0] = 128; /*0x487adc*/
  v16[1] = 128; /*0x487ae0*/
  v7 = (int)(Isometric::InitTables(v16)); /*0x487ae9*/
  v14 = -2; /*0x487aeb*/
  do /*0x487bff*/
  {
    v8 = -2; /*0x487af3*/
    v16[0] = -2; /*0x487af8*/
    do /*0x487bed*/
    {
      HIWORD(v15) = v8 + *((unsigned short *)this + 19); /*0x487b0c*/
      LOWORD(v15) = v14 + *((unsigned short *)this + 18); /*0x487b11*/
      aP1 = (IUnknown *)(v15); /*0x487b1e*/
      v9 = (unsigned int *)(((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)&aP1)); /*0x487b28*/
      if ( v9 != (unsigned int *)this ) /*0x487b2f*/
      {
        v10 = (int *)v9[57]; /*0x487b35*/
        if ( v10 ) /*0x487b3d*/
        {
          do /*0x487bdb*/
          {
            v11 = (v10[5] & 4) == 0; /*0x487b49*/
            LOBYTE(aP1) = (v10[5] & 4) != 0; /*0x487b4c*/
            if ( !v11 ) /*0x487b50*/
            {
              if ( !v10[413] ) /*0x487b56*/
                WinAPI::Wrapper(-2147467261); /*0x487b65*/
              if ( (*(uint8_t (**)(int, unsigned int, unsigned int, int))(*(unsigned int *)v10[413] + 160))( /*0x487b88*/
                     v10[413],
                     v17[0],
                     v17[1],
                     v7) )
              {
                if ( (*(int (**)(int *, int, int, int, unsigned int, int))(*v10 + 428))(v10, (int)this, -1, -1, 0, 1) == 7 ) /*0x487ba8*/
                {
                  v12 = *v10; /*0x487bb2*/
                  aP1 = (IUnknown *)(v10[27]); /*0x487bb6*/
                  (*(void (**)(int *, int *, unsigned int, unsigned int, unsigned int, int, int, unsigned int))(v12 + 364))( /*0x487bd0*/
                    v10,
                    (int *)&aP1,
                    0,
                    *((unsigned int *)dword_8871E0 + 1002),
                    0,
                    1,
                    1,
                    0);
                }
              }
            }
            v10 = (int *)v10[12]; /*0x487bd6*/
          }
          while ( v10 ); /*0x487bdb*/
          v8 = v16[0]; /*0x487be1*/
        }
      }
      v16[0] = ++v8; /*0x487be9*/
    }
    while ( v8 < 3 ); /*0x487bed*/
    result = ++v14; /*0x487bf7*/
  }
  while ( v14 < 3 ); /*0x487bff*/
  return result; /*0x487c05*/

}
}
// 0x487CB0
namespace gamemd {
long long Cell::GetTraversability()
{

  double v1; // st7

  v1 = (double)*((int *)dword_8871E0 + 1539); /*0x487cb5*/
  if ( this->q078 < v1 ) /*0x487cc8*/
    v1 = this->q078; /*0x487ccc*/
  return Math::RoundToInt(v1);

}
}
// 0x487D50
namespace gamemd {
int Cell::GetSlopeIndex()
{

  return this->u32_11B + 4 * ((this->q140 >> 7) & 1); /*0x487d66*/

}
}
// 0x487DF0
namespace gamemd {
int Cell::IsBridge2()
{

  int result; // eax

  LOBYTE(result) = *(unsigned int *)&this->__pad_E8[4] == 5; /*0x487df7*/
  return result; /*0x487dfa*/

}
}
// 0x4DCE80
namespace gamemd {
Coord * * Cell::IsValidDestination(short * a2)
{

  int v4; // eax
  int GroundHeight; // eax
  int v6; // edx
  int v7; // ecx
  unsigned int *v8; // eax
  int Cell_field_0x0; // edx
  int v10; // eax
  int v11; // eax
  unsigned int *v12; // eax
  int16_t v14[2]; // [esp+Ch] [ebp-1Ch] BYREF
  unsigned int v15[3]; // [esp+10h] [ebp-18h] BYREF
  unsigned int v16[3]; // [esp+1Ch] [ebp-Ch] BYREF
  int16_t *v17; // [esp+2Ch] [ebp+4h]

  if ( !(uint8_t)((LayerClass *)((LayerClass *)&stru_87F5F0.__pad_58[416]))->IsWithinUsableArea(a2, 1) ) /*0x4dce93*/
    return 0; /*0x4dce93*/
  if ( !*(unsigned int *)&dword_A8B238 ) /*0x4dcea7*/
  {
    if ( *((unsigned char *)this + 1050) ) /*0x4dcea9*/
    {
      v4 = (*a2 << 8) + 128; /*0x4dceca*/
      v15[1] = (a2[1] << 8) + 128; /*0x4dcecf*/
      v15[0] = v4; /*0x4dced9*/
      v15[2] = 0; /*0x4dcedd*/
      GroundHeight = Cell::GetGroundHeight(v15); /*0x4dcee5*/
      v6 = a2[1]; /*0x4dceed*/
      v7 = (*a2 << 8) + 128; /*0x4dcef4*/
      v16[2] = GroundHeight; /*0x4dcefa*/
      v16[0] = v7; /*0x4dcf0b*/
      v16[1] = (v6 << 8) + 128; /*0x4dcf15*/
      if ( (uint8_t)Cell::IsPassable((unsigned int *)((IUnknown *)(v16))) ) /*0x4dcf19*/
        return 0; /*0x4dcf19*/
    }
  }
  v8 = (unsigned int *)(*(int (**)(Cell *, unsigned int *, unsigned int))(this->Cell_field_0x0 + 76))(this, v16, 0); /*0x4dcf31*/
  LOWORD(v17) = *v8 / 256; /*0x4dcf4a*/
  Cell_field_0x0 = this->Cell_field_0x0; /*0x4dcf5b*/
  HIWORD(v17) = v8[1] / 256; /*0x4dcf60*/
  *(unsigned int *)v14 = (unsigned int)(v17); /*0x4dcf69*/
  v10 = (*(int (**)(Cell *))(Cell_field_0x0 + 188))(this); /*0x4dcf6f*/
  v11 = (*(int (**)(Cell *, int))(this->Cell_field_0x0 + 132))(this, v10); /*0x4dcf7a*/
  if ( !((MapSeed *)((MapSeed *)&stru_87F5F0.__pad_58[416]))->CheckTileMatch(v14, a2, *(unsigned int *)(v11 + 1460), 0, 0, 0) ) /*0x4dcf92*/
    return 0; /*0x4dcf92*/
  v12 = ((CellCoord *)((CellCoord *)&stru_87F5F0.__pad_58[416]))->To_CellObj(a2); /*0x4dcfa1*/
  return v12[59] == 5 /*0x4dcfc7*/
      && !(*(int (**)(Cell *, unsigned int *, int, int, unsigned int, int))(this->Cell_field_0x0 + 428))(
            this,
            v12,
            -1,
            -1,
            0,
            1);

}
}
// 0x5657E0
namespace gamemd {
int Cell::Exists(MouseClass * aP1)
{

  int result; // eax

  result = *(int *)aP1; /*0x5657ee*/
  LOBYTE(result) = *((unsigned int *)this->q13C + 512 * aP1[1] + result) != 0; /*0x5657fa*/
  return result; /*0x5657fd*/

}
}
// 0x56D430
namespace gamemd {
int Cell::CoordToIndex(int16_t *aP1)
{

  return *aP1 + aP1[1] * ((int)this->q0F8 + (unsigned int)this->q0F4 + 1); /*0x56d450*/

}
}
// 0x56D460
namespace gamemd {
int Cell::SetRadar(int16_t *aP1)
{

  signed int v2; // eax
  void *Cell_field_0x6C; // edx
  char *Cell_field_0x68; // edx
  char *v5; // ebp
  int v6; // edx
  int result; // eax
  bool v8; // zf
  int v9; // esi
  unsigned int *i; // eax
  int v11; // edx
  int v12; // edi
  unsigned int *v13; // esi
  char *v14; // ecx
  int v15; // [esp+Ch] [ebp-28h]
  char *v16; // [esp+10h] [ebp-24h]
  unsigned int v17[8]; // [esp+14h] [ebp-20h] BYREF
  int v18; // [esp+38h] [ebp+4h]

  v2 = *aP1 + aP1[1] * ((int)this->q0F8 + (unsigned int)this->q0F4 + 1); /*0x56d484*/
  if ( v2 >= 0 ) /*0x56d486*/
  {
    Cell_field_0x6C = this->q06C; /*0x56d48c*/
    if ( v2 >= (int)Cell_field_0x6C ) /*0x56d491*/
      v2 = (signed int)Cell_field_0x6C - 1; /*0x56d493*/
  }
  else
  {
    v2 = 0; /*0x56d488*/
  }
  Cell_field_0x68 = (char *)this->q068; /*0x56d496*/
  v17[2] = 1; /*0x56d499*/
  v17[6] = -1; /*0x56d4a1*/
  v5 = &Cell_field_0x68[4 * v2]; /*0x56d4a9*/
  result = *(unsigned int *)&stru_87F5F0.__pad_58[664] + *(unsigned int *)&stru_87F5F0.__pad_58[660] + 1; /*0x56d4b7*/
  v17[4] = result; /*0x56d4bd*/
  v17[0] = -result; /*0x56d4c3*/
  v17[1] = -(*(unsigned int *)&stru_87F5F0.__pad_58[664] + *(unsigned int *)&stru_87F5F0.__pad_58[660]); /*0x56d4ce*/
  v17[3] = *(unsigned int *)&stru_87F5F0.__pad_58[664] + *(unsigned int *)&stru_87F5F0.__pad_58[660] + 2; /*0x56d4d5*/
  v17[5] = *(unsigned int *)&stru_87F5F0.__pad_58[664] + *(unsigned int *)&stru_87F5F0.__pad_58[660]; /*0x56d4dc*/
  v6 = -1 - result; /*0x56d4e3*/
  LOBYTE(result) = *v5; /*0x56d4e5*/
  v8 = *v5 == 7; /*0x56d4e8*/
  v17[7] = v6; /*0x56d4ea*/
  if ( !v8 ) /*0x56d4ee*/
  {
    v9 = 0; /*0x56d4f0*/
    for ( i = v17; ; ++i ) /*0x56d4f2*/
    {
      v16 = &v5[4 * *i]; /*0x56d502*/
      if ( !*v16 ) /*0x56d4f8*/
        break; /*0x56d4f8*/
      if ( ++v9 >= 8 ) /*0x56d50f*/
        return Terrain::ConnectivityGraph((Terrain *)&stru_87F5F0.__pad_58[416]); /*0x56d50f*/
    }
    if ( !&v5[4 * *i] ) /*0x56d4fc*/
      return Terrain::ConnectivityGraph((Terrain *)&stru_87F5F0.__pad_58[416]); /*0x56d4fc*/
    v11 = this->Cell_field_0x18[0]; /*0x56d528*/
    v18 = 0; /*0x56d52c*/
    v12 = 0; /*0x56d534*/
    v13 = v17; /*0x56d536*/
    v15 = 8; /*0x56d53a*/
    do /*0x56d574*/
    {
      v14 = &v5[4 * *v13]; /*0x56d544*/
      if ( *(unsigned short *)(v11 + 2 * *((uint16_t *)v14 + 1)) != *(unsigned short *)(v11 + 2 * v12) && *v14 != 7 ) /*0x56d55b*/
      {
        v12 = *((uint16_t *)v14 + 1); /*0x56d55d*/
        ++v18; /*0x56d564*/
      }
      ++v13; /*0x56d56c*/
      --v15; /*0x56d570*/
    }
    while ( v15 ); /*0x56d574*/
    result = v18; /*0x56d576*/
    if ( v18 > 3 || *v5 ) /*0x56d580*/
      return Terrain::ConnectivityGraph((Terrain *)&stru_87F5F0.__pad_58[416]); /*0x56d516*/
    *((unsigned short *)v5 + 1) = *((unsigned short *)v16 + 1); /*0x56d58f*/
  }
  return result; /*0x56d51b*/

}
}
// 0x56E990
namespace gamemd {
AbstractClass * * Cell::UpdateTileType(IUnknown * aP0, IUnknown * aP1, int a3)
{

  unsigned int v4; // eax
  unsigned int *v5; // eax
  unsigned int *v6; // esi
  unsigned int *v7; // eax
  int v8; // ecx
  int v9; // ebx
  int v10; // edx
  int v11; // eax
  char v12; // si
  int v13; // ebp
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  bool v17; // sf
  int v18; // eax
  int v20; // [esp+14h] [ebp-14h] BYREF
  int v21; // [esp+18h] [ebp-10h]
  unsigned int v22[3]; // [esp+1Ch] [ebp-Ch] BYREF
  int v23; // [esp+2Ch] [ebp+4h]

  v4 = *aP0 + (aP0[1] << 9); /*0x56e9a9*/
  if ( v4 < 0x40000 && (v5 = *(unsigned int **)(dword_87F924 + 4 * v4)) != 0 ) /*0x56e9bf*/
  {
    v6 = v5; /*0x56e9c1*/
  }
  else
  {
    v6 = (unsigned int *)(&unk_ABDC50); /*0x56e9c7*/
    dword_ABDC74 = *(unsigned int *)aP0; /*0x56e9cc*/
  }
  if ( !(unsigned char)a3 ) /*0x56e9d7*/
  {
    v7 = (unsigned int *)v6[14]; /*0x56e9dd*/
    if ( v7 == (unsigned int *)0xFFFF ) /*0x56e9e5*/
      return (gamemd::AbstractClass **)((char)v7); /*0x56e9e5*/
    if ( v7 == (unsigned int *)255 ) /*0x56e9f0*/
      return (gamemd::AbstractClass **)((char)v7); /*0x56e9f0*/
    LOBYTE(v7) = CellClass::GetTerrainFlag(*((uint8_t *)v6 + 282)); /*0x56ea0a*/
    if ( !(unsigned char)v7 ) /*0x56ea11*/
      return (gamemd::AbstractClass **)((char)v7); /*0x56ea11*/
    v8 = aP0[1] << 8; /*0x56ea2a*/
    v22[0] = (*aP0 << 8) + 128; /*0x56ea2d*/
    v22[1] = v8 + 128; /*0x56ea3b*/
    v22[2] = 0; /*0x56ea47*/
    ((Coord *)(g_TacticalClass_Instance))->To_Screen(v22, &v20); /*0x56ea4f*/
    v21 -= 15 * *((char *)v6 + 283); /*0x56ea78*/
    Cell::CreateCrater(v20 - 128, v21 - 128, 256, 256, 0); /*0x56ea98*/
  }
  v9 = (int)(aP1); /*0x56eaa3*/
  LOBYTE(v7) = (v6[80] & 0x2000) != 0; /*0x56eaaa*/
  if ( (unsigned char)aP1 != (unsigned char)v7 ) /*0x56eaae*/
  {
    v10 = v6[80]; /*0x56eab4*/
    v11 = v6[14]; /*0x56eabc*/
    BYTE1(v10) &= ~0x20u; /*0x56eac5*/
    v6[80] = v10 | ((aP1 & 1) << 13); /*0x56eace*/
    v23 = v11; /*0x56ead9*/
    BuildingClass::AddUpgrade((int)&dword_87F7E8, (int)(v6 + 9)); /*0x56eadd*/
    v12 = 0; /*0x56eae2*/
    v13 = 8; /*0x56eae4*/
    do /*0x56eb67*/
    {
      v14 = v12 & 7; /*0x56eaeb*/
      v15 = 4 * v14 + 9041544; /*0x56eaee*/
      LOWORD(v14) = *aP0 + LOWORD((&dword_89F688)[v14]); /*0x56eb05*/
      HIWORD(a3) = aP0[1] + *(unsigned short *)(v15 + 2); /*0x56eb08*/
      LOWORD(a3) = v14; /*0x56eb0d*/
      v16 = SHIWORD(a3) << 9; /*0x56eb1c*/
      v17 = (int16_t)v14 + v16 < 0; /*0x56eb1f*/
      v18 = (int)((IUnknown *)((int16_t)v14 + v16)); /*0x56eb1f*/
      aP1 = (IUnknown *)(a3); /*0x56eb21*/
      if ( v17 || v18 >= 0x40000 || (v7 = *(unsigned int **)(dword_87F924 + 4 * v18)) == 0 ) /*0x56eb39*/
      {
        dword_ABDC74 = (unsigned int)((unsigned int *)(a3)); /*0x56eb3b*/
        v7 = (unsigned int *)(&unk_ABDC50); /*0x56eb41*/
      }
      if ( v7[14] == v23 ) /*0x56eb4f*/
        LOBYTE(v7) = (unsigned char)(Cell::UpdateTileType((IUnknown *)(&aP1),(IUnknown *)(v9), 1)); /*0x56eb5d*/
      v12 = (v12 + 1) & 7; /*0x56eb63*/
      --v13; /*0x56eb66*/
    }
    while ( v13 ); /*0x56eb67*/
  }
  return (gamemd::AbstractClass **)((char)v7); /*0x56eb69*/

}
}
// 0x56EB80
namespace gamemd {
ObjectClass * * Cell::SetTileType(IUnknown * aP0, IUnknown * aP1, IUnknown * aP2, IUnknown * aP3, int a5)
{

  unsigned short *v5; // edi
  unsigned int v6; // eax
  unsigned int *v7; // eax
  unsigned int *v8; // esi
  char result; // al
  int v10; // ebp
  int v11; // edx
  int v12; // ebx
  char v13; // si
  int v14; // eax
  int16_t v15; // cx
  int v16; // eax
  bool v17; // sf
  int v18; // eax
  unsigned int *v19; // eax
  int v20; // [esp-4h] [ebp-2Ch]
  int v21; // [esp+14h] [ebp-14h] BYREF
  int v22; // [esp+18h] [ebp-10h]
  unsigned int v23[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v5 = (unsigned short *)(aP0); /*0x56eb87*/
  v6 = *aP0 + (aP0[1] << 9); /*0x56eb99*/
  if ( v6 < 0x40000 && (v7 = *(unsigned int **)(dword_87F924 + 4 * v6)) != 0 ) /*0x56ebaf*/
  {
    v8 = v7; /*0x56ebb1*/
  }
  else
  {
    v8 = (unsigned int *)(&unk_ABDC50); /*0x56ebb7*/
    dword_ABDC74 = *(unsigned int *)aP0; /*0x56ebbc*/
  }
  result = (int)(a5); /*0x56ebc1*/
  v10 = (int)(aP1); /*0x56ebc5*/
  if ( (unsigned char)a5 ) /*0x56ebcb*/
  {
    v12 = (int)(aP2); /*0x56ec69*/
  }
  else
  {
    v11 = ((int *)aP0)[1]; /*0x56ebd4*/
    v23[0] = (*aP0 << 8) + 128; /*0x56ebe5*/
    v23[1] = (v11 << 8) + 128; /*0x56ebfe*/
    v23[2] = 0; /*0x56ec02*/
    ((Coord *)(g_TacticalClass_Instance))->To_Screen(v23, &v21); /*0x56ec0a*/
    v22 -= 15 * *((char *)v8 + 283); /*0x56ec33*/
    result = (char)(Cell::CreateCrater(v21 - 128, v22 - 128, 256, 256, 0)); /*0x56ec53*/
    v12 = v8[14]; /*0x56ec58*/
    v10 = (int)(aP1); /*0x56ec5b*/
    if ( aP1 == v12 ) /*0x56ec61*/
      return (gamemd::ObjectClass **)(result); /*0x56ec61*/
  }
  if ( v8[14] != v10 ) /*0x56ec70*/
  {
    v20 = (int)(aP3); /*0x56ec7c*/
    v8[14] = v10; /*0x56ec7d*/
    ((House *)((int)v8))->AnnounceUpgrade(v20); /*0x56ec80*/
    BuildingClass::AddUpgrade(v8 + 9); /*0x56ec8e*/
    v13 = 0; /*0x56ec93*/
    aP1 = (IUnknown *)(8); /*0x56ec95*/
    do /*0x56ed23*/
    {
      v14 = v13 & 7; /*0x56ec9f*/
      v15 = (&dword_89F688)[v14]; /*0x56eca2*/
      LOWORD(v14) = v5[1] + HIWORD((&dword_89F688)[v14]); /*0x56ecb8*/
      LOWORD(a5) = *v5 + v15; /*0x56ecbc*/
      HIWORD(a5) = v14; /*0x56ecc4*/
      v16 = (int16_t)v14 << 9; /*0x56ecd0*/
      v17 = (int16_t)a5 + v16 < 0; /*0x56ecd3*/
      v18 = (int16_t)a5 + v16; /*0x56ecd3*/
      aP0 = (IUnknown *)((int16_t *)a5); /*0x56ecd5*/
      if ( v17 || v18 >= 0x40000 || (v19 = *(unsigned int **)(dword_87F924 + 4 * v18)) == 0 ) /*0x56eced*/
      {
        dword_ABDC74 = a5; /*0x56ecef*/
        v19 = (unsigned int *)(&unk_ABDC50); /*0x56ecf5*/
      }
      if ( v19[14] == v12 ) /*0x56ecfd*/
        Cell::SetTileType((IUnknown *)(&aP0), (IUnknown *)v10, (IUnknown *)v12, aP3, 1); /*0x56ed11*/
      v13 = (v13 + 1) & 7; /*0x56ed1b*/
      result = (char)(--aP1); /*0x56ed1e*/
    }
    while ( aP1 ); /*0x56ed23*/
  }
  return (gamemd::ObjectClass **)(result); /*0x56ed29*/

}
}
// 0x578AD0
namespace gamemd {
int Cell::IsPassableAllied(IUnknown * aP0, IUnknown * aP1)
{

  unsigned int v2; // eax
  unsigned int *v3; // eax
  int v4; // esi

  v2 = *aP1 + (aP1[1] << 9); /*0x578ade*/
  if ( v2 >= 0x40000 || (v3 = *(unsigned int **)(dword_87F924 + 4 * v2)) == 0 ) /*0x578af4*/
  {
    dword_ABDC74 = *(unsigned int *)aP1; /*0x578af8*/
    v3 = (unsigned int *)(&unk_ABDC50); /*0x578afd*/
  }
  v4 = v3[57]; /*0x578b03*/
  if ( !v4 ) /*0x578b0c*/
    return 1; /*0x578b58*/
  while ( aP0 == v4 /*0x578b30*/
       || (*(int (**)(int))(*(unsigned int *)v4 + 44))(v4) != 6
       || !*(unsigned char *)(*(unsigned int *)(v4 + 1312) + 5815) )
  {
LABEL_10:
    v4 = *(unsigned int *)(v4 + 48); /*0x578b4d*/
    if ( !v4 ) /*0x578b52*/
      return 1; /*0x578b52*/
  }
  if ( !((Object *)(*(unsigned int **)(v4 + 540)))->IsAlliedWithObjectHouse((int)(aP0)) ) /*0x578b39*/
  {
    if ( (uint8_t)((BuildingClass *)v4)->IsPoweredOn() ) /*0x578b44*/
      return 1; /*0x578b4b*/
    goto LABEL_10; /*0x578b4b*/
  }
  return ((BuildingClass *)v4)->MakeTraversable(); /*0x578b58*/

}
}
// 0x579B70
namespace gamemd {
HouseClass * * Cell::GetAdjacencyFlags(MouseClass * aP0)
{

  int16_t v1; // cx
  unsigned int v2; // eax
  char *v3; // eax
  int v4; // eax
  bool v5; // sf
  int v6; // eax
  char *v7; // eax
  int16_t v8; // dx
  unsigned int v9; // eax
  char *v10; // eax
  int v11; // eax
  int v12; // eax
  char *v13; // eax
  int16_t v14; // cx
  int v15; // eax
  int v16; // edx
  int v17; // eax
  char *v18; // eax
  int v19; // esi
  int v20; // esi
  unsigned int v21; // eax
  char *v22; // eax
  char *v23; // ebp
  unsigned int v24; // eax
  char *v25; // eax
  char *v26; // ebx
  int v27; // edi
  int v28; // edi
  int v29; // ebp
  unsigned short *v30; // eax
  unsigned short *v31; // eax
  unsigned short *v32; // eax
  unsigned short *v33; // eax
  int v35; // [esp+Ch] [ebp-2Ch]
  char *v36; // [esp+10h] [ebp-28h]
  char *v37; // [esp+14h] [ebp-24h]
  char *v38; // [esp+18h] [ebp-20h]
  char *v39; // [esp+1Ch] [ebp-1Ch]
  char *v40; // [esp+20h] [ebp-18h]
  char *v41; // [esp+24h] [ebp-14h]
  int v42; // [esp+28h] [ebp-10h] BYREF
  int v43; // [esp+2Ch] [ebp-Ch] BYREF
  int16_t v44[4]; // [esp+30h] [ebp-8h] BYREF

  v35 = *(char *)(aP0 + 283); /*0x579b89*/
  aP0 = (gamemd::MouseClass *)(*(unsigned int *)(aP0 + 36)); /*0x579b8d*/
  *(unsigned int *)v44 = (unsigned int)(aP0); /*0x579b91*/
  if ( SHIWORD(aP0) + (int16_t)aP0 <= dword_87F8DC /*0x579bdf*/
    || (int16_t)aP0 - SHIWORD(aP0) >= dword_87F8DC
    || SHIWORD(aP0) - (int16_t)aP0 >= dword_87F8DC
    || SHIWORD(aP0) + (int16_t)aP0 > dword_87F8DC + 2 * dword_87F8E0
    || !*(unsigned char *)(((Tactical *)(v44))->GetCellData() + 74) )
  {
    return 0; /*0x57a0b0*/
  }
  v1 = v44[0] + 1; /*0x579bfa*/
  LOWORD(aP0) = v44[0] + 1; /*0x579c00*/
  v42 = *(unsigned int *)&v44[1] - 1; /*0x579c05*/
  HIWORD(aP0) = v44[1] - 1; /*0x579c09*/
  v2 = (int16_t)(v44[0] + 1) + ((int16_t)(v44[1] - 1) << 9); /*0x579c17*/
  if ( v2 < 0x40000 && (v3 = *(char **)(dword_87F924 + 4 * v2)) != 0 ) /*0x579c27*/
  {
    v36 = v3; /*0x579c29*/
  }
  else
  {
    v36 = (char *)&unk_ABDC50; /*0x579c33*/
    dword_ABDC74 = (unsigned int)(aP0); /*0x579c3b*/
  }
  LOWORD(aP0) = v44[0] + 1; /*0x579c45*/
  v4 = v44[1] << 9; /*0x579c4d*/
  v5 = v1 + v4 < 0; /*0x579c50*/
  v6 = v1 + v4; /*0x579c50*/
  HIWORD(aP0) = v44[1]; /*0x579c52*/
  if ( v5 || v6 >= 0x40000 || (v7 = *(char **)(dword_87F924 + 4 * v6)) == 0 ) /*0x579c65*/
  {
    v38 = (char *)&unk_ABDC50; /*0x579c71*/
    dword_ABDC74 = (unsigned int)(aP0); /*0x579c79*/
  }
  else
  {
    v38 = v7; /*0x579c67*/
  }
  v8 = v44[1] + 1; /*0x579c7e*/
  LOWORD(aP0) = v44[0] + 1; /*0x579c81*/
  HIWORD(aP0) = v44[1] + 1; /*0x579c89*/
  v9 = v1 + ((int16_t)(v44[1] + 1) << 9); /*0x579c97*/
  if ( v9 < 0x40000 && (v10 = *(char **)(dword_87F924 + 4 * v9)) != 0 ) /*0x579ca7*/
  {
    v41 = v10; /*0x579ca9*/
  }
  else
  {
    v41 = (char *)&unk_ABDC50; /*0x579cb3*/
    dword_ABDC74 = (unsigned int)(aP0); /*0x579cbb*/
  }
  aP0 = (gamemd::MouseClass *)(*(unsigned int *)v44 + 0x10000); /*0x579cc8*/
  v11 = v8 << 9; /*0x579cd3*/
  v5 = v44[0] + v11 < 0; /*0x579cd6*/
  v12 = v44[0] + v11; /*0x579cd6*/
  v43 = v44[0]; /*0x579cd8*/
  if ( v5 || v12 >= 0x40000 || (v13 = *(char **)(dword_87F924 + 4 * v12)) == 0 ) /*0x579cea*/
  {
    v40 = (char *)&unk_ABDC50; /*0x579cf6*/
    dword_ABDC74 = (unsigned int)(aP0); /*0x579cfe*/
  }
  else
  {
    v40 = v13; /*0x579cec*/
  }
  v14 = v44[0] - 1; /*0x579d04*/
  HIWORD(aP0) = v44[1] + 1; /*0x579d07*/
  v15 = v8; /*0x579d0c*/
  v16 = (int16_t)(v44[0] - 1); /*0x579d0f*/
  v15 <<= 9; /*0x579d12*/
  v5 = v16 + v15 < 0; /*0x579d15*/
  v17 = v16 + v15; /*0x579d15*/
  LOWORD(aP0) = v44[0] - 1; /*0x579d17*/
  if ( v5 || v17 >= 0x40000 || (v18 = *(char **)(dword_87F924 + 4 * v17)) == 0 ) /*0x579d2a*/
  {
    v39 = (char *)&unk_ABDC50; /*0x579d36*/
    dword_ABDC74 = (unsigned int)(aP0); /*0x579d3e*/
  }
  else
  {
    v39 = v18; /*0x579d2c*/
  }
  HIWORD(aP0) = v44[1]; /*0x579d46*/
  v19 = v44[1] << 9; /*0x579d4e*/
  v5 = v14 + v19 < 0; /*0x579d51*/
  v20 = v14 + v19; /*0x579d51*/
  LOWORD(aP0) = v44[0] - 1; /*0x579d53*/
  if ( v5 || v20 >= 0x40000 || !*(unsigned int *)(dword_87F924 + 4 * v20) ) /*0x579d63*/
  {
    v37 = (char *)&unk_ABDC50; /*0x579d74*/
    dword_ABDC74 = (unsigned int)(aP0); /*0x579d7c*/
  }
  else
  {
    v37 = *(char **)(dword_87F924 + 4 * v20); /*0x579d6a*/
  }
  LOWORD(aP0) = v44[0] - 1; /*0x579d85*/
  HIWORD(aP0) = v42; /*0x579d8d*/
  v21 = v14 + ((int16_t)v42 << 9); /*0x579d9b*/
  if ( v21 < 0x40000 && (v22 = *(char **)(dword_87F924 + 4 * v21)) != 0 ) /*0x579dab*/
  {
    v23 = v22; /*0x579dad*/
  }
  else
  {
    v23 = (char *)&unk_ABDC50; /*0x579db5*/
    dword_ABDC74 = (unsigned int)(aP0); /*0x579dba*/
  }
  HIWORD(aP0) = v42; /*0x579dc6*/
  LOWORD(aP0) = v44[0]; /*0x579dcb*/
  v24 = v43 + ((int16_t)v42 << 9); /*0x579dd6*/
  if ( v24 < 0x40000 && (v25 = *(char **)(dword_87F924 + 4 * v24)) != 0 ) /*0x579de6*/
  {
    v26 = v25; /*0x579de8*/
  }
  else
  {
    v26 = (char *)&unk_ABDC50; /*0x579df0*/
    dword_ABDC74 = (unsigned int)(aP0); /*0x579df5*/
  }
  v27 = v14 + (int16_t)v42; /*0x579e07*/
  if ( v27 <= dword_87F8DC /*0x579e27*/
    || v14 - (int16_t)v42 >= dword_87F8DC
    || (int16_t)v42 - v14 >= dword_87F8DC
    || v27 > dword_87F8DC + 2 * dword_87F8E0 )
  {
    v29 = 0; /*0x579e53*/
    v28 = v35; /*0x579e57*/
  }
  else
  {
    v28 = v35; /*0x579e29*/
    if ( v23[283] != v35 + 4 || CellLand::IsBuildable((int)v23) ) /*0x579e3d*/
      v29 = 0; /*0x579e4d*/
    else
      v29 = 64; /*0x579e46*/
  }
  aP0 = (gamemd::MouseClass *)(*(unsigned int *)v44 - 0x10000); /*0x579e6a*/
  if ( ((LayerClass *)(&dword_87F7E8))->CoordinatesLegal((int16_t *)&aP0) /*0x579e9a*/
    && v26[283] == v28 + 4
    && !CellLand::IsBuildable((int)v26) )
  {
    v29 |= 0x80u; /*0x579ea3*/
  }
  aP0 = (gamemd::MouseClass *)(-65535); /*0x579eba*/
  v43 = (int)(*((CellStruct *)(v44))->Add((unsigned int *)(&v42), &aP0)); /*0x579ed7*/
  if ( ((LayerClass *)(&dword_87F7E8))->CoordinatesLegal((int16_t *)&v43) /*0x579ef6*/
    && v36[283] == v28 + 4
    && !CellLand::IsBuildable((int)v36) )
  {
    v29 |= 1u; /*0x579eff*/
  }
  aP0 = (gamemd::MouseClass *)(0xFFFF); /*0x579f10*/
  v43 = (int)(*((CellStruct *)(v44))->Add((unsigned int *)(&v42), &aP0)); /*0x579f2d*/
  if ( ((LayerClass *)(&dword_87F7E8))->CoordinatesLegal((int16_t *)&v43) /*0x579f4c*/
    && v37[283] == v28 + 4
    && !CellLand::IsBuildable((int)v37) )
  {
    v29 |= 0x20u; /*0x579f55*/
  }
  v30 =(unsigned short *)((CellStruct *)(&v43))->Set(1, 0); /*0x579f60*/
  aP0 =(gamemd::MouseClass *)*((CellStruct *)(v44))->Add(&v42, v30); /*0x579f80*/
  if ( (unsigned int *)((LayerClass *)(&dword_87F7E8))->CoordinatesLegal((int16_t *)&aP0) /*0x579f9f*/
    && v38[283] == v28 + 4
    && !CellLand::IsBuildable((int)v38) )
  {
    v29 |= 2u; /*0x579fa8*/
  }
  v31 =(unsigned short *)((CellStruct *)(&v43))->Set(-1, 1); /*0x579fb2*/
  aP0 =(gamemd::MouseClass *)*((CellStruct *)(v44))->Add(&v42, v31); /*0x579fd2*/
  if ( (unsigned int *)((LayerClass *)(&dword_87F7E8))->CoordinatesLegal((int16_t *)&aP0) /*0x579ff1*/
    && v39[283] == v28 + 4
    && !CellLand::IsBuildable((int)v39) )
  {
    v29 |= 0x10u; /*0x579ffa*/
  }
  v32 =(unsigned short *)((CellStruct *)(&v43))->Set(0, 1); /*0x57a005*/
  aP0 =(gamemd::MouseClass *)*((CellStruct *)(v44))->Add(&v42, v32); /*0x57a025*/
  if ( (unsigned int *)((LayerClass *)(&dword_87F7E8))->CoordinatesLegal((int16_t *)&aP0) /*0x57a044*/
    && v40[283] == v28 + 4
    && !CellLand::IsBuildable((int)v40) )
  {
    v29 |= 8u; /*0x57a04d*/
  }
  v33 =(unsigned short *)((CellStruct *)(&v43))->Set(1, 1); /*0x57a058*/
  aP0 =(gamemd::MouseClass *)*((CellStruct *)(v44))->Add(&v42, v33); /*0x57a078*/
  if ( (unsigned int *)((LayerClass *)(&dword_87F7E8))->CoordinatesLegal((int16_t *)&aP0) /*0x57a097*/
    && v41[283] == v28 + 4
    && !CellLand::IsBuildable((int)v41) )
  {
return (gamemd::HouseClass **)v29 | 4; /*0x57a0a0*/
  }
return (gamemd::HouseClass **)v29; /*0x57a0a7*/

}
}
// 0x57B210
namespace gamemd {
int Cell::GetTerrainMask(int *aP1, int a3)
{

  int v3; // ebx
  int v5; // esi
  int v6; // eax
  int result; // eax
  int v8; // eax
  char *CellData; // eax
  unsigned int *Cell_field_0x13C; // edx
  int v11; // esi
  Cell *v12; // ecx
  unsigned int *v13; // esi
  char v14; // bl
  int v15; // edi
  Cell *v16; // ecx
  unsigned int *v17; // esi
  Cell *v18; // ecx
  unsigned int *v19; // esi
  Cell *v20; // ecx
  unsigned int *v21; // esi
  Cell *v22; // ecx
  unsigned int *v23; // esi
  Cell *v24; // ecx
  unsigned int *v25; // esi
  Cell *v26; // ecx
  unsigned int *v27; // esi
  Cell *v28; // ecx
  unsigned int *v29; // esi
  int v30; // [esp+18h] [ebp-8h]
  char IsValidHeight; // [esp+24h] [ebp+4h]

  v3 = g_CellPassabilityLUT; /*0x57b214*/
  v5 = aP1[9]; /*0x57b224*/
  v30 = g_CellPassabilityLUT + 14; /*0x57b239*/
  IsValidHeight = ((Cell*)((Cell *)aP1))->IsValidHeight(); /*0x57b248*/
  v6 = SHIWORD(v5) + (int16_t)v5; /*0x57b254*/
  if ( v6 <= g_MissionQueueFrame.localVariables[160] /*0x57b271*/
    || (int16_t)v5 - SHIWORD(v5) >= g_MissionQueueFrame.localVariables[160]
    || SHIWORD(v5) - (int16_t)v5 >= g_MissionQueueFrame.localVariables[160]
    || v6 > g_MissionQueueFrame.localVariables[161] )
  {
    return 0; /*0x57b27c*/
  }
  if ( a3 ) /*0x57b285*/
  {
    if ( a3 == 1 ) /*0x57b2a1*/
    {
      v8 = aP1[14]; /*0x57b2a3*/
      if ( v8 >= v3 && v8 < v30 ) /*0x57b2ae*/
        return 0; /*0x57b2b9*/
    }
  }
  else if ( !(uint8_t)((Cell*)((Cell *)aP1))->IsEmpty() ) /*0x57b289*/
  {
    return 0; /*0x57b29b*/
  }
  a3 = aP1[9]; /*0x57b2c3*/
  CellData =(char *)((Tactical *)((Tactical *)&a3))->GetCellData(); /*0x57b2c7*/
  if ( !CellData[74] ) /*0x57b2cc*/
    return 0; /*0x57b2d6*/
  result = *((unsigned int *)CellData + 16); /*0x57b2df*/
  if ( result < 0 ) /*0x57b2e4*/
  {
    Cell_field_0x13C =(unsigned int *)this->Cell_field_0x13C; /*0x57b2f1*/
    v11 = (int16_t)v5 + (SHIWORD(v5) << 9); /*0x57b2f7*/
    v12 = (Cell *)Cell_field_0x13C[v11 - 513]; /*0x57b2f9*/
    v13 = &Cell_field_0x13C[v11 - 513]; /*0x57b300*/
    if ( v12 && (uint8_t)((Cell*)v12)->IsValidHeight() ) /*0x57b30b*/
    {
      v14 = IsValidHeight; /*0x57b328*/
      v15 = 64; /*0x57b32c*/
    }
    else if ( *v13 ) /*0x57b314*/
    {
      v15 = 0; /*0x57b333*/
      v14 = IsValidHeight; /*0x57b337*/
    }
    else
    {
      v14 = IsValidHeight; /*0x57b319*/
      if ( IsValidHeight ) /*0x57b31f*/
        v15 = 64; /*0x57b321*/
      else
        v15 = 0; /*0x57b33d*/
    }
    v16 = (Cell *)v13[1]; /*0x57b341*/
    v17 = v13 + 1; /*0x57b344*/
    if ( v16 && (uint8_t)((Cell*)v16)->IsValidHeight() || !*v17 && v14 ) /*0x57b35b*/
      v15 |= 0x80u; /*0x57b35d*/
    v18 = (Cell *)v17[1]; /*0x57b363*/
    v19 = v17 + 1; /*0x57b366*/
    if ( v18 && (uint8_t)((Cell*)v18)->IsValidHeight() || !*v19 && v14 ) /*0x57b37d*/
      v15 |= 1u; /*0x57b37f*/
    v20 = (Cell *)v19[510]; /*0x57b382*/
    v21 = v19 + 510; /*0x57b388*/
    if ( v20 && (uint8_t)((Cell*)v20)->IsValidHeight() || !*v21 && v14 ) /*0x57b3a2*/
      v15 |= 0x20u; /*0x57b3a4*/
    v22 = (Cell *)v21[2]; /*0x57b3a7*/
    v23 = v21 + 2; /*0x57b3aa*/
    if ( v22 && (uint8_t)((Cell*)v22)->IsValidHeight() || !*v23 && v14 ) /*0x57b3c1*/
      v15 |= 2u; /*0x57b3c3*/
    v24 = (Cell *)v23[510]; /*0x57b3c6*/
    v25 = v23 + 510; /*0x57b3cc*/
    if ( v24 && (uint8_t)((Cell*)v24)->IsValidHeight() || !*v25 && v14 ) /*0x57b3e6*/
      v15 |= 0x10u; /*0x57b3e8*/
    v26 = (Cell *)v25[1]; /*0x57b3eb*/
    v27 = v25 + 1; /*0x57b3ee*/
    if ( v26 && (uint8_t)((Cell*)v26)->IsValidHeight() || !*v27 && v14 ) /*0x57b405*/
      v15 |= 8u; /*0x57b407*/
    v28 = (Cell *)v27[1]; /*0x57b40a*/
    v29 = v27 + 1; /*0x57b40d*/
    if ( v28 && (uint8_t)((Cell*)v28)->IsValidHeight() || !*v29 && v14 ) /*0x57b424*/
      return v15 | 4; /*0x57b426*/
    return v15; /*0x57b429*/
  }
  return result; /*0x57b273*/

}
}
// 0x5A9940
namespace gamemd {
void * Cell::Clear(void *a1_1)
{

  this->Cell_field_0x0 = 0; /*0x5a9942*/
  this->Cell_field_0x4 = (void *)-1; /*0x5a994d*/
  return this; /*0x5a9954*/

}
}
// 0x6B5F80
namespace gamemd {
int Cell::IsWalkable(unsigned short * a2, char a3)
{

  int result; // eax
  int v4; // ebx
  int v6; // ebp
  void *v7; // esi
  int v8; // esi
  Cell *v9; // [esp+10h] [ebp-8h]
  int16_t v10[2]; // [esp+14h] [ebp-4h] BYREF
  int16_t *v11; // [esp+1Ch] [ebp+4h]

  result = (int)this->Cell_field_0x29C; /*0x6b5f83*/
  v4 = 0; /*0x6b5f8b*/
  v9 = this; /*0x6b5f91*/
  if ( result <= 0 ) /*0x6b5f95*/
  {
LABEL_16:
    LOBYTE(result) = 1; /*0x6b6060*/
  }
  else
  {
    while ( 1 ) /*0x6b5fa5*/
    {
      v6 = 0; /*0x6b5fa5*/
      if ( (int)this->Cell_field_0x298 > 0 ) /*0x6b5fa9*/
        break; /*0x6b5fa9*/
LABEL_15:
      result = (int)this->Cell_field_0x29C; /*0x6b6051*/
      if ( ++v4 >= result ) /*0x6b605a*/
        goto LABEL_16; /*0x6b605a*/
    }
    while ( 1 ) /*0x6b5fbc*/
    {
      LOWORD(v11) = v6 + *a2; /*0x6b5fbc*/
      HIWORD(v11) = v4 + a2[1]; /*0x6b5fc1*/
      *(unsigned int *)v10 =(unsigned int)v11; /*0x6b5fd4*/
      v7 = ((CellCoord *)((CellCoord *)&stru_87F5F0.__pad_58[416]))->To_CellObj(v10); /*0x6b5fe3*/
      result = ((LayerClass *)((LayerClass *)&stru_87F5F0.__pad_58[416]))->CoordinatesLegal(a2); /*0x6b5fe5*/
      if ( !(unsigned char)result ) /*0x6b5fec*/
        break; /*0x6b5fec*/
      if ( *((unsigned char *)v7 + 284) ) /*0x6b5fee*/
        break; /*0x6b5fee*/
      result = -1; /*0x6b5ffb*/
      if ( *((unsigned int *)v7 + 18) != -1 ) /*0x6b6000*/
        break; /*0x6b6000*/
      if ( *((unsigned int *)v7 + 17) != -1 ) /*0x6b6005*/
        break; /*0x6b6005*/
      if ( !a3 ) /*0x6b600d*/
      {
        result = (int)((Cell *)((Cell *)v7))->IsBridge(); /*0x6b6011*/
        if ( result ) /*0x6b6018*/
          break; /*0x6b6018*/
      }
      v8 = *((unsigned int *)v7 + 14); /*0x6b601a*/
      if ( v8 < 0 || v8 >= *(int *)&(unsigned int *)((char *)&stru_A8EB00 + 340) ) /*0x6b6027*/
        v8 = 0; /*0x6b6029*/
      if ( !*(unsigned char *)(*(unsigned int *)(*(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 328) + 4 * v8) + 736) ) /*0x6b6034*/
        break; /*0x6b6034*/
      if ( ++v6 >= (int)v9->Cell_field_0x298 ) /*0x6b6049*/
      {
        this = v9; /*0x6b604f*/
        goto LABEL_15; /*0x6b604f*/
      }
    }
    LOBYTE(result) = 0; /*0x6b606f*/
  }
  return result; /*0x6b6060*/

}
}
// 0x6D2790
namespace gamemd {
void* Cell::CreateCrater(a1, void *a2, void *a3, void *a4, void *a5)
{

  int v5; // ecx
  int *v6; // eax
  int v7; // ebp
  int v8; // ecx
  int v9; // edx
  int v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // edx
  int v14; // eax
  char *v15; // esi
  char *v16; // edi
  int v17; // eax
  bool v18; // cc
  int v19; // eax
  bool v20; // bl
  int v21; // edx
  int v22; // ecx
  int v23; // edx
  const RECT *v25; // [esp+0h] [ebp-68h]
  const RECT *v26; // [esp+4h] [ebp-64h]
  int v27; // [esp+10h] [ebp-58h]
  int v28; // [esp+14h] [ebp-54h]
  int v29; // [esp+18h] [ebp-50h]
  int v30; // [esp+1Ch] [ebp-4Ch]
  int v31; // [esp+20h] [ebp-48h]
  int v32; // [esp+24h] [ebp-44h]
  int v33; // [esp+28h] [ebp-40h]
  int v34; // [esp+2Ch] [ebp-3Ch]
  int v35; // [esp+30h] [ebp-38h] BYREF
  int v36; // [esp+34h] [ebp-34h]
  int v37; // [esp+38h] [ebp-30h]
  int v38; // [esp+3Ch] [ebp-2Ch]
  unsigned int v39[5]; // [esp+40h] [ebp-28h] BYREF
  unsigned int v40[5]; // [esp+54h] [ebp-14h] BYREF

  v5 = g_CraterCreationState; /*0x6d2793*/
  v29 = -1; /*0x6d27a1*/
  v30 = 0x7FFFFFFF; /*0x6d27a9*/
  v28 = 0; /*0x6d27b1*/
  if ( g_CraterCreationState <= 0 ) /*0x6d27b5*/
    goto LABEL_43; /*0x6d27b5*/
  v27 = 0; /*0x6d27bb*/
  do /*0x6d2a15*/
  {
    v35 = *(unsigned int *)((char *)g_CraterPool + v27); /*0x6d27d0*/
    v36 = *(unsigned int *)((char *)g_CraterPool + v27 + 4); /*0x6d27d7*/
    v37 = *(unsigned int *)((char *)g_CraterPool + v27 + 8); /*0x6d27de*/
    v38 = *(unsigned int *)((char *)g_CraterPool + v27 + 12); /*0x6d27f2*/
    v6 = ClipRectIntersection(v40, &v35, &aP2, 0, 0); /*0x6d27f6*/
    v7 = v38; /*0x6d2801*/
    v31 = *v6; /*0x6d2805*/
    v32 = v6[1]; /*0x6d280c*/
    v8 = v36; /*0x6d2810*/
    v33 = v6[2]; /*0x6d2817*/
    v9 = v35; /*0x6d281b*/
    v34 = v6[3]; /*0x6d2824*/
    if ( v37 <= 0 || v38 <= 0 ) /*0x6d2830*/
    {
      v10 = a4; /*0x6d28c8*/
      v39[1] = a2; /*0x6d28cc*/
      v11 = a3; /*0x6d28d0*/
      v39[0] = aP2; /*0x6d28d4*/
    }
    else if ( a3 <= 0 || a4 <= 0 ) /*0x6d2844*/
    {
      v39[0] = v35; /*0x6d28b2*/
      v39[1] = v36; /*0x6d28b6*/
      v11 = v37; /*0x6d28ba*/
      v10 = v38; /*0x6d28bc*/
    }
    else
    {
      v10 = v38; /*0x6d2846*/
      v11 = v37; /*0x6d284e*/
      if ( v35 > aP2 ) /*0x6d2850*/
      {
        v11 = v35 + v37 - aP2; /*0x6d2854*/
        v9 = aP2; /*0x6d2856*/
      }
      if ( v36 > a2 ) /*0x6d285e*/
      {
        v10 = v36 - a2 + v38; /*0x6d2862*/
        v8 = a2; /*0x6d2864*/
      }
      if ( v11 + v9 < aP2 + a3 ) /*0x6d2871*/
        v11 = a3 - v9 + aP2 + 1; /*0x6d287d*/
      if ( v10 + v8 < a4 + a2 ) /*0x6d2890*/
        v10 = a2 - v8 + a4 + 1; /*0x6d289c*/
      v7 = v38; /*0x6d28a0*/
      v39[0] = v9; /*0x6d28a4*/
      v9 = v35; /*0x6d28a8*/
      v39[1] = v8; /*0x6d28ac*/
    }
    if ( v33 > 0 && v34 > 0 ) /*0x6d28ea*/
    {
      if ( v31 == aP2 && v32 == a2 && v33 == a3 && v34 == a4 ) /*0x6d291e*/
      {
        LOBYTE(v12) = a5; /*0x6d2920*/
        if ( !a5 ) /*0x6d2926*/
          return v12; /*0x6d2926*/
        LOBYTE(v12) = v27; /*0x6d2932*/
        if ( *((unsigned char *)g_CraterPool + v27 + 16) ) /*0x6d2936*/
          return v12; /*0x6d293c*/
      }
      else if ( v31 == v9 && v32 == v36 && v33 == v37 && v34 == v7 ) /*0x6d2967*/
      {
        if ( a5 || !*((unsigned char *)g_CraterPool + v27 + 16) ) /*0x6d297b*/
        {
          if ( v28 < g_CraterCreationState ) /*0x6d298e*/
          {
            v13 = v28; /*0x6d2991*/
            if ( v28 < --g_CraterCreationState ) /*0x6d299a*/
            {
              v14 = v27; /*0x6d299c*/
              do /*0x6d29be*/
              {
                ++v13; /*0x6d29a6*/
                v15 = (char *)g_CraterPool + v14 + 20; /*0x6d29a7*/
                v16 = (char *)g_CraterPool + v14; /*0x6d29ab*/
                v14 += 20; /*0x6d29b3*/
                qmemcpy(v16, v15, 0x14u); /*0x6d29b6*/
              }
              while ( v13 < g_CraterCreationState ); /*0x6d29be*/
            }
          }
          --v28; /*0x6d29c8*/
          v27 -= 20; /*0x6d29cc*/
        }
      }
      else
      {
        v17 = v10 * v11; /*0x6d29de*/
        if ( v17 < v37 * v7 + a3 * a4 && v17 < v30 ) /*0x6d29eb*/
        {
          v30 = v17; /*0x6d29f1*/
          v29 = v28; /*0x6d29f5*/
        }
      }
    }
    v5 = g_CraterCreationState; /*0x6d2a01*/
    v18 = ++v28 < g_CraterCreationState; /*0x6d2a0b*/
    v27 += 20; /*0x6d2a11*/
  }
  while ( v18 ); /*0x6d2a15*/
  if ( v29 == -1 ) /*0x6d2a22*/
  {
LABEL_43:
    v40[0] = aP2; /*0x6d2a30*/
    v40[2] = a3; /*0x6d2a38*/
    LOBYTE(v40[4]) = a5; /*0x6d2a40*/
    LOBYTE(v12) = dword_B0CE80; /*0x6d2a44*/
    v40[1] = a2; /*0x6d2a49*/
    v40[3] = a4; /*0x6d2a53*/
    if ( v5 < dword_B0CE80 /*0x6d2a8e*/
      || (byte_B0CE85 || !dword_B0CE80)
      && dword_B0CE8C > 0
      && (LOBYTE(v12) = (*(int (**)(int *, int, unsigned int))(dword_B0CE78 + 8))(
                          &dword_B0CE78,
                          dword_B0CE8C + dword_B0CE80,
                          0),
          (unsigned char)v12) )
    {
      v19 = g_CraterCreationState++; /*0x6d2a9e*/
      v12 = 5 * v19; /*0x6d2aad*/
      qmemcpy((char *)g_CraterPool + 4 * v12, v40, 0x14u); /*0x6d2ab8*/
    }
  }
  else
  {
    v20 = a5 || *((unsigned char *)g_CraterPool + 20 * v29 + 16); /*0x6d2ae0*/
    v12 = Rect::Union((LPRECT)((char *)g_CraterPool + 20 * v29), v25, v26); /*0x6d2b01*/
    v21 = *(unsigned int *)(v12 + 4); /*0x6d2b08*/
    v39[0] = *(unsigned int *)v12; /*0x6d2b0b*/
    v22 = *(unsigned int *)(v12 + 8); /*0x6d2b0f*/
    v39[1] = v21; /*0x6d2b12*/
    v23 = *(unsigned int *)(v12 + 12); /*0x6d2b16*/
    LOBYTE(v12) = (unsigned char)g_CraterPool; /*0x6d2b19*/
    v39[2] = v22; /*0x6d2b1e*/
    v39[3] = v23; /*0x6d2b27*/
    LOBYTE(v39[4]) = v20; /*0x6d2b32*/
    qmemcpy((char *)g_CraterPool + 20 * v29, v39, 0x14u); /*0x6d2b36*/
  }
  return v12; /*0x6d2aba*/

}
}
// 0x6D8700
namespace gamemd {
CellStruct * * Cell::GetAdjacentPassableMask(IUnknown * aP0, int a2)
{

  int v2; // ebp
  int v3; // edi
  unsigned int *v4; // eax
  int v5; // eax
  char v6; // bl
  int16_t v7; // cx
  int16_t v8; // dx
  int16_t v9; // ax
  int16_t v10; // ax
  int16_t v11; // cx
  int16_t v12; // ax
  int16_t v13; // cx
  int16_t v14; // dx
  uint8_t v15; // cl
  int v16; // eax
  int16_t v17; // ax
  int16_t v18; // cx
  int16_t v19; // dx
  int16_t v20; // dx
  int16_t v21; // ax
  int16_t v22; // dx
  int16_t v23; // ax
  int16_t v24; // cx

  v2 = 0; /*0x6d870e*/
  v3 = -1; /*0x6d8710*/
  v4 = ((CellCoord *)(&dword_87F7E8))->To_CellObj(aP0); /*0x6d8713*/
  if ( !(unsigned char)a2 ) /*0x6d871e*/
  {
    v16 = v4[75]; /*0x6d88f4*/
    if ( (v16 & 0x18) == 0 ) /*0x6d88fc*/
      v3 = -2; /*0x6d88fe*/
    v6 = 8; /*0x6d8903*/
    if ( (v16 & 8) != 0 ) /*0x6d890a*/
    {
      v17 = aP0[1] - 1; /*0x6d8919*/
      LOWORD(a2) = *aP0 - 1; /*0x6d891b*/
      HIWORD(a2) = v17; /*0x6d8920*/
      if ( (*((unsigned char *)((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)&a2) + 300) & 8) == 0 ) /*0x6d8942*/
        v2 = 64; /*0x6d8944*/
      v18 = aP0[1] - 1; /*0x6d8950*/
      LOWORD(a2) = *aP0; /*0x6d8952*/
      HIWORD(a2) = v18; /*0x6d8957*/
      if ( (*((unsigned char *)((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)&a2) + 300) & 8) == 0 ) /*0x6d8979*/
        v2 |= 0x80u; /*0x6d897b*/
      v19 = aP0[1] - 1; /*0x6d898a*/
      LOWORD(a2) = *aP0 + 1; /*0x6d898c*/
      HIWORD(a2) = v19; /*0x6d8995*/
      if ( (*((unsigned char *)((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)&a2) + 300) & 8) == 0 ) /*0x6d89b3*/
        v2 |= 1u; /*0x6d89b5*/
      v20 = *aP0 - 1; /*0x6d89bf*/
      HIWORD(a2) = aP0[1]; /*0x6d89c1*/
      LOWORD(a2) = v20; /*0x6d89c6*/
      if ( (*((unsigned char *)((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)&a2) + 300) & 8) == 0 ) /*0x6d89e8*/
        v2 |= 0x20u; /*0x6d89ea*/
      v21 = *aP0 + 1; /*0x6d89f4*/
      HIWORD(a2) = aP0[1]; /*0x6d89f6*/
      LOWORD(a2) = v21; /*0x6d89fb*/
      if ( (*((unsigned char *)((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)&a2) + 300) & 8) == 0 ) /*0x6d8a1d*/
        v2 |= 2u; /*0x6d8a1f*/
      v22 = aP0[1] + 1; /*0x6d8a2b*/
      LOWORD(a2) = *aP0 - 1; /*0x6d8a2d*/
      HIWORD(a2) = v22; /*0x6d8a36*/
      if ( (*((unsigned char *)((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)&a2) + 300) & 8) == 0 ) /*0x6d8a54*/
        v2 |= 0x10u; /*0x6d8a56*/
      v23 = aP0[1] + 1; /*0x6d8a60*/
      LOWORD(a2) = *aP0; /*0x6d8a62*/
      HIWORD(a2) = v23; /*0x6d8a67*/
      if ( (*((unsigned char *)((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)&a2) + 300) & 8) == 0 ) /*0x6d8a89*/
        v2 |= 8u; /*0x6d8a8b*/
      v24 = aP0[1] + 1; /*0x6d8a96*/
      LOWORD(a2) = *aP0 + 1; /*0x6d8a98*/
      HIWORD(a2) = v24; /*0x6d8a9d*/
      v15 = *((unsigned char *)((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)&a2) + 300); /*0x6d8ab9*/
      goto LABEL_38; /*0x6d8ab9*/
    }
    return v3; /*0x6d8ad4*/
  }
  v5 = v4[80]; /*0x6d8724*/
  if ( (v5 & 3) == 0 ) /*0x6d872c*/
    v3 = -2; /*0x6d872e*/
  v6 = 2; /*0x6d8733*/
  if ( (v5 & 2) == 0 ) /*0x6d873a*/
    return v3; /*0x6d873a*/
  v7 = aP0[1] - 1; /*0x6d8749*/
  LOWORD(a2) = *aP0 - 1; /*0x6d874b*/
  HIWORD(a2) = v7; /*0x6d8750*/
  if ( (*((unsigned char *)((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)&a2) + 320) & 2) == 0 ) /*0x6d8772*/
    v2 = 64; /*0x6d8774*/
  v8 = aP0[1]; /*0x6d877c*/
  LOWORD(a2) = *aP0; /*0x6d8780*/
  HIWORD(a2) = v8 - 1; /*0x6d878b*/
  if ( (*((unsigned char *)((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)&a2) + 320) & 2) == 0 ) /*0x6d87a9*/
    v2 |= 0x80u; /*0x6d87ab*/
  v9 = aP0[1] - 1; /*0x6d87ba*/
  LOWORD(a2) = *aP0 + 1; /*0x6d87bc*/
  HIWORD(a2) = v9; /*0x6d87c1*/
  if ( (*((unsigned char *)((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)&a2) + 320) & 2) == 0 ) /*0x6d87e3*/
    v2 |= 1u; /*0x6d87e5*/
  v10 = *aP0 - 1; /*0x6d87ef*/
  HIWORD(a2) = aP0[1]; /*0x6d87f1*/
  LOWORD(a2) = v10; /*0x6d87f6*/
  if ( (*((unsigned char *)((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)&a2) + 320) & 2) == 0 ) /*0x6d8818*/
    v2 |= 0x20u; /*0x6d881a*/
  v11 = *aP0 + 1; /*0x6d8824*/
  HIWORD(a2) = aP0[1]; /*0x6d8826*/
  LOWORD(a2) = v11; /*0x6d882b*/
  if ( (*((unsigned char *)((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)&a2) + 320) & 2) == 0 ) /*0x6d884d*/
    v2 |= 2u; /*0x6d884f*/
  v12 = aP0[1] + 1; /*0x6d885a*/
  LOWORD(a2) = *aP0 - 1; /*0x6d885c*/
  HIWORD(a2) = v12; /*0x6d8861*/
  if ( (*((unsigned char *)((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)&a2) + 320) & 2) == 0 ) /*0x6d8883*/
    v2 |= 0x10u; /*0x6d8885*/
  v13 = aP0[1] + 1; /*0x6d888f*/
  LOWORD(a2) = *aP0; /*0x6d8891*/
  HIWORD(a2) = v13; /*0x6d8896*/
  if ( (*((unsigned char *)((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)&a2) + 320) & 2) == 0 ) /*0x6d88b8*/
    v2 |= 8u; /*0x6d88ba*/
  v14 = aP0[1] + 1; /*0x6d88c6*/
  LOWORD(a2) = *aP0 + 1; /*0x6d88c8*/
  HIWORD(a2) = v14; /*0x6d88d1*/
  v15 = *((unsigned char *)((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)&a2) + 320); /*0x6d88e9*/
LABEL_38:
  if ( (v15 & (uint8_t)v6) == 0 ) /*0x6d8ac1*/
    v2 |= 4u; /*0x6d8ac3*/
  return byte_7F4194[v2]; /*0x6d8acd*/

}
}
// 0x4265B0
namespace gamemd {
unsigned short * Cell::GetHeight(int *aP1, int *a2)
{

  double v3; // st7
  double v8; // [esp+0h] [ebp-18h]
  double v9; // [esp+8h] [ebp-10h]

  _EAX = aP1; /*0x4265b0*/
  _ECX = a2; /*0x4265b8*/
  if ( *aP1 == *a2 && aP1[1] == a2[1] ) /*0x4265ca*/
    LOWORD(this->Cell_field_0x0) = 0; /*0x4265cc*/
  __asm { fild dword ptr [ecx] } /*0x4265d1*/
  __asm
  {
//L-fix     fisub dword ptr [eax]
//L-fix     fstp [esp+18h+var_10]; double
//L-fix     fild dword ptr [eax+4]
//L-fix     fisub dword ptr [ecx+4]
//L-fix     fstp [esp+18h+var_18]; double
  }
  Math::CalcAngle(v8, v9); /*0x4265e8*/
  __asm { fsub ds:dbl_7E2820 } /*0x4265ed*/
  __asm { fmul ds:dbl_7E2818 }
  LOWORD(aP1) = Math::RoundToInt(v3); /*0x426601*/
  this->Cell_field_0x0 = (int)aP1; /*0x42660a*/
  return this; /*0x42660e*/

}
} // namespace gamemd

// 0x4870D0
namespace gamemd {
BOOL Cell::IsPassableOffset(int aP1)
{

  return *(unsigned short *)&this->__pad_70[2 * aP1 + 12] > 0; /*0x4870de*/

}
} // namespace gamemd

// 0x56BC50
namespace gamemd {
int Cell::PosToLinearIndex(IUnknown * aP0)
{

  return *aP0 / 4 + 130 * (aP0[1] / 4) + 131; /*0x56bc7c*/

}
} // namespace gamemd

// 0x56CB80
namespace gamemd {
int Cell::DecodeFlags()
{

  return this->Cell_field_0x0 & 0xF | ((uint16_t)this->Cell_field_0x0 >> 12); /*0x56cb8f*/

}
} // namespace gamemd

// 0x578080
namespace gamemd {
int Cell::GetGroundHeight(unsigned int * a1)
{

  int v1; // edx
  int v2; // eax
  int v3; // ecx
  int *v4; // ecx
  unsigned int v6[2]; // [esp+4h] [ebp-8h] BYREF
  int v7; // [esp+10h] [ebp+4h]

  v1 = a1[1]; /*0x57808a*/
  v6[0] = *a1; /*0x57808d*/
  v6[1] = v1; /*0x578091*/
  v2 = a1[1] / 256; /*0x5780ac*/
  v3 = v6[0] / 256 + (v2 << 9); /*0x5780b7*/
  if ( v3 < 0 /*0x5780ce*/
    || v3 >= *(int *)&stru_87F5F0.__pad_58[736]
    || (v4 = *(int **)(*(unsigned int *)&stru_87F5F0.__pad_58[732] + 4 * v3)) == 0 )
  {
    LOWORD(v7) = v6[0] / 256; /*0x5780d0*/
    HIWORD(v7) = v2; /*0x5780d5*/
    v4 = &g_MissionQueueFrame.briefing[130]; /*0x5780de*/
    g_MissionQueueFrame.briefing[139] = v7; /*0x5780e3*/
  }
  return Isometric::InitTables((int)v4, v6); /*0x5780f2*/

}
} // namespace gamemd

// 0x586360
namespace gamemd {
bool Cell::IsPassable(IUnknown * aP0)
{

  int v1; // eax
  int v2; // ecx
  unsigned int v3; // eax
  int result; // eax
  unsigned int *v5; // ecx
  unsigned int v6; // eax
  int16_t v7; // [esp+4h] [ebp-8h]
  int16_t v8; // [esp+4h] [ebp-8h]
  unsigned int *v9; // [esp+10h] [ebp+4h]
  unsigned int *v10; // [esp+10h] [ebp+4h]

  v1 = aP0[2] / dword_ABDE88; /*0x58636c*/
  if ( (v1 & 1) != 0 ) /*0x586375*/
  {
    v7 = *aP0 / 256; /*0x58638d*/
    v2 = v1 / 2 + 1; /*0x5863b0*/
    HIWORD(v9) = aP0[1] / 256 - v2; /*0x5863b5*/
    LOWORD(v9) = v7 - v2; /*0x5863ba*/
    v3 = (int16_t)(v7 - v2) + (SHIWORD(v9) << 9); /*0x5863c8*/
    if ( v3 < 0x40000 && (result = *(unsigned int *)(dword_87F924 + 4 * v3)) != 0 ) /*0x5863de*/
    {
      v5 = (unsigned int *)result; /*0x5863e0*/
    }
    else
    {
      result = (int)v9; /*0x5863e4*/
      v5 = unk_ABDC50; /*0x5863e8*/
      dword_ABDC74 = (int)v9; /*0x5863ed*/
    }
    if ( (v5[75] & 8) != 0 ) /*0x5863f9*/
      goto LABEL_13; /*0x5863f9*/
    result = (int)((Cell *)(v5))->GetNeighbourContent(3u); /*0x586401*/
  }
  else
  {
    v8 = *aP0 / 256; /*0x58641a*/
    HIWORD(v10) = aP0[1] / 256 - v1 / 2; /*0x586441*/
    LOWORD(v10) = v8 - v1 / 2; /*0x586446*/
    v6 = (int16_t)v10 + (SHIWORD(v10) << 9); /*0x586454*/
    if ( v6 >= 0x40000 || (result = *(unsigned int *)(dword_87F924 + 4 * v6)) == 0 ) /*0x58646a*/
    {
      dword_ABDC74 = (int)v10; /*0x586470*/
      result = (int)unk_ABDC50; /*0x586475*/
    }
  }
  if ( (*(unsigned char *)(result + 300) & 8) == 0 ) /*0x586481*/
  {
    LOBYTE(result) = 1; /*0x586483*/
    return result; /*0x586489*/
  }
LABEL_13:
  LOBYTE(result) = 0; /*0x58648c*/
  return result; /*0x586485*/

}
} // namespace gamemd

// 0x68BD00
namespace gamemd {
unsigned int * Cell::GetWorldCoords(unsigned int *a2, int a3)
{
    unsigned int *v3; // esi
    int *v4; // eax
    int v5; // edx
    int v6; // edi
    int v7; // ecx
    unsigned char v9[12]; // [esp+8h] [ebp-Ch] BYREF

    v3 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)this + 2 * a3 + 793); /*0x68bd1b*/
    v4 = (int *)(*(int (__thiscall **)(unsigned int *, unsigned char *))(*v3 + 72))(v3, v9); /*0x68bd26*/
    v5 = *v4; /*0x68bd29*/
    v6 = v4[1]; /*0x68bd2b*/
    v7 = v4[2]; /*0x68bd2e*/
    if ( (v3[80] & 0x500) != 0 ) /*0x68bd3a*/
      v7 += dword_B054BC; /*0x68bd3c*/
    *a2 = v5; /*0x68bd48*/
    a2[1] = v6; /*0x68bd4a*/
    a2[2] = v7; /*0x68bd4e*/
    return a2; /*0x68bd4d*/
}
} // namespace gamemd
