// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/NeuronClass_25_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/NeuronClass_e4.hpp"
#include "e4/classes/Connection_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Factory_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/Node_flat_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/CoordStruct_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/BuildingPlacement_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/NetworkLobby_e4.hpp"

// 0x43A350
NeuronClass::NeuronClass()
{
  int v2; // eax
  int v3; // eax

  AbstractClass::Constructor(); /*0x43a353*/
  this->u32_24 = 0; /*0x43a358*/
  this->u32_28 = 0; /*0x43a35f*/
  this->u32_2C = 0; /*0x43a366*/
  this->vtable4 = *(unsigned int *)&stru_A8EB00.gapE4[416]; /*0x43a372*/
  *(unsigned int *)this->__pad_0 = (void*)&NeuronClass_vftable; /*0x43a375*/
  this->NeuronClass_field_0x04 = (int)&NeuronClass_vftable; /*0x43a37b*/
  this->NeuronClass_field_0x08 = (int)&NeuronClass_vftable; /*0x43a382*/
  this->NeuronClass_field_0x0C = (int)&NeuronClass_vftable; /*0x43a389*/
  if ( g_BuildingLoadQueue_Array.PaletteFile[1] < g_BuildingLoadQueue_Array.ZFudgeBridge /*0x43a3c5*/
    || (IDA_BYTE1(g_BuildingLoadQueue_Array.PaletteFile[0]) || !g_BuildingLoadQueue_Array.ZFudgeBridge)
    && g_BuildingLoadQueue_Array.PaletteFile[2] > 0
    && (*(uint8_t (__thiscall **)(char *, int, unsigned int))(*(unsigned int *)&g_BuildingLoadQueue_Array.DisableVoxelCache[2]
                                                              + 8))(
         &g_BuildingLoadQueue_Array.DisableVoxelCache[2],
         g_BuildingLoadQueue_Array.ZFudgeBridge + g_BuildingLoadQueue_Array.PaletteFile[2],
         0) )
  {
    v2 = g_BuildingLoadQueue_Array.PaletteFile[1]++; /*0x43a3d2*/
    *(unsigned int *)(g_BuildingLoadQueue_Array.ZFudgeColumn[0] + 4 * v2) = this; /*0x43a3e1*/
  }
  if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x43a41b*/
    || (IDA_BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
    && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
    && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
         &g_BuildingLoadQueue_Array.LightVisibility,
         g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
         0) )
  {
    v3 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x43a428*/
    *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v3) = this; /*0x43a437*/
  }
  return (int)this->__pad_0; /*0x43a43c*/
}
// 0x43A9C0
void * NeuronClass::Reset(char a2)
{
  int v3; // eax
  int v4; // eax
  NeuronClass *v6; // [esp+4h] [ebp-4h] BYREF

  *(unsigned int *)this->__pad_0 = (void*)&NeuronClass_vftable; /*0x43a9cd*/
  this->NeuronClass_field_0x04 = (int)&NeuronClass_vftable; /*0x43a9d3*/
  this->NeuronClass_field_0x08 = (int)&NeuronClass_vftable; /*0x43a9da*/
  this->NeuronClass_field_0x0C = (int)&NeuronClass_vftable; /*0x43a9e1*/
  v6 = this; /*0x43a9ef*/
  v3 = (*(int (__thiscall **)(int *, NeuronClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x43a9f3*/
         &g_BuildingLoadQueue_Array.LightVisibility,
         &v6);
  if ( v3 != -1 && v3 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x43aa03*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x43aa08*/
    for ( ; /*0x43aa0e*/
          v3 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v3 - 4) = *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                         + 4 * v3) )
    {
      ++v3; /*0x43aa16*/
    }
  }
  v6 = this; /*0x43aa38*/
  v4 = (*(int (__thiscall **)(char *, NeuronClass **))(*(unsigned int *)&g_BuildingLoadQueue_Array.DisableVoxelCache[2] + 16))( /*0x43aa3c*/
         &g_BuildingLoadQueue_Array.DisableVoxelCache[2],
         &v6);
  if ( v4 != -1 && v4 < g_BuildingLoadQueue_Array.PaletteFile[1] ) /*0x43aa4c*/
  {
    --g_BuildingLoadQueue_Array.PaletteFile[1]; /*0x43aa51*/
    for ( ; /*0x43aa57*/
          v4 < g_BuildingLoadQueue_Array.PaletteFile[1];
          *(unsigned int *)(g_BuildingLoadQueue_Array.ZFudgeColumn[0] + 4 * v4 - 4) = *(unsigned int *)(g_BuildingLoadQueue_Array.ZFudgeColumn[0]
                                                                                          + 4 * v4) )
    {
      ++v4; /*0x43aa5f*/
    }
  }
  AbstractClass::DTOR(); /*0x43aa73*/
  if ( (a2 & 1) != 0 ) /*0x43aa7d*/
    RA2_OPDEL(); /*0x43aa80*/
  return this->__pad_0; /*0x43aa8a*/
}
// 0x43AB20
namespace gamemd {
int NeuronClass_25::Update(int a2)
{
  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x43ab2a*/
}
} // namespace gamemd

