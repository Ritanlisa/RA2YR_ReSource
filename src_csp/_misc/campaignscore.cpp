#include "campaignscore.hpp"

char  CampaignScore::LoadCampaignScoreAssetsGame(void *this)
{
    char result; // al
    char *v3; // ecx
    result = byte_B0FBAC;
    if ( !byte_B0FBAC )
    CampaignScore::LoadScreenAssets(this);
    if ( this )
    v3 = off_844BCC[0];
    if ( this != (void *)1 )
    v3 = off_844BD0;
    else
    v3 = off_844BC8[0];
    result = LoadPaletteSimple(v3, &dword_B0FBA4, &dword_B0FBA8);
    byte_B0FBAC = 1;
    return result;
}

