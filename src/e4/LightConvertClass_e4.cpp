// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x490E50
int LightConvertClass::SelectRLEBlitter(IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall LightConvertClass::SelectRLEBlitter(_DWORD *this, IUnknown *aP1)
{
  if ( !*(this + 2) ) /*0x490e53*/
    ConvertClass::InitTables((int)this); /*0x490e5a*/
  if ( ((unsigned __int8)aP1 & 0x10) != 0 ) /*0x490e65*/
  {
    if ( (BYTE1(aP1) & 0x40) != 0 ) /*0x490e6a*/
    {
      if ( (BYTE1(aP1) & 8) != 0 ) /*0x490e6f*/
        return *(this + 87); /*0x490e71*/
      else
        return *(this + 68); /*0x490e7b*/
    }
    else if ( ((unsigned int)aP1 & g_INI_Key_Clear.headNode[2]) != 0 ) /*0x490e8b*/
    {
      if ( (BYTE1(aP1) & 8) != 0 ) /*0x490e90*/
        return *(this + 79); /*0x490e92*/
      else
        return *(this + 59); /*0x490e9c*/
    }
    else if ( (BYTE1(aP1) & 8) != 0 ) /*0x490ea9*/
    {
      return *(this + 74); /*0x490eab*/
    }
    else
    {
      return *(this + 54); /*0x490eb5*/
    }
  }
  switch ( (unsigned __int8)aP1 & 6 ) /*0x490ec7*/
  {
    case 2: /*0x490ec7*/
      if ( (BYTE1(aP1) & 0x40) != 0 ) /*0x491082*/
      {
        if ( (BYTE1(aP1) & 8) != 0 ) /*0x491087*/
          return *(this + 90); /*0x491089*/
        else
          return *(this + 72); /*0x491093*/
      }
      else if ( ((unsigned int)aP1 & g_INI_Key_Clear.headNode[2]) != 0 ) /*0x4910a3*/
      {
        if ( ((unsigned __int8)aP1 & 8) != 0 ) /*0x4910a7*/
        {
          if ( (BYTE1(aP1) & 8) != 0 ) /*0x4910ac*/
            return *(this + 85); /*0x4910ae*/
          else
            return *(this + 66); /*0x4910b8*/
        }
        else if ( (BYTE1(aP1) & 8) != 0 ) /*0x4910c5*/
        {
          return *(this + 82); /*0x4910c7*/
        }
        else
        {
          return *(this + 63); /*0x4910d1*/
        }
      }
      else if ( (BYTE1(aP1) & 8) != 0 ) /*0x4910de*/
      {
        return *(this + 77); /*0x4910e0*/
      }
      else
      {
        return *(this + 57); /*0x4910ea*/
      }
    case 4: /*0x490ec7*/
      if ( (BYTE1(aP1) & 0x40) != 0 ) /*0x49100d*/
      {
        if ( (BYTE1(aP1) & 8) != 0 ) /*0x491012*/
          return *(this + 89); /*0x491014*/
        else
          return *(this + 71); /*0x49101e*/
      }
      else if ( ((unsigned int)aP1 & g_INI_Key_Clear.headNode[2]) != 0 ) /*0x49102e*/
      {
        if ( ((unsigned __int8)aP1 & 8) != 0 ) /*0x491032*/
        {
          if ( (BYTE1(aP1) & 8) != 0 ) /*0x491037*/
            return *(this + 84); /*0x491039*/
          else
            return *(this + 65); /*0x491043*/
        }
        else if ( (BYTE1(aP1) & 8) != 0 ) /*0x491050*/
        {
          return *(this + 81); /*0x491052*/
        }
        else
        {
          return *(this + 62); /*0x49105c*/
        }
      }
      else if ( (BYTE1(aP1) & 8) != 0 ) /*0x491069*/
      {
        return *(this + 76); /*0x49106b*/
      }
      else
      {
        return *(this + 56); /*0x491075*/
      }
    case 6: /*0x490ec7*/
      if ( (BYTE1(aP1) & 0x40) != 0 ) /*0x490f98*/
      {
        if ( (BYTE1(aP1) & 8) != 0 ) /*0x490f9d*/
          return *(this + 88); /*0x490f9f*/
        else
          return *(this + 70); /*0x490fa9*/
      }
      else if ( ((unsigned int)aP1 & g_INI_Key_Clear.headNode[2]) != 0 ) /*0x490fb9*/
      {
        if ( ((unsigned __int8)aP1 & 8) != 0 ) /*0x490fbd*/
        {
          if ( (BYTE1(aP1) & 8) != 0 ) /*0x490fc2*/
            return *(this + 83); /*0x490fc4*/
          else
            return *(this + 64); /*0x490fce*/
        }
        else if ( (BYTE1(aP1) & 8) != 0 ) /*0x490fdb*/
        {
          return *(this + 80); /*0x490fdd*/
        }
        else
        {
          return *(this + 61); /*0x490fe7*/
        }
      }
      else if ( (BYTE1(aP1) & 8) != 0 ) /*0x490ff4*/
      {
        return *(this + 75); /*0x490ff6*/
      }
      else
      {
        return *(this + 55); /*0x491000*/
      }
    default:
      if ( ((unsigned __int8)aP1 & 1) != 0 ) /*0x490ee1*/
      {
        if ( (BYTE1(aP1) & 0x40) != 0 ) /*0x490ee6*/
          return *(this + 69); /*0x490ee8*/
        if ( ((unsigned int)aP1 & g_INI_Key_Clear.headNode[2]) != 0 ) /*0x490ef8*/
          return *(this + 60); /*0x490efa*/
        return *(this + 53); /*0x490eef*/
      }
      if ( ((unsigned __int8)aP1 & 0x20) != 0 ) /*0x490f10*/
      {
        if ( (BYTE1(aP1) & 0x40) != 0 ) /*0x490f15*/
        {
          if ( (BYTE1(aP1) & 8) != 0 ) /*0x490f1a*/
            return *(this + 86); /*0x490f23*/
          return *(this + 67); /*0x490f58*/
        }
        if ( ((unsigned int)aP1 & g_INI_Key_Clear.headNode[2]) != 0 ) /*0x490f2c*/
        {
          if ( (BYTE1(aP1) & 8) != 0 ) /*0x490f31*/
            return *(this + 78); /*0x490f3a*/
          return *(this + 58); /*0x490f79*/
        }
      }
      else
      {
        if ( (BYTE1(aP1) & 0x40) != 0 ) /*0x490f40*/
        {
          if ( (BYTE1(aP1) & 8) != 0 ) /*0x490f45*/
            return *(this + 86); /*0x490f4e*/
          return *(this + 67); /*0x490f45*/
        }
        if ( ((unsigned int)aP1 & g_INI_Key_Clear.headNode[2]) != 0 ) /*0x490f61*/
        {
          if ( (BYTE1(aP1) & 8) != 0 ) /*0x490f66*/
            return *(this + 78); /*0x490f6f*/
          return *(this + 58); /*0x490f66*/
        }
      }
      if ( (BYTE1(aP1) & 8) != 0 ) /*0x490f7f*/
        return *(this + 73); /*0x490f81*/
      else
        return *(this + 52); /*0x490f8b*/
  }
}
}
