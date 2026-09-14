// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x76E180
namespace ra2 {
namespace game {
void ObjectClass::ShowWDTTerritorySelection_Show()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall ShowWDTTerritorySelection_Show(ObjectClass *this)
{
  int v2; // eax
  wchar_t *StringCSF; // eax
  ObjectClass *v4; // [esp+4h] [ebp-10h] BYREF
  ObjectClass *v5; // [esp+8h] [ebp-Ch] BYREF
  int *v6; // [esp+Ch] [ebp-8h]
  int v7; // [esp+10h] [ebp-4h]

  v2 = *((_DWORD *)this + 279); /*0x76e186*/
  if ( !*(_BYTE *)(v2 + 104) ) /*0x76e18c*/
  {
    WDTGame::ToggleTeamMode(v2, this, (ObjectClass *)1); /*0x76e19c*/
    String::Assign((char **)&v4, aMousecancel); /*0x76e1aa*/
    if ( String::NotEquals((const char **)&v4, 0) ) /*0x76e1b5*/
    {
      v7 = 0; /*0x76e1c8*/
      v6 = (int *)((char *)this + 1172); /*0x76e1d0*/
      v5 = (ObjectClass *)&vt_VectorCursor_MSSfxEntry_DynamicVectorClass_MSSfxEntry; /*0x76e1d8*/
      if ( Vector::HasCapacity(&v5) ) /*0x76e1e0*/
      {
        do /*0x76e219*/
        {
          if ( !String::Compare((const char **)&v4, *(const char ***)(v6[1] + 4 * v7)) ) /*0x76e1fd*/
            break; /*0x76e204*/
          (*(void (__thiscall **)(ObjectClass **))&v5->__pad_0[8])(&v5); /*0x76e20e*/
        }
        while ( (*(unsigned __int8 (__thiscall **)(ObjectClass **))&v5->__pad_0[4])(&v5) ); /*0x76e219*/
      }
      if ( (*(unsigned __int8 (__thiscall **)(ObjectClass **))&v5->__pad_0[4])(&v5) ) /*0x76e228*/
        nullsub_24(); /*0x76e23d*/
    }
    DeleteAndZero((void **)&v4); /*0x76e246*/
    StringCSF = GetStringCSF(aWolWdtterritor, 0, g_Str_File_WDTSel_cpp, 894); /*0x76e25c*/
    WideString::Assign((wchar_t **)&v4, (CampaignScore *)StringCSF); /*0x76e266*/
    ScoreText::Show((int *)this->__pad_0, (ObjectClass *)&v4); /*0x76e272*/
    DeleteAndZero::Alt((void **)&v4); /*0x76e27b*/
  }
}
}
} // namespace game
} // namespace ra2
