// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00660540  Map_Helper_660540  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_660540::Map_Helper_660540() {

  void *vtable1; // edx
  char *vtable2; // esi
  int *v4; // eax
  int v5; // ecx
  char *v6; // ebp
  int v7; // eax
  int *v8; // ebx
  int v9; // edi
  int v10; // esi
  int v11; // eax
  int v12; // eax
  int *v13; // edi
  int v14; // esi
  int result; // eax
  int v16; // ebp
  int v17; // esi
  int *v18; // edi
  int v19; // ebx
  int v20; // eax
  int v21; // ecx
  int v22; // edx
  int v23; // edi
  int v24; // ebx
  int v25; // eax
  unsigned int *v26; // eax
  bool v27; // zf
  int *v28; // [esp+4h] [ebp-7Ch]
  int *v29; // [esp+18h] [ebp-68h]
  int v30; // [esp+1Ch] [ebp-64h]
  int v31; // [esp+20h] [ebp-60h] BYREF
  int v32; // [esp+24h] [ebp-5Ch]
  int v33; // [esp+28h] [ebp-58h]
  int v34; // [esp+2Ch] [ebp-54h]
  int v35; // [esp+38h] [ebp-48h]
  unsigned char v36[12]; // [esp+40h] [ebp-40h] BYREF
  int v37; // [esp+4Ch] [ebp-34h]
  int v38[4]; // [esp+50h] [ebp-30h] BYREF
  int v39; // [esp+60h] [ebp-20h] BYREF
  int v40[7]; // [esp+64h] [ebp-1Ch] BYREF

  Render_Render_660730((float *)this, &v39); /*0x66054e*/
  vtable1 = ((unsigned int *)this)[0]; /*0x660553*/
  vtable2 = (char *)((unsigned int *)this)[0]; /*0x660556*/
  v4 = &v39; /*0x660559*/
  v5 = 4; /*0x66055d*/
  do /*0x660574*/
  {
    v6 = &vtable2[v4[1]]; /*0x660569*/
    *v4 += (int)vtable1; /*0x66056b*/
    v4[1] = (int)v6; /*0x66056d*/
    v4 += 2; /*0x660570*/
    --v5; /*0x660573*/
  }
  while ( v5 ); /*0x660574*/
  v7 = 0; /*0x660576*/
  v8 = &v39; /*0x660578*/
  do /*0x6605bb*/
  {
    v9 = v7 + 1; /*0x660582*/
    v10 = **(unsigned int **)&stru_87F5F0.__pad_E12[1538]; /*0x66058c*/
    v11 = (*(int (**)(unsigned char *, int *, int *, void (*)(ObjectClass *)))(**(unsigned int **)&stru_87F5F0.__pad_E12[1538] /*0x6605a6*/
                                                                                          + 120))(
            v36,
            v8,
            &v40[2 * ((v7 + 1) % 4) - 1],
            sub_65FB60);
    (*(void (**)(unsigned int, int))(v10 + 68))(*(unsigned int *)&stru_87F5F0.__pad_E12[1538], v11); /*0x6605b0*/
    v7 = v9; /*0x6605b3*/
    v8 += 2; /*0x6605b5*/
  }
  while ( v9 < 4 ); /*0x6605bb*/
  v12 = 0; /*0x6605bd*/
  v13 = &v39; /*0x6605bf*/
  do /*0x6605f8*/
  {
    v14 = v12 + 1; /*0x6605c9*/
    v28 = (int *)(*(int (**)(unsigned int, unsigned char *))(**(unsigned int **)&stru_87F5F0.__pad_E12[1538] + 120))( /*0x6605d6*/
                   *(unsigned int *)&stru_87F5F0.__pad_E12[1538],
                   v36);
    ClipLine(v13, &v40[2 * (v14 % 4) - 1], v28); /*0x6605eb*/
    v12 = v14; /*0x6605f0*/
    v13 += 2; /*0x6605f2*/
  }
  while ( v14 < 4 ); /*0x6605f8*/
  result = 1; /*0x660600*/
  if ( *(unsigned int *)&stru_87F5F0.__pad_E12[2198] == 1 && *(unsigned int *)&stru_87F5F0.__pad_E12[2194] == 1 ) /*0x660613*/
  {
    v16 = *(unsigned int *)&stru_87F5F0.__pad_E12[1534]; /*0x660619*/
    v17 = *(unsigned int *)&stru_87F5F0.__pad_E12[1530]; /*0x66061f*/
    v18 = v40; /*0x660625*/
    v37 = 1; /*0x660629*/
    v29 = v40; /*0x66062d*/
    v30 = 4; /*0x660631*/
    do /*0x66071c*/
    {
      v19 = *(v18 - 1); /*0x660644*/
      v20 = v19 + *(unsigned int *)&stru_87F5F0.__pad_E12[2178]; /*0x660649*/
      v21 = *v18 + *(unsigned int *)&stru_87F5F0.__pad_E12[2182]; /*0x66064b*/
      if ( v17 <= 0 || v16 <= 0 ) /*0x660653*/
      {
        v31 = v19 + *(unsigned int *)&stru_87F5F0.__pad_E12[2178]; /*0x6606ba*/
        v32 = v21; /*0x6606be*/
        v33 = 1; /*0x6606cb*/
        v34 = v37; /*0x6606cf*/
      }
      else
      {
        v22 = *(unsigned int *)&stru_87F5F0.__pad_E12[1522]; /*0x660655*/
        v23 = *(unsigned int *)&stru_87F5F0.__pad_E12[1526]; /*0x66065b*/
        v35 = v17; /*0x660663*/
        v24 = v16; /*0x660667*/
        if ( *(int *)&stru_87F5F0.__pad_E12[1522] > v20 ) /*0x660669*/
        {
          v17 += *(unsigned int *)&stru_87F5F0.__pad_E12[1522] - v20; /*0x66066d*/
          v22 = v20; /*0x66066f*/
          v35 = v17; /*0x660671*/
        }
        if ( *(int *)&stru_87F5F0.__pad_E12[1526] > v21 ) /*0x660677*/
        {
          v24 = *(unsigned int *)&stru_87F5F0.__pad_E12[1526] - v21 + v16; /*0x66067b*/
          v23 = v21; /*0x66067d*/
        }
        if ( v22 + v17 >= v20 + 1 ) /*0x660686*/
          v25 = v35; /*0x66068f*/
        else
          v25 = v20 - v22 + 2; /*0x66068a*/
        if ( v24 + v23 < v21 + 1 ) /*0x66069b*/
          v24 = v21 - v23 + 2; /*0x6606a2*/
        v32 = v23; /*0x6606a4*/
        v18 = v29; /*0x6606a8*/
        v31 = v22; /*0x6606ac*/
        v33 = v25; /*0x6606b0*/
        v34 = v24; /*0x6606b4*/
      }
      v26 = ClipRectIntersection(v38, &v31, (int *)&stru_87F5F0.__pad_E12[2178], 0, 0); /*0x6606e4*/
      v18 += 2; /*0x6606eb*/
      *(unsigned int *)&stru_87F5F0.__pad_E12[1522] = *v26; /*0x6606ee*/
      v29 = v18; /*0x6606f4*/
      *(unsigned int *)&stru_87F5F0.__pad_E12[1526] = v26[1]; /*0x6606fb*/
      v17 = v26[2]; /*0x660701*/
      *(unsigned int *)&stru_87F5F0.__pad_E12[1530] = v17; /*0x660704*/
      v16 = v26[3]; /*0x66070a*/
      result = v30 - 1; /*0x660711*/
      v27 = v30 == 1; /*0x660711*/
      *(unsigned int *)&stru_87F5F0.__pad_E12[1534] = v16; /*0x660712*/
      --v30; /*0x660718*/
    }
    while ( !v27 ); /*0x66071c*/
  }
  return result; /*0x660722*/

}

