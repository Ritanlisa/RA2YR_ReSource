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
int LightConvertClass::SelectRLEBlitter(int a1)
{
    if ( !*((unsigned int *)this + 8) )
        ConvertClass::InitTables((int)this);
  if ( ((unsigned int)(aP1)& 0x10) != 0 ) /*0x490e65*/
  {
    if ( ((unsigned int)(aP1)& 0x4000) != 0 ) /*0x490e6a*/
    {
      if ( ((unsigned int)(aP1)& 0x800) != 0 ) /*0x490e6f*/
                return *((unsigned int *)this + 348);
      else
                return *((unsigned int *)this + 272);
    }
    else if ( ((unsigned int)(aP1)& dword_81DC28) != 0 ) /*0x490e8b*/
    {
      if ( ((unsigned int)(aP1)& 0x800) != 0 ) /*0x490e90*/
                return *((unsigned int *)this + 316);
      else
                return *((unsigned int *)this + 236);
    }
    else if ( ((unsigned int)(aP1)& 0x800) != 0 ) /*0x490ea9*/
    {
            return *((unsigned int *)this + 296);
    }
    else
    {
            return *((unsigned int *)this + 216);
    }
  }
  switch ( (unsigned int)(aP1)& 6 ) /*0x490ec7*/
  {
    case 2: /*0x490ec7*/
      if ( ((unsigned int)(aP1)& 0x4000) != 0 ) /*0x491082*/
      {
        if ( ((unsigned int)(aP1)& 0x800) != 0 ) /*0x491087*/
                    return *((unsigned int *)this + 360);
        else
                    return *((unsigned int *)this + 288);
      }
      else if ( ((unsigned int)(aP1)& dword_81DC28) != 0 ) /*0x4910a3*/
      {
        if ( ((unsigned int)(aP1)& 8) != 0 ) /*0x4910a7*/
        {
          if ( ((unsigned int)(aP1)& 0x800) != 0 ) /*0x4910ac*/
                        return *((unsigned int *)this + 340);
          else
                        return *((unsigned int *)this + 264);
        }
        else if ( ((unsigned int)(aP1)& 0x800) != 0 ) /*0x4910c5*/
        {
                    return *((unsigned int *)this + 328);
        }
        else
        {
                    return *((unsigned int *)this + 252);
        }
      }
      else if ( ((unsigned int)(aP1)& 0x800) != 0 ) /*0x4910de*/
      {
                return *((unsigned int *)this + 308);
      }
      else
      {
                return *((unsigned int *)this + 228);
      }
    case 4: /*0x490ec7*/
      if ( ((unsigned int)(aP1)& 0x4000) != 0 ) /*0x49100d*/
      {
        if ( ((unsigned int)(aP1)& 0x800) != 0 ) /*0x491012*/
                    return *((unsigned int *)this + 356);
        else
                    return *((unsigned int *)this + 284);
      }
      else if ( ((unsigned int)(aP1)& dword_81DC28) != 0 ) /*0x49102e*/
      {
        if ( ((unsigned int)(aP1)& 8) != 0 ) /*0x491032*/
        {
          if ( ((unsigned int)(aP1)& 0x800) != 0 ) /*0x491037*/
                        return *((unsigned int *)this + 336);
          else
                        return *((unsigned int *)this + 260);
        }
        else if ( ((unsigned int)(aP1)& 0x800) != 0 ) /*0x491050*/
        {
                    return *((unsigned int *)this + 324);
        }
        else
        {
                    return *((unsigned int *)this + 248);
        }
      }
      else if ( ((unsigned int)(aP1)& 0x800) != 0 ) /*0x491069*/
      {
                return *((unsigned int *)this + 304);
      }
      else
      {
                return *((unsigned int *)this + 224);
      }
    case 6: /*0x490ec7*/
      if ( ((unsigned int)(aP1)& 0x4000) != 0 ) /*0x490f98*/
      {
        if ( ((unsigned int)(aP1)& 0x800) != 0 ) /*0x490f9d*/
                    return *((unsigned int *)this + 352);
        else
                    return *((unsigned int *)this + 280);
      }
      else if ( ((unsigned int)(aP1)& dword_81DC28) != 0 ) /*0x490fb9*/
      {
        if ( ((unsigned int)(aP1)& 8) != 0 ) /*0x490fbd*/
        {
          if ( ((unsigned int)(aP1)& 0x800) != 0 ) /*0x490fc2*/
                        return *((unsigned int *)this + 332);
          else
                        return *((unsigned int *)this + 256);
        }
        else if ( ((unsigned int)(aP1)& 0x800) != 0 ) /*0x490fdb*/
        {
                    return *((unsigned int *)this + 320);
        }
        else
        {
                    return *((unsigned int *)this + 244);
        }
      }
      else if ( ((unsigned int)(aP1)& 0x800) != 0 ) /*0x490ff4*/
      {
                return *((unsigned int *)this + 300);
      }
      else
      {
                return *((unsigned int *)this + 220);
      }
    default:
      if ( ((unsigned int)(aP1)& 1) != 0 ) /*0x490ee1*/
      {
        if ( ((unsigned int)(aP1)& 0x4000) != 0 ) /*0x490ee6*/
                    return *((unsigned int *)this + 276);
        if ( ((unsigned int)(aP1)& dword_81DC28) != 0 ) /*0x490ef8*/
                    return *((unsigned int *)this + 240);
                return *((unsigned int *)this + 212);
      }
      if ( ((unsigned int)(aP1)& 0x20) != 0 ) /*0x490f10*/
      {
        if ( ((unsigned int)(aP1)& 0x4000) != 0 ) /*0x490f15*/
        {
          if ( ((unsigned int)(aP1)& 0x800) != 0 ) /*0x490f1a*/
                        return *((unsigned int *)this + 344);
                    return *((unsigned int *)this + 268);
        }
        if ( ((unsigned int)(aP1)& dword_81DC28) != 0 ) /*0x490f2c*/
        {
          if ( ((unsigned int)(aP1)& 0x800) != 0 ) /*0x490f31*/
                        return *((unsigned int *)this + 312);
                    return *((unsigned int *)this + 232);
        }
      }
      else
      {
        if ( ((unsigned int)(aP1)& 0x4000) != 0 ) /*0x490f40*/
        {
          if ( ((unsigned int)(aP1)& 0x800) != 0 ) /*0x490f45*/
                        return *((unsigned int *)this + 344);
                    if ( (BYTE1(aP1) & 8) != 0 )
        }
        if ( ((unsigned int)(aP1)& dword_81DC28) != 0 ) /*0x490f61*/
        {
          if ( ((unsigned int)(aP1)& 0x800) != 0 ) /*0x490f66*/
                        return *((unsigned int *)this + 312);
                    if ( (BYTE1(aP1) & 8) != 0 )
        }
      }
      if ( ((unsigned int)(aP1)& 0x800) != 0 ) /*0x490f7f*/
                return *((unsigned int *)this + 292);
      else
                return *((unsigned int *)this + 208);
  }
}
} // namespace gamemd