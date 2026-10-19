// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x006403A0  PowerClass::getDrain  cls=PowerClass  sig=csp  renamed_refs=0  residual=- ====
int PowerClass::getDrain() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x6403A0.json */
}

// ==== BACKFILL 0x00640450  PowerClass::getAvailable  cls=PowerClass  sig=csp  renamed_refs=0  residual=- ====
void* PowerClass::getAvailable(int a1) {
  return nullptr;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x640450.json */
}

// ==== BACKFILL 0x006404B0  PowerClass::Initialize  cls=PowerClass  sig=csp  renamed_refs=0  residual=- ====
void* PowerClass::Initialize(int a2) {
  return nullptr;  /* G42.33b2 restub: auto restub (pass4+, 4 errs): wrong-universe gap2 body; truth func_0x6404B0.json */
}

// ==== BACKFILL 0x006429E0  sub_6429E0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_6429E0::sub_6429E0()
{

  this->ambientSoundController[3] = 0; /*0x6429e8*/
  this->ambientSoundController[4] = 0; /*0x6429eb*/
  this->customSound_controller[0] = 0; /*0x6429ee*/
  this->customSound_controller[1] = 0; /*0x6429f1*/
  LOBYTE(this->customSound_controller[2]) = 0; /*0x6429f4*/
  this->customSound_controller[3] = 0; /*0x6429f7*/
  LOBYTE(this->customSound_controller[4]) = 0; /*0x6429fa*/
  BYTE1(this->customSound_controller[4]) = 0; /*0x6429fd*/
  BYTE2(this->customSound_controller[4]) = 0; /*0x642a00*/
  this->customSound = 0; /*0x642a03*/
  *(unsigned int *)&this->bombVisible = 0; /*0x642a06*/
  this->health = 0; /*0x642a09*/
  this->spawnStatus = -1; /*0x642a0c*/
  *(unsigned int *)&this->needsRedraw = -1; /*0x642a0f*/
  LOBYTE(this->estimatedHealth) = 0; /*0x642a1d*/
  this->visibilityFlags = 0; /*0x642a20*/
  /* X11: vtable install elided (implicit via ProgressScreenClass virtuals 0x642a23) */
  memset(&((unsigned int *)this)[0], 0, 0x40u); /*0x642a29*/
  return this; /*0x642a2d*/

}

// ==== BACKFILL 0x00642B10  Scenario::SetDword32  cls=Scenario  sig=csp  renamed_refs=0  residual=- ====
int Game::SetDword32(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00642B10.json)
}

// ==== BACKFILL 0x00642DF0  Scenario::SetDword30  cls=Scenario  sig=csp  renamed_refs=0  residual=- ====
int Game::SetDword30(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00642DF0.json)
}

// ==== BACKFILL 0x00642E00  UI_Render  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_642E00::UI_Render(unsigned int *a1, unsigned int *a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00642E00.json)
}

// ==== BACKFILL 0x00642E40  UI_Render_642E40  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_642E40::UI_Render_642E40(unsigned int *a1, int *a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00642E40.json)
}

// ==== BACKFILL 0x00642E80  UI_Render_642E80  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_642E80(int * a1, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00642E80.json)
}

// ==== BACKFILL 0x00642FF0  sub_642FF0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_642FF0(int a1, int a2, char a3)
{
  int v3; // ebx
  int Default; // eax
  int v5; // esi
  int Instance; // ebp
  unsigned short *v7; // esi
  int v8; // edi
  int v9; // ebp
  int v11; // [esp+Ch] [ebp-34h]
  unsigned int v12[7]; // [esp+20h] [ebp-20h] BYREF
  int16_t v13; // [esp+3Eh] [ebp-2h]

  v3 = 0; /*0x643007*/
  v11 = Building::GetFoundationSize(v12, 0)[3] + 6; /*0x643021*/
  if ( a3 ) /*0x64302b*/
  {
    Default = BuildingType::FindDefault(0); /*0x64302f*/
    v5 = Default; /*0x643034*/
    if ( Default ) /*0x643038*/
    {
      (*(void (**)(int))(*(unsigned int *)Default + 124))(Default); /*0x64303e*/
      v3 = (*(int (**)(int))(*(unsigned int *)v5 + 128))(v5); /*0x64304b*/
    }
  }
  Instance = TextRenderer::GetInstance(); /*0x643058*/
  v7 = v12; /*0x64305a*/
  v8 = 15; /*0x64305e*/
  do /*0x643077*/
  {
    *v7++ = *(unsigned short *)CharToWideString(g_Str_W); /*0x643070*/
    --v8; /*0x643076*/
  }
  while ( v8 ); /*0x643077*/
  v13 = 0; /*0x643082*/
  Text::MeasureWidth((int)v12, 0); /*0x643089*/
  v9 = *(unsigned int *)(Instance + 28); /*0x643092*/
  if ( v11 > v3 ) /*0x643098*/
    v3 = v11; /*0x64309a*/
  if ( v3 <= v9 ) /*0x64309e*/
    v3 = v9; /*0x6430a0*/
  return a1 + a2 * (v3 + 4); /*0x6430ae*/
}

