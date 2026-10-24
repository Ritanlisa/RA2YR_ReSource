int __fastcall LightningStorm::Start(int a1, int a2, int a3, HouseClass *a4)
{
  int result; // eax
  __int16 v7; // si
  int v8; // esi
  int v9; // ecx
  int v10; // esi
  wchar_t *StringCSF; // eax
  int v12; // [esp+Ch] [ebp-4h]

  result = a3;
  if ( a3 == dword_A9F9F8 )
  {
    for ( ; !(unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&dword_87F7E8, (__int16 *)&a3); a3 = v12 )
    {
      v7 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, dword_87F918);
      LOWORD(v12) = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, dword_87F914);
      HIWORD(v12) = v7;
    }
    result = a3;
  }
  LightningStorm_Coords = result;
  LightningStorm_Owner = a4;
  if ( !LightningStorm_Active )
  {
    if ( a2 )
    {
      result = LightningStorm_Deferment;
      if ( !LightningStorm_Deferment || LightningStorm_Deferment >= a2 )
        LightningStorm_Deferment = a2;
      LightningStorm_Duration = a1;
    }
    else
    {
      CreateTriggerClassIfFarEnough(13, a2, result);
      v8 = 0;
      LightningStorm_Duration = a1;
      LightningStorm_StartTime = *(_DWORD *)&stru_A8E960.random[528];
      for ( LightningStorm_Active = 1; v8 < dword_A80238; ++v8 )
      {
        if ( !LightningStorm_Owner || !(unsigned __int8)HouseClass::IsAlliedWith(LightningStorm_Owner) )
        {
          v9 = *(&dword_A8022C->vfptr + v8);
          if ( !*(_BYTE *)(v9 + 501) && !dword_A8B538[0] )
            HouseClass::CreateRadarOutage(v9, a1);
        }
      }
      if ( *(int *)((char *)&stru_A83CD9.estimatedHealth + 3) )
        *(_BYTE *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 22393) = 1;
      ScenarioClass::UpdateLighting();
      if ( LOBYTE(dword_8871E0->RadApplicationDelay) )
      {
        v10 = 3;
        if ( *(int *)((char *)&stru_A83CD9.estimatedHealth + 3) )
          v10 = *(_DWORD *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 90196);
        PlayVocClass(*(_DWORD *)&dword_8871E0->__pad_704[44], 0x2000u, 1.0, 0);
        StringCSF = GetStringCSF(aTxtLightningSt, 0, g_Str_File_Ion_cpp, 531);
        MessageListClass::AddMessage(&unk_A8BC60, 0, 0, StringCSF, v10, 16454, 150, 0);
      }
      return MapClass::MarkForRedraw((GScreenClass *)&dword_87F7E8, 1);
    }
  }
  return result;
}
