// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/UnitClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x6B7BB0
namespace gamemd {
void UnitClass::ProcessIdleOrders()
{
  int result; // eax
  int v3; // edi
  int v4; // eax
  unsigned int *v5; // eax
  int v6; // [esp+Ch] [ebp-8h]

  v3 = 0; /*0x6b7bb7*/
  if ( this->ambientSoundController[3] > 0 ) /*0x6b7bbc*/
  {
    do /*0x6b7c21*/
    {
      v4 = *(unsigned int *)(this->ambientSoundController[0] + 4 * v3); /*0x6b7bc6*/
      if ( *(unsigned int *)(v4 + 4) == 2 ) /*0x6b7bcd*/
      {
        v5 = *(unsigned int **)v4; /*0x6b7bcf*/
        if ( *(unsigned char *)(v5[433] + 3432) ) /*0x6b7bd7*/
        {
          UnitClass::GetExitCell((int)&g_MissionQueueFrame, v5, *(unsigned int **)&this->bombVisible); /*0x6b7beb*/
          g_MissionQueueFrame.nextScenario[0] = *(unsigned int *)&stru_A8EB00.gapE4[416]; /*0x6b7bfa*/
          g_MissionQueueFrame.nextScenario[1] = v6; /*0x6b7bff*/
          g_MissionQueueFrame.nextScenario[2] = 2; /*0x6b7c05*/
          UnitClass::ClearTargetRef(this, **(unsigned int **)(this->ambientSoundController[0] + 4 * v3)); /*0x6b7c16*/
        }
      }
      result = this->ambientSoundController[3]; /*0x6b7c1b*/
      ++v3; /*0x6b7c1e*/
    }
    while ( v3 < result ); /*0x6b7c21*/
  }
  this->estimatedHealth = 0; /*0x6b7c26*/
  this->health = 0; /*0x6b7c29*/
  *(unsigned int *)&this->bombVisible = 0; /*0x6b7c2c*/
  return result; /*0x6b7c2f*/
}