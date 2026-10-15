// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/LightConvertClass_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x490E50
namespace gamemd {  // G42.18 ns repair
int LightConvertClass::SelectRLEBlitter(int aP1)
{

  if ( !*&this->q008 ) /*0x490e53*/
    ((ConvertClass *)this)->InitTables(); /*0x490e5a*/
  if ( (aP1 & 0x10) != 0 ) /*0x490e65*/
  {
    if ( (aP1 & 0x4000) != 0 ) /*0x490e6a*/
    {
      if ( (aP1 & 0x800) != 0 ) /*0x490e6f*/
        return *&this->q15C; /*0x490e71*/
      else
        return *&this->q110; /*0x490e7b*/
    }
    else if ( (aP1 & dword_81DC28) != 0 ) /*0x490e8b*/
    {
      if ( (aP1 & 0x800) != 0 ) /*0x490e90*/
        return *&this->q13C; /*0x490e92*/
      else
        return *&this->q0EC; /*0x490e9c*/
    }
    else if ( (aP1 & 0x800) != 0 ) /*0x490ea9*/
    {
      return *&this->q128; /*0x490eab*/
    }
    else
    {
      return *&this->q0D8; /*0x490eb5*/
    }
  }
  switch ( aP1 & 6 ) /*0x490ec7*/
  {
    case 2: /*0x490ec7*/
      if ( (aP1 & 0x4000) != 0 ) /*0x491082*/
      {
        if ( (aP1 & 0x800) != 0 ) /*0x491087*/
          return *&this->q168; /*0x491089*/
        else
          return *&this->q120; /*0x491093*/
      }
      else if ( (aP1 & dword_81DC28) != 0 ) /*0x4910a3*/
      {
        if ( (aP1 & 8) != 0 ) /*0x4910a7*/
        {
          if ( (aP1 & 0x800) != 0 ) /*0x4910ac*/
            return *&this->q154; /*0x4910ae*/
          else
            return *&this->q108; /*0x4910b8*/
        }
        else if ( (aP1 & 0x800) != 0 ) /*0x4910c5*/
        {
          return *&this->q148; /*0x4910c7*/
        }
        else
        {
          return *&this->q0FC; /*0x4910d1*/
        }
      }
      else if ( (aP1 & 0x800) != 0 ) /*0x4910de*/
      {
        return *&this->q134; /*0x4910e0*/
      }
      else
      {
        return *&this->q0E4; /*0x4910ea*/
      }
    case 4: /*0x490ec7*/
      if ( (aP1 & 0x4000) != 0 ) /*0x49100d*/
      {
        if ( (aP1 & 0x800) != 0 ) /*0x491012*/
          return *&this->q164; /*0x491014*/
        else
          return *&this->q11C; /*0x49101e*/
      }
      else if ( (aP1 & dword_81DC28) != 0 ) /*0x49102e*/
      {
        if ( (aP1 & 8) != 0 ) /*0x491032*/
        {
          if ( (aP1 & 0x800) != 0 ) /*0x491037*/
            return *&this->q150; /*0x491039*/
          else
            return *&this->q104; /*0x491043*/
        }
        else if ( (aP1 & 0x800) != 0 ) /*0x491050*/
        {
          return *&this->q144; /*0x491052*/
        }
        else
        {
          return *&this->q0F8; /*0x49105c*/
        }
      }
      else if ( (aP1 & 0x800) != 0 ) /*0x491069*/
      {
        return *&this->q130; /*0x49106b*/
      }
      else
      {
        return *&this->q0E0; /*0x491075*/
      }
    case 6: /*0x490ec7*/
      if ( (aP1 & 0x4000) != 0 ) /*0x490f98*/
      {
        if ( (aP1 & 0x800) != 0 ) /*0x490f9d*/
          return *&this->q160; /*0x490f9f*/
        else
          return *&this->q118; /*0x490fa9*/
      }
      else if ( (aP1 & dword_81DC28) != 0 ) /*0x490fb9*/
      {
        if ( (aP1 & 8) != 0 ) /*0x490fbd*/
        {
          if ( (aP1 & 0x800) != 0 ) /*0x490fc2*/
            return *&this->q14C; /*0x490fc4*/
          else
            return *&this->q100; /*0x490fce*/
        }
        else if ( (aP1 & 0x800) != 0 ) /*0x490fdb*/
        {
          return *&this->q140; /*0x490fdd*/
        }
        else
        {
          return *&this->q0F4; /*0x490fe7*/
        }
      }
      else if ( (aP1 & 0x800) != 0 ) /*0x490ff4*/
      {
        return *&this->q12C; /*0x490ff6*/
      }
      else
      {
        return *&this->q0DC; /*0x491000*/
      }
    default:
      if ( (aP1 & 1) != 0 ) /*0x490ee1*/
      {
        if ( (aP1 & 0x4000) != 0 ) /*0x490ee6*/
          return *&this->q114; /*0x490ee8*/
        if ( (aP1 & dword_81DC28) != 0 ) /*0x490ef8*/
          return *&this->q0F0; /*0x490efa*/
        return *&this->q0D4; /*0x490eef*/
      }
      if ( (aP1 & 0x20) != 0 ) /*0x490f10*/
      {
        if ( (aP1 & 0x4000) != 0 ) /*0x490f15*/
        {
          if ( (aP1 & 0x800) != 0 ) /*0x490f1a*/
            return *&this->q158; /*0x490f23*/
          return *&this->q10C; /*0x490f58*/
        }
        if ( (aP1 & dword_81DC28) != 0 ) /*0x490f2c*/
        {
          if ( (aP1 & 0x800) != 0 ) /*0x490f31*/
            return *&this->q138; /*0x490f3a*/
          return *&this->q0E8; /*0x490f79*/
        }
      }
      else
      {
        if ( (aP1 & 0x4000) != 0 ) /*0x490f40*/
        {
          if ( (aP1 & 0x800) != 0 ) /*0x490f45*/
            return *&this->q158; /*0x490f4e*/
          return *&this->q10C; /*0x490f45*/
        }
        if ( (aP1 & dword_81DC28) != 0 ) /*0x490f61*/
        {
          if ( (aP1 & 0x800) != 0 ) /*0x490f66*/
            return *&this->q138; /*0x490f6f*/
          return *&this->q0E8; /*0x490f66*/
        }
      }
      if ( (aP1 & 0x800) != 0 ) /*0x490f7f*/
        return *&this->q124; /*0x490f81*/
      else
        return *&this->q0D0; /*0x490f8b*/
  }

}
} // namespace gamemd