// ==== BACKFILL 0x006430C0  sub_6430C0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_6430C0(char a1)
{
  int v1; // ebx
  int Default; // eax
  int v3; // esi
  int Instance; // ebp
  unsigned short *v5; // esi
  int v6; // edi
  int v7; // esi
  int v8; // ebp
  int v10; // [esp+Ch] [ebp-38h]
  unsigned int v11[7]; // [esp+24h] [ebp-20h] BYREF
  int16_t v12; // [esp+42h] [ebp-2h]

  v1 = 0; /*0x6430db*/
  v10 = Building::GetFoundationSize(v11, 0)[3] + 6; /*0x6430f5*/
  if ( a1 ) /*0x6430ff*/
  {
    Default = BuildingType::FindDefault(0); /*0x643103*/
    v3 = Default; /*0x643108*/
    if ( Default ) /*0x64310c*/
    {
      (*(void (**)(int))(*(unsigned int *)Default + 124))(Default); /*0x643112*/
      v1 = (*(int (**)(int))(*(unsigned int *)v3 + 128))(v3); /*0x64311f*/
    }
  }
  Instance = TextRenderer::GetInstance(); /*0x64312c*/
  v5 = v11; /*0x64312e*/
  v6 = 15; /*0x643132*/
  do /*0x64314b*/
  {
    *v5++ = *(unsigned short *)CharToWideString(g_Str_W); /*0x643144*/
    --v6; /*0x64314a*/
  }
  while ( v6 ); /*0x64314b*/
  v12 = 0; /*0x643156*/
  Text::MeasureWidth((int)v11, 0); /*0x64315d*/
  v7 = v10; /*0x643162*/
  v8 = *(unsigned int *)(Instance + 28); /*0x643166*/
  if ( v10 <= v1 ) /*0x64316c*/
    v7 = v1; /*0x64316e*/
  if ( v7 <= v8 ) /*0x643172*/
    v7 = v8; /*0x643174*/
  return (v7 - Building::GetFoundationSize(v11, 0)[3] - 2) / 2; /*0x6431a4*/
}

// ==== BACKFILL 0x006431C0  sub_6431C0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_6431C0(char a1)
{
  int v1; // edi
  int Default; // eax
  int v3; // esi
  int Instance; // ebp
  unsigned short *v5; // esi
  int v6; // ebx
  int v7; // ebp
  int v8; // edi
  int v9; // esi
  int v11; // [esp+8h] [ebp-34h]
  unsigned int v12[7]; // [esp+1Ch] [ebp-20h] BYREF
  int16_t v13; // [esp+3Ah] [ebp-2h]

  v1 = 0; /*0x6431d6*/
  v11 = Building::GetFoundationSize(v12, 0)[3] + 6; /*0x6431f0*/
  if ( a1 ) /*0x6431fa*/
  {
    Default = BuildingType::FindDefault(0); /*0x6431fe*/
    v3 = Default; /*0x643203*/
    if ( Default ) /*0x643207*/
    {
      (*(void (**)(int))(*(unsigned int *)Default + 124))(Default); /*0x64320d*/
      v1 = (*(int (**)(int))(*(unsigned int *)v3 + 128))(v3); /*0x64321a*/
    }
  }
  Instance = TextRenderer::GetInstance(); /*0x643228*/
  v5 = v12; /*0x64322a*/
  v6 = 15; /*0x64322e*/
  do /*0x643247*/
  {
    *v5++ = *(unsigned short *)CharToWideString(g_Str_W); /*0x643240*/
    --v6; /*0x643246*/
  }
  while ( v6 ); /*0x643247*/
  v13 = 0; /*0x643252*/
  Text::MeasureWidth((int)v12, 0); /*0x643259*/
  v7 = *(unsigned int *)(Instance + 28); /*0x643262*/
  if ( v11 > v1 ) /*0x643267*/
    v1 = v11; /*0x643269*/
  if ( v1 <= v7 ) /*0x64326d*/
    v1 = v7; /*0x64326f*/
  v8 = v1 + 4; /*0x643273*/
  v9 = BuildingType::FindDefault(0); /*0x64327b*/
  if ( !v9 ) /*0x643281*/
    return v8 / 2; /*0x64328e*/
  (*(void (**)(int))(*(unsigned int *)v9 + 124))(v9); /*0x64329a*/
  return (v8 - (*(int (**)(int))(*(unsigned int *)v9 + 128))(v9)) / 2; /*0x643289*/
}

