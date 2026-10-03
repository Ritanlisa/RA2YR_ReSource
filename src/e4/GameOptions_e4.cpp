// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/GameOption_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/Mission_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"

// 0x682780
namespace gamemd {
int sub_682780(int a1, int a2, wchar_t * String)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x682780)
}
}
// 0x6829A0
namespace gamemd {
int sub_6829A0(int * a1, int a2, int a3)
{
  int v3; // eax
  int v4; // esi
  int v6; // [esp+2Ch] [ebp-1Ch] BYREF
  unsigned int v7[2]; // [esp+30h] [ebp-18h] BYREF
  int16_t v8[4]; // [esp+38h] [ebp-10h] BYREF
  int v9; // [esp+40h] [ebp-8h]

  v6 = 0; /*0x6829ac*/
  if ( (*(int (**)(int *, void *, int, int *))(*a1 + 16))(a1, &unk_7F7D10, 18, &v6) >= 0 ) /*0x6829c4*/
    goto LABEL_7; /*0x6829c4*/
  if ( v6 ) /*0x6829cc*/
    (*(void (**)(int))(*(unsigned int *)v6 + 8))(v6); /*0x6829d1*/
  v3 = *a1; /*0x6829d4*/
  v6 = 0; /*0x6829ea*/
  v4 = (*(int (**)(int *, void *, unsigned int, unsigned int, int, int *))(v3 + 12))(a1, &unk_7F7D10, 0, 0, 4114, &v6); /*0x6829f5*/
  if ( v4 >= 0 ) /*0x6829f9*/
  {
  LABEL_7:
    v7[1] = a2; /*0x682a1a*/
    v7[0] = 1; /*0x682a24*/
    v8[0] = 31; /*0x682a2c*/
    v9 = a3; /*0x682a33*/
    if ( !v6 ) /*0x682a37*/
      WinAPI::Wrapper(-2147467261); /*0x682a3e*/
    v4 = (*(int (**)(int, int, unsigned int *, int16_t *, int))(*(unsigned int *)v6 + 16))(v6, 1, v7, v8, 2); /*0x682a5b*/
    if ( v4 >= 0 ) /*0x682a63*/
    {
      if ( v6 ) /*0x682a7a*/
        (*(void (**)(int))(*(unsigned int *)v6 + 8))(v6); /*0x682a7f*/
    }
    else if ( v6 ) /*0x682a67*/
    {
      goto LABEL_6; /*0x682a67*/
    }
  }
  else if ( v6 ) /*0x682a01*/
  {
  LABEL_6:
    (*(void (**)(int))(*(unsigned int *)v6 + 8))(v6); /*0x682a03*/
    return v4; /*0x682a0f*/
  }
  return v4; /*0x682a0b*/
}
}