// ==== BACKFILL 0x00660AD0  sub_660AD0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_660AD0::sub_660AD0()
{

  return dword_7F099C[4 * (int)this->AbstractClass]; /*0x660adb*/

}

// ==== BACKFILL 0x00660AE0  sub_660AE0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_660AE0::sub_660AE0()
{

  return dword_7F09A0[4 * (int)this->AbstractClass]; /*0x660aeb*/

}

// ==== BACKFILL 0x00660AF0  sub_660AF0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_660AF0::sub_660AF0()
{

  return dword_7F0998[4 * (int)this->AbstractClass]; /*0x660afb*/

}

// ==== BACKFILL 0x00660B00  Map_Load_660B00  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_660B00()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00660B00.json)
}

// ==== BACKFILL 0x00660BE0  UI_Create_734120_Create_660BE0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_660BE0::UI_Create_734120_Create_660BE0() {

  int *result; // eax
  int v2; // ecx
  int v3; // ecx
  int v4; // edx

  result = (int *)this; /*0x660bea*/
  if ( dword_B04D88 == -1 )
  {
    this->AbstractClass = (void *)dword_B04D68; /*0x660bf5*/
  }
  else
  {
    v2 = dword_B04DD8 - 1 + (dword_B04DD8 - 1 < 0 ? 8 : 0);
    if ( __PAIR32__(HIWORD(dword_B04D48[v2]), dword_B04D48[v2]) == dword_B04D68 )
    {
      v3 = dword_B04D48[dword_B04D88]; /*0x660c28*/
      dword_B04DD8 = dword_B04D88; /*0x660c2f*/
      *result = v3; /*0x660c35*/
    }
    else
    {
      v4 = dword_B04D48[v2]; /*0x660c39*/
      dword_B04DD8 = dword_B04DD8 - 1 + (dword_B04DD8 - 1 < 0 ? 8 : 0);
      *result = v4; /*0x660c46*/
    }
  }
  return result; /*0x660bf4*/

}

// ==== BACKFILL 0x00660CB0  VectorClass_ptr_RadarEventClass::GetItemIndex  cls=VectorClass_ptr_RadarEventClass  sig=csp  renamed_refs=0  residual=- ====
int VectorClass_flat::Get(int a2, void *a2_2)
{
    (void)a2; (void)a2_2; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00660CD0.json)
}

// ==== BACKFILL 0x006614F0  RulesClass::readGeneralSection  cls=RulesClass  sig=csp  renamed_refs=0  residual=- ====
int RulesClass::readGeneralSection(TechnoTypeClass * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6614F0)
}