// ==== BACKFILL 0x006432C0  sub_6432C0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_6432C0(char a1)
{
  int v1; // ebx
  int Default; // eax
  int v3; // esi
  int Instance; // ebp
  int v6; // edi
  int v7; // eax
  int v8; // ebp
  int v9; // ebp
  int v10; // ebx
  int v12; // edi
  int v14; // [esp+10h] [ebp-34h]
  unsigned int v15[7]; // [esp+24h] [ebp-20h] BYREF
  int16_t v16; // [esp+42h] [ebp-2h]

  v1 = 0; /*0x6432d8*/
  v14 = Building::GetFoundationSize(v15, 0)[3] + 6; /*0x6432f2*/
  if ( a1 ) /*0x6432fc*/
  {
    Default = BuildingType::FindDefault(0); /*0x643300*/
    v3 = Default; /*0x643305*/
    if ( Default ) /*0x643309*/
    {
      (*(void (**)(int))(*(unsigned int *)Default + 124))(Default); /*0x64330f*/
      v1 = (*(int (**)(int))(*(unsigned int *)v3 + 128))(v3); /*0x64331c*/
    }
  }
  Instance = TextRenderer::GetInstance(); /*0x643328*/
  v15 = v15; /*0x64332a*/
  v6 = 15; /*0x64332e*/
  do /*0x643347*/
  {
    *v15++ = *(unsigned short *)CharToWideString(g_Str_W); /*0x643340*/
    --v6; /*0x643346*/
  }
  while ( v6 ); /*0x643347*/
  v16 = 0; /*0x643352*/
  Text::MeasureWidth((int)v15, 0); /*0x643359*/
  v7 = *(unsigned int *)(Instance + 28); /*0x64335e*/
  v8 = v14; /*0x643361*/
  if ( v14 <= v1 ) /*0x643367*/
    v8 = v1; /*0x643369*/
  if ( v8 <= v7 ) /*0x64336d*/
    v8 = v7; /*0x64336f*/
  v9 = v8 + 4; /*0x643376*/
  v10 = TextRenderer::GetInstance(); /*0x64337e*/
  v15 = v15; /*0x643380*/
  v12 = 15; /*0x643384*/
  do /*0x64339d*/
  {
    *v15++ = *(unsigned short *)CharToWideString(g_Str_W); /*0x643396*/
    --v12; /*0x64339c*/
  }
  while ( v12 ); /*0x64339d*/
  v16 = 0; /*0x6433a8*/
  Text::MeasureWidth((int)v15, 0); /*0x6433af*/
  return (v9 - v10->q01C) / 2; /*0x6433bb*/
}

// ==== BACKFILL 0x006435B0  sub_6435B0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char sub_6435B0(int a1, int a2, int a3)
{
  int Default; // eax
  int v4; // esi
  int v5; // edi
  char result; // al
  int v7; // esi
  int v8[4]; // [esp+8h] [ebp-10h] BYREF

  Default = BuildingType::FindDefault(0); /*0x6435b7*/
  v4 = Default; /*0x6435bc*/
  if ( Default ) /*0x6435c0*/
  {
    v5 = (*(int (**)(int))(*(unsigned int *)Default + 124))(Default); /*0x6435d1*/
    Default = (*(int (**)(int))(*(unsigned int *)v4 + 128))(v4); /*0x6435d3*/
  }
  else
  {
    v5 = 0; /*0x6435c2*/
  }
  v8[0] = a1; /*0x6435e2*/
  v8[3] = Default; /*0x6435f8*/
  v8[1] = a2; /*0x6435fe*/
  v8[2] = v5; /*0x64360f*/
  result = 0; /*0x64361b*/
  v7 = (255 >> g_BitShift_Green_0 << g_BitShift_Red) | (255 >> g_BitMask_Red << g_BitShift_Blue); /*0x643635*/
  if ( g_DSurface_Hidden ) /*0x643639*/
  {
    result = sub_4BAFE0((unsigned int *)g_DSurface_Hidden); /*0x64363b*/
    if ( !result ) /*0x643642*/
// 0x6ba580
      return Surface::BlitTransparent(v8, g_DSurface_Hidden, a3, v7); /*0x64365b*/
  }
  return result; /*0x643660*/
}

// ==== BACKFILL 0x00643670  UI_Render_643670  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int * E4Recv_643670::UI_Render_643670(int a5, int a1, size_t a2, int a3, int a4)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00643670.json)
}

