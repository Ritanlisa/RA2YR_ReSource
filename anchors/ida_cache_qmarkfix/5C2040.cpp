char __thiscall MPCooperative::StartGame(
        MPCooperative *this,
        int a2,
        void **a3,
        void *Block,
        int a5,
        __int16 a6,
        int a7,
        int a8,
        char *a9,
        char *a10)
{
  int *MPCooperative_field_0x40; // ecx
  void *v13; // eax
  DynamicVectorClass v14; // [esp-20h] [ebp-2Ch] BYREF
  char *v15; // [esp-8h] [ebp-14h]
  char *v16; // [esp-4h] [ebp-10h]
  int v17; // [esp+8h] [ebp-4h] BYREF

  if ( !this->MPCooperative_field_0x40 )
  {
    MovieClass::Create((MovieClass *)this);
    LOBYTE(this->MPCooperative_field_0x340) = 1;
  }
  MPCooperative_field_0x40 = (int *)this->MPCooperative_field_0x40;
  if ( MPCooperative_field_0x40 )
  {
    Movie::GetSectionID(MPCooperative_field_0x40, &v17);
    if ( v17 != a2 )
      LOBYTE(this->MPCooperative_field_0x340) = 1;
    v16 = a10;
    v15 = a9;
    DynamicVectorClass::Copy(&v14, &a3);
    DecodeCampaignPlayerName(
      this->MPCooperative_field_0x40,
      a2,
      v14.vfptr,
      (void *)v14.Items,
      v14.Capacity,
      *(__int16 *)v14.IsInitialized,
      v14.Count,
      v14.CapacityIncrement,
      v15,
      v16);
    v13 = Block;
    this->MPCooperative_field_0x33C = a2;
    a3 = &VectorClass<int>::`vftable';
    if ( v13 && HIBYTE(a6) )
      __3_YAXPAX_Z(v13);
    return 1;
  }
  else
  {
    a3 = &VectorClass<int>::`vftable';
    if ( Block )
    {
      if ( HIBYTE(a6) )
        __3_YAXPAX_Z(Block);
    }
    return 0;
  }
}