// ==== BACKFILL 0x00661510  RulesClass::readCombatDamage  cls=RulesClass  sig=csp  renamed_refs=0  residual=- ====
int RulesClass::readCombatDamage(int a2)
{

  return (*(int (**)(int, RulesClass *, int, unsigned int))(*(unsigned int *)a2 + 12))(a2, this, 3, 0); /*0x66151f*/

}

// ==== BACKFILL 0x00661530  Map_Append_661530  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_661530(unsigned char * a1, unsigned char * a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00661530.json)
}

// ==== BACKFILL 0x00661590  Map_Append  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_661590(unsigned char * a1, int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00661590.json)
}

// ==== BACKFILL 0x006616B0  sub_6616B0  cls=Straw  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_6616B0::sub_6616B0()
{

  int v2; // ebp
  ObjectClass *v3; // ebx

  v2 = 32; /*0x6616b8*/
  this->Straw_field_0x04 = 0; /*0x6616bd*/
  *((unsigned int *)this + 2) = 0; /*0x6616c0*/
  *(unsigned int *)this->__pad_0 = &vt_Straw; /*0x6616c3*/
  *((unsigned int *)this + 3) = 0; /*0x6616c9*/
  *((unsigned int *)this + 4) = 0; /*0x6616cc*/
  v3 = (ObjectClass *)((char *)this + 20); /*0x6616cf*/
  do /*0x6616df*/
  {
    sub_65C890(v3, 0, 0); /*0x6616d6*/
    v3 = (ObjectClass *)((char *)v3 + 8); /*0x6616db*/
    --v2; /*0x6616de*/
  }
  while ( v2 ); /*0x6616df*/
  *((unsigned int *)this + 3) = 0; /*0x6616e1*/
  *((unsigned int *)this + 4) = 0; /*0x6616e4*/
  *(unsigned int *)this->__pad_0 = &vt_RandomStraw; /*0x6616f1*/
  memset((char *)this + 20, 0, 0x100u); /*0x6616f7*/
  return this->__pad_0; /*0x6616fb*/

}

// ==== BACKFILL 0x00661960  sub_661960  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_661960::sub_661960(short a2)
{

  unsigned char *v3; // eax
  char *v4; // eax
  unsigned int v5; // esi
  int *p_abstractFlags; // ebp
  size_t v7; // eax
  int result; // eax
  int v9; // [esp+10h] [ebp-8Ch]
  char Src[20]; // [esp+14h] [ebp-88h] BYREF
  SHA1 v11; // [esp+28h] [ebp-74h] BYREF
  int v12; // [esp+40h] [ebp-5Ch]
  int v13; // [esp+44h] [ebp-58h]
  int v14; // [esp+48h] [ebp-54h]
  int v15; // [esp+4Ch] [ebp-50h]
  int v16; // [esp+50h] [ebp-4Ch]
  int v17; // [esp+54h] [ebp-48h]
  int v18; // [esp+58h] [ebp-44h]

  v9 = 16; /*0x66196c*/
  do /*0x661a48*/
  {
    if ( (a2 & 1) != 0 ) /*0x661995*/
    {
      v3 = (char *)&((unsigned int *)this)[0] + (uint8_t)((int)((unsigned int *)this)[0] / 8); /*0x661991*/
      *v3 ^= 1 << ((int)((unsigned int *)this)[0] & 7); /*0x66199e*/
    }
    v4 = (char *)((unsigned int *)this)[0] + 1; /*0x6619a4*/
    ((unsigned int *)this)[0] = v4; /*0x6619a6*/
    if ( v4 == (char *)2048 ) /*0x6619ae*/
    {
      v5 = 0; /*0x6619b4*/
      v11.__pad_0[0] = 0; /*0x6619b9*/
      v17 = 0; /*0x6619be*/
      v18 = 0; /*0x6619c2*/
      v12 = 1732584193; /*0x6619c6*/
      v13 = -271733879; /*0x6619ce*/
      v14 = -1732584194; /*0x6619d6*/
      v15 = 271733878; /*0x6619de*/
      v16 = -1009589776; /*0x6619e6*/
      p_abstractFlags = &((unsigned int *)this)[0]; /*0x6619ee*/
      do /*0x661a35*/
      {
        SHA1::Process(&v11, (int)&((unsigned int *)this)[0], 256); /*0x6619fa*/
        SHA1::Compute(&v11, Src); /*0x661a08*/
        v7 = 256 - v5; /*0x661a12*/
        if ( 256 - v5 > 0x14 ) /*0x661a17*/
          v7 = 20; /*0x661a19*/
        memcpy(p_abstractFlags, Src, v7); /*0x661a25*/
        ++v5; /*0x661a2d*/
        p_abstractFlags = (int *)((char *)p_abstractFlags + 1); /*0x661a2e*/
      }
      while ( v5 < 0x100 ); /*0x661a35*/
    }
    a2 >>= 1; /*0x661a3b*/
    result = --v9; /*0x661a43*/
  }
  while ( v9 ); /*0x661a48*/
  return result; /*0x661a4e*/

}

