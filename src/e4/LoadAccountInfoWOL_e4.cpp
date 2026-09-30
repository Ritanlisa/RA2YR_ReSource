// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_779690_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/LinkedList_flat_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x779690
namespace gamemd {
void * E4Recv_779690::LoadAccountInfoWOL_Load(void* aP1,  ObjectClass * aP2,  void* aP3,  void* aP4,  int a6,  ObjectClass * aP6,  void* aP7,  void* aP8,  void* aP9,  void* aP10,  void* aP11,  void* aP12,  void* aP13,  void* aP14)
{
    *((unsigned int *)this + 1) = 0;
    *((unsigned char *)this + 8) = 0;
    String::AssignFromPtr((char **)this + 3, (const char **)aP1);
    *((unsigned int *)this + 4) = aP2;
    *((unsigned int *)this + 6) = aP4;
    *((unsigned char *)this + 20) = (unsigned char)aP3;
    *((unsigned int *)this + 7) = a6;
    *((unsigned int *)this + 9) = aP7;
    *((unsigned int *)this + 8) = aP6;
    *((unsigned int *)this + 10) = aP8;
    *((unsigned int *)this + 12) = aP10;
    *((unsigned int *)this + 11) = aP9;
    *((unsigned int *)this + 13) = aP11;
    *((unsigned char *)this + 56) = (unsigned char)aP12;
    WideString::AssignFromPtr((wchar_t **)this + 15, (const wchar_t **)aP14);
    WideString::AssignFromPtr((wchar_t **)this + 16, (const wchar_t **)aP13);
  return this; /*0x77971d*/
}
} // namespace gamemd