// ==== BACKFILL 0x00643720  RenderBuildingProductionButton  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_643720::RenderBuildingProductionButton(int a2, ProgressScreenClass * aP2, ProgressScreenClass * aP3, int a5, char a6) {

  int v7; // eax
  int v8; // edi
  int *FoundationSize; // eax
  int *v10; // eax
  int v11; // ecx
  int v12; // ecx
  int v13; // edx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  unsigned int v17; // ebp
  int v18; // ecx
  char v19; // dl
  int v20; // eax
  int Default; // eax
  int v22; // eax
  int v23; // edx
  int PlayerSide; // eax
  int v25; // ebp
  int v26; // edi
  int v27; // eax
  int16_t v28; // di
  int v30; // [esp+10h] [ebp-4Ch] BYREF
  int v31; // [esp+14h] [ebp-48h] BYREF
  int v32; // [esp+18h] [ebp-44h] BYREF
  int v33; // [esp+1Ch] [ebp-40h] BYREF
  int v34; // [esp+20h] [ebp-3Ch] BYREF
  int v35; // [esp+24h] [ebp-38h]
  int v36; // [esp+28h] [ebp-34h]
  int v37; // [esp+2Ch] [ebp-30h]
  int v38; // [esp+30h] [ebp-2Ch]
  double v39; // [esp+34h] [ebp-28h]
  unsigned int v40[4]; // [esp+3Ch] [ebp-20h] BYREF
  int v41; // [esp+4Ch] [ebp-10h]
  int v42; // [esp+50h] [ebp-Ch]
  int v43; // [esp+54h] [ebp-8h]
  int v44; // [esp+58h] [ebp-4h]
  int v45; // [esp+70h] [ebp+14h]

  if ( a5 < *((char *)this + 97) ) /*0x643733*/
  {
    v39 = *(double *)((char *)this + 8 * a5 + 8) / *(double *)((char *)this + 72); /*0x64374c*/
  }
  else
  {
    v7 = *((unsigned int *)this + 19); /*0x643738*/
    LODWORD(v39) = *((unsigned int *)this + 18); /*0x64373b*/
    HIDWORD(v39) = v7; /*0x64373f*/
  }
  v31 = aP3[1]; /*0x643762*/
  v32 = 0; /*0x643770*/
  v30 = 0; /*0x643774*/
  TextRenderer::MeasureBuilding2(&v32, &v30, 1, a6); /*0x643778*/
  v8 = v31 + a5 * v30; /*0x643793*/
  FoundationSize = Building::GetFoundationSize(v40, 0); /*0x643795*/
  v41 = *FoundationSize; /*0x64379c*/
  v42 = FoundationSize[1]; /*0x6437a3*/
  v43 = FoundationSize[2]; /*0x6437aa*/
  v44 = FoundationSize[3]; /*0x6437b7*/
  v30 = 0; /*0x6437bb*/
  v32 = 0; /*0x6437bf*/
  if ( a6 ) /*0x6437c3*/
    UI_Render_642E40(&v30, &v32); /*0x6437d1*/
  v31 = 0; /*0x6437de*/
  v33 = 0; /*0x6437e2*/
  UI_Render_642E80(&v31, &v33); /*0x6437e6*/
  v32 = v30 + v31 + v43 + 36; /*0x643800*/
  if ( *((unsigned int *)this + 30) != -1 ) /*0x64380a*/
    v32 = *((unsigned int *)this + 30); /*0x64380c*/
  v10 = Building::GetFoundationSize(v40, 0); /*0x643819*/
  v11 = *v10; /*0x64381e*/
  v33 = 0; /*0x643820*/
  v41 = v11; /*0x643824*/
  v31 = 0; /*0x643828*/
  v42 = v10[1]; /*0x64382f*/
  v43 = v10[2]; /*0x643836*/
  v12 = aP3[1]; /*0x64383a*/
  v13 = v10[3]; /*0x64383d*/
  v14 = *aP3; /*0x643840*/
  v44 = v13; /*0x643843*/
  v40[0] = v14; /*0x64384b*/
  v40[1] = v12; /*0x64384f*/
  TextRenderer::MeasureBuilding2(&v33, &v31, 1, a6); /*0x643862*/
  v34 = 0; /*0x643873*/
  v30 = 0; /*0x643877*/
  UI_Render(&v34, &v30); /*0x64387b*/
  v40[0] += 5; /*0x643891*/
  v15 = *aP3; /*0x6438a4*/
  v16 = aP3[1]; /*0x6438a6*/
  v17 = v8 + (v31 - v30) / 2; /*0x6438a9*/
  v38 = v16; /*0x6438ab*/
  v18 = v15 + v43 + 21; /*0x6438af*/
  v19 = a6; /*0x6438b3*/
  v37 = v18; /*0x6438b9*/
  v41 = v18; /*0x6438bd*/
  v42 = v16; /*0x6438c1*/
  if ( a6 ) /*0x6438c5*/
  {
    v34 = 0; /*0x6438d6*/
    v31 = 0; /*0x6438da*/
    TextRenderer::MeasureBuilding2(&v34, &v31, 1, a6); /*0x6438de*/
    v33 = 0; /*0x6438ef*/
    v30 = 0; /*0x6438f3*/
    UI_Render_642E40(&v33, &v30); /*0x6438f7*/
    v18 = v37; /*0x643906*/
    v19 = a6; /*0x64390d*/
    v42 = v8 + (v31 - v30) / 2; /*0x643915*/
    v16 = v38; /*0x643919*/
  }
  v35 = v18; /*0x64391d*/
  v36 = v16; /*0x643930*/
  v34 = 0; /*0x643934*/
  v31 = 0; /*0x643938*/
  TextRenderer::MeasureBuilding2(&v34, &v31, 1, v19); /*0x64393c*/
  v33 = 0; /*0x643949*/
  v30 = 0; /*0x64394d*/
  UI_Render_642E80(&v33, &v30); /*0x643951*/
  v20 = (v31 - v30) / 2; /*0x643967*/
  v31 = v20; /*0x64396b*/
  if ( a6 ) /*0x64396f*/
  {
    Default = BuildingType::FindDefault(0); /*0x643973*/
    v34 = Default; /*0x64397a*/
    if ( Default ) /*0x64397e*/
    {
      v33 = (*(int (**)(int))(*(unsigned int *)Default + 124))(Default); /*0x64398f*/
      (*(void (**)(int))(*(unsigned int *)v34 + 128))(v34); /*0x643995*/
      v22 = v33; /*0x64399b*/
    }
    else
    {
      v22 = 0; /*0x643980*/
    }
    v23 = v22 + v37 + 10; /*0x6439a3*/
    v20 = v31; /*0x6439a7*/
    v35 = v23; /*0x6439ab*/
  }
  v36 = v8 + v20; /*0x6439bb*/
  LoadScreen::RenderProgressBackground(COERCE_DOUBLE((((v17 & 0xFFFFFFFFull)) << 32 | (v40[0] & 0xFFFFFFFFull))), v39, g_DSurface_Hidden, a2); /*0x6439d3*/
  if ( a6 ) /*0x6439dc*/
  {
    PlayerSide = SessionClass::GetPlayerSide(*(unsigned int *)(dword_A8DA78 + 4 * a5)); /*0x6439ef*/
    if ( (dword_A8B238[0] == 3 || dword_A8B238[0] == 4) && *(unsigned int *)(*(unsigned int *)(dword_A8DA78 + 4 * a5) + 107) == -1 ) /*0x643a11*/
      PlayerSide = -3; /*0x643a13*/
    v45 = BuildingType::FindDefault((void *)PlayerSide); /*0x643a21*/
    if ( v45 ) /*0x643a25*/
    {
      v25 = BuildingType::FindDefault(0); /*0x643a2e*/
      if ( v25 ) /*0x643a32*/
      {
        v26 = (*(int (**)(int))(*(unsigned int *)v25 + 124))(v25); /*0x643a47*/
        v27 = (*(int (**)(int))(*(unsigned int *)v25 + 128))(v25); /*0x643a49*/
      }
      else
      {
        v26 = 0; /*0x643a34*/
        v27 = 0; /*0x643a36*/
      }
      Rect::Set(v40, v41, v42, v26, v27); /*0x643a5f*/
      v28 = PackRGB565(255); /*0x643a7b*/
      if ( g_DSurface_Hidden && !(uint8_t)sub_4BAFE0() ) /*0x643a81*/
        Surface::BlitTransparent((int *)v40, g_DSurface_Hidden, v45, v28); /*0x643aa0*/
    }
  }
  return UI_Render_643670(v35, v36, aP2, a2, *aP3 - v35 + v32 - 3); /*0x643ad1*/

}