// 0x43AB30
namespace gamemd {
char NeuronClass_25::AddRef(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x43ab32*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x43ab3d*/
  {
    v3 = 0; /*0x43ab3f*/
    if ( m_8 <= 0 ) /*0x43ab43*/
      return 1; /*0x43ab63*/
    v4 = *(unsigned int **)&this->m_1[3]; /*0x43ab45*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x43ab4b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x43ab54*/
    {
      ++v3; /*0x43ab56*/
      ++v4; /*0x43ab57*/
      if ( v3 >= m_8 ) /*0x43ab5c*/
        return 1; /*0x43ab5c*/
    }
  }
  return 0; /*0x43ab5e*/
}
} // namespace gamemd

// 0x43AB70
namespace gamemd {
char NeuronClass_25::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x43ab7c*/
  {
    IDA_LOBYTE(this->m_C) = 0; /*0x43ab86*/
    if ( a3 ) /*0x43ab8c*/
      v4 = a3; /*0x43aba2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x43ab9e*/
    IDA_LOBYTE(this->m_C) = 1; /*0x43aba6*/
    if ( v4 ) /*0x43abaa*/
    {
      if ( *(unsigned int *)&this->m_1[3] ) /*0x43abb5*/
      {
        m_8 = this->m_8; /*0x43abbc*/
        if ( a2 < m_8 ) /*0x43abc1*/
          m_8 = a2; /*0x43abc3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x43abc9*/
          ++i; /*0x43abce*/
        if ( IDA_BYTE1(this->m_C) ) /*0x43abdb*/
        {
          RA2_OPDEL(*(void **)&this->m_1[3]); /*0x43abe6*/
          *(unsigned int *)&this->m_1[3] = 0; /*0x43abee*/
        }
      }
      *(unsigned int *)&this->m_1[3] = v4; /*0x43abf7*/
      this->m_8 = a2; /*0x43abff*/
      IDA_BYTE1(this->m_C) = a3 == 0; /*0x43ac02*/
      return 1; /*0x43ac08*/
    }
    else
    {
      return 0; /*0x43abaf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVNeuronClass *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x43ac12*/
    return 1; /*0x43ac18*/
  }
}
} // namespace gamemd

// 0x43AC20
namespace gamemd {
void NeuronClass_25::ddtor()
{
  if ( *(unsigned int *)&this->m_1[3] && IDA_BYTE1(this->m_C) ) /*0x43ac2d*/
  {
    RA2_OPDEL(*(void **)&this->m_1[3]); /*0x43ac33*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x43ac3b*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x43ac3e*/
  this->m_8 = 0; /*0x43ac41*/
}
} // namespace gamemd

// 0x43AC50
namespace gamemd {
int NeuronClass_25::Activate(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

  if ( !IDA_LOBYTE(this->m_C) ) /*0x43ac50*/
    return 0; /*0x43ac58*/
  m_8 = this->m_8; /*0x43ac5e*/
  result = 0; /*0x43ac61*/
  if ( m_8 <= 0 ) /*0x43ac65*/
    return -1; /*0x43ac7c*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x43ac6b*/
  {
    if ( ++result >= m_8 ) /*0x43ac7a*/
      return -1; /*0x43ac7a*/
  }
  return result; /*0x43ac5a*/
}
} // namespace gamemd

// 0x43AC90
namespace gamemd {
unsigned int NeuronClass_25::Fire(int a2)
{
  if ( IDA_LOBYTE(this->m_C) ) /*0x43ac90*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x43aca5*/
  else
    return 0; /*0x43ac97*/
}
} // namespace gamemd

// 0x43ACB0
namespace gamemd {
VectorClass_flat * NeuronClass_25::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (unsigned int)(*(void **)&this->m_1[3]);
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_NeuronClass___vftable; /*0x43acb6*/
  if ( v3 && IDA_BYTE1(this->m_C) ) /*0x43acc0*/
  {
    RA2_OPDEL(v3); /*0x43acc8*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x43acd0*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x43acdb*/
  this->m_8 = 0; /*0x43ace1*/
  if ( (a2 & 1) != 0 ) /*0x43ace8*/
    RA2_OPDEL(); /*0x43aceb*/
  return this->__pad_0; /*0x43acf5*/
}
} // namespace gamemd