// ==== BACKFILL 0x00661A60  sub_661A60  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_661A60::sub_661A60(int a2)
{

  unsigned char *v3; // eax
  char *v4; // eax
  unsigned int v5; // esi
  int *p_abstractFlags; // ebp
  size_t v7; // eax
  bool v8; // zf
  int result; // eax
  int v10; // [esp+10h] [ebp-8Ch]
  char Src[20]; // [esp+14h] [ebp-88h] BYREF
  SHA1 v12; // [esp+28h] [ebp-74h] BYREF
  int v13; // [esp+40h] [ebp-5Ch]
  int v14; // [esp+44h] [ebp-58h]
  int v15; // [esp+48h] [ebp-54h]
  int v16; // [esp+4Ch] [ebp-50h]
  int v17; // [esp+50h] [ebp-4Ch]
  int v18; // [esp+54h] [ebp-48h]
  int v19; // [esp+58h] [ebp-44h]

  v10 = 32; /*0x661a6c*/
  do /*0x661b50*/
  {
    if ( (a2 & 1) != 0 ) /*0x661a95*/
    {
      v3 = (char *)&((unsigned int *)this)[0] + (uint8_t)((int)((unsigned int *)this)[0] / 8); /*0x661a91*/
      *v3 ^= 1 << ((int)((unsigned int *)this)[0] & 7); /*0x661a9e*/
    }
    v4 = (char *)((unsigned int *)this)[0] + 1; /*0x661aa4*/
    ((unsigned int *)this)[0] = v4; /*0x661aa6*/
    if ( v4 == (char *)2048 ) /*0x661aae*/
    {
      v5 = 0; /*0x661ab4*/
      v12.__pad_0[0] = 0; /*0x661ab9*/
      v18 = 0; /*0x661abe*/
      v19 = 0; /*0x661ac2*/
      v13 = 1732584193; /*0x661ac6*/
      v14 = -271733879; /*0x661ace*/
      v15 = -1732584194; /*0x661ad6*/
      v16 = 271733878; /*0x661ade*/
      v17 = -1009589776; /*0x661ae6*/
      p_abstractFlags = &((unsigned int *)this)[0]; /*0x661aee*/
      do /*0x661b35*/
      {
        SHA1::Process(&v12, (int)&((unsigned int *)this)[0], 256); /*0x661afa*/
        SHA1::Compute(&v12, Src); /*0x661b08*/
        v7 = 256 - v5; /*0x661b12*/
        if ( 256 - v5 > 0x14 ) /*0x661b17*/
          v7 = 20; /*0x661b19*/
        memcpy(p_abstractFlags, Src, v7); /*0x661b25*/
        ++v5; /*0x661b2d*/
        p_abstractFlags = (int *)((char *)p_abstractFlags + 1); /*0x661b2e*/
      }
      while ( v5 < 0x100 ); /*0x661b35*/
    }
    result = v10 - 1; /*0x661b44*/
    v8 = v10 == 1; /*0x661b44*/
    a2 >>= 1; /*0x661b45*/
    --v10; /*0x661b4c*/
  }
  while ( !v8 ); /*0x661b50*/
  return result; /*0x661b56*/

}

// ==== BACKFILL 0x00661B70  sub_661B70  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void * E4Recv_661B70::sub_661B70()
{

  int *p_abstractFlags; // ebx
  unsigned int v2; // esi
  int *v3; // edi
  size_t v4; // eax
  void *result; // eax
  char Src[20]; // [esp+Ch] [ebp-88h] BYREF
  SHA1 v7; // [esp+20h] [ebp-74h] BYREF
  int v8; // [esp+38h] [ebp-5Ch]
  int v9; // [esp+3Ch] [ebp-58h]
  int v10; // [esp+40h] [ebp-54h]
  int v11; // [esp+44h] [ebp-50h]
  int v12; // [esp+48h] [ebp-4Ch]
  int v13; // [esp+4Ch] [ebp-48h]
  int v14; // [esp+50h] [ebp-44h]

  p_abstractFlags = &((unsigned int *)this)[0]; /*0x661b7a*/
  v7.__pad_0[0] = 0; /*0x661b7e*/
  v13 = 0; /*0x661b82*/
  v14 = 0; /*0x661b86*/
  v8 = 1732584193; /*0x661b8a*/
  v9 = -271733879; /*0x661b92*/
  v10 = -1732584194; /*0x661b9a*/
  v11 = 271733878; /*0x661ba2*/
  v12 = -1009589776; /*0x661baa*/
  v2 = 0; /*0x661bb2*/
  v3 = &((unsigned int *)this)[0]; /*0x661bb4*/
  do /*0x661bfb*/
  {
    SHA1::Process(&v7, (int)p_abstractFlags, 256); /*0x661bc0*/
    SHA1::Compute(&v7, Src); /*0x661bce*/
    v4 = 256 - v2; /*0x661bd8*/
    if ( 256 - v2 > 0x14 ) /*0x661bdd*/
      v4 = 20; /*0x661bdf*/
    result = memcpy(v3, Src, v4); /*0x661beb*/
    ++v2; /*0x661bf3*/
    v3 = (int *)((char *)v3 + 1); /*0x661bf4*/
  }
  while ( v2 < 0x100 ); /*0x661bfb*/
  return result; /*0x661bfd*/

}