// ==== BACKFILL 0x006447A0  ParticleSystemTypeClass::GetClassIdentifier  cls=ParticleSystemTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ParticleSystemTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x6447a6*/
    return -2147467261; /*0x6447a8*/
  *a2 = 1883112522; /*0x6447b6*/
  a2[1] = 298979249; /*0x6447be*/
  a2[2] = 1610642049; /*0x6447c7*/
  a2[3] = unk_7E96DC; /*0x6447d0*/
  return 0; /*0x6447ad*/

}

// ==== BACKFILL 0x006447E0  ParticleSystemTypeClass::SaveLoad_Prefix  cls=ParticleSystemTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ParticleSystemTypeClass::SaveLoad_Prefix(ObjectTypeClass * aP0, int aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6447E0)
}

// ==== BACKFILL 0x00644830  ParticleSystemTypeClass::SaveLoad_Prefix_0  cls=ParticleSystemTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ParticleSystemTypeClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{

  AbstractClass::SaveLoad_PrefixWrapper((gamemd::TechnoTypeClass *)(AbstractClass *)aP0, aP1, (gamemd::TechnoTypeClass *)aP2); /*0x64483f*/
  return 0; /*0x644846*/

}

// ==== BACKFILL 0x00644850  sub_644850  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
ObjectClass * E4Recv_644850::sub_644850()
{

  int v2; // edi
  char **v3; // esi

  v2 = 0; /*0x644855*/
  v3 = off_836EE0; /*0x644857*/
  while ( _strcmpi((char *)this, *v3) ) /*0x64486a*/
  {
    ++v3; /*0x64486c*/
    ++v2; /*0x64486f*/
    if ( (int)v3 >= (int)g_INI_Key_Railgun ) /*0x644876*/
      return -1; /*0x64487e*/
  }
  return v2; /*0x644878*/

}

// ==== BACKFILL 0x00644920  ParticleSystemTypeClass::GetObjectSize  cls=ParticleSystemTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ParticleSystemTypeClass::GetObjectSize()
{

  return 784; /*0x644925*/

}

// ==== BACKFILL 0x00644930  ParticleSystemTypeClass::GetTypeIdentifier  cls=ParticleSystemTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ParticleSystemTypeClass::GetTypeIdentifier()
{

  return 25; /*0x644935*/

}

// ==== BACKFILL 0x00644940  ParticleSystemTypeClass::Stub  cls=ParticleSystemTypeClass  sig=csp  renamed_refs=0  residual=- ====
char ParticleSystemTypeClass::Stub(int a1, int a2)
{

  return 0; /*0x644942*/

}

// ==== BACKFILL 0x00644950  ParticleSystemTypeClass::StubReturnFalse  cls=ParticleSystemTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ParticleSystemTypeClass::StubReturnFalse(int a1)
{

  return 0; /*0x644952*/

}

// ==== BACKFILL 0x00644960  ParticleSystemTypeClass::ddtor  cls=ParticleSystemTypeClass  sig=csp  renamed_refs=0  residual=- ====
ParticleSystemTypeClass * ParticleSystemTypeClass::ddtor(void ** Block, char a2)
{

  int v3; // eax
  ParticleSystemTypeClass *v5; // [esp+4h] [ebp-4h] BYREF

  Block->ParticleSystemTypeClass_field_0x0 = &g_ptr_7F007C; /*0x644966*/
  Block->ParticleSystemTypeClass_field_0x4 = &g_ptr_7F007C; /*0x64496c*/
  Block->ParticleSystemTypeClass_field_0x8 = &g_ptr_7F007C; /*0x644973*/
  Block->SpawnCount = &g_ptr_7F007C; /*0x64497a*/
  AbstractClass::AnnounceExpiredPointer(&Block->ParticleSystemTypeClass_field_0x0, 1); /*0x644981*/
  v5 =(gamemd::ParticleSystemTypeClass *)Block; /*0x644996*/
  v3 = (*(int (**)(char *, ParticleSystemTypeClass **))(*(unsigned int *)&stru_A83D50.__pad_14[4] + 16))( /*0x64499a*/
         &stru_A83D50.__pad_14[4],
         &v5);
  if ( v3 != -1 && v3 < (int)stru_A83D50.SuperClass_field_0x28 ) /*0x6449aa*/
  {
    --stru_A83D50.SuperClass_field_0x28; /*0x6449af*/
    for ( ; /*0x6449b5*/
          v3 < (int)stru_A83D50.SuperClass_field_0x28;
          *(unsigned int *)(*(unsigned int *)&stru_A83D50.__pad_14[8] + 4 * v3 - 4) = *(unsigned int *)(*(unsigned int *)&stru_A83D50.__pad_14[8]
                                                                                    + 4 * v3) )
    {
      ++v3; /*0x6449bd*/
    }
  }
  ((ObjectTypeClass *)((int)Block))->Destruct(); /*0x6449d1*/
  if ( (a2 & 1) != 0 ) /*0x6449db*/
    __3_YAXPAX_Z(Block); /*0x6449de*/
  return &Block->ParticleSystemTypeClass_field_0x0; /*0x6449e8*/

}

