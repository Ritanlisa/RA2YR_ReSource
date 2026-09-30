// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/TimerClass_e4.hpp"
#include "e4/classes/VoxelAnimType_e4.hpp"
#include "e4/classes/WalkLocomotion_e4.hpp"
#include "e4/classes/BulletTypeClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x465450
namespace gamemd {
BuildingTypeClass * * BulletTypeClass::ReadArmor()
{

  int v0; // edx
  int v1; // edi
  int v2; // ecx
  unsigned int *v3; // esi
  int result; // eax
  int i; // edi
  int v6; // esi
  int v7; // eax
  char Destination[60]; // [esp+Ch] [ebp-3Ch] BYREF

  v0 = MEMORY[0x87F7E8][528676]; /*0x465450*/
  v1 = 0; /*0x46545e*/
  if ( MEMORY[0x87F7E8][528676] > 0 ) /*0x465462*/
  {
    v2 = MEMORY[0x87F7E8][528673]; /*0x465464*/
    do /*0x46547d*/
    {
      if ( v1 <= *(char *)(*(unsigned int *)v2 + 5895) ) /*0x465475*/
        v1 = *(char *)(*(unsigned int *)v2 + 5895); /*0x465477*/
      v2 += 4; /*0x465479*/
      --v0; /*0x46547c*/
    }
    while ( v0 ); /*0x46547d*/
    if ( v1 ) /*0x465481*/
    {
      if ( MEMORY[0x87F7E8][31094] ) /*0x46548b*/
        (**(void (***)(unsigned int, int))MEMORY[0x87F7E8][31094])(MEMORY[0x87F7E8][31094], 1); /*0x465491*/
      v3 = (unsigned int *)__2_YAPAXI_Z(32); /*0x46549a*/
      if ( v3 ) /*0x4654a1*/
      {
        v3[3] = 0; /*0x4654a6*/
        v3[1] = v1 + 16; /*0x4654ab*/
        v3[2] = v1 + 16; /*0x4654b6*/
        *v3 = &XSurface_Vtable; /*0x4654b9*/
        v3[4] = 1; /*0x4654bf*/
        Buffer::Init(v3 + 5, 0, (v1 + 16) * (v1 + 16)); /*0x4654c6*/
        *v3 = &BSurface_Vtable; /*0x4654cb*/
        MEMORY[0x87F7E8][31094] = v3; /*0x4654d1*/
      }
      else
      {
        MEMORY[0x87F7E8][31094] = 0; /*0x4654d9*/
      }
    }
  }
  result = MEMORY[0x87F7E8][528676]; /*0x4654df*/
  for ( i = 0; i < MEMORY[0x87F7E8][528676]; ++i ) /*0x4654e8*/
  {
    v6 = *(unsigned int *)(MEMORY[0x87F7E8][528673] + 4 * i); /*0x4654f7*/
    Destination[0] = 0; /*0x465500*/
    INIClass::GetString( /*0x46550e*/
      (unsigned __int8 ***)MEMORY[0x87F7E8][7704],
      (unsigned __int8 *)(v6 + 36),
      (unsigned __int8 *)aTotile,
      0,
      Destination,
      60);
    v7 = Entity_Read(Destination); /*0x465517*/
    if ( v7 >= 0 && v7 < MEMORY[0x87F7E8][539988] ) /*0x465526*/
      *(unsigned int *)(v6 + 3672) = *(unsigned int *)(MEMORY[0x87F7E8][539985] + 4 * v7); /*0x465531*/
    result = MEMORY[0x87F7E8][528676]; /*0x465537*/
  }
  return result; /*0x465541*/

}
} // namespace gamemd
// 0x465CC0
namespace gamemd {
BuildingTypeClass * * BulletTypeClass::ReadTrailerAnim()
{

  int result; // eax
  int i; // edi
  int v2; // esi
  int v3; // eax
  char Destination[60]; // [esp+4h] [ebp-3Ch] BYREF

  result = g_TriggerClassCount; /*0x465cc0*/
  for ( i = 0; i < g_TriggerClassCount; ++i ) /*0x465ccd*/
  {
    v2 = *((unsigned int *)g_TriggerTypeCount + i); /*0x465cdc*/
    Destination[0] = 0; /*0x465cef*/
    INIClass::GetString( /*0x465cf5*/
      (unsigned __int8 ***)MEMORY[0x887048],
      (unsigned __int8 *)(v2 + 36),
      (unsigned __int8 *)aTotile,
      0,
      Destination,
      60);
    v3 = Entity_Read(Destination); /*0x465cfe*/
    if ( v3 >= 0 && v3 < MEMORY[0xA8ED38] ) /*0x465d0d*/
      *(unsigned int *)(v2 + 3672) = *((unsigned int *)MEMORY[0xA8ED2C] + v3); /*0x465d18*/
    result = g_TriggerClassCount; /*0x465d1e*/
  }
  return result; /*0x465d29*/

}
} // namespace gamemd
// 0x46BBC0
namespace gamemd {
unsigned char * BulletTypeClass::Construct(ObjectClass * aP1)
{

  BulletTypeClass *v3; // eax
  int v4; // eax

  ObjectTypeClass::ConstructFull((int)this, (AbstractClass *)aP1); /*0x46bbc9*/
  *((unsigned char *)this + 660) = 0; /*0x46bbd5*/
  *((unsigned char *)this + 661) = 0; /*0x46bbdb*/
  *((unsigned char *)this + 662) = 0; /*0x46bbe1*/
  *((unsigned char *)this + 663) = 0; /*0x46bbe7*/
  *((unsigned char *)this + 664) = 0; /*0x46bbed*/
  *((unsigned char *)this + 665) = 0; /*0x46bbf3*/
  *((unsigned char *)this + 666) = 1; /*0x46bbf9*/
  *((unsigned char *)this + 667) = 0; /*0x46bc00*/
  *((unsigned char *)this + 668) = 0; /*0x46bc06*/
  *((unsigned char *)this + 669) = 0; /*0x46bc0c*/
  *((unsigned char *)this + 670) = 0; /*0x46bc12*/
  *((unsigned char *)this + 671) = 0; /*0x46bc18*/
  *((unsigned char *)this + 672) = 0; /*0x46bc1e*/
  *((unsigned char *)this + 673) = 1; /*0x46bc24*/
  *((unsigned char *)this + 674) = 0; /*0x46bc2b*/
  *((unsigned char *)this + 675) = 0; /*0x46bc31*/
  *((unsigned char *)this + 676) = 0; /*0x46bc37*/
  *((unsigned char *)this + 677) = 1; /*0x46bc3d*/
  *((unsigned int *)this + 180) = 3; /*0x46bc44*/
  *((unsigned int *)this + 185) = 3; /*0x46bc4a*/
  *((unsigned char *)this + 678) = 0; /*0x46bc50*/
  *((unsigned char *)this + 679) = 0; /*0x46bc59*/
  *((unsigned char *)this + 680) = 0; /*0x46bc5f*/
  *((unsigned int *)this + 178) = 0; /*0x46bc65*/
  *((unsigned char *)this + 681) = 0; /*0x46bc6c*/
  *((unsigned int *)this + 171) = 1; /*0x46bc72*/
  *((unsigned int *)this + 172) = 0; /*0x46bc7c*/
  *((unsigned int *)this + 173) = 0; /*0x46bc82*/
  *((unsigned int *)this + 174) = 0; /*0x46bc88*/
  *((unsigned int *)this + 175) = 0; /*0x46bc8e*/
  *((unsigned char *)this + 704) = 0; /*0x46bc94*/
  *((unsigned int *)this + 179) = 1072168960; /*0x46bc9a*/
  *((unsigned int *)this + 181) = 0; /*0x46bca4*/
  *((unsigned int *)this + 182) = 0; /*0x46bcaa*/
  *((unsigned int *)this + 183) = 0; /*0x46bcb0*/
  *((unsigned int *)this + 184) = 0; /*0x46bcb6*/
  *((unsigned int *)this + 186) = 0; /*0x46bcbc*/
  *((unsigned char *)this + 748) = 0; /*0x46bcc2*/
  *((unsigned int *)this + 188) = 0; /*0x46bcc8*/
  *((unsigned char *)this + 756) = 0; /*0x46bcce*/
  *((unsigned char *)this + 757) = 0; /*0x46bcd4*/
  *((unsigned char *)this + 758) = 0; /*0x46bcda*/
  *((unsigned char *)this + 759) = 0; /*0x46bce0*/
  *(unsigned int *)this = &BulletTypeClass::`vftable'; /*0x46bce6*/
  *((unsigned int *)this + 1) = &BulletTypeClass::`vftable'; /*0x46bcec*/
  *((unsigned int *)this + 2) = &BulletTypeClass::`vftable'; /*0x46bcf2*/
  *((unsigned int *)this + 3) = &vt_BulletTypeClass; /*0x46bcf9*/
  AbstractClass::GenerateUniqueID((int)((unsigned char *)this + 4)); /*0x46bd00*/
  *((unsigned char *)this + 564) = 1; /*0x46bd05*/
  *((unsigned char *)this + 559) = 1; /*0x46bd0c*/
  *((unsigned char *)this + 560) = 0; /*0x46bd13*/
  *((unsigned char *)this + 561) = 0; /*0x46bd19*/
  *((unsigned char *)this + 562) = 1; /*0x46bd1f*/
  *((unsigned char *)this + 563) = 1; /*0x46bd26*/
  *((unsigned char *)this + 565) = 0; /*0x46bd2d*/
  if ( (int)g_BulletTypeInitState < dword_A83C88 /*0x46bd65*/
    || (byte_A83C8D || !dword_A83C88)
    && dword_A83C94 > 0
    && ((unsigned __int8 (*)(DynamicVector **, int, unsigned int))BulletTypeClass_Array->field_8)(
         &BulletTypeClass_Array,
         dword_A83C88 + dword_A83C94,
         0) )
  {
    v3 = g_BulletTypeInitState; /*0x46bd72*/
    g_BulletTypeInitState = (BulletTypeClass *)((char *)g_BulletTypeInitState + 1); /*0x46bd75*/
    *(unsigned int *)&dword_A83C84->__pad_0[4 * (unsigned int)v3] = this; /*0x46bd81*/
  }
  if ( *(int *)&MEMORY[0xB077F8].__pad_579C[9964] < *(int *)&MEMORY[0xB077F8].__pad_579C[9956] /*0x46bdb8*/
    || (MEMORY[0xB077F8].__pad_579C[9961] || !*(unsigned int *)&MEMORY[0xB077F8].__pad_579C[9956])
    && *(int *)&MEMORY[0xB077F8].__pad_579C[9968] > 0
    && (*(unsigned __int8 (**)(char *, int, unsigned int))(*(unsigned int *)&MEMORY[0xB077F8].__pad_579C[9948] + 8))(
         &MEMORY[0xB077F8].__pad_579C[9948],
         *(unsigned int *)&MEMORY[0xB077F8].__pad_579C[9956] + *(unsigned int *)&MEMORY[0xB077F8].__pad_579C[9968],
         0) )
  {
    v4 = (*(unsigned int *)&MEMORY[0xB077F8].__pad_579C[9964])++; /*0x46bdc5*/
    *(unsigned int *)(*(unsigned int *)&MEMORY[0xB077F8].__pad_579C[9952] + 4 * v4) = this; /*0x46bdd4*/
  }
  return this; /*0x46bdd9*/

}
} // namespace gamemd
// 0x46BEE0
namespace gamemd {
WeaponTypeClass * * BulletTypeClass::LoadFromINI(unsigned char *** a2)
{

  char Bool_Overwrite; // al
  char v5; // cl
  char v6; // al
  char v7; // al
  char v8; // cl
  char v9; // al
  char v10; // al
  char v11; // cl
  char v12; // al
  char v13; // al
  char v14; // cl
  char v15; // al
  char v16; // dl
  char v17; // al
  char v18; // cl
  char v19; // al
  void *v20; // eax
  char v21; // al
  WeaponTypeClass *v22; // eax
  WeaponTypeClass *v23; // eax
  int Int_Overwrite; // eax
  char v25; // cl
  char v26; // al
  char v27; // al
  INIClass *v28; // edx
  char v30; // [esp-Ch] [ebp-98h]
  char v31; // [esp-Ch] [ebp-98h]
  char v32; // [esp-Ch] [ebp-98h]
  WeaponTypeClass *v33; // [esp-Ch] [ebp-98h]
  char v34; // [esp-Ch] [ebp-98h]
  WeaponTypeClass *v35; // [esp-Ch] [ebp-98h]
  char v36; // [esp-Ch] [ebp-98h]
  WeaponTypeClass *v37; // [esp+8h] [ebp-84h]
  WeaponTypeClass *v38; // [esp+8h] [ebp-84h]
  WeaponTypeClass *v39; // [esp+8h] [ebp-84h]
  INIClass Destination[2]; // [esp+Ch] [ebp-80h] BYREF

  INIClass::ResetSection(a2); /*0x46bef3*/
  if ( !ObjectTypeClass::LoadFromINI((char *)this, (CCINIClass *)a2) ) /*0x46befb*/
    return 0; /*0x46c42a*/
  *((unsigned int *)this + 188) = INIClass::ReadInt_Overwrite( /*0x46bf21*/
                              (int)a2,
                              (unsigned __int8 *)((char *)this + 36),
                              (CCINIClass *)&stru_81B138.unknown30,
                              *(INIClass **)((char *)this + 752));
  *((unsigned int *)this + 183) = INIClass::ReadInt_Overwrite( /*0x46bf3b*/
                              (int)a2,
                              (unsigned __int8 *)((char *)this + 36),
                              (CCINIClass *)&stru_81B138.INIClass_field_2C,
                              *(INIClass **)((char *)this + 732));
  *((unsigned int *)this + 184) = INIClass::ReadInt_Overwrite( /*0x46bf55*/
                              (int)a2,
                              (unsigned __int8 *)((char *)this + 36),
                              (CCINIClass *)&stru_81B138.sectionHead[2],
                              *(INIClass **)((char *)this + 736));
  *(double *)((char *)this + 712) = INIClass::ReadDouble_Overwrite( /*0x46bf76*/
                              (int)a2,
                              (INIClass *)((char *)this + 36),
                              (unsigned __int8 *)&stru_8184C8.INIClass_field_2C,
                              (INIClass *)*((unsigned int *)this + 178));
  *((unsigned int *)this + 180) = INIClass::ReadInt_Overwrite( /*0x46bf90*/
                              (int)a2,
                              (unsigned __int8 *)((char *)this + 36),
                              (CCINIClass *)&stru_81B138.headNode[1],
                              *(INIClass **)((char *)this + 720));
  *((unsigned int *)this + 181) = BuildingTypeClass::FindAnimByName( /*0x46bfaa*/
                              a2,
                              (unsigned __int8 *)((char *)this + 36),
                              (unsigned __int8 *)&stru_81B138,
                              *((unsigned int *)this + 181));
  *((unsigned char *)this + 667) = INIClass::ReadBool_Overwrite( /*0x46bfc4*/
                             (int)a2,
                             (unsigned __int8 *)((char *)this + 36),
                             &unk_81B130,
                             *((unsigned char *)this + 667));
  *((unsigned char *)this + 661) = INIClass::ReadBool_Overwrite( /*0x46bfde*/
                             (int)a2,
                             (unsigned __int8 *)((char *)this + 36),
                             &unk_81B128,
                             *((unsigned char *)this + 661));
  *((unsigned char *)this + 662) = INIClass::ReadBool_Overwrite( /*0x46bff8*/
                             (int)a2,
                             (unsigned __int8 *)((char *)this + 36),
                             &unk_81B118,
                             *((unsigned char *)this + 662));
  *((unsigned char *)this + 663) = INIClass::ReadBool_Overwrite( /*0x46c012*/
                             (int)a2,
                             (unsigned __int8 *)((char *)this + 36),
                             &unk_81B104,
                             *((unsigned char *)this + 663));
  *((unsigned char *)this + 664) = INIClass::ReadBool_Overwrite( /*0x46c02c*/
                             (int)a2,
                             (unsigned __int8 *)((char *)this + 36),
                             &unk_81B0F4,
                             *((unsigned char *)this + 664));
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x46c041*/
                     (int)a2,
                     (unsigned __int8 *)((char *)this + 36),
                     &unk_81B0E8,
                     *((unsigned char *)this + 665));
  v5 = *((unsigned char *)this + 666); /*0x46c046*/
  *((unsigned char *)this + 665) = Bool_Overwrite; /*0x46c04c*/
  v6 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)((char *)this + 36), &unk_818660, v5); /*0x46c05b*/
  v30 = *((unsigned char *)this + 668); /*0x46c068*/
  *((unsigned char *)this + 666) = v6; /*0x46c06f*/
  *((unsigned char *)this + 668) = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)((char *)this + 36), &unk_81B0DC, v30); /*0x46c07a*/
  v7 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)((char *)this + 36), &aLevel, *((unsigned char *)this + 669)); /*0x46c08f*/
  v8 = *((unsigned char *)this + 670); /*0x46c094*/
  *((unsigned char *)this + 669) = v7; /*0x46c09a*/
  v9 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)((char *)this + 36), &unk_81B0CC, v8); /*0x46c0a9*/
  v31 = *((unsigned char *)this + 671); /*0x46c0b6*/
  *((unsigned char *)this + 670) = v9; /*0x46c0bd*/
  *((unsigned char *)this + 671) = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)((char *)this + 36), &unk_81B0C0, v31); /*0x46c0c8*/
  v10 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)((char *)this + 36), &unk_81B0B8, *((unsigned char *)this + 672)); /*0x46c0dd*/
  v11 = *((unsigned char *)this + 674); /*0x46c0e2*/
  *((unsigned char *)this + 672) = v10; /*0x46c0e8*/
  v12 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)((char *)this + 36), &unk_81B0AC, v11); /*0x46c0f7*/
  v32 = *((unsigned char *)this + 675); /*0x46c104*/
  *((unsigned char *)this + 674) = v12; /*0x46c10b*/
  *((unsigned char *)this + 675) = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)((char *)this + 36), &unk_81B0A0, v32); /*0x46c116*/
  v13 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)((char *)this + 36), &unk_81B09C, *((unsigned char *)this + 676)); /*0x46c12b*/
  v14 = *((unsigned char *)this + 677); /*0x46c130*/
  *((unsigned char *)this + 676) = v13; /*0x46c136*/
  v15 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)((char *)this + 36), &unk_81B098, v14); /*0x46c145*/
  v16 = *((unsigned char *)this + 678); /*0x46c14a*/
  *((unsigned char *)this + 677) = v15; /*0x46c150*/
  *((unsigned char *)this + 678) = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)((char *)this + 36), &unk_81B08C, v16); /*0x46c164*/
  v17 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)((char *)this + 36), &unk_81B084, *((unsigned char *)this + 679)); /*0x46c179*/
  v18 = *((unsigned char *)this + 660); /*0x46c17e*/
  *((unsigned char *)this + 679) = v17; /*0x46c184*/
  v19 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)((char *)this + 36), &unk_81B078, v18); /*0x46c193*/
  v33 = *(WeaponTypeClass **)((char *)this + 684); /*0x46c1a0*/
  *((unsigned char *)this + 660) = v19; /*0x46c1a7*/
  *((unsigned int *)this + 171) = INIClass::ReadInt_Overwrite( /*0x46c1b2*/
                              (int)a2,
                              (unsigned __int8 *)((char *)this + 36),
                              &unk_81B070,
                              (INIClass *)v33);
  *((unsigned char *)this + 748) = INIClass::ReadBool_Overwrite( /*0x46c1e2*/
                             (int)a2,
                             (unsigned __int8 *)((char *)this + 36),
                             &unk_81B064,
                             *((unsigned char *)this + 748));
  if ( (int)INIClass::GetString( /*0x46c1ef*/
              a2,
              (INIClass *)((char *)this + 36),
              (unsigned __int8 *)&g_INI_Key_Image,
              (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
              (INIClass *)((char *)this + 504),
              25) > 0 )
  {
    v37 = *(WeaponTypeClass **)((char *)this + 728); /*0x46c20a*/
    if ( INIClass::GetString( /*0x46c219*/
           (unsigned __int8 ***)&MEMORY[0x87F8E4].__pad_5568[9012],
           (INIClass *)((char *)this + 504),
           (unsigned __int8 *)MEMORY[0x817F70].location,
           (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
           Destination,
           128) )
    {
      v20 = AnimTypeClass::FindOrCreate((AbstractClass *)Destination); /*0x46c226*/
    }
    else
    {
      v20 = v37; /*0x46c22d*/
    }
    *((unsigned int *)this + 182) = v20; /*0x46c231*/
    *((unsigned int *)this + 185) = INIClass::ReadInt_Overwrite( /*0x46c24e*/
                                (int)&MEMORY[0x87F8E4].__pad_5568[9012],
                                (unsigned __int8 *)((char *)this + 504),
                                (CCINIClass *)&MEMORY[0x817F70].isAliveFlag,
                                *(INIClass **)((char *)this + 740));
    v21 = INIClass::ReadBool_Overwrite( /*0x46c26b*/
            (int)&MEMORY[0x87F8E4].__pad_5568[9012],
            (unsigned __int8 *)((char *)this + 504),
            &unk_81B05C,
            *((unsigned char *)this + 673) == 0);
    v34 = *((unsigned char *)this + 759); /*0x46c27d*/
    *((unsigned char *)this + 673) = v21 == 0; /*0x46c287*/
    *((unsigned char *)this + 759) = INIClass::ReadBool_Overwrite( /*0x46c292*/
                               (int)&MEMORY[0x87F8E4].__pad_5568[9012],
                               (unsigned __int8 *)((char *)this + 504),
                               &unk_818624,
                               v34);
  }
  v38 = *(WeaponTypeClass **)((char *)this + 688); /*0x46c2ad*/
  if ( INIClass::GetString( /*0x46c2b9*/
         a2,
         (INIClass *)((char *)this + 36),
         &unk_81B04C,
         (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
         Destination,
         128) )
  {
    v22 = InfantryTypeClass::Find(Destination[0].__pad_0); /*0x46c2c6*/
  }
  else
  {
    v22 = v38; /*0x46c2cd*/
  }
  *((unsigned int *)this + 172) = v22; /*0x46c2db*/
  v39 = *(WeaponTypeClass **)((char *)this + 692); /*0x46c2f4*/
  if ( INIClass::GetString( /*0x46c2f8*/
         a2,
         (INIClass *)((char *)this + 36),
         &unk_81B03C,
         (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
         Destination,
         128) )
  {
    v23 = InfantryTypeClass::Find(Destination[0].__pad_0); /*0x46c305*/
  }
  else
  {
    v23 = v39; /*0x46c30c*/
  }
  v35 = *(WeaponTypeClass **)((char *)this + 696); /*0x46c318*/
  *((unsigned int *)this + 173) = v23; /*0x46c31f*/
  *((unsigned int *)this + 174) = INIClass::ReadInt_Overwrite( /*0x46c32a*/
                              (int)a2,
                              (unsigned __int8 *)((char *)this + 36),
                              &unk_81B02C,
                              (INIClass *)v35);
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x46c33f*/
                    (int)a2,
                    (unsigned __int8 *)((char *)this + 36),
                    (CCINIClass *)stru_81AFD0.__pad_48,
                    *(INIClass **)((char *)this + 700));
  v25 = *((unsigned char *)this + 704); /*0x46c344*/
  *((unsigned int *)this + 175) = Int_Overwrite; /*0x46c34a*/
  v26 = INIClass::ReadBool_Overwrite( /*0x46c359*/
          (int)a2,
          (unsigned __int8 *)((char *)this + 36),
          (CCINIClass *)&stru_81AFD0.INIClass_field_3C,
          v25);
  v36 = *((unsigned char *)this + 681); /*0x46c366*/
  *((unsigned char *)this + 704) = v26; /*0x46c36d*/
  *((unsigned char *)this + 681) = INIClass::ReadBool_Overwrite( /*0x46c378*/
                             (int)a2,
                             (unsigned __int8 *)((char *)this + 36),
                             (CCINIClass *)&stru_81AFD0.INIClass_field_2C,
                             v36);
  *((unsigned char *)this + 756) = INIClass::ReadInt_Overwrite( /*0x46c399*/
                             (int)&MEMORY[0x87F8E4].__pad_5568[9012],
                             (unsigned __int8 *)((char *)this + 504),
                             (CCINIClass *)&stru_81AFD0.__pad_20[4],
                             (INIClass *)*(unsigned __int8 *)((char *)this + 756));
  v27 = INIClass::ReadInt_Overwrite( /*0x46c3b1*/
          (int)&MEMORY[0x87F8E4].__pad_5568[9012],
          (unsigned __int8 *)((char *)this + 504),
          (CCINIClass *)&stru_81AFD0.sectionHead[2],
          (INIClass *)*(unsigned __int8 *)((char *)this + 757));
  v28 = (INIClass *)*(unsigned __int8 *)((char *)this + 758); /*0x46c3bd*/
  *((unsigned char *)this + 757) = v27; /*0x46c3c3*/
  *((unsigned char *)this + 758) = INIClass::ReadInt_Overwrite( /*0x46c3d5*/
                             (int)&MEMORY[0x87F8E4].__pad_5568[9012],
                             (unsigned __int8 *)((char *)this + 504),
                             (CCINIClass *)&stru_81AFD0.headNode[2],
                             v28);
  *((unsigned char *)this + 680) = INIClass::ReadBool_Overwrite( /*0x46c3f2*/
                             (int)&MEMORY[0x87F8E4].__pad_5568[9012],
                             (unsigned __int8 *)((char *)this + 504),
                             &stru_81AFD0,
                             *((unsigned char *)this + 680));
  if ( !*((unsigned char *)this + 670) ) /*0x46c3f8*/
    ObjectTypeClass::Load2DArt((char *)this); /*0x46c406*/
  if ( *((unsigned char *)this + 566) ) /*0x46c40b*/
    VoxelAnimType::LoadAnim((char *)this); /*0x46c417*/
  return 1; /*0x46c41c*/

}
} // namespace gamemd
// 0x46C560
namespace gamemd {
int BulletTypeClass::ProcessPower(int * a2)
{

  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  int v16; // ecx
  int v17; // edx
  int v18; // edx

  v3 = AbstractTypeClass::ProcessPower((char *)this, a2); /*0x46c569*/
  LOBYTE(v3) = *((unsigned char *)this + 660); /*0x46c56e*/
  Power::FlagProcess(a2, v3); /*0x46c577*/
  LOBYTE(v4) = *((unsigned char *)this + 666); /*0x46c57c*/
  Power::FlagProcess(a2, v4); /*0x46c585*/
  LOBYTE(v5) = *((unsigned char *)this + 667); /*0x46c58a*/
  v6 = Power::FlagProcess(a2, v5); /*0x46c593*/
  LOBYTE(v6) = *((unsigned char *)this + 668); /*0x46c598*/
  Power::FlagProcess(a2, v6); /*0x46c5a1*/
  LOBYTE(v7) = *((unsigned char *)this + 669); /*0x46c5a6*/
  Power::FlagProcess(a2, v7); /*0x46c5af*/
  LOBYTE(v8) = *((unsigned char *)this + 670); /*0x46c5b4*/
  v9 = Power::FlagProcess(a2, v8); /*0x46c5bd*/
  LOBYTE(v9) = *((unsigned char *)this + 671); /*0x46c5c2*/
  Power::FlagProcess(a2, v9); /*0x46c5cb*/
  LOBYTE(v10) = *((unsigned char *)this + 672); /*0x46c5d0*/
  Power::FlagProcess(a2, v10); /*0x46c5d9*/
  LOBYTE(v11) = *((unsigned char *)this + 673); /*0x46c5de*/
  v12 = Power::FlagProcess(a2, v11); /*0x46c5e7*/
  LOBYTE(v12) = *((unsigned char *)this + 674); /*0x46c5ec*/
  Power::FlagProcess(a2, v12); /*0x46c5f5*/
  LOBYTE(v13) = *((unsigned char *)this + 675); /*0x46c5fa*/
  Power::FlagProcess(a2, v13); /*0x46c603*/
  LOBYTE(v14) = *((unsigned char *)this + 676); /*0x46c608*/
  v15 = Power::FlagProcess(a2, v14); /*0x46c611*/
  LOBYTE(v15) = *((unsigned char *)this + 677); /*0x46c616*/
  Power::FlagProcess(a2, v15); /*0x46c61f*/
  LOBYTE(v16) = *((unsigned char *)this + 678); /*0x46c624*/
  Power::FlagProcess(a2, v16); /*0x46c62d*/
  LOBYTE(v17) = *((unsigned char *)this + 679); /*0x46c632*/
  Power::FlagProcess(a2, v17); /*0x46c63b*/
  Checksummer::Add_double(*((unsigned int *)this + 178), *((unsigned int *)this + 179)); /*0x46c650*/
  Power::TimerProcess(*((unsigned int *)this + 180)); /*0x46c65e*/
  Power::TimerProcess(*((unsigned int *)this + 183)); /*0x46c66c*/
  Power::TimerProcess(*((unsigned int *)this + 188)); /*0x46c67a*/
  LOBYTE(v18) = *((unsigned char *)this + 759); /*0x46c67f*/
  return Power::FlagProcess(a2, v18); /*0x46c68d*/

}
} // namespace gamemd
// 0x46C890
namespace gamemd {
BulletTypeClass * BulletTypeClass::ddtor(char a2)
{

  int v3; // eax
  int v4; // eax
  void **v6; // [esp+4h] [ebp-4h] BYREF

  *Block = &BulletTypeClass::`vftable'; /*0x46c896*/
  *(Block + 1) = &BulletTypeClass::`vftable'; /*0x46c89c*/
  *(Block + 2) = &BulletTypeClass::`vftable'; /*0x46c8a3*/
  *(Block + 3) = &vt_BulletTypeClass; /*0x46c8aa*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x46c8b1*/
  v6 = Block; /*0x46c8c6*/
  v3 = (*(int (**)(int *, void ***))(MEMORY[0xB0F670] + 16))(&MEMORY[0xB0F670], &v6); /*0x46c8ca*/
  if ( v3 != -1 && v3 < MEMORY[0xB0F680] && v3 < --MEMORY[0xB0F680] ) /*0x46c8e5*/
  {
    do /*0x46c8fd*/
    {
      ++v3; /*0x46c8ed*/
      *((unsigned int *)MEMORY[0xB0F674] + v3 - 1) = *((unsigned int *)MEMORY[0xB0F674] + v3); /*0x46c8f1*/
    }
    while ( v3 < MEMORY[0xB0F680] ); /*0x46c8fd*/
  }
  v6 = Block; /*0x46c90f*/
  v4 = (*(int (**)(int *, void ***))(BulletTypeClass_Array + 16))(&BulletTypeClass_Array, &v6); /*0x46c913*/
  if ( v4 != -1 && v4 < g_BulletTypeInitState && v4 < --g_BulletTypeInitState ) /*0x46c92e*/
  {
    do /*0x46c946*/
    {
      ++v4; /*0x46c936*/
      *((unsigned int *)dword_A83C84 + v4 - 1) = *((unsigned int *)dword_A83C84 + v4); /*0x46c93a*/
    }
    while ( v4 < g_BulletTypeInitState ); /*0x46c946*/
  }
  ObjectTypeClass::Destruct((int)Block); /*0x46c94a*/
  if ( (a2 & 1) != 0 ) /*0x46c954*/
    OperatorDelete(Block); /*0x46c957*/
  return (BulletTypeClass *)Block; /*0x46c961*/

}
} // namespace gamemd
// 0x69FC10
namespace gamemd {
int BulletTypeClass::ProcessImpact(int a1)
{

  int v1; // esi
  int v2; // edi
  int v3; // eax
  int v4; // ecx
  int v5; // ecx
  unsigned int *v6; // ecx
  unsigned short *v7; // ebp
  unsigned short *v8; // eax
  unsigned int *v9; // ecx
  unsigned int *v11; // ecx
  unsigned char *v12; // ecx
  void **v13; // eax
  int *v14; // ecx
  int v15; // ecx
  unsigned char *v16; // eax
  int v17; // eax
  int v18; // ecx
  unsigned int *v19; // eax
  unsigned char *v20; // ecx
  unsigned int *v21; // ecx
  char v22; // [esp-4h] [ebp-24h]
  int v23; // [esp+10h] [ebp-10h] BYREF
  int v24; // [esp+14h] [ebp-Ch]
  int v25; // [esp+18h] [ebp-8h]

  v1 = a1; /*0x69fc16*/
  v2 = a1 - 4; /*0x69fc28*/
  v3 = *(unsigned __int8 *)((*(int (**)(unsigned int))(**(unsigned int **)(a1 + 8) + 444))(*(unsigned int *)(a1 + 8)) + 284); /*0x69fc31*/
  v4 = *(unsigned int *)(v2 + 28); /*0x69fc33*/
  if ( v3 != v4 ) /*0x69fc38*/
  {
    *(unsigned int *)(v2 + 32) = v4; /*0x69fc3a*/
    *(unsigned int *)(v2 + 28) = v3; /*0x69fc43*/
    Timer::Start(&v23, 3); /*0x69fc46*/
    *(unsigned int *)(v2 + 36) = v23; /*0x69fc57*/
    *(unsigned int *)(v2 + 40) = v24; /*0x69fc5d*/
    *(unsigned int *)(v2 + 44) = v25; /*0x69fc64*/
    *(unsigned int *)(v2 + 48) = 3; /*0x69fc67*/
  }
  if ( *(unsigned int *)(v1 + 84) == -1 || !*(unsigned char *)(v1 + 95) ) /*0x69fc7a*/
  {
    v5 = *(unsigned int *)(*(unsigned int *)(v1 + 8) + 1444); /*0x69fd16*/
    if ( v5 /*0x69fd54*/
      && (*(int (**)(int))(*(unsigned int *)v5 + 44))(v5) == 11
      && (v6 = *(unsigned int **)(v1 + 8),
          v7 = (unsigned short *)(v6[361] + 36),
          v8 = (unsigned short *)(*(int (**)(unsigned int *, int *))(*v6 + 440))(v6, &a1),
          *v8 == *v7)
      && v8[1] == v7[1] )
    {
      v9 = *(unsigned int **)(v2 + 12); /*0x69fd56*/
      if ( !v9[358] ) /*0x69fd59*/
        goto LABEL_20; /*0x69fd5f*/
    }
    else
    {
      v11 = *(unsigned int **)(v1 + 8); /*0x69fd7f*/
      if ( v11[43] != 5 /*0x69fddc*/
        || *(unsigned char *)(v1 + 95)
        || *(unsigned int *)(v1 + 48) == MEMORY[0xB077F8] && *(unsigned long long *)(v1 + 52) == MEMORY[0xB077FC]
        || v11[39] != *(unsigned int *)(v1 + 48)
        || v11[40] != *(unsigned int *)(v1 + 52)
        || v11[41] != *(unsigned int *)(v1 + 56) )
      {
        if ( TimerClass::Active((int)(v11 + 226)) ) /*0x69fe28*/
        {
          *(unsigned char *)(v1 + 94) = 1; /*0x69fe35*/
          goto LABEL_32; /*0x69fe35*/
        }
        if ( *(unsigned char *)(v1 + 94) ) /*0x69ff5d*/
        {
          *(unsigned char *)(v1 + 94) = 0; /*0x69ff62*/
          (*(void (**)(unsigned int, unsigned int))(**(unsigned int **)(v1 + 8) + 396))(*(unsigned int *)(v1 + 8), 0); /*0x69ff6b*/
          v16 = *(unsigned char **)(v1 + 8); /*0x69ff71*/
          if ( !v16[144] || v16[129] || v16[141] ) /*0x69ff84*/
            return 0; /*0x69ff95*/
        }
        if ( (*(int (**)(unsigned int))(**(unsigned int **)(v1 + 8) + 388))(*(unsigned int *)(v1 + 8)) == 5 /*0x69ffc4*/
          && !(*(unsigned __int8 (**)(int))(*(unsigned int *)v1 + 16))(v1)
          || (*(int (**)(unsigned int))(**(unsigned int **)(v1 + 8) + 388))(*(unsigned int *)(v1 + 8)) == 16 )
        {
          goto LABEL_32; /*0x69ffc4*/
        }
        if ( !(*(unsigned __int8 (**)(int))(*(unsigned int *)v1 + 16))(v1) ) /*0x69ffcd*/
        {
          v17 = *(unsigned int *)(v1 + 8); /*0x69ffd8*/
          if ( *(unsigned int *)(v17 + 1504) == -1 ) /*0x69ffe1*/
          {
            if ( *(unsigned char *)(v17 + 973) ) /*0x69ffe7*/
            {
              if ( *(unsigned int *)(v2 + 64) != MEMORY[0xB077F8] || *(unsigned long long *)(v2 + 68) != MEMORY[0xB077FC] ) /*0x6a0006*/
              {
                *(unsigned int *)(v2 + 64) = MEMORY[0xB077F8]; /*0x6a0015*/
                *(unsigned long long *)(v2 + 68) = MEMORY[0xB077FC]; /*0x6a001d*/
                *(unsigned char *)(v2 + 99) = 0; /*0x6a0029*/
              }
              *(unsigned int *)(v1 + 76) = 0; /*0x6a002c*/
              *(unsigned int *)(v1 + 80) = 0; /*0x6a002f*/
            }
            else
            {
              v18 = *(unsigned int *)(v17 + 1444); /*0x6a0037*/
              if ( v18 ) /*0x6a003f*/
              {
                v19 = (unsigned int *)(*(int (**)(int, int *, unsigned int))(*(unsigned int *)v18 + 76))( /*0x6a004d*/
                                  v18,
                                  &v23,
                                  *(unsigned int *)(v1 + 8));
                (*(void (**)(int, unsigned int, unsigned int, unsigned int))(*(unsigned int *)v1 + 68))(v1, *v19, v19[1], v19[2]); /*0x6a0069*/
              }
            }
            goto LABEL_32; /*0x6a0032*/
          }
        }
        v20 = *(unsigned char **)(v1 + 8); /*0x6a0074*/
        if ( v20[981] /*0x6a00ab*/
          && (*(int (**)(unsigned char *))(*(unsigned int *)v20 + 388))(v20) != 7
          && (*(unsigned __int8 (**)(int))(*(unsigned int *)v1 + 16))(v1)
          && !(*(unsigned __int8 (**)(unsigned int, int))(**(unsigned int **)(v1 + 8) + 716))(
                *(unsigned int *)(v1 + 8),
                v1 + 48) )
        {
          if ( *(unsigned int *)(v2 + 64) != MEMORY[0xB077F8] || *(unsigned long long *)(v2 + 68) != MEMORY[0xB077FC] ) /*0x6a00cc*/
          {
            *(unsigned int *)(v2 + 64) = MEMORY[0xB077F8]; /*0x6a00db*/
            *(unsigned long long *)(v2 + 68) = MEMORY[0xB077FC]; /*0x6a00e3*/
            *(unsigned char *)(v2 + 99) = 0; /*0x6a00ef*/
          }
          v21 = *(unsigned int **)(v2 + 12); /*0x6a00f2*/
          if ( v21[358] ) /*0x6a00f5*/
          {
            FootClass::ClearPathIndex(v21); /*0x6a010d*/
            if ( (*(unsigned __int8 (**)(unsigned int, unsigned int, int))(**(unsigned int **)(v2 + 12) + 1156))( /*0x6a011a*/
                   *(unsigned int *)(v2 + 12),
                   0,
                   1) )
            {
              return 0; /*0x6a0131*/
            }
          }
          else
          {
            (*(void (**)(unsigned int *, unsigned int, int))(*v21 + 1152))(v21, 0, 1); /*0x6a0102*/
          }
          goto LABEL_32; /*0x6a0108*/
        }
        LOBYTE(a1) = 0; /*0x6a013e*/
        WalkLocomotion::Update(v1 - 4, &a1, 1, 0); /*0x6a0142*/
        if ( (unsigned char)a1 ) /*0x6a014b*/
          return 0; /*0x6a0156*/
        if ( !*(unsigned char *)(*(unsigned int *)(v1 + 8) + 144) ) /*0x6a015c*/
          return 0; /*0x6a016d*/
        v22 = 0; /*0x6a0170*/
        goto LABEL_81; /*0x6a0170*/
      }
      v9 = *(unsigned int **)(v2 + 12); /*0x69fdde*/
      if ( !v9[358] ) /*0x69fde7*/
      {
LABEL_20:
        (*(void (**)(unsigned int *, unsigned int, int))(*v9 + 1152))(v9, 0, 1); /*0x69fd65*/
        return 0; /*0x69fd79*/
      }
    }
    FootClass::ClearPathIndex(v9); /*0x69fe00*/
    (*(void (**)(unsigned int, unsigned int, int))(**(unsigned int **)(v2 + 12) + 1156))(*(unsigned int *)(v2 + 12), 0, 1); /*0x69fe0d*/
    return 0; /*0x69fe1c*/
  }
  if ( WalkLocomotion::ProcessCollision(v1 - 4, 0) || !*(unsigned char *)(*(unsigned int *)(v1 + 8) + 144) ) /*0x69fc96*/
    return 0; /*0x69fc9c*/
  if ( *(unsigned int *)(v1 + 84) != -1 /*0x69fcd4*/
    || !(*(unsigned __int8 (**)(int))(*(unsigned int *)v1 + 16))(v1)
    && *(unsigned int *)(*(unsigned int *)(v1 + 8) + 1504) == -1
    || (*(int (**)(unsigned int))(**(unsigned int **)(v1 + 8) + 44))(*(unsigned int *)(v1 + 8)) == 1
    && *(unsigned char *)(*(unsigned int *)(v1 + 8) + 1745) )
  {
    goto LABEL_32; /*0x69fcda*/
  }
  LOBYTE(a1) = 0; /*0x69fcea*/
  WalkLocomotion::Update(v1 - 4, &a1, 1, 0); /*0x69fcee*/
  if ( (unsigned char)a1 || !*(unsigned char *)(*(unsigned int *)(v1 + 8) + 144) ) /*0x69fd00*/
    return 0; /*0x69fd06*/
  v22 = 1; /*0x69fd0c*/
LABEL_81:
  WalkLocomotion::ProcessCollision(v1 - 4, v22); /*0x6a0171*/
  if ( !*(unsigned char *)(*(unsigned int *)(v1 + 8) + 144) ) /*0x6a017b*/
    return 0; /*0x6a018a*/
LABEL_32:
  if ( (*(unsigned __int8 (**)(int))(*(unsigned int *)v1 + 128))(v1) ) /*0x69fe3c*/
  {
    if ( !((int)MEMORY[0xA8ED84] % 8) /*0x69fe6e*/
      && !*(unsigned char *)((*(int (**)(unsigned int))(**(unsigned int **)(v1 + 8) + 132))(*(unsigned int *)(v1 + 8)) + 3433) )
    {
      v12 = *(unsigned char **)(v1 + 8); /*0x69fe76*/
      if ( !v12[140] && *(unsigned int *)((*(int (**)(unsigned char *))(*(unsigned int *)v12 + 444))(v12) + 236) == 2 ) /*0x69fe90*/
      {
        if ( MEMORY[0x8871E0]->InfantryBrute ) /*0x69fe97*/
        {
          v13 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x69fea4*/
          if ( v13 ) /*0x69feae*/
          {
            v14 = (int *)(*(unsigned int *)(v1 + 8) + 156); /*0x69feb4*/
            v23 = *v14; /*0x69fec5*/
            v24 = v14[1]; /*0x69fecc*/
            v25 = v14[2]; /*0x69fed8*/
            AnimClass::ctor(v13, (void *)MEMORY[0x8871E0]->InfantryBrute, &v23, 0, 1, (void *)0x600, 0, 0); /*0x69feeb*/
          }
        }
      }
    }
  }
  if ( *(unsigned int *)(v1 + 48) == MEMORY[0xB077F8] /*0x69ff1e*/
    && *(unsigned int *)(v1 + 52) == (unsigned int)MEMORY[0xB077FC]
    && *(unsigned long long *)(v1 + 56) == __PAIR64__(MEMORY[0xB077F8], HIDWORD(MEMORY[0xB077FC]))
    && *(unsigned long long *)(v1 + 64) == MEMORY[0xB077FC] )
  {
    v15 = *(unsigned int *)(v1 + 8); /*0x69ff25*/
    if ( *(unsigned int *)(v15 + 1504) == -1 && *(double *)(v15 + 1400) > 0.0 ) /*0x69ff41*/
      (*(void (**)(int, unsigned int, unsigned int))(*(unsigned int *)v15 + 1348))(v15, 0, 0); /*0x69ff47*/
  }
  return (*(int (**)(int))(*(unsigned int *)v1 + 16))(v1); /*0x69fd72*/

}
} // namespace gamemd
// 0x46C4F0
namespace gamemd {
unsigned int * BulletTypeClass::GetROF(unsigned int * a1, int * a2)
{

  int GroundHeight; // eax
  int v3; // ecx
  int v5; // [esp+0h] [ebp-Ch] BYREF
  int v6; // [esp+4h] [ebp-8h]
  int v7; // [esp+8h] [ebp-4h]

  v5 = *a2; /*0x46c4f9*/
  v6 = a2[1]; /*0x46c50a*/
  v7 = a2[2]; /*0x46c511*/
  GroundHeight = Cell::GetGroundHeight(&v5); /*0x46c515*/
  v3 = v7; /*0x46c51a*/
  if ( v7 <= GroundHeight ) /*0x46c520*/
    v3 = Cell::GetGroundHeight(&v5) + 1; /*0x46c533*/
  *a1 = v5; /*0x46c53f*/
  a1[1] = v6; /*0x46c545*/
  a1[2] = v3; /*0x46c549*/
  return a1; /*0x46c54c*/

}
} // namespace gamemd
// 0x46C6A0
namespace gamemd {
int BulletTypeClass::SaveLoad_Prefix(ObjectTypeClass * aP0, int aP1)
{

  int result; // eax

  result = ObjectTypeClass::LoadCleanup((IUnknown *)aP0, (ObjectTypeClass *)aP1); /*0x46c6ab*/
  if ( result >= 0 ) /*0x46c6b2*/
  {
    if ( aP0 ) /*0x46c6b6*/
    {
      ObjectTypeClass::Construct(aP0, (ObjectTypeClass *)&aP1); /*0x46c6bf*/
      *(unsigned int *)aP0->__pad_0 = &BulletTypeClass::`vftable'; /*0x46c6c4*/
      *(unsigned int *)&aP0->__pad_0[4] = &BulletTypeClass::`vftable'; /*0x46c6ca*/
      *(unsigned int *)&aP0->__pad_0[8] = &BulletTypeClass::`vftable'; /*0x46c6d1*/
      *(unsigned int *)&aP0->__pad_0[12] = &vt_BulletTypeClass; /*0x46c6d8*/
    }
    VoxelAnimType::LoadAnim(aP0->__pad_0); /*0x46c6e1*/
    ObjectTypeClass::Load2DArt(aP0->__pad_0); /*0x46c6e8*/
    ObjectPtr::RegisterForTracking( /*0x46c6f9*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].UINameLabel[7]);
    ObjectPtr::RegisterForTracking( /*0x46c70a*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].referenceCount);
    ObjectPtr::RegisterForTracking( /*0x46c71b*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].NeedsSaveOrLink);
    return 0; /*0x46c720*/
  }
  return result; /*0x46c722*/

}
} // namespace gamemd
// 0x46C730
namespace gamemd {
int BulletTypeClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{

  int result; // eax

  result = AbstractClass::SaveLoad_PrefixWrapper(aP0, aP1, (TechnoTypeClass *)aP2); /*0x46c73f*/
  if ( result >= 0 ) /*0x46c746*/
    return 0; /*0x46c748*/
  return result; /*0x46c74a*/

}
} // namespace gamemd
// 0x46C750
namespace gamemd {
int BulletTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x46c756*/
    return -2147467261; /*0x46c758*/
  *a2 = 1525862007; /*0x46c766*/
  a2[1] = 298976820; /*0x46c76e*/
  a2[2] = 1610654892; /*0x46c777*/
  a2[3] = -1252326136; /*0x46c780*/
  return 0; /*0x46c75d*/

}
} // namespace gamemd
// 0x46C820
namespace gamemd {
int BulletTypeClass::GetWarhead(int a2, int a3)
{

  int result; // eax

  result = a2; /*0x46c820*/
  if ( a2 == *((unsigned int *)this + 182) ) /*0x46c82c*/
    *((unsigned int *)this + 182) = 0; /*0x46c82e*/
  return result; /*0x46c838*/

}
} // namespace gamemd
// 0x46C850
namespace gamemd {
int BulletTypeClass::GetTypeIdentifier()
{

  return 9; /*0x46c855*/

}
} // namespace gamemd
// 0x46C860
namespace gamemd {
int BulletTypeClass::GetObjectSize()
{

  return 760; /*0x46c865*/

}
} // namespace gamemd
// 0x46C870
namespace gamemd {
char BulletTypeClass::Stub(int a1, int a2)
{

  return 0; /*0x46c872*/

}
} // namespace gamemd
// 0x46C880
namespace gamemd {
int BulletTypeClass::StubReturnFalse(int a1)
{

  return 0; /*0x46c882*/

}
} // namespace gamemd
// 0x475150
namespace gamemd {
char BulletTypeClass::ReadTrajectoryFlags(unsigned char * Block, char * a3, int a4)
{

  char v4; // bl
  char *v5; // ebp
  int v6; // edx
  int v8; // [esp+4h] [ebp-88h]
  char Source[128]; // [esp+Ch] [ebp-80h] BYREF

  v4 = 0; /*0x47515e*/
  Source[0] = 0; /*0x475166*/
  if ( !a4 || g_SuperWeaponTypeArray <= 0 ) /*0x475177*/
    return 1; /*0x475177*/
  v5 = (char *)g_SuperWeaponTypeCount; /*0x47517e*/
  v8 = g_SuperWeaponTypeArray; /*0x475186*/
  do /*0x475213*/
  {
    v6 = *(unsigned int *)v5; /*0x47518a*/
    if ( ((1 << *(unsigned int *)(*(unsigned int *)v5 + 184)) & a4) != 0 ) /*0x4751a3*/
    {
      if ( v4 ) /*0x4751a7*/
        strcat(Source, MEMORY[0x817F70]); /*0x4751ce*/
      strcat(Source, (const char *)(v6 + 36)); /*0x4751fa*/
      v4 = Source[0]; /*0x475203*/
    }
    v5 += 4; /*0x47520b*/
    --v8; /*0x47520f*/
  }
  while ( v8 ); /*0x475213*/
  if ( v4 ) /*0x47521e*/
    return INIClass::SetString(this, Block, a3, Source); /*0x475239*/
  else
    return 1; /*0x475248*/

}
} // namespace gamemd