int __stdcall OverlayTypeClass::SaveLoad_Prefix(OverlayTypeClass *this, int a2)
{
  int result; // eax
  char Buffer[513]; // [esp+7h] [ebp-201h] BYREF

  result = ObjectTypeClass::LoadCleanup((ObjectTypeClass *)this, a2);
  if ( result >= 0 )
  {
    if ( this )
    {
      ObjectTypeClass::Construct((ObjectTypeClass *)this, (int)Buffer);
      this->vfptr = (int)&OverlayTypeClass::`vftable';
      this->vfptr1 = (int)&OverlayTypeClass::`vftable';
      this->vfptr2 = (int)&OverlayTypeClass::`vftable';
      this->vfptr3 = (int)&OverlayTypeClass::`vftable';
    }
    VoxelAnimType::LoadAnim((char *)this);
    ObjectTypeClass::Load2DArt((char *)this);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->DamageLevels);
    if ( !this->DrawFlat[0] )
    {
      if ( this->Theater[0] )
      {
        _makepath(&Buffer[1], 0, 0, this->ImageFile, (const char *)&off_7E1BC6 + 112 * dword_A8B230[130].uniqueId);
      }
      else
      {
        _makepath(&Buffer[1], 0, 0, this->ImageFile, Ext);
        TheaterObjectTypeClassSpecificID(&Buffer[1], dword_A8B230[130].uniqueId);
      }
      if ( !this->Image )
        this->Image = (int)SearchMIXFile(&Buffer[1], 1);
    }
    return 0;
  }
  return result;
}