// ==== BACKFILL 0x00645620  C07F0188::ddtor  cls=ParticleTypeClass  sig=csp  renamed_refs=0  residual=- ====
int C07F0188::ddtor(int a1, unsigned int *a2)
{
    return {}; // TODO stub - G42 return-sync (int->virtual int)
}

// ==== BACKFILL 0x006457A0  ParticleTypeClass::SaveLoad_Prefix_0  cls=ParticleTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ParticleTypeClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int aP1, int aP2)
{

  int result; // eax
  int v4; // edx
  int v5; // ebp
  int v6; // edi

  result = AbstractClass::SaveLoad_PrefixWrapper((gamemd::TechnoTypeClass *)((AbstractClass *)aP0),(gamemd::ObjectTypeClass *)(aP1),(gamemd::TechnoTypeClass *)(aP2)); /*0x6457b3*/
  if ( result >= 0 ) /*0x6457ba*/
  {
    v4 = *(unsigned int *)aP1; /*0x6457c2*/
    aP2 = (int)aP0->aP2; /*0x6457ce*/
    result = (*(int (**)(int, int *, int, unsigned int))(v4 + 16))(aP1, &aP2, 4, 0); /*0x6457d2*/
    if ( result >= 0 ) /*0x6457d7*/
    {
      v5 = 0; /*0x6457dd*/
      if ( aP2 > 0 ) /*0x6457e1*/
      {
        v6 = 0; /*0x6457e3*/
        do /*0x645806*/
        {
          if ( (*(int (**)(int, char *, int, unsigned int))(*(unsigned int *)aP1 + 16))( /*0x6457fa*/
                 aP1,
                 (char *)aP0->strength + v6,
                 3,
                 0) < 0 )
            break; /*0x6457fa*/
          ++v5; /*0x645800*/
          v6 += 3; /*0x645801*/
        }
        while ( v5 < aP2 ); /*0x645806*/
      }
      return 0; /*0x645808*/
    }
  }
  return result; /*0x64580a*/

}

// ==== BACKFILL 0x006458D0  sub_6458D0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
ObjectClass * E4Recv_6458D0::sub_6458D0()
{

  int v2; // edi
  char **v3; // esi

  v2 = 0; /*0x6458d5*/
  v3 = off_8370BC; /*0x6458d7*/
  while ( _strcmpi((char *)this, *v3) ) /*0x6458ea*/
  {
    ++v3; /*0x6458ec*/
    ++v2; /*0x6458ef*/
    if ( (int)v3 >= (int)0 ) /*0x6458f6*/
      return -1; /*0x6458fe*/
  }
  return v2; /*0x6458f8*/

}

// ==== BACKFILL 0x00645910  ParticleTypeClass::GetObjectSize  cls=ParticleTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ParticleTypeClass::GetObjectSize()
{

  return 792; /*0x645915*/

}

// ==== BACKFILL 0x00645920  ParticleTypeClass::GetTypeIdentifier  cls=ParticleTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ParticleTypeClass::GetTypeIdentifier()
{

  return 23; /*0x645925*/

}

// ==== BACKFILL 0x00645930  ParticleTypeClass::Stub  cls=ParticleTypeClass  sig=csp  renamed_refs=0  residual=- ====
char ParticleTypeClass::Stub(int a1, int a2)
{

  return 0; /*0x645932*/

}

// ==== BACKFILL 0x00645940  ParticleTypeClass::StubReturnFalse  cls=ParticleTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ParticleTypeClass::StubReturnFalse(int a1)
{

  return 0; /*0x645942*/

}

// ==== BACKFILL 0x00645950  ParticleTypeClass::ddtor  cls=ParticleTypeClass  sig=csp  renamed_refs=0  residual=- ====
ParticleTypeClass * ParticleTypeClass::ddtor(char a2, int a3, int a4, int a5, int a6, int a7, int a8, int aP0, int aP1, int aP2, int a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x645950)
}

// ==== BACKFILL 0x00645B10  AbstractClass::getTeamIndex  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
void* AbstractClass::getTeamIndex(int a2) {
  return nullptr;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x645b10.json */
}

// ==== BACKFILL 0x00645CD0  sub_645CD0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_645CD0::sub_645CD0(float a2)
{

  *(float *)this = a2 * *(float *)this; /*0x645cd6*/
  *(float *)&((unsigned int *)this)[0] = a2 * *(float *)&((unsigned int *)this)[0]; /*0x645cdf*/
  *(float *)&((unsigned int *)this)[0] = a2 * *(float *)&((unsigned int *)this)[0]; /*0x645ce9*/
  *(float *)&((unsigned int *)this)[0] = a2 * *(float *)&((unsigned int *)this)[0]; /*0x645cf3*/

}

