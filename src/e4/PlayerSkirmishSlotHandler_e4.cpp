// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_5DB600_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Player_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x5DAF30
namespace gamemd {
void sub_5DAF30(ObjectClass *self)
{
  int v1; // edi
  int i; // esi
  int v3[113]; // [esp+8h] [ebp-1C8h] BYREF
  int16_t v4; // [esp+1CCh] [ebp-4h]
  char v5; // [esp+1CEh] [ebp-2h]

  memset(v3, 0, sizeof(v3)); /*0x5daf47*/
  v4 = 0; /*0x5daf49*/
  v5 = 0; /*0x5daf4b*/
  v3[0] = 22; /*0x5daf56*/
  strcpy((char *)&v3[1],(const char *)(unk_A8B380)); /*0x5daf6d*/
  ((Player *)((Player *)&v3[11] + 3))->BuildListString(); /*0x5daf7a*/
  v1 = dword_A8DA84; /*0x5daf7f*/
  for ( i = 1; i < v1; ++i ) /*0x5daf8c*/
  {
    ((Network *)&unk_A8E9C0.Socket)->SendMessage( (int)v3, 455, 1, ((unsigned int *)(dword_A8DA78))[i] + 40, 0, 0); /*0x5dafb0*/
        ((Event *)self)->Dispatch();
  }
}
} // namespace gamemd
