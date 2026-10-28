// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/BaseClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/CampaignClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Campaign_e4.hpp"
#include "e4/classes/_w14_nocarrier_e4.hpp"
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
#include "e4/classes/ObjectPtr_e4.hpp"

// 0x42EE30
namespace gamemd {  // G42.18 ns repair
int BaseClass::LoadBaseNodeClass(VectorClass_flat * aP0, int a2)
{

  int v2; // edi
  int v3; // ecx
  int v4; // ebp
  int percentBuilt; // ecx
  int cells24Capacity; // eax
  int cells24Count; // eax
  int v8; // edx
  unsigned int *v9; // eax
  int v10; // ebp
  int center; // ecx
  int v12; // eax
  int v13; // eax
  int cells38Capacity; // edx
  int v15; // ebp
  int v16; // ecx
  int owner; // eax
  int v18; // eax
  unsigned int *v19; // edx
  unsigned int v21; // [esp+88h] [ebp-14h] BYREF
  unsigned int v22[4]; // [esp+8Ch] [ebp-10h] BYREF

  v2 = a2; /*0x42ee3a*/
  if ( (*(int (**)(int, BaseClass *, int, unsigned int))(*(unsigned int *)a2 + 12))(a2, this, 120, 0) >= 0 ) /*0x42ee4b*/
  {
    if ( this ) /*0x42ee53*/
    {
      (&this->baseNodeCount)->Vector_Constructor(0, 0); /*0x42ee5e*/
      /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E38B0) */  /*0x42ee6a*/
      this->cells24Capacity = 10; /*0x42ee70*/
      this->cells24Count = 0; /*0x42ee77*/
      DynamicVector::Constructor_Cell(&this->cells38Count, 0, 0); /*0x42ee7e*/
      DynamicVector::Constructor_Cell(&this->q08C, 0, 0); /*0x42ee8a*/
      /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E3880) */  /*0x42ee8f*/
    }
    v3 = *(unsigned int *)v2; /*0x42ee96*/
    a2 = 0; /*0x42eea2*/
    if ( (*(int (**)(int, int *, int, unsigned int))(v3 + 12))(v2, &a2, 4, 0) >= 0 ) /*0x42eeaf*/
    {
      v4 = 0; /*0x42eeb9*/
      if ( a2 <= 0 ) /*0x42eebd*/
      {
LABEL_14:
        if ( (*(int (**)(int, int *, int, unsigned int))(*(unsigned int *)v2 + 12))(v2, &a2, 4, 0) >= 0 ) /*0x42ef4f*/
        {
          v10 = 0; /*0x42ef59*/
          if ( a2 <= 0 ) /*0x42ef5d*/
          {
LABEL_24:
            if ( (*(int (**)(int, int *, int, unsigned int))(*(unsigned int *)v2 + 12))(v2, &a2, 4, 0) >= 0 ) /*0x42efd6*/
            {
              v15 = 0; /*0x42efdc*/
              if ( a2 <= 0 ) /*0x42efe0*/
              {
LABEL_34:
                ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, &this->u32_74); /*0x42f044*/
              }
              else
              {
                while ( (*(int (**)(int, unsigned int *, int, unsigned int))(*(unsigned int *)v2 + 12))(v2, &v21, 4, 0) >= 0 ) /*0x42eff3*/
                {
                  v16 = this->unknown54[5]; /*0x42eff9*/
                  if ( this->unknown54[7] < v16 /*0x42f021*/
                    || (BYTE1(this->unknown54[6]) || !v16)
                    && (owner = this->owner, owner > 0)
                    && (*(unsigned __int8 (**)(int *, int, unsigned int))(this->unknown54[3] + 8))(
                         &this->unknown54[3],
                         v16 + owner,
                         0) )
                  {
                    v18 = this->unknown54[7]; /*0x42f028*/
                    v19 = (unsigned int *)this->unknown54[4]; /*0x42f02b*/
                    this->unknown54[7] = v18 + 1; /*0x42f031*/
                    v19[v18] = v21; /*0x42f038*/
                  }
                  if ( ++v15 >= a2 ) /*0x42f042*/
                    goto LABEL_34; /*0x42f042*/
                }
              }
            }
          }
          else
          {
            while ( (*(int (**)(int, unsigned int *, int, unsigned int))(*(unsigned int *)v2 + 12))(v2, &v21, 4, 0) >= 0 ) /*0x42ef70*/
            {
              center = this->center; /*0x42ef7a*/
              if ( this->unknown54[1] < center /*0x42efa2*/
                || (BYTE1(this->unknown54[0]) || !center)
                && (v12 = this->unknown54[2], v12 > 0)
                && (*(unsigned __int8 (**)(int *, int, unsigned int))(this->cells38Count + 8))(
                     &this->cells38Count,
                     center + v12,
                     0) )
              {
                v13 = this->unknown54[1]; /*0x42efa9*/
                cells38Capacity = this->cells38Capacity; /*0x42efac*/
                this->unknown54[1] = v13 + 1; /*0x42efb2*/
                *(unsigned int *)(cells38Capacity + 4 * v13) = v21; /*0x42efb9*/
              }
              if ( ++v10 >= a2 ) /*0x42efc3*/
                goto LABEL_24; /*0x42efc3*/
            }
          }
        }
      }
      else
      {
        while ( (*(int (**)(int, unsigned int *, int, unsigned int))(*(unsigned int *)v2 + 12))(v2, v22, 16, 0) >= 0 ) /*0x42eed0*/
        {
          percentBuilt = this->percentBuilt; /*0x42eeda*/
          if ( this->cells24Count < percentBuilt /*0x42ef02*/
            || (BYTE1(this->cells24) || !percentBuilt)
            && (cells24Capacity = this->cells24Capacity, cells24Capacity > 0)
            && (*(unsigned __int8 (**)(int *, int, unsigned int))(this->baseNodeCount + 8))(
                 &this->baseNodeCount,
                 percentBuilt + cells24Capacity,
                 0) )
          {
            cells24Count = this->cells24Count; /*0x42ef09*/
            v8 = v22[0]; /*0x42ef0c*/
            this->cells24Count = cells24Count + 1; /*0x42ef13*/
            v9 = (unsigned int *)(this->baseNodeCapacity + 16 * cells24Count); /*0x42ef1c*/
            *v9 = v8; /*0x42ef1e*/
            v9[1] = v22[1]; /*0x42ef24*/
            v9[2] = v22[2]; /*0x42ef2b*/
            v9[3] = v22[3]; /*0x42ef32*/
          }
          if ( ++v4 >= a2 ) /*0x42ef3c*/
            goto LABEL_14; /*0x42ef3c*/
        }
      }
    }
  }
  return 0; /*0x42f056*/

}
}  // G42.18 ns repair
// 0x42F070
namespace gamemd {
int BaseClass::LoadArrayFields(unsigned int * a1, int a2)
{

  unsigned int *v2; // esi
  unsigned int v3; // edx
  int v4; // ebp
  int v5; // ebx
  unsigned int v6; // ecx
  int v7; // ebx
  unsigned int v8; // ecx
  int result; // eax
  int v10; // ebx

  v2 = (unsigned int *)cells24Count; /*0x42f073*/
  if ( (*(int (**)(int, BaseClass *, int, unsigned int))(*(unsigned int *)cells24Count + 16))(cells24Count, this, 120, 0) >= 0 ) /*0x42f089*/
  {
    v3 = *v2; /*0x42f092*/
    cells24Count = this->cells24Count; /*0x42f09e*/
    if ( (*(int (**)(unsigned int *, int *, int, unsigned int))(v3 + 16))(v2, &cells24Count, 4, 0) >= 0 ) /*0x42f0a7*/
    {
      v4 = 0; /*0x42f0b1*/
      if ( cells24Count <= 0 ) /*0x42f0b5*/
      {
LABEL_7:
        v6 = *v2; /*0x42f0dd*/
        cells24Count = this->unknown54[1]; /*0x42f0ec*/
        if ( (*(int (**)(unsigned int *, int *, int, unsigned int))(v6 + 16))(v2, &cells24Count, 4, 0) >= 0 ) /*0x42f0f5*/
        {
          v7 = 0; /*0x42f0fb*/
          if ( cells24Count <= 0 ) /*0x42f0ff*/
          {
LABEL_11:
            v8 = *v2; /*0x42f11f*/
            cells24Count = this->unknown54[7]; /*0x42f12e*/
            result = (*(int (**)(unsigned int *, int *, int, unsigned int))(v8 + 16))(v2, &cells24Count, 4, 0); /*0x42f132*/
            if ( result >= 0 ) /*0x42f137*/
            {
              v10 = 0; /*0x42f13d*/
              if ( cells24Count <= 0 ) /*0x42f141*/
                return result; /*0x42f141*/
              while ( 1 ) /*0x42f151*/
              {
                result = (*(int (**)(unsigned int *, int, int, unsigned int))(*v2 + 16))( /*0x42f151*/
                           v2,
                           this->unknown54[4] + 4 * v10,
                           4,
                           0);
                if ( result < 0 ) /*0x42f156*/
                  break; /*0x42f156*/
                if ( ++v10 >= cells24Count ) /*0x42f15f*/
                  return result; /*0x42f15f*/
              }
            }
          }
          else
          {
            while ( (*(int (**)(unsigned int *, int, int, unsigned int))(*v2 + 16))( /*0x42f114*/
                      v2,
                      this->cells38Capacity + 4 * v7,
                      4,
                      0) >= 0 )
            {
              if ( ++v7 >= cells24Count ) /*0x42f11d*/
                goto LABEL_11; /*0x42f11d*/
            }
          }
        }
      }
      else
      {
        v5 = 0; /*0x42f0b7*/
        while ( (*(int (**)(unsigned int *, int, int, unsigned int))(*v2 + 16))( /*0x42f0cb*/
                  v2,
                  v5 + this->baseNodeCapacity,
                  16,
                  0) >= 0 )
        {
          ++v4; /*0x42f0d5*/
          v5 += 16; /*0x42f0d6*/
          if ( v4 >= cells24Count ) /*0x42f0db*/
            goto LABEL_7; /*0x42f0db*/
        }
      }
    }
  }
  return 0; /*0x42f161*/

}
}