// ==== BACKFILL 0x00661F30  sub_661F30  cls=RocketLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_661F30::sub_661F30()
{

  *(unsigned int *)this->LocomotionClass = &vt_RocketLocomotionClass; /*0x661f30*/
  *(unsigned int *)&this->LocomotionClass[4] = &vt_RocketLocomotionClass; /*0x661f36*/
  LocomotionClass::Construct((LocomotionClass *)this); /*0x661f3d*/

}

// ==== BACKFILL 0x00661F50  JumpjetLocomotionClass::HasFieldStateChanged  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
BOOL JumpjetLocomotionClass::HasFieldStateChanged(unsigned int * a1)
{

  return ((unsigned int *)a1)[0] != dword_B04E38 || a1->TurnRate != dword_B04E3C || a1->Speed != dword_B04E40; /*0x661f7d*/

}

// ==== BACKFILL 0x00661F90  JumpjetLocomotionClass::CheckCompositeState_0  cls=RocketLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
bool JumpjetLocomotionClass::CheckCompositeState_0(int a1)
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00661F90.json)
}

// ==== BACKFILL 0x00661FB0  JumpjetLocomotionClass::GetCoordinate_0  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * JumpjetLocomotionClass::GetCoordinate_0(unsigned int * a1, unsigned int * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00661FB0.json)
}

// ==== BACKFILL 0x006620F0  BulletClass::ComputeImpactTrajectory  cls=BulletClass  sig=csp  renamed_refs=0  residual=- ====
int BulletClass::ComputeImpactTrajectory(int a1) {
  unsigned int *v4; // edx
  int v5; // ecx
  int v6; // eax
  int v7; // edi
  unsigned int *v8; // eax
  void *NeedsSaveOrLink; // ebx
  double v11; // [esp+0h] [ebp-38h]
  double v12; // [esp+0h] [ebp-38h]
  int v13; // [esp+18h] [ebp-20h]
  double v14; // [esp+18h] [ebp-20h]
  int v15; // [esp+24h] [ebp-14h]
  int v16; // [esp+28h] [ebp-10h] BYREF
  unsigned int v17[2]; // [esp+2Ch] [ebp-Ch] BYREF
  int v18; // [esp+34h] [ebp-4h]

  _ESI = this; /*0x6620fe*/
  v15 = *(unsigned int *)(a1 + 40); /*0x662107*/
  __asm { fld dword ptr [esi+54h] } /*0x66210b*/
  v4 = (char *)((unsigned int *)this)[0] + 156; /*0x66210e*/
  __asm { fstp [esp+38h+var_38]; double } /*0x662119*/
  v5 = *((unsigned int *)((unsigned int *)this)[0] + 40); /*0x66211c*/
  v17[0] = *v4; /*0x66211f*/
  v17[1] = v5; /*0x662123*/
  v18 = v4[2]; /*0x66212a*/
  Math::ArcTan2(v11); /*0x66212e*/
  __asm { fstp st } /*0x662144*/
  v13 = *(int16_t *)ProgressTimer::GetValue((ProgressTimer *)((char *)((unsigned int *)_ESI)[0] + 904), &v16) - 0x3FFF; /*0x662154*/
  __asm /*0x662158*/
  {
    fild dword ptr [esp+30h+var_20]
    fmul ds:dbl_7E2810
    fstp [esp+30h+var_20]
  }
  Math::SinCos(v14); /*0x662170*/
  __asm { fstp st } /*0x662177*/
  Math::ArcTan2(v14); /*0x662179*/
  __asm /*0x66217e*/
  {
    fstp st
    fld dword ptr [esi+54h]
  }
  __asm { fstp [esp+38h+var_38]; double }
  Math::SinCos(v12); /*0x662189*/
  __asm { fimul [esp+38h+var_14] } /*0x66218e*/
  __asm { fiadd [esp+30h+var_4] }
  IDA_LOWORD(v6) = Math::RoundToInt(a2); /*0x662199*/
  v7 = v6; /*0x66219e*/
  if ( v6 > (int)((unsigned int *)_ESI)[0] ) /*0x6621a5*/
  {
    v8 = (unsigned int *)(*(int (**)(void *))(*(unsigned int *)((unsigned int *)_ESI)[0] + 444))(((unsigned int *)_ESI)[0]); /*0x6621be*/
    if ( !v8 /*0x6621f1*/
      || (v8[80] & 0x100) == 0
      || (NeedsSaveOrLink = ((unsigned int *)_ESI)[0],
          *(void **)((*(int (**)(unsigned int *, unsigned int *))(*v8 + 72))(v8, v17) + 8) != NeedsSaveOrLink)
      || v7 > (int)NeedsSaveOrLink + dword_B04E6C )
    {
      if ( (*(int (**)(void *))(*(unsigned int *)((unsigned int *)_ESI)[0] + 456))(((unsigned int *)_ESI)[0]) > 0 ) /*0x662212*/
        return 0; /*0x662228*/
    }
  }
  TechnoClass::CalculateDamage(_ESI); /*0x662216*/
  return 1; /*0x6621b0*/
}

