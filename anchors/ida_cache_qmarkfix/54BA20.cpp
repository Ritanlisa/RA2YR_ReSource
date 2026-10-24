char __thiscall HouseClass::Set(HouseClass *this)
{
  _DWORD *v2; // eax
  _DWORD *Value; // eax
  int relatedTags; // ecx
  int v6; // [esp+Ch] [ebp-4h] BYREF

  LOBYTE(v2) = (*(int (__stdcall **)(int *))(this->vfptr1 + 16))(&this->vfptr1);
  if ( (_BYTE)v2 )
  {
    (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)this->vfptr3 + 1348))(this->vfptr3, 0, 1072693248);
    Value = ProgressTimer::GetValue((ProgressTimer *)(this->vfptr3 + 904), &v6);
    FacingClass::Set_SyncLog((char *)&this->repairStationsCount, Value);
    relatedTags = this->relatedTags;
    this->absorbersCapacity = 0;
    this->bunkersCount = 0;
    this->bunkers = 0;
    this->bunkersCapacity = 0;
    this->occupiables = relatedTags;
    LOBYTE(v2) = HouseClass::IonSensitivesShouldBeOffline();
    if ( !(_BYTE)v2 )
    {
      v2 = (_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)this->vfptr3 + 756))(this->vfptr3, &v6);
      if ( *v2 == dword_ABC588 )
        LOBYTE(v2) = GadgetGrid::InsertItem((GadgetGrid *)&g_CellClassManager, this->vfptr3);
      this->unitRepairStations = 1;
    }
  }
  return (char)v2;
}
