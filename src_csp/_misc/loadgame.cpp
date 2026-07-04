#include "loadgame.hpp"

char  LoadGame::Start(LPSTREAM pStm)
{
    char result; // al
    int *Viewport; // edx
    int v4; // eax
    int v5; // ecx
    int v6; // eax
    int v7; // edx
    int v8; // ebp
    int v9; // ebp
    int v10; // ebp
    int v11; // ebp
    int v12; // ebp
    int v13; // ebp
    int v14; // ebp
    int v15; // ebp
    int v16; // ebp
    int v17; // ebp
    int v18; // ebp
    int v19; // ebp
    int v20; // ebp
    int v21; // ebp
    int v22; // ebp
    int v23; // ebp
    int v24; // ebp
    int v25; // ebp
    int v26; // ebp
    int v27; // ebp
    int v28; // ebp
    int v29; // ebp
    int v30; // ebp
    int v31; // ebp
    int v32; // ebp
    int v33; // ebp
    int v34; // ebp
    int v35; // ebp
    int v36; // ebp
    int v37; // ebp
    int v38; // ebp
    int v39; // ebp
    int v40; // ebp
    int v41; // ebp
    int v42; // ebp
    int v43; // ebp
    int v44; // ebp
    int v45; // ebp
    int v46; // ebp
    int v47; // ebp
    int v48; // ebp
    int v49; // ebp
    int v50; // ebp
    int v51; // ebp
    int v52; // ebp
    int v53; // ebp
    int v54; // ebp
    int v55; // edi
    int v56; // eax
    int v57; // eax
    int v58; // edi
    int v59; // ebp
    int v60; // edi
    int v61; // eax
    int v62; // eax
    int v63; // edi
    int v64; // [esp+330h] [ebp-4Ch] BYREF
    LPVOID ppvObj; // [esp+334h] [ebp-48h] BYREF
    LPVOID v66; // [esp+338h] [ebp-44h] BYREF
    uint32_t v67[4]; // [esp+33Ch] [ebp-40h] BYREF
    uint32_t v68[4]; // [esp+34Ch] [ebp-30h] BYREF
    int v69[4]; // [esp+35Ch] [ebp-20h] BYREF
    int v70[4]; // [esp+36Ch] [ebp-10h] BYREF
    ResetScenario();
    ScenarioClass::SaveLoad_Prefix_0((int)ScenarioClass_Instance, (int)pStm);
    g_GameActive = *((uint8_t *)ScenarioClass_Instance + 13730);
    result = MixFile::LoadSide(*((uint32_t *)ScenarioClass_Instance + 3374));
    if ( result )
    Viewport = Display::GetViewport(v69);
    v67[0] = 0;
    v4 = *Viewport;
    v67[1] = 0;
    v70[0] = v4;
    v68[0] = 0;
    v5 = Viewport[1];
    v68[1] = 0;
    v70[1] = v5;
    v6 = Viewport[2];
    v67[2] = 168;
    v70[2] = v6;
    v7 = Viewport[3];
    v68[2] = v6;
    v70[3] = v7;
    v69[2] = v6;
    v67[3] = g_CreditsScreenConfig;
    v68[3] = g_CreditsScreenConfig;
    v69[3] = g_CreditsScreenConfig;
    v69[0] = 0;
    v69[1] = 0;
    AllocateSurfaceScreenSurfaces((int)&DSurface_WindowBounds, (int)v69, (int)v68, (int)v67, 0);
    TacticalClass::SetViewDimensions(v70);
    LoadGame::LoadBlock68(&byte_8A38E0, (int)pStm);
    LoadTheaterClassMIX(*((uint32_t *)ScenarioClass_Instance + 1174));
    RulesClass::SaveLoad_Prefix_0(&RulesClass_Instance->DetailMinFrameRateNormal, (int)pStm);
    if ( pStm->lpVtbl->Read(pStm, &v64, 4, 0) < 0 )
    return 0;
    v8 = 0;
    if ( v64 > 0 )
    while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
    if ( ++v8 >= v64 )
    goto LABEL_6;
    return 0;
    LABEL_6:
    MouseClass::LoadGameAssets((int *)&MapClass_Instance, pStm);
    if ( pStm->lpVtbl->Read(pStm, &v64, 4, 0) < 0 )
    return 0;
    v9 = 0;
    if ( v64 > 0 )
    while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
    if ( ++v9 >= v64 )
    goto LABEL_10;
    return 0;
    LABEL_10:
    if ( Game::SerializeGameSaveState(pStm) < 0 )
    return 0;
    MapClass::BuildSubzones(&MapClass_Instance);
    LayerClass::Load(&g_GameConfigManager, pStm);
    if ( TacticalClass_Instance )
    ((void (__thiscall *)(LPPERSISTSTREAM, int))TacticalClass_Instance->lpVtbl[1].QueryInterface)(
    TacticalClass_Instance,
    1);
    TacticalClass_Instance = 0;
    if ( OleLoadFromStream(pStm, &IID_IUnknown, &v66) < 0 )
    return 0;
    if ( pStm->lpVtbl->Read(pStm, &v64, 4, 0) < 0 )
    return 0;
    v10 = 0;
    if ( v64 > 0 )
    while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
    if ( ++v10 >= v64 )
    goto LABEL_20;
    return 0;
    LABEL_20:
    if ( pStm->lpVtbl->Read(pStm, &v64, 4, 0) < 0 )
    return 0;
    v11 = 0;
    if ( v64 > 0 )
    while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
    if ( ++v11 >= v64 )
    goto LABEL_24;
    return 0;
    LABEL_24:
    if ( pStm->lpVtbl->Read(pStm, &v64, 4, 0) < 0 )
    return 0;
    v12 = 0;
    if ( v64 > 0 )
    while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
    if ( ++v12 >= v64 )
    goto LABEL_28;
    return 0;
    LABEL_28:
    if ( pStm->lpVtbl->Read(pStm, &v64, 4, 0) < 0 )
    return 0;
    v13 = 0;
    if ( v64 > 0 )
    while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
    if ( ++v13 >= v64 )
    goto LABEL_32;
    return 0;
    LABEL_32:
    if ( pStm->lpVtbl->Read(pStm, &v64, 4, 0) < 0 )
    return 0;
    v14 = 0;
    if ( v64 > 0 )
    while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
    if ( ++v14 >= v64 )
    goto LABEL_36;
    return 0;
    LABEL_36:
    if ( pStm->lpVtbl->Read(pStm, &v64, 4, 0) < 0 )
    return 0;
    v15 = 0;
    if ( v64 > 0 )
    while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
    if ( ++v15 >= v64 )
    goto LABEL_40;
    return 0;
    LABEL_40:
    if ( pStm->lpVtbl->Read(pStm, &v64, 4, 0) < 0 )
    return 0;
    v16 = 0;
    if ( v64 > 0 )
    while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
    if ( ++v16 >= v64 )
    goto LABEL_44;
    return 0;
    LABEL_44:
    if ( pStm->lpVtbl->Read(pStm, &v64, 4, 0) < 0 )
    return 0;
    v17 = 0;
    if ( v64 > 0 )
    while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
    if ( ++v17 >= v64 )
    goto LABEL_48;
    return 0;
    LABEL_48:
    if ( pStm->lpVtbl->Read(pStm, &v64, 4, 0) < 0 )
    return 0;
    v18 = 0;
    if ( v64 > 0 )
    while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
    if ( ++v18 >= v64 )
    goto LABEL_52;
    return 0;
    LABEL_52:
    if ( pStm->lpVtbl->Read(pStm, &v64, 4, 0) < 0 )
    return 0;
    v19 = 0;
    if ( v64 > 0 )
    while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
    if ( ++v19 >= v64 )
    goto LABEL_56;
    return 0;
    LABEL_56:
    if ( pStm->lpVtbl->Read(pStm, &v64, 4, 0) < 0 )
    return 0;
    v20 = 0;
    if ( v64 > 0 )
    while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
    if ( ++v20 >= v64 )
    goto LABEL_60;
    return 0;
    LABEL_60:
    if ( pStm->lpVtbl->Read(pStm, &v64, 4, 0) < 0 )
    return 0;
    v21 = 0;
    if ( v64 > 0 )
    while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
    if ( ++v21 >= v64 )
    goto LABEL_64;
    return 0;
    LABEL_64:
    if ( pStm->lpVtbl->Read(pStm, &v64, 4, 0) < 0 )
    return 0;
    v22 = 0;
    if ( v64 > 0 )
    while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
    if ( ++v22 >= v64 )
    goto LABEL_68;
    return 0;
    LABEL_68:
    if ( pStm->lpVtbl->Read(pStm, &v64, 4, 0) < 0 )
    return 0;
    v23 = 0;
    if ( v64 > 0 )
    while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
    if ( ++v23 >= v64 )
    goto LABEL_72;
    return 0;
    LABEL_72:
    if ( pStm->lpVtbl->Read(pStm, &v64, 4, 0) < 0 )
    return 0;
    v24 = 0;
    if ( v64 > 0 )
    while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
    if ( ++v24 >= v64 )
    goto LABEL_76;
    return 0;
    LABEL_76:
    if ( pStm->lpVtbl->Read(pStm, &v64, 4, 0) < 0 )
    return 0;
    v25 = 0;
    if ( v64 > 0 )
    while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
    if ( ++v25 >= v64 )
    goto LABEL_80;
    return 0;
    LABEL_80:
    if ( pStm->lpVtbl->Read(pStm, &v64, 4, 0) < 0 )
    return 0;
    v26 = 0;
    if ( v64 > 0 )
    while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
    if ( ++v26 >= v64 )
    goto LABEL_84;
    return 0;
    LABEL_84:
    if ( pStm->lpVtbl->Read(pStm, &v64, 4, 0) < 0 )
    return 0;
    v27 = 0;
    if ( v64 > 0 )
    while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
    if ( ++v27 >= v64 )
    goto LABEL_88;
    return 0;
    LABEL_88:
    if ( pStm->lpVtbl->Read(pStm, &v64, 4, 0) < 0 )
    return 0;
    v28 = 0;
    if ( v64 > 0 )
    while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
    if ( ++v28 >= v64 )
    goto LABEL_92;
    return 0;
    LABEL_92:
    if ( pStm->lpVtbl->Read(pStm, &v64, 4, 0) < 0 )
    return 0;
    v29 = 0;
    if ( v64 > 0 )
    while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
    if ( ++v29 >= v64 )
    goto LABEL_96;
    return 0;
    LABEL_96:
    if ( pStm->lpVtbl->Read(pStm, &v64, 4, 0) < 0 )
    return 0;
    v30 = 0;
    if ( v64 > 0 )
    while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
    if ( ++v30 >= v64 )
    goto LABEL_100;
    return 0;
    LABEL_100:
    if ( pStm->lpVtbl->Read(pStm, &v64, 4, 0) < 0 )
    return 0;
    v31 = 0;
    if ( v64 > 0 )
    while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
    if ( ++v31 >= v64 )
    goto LABEL_104;
    return 0;
    LABEL_104:
    if ( pStm->lpVtbl->Read(pStm, &v64, 4, 0) < 0 )
    return 0;
    v32 = 0;
    if ( v64 > 0 )
    while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
    if ( ++v32 >= v64 )
    goto LABEL_108;
    return 0;
    LABEL_108:
    if ( pStm->lpVtbl->Read(pStm, &v64, 4, 0) < 0 )
    return 0;
    v33 = 0;
    if ( v64 > 0 )
    while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
    if ( ++v33 >= v64 )
    goto LABEL_112;
    return 0;
    LABEL_112:
    if ( pStm->lpVtbl->Read(pStm, &v64, 4, 0) < 0 )
    return 0;
    v34 = 0;
    if ( v64 > 0 )
    while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
    if ( ++v34 >= v64 )
    goto LABEL_116;
    return 0;
    LABEL_116:
    if ( pStm->lpVtbl->Read(pStm, &v64, 4, 0) < 0 )
    return 0;
    v35 = 0;
    if ( v64 > 0 )
    while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
    if ( ++v35 >= v64 )
    goto LABEL_120;
    return 0;
    LABEL_120:
    if ( pStm->lpVtbl->Read(pStm, &v64, 4, 0) < 0 )
    return 0;
    v36 = 0;
    if ( v64 > 0 )
    while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
    if ( ++v36 >= v64 )
    goto LABEL_124;
    return 0;
    LABEL_124:
    if ( pStm->lpVtbl->Read(pStm, &v64, 4, 0) < 0 )
    return 0;
    v37 = 0;
    if ( v64 > 0 )
    while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
    if ( ++v37 >= v64 )
    goto LABEL_128;
    return 0;
    LABEL_128:
    if ( pStm->lpVtbl->Read(pStm, &v64, 4, 0) < 0 )
    return 0;
    v38 = 0;
    if ( v64 > 0 )
    while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
    if ( ++v38 >= v64 )
    goto LABEL_132;
    return 0;
    LABEL_132:
    if ( pStm->lpVtbl->Read(pStm, &v64, 4, 0) < 0 )
    return 0;
    v39 = 0;
    if ( v64 > 0 )
    while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
    if ( ++v39 >= v64 )
    goto LABEL_136;
    return 0;
    LABEL_136:
    if ( pStm->lpVtbl->Read(pStm, &v64, 4, 0) < 0 )
    return 0;
    v40 = 0;
    if ( v64 > 0 )
    while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
    if ( ++v40 >= v64 )
    goto LABEL_140;
    return 0;
    LABEL_140:
    if ( pStm->lpVtbl->Read(pStm, &v64, 4, 0) < 0 )
    return 0;
    v41 = 0;
    if ( v64 > 0 )
    while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
    if ( ++v41 >= v64 )
    goto LABEL_144;
    return 0;
    LABEL_144:
    if ( pStm->lpVtbl->Read(pStm, &v64, 4, 0) < 0 )
    return 0;
    v42 = 0;
    if ( v64 > 0 )
    while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
    if ( ++v42 >= v64 )
    goto LABEL_148;
    return 0;
    LABEL_148:
    if ( pStm->lpVtbl->Read(pStm, &v64, 4, 0) < 0 )
    return 0;
    v43 = 0;
    if ( v64 > 0 )
    while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
    if ( ++v43 >= v64 )
    goto LABEL_152;
    return 0;
    LABEL_152:
    if ( pStm->lpVtbl->Read(pStm, &v64, 4, 0) < 0 )
    return 0;
    v44 = 0;
    if ( v64 > 0 )
    while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
    if ( ++v44 >= v64 )
    goto LABEL_156;
    return 0;
    LABEL_156:
    if ( pStm->lpVtbl->Read(pStm, &v64, 4, 0) < 0 )
    return 0;
    v45 = 0;
    if ( v64 > 0 )
    while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
    if ( ++v45 >= v64 )
    goto LABEL_160;
    return 0;
    LABEL_160:
    if ( pStm->lpVtbl->Read(pStm, &v64, 4, 0) < 0 )
    return 0;
    v46 = 0;
    if ( v64 > 0 )
    while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
    if ( ++v46 >= v64 )
    goto LABEL_164;
    return 0;
    LABEL_164:
    if ( pStm->lpVtbl->Read(pStm, &v64, 4, 0) < 0 )
    return 0;
    v47 = 0;
    if ( v64 > 0 )
    while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
    if ( ++v47 >= v64 )
    goto LABEL_168;
    return 0;
    LABEL_168:
    if ( pStm->lpVtbl->Read(pStm, &v64, 4, 0) < 0 )
    return 0;
    v48 = 0;
    if ( v64 > 0 )
    while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
    if ( ++v48 >= v64 )
    goto LABEL_172;
    return 0;
    LABEL_172:
    if ( pStm->lpVtbl->Read(pStm, &v64, 4, 0) < 0 )
    return 0;
    v49 = 0;
    if ( v64 > 0 )
    while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
    if ( ++v49 >= v64 )
    goto LABEL_176;
    return 0;
    LABEL_176:
    if ( pStm->lpVtbl->Read(pStm, &v64, 4, 0) < 0 )
    return 0;
    v50 = 0;
    if ( v64 > 0 )
    while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
    if ( ++v50 >= v64 )
    goto LABEL_180;
    return 0;
    LABEL_180:
    if ( pStm->lpVtbl->Read(pStm, &v64, 4, 0) < 0 )
    return 0;
    v51 = 0;
    if ( v64 > 0 )
    while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
    if ( ++v51 >= v64 )
    goto LABEL_184;
    return 0;
    LABEL_184:
    if ( pStm->lpVtbl->Read(pStm, &v64, 4, 0) < 0 )
    return 0;
    v52 = 0;
    if ( v64 > 0 )
    while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
    if ( ++v52 >= v64 )
    goto LABEL_188;
    return 0;
    LABEL_188:
    if ( pStm->lpVtbl->Read(pStm, &v64, 4, 0) < 0 )
    return 0;
    v53 = 0;
    if ( v64 > 0 )
    while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
    if ( ++v53 >= v64 )
    goto LABEL_192;
    return 0;
    LABEL_192:
    dword_A83D60 = 0;
    VectorClass_ptr_SuperClass::Remove((int)&SuperClass_ShowTimers);
    v54 = pStm->lpVtbl->Read(pStm, &v64, 4, 0);
    if ( v54 < 0 )
    return 0;
    if ( v64 > 0 )
    v55 = 0;
    while ( 1 )
    v54 = pStm->lpVtbl->Read(pStm, &ppvObj, 4, 0);
    if ( v54 < 0 )
    break;
    if ( dword_A83D60 < dword_A83D58
    || (byte_A83D5D || !dword_A83D58)
    && dword_A83D64 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(SuperClass_ShowTimers + 8))(
    &SuperClass_ShowTimers,
    dword_A83D64 + dword_A83D58,
    0) )
    v56 = dword_A83D60++;
    *((uint32_t *)dword_A83D54 + v56) = ppvObj;
    v57 = v64;
    if ( ++v55 >= v64 )
    goto LABEL_205;
    v57 = v64;
    LABEL_205:
    v58 = 0;
    if ( v57 > 0 )
    do
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)dword_A83D54 + v58++);
    while ( v58 < v64 );
    if ( v54 < 0 )
    return 0;
    dword_8B41F0 = 0;
    VectorClass_Building::Set((int)&dword_8B41E0);
    v59 = pStm->lpVtbl->Read(pStm, &v64, 4, 0);
    if ( v59 < 0 )
    return 0;
    if ( v64 > 0 )
    v60 = 0;
    while ( 1 )
    v59 = pStm->lpVtbl->Read(pStm, &ppvObj, 4, 0);
    if ( v59 < 0 )
    break;
    if ( dword_8B41F0 < dword_8B41E8
    || (byte_8B41ED || !dword_8B41E8)
    && dword_8B41F4 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(dword_8B41E0 + 8))(
    &dword_8B41E0,
    dword_8B41F4 + dword_8B41E8,
    0) )
    v61 = dword_8B41F0++;
    *((uint32_t *)dword_8B41E4 + v61) = ppvObj;
    v62 = v64;
    if ( ++v60 >= v64 )
    goto LABEL_222;
    v62 = v64;
    LABEL_222:
    v63 = 0;
    if ( v62 > 0 )
    do
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)dword_8B41E4 + v63++);
    while ( v63 < v64 );
    if ( v59 < 0 )
    return 0;
    if ( Stream::ReadOLEObjects(pStm) < 0 )
    return 0;
    if ( Stream::ReadOLEObjects(pStm) < 0 )
    return 0;
    if ( Stream::ReadOLEObjects(pStm) < 0 )
    return 0;
    if ( Stream::ReadOLEObjects(pStm) < 0 )
    return 0;
    if ( Stream::ReadOLEObjects(pStm) < 0 )
    return 0;
    result = LoadVeinholeMonsters((int *)pStm);
    if ( result )
    result = LoadGame::LoadTriggerEvents(pStm);
    if ( result )
    if ( Stream::ReadOLEObjects(pStm) < 0 )
    return 0;
    if ( Stream::ReadOLEObjects(pStm) < 0 )
    return 0;
    if ( Stream::ReadOLEObjects(pStm) < 0 )
    return 0;
    if ( Stream::ReadOLEObjects(pStm) < 0 )
    return 0;
    if ( Stream::ReadOLEObjects(pStm) < 0 )
    return 0;
    if ( Stream::ReadOLEObjects(pStm) < 0 )
    return 0;
    if ( Stream::ReadOLEObjects(pStm) < 0 )
    return 0;
    LoadGame::ClearAllSlots(g_CellClassManager);
    if ( LoadGame::LoadIteratedData((char *)g_CellClassManager, (int)pStm) < 0 )
    return 0;
    LoadGame::CleanupArray(&dword_ABC5F8);
    if ( LoadGame::LoadPointArray(&dword_ABC5F8, (int)pStm) < 0 )
    return 0;
    Stream::FlushAndReset(&dword_87F5D8);
    if ( LoadGame::DeserializePointerArrays(&dword_87F5D8, (int)pStm) < 0 )
    return 0;
    if ( Stream::ReadOLEObjects(pStm) < 0 )
    return 0;
    if ( Stream::ReadOLEObjects(pStm) < 0 )
    return 0;
    if ( GameMode_Current[0] == 5 )
    Debug::Log();
    if ( !LoadGame::LoadBlock300(g_ScenarioFlags, (int)pStm) )
    Debug::Log();
    return 0;
    if ( LoadGame::RestoreAudioState(pStm) < 0 )
    return 0;
    if ( LoadGame::LoadMagicAndAudio(pStm) < 0 )
    return 0;
    if ( sub_721040((int)pStm) < 0 )
    return 0;
    MapClass::MarkForRedraw(&MapClass_Instance, 2);
    if ( !GameMode_Current[0] )
    byte_ABCE08 = 1;
    return 1;
    return result;
}