// ==== BACKFILL 0x00662240  sub_662240  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
double E4Recv_662240::sub_662240()
{

  int v1; // eax
  int v2; // edx
  double result; // st7
  double v5; // [esp+0h] [ebp-20h]
  double v6; // [esp+8h] [ebp-18h]
  int v7; // [esp+10h] [ebp-10h]
  char *v8; // [esp+1Ch] [ebp-4h]

  v1 = ((unsigned int *)this)[0] - *((unsigned int *)((unsigned int *)this)[0] + 39); /*0x66225b*/
  v2 = ((unsigned int *)this)[0] - *((unsigned int *)((unsigned int *)this)[0] + 40); /*0x662263*/
  v8 = (char *)((unsigned int *)this)[0] - *((unsigned int *)((unsigned int *)this)[0] + 41); /*0x662267*/
  v7 = v2 * v2 + v1 * v1; /*0x662277*/
  __asm /*0x66227b*/
  {
    fild [esp+20h+var_10]
    fstp [esp+20h+var_20]; double
  }
  Math::Sqrt(v5); /*0x662282*/
  __asm { fcom ds:dbl_7E2800 } /*0x662287*/
  __asm { fnstsw ax }
  if ( (_AX & 0x4100) != 0 ) /*0x662297*/
  {
    __asm /*0x6622b3*/
    {
      fstp st
      fld ds:dbl_7F0C10
    }
  }
  else
  {
    __asm { fild [esp+10h+var_4] } /*0x662299*/
    __asm
    {
      fdiv st, st(1)
      fstp [esp+18h+var_18]; double
      fstp st
    }
    Math::ArcTan(v6); /*0x6622a7*/
  }
  return result; /*0x6622af*/

}

// ==== BACKFILL 0x006632E0  JumpjetLocomotionClass::ComputeFloatExpression_3  cls=RocketLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::ComputeFloatExpression_3(int a1, int a2, int a3, int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006632E0.json)
}

// ==== BACKFILL 0x006633C0  nullsub_224  cls=RocketLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
void nullsub_224(int a1)
{
  ; /*0x6633c0*/
}

// ==== BACKFILL 0x006633D0  RocketLocomotionClass::ddtor  cls=RocketLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int RocketLocomotionClass::ddtor(int a1, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006633D0.json)
}

// ==== BACKFILL 0x00663410  RocketLocomotionClass::BeginMove  cls=RocketLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int RocketLocomotionClass::BeginMove(int * a1, int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00663410.json)
}

// ==== BACKFILL 0x00663460  JumpjetLocomotionClass::SmallStub_663460  cls=RocketLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::SmallStub_663460(int a1)
{

  return 3; /*0x663465*/

}

// ==== BACKFILL 0x006635B0  RocketLocomotionClass::StubReturn96  cls=RocketLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int RocketLocomotionClass::StubReturn96()
{

  return 96; /*0x6635b5*/

}

// ==== BACKFILL 0x006635C0  RocketLocomotionClass::ProcessMove  cls=RocketLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
RocketLocomotionClass * RocketLocomotionClass::ProcessMove(char a2, int a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006635C0.json)
}

// ==== BACKFILL 0x006638E0  sub_6638E0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_6638E0::sub_6638E0()
{

  ((unsigned int *)this)[0] = 0; /*0x6638e4*/
  ((unsigned int *)this)[0] = 0; /*0x6638e7*/
  LOBYTE(((unsigned int *)this)[0]) = 1; /*0x6638ea*/
  BYTE1(((unsigned int *)this)[0]) = 0; /*0x6638ee*/
  /* X11: vtable install elided (implicit via DynamicVectorClass virtuals 0x6638f1) */
  ((unsigned int *)this)[0] = 10; /*0x6638f7*/
  ((unsigned int *)this)[0] = 0; /*0x6638fe*/
  LOBYTE(((unsigned int *)this)[0]) = 0; /*0x663901*/
  ((unsigned int *)this)[0] = 0; /*0x663904*/
  return this; /*0x663907*/

}

// ==== BACKFILL 0x00663960  sub_663960  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_663960::sub_663960()
{

  int Count; // eax
  int v3; // ecx
  int v4; // eax
  void *Items; // eax

  while ( this->Count ) /*0x663966*/
  {
    __3_YAXPAX_Z(*(void **)this->Items); /*0x663971*/
    Count = this->Count; /*0x663976*/
    if ( Count > 0 ) /*0x66397e*/
    {
      v3 = Count - 1; /*0x663980*/
      v4 = 0; /*0x663983*/
      for ( this->Count = v3; v4 < this->Count; *(unsigned int *)(this->Items + 4 * v4 - 4) = *(unsigned int *)(this->Items + 4 * v4) ) /*0x66398a*/
        ++v4; /*0x66398f*/
    }
  }
  Items = (void *)this->Items; /*0x6639a3*/
  /* X11: vtable install elided (implicit via VectorClass virtuals 0x6639a6) */
  if ( Items && this->IsAllocated[0] ) /*0x6639b0*/
  {
    __3_YAXPAX_Z(Items); /*0x6639b6*/
    this->Items = 0; /*0x6639be*/
  }
  this->IsAllocated[0] = 0; /*0x6639c1*/
  this->Capacity = 0; /*0x6639c4*/

}

