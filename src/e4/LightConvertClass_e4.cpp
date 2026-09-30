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

  if ( !*((unsigned int *)this + 2) ) /*0x490e53*/
    ((ConvertClass *)((int)this))->InitTables(); /*0x490e5a*/
  if ( ((uint8_t)aP1 & 0x10) != 0 ) /*0x490e65*/
  {
    if ( (IDA_BYTE1(aP1) & 0x40) != 0 ) /*0x490e6a*/
    {
      if ( (IDA_BYTE1(aP1) & 8) != 0 ) /*0x490e6f*/
        return *((unsigned int *)this + 87); /*0x490e71*/
      else
        return *((unsigned int *)this + 68); /*0x490e7b*/
    }
    else if ( ((unsigned int)aP1 & g_INI_Key_Clear.headNode[2]) != 0 ) /*0x490e8b*/
    {
      if ( (IDA_BYTE1(aP1) & 8) != 0 ) /*0x490e90*/
        return *((unsigned int *)this + 79); /*0x490e92*/
      else
        return *((unsigned int *)this + 59); /*0x490e9c*/
    }
    else if ( (IDA_BYTE1(aP1) & 8) != 0 ) /*0x490ea9*/
    {
      return *((unsigned int *)this + 74); /*0x490eab*/
    }
    else
    {
      return *((unsigned int *)this + 54); /*0x490eb5*/
    }
  }
  switch ( (uint8_t)aP1 & 6 ) /*0x490ec7*/
  {
    case 2: /*0x490ec7*/
      if ( (IDA_BYTE1(aP1) & 0x40) != 0 ) /*0x491082*/
      {
        if ( (IDA_BYTE1(aP1) & 8) != 0 ) /*0x491087*/
          return *((unsigned int *)this + 90); /*0x491089*/
        else
          return *((unsigned int *)this + 72); /*0x491093*/
      }
      else if ( ((unsigned int)aP1 & g_INI_Key_Clear.headNode[2]) != 0 ) /*0x4910a3*/
      {
        if ( ((uint8_t)aP1 & 8) != 0 ) /*0x4910a7*/
        {
          if ( (IDA_BYTE1(aP1) & 8) != 0 ) /*0x4910ac*/
            return *((unsigned int *)this + 85); /*0x4910ae*/
          else
            return *((unsigned int *)this + 66); /*0x4910b8*/
        }
        else if ( (IDA_BYTE1(aP1) & 8) != 0 ) /*0x4910c5*/
        {
          return *((unsigned int *)this + 82); /*0x4910c7*/
        }
        else
        {
          return *((unsigned int *)this + 63); /*0x4910d1*/
        }
      }
      else if ( (IDA_BYTE1(aP1) & 8) != 0 ) /*0x4910de*/
      {
        return *((unsigned int *)this + 77); /*0x4910e0*/
      }
      else
      {
        return *((unsigned int *)this + 57); /*0x4910ea*/
      }
    case 4: /*0x490ec7*/
      if ( (IDA_BYTE1(aP1) & 0x40) != 0 ) /*0x49100d*/
      {
        if ( (IDA_BYTE1(aP1) & 8) != 0 ) /*0x491012*/
          return *((unsigned int *)this + 89); /*0x491014*/
        else
          return *((unsigned int *)this + 71); /*0x49101e*/
      }
      else if ( ((unsigned int)aP1 & g_INI_Key_Clear.headNode[2]) != 0 ) /*0x49102e*/
      {
        if ( ((uint8_t)aP1 & 8) != 0 ) /*0x491032*/
        {
          if ( (IDA_BYTE1(aP1) & 8) != 0 ) /*0x491037*/
            return *((unsigned int *)this + 84); /*0x491039*/
          else
            return *((unsigned int *)this + 65); /*0x491043*/
        }
        else if ( (IDA_BYTE1(aP1) & 8) != 0 ) /*0x491050*/
        {
          return *((unsigned int *)this + 81); /*0x491052*/
        }
        else
        {
          return *((unsigned int *)this + 62); /*0x49105c*/
        }
      }
      else if ( (IDA_BYTE1(aP1) & 8) != 0 ) /*0x491069*/
      {
        return *((unsigned int *)this + 76); /*0x49106b*/
      }
      else
      {
        return *((unsigned int *)this + 56); /*0x491075*/
      }
    case 6: /*0x490ec7*/
      if ( (IDA_BYTE1(aP1) & 0x40) != 0 ) /*0x490f98*/
      {
        if ( (IDA_BYTE1(aP1) & 8) != 0 ) /*0x490f9d*/
          return *((unsigned int *)this + 88); /*0x490f9f*/
        else
          return *((unsigned int *)this + 70); /*0x490fa9*/
      }
      else if ( ((unsigned int)aP1 & g_INI_Key_Clear.headNode[2]) != 0 ) /*0x490fb9*/
      {
        if ( ((uint8_t)aP1 & 8) != 0 ) /*0x490fbd*/
        {
          if ( (IDA_BYTE1(aP1) & 8) != 0 ) /*0x490fc2*/
            return *((unsigned int *)this + 83); /*0x490fc4*/
          else
            return *((unsigned int *)this + 64); /*0x490fce*/
        }
        else if ( (IDA_BYTE1(aP1) & 8) != 0 ) /*0x490fdb*/
        {
          return *((unsigned int *)this + 80); /*0x490fdd*/
        }
        else
        {
          return *((unsigned int *)this + 61); /*0x490fe7*/
        }
      }
      else if ( (IDA_BYTE1(aP1) & 8) != 0 ) /*0x490ff4*/
      {
        return *((unsigned int *)this + 75); /*0x490ff6*/
      }
      else
      {
        return *((unsigned int *)this + 55); /*0x491000*/
      }
    default:
      if ( ((uint8_t)aP1 & 1) != 0 ) /*0x490ee1*/
      {
        if ( (IDA_BYTE1(aP1) & 0x40) != 0 ) /*0x490ee6*/
          return *((unsigned int *)this + 69); /*0x490ee8*/
        if ( ((unsigned int)aP1 & g_INI_Key_Clear.headNode[2]) != 0 ) /*0x490ef8*/
          return *((unsigned int *)this + 60); /*0x490efa*/
        return *((unsigned int *)this + 53); /*0x490eef*/
      }
      if ( ((uint8_t)aP1 & 0x20) != 0 ) /*0x490f10*/
      {
        if ( (IDA_BYTE1(aP1) & 0x40) != 0 ) /*0x490f15*/
        {
          if ( (IDA_BYTE1(aP1) & 8) != 0 ) /*0x490f1a*/
            return *((unsigned int *)this + 86); /*0x490f23*/
          return *((unsigned int *)this + 67); /*0x490f58*/
        }
        if ( ((unsigned int)aP1 & g_INI_Key_Clear.headNode[2]) != 0 ) /*0x490f2c*/
        {
          if ( (IDA_BYTE1(aP1) & 8) != 0 ) /*0x490f31*/
            return *((unsigned int *)this + 78); /*0x490f3a*/
          return *((unsigned int *)this + 58); /*0x490f79*/
        }
      }
      else
      {
        if ( (IDA_BYTE1(aP1) & 0x40) != 0 ) /*0x490f40*/
        {
          if ( (IDA_BYTE1(aP1) & 8) != 0 ) /*0x490f45*/
            return *((unsigned int *)this + 86); /*0x490f4e*/
          return *((unsigned int *)this + 67); /*0x490f45*/
        }
        if ( ((unsigned int)aP1 & g_INI_Key_Clear.headNode[2]) != 0 ) /*0x490f61*/
        {
          if ( (IDA_BYTE1(aP1) & 8) != 0 ) /*0x490f66*/
            return *((unsigned int *)this + 78); /*0x490f6f*/
          return *((unsigned int *)this + 58); /*0x490f66*/
        }
      }
      if ( (IDA_BYTE1(aP1) & 8) != 0 ) /*0x490f7f*/
        return *((unsigned int *)this + 73); /*0x490f81*/
      else
        return *((unsigned int *)this + 52); /*0x490f8b*/
  }

}
} // namespace gamemd