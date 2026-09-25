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
  if ( !this->q008 ) /*0x490e53*/
    ConvertClass::InitTables(); /*0x490e5a*/
  if ( (aP1 & 0x10) != 0 ) /*0x490e65*/
  {
    if ( (aP1 & 0x4000) != 0 ) /*0x490e6a*/
    {
      if ( (aP1 & 0x800) != 0 ) /*0x490e6f*/
        return *(&this->q0207); /*0x490e71*/
      else
        return *(&this->q0188); /*0x490e7b*/
    }
    else if ( (aP1 & dword_81DC28) != 0 ) /*0x490e8b*/
    {
      if ( (aP1 & 0x800) != 0 ) /*0x490e90*/
        return *(&this->q01C9); /*0x490e92*/
      else
        return *(&this->q0149); /*0x490e9c*/
    }
    else if ( (aP1 & 0x800) != 0 ) /*0x490ea9*/
    {
      return *(&this->q01C4); /*0x490eab*/
    }
    else
    {
      return *(&this->q0144); /*0x490eb5*/
    }
  }
  switch ( aP1 & 6 ) /*0x490ec7*/
  {
    case 2: /*0x490ec7*/
      if ( (aP1 & 0x4000) != 0 ) /*0x491082*/
      {
        if ( (aP1 & 0x800) != 0 ) /*0x491087*/
          return *(&this->q0240); /*0x491089*/
        else
          return *(&this->q01C2); /*0x491093*/
      }
      else if ( (aP1 & dword_81DC28) != 0 ) /*0x4910a3*/
      {
        if ( (aP1 & 8) != 0 ) /*0x4910a7*/
        {
          if ( (aP1 & 0x800) != 0 ) /*0x4910ac*/
            return *(&this->q0205); /*0x4910ae*/
          else
            return *(&this->q0186); /*0x4910b8*/
        }
        else if ( (aP1 & 0x800) != 0 ) /*0x4910c5*/
        {
          return *(&this->q0202); /*0x4910c7*/
        }
        else
        {
          return *(&this->q0183); /*0x4910d1*/
        }
      }
      else if ( (aP1 & 0x800) != 0 ) /*0x4910de*/
      {
        return *(&this->q01C7); /*0x4910e0*/
      }
      else
      {
        return *(&this->q0147); /*0x4910ea*/
      }
    case 4: /*0x490ec7*/
      if ( (aP1 & 0x4000) != 0 ) /*0x49100d*/
      {
        if ( (aP1 & 0x800) != 0 ) /*0x491012*/
          return *(&this->q0209); /*0x491014*/
        else
          return *(&this->q01C1); /*0x49101e*/
      }
      else if ( (aP1 & dword_81DC28) != 0 ) /*0x49102e*/
      {
        if ( (aP1 & 8) != 0 ) /*0x491032*/
        {
          if ( (aP1 & 0x800) != 0 ) /*0x491037*/
            return *(&this->q0204); /*0x491039*/
          else
            return *(&this->q0185); /*0x491043*/
        }
        else if ( (aP1 & 0x800) != 0 ) /*0x491050*/
        {
          return *(&this->q0201); /*0x491052*/
        }
        else
        {
          return *(&this->q0182); /*0x49105c*/
        }
      }
      else if ( (aP1 & 0x800) != 0 ) /*0x491069*/
      {
        return *(&this->q01C6); /*0x49106b*/
      }
      else
      {
        return *(&this->q0146); /*0x491075*/
      }
    case 6: /*0x490ec7*/
      if ( (aP1 & 0x4000) != 0 ) /*0x490f98*/
      {
        if ( (aP1 & 0x800) != 0 ) /*0x490f9d*/
          return *(&this->q0208); /*0x490f9f*/
        else
          return *(&this->q01C0); /*0x490fa9*/
      }
      else if ( (aP1 & dword_81DC28) != 0 ) /*0x490fb9*/
      {
        if ( (aP1 & 8) != 0 ) /*0x490fbd*/
        {
          if ( (aP1 & 0x800) != 0 ) /*0x490fc2*/
            return *(&this->q0203); /*0x490fc4*/
          else
            return *(&this->q0184); /*0x490fce*/
        }
        else if ( (aP1 & 0x800) != 0 ) /*0x490fdb*/
        {
          return *(&this->q0200); /*0x490fdd*/
        }
        else
        {
          return *(&this->q0181); /*0x490fe7*/
        }
      }
      else if ( (aP1 & 0x800) != 0 ) /*0x490ff4*/
      {
        return *(&this->q01C5); /*0x490ff6*/
      }
      else
      {
        return *(&this->q0145); /*0x491000*/
      }
    default:
      if ( (aP1 & 1) != 0 ) /*0x490ee1*/
      {
        if ( (aP1 & 0x4000) != 0 ) /*0x490ee6*/
          return *(&this->q0189); /*0x490ee8*/
        if ( (aP1 & dword_81DC28) != 0 ) /*0x490ef8*/
          return *(&this->q0180); /*0x490efa*/
        return *(&this->q0143); /*0x490eef*/
      }
      if ( (aP1 & 0x20) != 0 ) /*0x490f10*/
      {
        if ( (aP1 & 0x4000) != 0 ) /*0x490f15*/
        {
          if ( (aP1 & 0x800) != 0 ) /*0x490f1a*/
            return *(&this->q0206); /*0x490f23*/
          return *(&this->q0187); /*0x490f58*/
        }
        if ( (aP1 & dword_81DC28) != 0 ) /*0x490f2c*/
        {
          if ( (aP1 & 0x800) != 0 ) /*0x490f31*/
            return *(&this->q01C8); /*0x490f3a*/
          return *(&this->q0148); /*0x490f79*/
        }
      }
      else
      {
        if ( (aP1 & 0x4000) != 0 ) /*0x490f40*/
        {
          if ( (aP1 & 0x800) != 0 ) /*0x490f45*/
            return *(&this->q0206); /*0x490f4e*/
          return *(&this->q0187); /*0x490f45*/
        }
        if ( (aP1 & dword_81DC28) != 0 ) /*0x490f61*/
        {
          if ( (aP1 & 0x800) != 0 ) /*0x490f66*/
            return *(&this->q01C8); /*0x490f6f*/
          return *(&this->q0148); /*0x490f66*/
        }
      }
      if ( (aP1 & 0x800) != 0 ) /*0x490f7f*/
        return *(&this->q01C3); /*0x490f81*/
      else
        return *(&this->q0142); /*0x490f8b*/
  }
}
} // namespace gamemd