// ==== BACKFILL 0x00645D00  Function::645D00  cls=Function  sig=csp  renamed_refs=0  residual=- ====
int Function::sub_645D00(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x645D00)
}

// ==== BACKFILL 0x00645ED0  QuaternionMathMultiply  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
float * QuaternionMathMultiply(ObjectClass * aP0, float *a1, float *a2)
{
  double v4; // st6
  double v5; // st7
  float v7; // [esp+4h] [ebp-40h]
  float v8; // [esp+8h] [ebp-3Ch]
  float v9; // [esp+Ch] [ebp-38h]
  float v10; // [esp+10h] [ebp-34h]
  float v11; // [esp+14h] [ebp-30h]
  float v12; // [esp+14h] [ebp-30h]
  float v13; // [esp+18h] [ebp-2Ch]
  float v14; // [esp+18h] [ebp-2Ch]
  float v15; // [esp+1Ch] [ebp-28h]
  float v16; // [esp+1Ch] [ebp-28h]
  float v17; // [esp+28h] [ebp-1Ch]
  float v18; // [esp+2Ch] [ebp-18h]
  float v19; // [esp+38h] [ebp-Ch]
  float v20; // [esp+3Ch] [ebp-8h]
  float v21; // [esp+48h] [ebp+4h]

  v11 = *a2; /*0x645eea*/
  v13 = a2[1]; /*0x645ef4*/
  v15 = a2[2]; /*0x645efb*/
  v21 = a2[3]; /*0x645eff*/
  v17 = a1[1] * v21; /*0x645f0f*/
  v18 = a1[2] * v21; /*0x645f1b*/
  v4 = a1[3]; /*0x645f1f*/
  v12 = v4 * v11; /*0x645f28*/
  v14 = v13 * v4; /*0x645f32*/
  v16 = v15 * v4; /*0x645f3c*/
  v19 = a1[2] * *a2 - a2[2] * *a1; /*0x645f5c*/
  v20 = a2[1] * *a1 - a1[1] * *a2; /*0x645f6c*/
  v7 = a1[1] * a2[2] - a1[2] * a2[1] + v12 + *a1 * v21; /*0x645f76*/
  v8 = v17 + v14 + v19; /*0x645f88*/
  v9 = v18 + v16 + v20; /*0x645f98*/
  v10 = v4 * a2[3] - (a1[2] * a2[2] + a1[1] * a2[1] + *a1 * *a2); /*0x645fb9*/
  v5 = v9 * v9 + v8 * v8 + v10 * v10 + v7 * v7; /*0x645fe1*/
  if ( 0.0 != v5 ) /*0x645ff0*/
  {
    v7 = v7 / v5; /*0x645ff8*/
    v8 = v8 / v5; /*0x646002*/
    v9 = v9 / v5; /*0x64600c*/
    v10 = v10 / v5; /*0x646016*/
  }
  *aP0 = v7; /*0x646022*/
  aP0[1] = v8; /*0x646028*/
  aP0[2] = v9; /*0x64602f*/
  aP0[3] = v10; /*0x646036*/
  return aP0; /*0x646039*/
}

// ==== BACKFILL 0x006460C0  sub_6460C0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
float * sub_6460C0(float *a0, ObjectClass * aP1)
{
  float v3; // [esp+0h] [ebp-10h]
  float v4; // [esp+4h] [ebp-Ch]
  float v5; // [esp+8h] [ebp-8h]
  float v6; // [esp+Ch] [ebp-4h]

  v3 = -*aP1; /*0x6460c7*/
  v4 = -aP1[1]; /*0x6460d0*/
  v5 = -aP1[2]; /*0x6460d9*/
  v6 = aP1[3]; /*0x6460e6*/
  *a0 = v3; /*0x6460ea*/
  a0[1] = v4; /*0x6460f0*/
  a0[2] = v5; /*0x6460f7*/
  a0[3] = v6; /*0x6460fe*/
  return a0; /*0x646101*/
}

// ==== BACKFILL 0x00646480  FromQuaternionAxisAngle  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
float * Quaternion_FromAxisAngle(float * a1, float * a2, float a3)
{
  float v3; // ebx
  float v4; // ebp
  float v5; // edi
  double v7; // st7
  double v8; // st7
  double v9; // st7
  float v11; // [esp+18h] [ebp-28h]
  float v12; // [esp+24h] [ebp-1Ch]
  float v13; // [esp+28h] [ebp-18h]
  float v14; // [esp+2Ch] [ebp-14h]
  float v15; // [esp+30h] [ebp-10h]
  float v16; // [esp+30h] [ebp-10h]
  float v17; // [esp+34h] [ebp-Ch]
  float v18; // [esp+34h] [ebp-Ch]
  float v19; // [esp+38h] [ebp-8h]
  float v20; // [esp+38h] [ebp-8h]
  float v21; // [esp+3Ch] [ebp-4h]

  v3 = a2[1]; /*0x646484*/
  v4 = a2[2]; /*0x646488*/
  v5 = *a2; /*0x6464a5*/
  v11 = *a2; /*0x6464ac*/
  v7 = Math::Sqrt(v4 * v4 + v3 * v3 + v11 * v11); /*0x6464bf*/
  if ( v7 == 0.0 ) /*0x6464d2*/
  {
    v12 = v5; /*0x64650c*/
    v13 = v3; /*0x646510*/
    v14 = v4; /*0x646514*/
  }
  else
  {
    v15 = v11 / v7; /*0x6464da*/
    v12 = v15; /*0x6464e8*/
    v17 = v3 / v7; /*0x6464ec*/
    v13 = v17; /*0x6464f8*/
    v19 = v4 / v7; /*0x6464fc*/
    v14 = v19; /*0x646504*/
  }
  v8 = Math::SinCos(a3 * 0.5); /*0x646530*/
  v16 = v12 * v8; /*0x64653d*/
  v18 = v13 * v8; /*0x646547*/
  v20 = v14 * v8; /*0x646551*/
  v9 = Math::ArcTan2(a3 * 0.5); /*0x646557*/
  v21 = v9; /*0x646569*/
  *a1 = v16; /*0x64656d*/
  a1[1] = v18; /*0x646575*/
  a1[2] = v20; /*0x64657e*/
  a1[3] = v21; /*0x646581*/
  return a1; /*0x64657c*/
}