// ==== BACKFILL 0x00663CD0  sub_663CD0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_663CD0::sub_663CD0(unsigned char * a2)
{

  Network *v2; // edi
  char v5; // bl
  int uniqueId; // ecx
  int v7; // eax
  unsigned int *vtable1; // esi
  unsigned int *i; // edx
  int v10; // [esp+8h] [ebp-8h] BYREF

  v2 = (Network *)a2; /*0x663cd5*/
  if ( !a2 ) /*0x663cdd*/
    return -1; /*0x663ce0*/
  if ( ((Network *)((Network *)a2))->IsBroadcastAddr() ) /*0x663ceb*/
    return -1; /*0x663cf5*/
  v5 = 0; /*0x663d0c*/
  ((Network *)(v2))->CopyAddress(&a2, (int)&v10); /*0x663d0e*/
  uniqueId = ((unsigned int *)this)[0]; /*0x663d13*/
  v7 = 0; /*0x663d16*/
  if ( uniqueId > 0 ) /*0x663d1a*/
  {
    vtable1 = ((unsigned int *)this)[0]; /*0x663d1c*/
    for ( i = vtable1; v10 != *(unsigned int *)(*i + 33); ++i ) /*0x663d23*/
    {
      if ( ++v7 >= uniqueId ) /*0x663d32*/
        return 0; /*0x663d3d*/
    }
    return *(unsigned char *)(vtable1[v7] + 40); /*0x663d43*/
  }
  return v5; /*0x663cdf*/

}

// ==== BACKFILL 0x00664610  Process::WaitForExit  cls=Process  sig=csp  renamed_refs=0  residual=- ====
bool Process::WaitForExit(DWORD dwMilliseconds, char aP2)
{
    return false; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x664610)
}

// ==== BACKFILL 0x00664D20  HouseClass::InitTypeVectors  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
void* HouseClass::InitTypeVectors(int a1)
{
    (void)a1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00664D20.json)
}

// ==== BACKFILL 0x00667A30  RulesClass::DTOR  cls=RulesClass  sig=csp  renamed_refs=0  residual=- ====
int RulesClass::DTOR(void *a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00667A30.json)
}

// ==== BACKFILL 0x00668BF0  RulesClass::Addition  cls=RulesClass  sig=csp  renamed_refs=0  residual=- ====
int RulesClass::Addition() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 15 errs): wrong-universe gap2 body; truth func_0x668BF0.json */
}

// ==== BACKFILL 0x00668FB0  RulesClass::LoadSpecialWeapons  cls=RulesClass  sig=csp  renamed_refs=0  residual=- ====
int RulesClass::LoadSpecialWeapons() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 60 errs): wrong-universe gap2 body; truth func_0x668FB0.json */
}

