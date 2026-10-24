int __thiscall TagClass::Destructor(TagClass *this)
{
  Debug *buildingType; // ecx
  int v3; // eax
  TagClass **v4; // ecx
  int v5; // ecx
  Debug *v6; // ecx
  int v7; // eax
  TagClass **v8; // ecx
  int v9; // ecx
  int firstTrigger; // eax
  int v11; // eax
  int Owner; // eax
  int v13; // ecx
  _DWORD *v14; // eax
  int v15; // esi
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  _DWORD v22[4]; // [esp+10h] [ebp-10h] BYREF

  this->vfptr = (int)&TagClass::`vftable';
  this->vfptr1 = (int)&TagClass::`vftable';
  this->vfptr2 = (int)&TagClass::`vftable';
  this->vfptr3 = (int)&TagClass::`vftable';
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)this, 1);
  if ( stru_A8E960.nextScenario[64] )
  {
    if ( stru_A8E960.random[488] )
    {
      buildingType = (Debug *)this->buildingType;
      if ( buildingType )
      {
        if ( (Debug::AccumFlags(buildingType) & 0x10) != 0 )
        {
          v3 = 0;
          if ( dword_8B40D8 <= 0 )
          {
LABEL_9:
            v3 = -1;
          }
          else
          {
            v4 = (TagClass **)dword_8B40CC;
            while ( *v4 != this )
            {
              ++v3;
              ++v4;
              if ( v3 >= dword_8B40D8 )
                goto LABEL_9;
            }
          }
          v5 = *(int *)((char *)&stru_A83CD9.vfptr + 3);
          if ( *(int *)((char *)&stru_A83CD9.vfptr + 3) >= v3 )
          {
            --*(int *)((char *)&stru_A83CD9.vfptr + 3);
            if ( v5 - 1 < 0 && !dword_8B40D8 )
              *(int *)((char *)&stru_A83CD9.vfptr + 3) = 0;
          }
        }
      }
    }
    if ( stru_A8E960.nextScenario[64] )
    {
      if ( stru_A8E960.random[488] )
      {
        v6 = (Debug *)this->buildingType;
        if ( v6 )
        {
          if ( (Debug::AccumFlags(v6) & 4) != 0 )
          {
            v7 = 0;
            if ( dword_8B41B8 <= 0 )
            {
LABEL_22:
              v7 = -1;
            }
            else
            {
              v8 = (TagClass **)dword_8B41AC;
              while ( *v8 != this )
              {
                ++v7;
                ++v8;
                if ( v7 >= dword_8B41B8 )
                  goto LABEL_22;
              }
            }
            v9 = dword_A83DBC;
            if ( dword_A83DBC >= v7 )
            {
              --dword_A83DBC;
              if ( v9 - 1 < 0 && !dword_8B41B8 )
                dword_A83DBC = 0;
            }
          }
        }
      }
      if ( stru_A8E960.nextScenario[64] )
      {
        if ( stru_A8E960.random[488] )
        {
          firstTrigger = this->firstTrigger;
          if ( firstTrigger )
          {
            v11 = *(_DWORD *)(firstTrigger + 36);
            if ( v11 )
            {
              if ( *(_DWORD *)(v11 + 164) && TagClass::HasValidHouse((TagClass *)this->buildingType) )
              {
                Owner = HouseClass::FindOwner(*(HouseClass **)(*(_DWORD *)(*(_DWORD *)(this->firstTrigger + 36) + 164)
                                                             + 184));
                v13 = *(_DWORD *)(Owner + 636);
                if ( v13 )
                  *(_DWORD *)(Owner + 636) = v13 - 1;
                v14 = (_DWORD *)(Owner + 664);
                *v14 = *(_DWORD *)&stru_A8E960.random[528];
                v14[1] = v22[2];
                v14[2] = 60;
              }
            }
          }
        }
      }
    }
  }
  v15 = this->firstTrigger;
  if ( v15 )
  {
    v16 = dword_B0F6A0;
    do
    {
      if ( dword_B0F6A8 < v16 )
        goto LABEL_43;
      if ( !byte_B0F6A5 && v16 || dword_B0F6AC <= 0 )
        goto LABEL_45;
      if ( (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(stru_B0F670.DynamicVector_field_0x28 + 8))(
             &stru_B0F670.DynamicVector_field_0x28,
             v16 + dword_B0F6AC,
             0) )
      {
LABEL_43:
        v17 = dword_B0F6A8++;
        *((_DWORD *)dword_B0F69C + v17) = v15;
      }
      v16 = dword_B0F6A0;
LABEL_45:
      v15 = *(_DWORD *)(v15 + 40);
    }
    while ( v15 );
  }
  v22[0] = this;
  v18 = (*(int (__thiscall **)(DynamicVector *, _DWORD *))(*(_DWORD *)stru_B0F670.__pad_0 + 16))(&stru_B0F670, v22);
  if ( v18 != -1 && v18 < stru_B0F670.DynamicVector_field_0x10 )
  {
    --stru_B0F670.DynamicVector_field_0x10;
    for ( ;
          v18 < stru_B0F670.DynamicVector_field_0x10;
          *(_DWORD *)(*(_DWORD *)&stru_B0F670.DynamicVector_field_0x1[3] + 4 * v18 - 4) = *(_DWORD *)(*(_DWORD *)&stru_B0F670.DynamicVector_field_0x1[3] + 4 * v18) )
    {
      ++v18;
    }
  }
  v22[0] = this;
  v19 = (*(int (__thiscall **)(int *, _DWORD *))(dword_B0F708 + 16))(&dword_B0F708, v22);
  if ( v19 != -1 && v19 < dword_B0F718 && v19 < --dword_B0F718 )
  {
    do
    {
      ++v19;
      *((_DWORD *)dword_B0F70C + v19 - 1) = *((_DWORD *)dword_B0F70C + v19);
    }
    while ( v19 < dword_B0F718 );
  }
  v22[0] = this;
  v20 = (*(int (__thiscall **)(int *, _DWORD *))(TagClass_Array + 16))(&TagClass_Array, v22);
  if ( v20 != -1 && v20 < g_GameObjectCleanup && v20 < --g_GameObjectCleanup )
  {
    do
    {
      ++v20;
      *((_DWORD *)g_TagClassCount + v20 - 1) = *((_DWORD *)g_TagClassCount + v20);
    }
    while ( v20 < g_GameObjectCleanup );
  }
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)this, 1);
  return AbstractClass::DTOR((AbstractClass *)this);
}
