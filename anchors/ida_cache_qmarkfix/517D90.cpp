int __thiscall InfantryClass::Destruct(InfantryClass *this)
{
  AbstractClass *p_vfptr1; // edi
  int Type; // eax
  int *team; // ecx
  int slaveOwner; // eax
  SlaveManagerClass *v6; // eax
  int v7; // eax
  int Vtable3; // eax
  int v9; // edx
  int v10; // edi
  int v11; // eax
  int v12; // eax
  signed int v13; // ecx
  size_t i; // eax
  _DWORD *v15; // eax
  int v17[2]; // [esp+Ch] [ebp-8h] BYREF

  p_vfptr1 = (AbstractClass *)&this->vfptr1;
  this->vfptr = (int)&InfantryClass::`vftable';
  this->vfptr2 = (int)&InfantryClass::`vftable';
  this->vfptr3 = (int)&off_7EB02C;
  this->vfptr1 = (int)&InfantryClass::`vftable';
  if ( stru_A8E960.nextScenario[64] )
  {
    Type = this->Type;
    if ( Type )
    {
      if ( HouseClass::CanBuild((HouseClass *)this->owner, Type, 0, 0) == -1 )
        *(_BYTE *)(this->owner + 508) = 1;
      team = (int *)this->team;
      if ( team )
      {
        TeamClass::LiberateMember_Start(team, (int)this, 0xFFFFFFFF, 0);
        this->team = 0;
      }
      slaveOwner = this->slaveOwner;
      if ( slaveOwner )
      {
        v6 = *(SlaveManagerClass **)(slaveOwner + 728);
        if ( v6 )
          SlaveManagerClass::LostSlave(v6, (int)this);
      }
      HouseClass::DecrementUnitCount((HouseClass *)this->owner, this);
      if ( !this->locomotor )
        sub_7DC720(-2147467261);
      (*(void (__stdcall **)(int))(*(_DWORD *)this->locomotor + 172))(this->locomotor);
      this->unknown_int_6E8 = 2;
      this->Crawling[0] = 0;
      this->SequenceAnim = 0;
      TechnoClass::CleanupDirection((FootClass *)this);
    }
  }
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)this, 1);
  v17[0] = (int)this;
  v7 = (*(int (__thiscall **)(int *, int *))(dword_A83DE8 + 16))(&dword_A83DE8, v17);
  if ( v7 != -1 && v7 < dword_A83DF8 && v7 < --dword_A83DF8 )
  {
    do
    {
      ++v7;
      *((_DWORD *)dword_A83DEC + v7 - 1) = *((_DWORD *)dword_A83DEC + v7);
    }
    while ( v7 < dword_A83DF8 );
  }
  Vtable3 = AbstractClass::GetVtable3(p_vfptr1);
  v9 = NumOfElements;
  v10 = Vtable3;
  if ( NumOfElements )
  {
    if ( !byte_B0E84C )
    {
      qsort(
        (void *)g_BuildingLoadQueue_Array.vfptr,
        NumOfElements,
        8u,
        (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction);
      v9 = NumOfElements;
      dword_B0E850 = 0;
      byte_B0E84C = 1;
    }
    v17[0] = v10;
    v11 = BinaryArraySearch(g_BuildingLoadQueue_Array.vfptr, v9, v17);
    if ( v11 )
    {
      v12 = (v11 - g_BuildingLoadQueue_Array.vfptr) >> 3;
      if ( v12 != -1 )
      {
        v13 = v12 + 1;
        for ( i = NumOfElements; v13 < (int)NumOfElements; i = NumOfElements )
        {
          v15 = (_DWORD *)(g_BuildingLoadQueue_Array.vfptr + 8 * v13++);
          *(v15 - 2) = *v15;
          *(v15 - 1) = v15[1];
        }
        NumOfElements = i - 1;
        *(_DWORD *)(g_BuildingLoadQueue_Array.vfptr + 8 * NumOfElements) = 0;
        *(_DWORD *)(g_BuildingLoadQueue_Array.vfptr + 8 * NumOfElements + 4) = 0;
        dword_B0E850 = 0;
      }
    }
  }
  this->isAliveFlag[0] = 0;
  return FootClass::Destruct((FootClass *)this);
}