// ==== BACKFILL 0x0066B900  ReadCrateRulesINI  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_66B900::ReadCrateRulesINI() {

  int result; // eax
  int v3; // ebx
  unsigned int *v4; // eax
  int v5; // ebx
  unsigned int *v6; // eax
  int v7; // ebx
  unsigned int *v8; // eax
  int v9; // ebx
  int Index; // eax
  int v11; // edx
  int Int_Overwrite; // eax
  int v13; // ecx
  double Coord; // st7
  int v15; // edx
  int v16; // eax
  int v17; // ebx
  int Alt; // eax
  int v19; // ecx
  int StringValue; // eax
  int v21; // edx
  int v22; // eax
  int v23; // ecx
  double v24; // [esp-Ch] [ebp-94h]
  char Destination[128]; // [esp+8h] [ebp-80h] BYREF
  int *v26; // [esp+8Ch] [ebp+4h]

  result = INIClass::BinarySearchSection((int)v26, (uint8_t *)aCraterules); /*0x66b919*/
  if ( result ) /*0x66b925*/
  {
    LOBYTE(this->ambientSoundController[1]) = INIClass::ReadBool_Overwrite( /*0x66b943*/
                                                v26,
                                                (uint8_t *)aCraterules,
                                                aFreemcv,
                                                this->ambientSoundController[1]);
    v3 = this->animation[0]; /*0x66b94c*/
    if ( INIClass::GetString( /*0x66b969*/
           (INIClass *)v26,
           (uint8_t *)aCraterules,
           aWoodcrateimg,
           &g_INI_DefaultBuffer,
           Destination,
           128) )
    {
      v4 = BuildingTypeClass::FindOrCreate2(Destination); /*0x66b976*/
    }
    else
    {
      v4 = (unsigned int *)v3; /*0x66b97d*/
    }
    v5 = this->animation[1]; /*0x66b97f*/
    this->animation[0] = (int)v4; /*0x66b98e*/
    if ( INIClass::GetString( /*0x66b9a7*/
           (INIClass *)v26,
           (uint8_t *)aCraterules,
           aCrateimg,
           &g_INI_DefaultBuffer,
           Destination,
           128) )
    {
      v6 = BuildingTypeClass::FindOrCreate2(Destination); /*0x66b9b4*/
    }
    else
    {
      v6 = (unsigned int *)v5; /*0x66b9bb*/
    }
    v7 = this->animation[2]; /*0x66b9bd*/
    this->animation[1] = (int)v6; /*0x66b9cc*/
    if ( INIClass::GetString( /*0x66b9e6*/
           (INIClass *)v26,
           (uint8_t *)aCraterules,
           aWatercrateimg,
           &g_INI_DefaultBuffer,
           Destination,
           128) )
    {
      v8 = BuildingTypeClass::FindOrCreate2(Destination); /*0x66b9f3*/
    }
    else
    {
      v8 = (unsigned int *)v7; /*0x66b9fa*/
    }
    this->animation[2] = (int)v8; /*0x66b9fc*/
    v9 = *((unsigned int *)this + 454); /*0x66ba08*/
    if ( !INIClass::GetString( /*0x66ba3a*/
            (INIClass *)v26,
            (uint8_t *)aCraterules,
            aHealcratesound,
            &g_INI_DefaultBuffer,
            Destination,
            128)
      || (Index = VocClass::FindIndex((VocClass *)Destination), Index == -1) )
    {
      Index = v9; /*0x66ba3c*/
    }
    v11 = *((unsigned int *)this + 1308); /*0x66ba3e*/
    *((unsigned int *)this + 454) = Index; /*0x66ba44*/
    Int_Overwrite = INIClass::ReadInt_Overwrite((bool *)v26, (uint8_t *)aCraterules, aCrateminimum, v11); /*0x66ba58*/
    v13 = *((unsigned int *)this + 1309); /*0x66ba5d*/
    *((unsigned int *)this + 1308) = Int_Overwrite; /*0x66ba63*/
    *((unsigned int *)this + 1309) = INIClass::ReadInt_Overwrite( /*0x66ba7d*/
                                 (bool *)v26,
                                 (uint8_t *)aCraterules,
                                 aCratemaximum,
                                 v13);
    Coord = INIClass::ReadCoord(v26, aCraterules, aCrateradius, *((unsigned int *)this + 1483)); /*0x66ba98*/
    v15 = *((unsigned int *)this + 1439); /*0x66ba9d*/
    *((unsigned int *)this + 1483) = v16; /*0x66baa3*/
    HIDWORD(v24) = v15; /*0x66bab5*/
    LODWORD(v24) = *((unsigned int *)this + 1438); /*0x66bab6*/
    INIClass::ReadDouble_Overwrite((double *)v26, (uint8_t *)aCraterules, aCrateregen, v24); /*0x66babf*/
    *((double *)this + 719) = Coord; /*0x66bac4*/
    v17 = *((unsigned int *)this + 1106); /*0x66bacf*/
    if ( INIClass::GetString( /*0x66baec*/
           (INIClass *)v26,
           (uint8_t *)aCraterules,
           aUnitcratetype,
           &g_INI_DefaultBuffer,
           Destination,
           128) )
    {
      Alt = BuildingTypeClass::FindOrCreateAlt(Destination); /*0x66baf9*/
    }
    else
    {
      Alt = v17; /*0x66bb00*/
    }
    v19 = *((unsigned int *)this + 1104); /*0x66bb02*/
    *((unsigned int *)this + 1106) = Alt; /*0x66bb08*/
    *((unsigned int *)this + 1104) = INIClass::ReadInt_Overwrite( /*0x66bb22*/
                                 (bool *)v26,
                                 (uint8_t *)aCraterules,
                                 aSolocratemoney,
                                 v19);
    StringValue = INIClass::ReadStringValue( /*0x66bb3d*/
                    (INIClass *)v26,
                    (uint8_t *)aCraterules,
                    aSilvercrate,
                    *((unsigned int *)this + 1305));
    v21 = *((unsigned int *)this + 1306); /*0x66bb42*/
    *((unsigned int *)this + 1305) = StringValue; /*0x66bb48*/
    v22 = INIClass::ReadStringValue((INIClass *)v26, (uint8_t *)aCraterules, aWoodcrate, v21); /*0x66bb5c*/
    v23 = *((unsigned int *)this + 1307); /*0x66bb61*/
    *((unsigned int *)this + 1306) = v22; /*0x66bb67*/
    result = INIClass::ReadStringValue((INIClass *)v26, (uint8_t *)aCraterules, aWatercrate, v23); /*0x66bb7c*/
    *((unsigned int *)this + 1307) = result; /*0x66bb82*/
    LOBYTE(result) = 1; /*0x66bb89*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x66bb96*/
  }
  return result; /*0x66bb88*/

}

// ==== BACKFILL 0x0066CF70  RulesClass::ReadCountryList  cls=RulesClass  sig=csp  renamed_refs=0  residual=- ====
int RulesClass::ReadCountryList() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 37 errs): wrong-universe gap2 body; truth func_0x66CF70.json */
}

// ==== BACKFILL 0x0066D1F0  RulesClass::readSpecialWeapons  cls=RulesClass  sig=csp  renamed_refs=0  residual=- ====
int RulesClass::readSpecialWeapons(void * aAlliedwalltran, void * aWallmodel, void * aWallpenetrator)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0066D1F0.json)
}

// ==== BACKFILL 0x0066D3A0  RulesClass::ReadColors  cls=RulesClass  sig=csp  renamed_refs=0  residual=- ====
int RulesClass::ReadColors(void * aColors)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0066D3A0.json)
}

// ==== BACKFILL 0x0066D480  RulesClass::ReadColorAdd  cls=RulesClass  sig=csp  renamed_refs=0  residual=- ====
int RulesClass::ReadColorAdd(void * aColoradd)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0066D480.json)
}
