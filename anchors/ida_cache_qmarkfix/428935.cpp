int __stdcall AnimTypeClass::SaveLoad_Prefix(AnimTypeClass *this, int a2)
{
  int result; // eax
  char Buffer[513]; // [esp+7h] [ebp-201h] BYREF

  result = ObjectTypeClass::LoadCleanup((ObjectTypeClass *)this, a2);
  if ( result >= 0 )
  {
    if ( this )
    {
      ObjectTypeClass::Construct((ObjectTypeClass *)this, (int)Buffer);
      this->vfptr = (int)&AnimTypeClass::`vftable';
      this->vfptr1 = (int)&AnimTypeClass::`vftable';
      this->vfptr2 = (int)&AnimTypeClass::`vftable';
      this->vfptr3 = (int)&AnimTypeClass::`vftable';
    }
    VoxelAnimType::LoadAnim((char *)this);
    ObjectTypeClass::Load2DArt((char *)this);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->Next);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->ExpireAnim);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->TrailerAnim);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->BounceAnim);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->Spawns);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->Warhead);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->TiberiumSpawnType);
    if ( !this->DemandLoad[0] )
    {
      if ( this->Theater[0] )
      {
        _makepath(&Buffer[1], 0, 0, this->__pad_24, (const char *)&off_7E1BC6 + 112 * dword_A8B230[130].uniqueId);
        this->Image = (int)SearchMIXFile(&Buffer[1], 1);
        return 0;
      }
      if ( this->NewTheater[0] )
        (*(void (__thiscall **)(AnimTypeClass *, int))(this->vfptr + 160))(this, dword_A8B230[130].uniqueId);
    }
    return 0;
  }
  return result;
}