// ==== BACKFILL 0x00646980  ToQuaternionMatrix  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
float * Quaternion_ToMatrix(float * a1, float * a2)
{
  double v2; // st7
  double v4; // st6
  double v5; // st5
  double v6; // st4
  double v7; // st7
  double v8; // st6
  float v9; // [esp+8h] [ebp-40h]
  float v10; // [esp+Ch] [ebp-3Ch]
  float v11; // [esp+10h] [ebp-38h]
  float v12; // [esp+14h] [ebp-34h]
  float v13[12]; // [esp+18h] [ebp-30h] BYREF

  v2 = a2[2] * a2[2]; /*0x646988*/
  v12 = a2[1] * a2[1]; /*0x646995*/
  v13[0] = 1.0 - (v12 + v2 + v12 + v2); /*0x6469a9*/
  v4 = a2[1] * *a2; /*0x6469b0*/
  v5 = a2[3] * a2[2]; /*0x6469b5*/
  v13[1] = v4 - v5 + v4 - v5; /*0x6469be*/
  v10 = a2[3] * a2[1]; /*0x6469c8*/
  v6 = *a2 * a2[2]; /*0x6469ce*/
  v9 = v6; /*0x6469d1*/
  v13[2] = v6 + v10 + v6 + v10; /*0x6469db*/
  v13[4] = v5 + v4 + v5 + v4; /*0x6469e3*/
  v11 = *a2 * *a2; /*0x6469ef*/
  v13[5] = 1.0 - (v11 + v2 + v11 + v2); /*0x646a03*/
  v7 = a2[1] * a2[2]; /*0x646a0c*/
  v8 = a2[3] * *a2; /*0x646a12*/
  v13[6] = v7 - v8 + v7 - v8; /*0x646a1a*/
  v13[8] = v9 - v10 + v9 - v10; /*0x646a28*/
  v13[11] = 0.0; /*0x646a39*/
  v13[7] = 0.0; /*0x646a41*/
  v13[3] = 0.0; /*0x646a49*/
  v13[9] = v8 + v7 + v8 + v7; /*0x646a53*/
  v13[10] = 1.0 - (v11 + v12 + v11 + v12); /*0x646a69*/
  qmemcpy(a1, v13, 0x30u); /*0x646a6d*/
  return a1; /*0x646a6f*/
}

// ==== BACKFILL 0x00646D00  sub_646D00  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_646D00::sub_646D00()
{

  this->AbstractClass = (void *)-1; /*0x646d04*/
  ((unsigned int *)this)[0] = 0; /*0x646d0a*/
  ((unsigned int *)this)[0] = 0; /*0x646d0d*/
  ((unsigned int *)this)[0] = 0; /*0x646d10*/
  ((unsigned int *)this)[0] = 0; /*0x646d13*/
  ((unsigned int *)this)[0] = 0; /*0x646d16*/
  return this; /*0x646d19*/

}

// ==== BACKFILL 0x0064AAA0  sub_64AAA0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
LRESULT E4Recv_64AAA0::sub_64AAA0(HWND hWnd)
{

  LRESULT v2; // esi

  v2 = SendMessageA((HWND)hWnd, 0x18Bu, 0, 0); /*0x64aab7*/
  if ( v2 > 50 ) /*0x64aabc*/
  {
    SendMessageA((HWND)hWnd, 0x182u, 0, 0); /*0x64aac8*/
    --v2; /*0x64aaca*/
  }
  return SendMessageA((HWND)hWnd, 0x197u, v2 - 1, 0); /*0x64aad7*/

}

// ==== BACKFILL 0x0064B410  Network_Process_64B410  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_64B410(int a1, int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0064B410.json)
}

// ==== BACKFILL 0x0064D990  Network_Process_64D990  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_64D990()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0064D990.json)
}

// ==== BACKFILL 0x0064D9E0  Network_Process_64D9E0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_64D9E0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0064D9E0.json)
}

// ==== BACKFILL 0x0064DE80  ComputeHash  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int Hash_Compute(unsigned int * a1, int a2)
{
  int result; // eax

  result = a2 + (*a1 >> 31) + 2 * *a1; /*0x64de8c*/
  *a1 = result; /*0x64de8e*/
  return result; /*0x64de8b*/
}
