// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/LightConvertClass_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x490E50
namespace gamemd {
int LightConvertClass::SelectRLEBlitter(IUnknown * aP1)
{
  if ( !*(unsigned int *)&this->__pad_5[3] ) /*0x490e53*/
    ConvertClass::InitTables((ConvertClass *)this); /*0x490e5a*/
  if ( (aP1 & 0x10) != 0 ) /*0x490e65*/
  {
    if ( (aP1 & 0x4000) != 0 ) /*0x490e6a*/
    {
      if ( (aP1 & 0x800) != 0 ) /*0x490e6f*/
        return *(unsigned int *)&this->__pad_5[343]; /*0x490e71*/
      else
        return *(unsigned int *)&this->__pad_5[267]; /*0x490e7b*/
    }
    else if ( (aP1 & dword_81DC28) != 0 ) /*0x490e8b*/
    {
      if ( (aP1 & 0x800) != 0 ) /*0x490e90*/
        return *(unsigned int *)&this->__pad_5[311]; /*0x490e92*/
      else
        return *(unsigned int *)&this->__pad_5[231]; /*0x490e9c*/
    }
    else if ( (aP1 & 0x800) != 0 ) /*0x490ea9*/
    {
      return *(unsigned int *)&this->__pad_5[291]; /*0x490eab*/
    }
    else
    {
      return *(unsigned int *)&this->__pad_5[211]; /*0x490eb5*/
    }
  }
  switch ( aP1 & 6 ) /*0x490ec7*/
  {
    case 2: /*0x490ec7*/
      if ( (aP1 & 0x4000) != 0 ) /*0x491082*/
      {
        if ( (aP1 & 0x800) != 0 ) /*0x491087*/
          return *(unsigned int *)&this->__pad_5[355]; /*0x491089*/
        else
          return *(unsigned int *)&this->__pad_5[283]; /*0x491093*/
      }
      else if ( (aP1 & dword_81DC28) != 0 ) /*0x4910a3*/
      {
        if ( (aP1 & 8) != 0 ) /*0x4910a7*/
        {
          if ( (aP1 & 0x800) != 0 ) /*0x4910ac*/
            return *(unsigned int *)&this->__pad_5[335]; /*0x4910ae*/
          else
            return *(unsigned int *)&this->__pad_5[259]; /*0x4910b8*/
        }
        else if ( (aP1 & 0x800) != 0 ) /*0x4910c5*/
        {
          return *(unsigned int *)&this->__pad_5[323]; /*0x4910c7*/
        }
        else
        {
          return *(unsigned int *)&this->__pad_5[247]; /*0x4910d1*/
        }
      }
      else if ( (aP1 & 0x800) != 0 ) /*0x4910de*/
      {
        return *(unsigned int *)&this->__pad_5[303]; /*0x4910e0*/
      }
      else
      {
        return *(unsigned int *)&this->__pad_5[223]; /*0x4910ea*/
      }
    case 4: /*0x490ec7*/
      if ( (aP1 & 0x4000) != 0 ) /*0x49100d*/
      {
        if ( (aP1 & 0x800) != 0 ) /*0x491012*/
          return *(unsigned int *)&this->__pad_5[351]; /*0x491014*/
        else
          return *(unsigned int *)&this->__pad_5[279]; /*0x49101e*/
      }
      else if ( (aP1 & dword_81DC28) != 0 ) /*0x49102e*/
      {
        if ( (aP1 & 8) != 0 ) /*0x491032*/
        {
          if ( (aP1 & 0x800) != 0 ) /*0x491037*/
            return *(unsigned int *)&this->__pad_5[331]; /*0x491039*/
          else
            return *(unsigned int *)&this->__pad_5[255]; /*0x491043*/
        }
        else if ( (aP1 & 0x800) != 0 ) /*0x491050*/
        {
          return *(unsigned int *)&this->__pad_5[319]; /*0x491052*/
        }
        else
        {
          return *(unsigned int *)&this->__pad_5[243]; /*0x49105c*/
        }
      }
      else if ( (aP1 & 0x800) != 0 ) /*0x491069*/
      {
        return *(unsigned int *)&this->__pad_5[299]; /*0x49106b*/
      }
      else
      {
        return *(unsigned int *)&this->__pad_5[219]; /*0x491075*/
      }
    case 6: /*0x490ec7*/
      if ( (aP1 & 0x4000) != 0 ) /*0x490f98*/
      {
        if ( (aP1 & 0x800) != 0 ) /*0x490f9d*/
          return *(unsigned int *)&this->__pad_5[347]; /*0x490f9f*/
        else
          return *(unsigned int *)&this->__pad_5[275]; /*0x490fa9*/
      }
      else if ( (aP1 & dword_81DC28) != 0 ) /*0x490fb9*/
      {
        if ( (aP1 & 8) != 0 ) /*0x490fbd*/
        {
          if ( (aP1 & 0x800) != 0 ) /*0x490fc2*/
            return *(unsigned int *)&this->__pad_5[327]; /*0x490fc4*/
          else
            return *(unsigned int *)&this->__pad_5[251]; /*0x490fce*/
        }
        else if ( (aP1 & 0x800) != 0 ) /*0x490fdb*/
        {
          return *(unsigned int *)&this->__pad_5[315]; /*0x490fdd*/
        }
        else
        {
          return *(unsigned int *)&this->__pad_5[239]; /*0x490fe7*/
        }
      }
      else if ( (aP1 & 0x800) != 0 ) /*0x490ff4*/
      {
        return *(unsigned int *)&this->__pad_5[295]; /*0x490ff6*/
      }
      else
      {
        return *(unsigned int *)&this->__pad_5[215]; /*0x491000*/
      }
    default:
      if ( (aP1 & 1) != 0 ) /*0x490ee1*/
      {
        if ( (aP1 & 0x4000) != 0 ) /*0x490ee6*/
          return *(unsigned int *)&this->__pad_5[271]; /*0x490ee8*/
        if ( (aP1 & dword_81DC28) != 0 ) /*0x490ef8*/
          return *(unsigned int *)&this->__pad_5[235]; /*0x490efa*/
        return *(unsigned int *)&this->__pad_5[207]; /*0x490eef*/
      }
      if ( (aP1 & 0x20) != 0 ) /*0x490f10*/
      {
        if ( (aP1 & 0x4000) != 0 ) /*0x490f15*/
        {
          if ( (aP1 & 0x800) != 0 ) /*0x490f1a*/
            return *(unsigned int *)&this->__pad_5[339]; /*0x490f23*/
          return *(unsigned int *)&this->__pad_5[263]; /*0x490f58*/
        }
        if ( (aP1 & dword_81DC28) != 0 ) /*0x490f2c*/
        {
          if ( (aP1 & 0x800) != 0 ) /*0x490f31*/
            return *(unsigned int *)&this->__pad_5[307]; /*0x490f3a*/
          return *(unsigned int *)&this->__pad_5[227]; /*0x490f79*/
        }
      }
      else
      {
        if ( (aP1 & 0x4000) != 0 ) /*0x490f40*/
        {
          if ( (aP1 & 0x800) != 0 ) /*0x490f45*/
            return *(unsigned int *)&this->__pad_5[339]; /*0x490f4e*/
          return *(unsigned int *)&this->__pad_5[263]; /*0x490f45*/
        }
        if ( (aP1 & dword_81DC28) != 0 ) /*0x490f61*/
        {
          if ( (aP1 & 0x800) != 0 ) /*0x490f66*/
            return *(unsigned int *)&this->__pad_5[307]; /*0x490f6f*/
          return *(unsigned int *)&this->__pad_5[227]; /*0x490f66*/
        }
      }
      if ( (aP1 & 0x800) != 0 ) /*0x490f7f*/
        return *(unsigned int *)&this->__pad_5[287]; /*0x490f81*/
      else
        return *(unsigned int *)&this->__pad_5[203]; /*0x490f8b*/
  }
}
} // namespace gamemd