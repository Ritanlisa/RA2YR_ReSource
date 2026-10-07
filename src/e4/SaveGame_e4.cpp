// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/SaveGame_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/RulesClass_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/FrameSnapshot_e4.hpp"
#include "e4/classes/IPersistStream_e4.hpp"
#include "e4/classes/IStream_e4.hpp"
#include "e4/classes/StreamClass_e4.hpp"
#include "e4/classes/VocClass_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/classes/SuperWeaponClass_e4.hpp"
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers

// 0x4391C0
namespace gamemd {
int SaveGame::LoadArrayData(int * a2)
{

  int v3; // ecx
  int result; // eax
  int v5; // ebx
  int v6; // ecx
  int i; // ebx
  int v8; // [esp+40h] [ebp-4h] BYREF

  v3 = *a2; /*0x4391cc*/
  v8 = *(unsigned int *)&this->__pad_0[16]; /*0x4391d9*/
  result = (*(int (**)(int *, int *, int, unsigned int))(v3 + 16))( (int *)(a2), (int *)(&v8), 4, 0); /*0x4391dd*/
  if ( result >= 0 ) /*0x4391e2*/
  {
    v5 = 0; /*0x4391e8*/
    if ( v8 <= 0 ) /*0x4391ec*/
    {
LABEL_5:
      v6 = *a2; /*0x43920c*/
      v8 = *(unsigned int *)&this->__pad_0[40]; /*0x43921b*/
      result = (*(int (**)(int *, int *, int, unsigned int))(v6 + 16))( (int *)(a2), (int *)(&v8), 4, 0); /*0x43921f*/
      if ( result >= 0 ) /*0x439224*/
      {
        for ( i = 0; i < v8; ++i ) /*0x43922e*/
        {
          result = (*(int (**)(int *, int, int, unsigned int))(*a2 + 16))( /*0x43923e*/
                     a2,
                     *(unsigned int *)&this->__pad_0[28] + 4 * i,
                     4,
                     0);
          if ( result < 0 ) /*0x439243*/
            break; /*0x439243*/
        }
      }
    }
    else
    {
      while ( 1 ) /*0x4391fc*/
      {
        result = (*(int (**)(int *, int, int, unsigned int))(*a2 + 16))( /*0x4391fc*/
                   a2,
                   *(unsigned int *)&this->__pad_0[4] + 4 * v5,
                   4,
                   0);
        if ( result < 0 ) /*0x439201*/
          break; /*0x439201*/
        if ( ++v5 >= v8 ) /*0x43920a*/
          goto LABEL_5; /*0x43920a*/
      }
    }
  }
  return result; /*0x43924e*/

}
}
// 0x54E750
namespace gamemd {
int SaveGame::WriteDataArray(int * a2)
{

  int v3; // ecx
  int result; // eax
  int i; // edi
  int v6; // [esp+20h] [ebp-4h] BYREF

  v3 = *a2; /*0x54e75c*/
  v6 = *(unsigned int *)&this->__pad_0[28]; /*0x54e769*/
  result = (*(int (**)(int *, int *, int, unsigned int))(v3 + 16))( (int *)(a2), (int *)(&v6), 4, 0); /*0x54e76d*/
  if ( result >= 0 ) /*0x54e772*/
  {
    for ( i = 0; i < v6; ++i ) /*0x54e77c*/
    {
      result = (*(int (**)(int *, unsigned int, int, unsigned int))(*a2 + 16))( /*0x54e78c*/
                 a2,
                 *(unsigned int *)(*(unsigned int *)&this->__pad_0[16] + 4 * i),
                 8,
                 0);
      if ( result < 0 ) /*0x54e791*/
        break; /*0x54e791*/
    }
  }
  return result; /*0x54e79c*/

}
}
// 0x6607D0
namespace gamemd {
int SaveGame::SaveTriggerEvents()
{

  int v2; // ecx
  int v4; // edi
  int LoadGame_field_0x10; // [esp+20h] [ebp-4h] BYREF

  v2 = *(unsigned int *)this->__pad_0; /*0x6607e0*/
  LoadGame_field_0x10 = dword_B04DB8; /*0x6607e6*/
  if ( (*(int (**)(SaveGame *, int *, int, unsigned int))(v2 + 16))( this, (int *)(&LoadGame_field_0x10), 4, 0) < 0 ) /*0x6607ef*/
    return 0; /*0x6607f6*/
  v4 = 0; /*0x6607fb*/
  if ( LoadGame_field_0x10 > 0 ) /*0x6607ff*/
  {
    while ( (*(int (**)(SaveGame *, unsigned int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 16))( /*0x660817*/
              this,
              *(unsigned int *)(dword_B04DAC+ 4 * v4),
              64,
              0) >= 0 )
    {
      if ( ++v4 >= LoadGame_field_0x10 ) /*0x660820*/
        return (*(int (**)(SaveGame *, int16_t *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 16))( /*0x660820*/
                 this,
                 (int16_t *)&word_B04D78,
                 4,
                 0) >= 0;
    }
    return 0; /*0x660817*/
  }
  return (*(int (**)(SaveGame *, int16_t *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 16))( /*0x6607f1*/
           this,
           (int16_t *)&word_B04D78,
           4,
           0) >= 0;

}
}
// 0x67D300
namespace gamemd {
char SaveGame::Start()
{

  int v2; // ecx
  int v3; // ebx
  int v4; // eax
  int v5; // ebx
  char result; // al
  int v7; // ecx
  int v8; // ebx
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  int v14; // ebx
  int v15; // eax
  int v16; // ebx
  int v17; // eax
  int v18; // ebx
  int v19; // eax
  int v20; // ebx
  int v21; // eax
  int v22; // ebx
  int v23; // eax
  int v24; // ebx
  int v25; // eax
  int v26; // ebx
  int v27; // eax
  int v28; // ebx
  int v29; // eax
  int v30; // ebx
  int v31; // eax
  int v32; // ebx
  int v33; // eax
  int v34; // ebx
  int v35; // eax
  int v36; // ebx
  int v37; // eax
  int v38; // ebx
  int v39; // eax
  int v40; // ebx
  int v41; // eax
  int v42; // ebx
  int v43; // eax
  int v44; // ebx
  int v45; // eax
  int v46; // ebx
  int v47; // eax
  int i; // ebx
  int v49; // eax
  int j; // ebx
  int v51; // eax
  int v52; // ebx
  int v53; // eax
  int v54; // ebx
  in... [33906 chars total]
}
} // namespace gamemd

// 0x67F7E0
namespace gamemd {
int SaveGame::LoadMainGameState()
{

  int result; // eax
  int v3; // ecx
  int v4; // edi
  int v5; // edx
  int v6; // edi
  int v7; // edx
  int v8; // edi
  int v9; // eax
  ParticleSystemClass *unk1Particles; // [esp+A0h] [ebp-4h] BYREF

  result = (*(int (**)(SaveGame *, unsigned char *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 16))( /*0x67f7f1*/
             this,
             (unsigned char *)(unsigned int *)((char *)&stru_A8EB00 + 404),
             4,
             0);
  if ( result >= 0 )
  {
    result = (*(int (**)(SaveGame *, Object **, int, unsigned int))(*(unsigned int *)this->__pad_0 + 16))( /*0x67f808*/
               this,
               (Object **)&dword_A83D4C,
               4,
               0);
    if ( result >= 0 )
    {
      result = (*(int (**)(SaveGame *, unsigned char *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 16))( /*0x67f81f*/
                 this,
                 (unsigned char *)(unsigned int *)((char *)&stru_A8EB00 + 416),
                 4,
                 0);
      if ( result >= 0 )
      {
        v3 = *(unsigned int *)this->__pad_0; /*0x67f82f*/
        unk1Particles = *(ParticleSystemClass **)(unsigned int *)((char *)&stru_A8EB00 + 228); /*0x67f83b*/
result = (*(int (**)(SaveGame *, ParticleSystemClass **, int, unsigned int))(v3 + 16))( /*0x67f83f*/ this, (ParticleSystemClass **)(&unk1Particles), 4, 0);




        if ( result >= 0 )
        {
          v4 = 0; /*0x67f84e*/
          if ( (int)unk1Particles <= 0 )
          {
LABEL_8:
result = (*(int (**)(SaveGame *, float *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 16))( /*0x67f879*/ this, (float *)&flt_89EA40, 432, 0);




            if ( result >= 0 )
            {
              SuperWeaponClass::LoadFromSaveStream((SuperWeaponClass *)this); /*0x67f895*/
              v5 = *(unsigned int *)this->__pad_0; /*0x67f8a0*/
              unk1Particles = (gamemd::ParticleSystemClass *)(((char *)&FootClass_Array)); /*0x67f8ac*/
result = (*(int (**)(SaveGame *, ParticleSystemClass **, int, unsigned int))(v5 + 16))( /*0x67f8b0*/ this, (ParticleSystemClass **)(&unk1Particles), 4, 0);




              if ( result >= 0 )
              {
                v6 = 0; /*0x67f8bf*/
                if ( (int)unk1Particles <= 0 )
                {
LABEL_13:
                  v7 = *(unsigned int *)this->__pad_0; /*0x67f8ea*/
                  unk1Particles = (ParticleSystemClass *)((unsigned int *)&FootClass_Array)[0]; /*0x67f8fc*/
result = (*(int (**)(SaveGame *, ParticleSystemClass **, int, unsigned int))(v7 + 16))( /*0x67f900*/ this, (ParticleSystemClass **)(&unk1Particles), 4, 0);




                  if ( result >= 0 )
                  {
                    v8 = 0; /*0x67f90f*/
                    if ( (int)unk1Particles <= 0 )
                    {
LABEL_17:
                      result = (*(int (**)(SaveGame *, int *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 16))( /*0x67f93a*/
                                 this,
                                 (int *)dword_81DA8C,
                                 76,
                                 0);
                      if ( result >= 0 )
                      {
                        result = (*(int (**)(SaveGame *, int *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 16))( /*0x67f959*/
                                   this,
                                   (int *)dword_81DAD8,
                                   76,
                                   0);
                        if ( result >= 0 )
                        {
result = (*(int (**)(SaveGame *, double *, int, unsigned int))(*(unsigned int *)this->__pad_0 /*0x67f96f*/ + 16))( this, (double *)&dbl_89EC28, 152, 0);





                          if ( result >= 0 )
                          {
result = (*(int (**)(SaveGame *, char *, int, unsigned int))(*(unsigned int *)this->__pad_0 /*0x67f982*/ + 16))( this, (char *)(byte_89ECC0), 19, 0);





                            if ( result >= 0 )
                            {
                              result = (*(int (**)(SaveGame *, MissionClass *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 16))( /*0x67f998*/
                                         this,
                                         (MissionClass *)&stru_A8E3A8,
                                         1024,
                                         0);
                              if ( result >= 0 )
                              {
                                v9 = (*(int (**)(SaveGame *, int *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 16))( /*0x67f9ab*/
                                       this,
                                       (int *)&dword_B07784,
                                       4,
                                       0);
                                return v9 >= 0 ? 0 : v9;
                              }
                            }
                          }
                        }
                      }
                    }
                    else
                    {
                      while ( 1 ) /*0x67f926*/
                      {
                        result = (*(int (**)(SaveGame *, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 16))( /*0x67f926*/
                                   this,
                                   *((unsigned int *)((char *)&FootClass_Array + 5)) + 4 * v8,
                                   4,
                                   0);
                        if ( result < 0 ) /*0x67f92b*/
                          break; /*0x67f92b*/
                        if ( ++v8 >= (int)unk1Particles ) /*0x67f938*/
                          goto LABEL_17; /*0x67f938*/
                      }
                    }
                  }
                }
                else
                {
                  while ( 1 ) /*0x67f8d6*/
                  {
                    result = (*(int (**)(SaveGame *, char *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 16))( /*0x67f8d6*/
                               this,
                               (char *)&((char *)&FootClass_Array)->vtable1 + 4 * v6,
                               4,
                               0);
                    if ( result < 0 ) /*0x67f8db*/
                      break; /*0x67f8db*/
                    if ( ++v6 >= (int)unk1Particles ) /*0x67f8e8*/
                      goto LABEL_13; /*0x67f8e8*/
                  }
                }
              }
            }
          }
          else
          {
            while ( 1 ) /*0x67f865*/
            {
              result = (*(int (**)(SaveGame *, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 16))( /*0x67f865*/
                         this,
                         *(unsigned int *)((char *)&stru_A8EB00 + 216) + 4 * v4,
                         4,
                         0);
              if ( result < 0 ) /*0x67f86a*/
                break; /*0x67f86a*/
              if ( ++v4 >= (int)unk1Particles ) /*0x67f877*/
                goto LABEL_8; /*0x67f877*/
            }
          }
        }
      }
    }
  }
  return result; /*0x67f9b8*/

}
}
// 0x74ED60
namespace gamemd {
int SaveGame::LoadVeinholeData()
{

  int v2; // ecx
  int v4; // edi
  int v5; // eax
  int v6; // ebx
  int v7; // ecx
  int v8; // eax
  int v9; // edi
  int v10; // ebp
  int i; // ebx
  int v12; // ecx
  int uniqueId; // [esp+90h] [ebp-14h] BYREF
  int v14; // [esp+94h] [ebp-10h]
  int v15; // [esp+98h] [ebp-Ch]
  int v16; // [esp+9Ch] [ebp-8h] BYREF
  int v17; // [esp+A0h] [ebp-4h] BYREF

  v2 = *(unsigned int *)this->__pad_0; /*0x74ed74*/
  uniqueId = (int)(((char *)&stru_B1D290)); /*0x74ed7a*/
  if ( (*(int (**)(SaveGame *, int *, int, unsigned int))(v2 + 16))( this, (int *)(&uniqueId), 4, 0) < 0 ) /*0x74ed83*/
    return 0; /*0x74ed8e*/
  v4 = ((Object *)this)->ComputeAllocationSize(); /*0x74ed9a*/
  v5 = *(unsigned int *)this->__pad_0; /*0x74ed9c*/
  v15 = v4; /*0x74eda3*/
  if ( (*(int (**)(SaveGame *, int, int, unsigned int))(v5 + 16))( /*0x74edac*/
         this,
         &dword_B1D2F0,
         v4,
         0) < 0 )
    return 0; /*0x74edac*/
  v6 = 0; /*0x74edbc*/
  v14 = 0; /*0x74edc0*/
  if ( uniqueId > 0 ) /*0x74edc4*/
  {
    while ( 1 ) /*0x74edd6*/
    {
      v7 = *(unsigned int *)this->__pad_0; /*0x74edd6*/
      v16 = *((unsigned int *)((char *)&stru_B1D290) + v6); /*0x74ede5*/
      if ( (*(int (**)(SaveGame *, int *, int, unsigned int))(v7 + 16))( this, (int *)(&v16), 4, 0) < 0 /*0x74ee50*/
        || (*(int (**)(SaveGame *, unsigned int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 16))(
             this,
             *((unsigned int *)((char *)&stru_B1D290) + v6),
             264,
             0) < 0
        || (*(int (**)(SaveGame *, unsigned int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 16))(
             this,
             *(unsigned int *)(*((unsigned int *)((char *)&stru_B1D290) + v6) + 196),
             v4,
             0) < 0
        || (*(int (**)(SaveGame *, unsigned int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 16))(
             this,
             *(unsigned int *)(*((unsigned int *)((char *)&stru_B1D290) + v6) + 180),
             8 * *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 220),
             0) < 0 )
      {
        break; /*0x74ee50*/
      }
      v8 = *((unsigned int *)((char *)&stru_B1D290) + v6); /*0x74ee62*/
      v9 = *(unsigned int *)(v8 + 176); /*0x74ee65*/
      v10 = *(unsigned int *)(v8 + 180); /*0x74ee6b*/
      if ( (*(int (**)(SaveGame *, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 16))(this, v9, 4, 0) >= 0 /*0x74ee8a*/
        && (*(int (**)(SaveGame *, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 16))(this, v9 + 4, 4, 0) >= 0 )
      {
        for ( i = 0; i < *(unsigned int *)(v9 + 4); ++i ) /*0x74ee93*/
        {
          v12 = *(unsigned int *)this->__pad_0; /*0x74ee98*/
          v17 = (*(unsigned int *)(*(unsigned int *)(v9 + 8) + 4 * i) - v10) >> 3; /*0x74eeac*/
          if ( (*(int (**)(SaveGame *, int *, int, unsigned int))(v12 + 16))( this, (int *)(&v17), 4, 0) < 0 ) /*0x74eeb5*/
            break; /*0x74eeb5*/
        }
        v6 = v14; /*0x74eebf*/
      }
      v14 = ++v6; /*0x74eeca*/
      if ( v6 >= uniqueId ) /*0x74eece*/
        return 1; /*0x74eece*/
      v4 = v15; /*0x74edcc*/
    }
    return 0; /*0x74edb7*/
  }
  return 1; /*0x74ed85*/

}
}
// 0x751620
namespace gamemd {
int SaveGame::SaveAudioQueueItems()
{

  int v2; // esi
  int i; // edi
  int v4; // esi
  char *v5; // ecx
  char *SampleName; // ebx
  char *v7; // ecx
  char *v8; // eax
  int v9; // eax
  int v11; // [esp+10h] [ebp-14h] BYREF
  unsigned int v12[4]; // [esp+14h] [ebp-10h] BYREF

  v11 = SaveGame::CountLinkedList(  (SaveGame *)&unk_B1D320); /*0x751637*/
  v2 = (*(int (**)(SaveGame *, int *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 16))( this, (int *)(&v11), 4, 0); /*0x751647*/
  if ( v2 >= 0 )
  {
    for ( i = ((AudioQueue *)((AudioQueue *)&unk_B1D320))->GetNext(); i; i = ((AudioQueue *)((AudioQueue *)i))->GetNextAlt() )
    {
      v4 = -1; /*0x751665*/
      v12[0] = -1; /*0x751668*/
      v5 = *(char **)(i + 20); /*0x75166c*/
      if ( v5 )
      {
        SampleName = ((VocClass *)v5)->GetSampleName(); /*0x751678*/
        if ( SampleName )
        {
          v4 = 0; /*0x751683*/
          if ( g_VocPlayState <= 0 )
          {
LABEL_11:
            v4 = -1; /*0x7516bc*/
          }
          else
          {
            while ( 1 )
            {
              v7 = (char *)**((unsigned int **)g_VocAudioConfig + v4); /*0x751692*/
              v8 = (char *)(v7 ? ((VocClass *)v7)->GetSampleName() : g_Str_Invalid_Voc);
              if ( !_strcmpi(SampleName, v8) ) /*0x7516a6*/
                break; /*0x7516a6*/
              if ( ++v4 >= g_VocPlayState ) /*0x7516ba*/
                goto LABEL_11; /*0x7516ba*/
            }
          }
        }
        v12[0] = v4; /*0x7516bf*/
      }
      v12[1] = *(unsigned int *)(i + 32); /*0x7516c8*/
      v9 = *(unsigned int *)this->__pad_0; /*0x7516cf*/
      v12[2] = *(unsigned int *)(i + 36); /*0x7516d2*/
      v12[3] = *(unsigned int *)(i + 40); /*0x7516e1*/
      v2 = (*(int (**)(SaveGame *, unsigned int *, int, unsigned int))(v9 + 16))( this, (unsigned int *)(v12), 16, 0); /*0x7516e8*/
      if ( v2 < 0 ) /*0x7516ec*/
        break; /*0x7516ec*/
    }
  }
  return v2; /*0x751701*/

}
}
// 0x4073B0
namespace gamemd {
int SaveGame::CountLinkedList(void *a1_1)
{

  SaveGame *v1; // edx
  int result; // eax

  v1 = *(SaveGame **)this->__pad_0; /*0x4073b0*/
  for ( result = 0; v1 != this; ++result ) /*0x4073b6*/
    v1 = *(SaveGame **)v1->__pad_0; /*0x4073b8*/
  return result; /*0x4073bf*/

}
} // namespace gamemd

// 0x413850
namespace gamemd {
int SaveGame::SaveIteratedData(int a2)
{

  int v2; // esi
  int v3; // ebp
  char *i; // edi
  int v5; // ecx
  int result; // eax
  int v7; // ebx

  v2 = (int)((char *)(a2)); /*0x413853*/
  v3 = 0; /*0x413858*/
  for ( i = (char *)(&this->__pad_0[4]); ; i += 24 ) /*0x41385a*/
  {
    v5 =(int)(char *)(int)(char *)*(unsigned int *)v2; /*0x413860*/
    a2 = *((unsigned int *)i + 3); /*0x41386c*/
    result = (*(int (**)(int, int *, int, unsigned int))(v5 + 16))( v2, (int *)(&a2), 4, 0); /*0x413870*/
    if ( result < 0 ) /*0x413875*/
      break; /*0x413875*/
    v7 = 0; /*0x41387b*/
    if ( a2 > 0 ) /*0x41387f*/
    {
      do /*0x41388e*/
      {
        result = (*(int (**)(int, int, int, unsigned int))(*(unsigned int *)v2 + 16))(v2, *(unsigned int *)i + 4 * v7, 4, 0); /*0x41388e*/
        if ( result < 0 ) /*0x413893*/
          return result; /*0x413893*/
      }
      while ( ++v7 < a2 ); /*0x41388e*/
    }
    if ( ++v3 >= 400 ) /*0x4138a8*/
      return 0; /*0x4138aa*/
  }
  return result; /*0x4138ac*/

}
} // namespace gamemd

// 0x4C6340
namespace gamemd {
int SaveGame::SaveBlock68(int a2)
{

  return (*(int (**)(int, SaveGame *, int, unsigned int))(*(unsigned int *)&a2->q_40))(a2, this, 68, 0);  /*0x4c634f*/

}
} // namespace gamemd

// 0x513CB0
namespace gamemd {
int SaveGame::WriteObject(int a1, int a2)
{

  int v2; // ebx
  int v3; // eax
  FrameSnapshot v5[3]; // [esp+Ch] [ebp-18h] BYREF

  v2 = StreamClass::ResetPosition((LocomotionClass *)a1, a2); /*0x513cc8*/
  v3 = (*((int (**)(FootClass *))((FootClass *)((unsigned int *)a1))[0]->vtable1 + 33))(((unsigned int *)a1)[0]); /*0x513ccc*/
  ((FrameSnapshot *)(v5))->InitMax(2 * *(unsigned int *)(v3 + 1820)); /*0x513cdf*/
  qmemcpy( (void *)(&a1->HeadToCoord[2]), (const void *)(v5), 0x18u); /*0x513cf2*/
  return v2; /*0x513cf4*/

}
} // namespace gamemd

// 0x67FDF0
namespace gamemd {
HRESULT SaveGame_Start(LPSTREAM pStm, int a2)
{
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = (IStreamVtbl *)((struct IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0); /*0x67fe03*/
  v9 = *(unsigned int *)(a2 + 16); /*0x67fe09*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x67fe0d*/
  if ( result >= 0 ) /*0x67fe12*/
  {
    v6 = 0; /*0x67fe18*/
    if ( v9 <= 0 ) /*0x67fe1c*/
    {
      return 0; /*0x67fe66*/
    }
    else
    {
      while ( 1 ) /*0x67fe1e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x67fe1e*/
        pPStm = 0; /*0x67fe21*/
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x67fe39*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x67fe3d*/
          break; /*0x67fe3d*/
        result = OleSaveToStream( (void *)((void *)(pPStm)), (void *)((void *)(pStm))); /*0x67fe45*/
        if ( result < 0 ) /*0x67fe4d*/
          break; /*0x67fe4d*/
        result = ((gamemd::IPersistStream*)pPStm)->__tail_0->Release(pPStm); /*0x67fe56*/
        if ( result < 0 ) /*0x67fe5b*/
          break; /*0x67fe5b*/
        if ( ++v6 >= v9 ) /*0x67fe64*/
          return 0; /*0x67fe64*/
      }
    }
  }
  return result; /*0x67fe68*/
}
} // namespace gamemd

// 0x67FE70
namespace gamemd {
HRESULT SaveGame_Start_67FE70(LPSTREAM pStm, int a2)
{
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = (IStreamVtbl *)((struct IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0); /*0x67fe83*/
  v9 = *(unsigned int *)(a2 + 16); /*0x67fe89*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x67fe8d*/
  if ( result >= 0 ) /*0x67fe92*/
  {
    v6 = 0; /*0x67fe98*/
    if ( v9 <= 0 ) /*0x67fe9c*/
    {
      return 0; /*0x67fee6*/
    }
    else
    {
      while ( 1 ) /*0x67fe9e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x67fe9e*/
        pPStm = 0; /*0x67fea1*/
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x67feb9*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x67febd*/
          break; /*0x67febd*/
        result = OleSaveToStream( (void *)((void *)(pPStm)), (void *)((void *)(pStm))); /*0x67fec5*/
        if ( result < 0 ) /*0x67fecd*/
          break; /*0x67fecd*/
        result = ((gamemd::IPersistStream*)pPStm)->__tail_0->Release(pPStm); /*0x67fed6*/
        if ( result < 0 ) /*0x67fedb*/
          break; /*0x67fedb*/
        if ( ++v6 >= v9 ) /*0x67fee4*/
          return 0; /*0x67fee4*/
      }
    }
  }
  return result; /*0x67fee8*/
}
} // namespace gamemd

// 0x67FEF0
namespace gamemd {
HRESULT SaveGame_Start_67FEF0(LPSTREAM pStm, int a2)
{
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = (IStreamVtbl *)((struct IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0); /*0x67ff03*/
  v9 = *(unsigned int *)(a2 + 16); /*0x67ff09*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x67ff0d*/
  if ( result >= 0 ) /*0x67ff12*/
  {
    v6 = 0; /*0x67ff18*/
    if ( v9 <= 0 ) /*0x67ff1c*/
    {
      return 0; /*0x67ff66*/
    }
    else
    {
      while ( 1 ) /*0x67ff1e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x67ff1e*/
        pPStm = 0; /*0x67ff21*/
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x67ff39*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x67ff3d*/
          break; /*0x67ff3d*/
        result = OleSaveToStream( (void *)((void *)(pPStm)), (void *)((void *)(pStm))); /*0x67ff45*/
        if ( result < 0 ) /*0x67ff4d*/
          break; /*0x67ff4d*/
        result = ((gamemd::IPersistStream*)pPStm)->__tail_0->Release(pPStm); /*0x67ff56*/
        if ( result < 0 ) /*0x67ff5b*/
          break; /*0x67ff5b*/
        if ( ++v6 >= v9 ) /*0x67ff64*/
          return 0; /*0x67ff64*/
      }
    }
  }
  return result; /*0x67ff68*/
}
} // namespace gamemd

// 0x67FF70
namespace gamemd {
HRESULT SaveGame_Start_67FF70(LPSTREAM pStm, int a2)
{
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = (IStreamVtbl *)((struct IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0); /*0x67ff83*/
  v9 = *(unsigned int *)(a2 + 16); /*0x67ff89*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x67ff8d*/
  if ( result >= 0 ) /*0x67ff92*/
  {
    v6 = 0; /*0x67ff98*/
    if ( v9 <= 0 ) /*0x67ff9c*/
    {
      return 0; /*0x67ffe6*/
    }
    else
    {
      while ( 1 ) /*0x67ff9e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x67ff9e*/
        pPStm = 0; /*0x67ffa1*/
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x67ffb9*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x67ffbd*/
          break; /*0x67ffbd*/
        result = OleSaveToStream( (void *)((void *)(pPStm)), (void *)((void *)(pStm))); /*0x67ffc5*/
        if ( result < 0 ) /*0x67ffcd*/
          break; /*0x67ffcd*/
        result = ((gamemd::IPersistStream*)pPStm)->__tail_0->Release(pPStm); /*0x67ffd6*/
        if ( result < 0 ) /*0x67ffdb*/
          break; /*0x67ffdb*/
        if ( ++v6 >= v9 ) /*0x67ffe4*/
          return 0; /*0x67ffe4*/
      }
    }
  }
  return result; /*0x67ffe8*/
}
} // namespace gamemd

// 0x67FFF0
namespace gamemd {
HRESULT SaveGame_Start_67FFF0(LPSTREAM pStm, int a2)
{
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = (IStreamVtbl *)((struct IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0); /*0x680003*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680009*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68000d*/
  if ( result >= 0 ) /*0x680012*/
  {
    v6 = 0; /*0x680018*/
    if ( v9 <= 0 ) /*0x68001c*/
    {
      return 0; /*0x680066*/
    }
    else
    {
      while ( 1 ) /*0x68001e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x68001e*/
        pPStm = 0; /*0x680021*/
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680039*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68003d*/
          break; /*0x68003d*/
        result = OleSaveToStream( (void *)((void *)(pPStm)), (void *)((void *)(pStm))); /*0x680045*/
        if ( result < 0 ) /*0x68004d*/
          break; /*0x68004d*/
        result = ((gamemd::IPersistStream*)pPStm)->__tail_0->Release(pPStm); /*0x680056*/
        if ( result < 0 ) /*0x68005b*/
          break; /*0x68005b*/
        if ( ++v6 >= v9 ) /*0x680064*/
          return 0; /*0x680064*/
      }
    }
  }
  return result; /*0x680068*/
}
} // namespace gamemd

// 0x680070
namespace gamemd {
HRESULT SaveGame_Start_680070(LPSTREAM pStm, int a2)
{
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = (IStreamVtbl *)((struct IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0); /*0x680083*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680089*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68008d*/
  if ( result >= 0 ) /*0x680092*/
  {
    v6 = 0; /*0x680098*/
    if ( v9 <= 0 ) /*0x68009c*/
    {
      return 0; /*0x6800e6*/
    }
    else
    {
      while ( 1 ) /*0x68009e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x68009e*/
        pPStm = 0; /*0x6800a1*/
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6800b9*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6800bd*/
          break; /*0x6800bd*/
        result = OleSaveToStream( (void *)((void *)(pPStm)), (void *)((void *)(pStm))); /*0x6800c5*/
        if ( result < 0 ) /*0x6800cd*/
          break; /*0x6800cd*/
        result = ((gamemd::IPersistStream*)pPStm)->__tail_0->Release(pPStm); /*0x6800d6*/
        if ( result < 0 ) /*0x6800db*/
          break; /*0x6800db*/
        if ( ++v6 >= v9 ) /*0x6800e4*/
          return 0; /*0x6800e4*/
      }
    }
  }
  return result; /*0x6800e8*/
}
} // namespace gamemd

// 0x6800F0
namespace gamemd {
HRESULT SaveGame_Start_6800F0(LPSTREAM pStm, int a2)
{
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = (IStreamVtbl *)((struct IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0); /*0x680103*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680109*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68010d*/
  if ( result >= 0 ) /*0x680112*/
  {
    v6 = 0; /*0x680118*/
    if ( v9 <= 0 ) /*0x68011c*/
    {
      return 0; /*0x680166*/
    }
    else
    {
      while ( 1 ) /*0x68011e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x68011e*/
        pPStm = 0; /*0x680121*/
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680139*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68013d*/
          break; /*0x68013d*/
        result = OleSaveToStream( (void *)((void *)(pPStm)), (void *)((void *)(pStm))); /*0x680145*/
        if ( result < 0 ) /*0x68014d*/
          break; /*0x68014d*/
        result = ((gamemd::IPersistStream*)pPStm)->__tail_0->Release(pPStm); /*0x680156*/
        if ( result < 0 ) /*0x68015b*/
          break; /*0x68015b*/
        if ( ++v6 >= v9 ) /*0x680164*/
          return 0; /*0x680164*/
      }
    }
  }
  return result; /*0x680168*/
}
} // namespace gamemd

// 0x680170
namespace gamemd {
HRESULT SaveGame_Start_680170(LPSTREAM pStm, int a2)
{
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = (IStreamVtbl *)((struct IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0); /*0x680183*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680189*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68018d*/
  if ( result >= 0 ) /*0x680192*/
  {
    v6 = 0; /*0x680198*/
    if ( v9 <= 0 ) /*0x68019c*/
    {
      return 0; /*0x6801e6*/
    }
    else
    {
      while ( 1 ) /*0x68019e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x68019e*/
        pPStm = 0; /*0x6801a1*/
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6801b9*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6801bd*/
          break; /*0x6801bd*/
        result = OleSaveToStream( (void *)((void *)(pPStm)), (void *)((void *)(pStm))); /*0x6801c5*/
        if ( result < 0 ) /*0x6801cd*/
          break; /*0x6801cd*/
        result = ((gamemd::IPersistStream*)pPStm)->__tail_0->Release(pPStm); /*0x6801d6*/
        if ( result < 0 ) /*0x6801db*/
          break; /*0x6801db*/
        if ( ++v6 >= v9 ) /*0x6801e4*/
          return 0; /*0x6801e4*/
      }
    }
  }
  return result; /*0x6801e8*/
}
} // namespace gamemd

// 0x6801F0
namespace gamemd {
HRESULT SaveGame_Start_6801F0(LPSTREAM pStm, int a2)
{
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = (IStreamVtbl *)((struct IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0); /*0x680203*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680209*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68020d*/
  if ( result >= 0 ) /*0x680212*/
  {
    v6 = 0; /*0x680218*/
    if ( v9 <= 0 ) /*0x68021c*/
    {
      return 0; /*0x680266*/
    }
    else
    {
      while ( 1 ) /*0x68021e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x68021e*/
        pPStm = 0; /*0x680221*/
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680239*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68023d*/
          break; /*0x68023d*/
        result = OleSaveToStream( (void *)((void *)(pPStm)), (void *)((void *)(pStm))); /*0x680245*/
        if ( result < 0 ) /*0x68024d*/
          break; /*0x68024d*/
        result = ((gamemd::IPersistStream*)pPStm)->__tail_0->Release(pPStm); /*0x680256*/
        if ( result < 0 ) /*0x68025b*/
          break; /*0x68025b*/
        if ( ++v6 >= v9 ) /*0x680264*/
          return 0; /*0x680264*/
      }
    }
  }
  return result; /*0x680268*/
}
} // namespace gamemd

// 0x680270
namespace gamemd {
HRESULT SaveGame_Start_680270(LPSTREAM pStm, int a2)
{
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = (IStreamVtbl *)((struct IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0); /*0x680283*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680289*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68028d*/
  if ( result >= 0 ) /*0x680292*/
  {
    v6 = 0; /*0x680298*/
    if ( v9 <= 0 ) /*0x68029c*/
    {
      return 0; /*0x6802e6*/
    }
    else
    {
      while ( 1 ) /*0x68029e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x68029e*/
        pPStm = 0; /*0x6802a1*/
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6802b9*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6802bd*/
          break; /*0x6802bd*/
        result = OleSaveToStream( (void *)((void *)(pPStm)), (void *)((void *)(pStm))); /*0x6802c5*/
        if ( result < 0 ) /*0x6802cd*/
          break; /*0x6802cd*/
        result = ((gamemd::IPersistStream*)pPStm)->__tail_0->Release(pPStm); /*0x6802d6*/
        if ( result < 0 ) /*0x6802db*/
          break; /*0x6802db*/
        if ( ++v6 >= v9 ) /*0x6802e4*/
          return 0; /*0x6802e4*/
      }
    }
  }
  return result; /*0x6802e8*/
}
} // namespace gamemd

// 0x6802F0
namespace gamemd {
HRESULT SaveGame_Start_6802F0(LPSTREAM pStm, int a2)
{
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = (IStreamVtbl *)((struct IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0); /*0x680303*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680309*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68030d*/
  if ( result >= 0 ) /*0x680312*/
  {
    v6 = 0; /*0x680318*/
    if ( v9 <= 0 ) /*0x68031c*/
    {
      return 0; /*0x680366*/
    }
    else
    {
      while ( 1 ) /*0x68031e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x68031e*/
        pPStm = 0; /*0x680321*/
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680339*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68033d*/
          break; /*0x68033d*/
        result = OleSaveToStream( (void *)((void *)(pPStm)), (void *)((void *)(pStm))); /*0x680345*/
        if ( result < 0 ) /*0x68034d*/
          break; /*0x68034d*/
        result = ((gamemd::IPersistStream*)pPStm)->__tail_0->Release(pPStm); /*0x680356*/
        if ( result < 0 ) /*0x68035b*/
          break; /*0x68035b*/
        if ( ++v6 >= v9 ) /*0x680364*/
          return 0; /*0x680364*/
      }
    }
  }
  return result; /*0x680368*/
}
} // namespace gamemd

// 0x680370
namespace gamemd {
HRESULT SaveGame_Start_680370(LPSTREAM pStm, int a2)
{
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = (IStreamVtbl *)((struct IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0); /*0x680383*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680389*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68038d*/
  if ( result >= 0 ) /*0x680392*/
  {
    v6 = 0; /*0x680398*/
    if ( v9 <= 0 ) /*0x68039c*/
    {
      return 0; /*0x6803e6*/
    }
    else
    {
      while ( 1 ) /*0x68039e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x68039e*/
        pPStm = 0; /*0x6803a1*/
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6803b9*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6803bd*/
          break; /*0x6803bd*/
        result = OleSaveToStream( (void *)((void *)(pPStm)), (void *)((void *)(pStm))); /*0x6803c5*/
        if ( result < 0 ) /*0x6803cd*/
          break; /*0x6803cd*/
        result = ((gamemd::IPersistStream*)pPStm)->__tail_0->Release(pPStm); /*0x6803d6*/
        if ( result < 0 ) /*0x6803db*/
          break; /*0x6803db*/
        if ( ++v6 >= v9 ) /*0x6803e4*/
          return 0; /*0x6803e4*/
      }
    }
  }
  return result; /*0x6803e8*/
}
} // namespace gamemd

// 0x6803F0
namespace gamemd {
HRESULT SaveGame_Start_6803F0(LPSTREAM pStm, int a2)
{
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = (IStreamVtbl *)((struct IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0); /*0x680403*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680409*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68040d*/
  if ( result >= 0 ) /*0x680412*/
  {
    v6 = 0; /*0x680418*/
    if ( v9 <= 0 ) /*0x68041c*/
    {
      return 0; /*0x680466*/
    }
    else
    {
      while ( 1 ) /*0x68041e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x68041e*/
        pPStm = 0; /*0x680421*/
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680439*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68043d*/
          break; /*0x68043d*/
        result = OleSaveToStream( (void *)((void *)(pPStm)), (void *)((void *)(pStm))); /*0x680445*/
        if ( result < 0 ) /*0x68044d*/
          break; /*0x68044d*/
        result = ((gamemd::IPersistStream*)pPStm)->__tail_0->Release(pPStm); /*0x680456*/
        if ( result < 0 ) /*0x68045b*/
          break; /*0x68045b*/
        if ( ++v6 >= v9 ) /*0x680464*/
          return 0; /*0x680464*/
      }
    }
  }
  return result; /*0x680468*/
}
} // namespace gamemd

// 0x680470
namespace gamemd {
HRESULT SaveGame_Start_680470(LPSTREAM pStm, int a2)
{
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = (IStreamVtbl *)((struct IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0); /*0x680483*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680489*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68048d*/
  if ( result >= 0 ) /*0x680492*/
  {
    v6 = 0; /*0x680498*/
    if ( v9 <= 0 ) /*0x68049c*/
    {
      return 0; /*0x6804e6*/
    }
    else
    {
      while ( 1 ) /*0x68049e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x68049e*/
        pPStm = 0; /*0x6804a1*/
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6804b9*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6804bd*/
          break; /*0x6804bd*/
        result = OleSaveToStream( (void *)((void *)(pPStm)), (void *)((void *)(pStm))); /*0x6804c5*/
        if ( result < 0 ) /*0x6804cd*/
          break; /*0x6804cd*/
        result = ((gamemd::IPersistStream*)pPStm)->__tail_0->Release(pPStm); /*0x6804d6*/
        if ( result < 0 ) /*0x6804db*/
          break; /*0x6804db*/
        if ( ++v6 >= v9 ) /*0x6804e4*/
          return 0; /*0x6804e4*/
      }
    }
  }
  return result; /*0x6804e8*/
}
} // namespace gamemd

// 0x6804F0
namespace gamemd {
HRESULT SaveGame_Start_6804F0(LPSTREAM pStm, int a2)
{
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = (IStreamVtbl *)((struct IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0); /*0x680503*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680509*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68050d*/
  if ( result >= 0 ) /*0x680512*/
  {
    v6 = 0; /*0x680518*/
    if ( v9 <= 0 ) /*0x68051c*/
    {
      return 0; /*0x680566*/
    }
    else
    {
      while ( 1 ) /*0x68051e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x68051e*/
        pPStm = 0; /*0x680521*/
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680539*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68053d*/
          break; /*0x68053d*/
        result = OleSaveToStream( (void *)((void *)(pPStm)), (void *)((void *)(pStm))); /*0x680545*/
        if ( result < 0 ) /*0x68054d*/
          break; /*0x68054d*/
        result = ((gamemd::IPersistStream*)pPStm)->__tail_0->Release(pPStm); /*0x680556*/
        if ( result < 0 ) /*0x68055b*/
          break; /*0x68055b*/
        if ( ++v6 >= v9 ) /*0x680564*/
          return 0; /*0x680564*/
      }
    }
  }
  return result; /*0x680568*/
}
} // namespace gamemd

// 0x680570
namespace gamemd {
HRESULT SaveGame_Start_680570(LPSTREAM pStm, int a2)
{
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = (IStreamVtbl *)((struct IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0); /*0x680583*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680589*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68058d*/
  if ( result >= 0 ) /*0x680592*/
  {
    v6 = 0; /*0x680598*/
    if ( v9 <= 0 ) /*0x68059c*/
    {
      return 0; /*0x6805e6*/
    }
    else
    {
      while ( 1 ) /*0x68059e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x68059e*/
        pPStm = 0; /*0x6805a1*/
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6805b9*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6805bd*/
          break; /*0x6805bd*/
        result = OleSaveToStream( (void *)((void *)(pPStm)), (void *)((void *)(pStm))); /*0x6805c5*/
        if ( result < 0 ) /*0x6805cd*/
          break; /*0x6805cd*/
        result = ((gamemd::IPersistStream*)pPStm)->__tail_0->Release(pPStm); /*0x6805d6*/
        if ( result < 0 ) /*0x6805db*/
          break; /*0x6805db*/
        if ( ++v6 >= v9 ) /*0x6805e4*/
          return 0; /*0x6805e4*/
      }
    }
  }
  return result; /*0x6805e8*/
}
} // namespace gamemd

// 0x6805F0
namespace gamemd {
HRESULT SaveGame_Start_6805F0(LPSTREAM pStm, int a2)
{
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = (IStreamVtbl *)((struct IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0); /*0x680603*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680609*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68060d*/
  if ( result >= 0 ) /*0x680612*/
  {
    v6 = 0; /*0x680618*/
    if ( v9 <= 0 ) /*0x68061c*/
    {
      return 0; /*0x680666*/
    }
    else
    {
      while ( 1 ) /*0x68061e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x68061e*/
        pPStm = 0; /*0x680621*/
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680639*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68063d*/
          break; /*0x68063d*/
        result = OleSaveToStream( (void *)((void *)(pPStm)), (void *)((void *)(pStm))); /*0x680645*/
        if ( result < 0 ) /*0x68064d*/
          break; /*0x68064d*/
        result = ((gamemd::IPersistStream*)pPStm)->__tail_0->Release(pPStm); /*0x680656*/
        if ( result < 0 ) /*0x68065b*/
          break; /*0x68065b*/
        if ( ++v6 >= v9 ) /*0x680664*/
          return 0; /*0x680664*/
      }
    }
  }
  return result; /*0x680668*/
}
} // namespace gamemd

// 0x680670
namespace gamemd {
HRESULT SaveGame_Start_680670(LPSTREAM pStm, int a2)
{
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = (IStreamVtbl *)((struct IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0); /*0x680683*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680689*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68068d*/
  if ( result >= 0 ) /*0x680692*/
  {
    v6 = 0; /*0x680698*/
    if ( v9 <= 0 ) /*0x68069c*/
    {
      return 0; /*0x6806e6*/
    }
    else
    {
      while ( 1 ) /*0x68069e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x68069e*/
        pPStm = 0; /*0x6806a1*/
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6806b9*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6806bd*/
          break; /*0x6806bd*/
        result = OleSaveToStream( (void *)((void *)(pPStm)), (void *)((void *)(pStm))); /*0x6806c5*/
        if ( result < 0 ) /*0x6806cd*/
          break; /*0x6806cd*/
        result = pPStm->Release(); /*0x6806d6*/
        if ( result < 0 ) /*0x6806db*/
          break; /*0x6806db*/
        if ( ++v6 >= v9 ) /*0x6806e4*/
          return 0; /*0x6806e4*/
      }
    }
  }
  return result; /*0x6806e8*/
}
} // namespace gamemd

// 0x6806F0
namespace gamemd {
HRESULT SaveGame_Start_6806F0(LPSTREAM pStm, int a2)
{
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = (IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0; /*0x680703*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680709*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68070d*/
  if ( result >= 0 ) /*0x680712*/
  {
    v6 = 0; /*0x680718*/
    if ( v9 <= 0 ) /*0x68071c*/
    {
      return 0; /*0x680766*/
    }
    else
    {
      while ( 1 ) /*0x68071e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x68071e*/
        pPStm = 0; /*0x680721*/
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680739*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68073d*/
          break; /*0x68073d*/
        result = OleSaveToStream( (void *)((void *)(pPStm)), (void *)((void *)(pStm))); /*0x680745*/
        if ( result < 0 ) /*0x68074d*/
          break; /*0x68074d*/
        result = pPStm->Release(); /*0x680756*/
        if ( result < 0 ) /*0x68075b*/
          break; /*0x68075b*/
        if ( ++v6 >= v9 ) /*0x680764*/
          return 0; /*0x680764*/
      }
    }
  }
  return result; /*0x680768*/
}
} // namespace gamemd

// 0x680770
namespace gamemd {
HRESULT SaveGame_Start_680770(LPSTREAM pStm, int a2)
{
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = (IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0; /*0x680783*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680789*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68078d*/
  if ( result >= 0 ) /*0x680792*/
  {
    v6 = 0; /*0x680798*/
    if ( v9 <= 0 ) /*0x68079c*/
    {
      return 0; /*0x6807e6*/
    }
    else
    {
      while ( 1 ) /*0x68079e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x68079e*/
        pPStm = 0; /*0x6807a1*/
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6807b9*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6807bd*/
          break; /*0x6807bd*/
        result = OleSaveToStream( (void *)((void *)(pPStm)), (void *)((void *)(pStm))); /*0x6807c5*/
        if ( result < 0 ) /*0x6807cd*/
          break; /*0x6807cd*/
        result = pPStm->Release(); /*0x6807d6*/
        if ( result < 0 ) /*0x6807db*/
          break; /*0x6807db*/
        if ( ++v6 >= v9 ) /*0x6807e4*/
          return 0; /*0x6807e4*/
      }
    }
  }
  return result; /*0x6807e8*/
}
} // namespace gamemd

// 0x6807F0
namespace gamemd {
HRESULT SaveGame_Start_6807F0(LPSTREAM pStm, int a2)
{
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = (IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0; /*0x680803*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680809*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68080d*/
  if ( result >= 0 ) /*0x680812*/
  {
    v6 = 0; /*0x680818*/
    if ( v9 <= 0 ) /*0x68081c*/
    {
      return 0; /*0x680866*/
    }
    else
    {
      while ( 1 ) /*0x68081e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x68081e*/
        pPStm = 0; /*0x680821*/
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680839*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68083d*/
          break; /*0x68083d*/
        result = OleSaveToStream( (void *)((void *)(pPStm)), (void *)((void *)(pStm))); /*0x680845*/
        if ( result < 0 ) /*0x68084d*/
          break; /*0x68084d*/
        result = pPStm->Release(); /*0x680856*/
        if ( result < 0 ) /*0x68085b*/
          break; /*0x68085b*/
        if ( ++v6 >= v9 ) /*0x680864*/
          return 0; /*0x680864*/
      }
    }
  }
  return result; /*0x680868*/
}
} // namespace gamemd

// 0x680870
namespace gamemd {
HRESULT SaveGame_Start_680870(LPSTREAM pStm, int a2)
{
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = (IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0; /*0x680883*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680889*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68088d*/
  if ( result >= 0 ) /*0x680892*/
  {
    v6 = 0; /*0x680898*/
    if ( v9 <= 0 ) /*0x68089c*/
    {
      return 0; /*0x6808e6*/
    }
    else
    {
      while ( 1 ) /*0x68089e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x68089e*/
        pPStm = 0; /*0x6808a1*/
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6808b9*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6808bd*/
          break; /*0x6808bd*/
        result = OleSaveToStream( (void *)((void *)(pPStm)), (void *)((void *)(pStm))); /*0x6808c5*/
        if ( result < 0 ) /*0x6808cd*/
          break; /*0x6808cd*/
        result = pPStm->Release(); /*0x6808d6*/
        if ( result < 0 ) /*0x6808db*/
          break; /*0x6808db*/
        if ( ++v6 >= v9 ) /*0x6808e4*/
          return 0; /*0x6808e4*/
      }
    }
  }
  return result; /*0x6808e8*/
}
} // namespace gamemd

// 0x6808F0
namespace gamemd {
HRESULT SaveGame_Start_6808F0(LPSTREAM pStm, int a2)
{
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = (IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0; /*0x680903*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680909*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68090d*/
  if ( result >= 0 ) /*0x680912*/
  {
    v6 = 0; /*0x680918*/
    if ( v9 <= 0 ) /*0x68091c*/
    {
      return 0; /*0x680966*/
    }
    else
    {
      while ( 1 ) /*0x68091e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x68091e*/
        pPStm = 0; /*0x680921*/
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680939*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68093d*/
          break; /*0x68093d*/
        result = OleSaveToStream( (void *)((void *)(pPStm)), (void *)((void *)(pStm))); /*0x680945*/
        if ( result < 0 ) /*0x68094d*/
          break; /*0x68094d*/
        result = pPStm->Release(); /*0x680956*/
        if ( result < 0 ) /*0x68095b*/
          break; /*0x68095b*/
        if ( ++v6 >= v9 ) /*0x680964*/
          return 0; /*0x680964*/
      }
    }
  }
  return result; /*0x680968*/
}
} // namespace gamemd

// 0x680970
namespace gamemd {
HRESULT SaveGame_Start_680970(LPSTREAM pStm, int a2)
{
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = (IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0; /*0x680983*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680989*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68098d*/
  if ( result >= 0 ) /*0x680992*/
  {
    v6 = 0; /*0x680998*/
    if ( v9 <= 0 ) /*0x68099c*/
    {
      return 0; /*0x6809e6*/
    }
    else
    {
      while ( 1 ) /*0x68099e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x68099e*/
        pPStm = 0; /*0x6809a1*/
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x6809b9*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x6809bd*/
          break; /*0x6809bd*/
        result = OleSaveToStream( (void *)((void *)(pPStm)), (void *)((void *)(pStm))); /*0x6809c5*/
        if ( result < 0 ) /*0x6809cd*/
          break; /*0x6809cd*/
        result = pPStm->Release(); /*0x6809d6*/
        if ( result < 0 ) /*0x6809db*/
          break; /*0x6809db*/
        if ( ++v6 >= v9 ) /*0x6809e4*/
          return 0; /*0x6809e4*/
      }
    }
  }
  return result; /*0x6809e8*/
}
} // namespace gamemd

// 0x6809F0
namespace gamemd {
HRESULT SaveGame_Start_6809F0(LPSTREAM pStm, int a2)
{
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = (IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0; /*0x680a03*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680a09*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x680a0d*/
  if ( result >= 0 ) /*0x680a12*/
  {
    v6 = 0; /*0x680a18*/
    if ( v9 <= 0 ) /*0x680a1c*/
    {
      return 0; /*0x680a66*/
    }
    else
    {
      while ( 1 ) /*0x680a1e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x680a1e*/
        pPStm = 0; /*0x680a21*/
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680a39*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x680a3d*/
          break; /*0x680a3d*/
        result = OleSaveToStream( (void *)((void *)(pPStm)), (void *)((void *)(pStm))); /*0x680a45*/
        if ( result < 0 ) /*0x680a4d*/
          break; /*0x680a4d*/
        result = pPStm->Release(); /*0x680a56*/
        if ( result < 0 ) /*0x680a5b*/
          break; /*0x680a5b*/
        if ( ++v6 >= v9 ) /*0x680a64*/
          return 0; /*0x680a64*/
      }
    }
  }
  return result; /*0x680a68*/
}
} // namespace gamemd

// 0x680A70
namespace gamemd {
HRESULT SaveGame_Start_680A70(LPSTREAM pStm, int a2)
{
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = (IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0; /*0x680a83*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680a89*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x680a8d*/
  if ( result >= 0 ) /*0x680a92*/
  {
    v6 = 0; /*0x680a98*/
    if ( v9 <= 0 ) /*0x680a9c*/
    {
      return 0; /*0x680ae6*/
    }
    else
    {
      while ( 1 ) /*0x680a9e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x680a9e*/
        pPStm = 0; /*0x680aa1*/
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680ab9*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x680abd*/
          break; /*0x680abd*/
        result = OleSaveToStream( (void *)((void *)(pPStm)), (void *)((void *)(pStm))); /*0x680ac5*/
        if ( result < 0 ) /*0x680acd*/
          break; /*0x680acd*/
        result = pPStm->Release(); /*0x680ad6*/
        if ( result < 0 ) /*0x680adb*/
          break; /*0x680adb*/
        if ( ++v6 >= v9 ) /*0x680ae4*/
          return 0; /*0x680ae4*/
      }
    }
  }
  return result; /*0x680ae8*/
}
} // namespace gamemd

// 0x680AF0
namespace gamemd {
HRESULT SaveGame_Start_680AF0(LPSTREAM pStm, int a2)
{
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = (IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0; /*0x680b03*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680b09*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x680b0d*/
  if ( result >= 0 ) /*0x680b12*/
  {
    v6 = 0; /*0x680b18*/
    if ( v9 <= 0 ) /*0x680b1c*/
    {
      return 0; /*0x680b66*/
    }
    else
    {
      while ( 1 ) /*0x680b1e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x680b1e*/
        pPStm = 0; /*0x680b21*/
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680b39*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x680b3d*/
          break; /*0x680b3d*/
        result = OleSaveToStream( (void *)((void *)(pPStm)), (void *)((void *)(pStm))); /*0x680b45*/
        if ( result < 0 ) /*0x680b4d*/
          break; /*0x680b4d*/
        result = pPStm->Release(); /*0x680b56*/
        if ( result < 0 ) /*0x680b5b*/
          break; /*0x680b5b*/
        if ( ++v6 >= v9 ) /*0x680b64*/
          return 0; /*0x680b64*/
      }
    }
  }
  return result; /*0x680b68*/
}
} // namespace gamemd

// 0x680B70
namespace gamemd {
HRESULT SaveGame_Start_680B70(LPSTREAM pStm, int a2)
{
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = (IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0; /*0x680b83*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680b89*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x680b8d*/
  if ( result >= 0 ) /*0x680b92*/
  {
    v6 = 0; /*0x680b98*/
    if ( v9 <= 0 ) /*0x680b9c*/
    {
      return 0; /*0x680be6*/
    }
    else
    {
      while ( 1 ) /*0x680b9e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x680b9e*/
        pPStm = 0; /*0x680ba1*/
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680bb9*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x680bbd*/
          break; /*0x680bbd*/
        result = OleSaveToStream( (void *)((void *)(pPStm)), (void *)((void *)(pStm))); /*0x680bc5*/
        if ( result < 0 ) /*0x680bcd*/
          break; /*0x680bcd*/
        result = pPStm->Release(); /*0x680bd6*/
        if ( result < 0 ) /*0x680bdb*/
          break; /*0x680bdb*/
        if ( ++v6 >= v9 ) /*0x680be4*/
          return 0; /*0x680be4*/
      }
    }
  }
  return result; /*0x680be8*/
}
} // namespace gamemd

// 0x680BF0
namespace gamemd {
HRESULT SaveGame_Start_680BF0(LPSTREAM pStm, int a2)
{
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = (IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0; /*0x680c03*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680c09*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x680c0d*/
  if ( result >= 0 ) /*0x680c12*/
  {
    v6 = 0; /*0x680c18*/
    if ( v9 <= 0 ) /*0x680c1c*/
    {
      return 0; /*0x680c66*/
    }
    else
    {
      while ( 1 ) /*0x680c1e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x680c1e*/
        pPStm = 0; /*0x680c21*/
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680c39*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x680c3d*/
          break; /*0x680c3d*/
        result = OleSaveToStream( (void *)((void *)(pPStm)), (void *)((void *)(pStm))); /*0x680c45*/
        if ( result < 0 ) /*0x680c4d*/
          break; /*0x680c4d*/
        result = pPStm->Release(); /*0x680c56*/
        if ( result < 0 ) /*0x680c5b*/
          break; /*0x680c5b*/
        if ( ++v6 >= v9 ) /*0x680c64*/
          return 0; /*0x680c64*/
      }
    }
  }
  return result; /*0x680c68*/
}
} // namespace gamemd

// 0x680C70
namespace gamemd {
HRESULT SaveGame_Start_680C70(LPSTREAM pStm, int a2)
{
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = (IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0; /*0x680c83*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680c89*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x680c8d*/
  if ( result >= 0 ) /*0x680c92*/
  {
    v6 = 0; /*0x680c98*/
    if ( v9 <= 0 ) /*0x680c9c*/
    {
      return 0; /*0x680ce6*/
    }
    else
    {
      while ( 1 ) /*0x680c9e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x680c9e*/
        pPStm = 0; /*0x680ca1*/
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680cb9*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x680cbd*/
          break; /*0x680cbd*/
        result = OleSaveToStream( (void *)((void *)(pPStm)), (void *)((void *)(pStm))); /*0x680cc5*/
        if ( result < 0 ) /*0x680ccd*/
          break; /*0x680ccd*/
        result = pPStm->Release(); /*0x680cd6*/
        if ( result < 0 ) /*0x680cdb*/
          break; /*0x680cdb*/
        if ( ++v6 >= v9 ) /*0x680ce4*/
          return 0; /*0x680ce4*/
      }
    }
  }
  return result; /*0x680ce8*/
}
} // namespace gamemd

// 0x680CF0
namespace gamemd {
HRESULT SaveGame_Start_680CF0(LPSTREAM pStm, int a2)
{
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = (IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0; /*0x680d03*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680d09*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x680d0d*/
  if ( result >= 0 ) /*0x680d12*/
  {
    v6 = 0; /*0x680d18*/
    if ( v9 <= 0 ) /*0x680d1c*/
    {
      return 0; /*0x680d66*/
    }
    else
    {
      while ( 1 ) /*0x680d1e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x680d1e*/
        pPStm = 0; /*0x680d21*/
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680d39*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x680d3d*/
          break; /*0x680d3d*/
        result = OleSaveToStream( (void *)((void *)(pPStm)), (void *)((void *)(pStm))); /*0x680d45*/
        if ( result < 0 ) /*0x680d4d*/
          break; /*0x680d4d*/
        result = pPStm->Release(); /*0x680d56*/
        if ( result < 0 ) /*0x680d5b*/
          break; /*0x680d5b*/
        if ( ++v6 >= v9 ) /*0x680d64*/
          return 0; /*0x680d64*/
      }
    }
  }
  return result; /*0x680d68*/
}
} // namespace gamemd

// 0x680D70
namespace gamemd {
HRESULT SaveGame_Start_680D70(LPSTREAM pStm, int a2)
{
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = (IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0; /*0x680d83*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680d89*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x680d8d*/
  if ( result >= 0 ) /*0x680d92*/
  {
    v6 = 0; /*0x680d98*/
    if ( v9 <= 0 ) /*0x680d9c*/
    {
      return 0; /*0x680de6*/
    }
    else
    {
      while ( 1 ) /*0x680d9e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x680d9e*/
        pPStm = 0; /*0x680da1*/
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680db9*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x680dbd*/
          break; /*0x680dbd*/
        result = OleSaveToStream( (void *)((void *)(pPStm)), (void *)((void *)(pStm))); /*0x680dc5*/
        if ( result < 0 ) /*0x680dcd*/
          break; /*0x680dcd*/
        result = pPStm->Release(); /*0x680dd6*/
        if ( result < 0 ) /*0x680ddb*/
          break; /*0x680ddb*/
        if ( ++v6 >= v9 ) /*0x680de4*/
          return 0; /*0x680de4*/
      }
    }
  }
  return result; /*0x680de8*/
}
} // namespace gamemd

// 0x680DF0
namespace gamemd {
HRESULT SaveGame_Start_680DF0(LPSTREAM pStm, int a2)
{
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = (IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0; /*0x680e03*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680e09*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x680e0d*/
  if ( result >= 0 ) /*0x680e12*/
  {
    v6 = 0; /*0x680e18*/
    if ( v9 <= 0 ) /*0x680e1c*/
    {
      return 0; /*0x680e66*/
    }
    else
    {
      while ( 1 ) /*0x680e1e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x680e1e*/
        pPStm = 0; /*0x680e21*/
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680e39*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x680e3d*/
          break; /*0x680e3d*/
        result = OleSaveToStream( (void *)((void *)(pPStm)), (void *)((void *)(pStm))); /*0x680e45*/
        if ( result < 0 ) /*0x680e4d*/
          break; /*0x680e4d*/
        result = pPStm->Release(); /*0x680e56*/
        if ( result < 0 ) /*0x680e5b*/
          break; /*0x680e5b*/
        if ( ++v6 >= v9 ) /*0x680e64*/
          return 0; /*0x680e64*/
      }
    }
  }
  return result; /*0x680e68*/
}
} // namespace gamemd

// 0x680E70
namespace gamemd {
HRESULT SaveGame_Start_680E70(LPSTREAM pStm, int a2)
{
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = (IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0; /*0x680e83*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680e89*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x680e8d*/
  if ( result >= 0 ) /*0x680e92*/
  {
    v6 = 0; /*0x680e98*/
    if ( v9 <= 0 ) /*0x680e9c*/
    {
      return 0; /*0x680ee6*/
    }
    else
    {
      while ( 1 ) /*0x680e9e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x680e9e*/
        pPStm = 0; /*0x680ea1*/
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680eb9*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x680ebd*/
          break; /*0x680ebd*/
        result = OleSaveToStream( (void *)((void *)(pPStm)), (void *)((void *)(pStm))); /*0x680ec5*/
        if ( result < 0 ) /*0x680ecd*/
          break; /*0x680ecd*/
        result = pPStm->Release(); /*0x680ed6*/
        if ( result < 0 ) /*0x680edb*/
          break; /*0x680edb*/
        if ( ++v6 >= v9 ) /*0x680ee4*/
          return 0; /*0x680ee4*/
      }
    }
  }
  return result; /*0x680ee8*/
}
} // namespace gamemd

// 0x680EF0
namespace gamemd {
HRESULT SaveGame_Start_680EF0(LPSTREAM pStm, int a2)
{
  IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = (IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0; /*0x680f03*/
  v9 = *(unsigned int *)(a2 + 16); /*0x680f09*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x680f0d*/
  if ( result >= 0 ) /*0x680f12*/
  {
    v6 = 0; /*0x680f18*/
    if ( v9 <= 0 ) /*0x680f1c*/
    {
      return 0; /*0x680f66*/
    }
    else
    {
      while ( 1 ) /*0x680f1e*/
      {
        v7 = *(unsigned int *)(a2 + 4); /*0x680f1e*/
        pPStm = 0; /*0x680f21*/
        result = (***(int (****)(unsigned int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680f39*/
                   *(unsigned int *)(v7 + 4 * v6),
                   (void *)&IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x680f3d*/
          break; /*0x680f3d*/
        result = OleSaveToStream( (void *)((void *)(pPStm)), (void *)((void *)(pStm))); /*0x680f45*/
        if ( result < 0 ) /*0x680f4d*/
          break; /*0x680f4d*/
        result = pPStm->Release(); /*0x680f56*/
        if ( result < 0 ) /*0x680f5b*/
          break; /*0x680f5b*/
        if ( ++v6 >= v9 ) /*0x680f64*/
          return 0; /*0x680f64*/
      }
    }
  }
  return result; /*0x680f68*/
}
} // namespace gamemd

// 0x69B560
namespace gamemd {
bool SaveGame::SaveAudioData(int a2)
{

  int v2; // esi
  int v4; // eax
  bool result; // al
  int v6; // [esp-Ch] [ebp-18h]

  v2 = a2; /*0x69b561*/
  result = 0; /*0x69b59a*/
  if ( a2 ) /*0x69b56a*/
  {
    v4 = *(unsigned int *)a2; /*0x69b56c*/
    v6 = a2; /*0x69b577*/
    a2 = 300; /*0x69b578*/
    if ( (*(int (**)(int, int *, int, unsigned int))(v4 + 16))( v6, (int *)(&a2), 4, 0) >= 0 /*0x69b597*/
      && (*(int (**)(int, SaveGame *, int, unsigned int))(*(unsigned int *)v2 + 16))(v2, this, a2, 0) >= 0 )
    {
      return 1; /*0x69b56a*/
    }
  }
  return result; /*0x69b599*/

}
} // namespace gamemd

// 0x721010
namespace gamemd {
int SaveGame::VtableDispatch(int a2)
{

  int result; // eax

  result = (*(int (**)(int, char *, int, unsigned int))(*(unsigned int *)&a2->q_40))(a2, (char *)&this->__pad_0[4], 4, 0); /*0x721023*/
  if ( result >= 0 ) /*0x721028*/
    return (*(int (**)(int, char *, int, unsigned int))(*(unsigned int *)&a2->q_40))(a2, (char *)&this->__pad_0[8], 4, 0); /*0x721035*/
  return result; /*0x721038*/

}
} // namespace gamemd

// 0x7533B0
namespace gamemd {
int SaveGame::WriteMagicHeader()
{

  int v2; // eax
  int result; // eax
  int v4; // edx
  int v5; // [esp+10h] [ebp-4h] BYREF

  v2 = *(unsigned int *)this->__pad_0; /*0x7533ba*/
  v5 = 1450145875; /*0x7533c0*/
  result = (*(int (**)(SaveGame *, int *, int, unsigned int))(v2 + 16))( this, (int *)(&v5), 4, 0); /*0x7533c8*/
  if ( result >= 0 ) /*0x7533cd*/
  {
    v4 = *(unsigned int *)this->__pad_0; /*0x7533cf*/
    v5 = 1450145861; /*0x7533db*/
    return (*(int (**)(SaveGame *, int *, int, unsigned int))(v4 + 16))( this, (int *)(&v5), 4, 0); /*0x7533e3*/
  }
  return result; /*0x7533e6*/

}
} // namespace gamemd
