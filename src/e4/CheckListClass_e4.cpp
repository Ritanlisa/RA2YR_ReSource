// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/CheckListClass_e4.hpp"
#include "e4/classes/BuildingAnim_e4.hpp"
#include "e4/classes/ColorListClass_e4.hpp"
#include "e4/classes/LinkedList_flat_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ListClass_e4.hpp"

// 0x488520
namespace gamemd {
size_t CheckListClass_OnClick(void * a1, void * a2, void * a3, void * a4, void * a5, void * a6, void * a7)
{
  ListClass *v7; // ecx
  ListClass *v8; // esi
  size_t *result; // eax
  int (*)(...) ListClass_field_0x0C;
  wchar_t * Type;
  int v12; // ecx
  int v13; // eax
  int (*)(...) ListClass_field_0x10;
  int v15; // eax
  int v16; // [esp-20h] [ebp-114h]
  size_t v17; // [esp-10h] [ebp-104h]
  int v18; // [esp-10h] [ebp-104h]
  unsigned int v19[4]; // [esp+4h] [ebp-F0h] BYREF
  unsigned int v20[2]; // [esp+14h] [ebp-E0h] BYREF
  unsigned char v21[16]; // [esp+1Ch] [ebp-D8h] BYREF
  unsigned short v22[100]; // [esp+2Ch] [ebp-C8h] BYREF

  v8 = v7; /*0x488527*/
  result = (size_t *)(*(int (**)(void))(*(unsigned int *)v7->__pad_0 + 148))(); /*0x48852b*/
  if ( (int)self < (int)result )
  {
    result = (size_t *)((Array *)(v8))->GetClamped((int)self); /*0x488543*/
    if ( result )
    {
      memset(&v22[1], 0, 198); /*0x488560*/
      v17 = *result; /*0x48856b*/
      v22[0] = *((unsigned char *)result + 4) != 0 ? 3 : 32;
      v22[1] = (int)(32);
      swprintf(&v22[2], v17, a2); /*0x488585*/
      ListClass_field_0x0C = v8[1].ListClass_field_0x0C; /*0x48858a*/
            Type = (wchar_t *)((BuildingAnim *)0)->GetType();
      if ( a6 ) /*0x4885a7*/
      {
        ListClass_field_0x0C |= 0x2000u; /*0x4885b4*/
        v12 = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&stru_B054D0.m_1[3] + 4 * Type) + 796); /*0x4885bd*/
        if ( *(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x4885c9*/
          v13 = *(uint8_t *)(*(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 372) + v12); /*0x4885d6*/
        else
          v13 = *(uint16_t *)(*(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 372) + 2 * v12); /*0x4885e2*/
        v19[0] = (unsigned int)(a3); /*0x4885f4*/
        v19[3] = v8[2].ListClass_field_0x0C; /*0x4885fb*/
        v19[1] = (unsigned int)(a4); /*0x488606*/
        v19[2] = (unsigned int)(a5); /*0x48860a*/
        (*(void (**)(AudioStream *, unsigned int *, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x488615*/
          g_DSurface_Hidden_2,
          v19,
          v13);
      }
      else if ( (ListClass_field_0x0C & 0x4000) == 0 ) /*0x488620*/
      {
        ListClass_field_0x0C |= 0x1000u; /*0x488622*/
      }
      ListClass_field_0x10 = (unsigned int)(v8[1].ListClass_field_0x10);
      v20[0] = (unsigned int)(a3);
      v18 = (unsigned int)(ListClass_field_0x10);
      v20[1] = (unsigned int)(a4);
      v16 = *(unsigned int *)(*(unsigned int *)&stru_B054D0.m_1[3] + 4 * Type); /*0x488659*/
      v15 = (*(int (**)(AudioStream *, unsigned char *))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 120))( /*0x488662*/
              g_DSurface_Hidden_2,
              v21);
            return FillRectangle((IUnknown *)(/*0x488675*/                v19),                (int)v22,                (int)g_DSurface_Hidden_2,                v15,                (int)v20,                v16,                0,                ListClass_field_0x0C,                a5,                v18);
    }
  }
  return (size_t)(result); /*0x48867d*/
}
}
// 0x4886B0
namespace gamemd {  // G42.18c ns repair
int CheckListClass::COMStub()
{

  return this->q044; /*0x4886b3*/

}
}  // G42.18c ns repair
// 0x557E10
namespace gamemd {  // G42.18c ns repair
int CheckListClass::ddtor(int a2)
{

  if ( *((unsigned char *)this + 84) ) /*0x557e18*/
  {
    (*(void (**)(char *, int))(*((unsigned int *)this + 70) + 12))((char *)this + 280, a2); /*0x557e2c*/
    (*(void (**)(char *, int))(*((unsigned int *)this + 46) + 12))((char *)this + 184, a2); /*0x557e3c*/
    (*(void (**)(char *, int))(*((unsigned int *)this + 22) + 12))((char *)this + 88, a2); /*0x557e46*/
  }
  return LinkedList::InsertAfter( (void)((LinkClass *)this), a2); /*0x557e51*/

}
}  // G42.18c ns repair
// 0x48E650
namespace gamemd {  // G42.18c ns repair
void CheckListClass::StubReturnFalse(int a1, int a2, int a3)
{

  ; /*0x48e650*/

}
}  // G42.18c ns repair
// 0x4AEBA0
namespace gamemd {  // G42.18c ns repair
int CheckListClass::COMStub_Return0()
{

  return 0; /*0x4aeba2*/

}
}  // G42.18c ns repair
// 0x4E1510
namespace gamemd {  // G42.18c ns repair
void CheckListClass::StubReturnVoid()
{

  ; /*0x4e1510*/

}
}  // G42.18c ns repair
// 0x4E1520
void CheckListClass::StubReturn()
{

  ; /*0x4e1520*/

}