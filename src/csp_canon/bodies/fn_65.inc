// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x006525A0  Network_Process_6525A0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char Gap2Recv_6525A0::Network_Process_6525A0(int a2) {

  char *v3; // edi
  int i; // ecx
  int v5; // eax
  unsigned int *v6; // edx
  int v7; // eax

  if ( a2 < 0 ) /*0x6525ac*/
    return 0; /*0x6525ac*/
  v3 = (char *)__2_YAPAXI_Z(8 * (a2 + *((unsigned int *)this + 2))); /*0x6525c0*/
  if ( !v3 ) /*0x6525c7*/
    return 0; /*0x652620*/
  for ( i = 0; i < *((unsigned int *)this + 1); *(unsigned int *)&v3[v5 + 4] = v6[1] ) /*0x6525d5*/
  {
    v5 = 8 * i; /*0x6525d9*/
    v6 = (unsigned int *)(*(unsigned int *)this + 8 * i++); /*0x6525e2*/
    *(unsigned int *)&v3[v5] = *v6; /*0x6525e7*/
  }
  __3_YAXPAX_Z(*(void **)this); /*0x6525fb*/
  v7 = a2 + *((unsigned int *)this + 2); /*0x652606*/
  *(unsigned int *)this = v3; /*0x652608*/
  *((unsigned int *)this + 2) = v7; /*0x65260a*/
  *((unsigned int *)this + 4) = 0; /*0x65260d*/
  return 1; /*0x652614*/

}

// ==== BACKFILL 0x00652960  RadarClass::Construct  cls=RadarClass  sig=csp  renamed_refs=0  residual=- ====
void* RadarClass::Construct() {
  return nullptr;  /* G42.33b2 restub: auto restub (pass4+, 32 errs): wrong-universe gap2 body; truth func_0x652960.json */
}

// ==== BACKFILL 0x00652CD0  sub_652CD0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_652CD0()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00652CD0.json)
}

// ==== BACKFILL 0x00652D90  RadarClass::Destru_vt50  cls=RadarClass  sig=csp  renamed_refs=0  residual=- ====
void RadarClass::Destru_vt50()
{

  if ( byte_B048F9 ) /*0x652d9a*/
  {
    __3_YAXPAX_Z((void *)(dword_B048E0)); /*0x652da2*/
    byte_B048F9 = 0; /*0x652daa*/
  }
  dword_B048E0 = 0; /*0x652db5*/
  if ( byte_B048F8 ) /*0x652dbd*/
  {
    __3_YAXPAX_Z((void *)(dword_B048AC)); /*0x652dc6*/
    byte_B048F8 = 0; /*0x652dce*/
  }
  dword_B048AC = 0; /*0x652dd4*/

}

// ==== BACKFILL 0x00652DE0  RadarClass::Destru_vt07  cls=RadarClass  sig=csp  renamed_refs=0  residual=- ====
void RadarClass::Destru_vt07() {
}

// ==== BACKFILL 0x00653010  SidebarClass::CreateScrollButtons  cls=RadarClass  sig=csp  renamed_refs=0  residual=- ====
void SidebarClass::CreateScrollButtons()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00653010.json)
}

// ==== BACKFILL 0x00653750  nullsub_220  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void nullsub_220(int a1, int a2)
{
  ; /*0x653750*/
}

// ==== BACKFILL 0x00653F50  CellClass::DrawWrapper  cls=RadarClass  sig=csp  renamed_refs=0  residual=- ====
void CellClass::DrawWrapper(unsigned int * a2, int jj, char a4, char a5) {
    // G42.34 T11: call reshaped to member form; links to gap2_defs.cpp:1591 def
    // (CellClass::UpdateTerrainAndWaypoints(void*,int,int,int), same shape as tree cell.hpp:421).
    this->UpdateTerrainAndWaypoints((void *)a2, jj, (int)a4, (int)a5); /*0x653f64*/
}

// ==== BACKFILL 0x00653F70  TacticalClass::SetPositionThunk  cls=RadarClass  sig=csp  renamed_refs=0  residual=- ====
int TacticalClass::SetPositionThunk(MouseClass * aP0)
{

  return ((Tactical *)((int)g_TacticalClass_Instance))->SetTacticalPosition((int *)aP0); /*0x653f80*/

}

// ==== BACKFILL 0x006547C0  GenerateImageThumbnail  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6547C0::GenerateImageThumbnail(RadarClass * aP1, RadarClass * aP2, RadarClass * aP3, RadarClass * aP4) {

  float *v6; // ebx
  int *v7; // esi
  int v8; // edi
  int v9; // eax
  int v10; // edi
  unsigned char *v11; // ecx
  int v12; // edx
  void *v13; // edi
  int v14; // ecx
  double v15; // st7
  double v16; // st6
  double v17; // st5
  int v18; // edi
  int v19; // eax
  int v20; // eax
  int v21; // esi
  double v22; // st7
  int v23; // eax
  int v24; // ebp
  int v25; // eax
  int v26; // edi
  int v27; // eax
  int v28; // ebp
  int v29; // eax
  int v30; // eax
  int v31; // esi
  int v32; // ebp
  int v33; // edx
  int v34; // eax
  int v35; // esi
  int v36; // ebp
  double v37; // st7
  int v38; // eax
  int v39; // eax
  double v40; // st6
  double v41; // st5
  double v42; // st4
  int v43; // eax
  int v44; // esi
  int v45; // edi
  int v46; // eax
  int v47; // edx
  int v48; // esi
  int v49; // eax
  int v50; // ebp
  double v51; // st3
  int v52; // ecx
  int v53; // ebp
  int v54; // eax
  int v55; // esi
  int v56; // edi
  double v57; // st2
  double v58; // st2
  uint8_t *v59; // eax
  int v60; // eax
  int v61; // edi
  int v62; // eax
  int v63; // esi
  int v64; // eax
  bool v65; // zf
  size_t v66; // esi
  void *v67; // edi
  int v69; // [esp+10h] [ebp-6Ch]
  int v70; // [esp+14h] [ebp-68h]
  int v71; // [esp+18h] [ebp-64h]
  float v72; // [esp+1Ch] [ebp-60h]
  float v73; // [esp+20h] [ebp-5Ch]
  float v74; // [esp+24h] [ebp-58h]
  int v75; // [esp+28h] [ebp-54h]
  int v76; // [esp+2Ch] [ebp-50h]
  int v77; // [esp+30h] [ebp-4Ch]
  int v78; // [esp+34h] [ebp-48h]
  float v79; // [esp+38h] [ebp-44h]
  int v80; // [esp+3Ch] [ebp-40h]
  int v81; // [esp+40h] [ebp-3Ch]
  int v82; // [esp+44h] [ebp-38h]
  int v83; // [esp+48h] [ebp-34h]
  int v84; // [esp+4Ch] [ebp-30h]
  int v85; // [esp+50h] [ebp-2Ch]
  int v86; // [esp+54h] [ebp-28h]
  int v87; // [esp+58h] [ebp-24h]
  float v88; // [esp+5Ch] [ebp-20h]
  float v89; // [esp+60h] [ebp-1Ch]
  int v90; // [esp+60h] [ebp-1Ch]
  int v91; // [esp+60h] [ebp-1Ch]
  int v92; // [esp+64h] [ebp-18h]
  int v93; // [esp+68h] [ebp-14h]
  int i; // [esp+6Ch] [ebp-10h]
  float v95; // [esp+70h] [ebp-Ch]
  int v97; // [esp+84h] [ebp+8h]
  float v98; // [esp+88h] [ebp+Ch]
  float v99; // [esp+8Ch] [ebp+10h]
  int v100; // [esp+8Ch] [ebp+10h]

  v6 = this; /*0x6547cd*/
  v7 = aP3; /*0x6547d0*/
  if ( aP4 && (aP3[2] <= 0 || aP3[3] <= 0) ) /*0x6547ec*/
  {
    *aP3 = *aP2; /*0x6547f4*/
    aP3[1] = aP2[1]; /*0x6547f9*/
    aP3[2] = aP2[2]; /*0x6547ff*/
    aP3[3] = aP2[3]; /*0x654805*/
  }
  if ( !*((unsigned int *)this + 1167) ) /*0x654808*/
  {
    v8 = aP2[3] * aP2[2]; /*0x654815*/
    v9 = __2_YAPAXI_Z(3 * v8); /*0x65481d*/
    if ( v9 ) /*0x654827*/
    {
      v10 = v8 - 1; /*0x654829*/
      if ( v10 >= 0 ) /*0x65482c*/
      {
        v11 = (unsigned char *)(v9 + 2); /*0x65482e*/
        v12 = v10 + 1; /*0x654831*/
        do /*0x654843*/
        {
          *(v11 - 2) = 0; /*0x654834*/
          *(v11 - 1) = 0; /*0x654838*/
          *v11 = 0; /*0x65483c*/
          v11 += 3; /*0x65483f*/
          --v12; /*0x654842*/
        }
        while ( v12 ); /*0x654843*/
      }
      v13 = (void *)v9; /*0x654845*/
    }
    else
    {
      v13 = 0; /*0x654849*/
    }
    *((unsigned int *)v6 + 1167) = v13; /*0x65484b*/
    memset(v13, 0, 3 * aP2[3] * aP2[2]); /*0x654862*/
    *((unsigned int *)v6 + 1168) = aP2[2]; /*0x65486e*/
    *((unsigned int *)v6 + 1169) = aP2[3]; /*0x654877*/
  }
  if ( aP4 ) /*0x654886*/
    RadarClass::UpdateBlips((RadarClass *)v6, (int)aP2, aP3); /*0x65488c*/
  v14 = *((unsigned int *)v6 + 1160); /*0x654891*/
  v75 = aP2[2]; /*0x6548a0*/
  v99 = v6[1314]; /*0x6548a6*/
  if ( v14 ) /*0x6548ad*/
  {
    v97 = (*(int (**)(int))(*(unsigned int *)v14 + 124))(v14); /*0x6549a8*/
    v69 = (*(int (**)(unsigned int))(**((unsigned int **)v6 + 1160) + 128))(*((unsigned int *)v6 + 1160)); /*0x6549b7*/
  }
  else
  {
    v15 = (double)v75; /*0x6548b3*/
    v99 = 140.0 / v15; /*0x6548bf*/
    v16 = (double)aP2[3]; /*0x6548c6*/
    v17 = v16 * v99; /*0x6548cb*/
    if ( v17 >= 108.0 ) /*0x6548e1*/
    {
      v99 = 108.0 / v16; /*0x65490a*/
      LOWORD(v20) = Math::RoundToInt(v15 * v99); /*0x65491a*/
      v97 = v20; /*0x65491f*/
      v69 = 108; /*0x654926*/
      v18 = v20; /*0x65492e*/
    }
    else
    {
      v18 = 140; /*0x6548eb*/
      v97 = 140; /*0x6548f0*/
      v89 = v17; /*0x6548d2*/
      LOWORD(v19) = Math::RoundToInt(v89); /*0x6548f7*/
      v69 = v19; /*0x6548fc*/
    }
    v6[1314] = v99; /*0x654939*/
    v21 = __2_YAPAXI_Z(0x20u); /*0x654944*/
    if ( v21 ) /*0x65494b*/
    {
      *(unsigned int *)(v21 + 8) = v69; /*0x654954*/
      *(unsigned int *)(v21 + 4) = v18; /*0x65495f*/
      *(unsigned int *)(v21 + 12) = 0; /*0x654962*/
      *(unsigned int *)v21 = &XSurface_Vtable; /*0x654969*/
      *(unsigned int *)(v21 + 16) = 2; /*0x65496f*/
      Buffer::Init((Buffer *)(v21 + 20), 0, 2 * v18 * v69); /*0x654976*/
      *(unsigned int *)v21 = &BSurface_Vtable; /*0x65497b*/
    }
    else
    {
      v21 = 0; /*0x654983*/
    }
    *((unsigned int *)v6 + 1160) = v21; /*0x654985*/
    (*(void (**)(int, unsigned int))(*(unsigned int *)v21 + 24))(v21, 0); /*0x654991*/
    v7 = aP3; /*0x654994*/
  }
  v74 = (double)aP2[2] / (double)v97; /*0x6549d3*/
  v22 = (double)aP2[3] / (double)v69; /*0x6549da*/
  v73 = v22; /*0x6549de*/
  v95 = 1.0 / (v22 * v74); /*0x6549ec*/
  v23 = (*(int (**)(unsigned int, unsigned int, unsigned int))(**((unsigned int **)v6 + 1160) + 92))(*((unsigned int *)v6 + 1160), 0, 0); /*0x6549f0*/
  v24 = *v7; /*0x6549f3*/
  v90 = v23; /*0x6549f5*/
  LOWORD(v25) = Math::RoundToInt((double)*v7 * v99); /*0x654a0e*/
  v26 = v25; /*0x654a13*/
  v82 = v25; /*0x654a1a*/
  LOWORD(v27) = Math::RoundToInt((double)(v24 + v7[2]) * v99); /*0x654a33*/
  v83 = v27 + 1; /*0x654a42*/
  if ( v27 + 1 >= v97 ) /*0x654a46*/
    v83 = v97; /*0x654a48*/
  v28 = v7[1]; /*0x654a4c*/
  LOWORD(v29) = Math::RoundToInt((double)v28 * v99); /*0x654a64*/
  v84 = v29; /*0x654a6c*/
  LOWORD(v30) = Math::RoundToInt((double)(v28 + v7[3]) * v99); /*0x654a87*/
  v31 = v69; /*0x654a8c*/
  v32 = v30 + 1; /*0x654a90*/
  if ( v30 + 1 >= v69 ) /*0x654a95*/
  {
    v81 = v69; /*0x654a9d*/
    v32 = v69; /*0x654aa1*/
  }
  else
  {
    v81 = v30 + 1; /*0x654a97*/
  }
  v88 = (double)v82 / v99; /*0x654ab4*/
  v98 = v88; /*0x654ac0*/
  v72 = (double)v84 / v99; /*0x654ace*/
  if ( v84 < v32 ) /*0x654ad2*/
  {
    v33 = v90; /*0x654ada*/
    v91 = v32 - v84; /*0x654aea*/
    v80 = v33 + 2 * (v26 + v97 * v84); /*0x654af1*/
    do /*0x654dff*/
    {
      LOWORD(v34) = Math::RoundToInt(v72); /*0x654af9*/
      v35 = *((unsigned int *)v6 + 1169); /*0x654afe*/
      if ( v35 >= v34 ) /*0x654b06*/
      {
        v71 = v34; /*0x654b10*/
        v36 = v34; /*0x654b14*/
      }
      else
      {
        v36 = *((unsigned int *)v6 + 1169); /*0x654b08*/
        v71 = v36; /*0x654b0a*/
      }
      v37 = v72 + v73; /*0x654b1a*/
      LOWORD(v38) = Math::RoundToInt(v37); /*0x654b20*/
      v39 = v38 + 1; /*0x654b25*/
      v70 = v35; /*0x654b26*/
      if ( v35 >= v39 ) /*0x654b2c*/
        v70 = v39; /*0x654b2e*/
      if ( v26 < v83 ) /*0x654b38*/
      {
        v86 = v80; /*0x654b44*/
        v87 = v83 - v26; /*0x654b48*/
        do /*0x654dc9*/
        {
          v40 = 0.0; /*0x654b4c*/
          v41 = 0.0; /*0x654b52*/
          v42 = 0.0; /*0x654b58*/
          LOWORD(v43) = Math::RoundToInt(v37); /*0x654b65*/
          v44 = *((unsigned int *)v6 + 1168); /*0x654b6a*/
          v93 = v44; /*0x654b72*/
          if ( v44 >= v43 ) /*0x654b76*/
          {
            v100 = v43; /*0x654b83*/
            v45 = v43; /*0x654b8a*/
          }
          else
          {
            v45 = *((unsigned int *)v6 + 1168); /*0x654b78*/
            v100 = v45; /*0x654b7a*/
          }
          LOWORD(v46) = Math::RoundToInt(v37); /*0x654b9b*/
          v47 = v46 + 1; /*0x654ba0*/
          if ( v44 < v46 + 1 ) /*0x654ba5*/
            v47 = v44; /*0x654ba7*/
          v48 = v36; /*0x654bad*/
          v76 = v36; /*0x654bb1*/
          if ( v36 < v70 ) /*0x654bb5*/
          {
            v92 = v70 - v36; /*0x654bbd*/
            v49 = v36; /*0x654bc1*/
            v50 = v75; /*0x654bc3*/
            v78 = v45 + v75 * v49; /*0x654bd4*/
            v77 = 3 * v78; /*0x654bdf*/
            do /*0x654d1f*/
            {
              if ( v92 > 1 ) /*0x654be8*/
              {
                if ( v48 == v71 ) /*0x654bf4*/
                {
                  v51 = (double)(v48 + 1) - v72; /*0x654c01*/
                }
                else if ( v48 == v70 - 1 ) /*0x654c0e*/
                {
                  v51 = v37 - (double)v76; /*0x654c14*/
                }
                else
                {
                  v51 = 1.0; /*0x654c18*/
                }
              }
              else
              {
                v51 = v73; /*0x654bea*/
              }
              v52 = v45; /*0x654c1e*/
              v85 = v45; /*0x654c22*/
              if ( v45 < v47 ) /*0x654c26*/
              {
                v53 = v78; /*0x654c32*/
                v54 = v47 - v45; /*0x654c38*/
                v55 = v93 * *((unsigned int *)v6 + 1169); /*0x654c3a*/
                v56 = v77; /*0x654c3f*/
                for ( i = v54; ; v54 = i ) /*0x654c43*/
                {
                  if ( v54 > 1 ) /*0x654c50*/
                  {
                    if ( v52 == v100 ) /*0x654c5f*/
                    {
                      v57 = (double)(v52 + 1) - v98; /*0x654c6c*/
                    }
                    else if ( v52 == v47 - 1 ) /*0x654c7a*/
                    {
                      v79 = v98 + v74; /*0x654b97*/
                      v57 = v79 - (double)v85; /*0x654c80*/
                    }
                    else
                    {
                      v57 = 1.0; /*0x654c86*/
                    }
                  }
                  else
                  {
                    v57 = v74; /*0x654c52*/
                  }
                  v58 = v57 * v51 * v95; /*0x654c90*/
                  if ( v53 < v55 ) /*0x654c94*/
                  {
                    v59 = (uint8_t *)(*((unsigned int *)v6 + 1167) + v56); /*0x654c98*/
                    v40 = v40 + (double)*v59 * v58; /*0x654cba*/
                    v6 = this; /*0x654cc4*/
                    v41 = v41 + (double)v59[1] * v58; /*0x654cca*/
                    v42 = v42 + (double)v59[2] * v58; /*0x654cd2*/
                  }
                  ++v52; /*0x654cda*/
                  v56 += 3; /*0x654cdb*/
                  ++v53; /*0x654cde*/
                  v85 = v52; /*0x654ce1*/
                  if ( v52 >= v47 ) /*0x654ce5*/
                    break; /*0x654ce5*/
                }
                v48 = v76; /*0x654ceb*/
                v45 = v100; /*0x654cef*/
                v50 = v75; /*0x654cf6*/
              }
              v77 += 3 * v75; /*0x654d0a*/
              v76 = ++v48; /*0x654d17*/
              v78 += v50; /*0x654d1b*/
            }
            while ( v48 < v70 ); /*0x654d1f*/
            v36 = v71; /*0x654d25*/
          }
          LOWORD(v60) = Math::RoundToInt(v37); /*0x654d2f*/
          v61 = 255; /*0x654d39*/
          if ( v60 <= 255 ) /*0x654d3e*/
            v61 = v60; /*0x654d40*/
          LOWORD(v62) = Math::RoundToInt(v37); /*0x654d48*/
          v63 = 255; /*0x654d52*/
          if ( v62 <= 255 ) /*0x654d57*/
            v63 = v62; /*0x654d59*/
          LOWORD(v64) = Math::RoundToInt(v37); /*0x654d61*/
          if ( v64 > 255 ) /*0x654d6b*/
            v64 = 255; /*0x654d6d*/
          v98 = v98 + v74; /*0x654d84*/
          v86 += 2; /*0x654db6*/
          *(unsigned short *)(v86 - 2) = (v61 >> g_BitMask_Red << g_BitShift_Blue) /*0x654dbc*/
                              | (v63 >> g_BitMask_Blue << g_BitMask_Green)
                              | (v64 >> g_BitShift_Green_0 << g_BitShift_Red);
          --v87; /*0x654dc5*/
        }
        while ( v87 ); /*0x654dc9*/
        v26 = v82; /*0x654dcf*/
      }
      v98 = v88; /*0x654dde*/
      v72 = v37; /*0x654de5*/
      v65 = v91 == 1; /*0x654df6*/
      v80 += 2 * v97; /*0x654df7*/
      --v91; /*0x654dfb*/
    }
    while ( !v65 ); /*0x654dff*/
    v32 = v81; /*0x654e05*/
    v31 = v69; /*0x654e09*/
  }
  (*(void (**)(unsigned int))(**((unsigned int **)v6 + 1160) + 96))(*((unsigned int *)v6 + 1160)); /*0x654e15*/
  v66 = v97 * v31 / 8 + 1; /*0x654e33*/
  if ( !*((unsigned int *)v6 + 1181) ) /*0x654e2a*/
  {
    v67 = (void *)__2_YAPAXI_Z(v66); /*0x654e40*/
    *((unsigned int *)v6 + 1181) = v67; /*0x654e49*/
    memset(v67, 0, v66); /*0x654e52*/
    v26 = v82; /*0x654e5b*/
  }
  *aP1 = v26; /*0x654e74*/
  aP1[1] = v84; /*0x654e77*/
  aP1[2] = v83 - v26; /*0x654e7a*/
  aP1[3] = v32 - v84; /*0x654e7f*/
  return aP1; /*0x654e76*/

}

// ==== BACKFILL 0x00654EA0  RadarClass::UpdateBlips  cls=RadarClass  sig=csp  renamed_refs=0  residual=- ====
int RadarClass::UpdateBlips(int a1, void* a2) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x00655990  RadarClass::Process  cls=RadarClass  sig=csp  renamed_refs=0  residual=- ====
int RadarClass::Process() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 19 errs): wrong-universe gap2 body; truth func_0x655990.json */
}

// ==== BACKFILL 0x00655A90  TacticalClass::FreeResources  cls=TacticalClass  sig=csp  renamed_refs=0  residual=- ====
void TacticalClass::FreeResources() {
}

// ==== BACKFILL 0x00655B20  RadarClass::InitializeHashTable  cls=RadarClass  sig=csp  renamed_refs=0  residual=- ====
void RadarClass::InitializeHashTable() {
}

// ==== BACKFILL 0x006563B0  RadarClass::UpdateFoundationShapesCustom  cls=RadarClass  sig=csp  renamed_refs=0  residual=- ====
int RadarClass::UpdateFoundationShapesCustom() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 9 errs): wrong-universe gap2 body; truth func_0x6563B0.json */
}

// ==== BACKFILL 0x00656580  Diplomacy::GetField  cls=Diplomacy  sig=csp  renamed_refs=0  residual=- ====
char * Diplomacy::GetField(int aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x656580)
}

// ==== BACKFILL 0x00656DF0  HouseClass::SetRadarVisibility  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
void HouseClass::SetRadarVisibility(int a1)
{
    (void)a1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00656DF0.json)
}

// ==== BACKFILL 0x00656E50  RadarClass::IsActiveMode  cls=RadarClass  sig=csp  renamed_refs=0  residual=- ====
int RadarClass::IsActiveMode() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 2 errs): wrong-universe gap2 body; truth func_0x656E50.json */
}

// ==== BACKFILL 0x00656E90  RadarClass::SetFlag  cls=RadarClass  sig=csp  renamed_refs=0  residual=- ====
bool RadarClass::SetFlag() {
  return false;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x006578F0  TacticalClass::ProcessChronoEffect  cls=TacticalClass  sig=csp  renamed_refs=0  residual=- ====
void TacticalClass::ProcessChronoEffect() {
}

// ==== BACKFILL 0x00658770  RadarClass::Destru_vt33  cls=RadarClass  sig=csp  renamed_refs=0  residual=- ====
void* RadarClass::Destru_vt33(int a2) {
  return nullptr;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x658770.json */
}

// ==== BACKFILL 0x00658780  TacticalClass::renderOverlay  cls=RTacticalClass@RadarClass  sig=csp  renamed_refs=0  residual=- ====
void TacticalClass::renderOverlay()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00658780.json)
}

// ==== BACKFILL 0x006587A0  RadarClass::Destru_vt04  cls=RadarClass  sig=csp  renamed_refs=0  residual=- ====
void* RadarClass::Destru_vt04(int a1) {
  return nullptr;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x006594A0  RadBeam::drawPipScale  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int RadBeam::drawPipScale(int* a2) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 3 errs): wrong-universe gap2 body; truth func_0x6594a0.json */
}

// ==== BACKFILL 0x006594C0  RadBeam::drawSpawnPips  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int RadBeam::drawSpawnPips(int* a2) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 18 errs): wrong-universe gap2 body; truth func_0x6594c0.json */
}

// ==== BACKFILL 0x006594E0  RadBeam::drawAmmoPips  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int RadBeam::drawAmmoPips(int a2) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x6594e0.json */
}

// ==== BACKFILL 0x006594F0  RadBeam::drawTiberiumPips  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int RadBeam::drawTiberiumPips(int a2, int a3) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x6594f0.json */
}

// ==== BACKFILL 0x00659510  SpreadRadiationAreaEffect_Helper  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_659510::sub_659510(int a2, int a3)
{

  (&this->ambientSoundController)[3] = a2; /*0x659518*/
  (&this->ambientSoundController)[4] = a3; /*0x65951b*/
  return a2; /*0x65951e*/

}

// ==== BACKFILL 0x00659530  SpreadRadiationAreaEffect_Helper_659530  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_659530::sub_659530(int a2)
{

  (&this->customSound_controller)[0] = a2; /*0x659534*/
  return a2; /*0x659537*/

}

// ==== BACKFILL 0x00659540  RadBeam::drawMindControlPips  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int RadBeam::drawMindControlPips(int a2) {
  ((unsigned int *)this)[1] = a2; /*0x659544*/
  return a2; /*0x659547*/
}

// ==== BACKFILL 0x00659550  RadBeam::drawPassengerPips  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
char RadBeam::drawPassengerPips(char a2) {
  IDA_LOBYTE(((unsigned int *)this)[2]) = a2; /*0x659554*/
  return a2; /*0x659557*/
}

// ==== BACKFILL 0x00659560  sub_659560  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_659560()
{
      // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00659560.json)
}

// ==== BACKFILL 0x00659570  sub_659570  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_659570()
{
     return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00659570.json)
}

// ==== BACKFILL 0x00659650  RenderProjectileTrail  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
bool Gap2Recv_659650::RenderProjectileTrail() {

  double v1; // st7
  int owningHouseIndex; // ebp
  int *v4; // eax
  unsigned char *vtable1; // ecx
  int v7; // edx
  ObjectClass **v8; // eax
  TagClass *v9; // edx
  BombClass *v10; // edi
  int *v11; // eax
  int v13; // eax
  int v14; // ecx
  int customSound; // edx
  int v16; // ecx
  int v17; // edx
  int v18; // ecx
  int fallRate; // edx
  int64_t v22; // rax
  int v23; // ebp
  int v24; // edi
  int v25; // eax
  int v27; // eax
  int v28; // edi
  int v30; // edx
  int v31; // eax
  double v32; // [esp+8h] [ebp-40h]
  double v33; // [esp+8h] [ebp-40h]
  int v34; // [esp+20h] [ebp-28h]
  int v35; // [esp+20h] [ebp-28h]
  int v36; // [esp+20h] [ebp-28h]
  int v37[2]; // [esp+24h] [ebp-24h] BYREF
  int v38; // [esp+2Ch] [ebp-1Ch] BYREF
  int v39; // [esp+30h] [ebp-18h]
  int v40; // [esp+34h] [ebp-14h]
  int v41[4]; // [esp+38h] [ebp-10h] BYREF
  int savedregs; // [esp+48h] [ebp+0h] BYREF

  owningHouseIndex = (int)&savedregs; /*0x659651*/
  _ESI = this; /*0x65965c*/
  if ( !LOBYTE(((unsigned int *)this)[0]) ) /*0x65965f*/
  {
    LOBYTE(((unsigned int *)this)[0]) = 1; /*0x659666*/
    v4 = Coord::Subtract( /*0x65968c*/
           (Coord *)&v38,
           (int)this->nextObject - this->occupant,
           (int)this->attachedTag - this->owningHouseIndex,
           (int)this->attachedBomb - this->fallRate);
    _ESI->customSound_controller[3] = *v4; /*0x659698*/
    _ESI->customSound_controller[4] = v4[1]; /*0x65969d*/
    _ESI->customSound = v4[2]; /*0x6596a3*/
    v34 = _ESI->customSound * _ESI->customSound /*0x6596c1*/
        + _ESI->customSound_controller[4] * _ESI->customSound_controller[4]
        + _ESI->customSound_controller[3] * _ESI->customSound_controller[3];
    __asm /*0x6596c5*/
    {
      fild [esp+40h+var_28]
      fstp [esp+40h+var_40]; double
    }
    Math::Sqrt(v32); /*0x6596cc*/
    __asm { fstp qword ptr [esi+68h] } /*0x6596d1*/
    *(double *)&_ESI->bombVisible = _RT1; /*0x6596d1*/
  }
  if ( LOBYTE(_ESI->customSound_controller[2]) ) /*0x6596d7*/
  {
    vtable1 = ((unsigned int *)_ESI)[0]; /*0x6596e2*/
    if ( vtable1 ) /*0x6596e7*/
    {
      v7 = *(unsigned int *)vtable1; /*0x6596f0*/
      if ( (vtable1[20] & 2) != 0 ) /*0x6596f4*/
        v8 = (ObjectClass **)(*(int (**)(int *))(v7 + 164))(&v38); /*0x659705*/
      else
        v8 = (ObjectClass **)(*(int (**)(int *))(v7 + 88))(&v38); /*0x6596fb*/
      v9 = (TagClass *)v8[1]; /*0x65970d*/
      v10 = (BombClass *)v8[2]; /*0x659710*/
      _ESI->nextObject = *v8; /*0x659718*/
      _ESI->attachedTag = v9; /*0x65971a*/
      _ESI->attachedBomb = v10; /*0x65971d*/
      owningHouseIndex = _ESI->owningHouseIndex; /*0x659729*/
      v11 = Coord::Subtract( /*0x659741*/
              (Coord *)&v38,
              (int)_ESI->nextObject - _ESI->occupant,
              (int)_ESI->attachedTag - owningHouseIndex,
              (int)_ESI->attachedBomb - _ESI->fallRate);
      _ESI->customSound_controller[3] = *v11; /*0x65974d*/
      _ESI->customSound_controller[4] = v11[1]; /*0x659752*/
      _ESI->customSound = v11[2]; /*0x659758*/
      v35 = _ESI->customSound * _ESI->customSound /*0x659776*/
          + _ESI->customSound_controller[4] * _ESI->customSound_controller[4]
          + _ESI->customSound_controller[3] * _ESI->customSound_controller[3];
      __asm /*0x65977a*/
      {
        fild [esp+40h+var_28]
        fstp [esp+40h+var_40]; double
      }
      Math::Sqrt(v33); /*0x659781*/
      __asm { fstp qword ptr [esi+68h] } /*0x659786*/
      *(double *)&_ESI->bombVisible = _RT1; /*0x659786*/
    }
  }
  if ( BYTE1(((unsigned int *)_ESI)[0]) ) /*0x65978c*/
  {
    __asm /*0x659797*/
    {
      fld qword ptr [esi+68h]
      fdiv qword ptr [esi+18h]
    }
    LOWORD(v13) = Math::RoundToInt(v1); /*0x65979d*/
    v14 = _ESI->customSound_controller[4]; /*0x6597a5*/
    v38 = _ESI->customSound_controller[3]; /*0x6597a8*/
    customSound = _ESI->customSound; /*0x6597ac*/
    v39 = v14; /*0x6597af*/
    *(unsigned int *)&_ESI->onBridge = v13; /*0x6597b8*/
    v40 = customSound; /*0x6597be*/
    Render_Render_65A1B0((ObjectClass *)&v38, v13); /*0x6597c2*/
    __asm /*0x6597c7*/
    {
      fild dword ptr [esi+7Ch]
      fidiv dword ptr [esi+3Ch]
    }
    v16 = v38; /*0x6597cd*/
    v17 = v39; /*0x6597d1*/
    _ESI->parachute = 0; /*0x6597e1*/
    *(unsigned int *)&_ESI->isAliveFlag = v16; /*0x6597eb*/
    v18 = v40; /*0x6597ed*/
    _ESI->lastLayer = v17; /*0x6597f1*/
    *(unsigned int *)&_ESI->isInLogic = v18; /*0x6597f7*/
    _ESI->location[0] = _ESI->occupant; /*0x6597fe*/
    fallRate = _ESI->fallRate; /*0x659803*/
    _ESI->location[1] = _ESI->owningHouseIndex; /*0x659806*/
    _ESI->location[2] = fallRate; /*0x65980c*/
    LOWORD(_ESI[1]) = ((unsigned int *)_ESI)[0]; /*0x659818*/
    BYTE2(_ESI[1]) = BYTE2(((unsigned int *)_ESI)[0]); /*0x65981e*/
    __asm /*0x659821*/
    {
      fmul qword ptr [esi+40h]
      fstp qword ptr [esi+80h]
    }
    *(double *)&_ESI->needsRedraw = _RT1; /*0x659824*/
    __asm /*0x65982a*/
    {
      fld ds:dbl_7E2800
      fcomp qword ptr [esi+68h]
      fnstsw ax
    }
    if ( (_AX & 0x100) != 0 ) /*0x659838*/
    {
      do /*0x659962*/
      {
        v22 = ProjectileTrail::ComputeRenderData((ProjectileTrail *)_ESI); /*0x659840*/
        LOWORD(owningHouseIndex) = (uint8_t)(BYTE2(_ESI[1]) >> g_BitMask_Red); /*0x65985f*/
        WORD2(v22) = (uint8_t)(BYTE1(_ESI[1]) >> g_BitMask_Blue); /*0x659876*/
        HIDWORD(v22) <<= g_BitMask_Green; /*0x65987e*/
        v23 = HIDWORD(v22) | (owningHouseIndex << g_BitShift_Blue); /*0x65988e*/
        WORD2(v22) = (uint8_t)(LOBYTE(_ESI[1]) >> g_BitShift_Green_0); /*0x659893*/
        owningHouseIndex = (HIDWORD(v22) << g_BitShift_Red) | v23; /*0x6598a3*/
        Coord::To_Screen((Coord *)g_TacticalClass_Instance, _ESI->location, &v38); /*0x6598a5*/
        Coord::To_Screen((Coord *)g_TacticalClass_Instance, &_ESI->lineTrailer, v37); /*0x6598bc*/
        v41[0] = DSurface_ViewBounds.field_0; /*0x6598d2*/
        v41[1] = (int)DSurface_ViewBounds.field_4; /*0x6598dc*/
        v41[2] = *(unsigned int *)DSurface_ViewBounds.__pad_8; /*0x6598e4*/
        v41[3] = *(unsigned int *)&DSurface_ViewBounds.__pad_8[4]; /*0x6598e8*/
        if ( (uint8_t)ClipLine(&v38, v37, v41) ) /*0x6598f5*/
        {
          v24 = (int)((unsigned int *)_ESI)[0] - ZCoordToScreenY(_ESI->location[2]) - 2; /*0x659911*/
          v25 = ZCoordToScreenY((int)_ESI[1]); /*0x659914*/
          (*(void (**)(AudioStream *, CellStruct *, int *, int *, unsigned int, int, int, unsigned int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 52))( /*0x65993f*/
            g_DSurface_Hidden_2,
            &DSurface_ViewBounds,
            &v38,
            v37,
            (int16_t)owningHouseIndex,
            v24,
            -2 - v25,
            0);
        }
        v36 = (int)&_ESI->parachute->AnimClass_field_0x0 + 1; /*0x659949*/
        _ESI->parachute = (AnimClass *)v36; /*0x65994d*/
        __asm /*0x659953*/
        {
          fild [esp+38h+var_28]
          fmul qword ptr [esi+18h]
          fcomp qword ptr [esi+68h]
          fnstsw ax
        }
      }
      while ( (_AX & 0x100) != 0 ); /*0x659962*/
    }
  }
  if ( LOBYTE(_ESI->customSound_controller[2]) ) /*0x659968*/
  {
    v27 = _ESI->customSound_controller[1]; /*0x65996f*/
    v28 = v27 + _ESI->visibilityFlags; /*0x659975*/
    _ESI->visibilityFlags = v28; /*0x659979*/
    if ( v28 <= 0 || v28 >= _ESI->ambientSoundController[0] ) /*0x659983*/
    {
      _ESI->customSound_controller[1] = -v27; /*0x659987*/
      if ( _ESI->visibilityFlags < 0 ) /*0x65998f*/
        _ESI->visibilityFlags = 0; /*0x659991*/
    }
    return 0; /*0x659998*/
  }
  else
  {
    v30 = _ESI->ambientSoundController[0]; /*0x6599a5*/
    v31 = _ESI->visibilityFlags + 1; /*0x6599ab*/
    _ESI->visibilityFlags = v31; /*0x6599ad*/
    return v31 >= v30; /*0x6599b6*/
  }

}

// ==== BACKFILL 0x006599C0  sub_6599C0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_6599C0()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006599C0.json)
}

// ==== BACKFILL 0x00659A30  sub_659A30  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
short sub_659A30()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00659A30.json)
}

// ==== BACKFILL 0x00659E30  Weapon_Update_Update  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_659E30::Weapon_Update_Update() {

  double v1; // st7
  int occupant; // ebp
  char *v4; // edx
  int *v5; // edi
  char *v6; // ecx
  int result; // eax
  int v9; // edi
  int v10; // ebx
  int customSound; // ebp
  int v12; // ecx
  int *p_estimatedHealth; // esi
  double v14; // [esp+0h] [ebp-1Ch]
  int v15; // [esp+18h] [ebp-4h]

  _ESI = this; /*0x659e34*/
  occupant = this->occupant; /*0x659e46*/
  v4 = (char *)this->attachedBomb - this->fallRate; /*0x659e49*/
  v5 = &this->customSound_controller[3]; /*0x659e4b*/
  v6 = (char *)this->attachedTag - this->owningHouseIndex; /*0x659e4e*/
  _ESI->customSound_controller[3] = (int)_ESI->nextObject - occupant; /*0x659e57*/
  _ESI->customSound_controller[4] = (int)v6; /*0x659e59*/
  _ESI->customSound = (int)v4; /*0x659e5c*/
  v15 = _ESI->customSound * _ESI->customSound /*0x659e7a*/
      + _ESI->customSound_controller[4] * _ESI->customSound_controller[4]
      + _ESI->customSound_controller[3] * _ESI->customSound_controller[3];
  __asm /*0x659e7e*/
  {
    fild [esp+1Ch+var_4]
    fstp [esp+1Ch+var_1C]; double
  }
  Math::Sqrt(v14); /*0x659e85*/
  __asm { fst qword ptr [esi+68h] } /*0x659e8a*/
  *(double *)&_ESI->bombVisible = _RT1; /*0x659e8a*/
  __asm { fdiv qword ptr [esi+18h] } /*0x659e8d*/
  LOWORD(result) = Math::RoundToInt(v1); /*0x659e93*/
  v9 = *v5; /*0x659e98*/
  v10 = _ESI->customSound_controller[4]; /*0x659e9a*/
  customSound = _ESI->customSound; /*0x659e9d*/
  v12 = result; /*0x659ea0*/
  *(unsigned int *)&_ESI->onBridge = result; /*0x659ea4*/
  if ( result ) /*0x659eaa*/
  {
    v9 /= result; /*0x659eb1*/
    v10 /= result; /*0x659eb8*/
    result = customSound / result; /*0x659ebd*/
    customSound /= v12; /*0x659ebf*/
  }
  p_estimatedHealth = &_ESI->estimatedHealth; /*0x659ec1*/
  *p_estimatedHealth = v9; /*0x659ec4*/
  p_estimatedHealth[1] = v10; /*0x659ec7*/
  p_estimatedHealth[2] = customSound; /*0x659eca*/
  return result; /*0x659ec6*/

}

// ==== BACKFILL 0x00659EE0  Weapon_Update_Update_659EE0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_659EE0::Weapon_Update_Update_659EE0() {

  double v1; // st7
  int v3; // edi
  int visibilityFlags; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int result; // eax
  int v11; // edi
  int v12; // ebx
  int customSound; // ebp
  int v14; // ecx
  char *p_isAliveFlag; // esi
  double v16; // [esp+0h] [ebp-20h]
  int v17; // [esp+18h] [ebp-8h]
  int v18; // [esp+18h] [ebp-8h]
  int v19; // [esp+1Ch] [ebp-4h]
  int v20; // [esp+1Ch] [ebp-4h]
  int v21; // [esp+1Ch] [ebp-4h]

  _ESI = this; /*0x659ee6*/
  v3 = this->ambientSoundController[0]; /*0x659ee9*/
  visibilityFlags = this->visibilityFlags; /*0x659eec*/
  v19 = v3; /*0x659ef1*/
  if ( visibilityFlags >= v3 / 2 ) /*0x659eff*/
  {
    v18 = v3 - 2 * visibilityFlags % v3; /*0x659f10*/
    __asm { fild [esp+18h+var_8] } /*0x659f14*/
  }
  else
  {
    v17 = 2 * visibilityFlags; /*0x659f01*/
    __asm { fild [esp+18h+var_8] } /*0x659f05*/
  }
  __asm { fild [esp+18h+var_4] } /*0x659f18*/
  __asm { fdivr st, st(1) }
  v20 = visibilityFlags * _ESI->customSound_controller[0]; /*0x659f24*/
  __asm /*0x659f28*/
  {
    fmul qword ptr [esi+40h]
    fstp qword ptr [esi+80h]
  }
  *(double *)&_ESI->needsRedraw = _RT1; /*0x659f2b*/
  __asm /*0x659f31*/
  {
    fstp st
    fild [esp+18h+var_4]
    fmul qword ptr [esi+48h]
  }
  LOWORD(v6) = Math::RoundToInt(v1); /*0x659f3a*/
  v7 = v6 * *(unsigned int *)&_ESI->isOnMap + _ESI->customSound_controller[4]; /*0x659f5f*/
  v8 = v6 * _ESI->spawnStatus + _ESI->customSound; /*0x659f64*/
  _ESI->customSound_controller[3] += v6 * _ESI->estimatedHealth; /*0x659f68*/
  _ESI->customSound_controller[4] = v7; /*0x659f6a*/
  _ESI->customSound = v8; /*0x659f6d*/
  v21 = _ESI->customSound * _ESI->customSound /*0x659f8b*/
      + _ESI->customSound_controller[4] * _ESI->customSound_controller[4]
      + _ESI->customSound_controller[3] * _ESI->customSound_controller[3];
  __asm /*0x659f8f*/
  {
    fild [esp+20h+var_4]
    fstp [esp+20h+var_20]; double
  }
  Math::Sqrt(v16); /*0x659f96*/
  __asm { fst qword ptr [esi+68h] } /*0x659f9b*/
  *(double *)&_ESI->bombVisible = _RT1; /*0x659f9b*/
  __asm { fdiv qword ptr [esi+18h] } /*0x659f9e*/
  LOWORD(result) = Math::RoundToInt(v1); /*0x659fa4*/
  v11 = _ESI->customSound_controller[3]; /*0x659fa9*/
  v12 = _ESI->customSound_controller[4]; /*0x659fab*/
  customSound = _ESI->customSound; /*0x659fae*/
  v14 = result; /*0x659fb1*/
  *(unsigned int *)&_ESI->onBridge = result; /*0x659fb5*/
  if ( result ) /*0x659fbb*/
  {
    v11 /= result; /*0x659fc2*/
    v12 /= result; /*0x659fc9*/
    result = customSound / result; /*0x659fce*/
    customSound /= v14; /*0x659fd0*/
  }
  p_isAliveFlag = &_ESI->isAliveFlag; /*0x659fd2*/
  *(unsigned int *)p_isAliveFlag = v11; /*0x659fd8*/
  *((unsigned int *)p_isAliveFlag + 1) = v12; /*0x659fdb*/
  *((unsigned int *)p_isAliveFlag + 2) = customSound; /*0x659fde*/
  return result; /*0x659fda*/

}

// ==== BACKFILL 0x00659FF0  Weapon_Update_Update_659FF0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
long long Gap2Recv_659FF0::Weapon_Update_Update_659FF0() {

  double v2; // st7
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  double v6; // st7
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  double v10; // st7
  int64_t result; // rax
  double v12; // [esp+18h] [ebp-10h]
  double v13; // [esp+20h] [ebp-8h]

  v2 = Math::SinCos(dbl_839530 * ((double)*((int *)this + 34) / (double)*((int *)this + 35) * 180.0)) /*0x65a02c*/
     * *(double *)((char *)this + 128);
  v3 = Math::RoundToInt(v2); /*0x65a036*/
  v4 = v3 * *((unsigned int *)this + 37) + *((unsigned int *)this + 10); /*0x65a05e*/
  v5 = v3 * *((unsigned int *)this + 38) + *((unsigned int *)this + 11); /*0x65a063*/
  *((unsigned int *)this + 39) = v3 * *((unsigned int *)this + 36) + *((unsigned int *)this + 9); /*0x65a06b*/
  *((unsigned int *)this + 40) = v4; /*0x65a071*/
  *((unsigned int *)this + 41) = v5; /*0x65a074*/
  *((unsigned int *)this + 41) = Math::RoundToInt(v2); /*0x65a084*/
  v6 = Math::SinCos(dbl_839530 * ((double)(*((unsigned int *)this + 34) + 1) / (double)*((int *)this + 35) * 180.0)) /*0x65a0c1*/
     * *(double *)((char *)this + 128);
  v7 = Math::RoundToInt(v6); /*0x65a0ce*/
  v8 = v7 * *((unsigned int *)this + 37) + *((unsigned int *)this + 10); /*0x65a0f6*/
  v9 = v7 * *((unsigned int *)this + 38) + *((unsigned int *)this + 11); /*0x65a0fb*/
  *((unsigned int *)this + 42) = v7 * *((unsigned int *)this + 36) + *((unsigned int *)this + 9); /*0x65a103*/
  *((unsigned int *)this + 43) = v8; /*0x65a109*/
  *((unsigned int *)this + 44) = v9; /*0x65a10c*/
  *((unsigned int *)this + 44) = Math::RoundToInt(v6); /*0x65a11c*/
  v10 = (double)(int)abs32(Math::RoundToInt(v6)) * 0.5 / *(double *)((char *)this + 64) + 0.5; /*0x65a146*/
  *(double *)((char *)this + 184) = v10; /*0x65a14c*/
  v12 = (double)*(uint8_t *)((char *)this + 33) * v10; /*0x65a166*/
  v13 = (double)*(uint8_t *)((char *)this + 34) * v10; /*0x65a174*/
  *((unsigned char *)this + 192) = Math::RoundToInt(v10); /*0x65a189*/
  *((unsigned char *)this + 193) = Math::RoundToInt(v12); /*0x65a198*/
  result = Math::RoundToInt(v13); /*0x65a19e*/
  *((unsigned char *)this + 194) = result; /*0x65a1a3*/
  return result; /*0x65a1a9*/

}

// ==== BACKFILL 0x0065A7E0  Helper_65A7E0  cls=RadioClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_65A7E0::Helper_65A7E0(TechnoClass * aP1) {

  ObjectClass::Init((ObjectClass *)this, aP1); /*0x65a7e8*/
  this->radioLinks[0] = (int)&vt_VectorClass; /*0x65a7ed*/
  /* X11: vtable install elided (implicit via RadioClass virtuals 0x65a7f7) */
  ((unsigned int *)this)[0] = &vt_RadioClass; /*0x65a7fd*/
  ((unsigned int *)this)[0] = &vt_RadioClass; /*0x65a804*/
  ((unsigned int *)this)[0] = &vt_RadioClass; /*0x65a80b*/
  return this; /*0x65a814*/

}

// ==== BACKFILL 0x0065AAC0  RadioClass::ExecuteAction  cls=RadioClass  sig=csp  renamed_refs=0  residual=- ====
int RadioClass::ExecuteAction(TimerStruct * aP1, IUnknown * aP2)
{

  int result; // eax
  int i; // ecx
  int v6; // eax
  int v7; // edx
  unsigned int *v8; // eax

  ((Object *)((ObjectClass *)this))->Unlink(); /*0x65aacf*/
  result = (&this->radioLinks)[2]; /*0x65aad4*/
  for ( i = 0; i < result; ++i ) /*0x65aade*/
  {
    v6 = (&this->radioLinks)[1]; /*0x65aae0*/
    v7 = *(unsigned int *)(v6 + 4 * i); /*0x65aae6*/
    v8 = (unsigned int *)(v6 + 4 * i); /*0x65aae9*/
    if ( v7 == (int)(aP1) ) /*0x65aaee*/
    {
      if ( aP2 ) /*0x65aaf2*/
        *v8 = 0; /*0x65aaf4*/
    }
    result = (&this->radioLinks)[2]; /*0x65aafa*/
  }
  return result; /*0x65ab05*/

}

// ==== BACKFILL 0x0065AC40  RadioClass::SaveState  cls=RadioClass  sig=csp  renamed_refs=0  residual=- ====
int RadioClass::SaveState(int * a0, RadioClass * aP1, int aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x65AC40)
}

// ==== BACKFILL 0x0065B2F0  RadSiteClass::Constructor  cls=RadSiteClass  sig=csp  renamed_refs=0  residual=- ====
void RadSiteClass::Constructor() {
  TerrainClass *v2; // eax
  int v3; // edx
  LightSourceClass *LightSource; // ecx
  int v5; // eax
  RadSiteClass *v6; // [esp+4h] [ebp-4h] BYREF

  this->AbstractClass = (void *)&RadSiteClass_vftable; /*0x65b2fc*/
  ((unsigned int *)this)[0] = (void *)&RadSiteClass_vftable; /*0x65b303*/
  ((unsigned int *)this)[0] = (void *)&RadSiteClass_vftable; /*0x65b30a*/
  ((unsigned int *)this)[0] = (void *)&RadSiteClass_vftable; /*0x65b311*/
  v2 = (TerrainClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)this->BaseCell); /*0x65b318*/
  TerrainClass::SetFieldF8(v2, 0); /*0x65b321*/
  IDA_LOBYTE(v3) = 1; /*0x65b326*/
  AbstractClass::AnnounceExpiredPointer(this, v3); /*0x65b32a*/
  LightSource = this->LightSource; /*0x65b32f*/
  if ( LightSource ) /*0x65b334*/
  {
    (*((void (**)(LightSourceClass *, int))LightSource->vtable1 + 8))(LightSource, 1); /*0x65b33a*/
    this->LightSource = 0; /*0x65b33d*/
  }
  v6 = this; /*0x65b354*/
  v5 = (*(int (**)(int *, RadSiteClass **))(RadSiteClass_Array + 16))(&RadSiteClass_Array, &v6); /*0x65b358*/
  if ( v5 != -1 && v5 < dword_B04BE0 && v5 < --dword_B04BE0 ) /*0x65b373*/
  {
    do /*0x65b38b*/
    {
      ++v5; /*0x65b37b*/
      *((unsigned int *)dword_B04BD4 + v5 - 1) = *((unsigned int *)dword_B04BD4 + v5); /*0x65b37f*/
    }
    while ( v5 < dword_B04BE0 ); /*0x65b38b*/
  }
  AbstractClass::DTOR((AbstractClass *)this); /*0x65b38f*/
}

// ==== BACKFILL 0x0065B3A0  RadSiteClass::StubReturn116  cls=RadSiteClass  sig=csp  renamed_refs=0  residual=- ====
int RadSiteClass::StubReturn116()
{

  return 116; /*0x65b3a5*/

}

// ==== BACKFILL 0x0065B3B0  RadSiteClass::PowerDrainUpdate  cls=RadSiteClass  sig=csp  renamed_refs=0  residual=- ====
int RadSiteClass::PowerDrainUpdate(int a1) {
// 0x410410
  return AbstractClass::ProcessPower((AbstractClass *)this); /*0x65b3ba*/
}

// ==== BACKFILL 0x0065B3C0  RadSiteClass::StubReturn69  cls=RadSiteClass  sig=csp  renamed_refs=0  residual=- ====
int RadSiteClass::StubReturn69()
{

  return 69; /*0x65b3c5*/

}

// ==== BACKFILL 0x0065B3D0  RadSiteClass::SaveLoad_Prefix  cls=RadSiteClass  sig=csp  renamed_refs=0  residual=- ====
int RadSiteClass::SaveLoad_Prefix(AbstractClass * aP0, int aP1)
{

  int Prefix_0; // edi
  int v3; // edx

  Prefix_0 = AbstractClass::SaveLoad_Prefix_0(aP0,(gamemd::AbstractClass *)(aP1)); /*0x65b3e1*/
  if ( Prefix_0 >= 0 ) /*0x65b3e5*/
  {
    if ( aP0 ) /*0x65b3e9*/
    {
      AbstractClass::InitVtables((AbstractClass *)aP0, (int)&aP1); /*0x65b3f2*/
      v3 = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x65b3f7*/
      (&aP0->RadLevelTimer)[2] = 0; /*0x65b3fd*/
      (&aP0->RadLevelTimer)[0] = v3; /*0x65b404*/
      (&aP0->RadLightTimer)[0] = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x65b40c*/
      (&aP0->RadLightTimer)[2] = 0; /*0x65b40f*/
      /* X11: vtable install elided (implicit via RadSiteClass virtuals 0x65b416) */
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_RadSiteClass); /*0x65b41c*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_RadSiteClass); /*0x65b423*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_RadSiteClass); /*0x65b42a*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->LightSource); /*0x65b43a*/
  }
  return Prefix_0; /*0x65b441*/

}

// ==== BACKFILL 0x0065B450  RadSiteClass::SaveLoad_Prefix_0  cls=RadSiteClass  sig=csp  renamed_refs=0  residual=- ====
int RadSiteClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2)
{

  return AbstractClass::SaveLoad_Prefix((gamemd::ObjectTypeClass *)((int *)aP0),(gamemd::ObjectTypeClass *)(a1),(gamemd::ObjectTypeClass *)(aP2)); /*0x65b464*/

}

// ==== BACKFILL 0x0065B470  RadSiteClass::ddtor  cls=RadSiteClass  sig=csp  renamed_refs=0  residual=- ====
int RadSiteClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x65b476*/
    return -2147467261; /*0x65b478*/
  *a2 = 1090836288; /*0x65b486*/
  a2[1] = 299095303; /*0x65b48e*/
  a2[2] = -1610598260; /*0x65b497*/
  a2[3] = unk_7E98CC; /*0x65b4a0*/
  return 0; /*0x65b47d*/

}

// ==== BACKFILL 0x0065B4B0  RadSiteClass::GetSpread  cls=RadSiteClass  sig=csp  renamed_refs=0  residual=- ====
int RadSiteClass::GetSpread() const
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x65B4B0)
}

// ==== BACKFILL 0x0065BED0  RadSiteClass::ProcessEvent  cls=RadSiteClass  sig=csp  renamed_refs=0  residual=- ====
void* RadSiteClass::ProcessEvent(int a2) {
  RadSiteClass::Constructor(this); /*0x65bed3*/
  if ( (a2 & 1) != 0 ) /*0x65bedd*/
    RA2_OPDEL(this); /*0x65bee0*/
  return this; /*0x65beea*/
}

// ==== BACKFILL 0x0065C250  WinMain_Helper_65C250  cls=RAMFileClass  sig=csp  renamed_refs=0  residual=- ====
char* Gap2Recv_65C250::WinMain_Helper_65C250(int a2, int aP2) {

  this->__pad_0[4] = 0; /*0x65c25f*/
  this->RAMFileClass_field_0x8 = (AbstractClass *)a2; /*0x65c262*/
  this->RAMFileClass_field_0xC = (AbstractClass *)aP2; /*0x65c265*/
  this->RAMFileClass_field_0x10 = (AbstractClass *)aP2; /*0x65c268*/
  *((unsigned int *)this + 5) = 0; /*0x65c26b*/
  *((unsigned int *)this + 6) = 1; /*0x65c26e*/
  *((unsigned char *)this + 28) = 0; /*0x65c275*/
  *((unsigned char *)this + 29) = 0; /*0x65c278*/
  *(unsigned int *)this->__pad_0 = &vt_RAMFileClass; /*0x65c27b*/
  if ( !a2 && aP2 > 0 ) /*0x65c285*/
  {
    this->RAMFileClass_field_0x8 = (AbstractClass *)__2_YAPAXI_Z(aP2); /*0x65c290*/
    *((unsigned char *)this + 29) = 1; /*0x65c293*/
  }
  return this->__pad_0; /*0x65c299*/

}

// ==== BACKFILL 0x0065C2A0  WinMain_Helper_65C2A0  cls=RAMFileClass  sig=csp  renamed_refs=0  residual=- ====
void Gap2Recv_65C2A0::WinMain_Helper_65C2A0() {

  char v2; // al

  v2 = *((unsigned char *)this + 29); /*0x65c2a3*/
  *(unsigned int *)this->__pad_0 = &vt_RAMFileClass; /*0x65c2a6*/
  *((unsigned char *)this + 28) = 0; /*0x65c2ae*/
  if ( v2 ) /*0x65c2b2*/
  {
    __3_YAXPAX_Z(this->RAMFileClass_field_0x8); /*0x65c2b8*/
    this->RAMFileClass_field_0x8 = 0; /*0x65c2c0*/
    *((unsigned char *)this + 29) = 0; /*0x65c2c7*/
  }
  *(unsigned int *)this->__pad_0 = &vt_FileClass; /*0x65c2cb*/

}

// ==== BACKFILL 0x0065C2E0  AbstractClass::checkTeamMembership  cls=RAMFileClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::checkTeamMembership() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x65c2e0.json */
}

// ==== BACKFILL 0x0065C320  AbstractClass::updateTeamState  cls=RAMFileClass  sig=csp  renamed_refs=0  residual=- ====
char AbstractClass::updateTeamState()
{

  return 1; /*0x65c322*/

}

// ==== BACKFILL 0x0065C330  AbstractClass::processTeamOrder  cls=RAMFileClass  sig=csp  renamed_refs=0  residual=- ====
char AbstractClass::processTeamOrder()
{

  return *((unsigned char *)this + 28); /*0x65c333*/

}

// ==== BACKFILL 0x0065C340  AbstractClass::dispatchTeamEvent  cls=RAMFileClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::dispatchTeamEvent(int a2, int a3) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x65c340.json */
}

// ==== BACKFILL 0x0065C4A0  AbstractClass::checkTeamObjective  cls=RAMFileClass  sig=csp  renamed_refs=0  residual=- ====
int GScreenClass::checkTeamObjective()
{
     return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x0065C4A0.json)
}

// ==== BACKFILL 0x0065C540  AbstractClass::resetTeamState  cls=RAMFileClass  sig=csp  renamed_refs=0  residual=- ====
void AbstractClass::resetTeamState()
{

  *((unsigned char *)this + 28) = 0; /*0x65c540*/

}

// ==== BACKFILL 0x0065C550  nullsub_0_5  cls=RAMFileClass  sig=csp  renamed_refs=0  residual=- ====
char * nullsub_0_5()
{
     return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x0065C550.json)
}

// ==== BACKFILL 0x0065C570  nullsub_0_7  cls=RAMFileClass  sig=csp  renamed_refs=0  residual=- ====
int nullsub_0_7()
{
  return 0; /*0x65c572*/
}

// ==== BACKFILL 0x0065C580  nullsub_0_8  cls=RAMFileClass  sig=csp  renamed_refs=0  residual=- ====
char nullsub_0_8()
{
  return 1; /*0x65c582*/
}

// ==== BACKFILL 0x0065C590  nullsub_0_9  cls=RAMFileClass  sig=csp  renamed_refs=0  residual=- ====
void nullsub_0_9()
{
  ; /*0x65c590*/
}

// ==== BACKFILL 0x0065C5F0  FileClass::StubReturnFalse  cls=FileClass  sig=csp  renamed_refs=0  residual=- ====
int FileClass::StubReturnFalse()
{

  return 0; /*0x65c5f2*/

}

// ==== BACKFILL 0x0065C600  FileClass::Stub  cls=FileClass  sig=csp  renamed_refs=0  residual=- ====
char FileClass::Stub(int a1)
{

  return 0; /*0x65c602*/

}

// ==== BACKFILL 0x0065C610  AbstractClass::processAITrigger  cls=FileClass  sig=csp  renamed_refs=0  residual=- ====
FileClass * GScreenClass::processAITrigger(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0065C610.json)
}

// ==== BACKFILL 0x0065C6D0  SeedInitRNG  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_65C6D0::SeedInitRNG(int aP1) {

  int v2; // eax
  int v3; // ebp
  int v4; // esi
  int v5; // ebx
  int v6; // eax
  int v7; // edx
  int v8; // ecx
  void **p_vtable3; // [esp+10h] [ebp-14h]
  int v11; // [esp+14h] [ebp-10h]
  int v13; // [esp+20h] [ebp-4h]

  v2 = 0; /*0x65c6d3*/
  ((unsigned int *)this)[0] = 0; /*0x65c6da*/
  ((unsigned int *)this)[0] = (void *)103; /*0x65c6dd*/
  p_vtable3 = &((unsigned int *)this)[0]; /*0x65c6ea*/
  v11 = 250; /*0x65c6ee*/
  while ( 1 ) /*0x65c6fc*/
  {
    v3 = aP1; /*0x65c6fc*/
    v4 = v2; /*0x65c700*/
    v5 = 0; /*0x65c703*/
    v13 = v2 + 1; /*0x65c705*/
    do /*0x65c74f*/
    {
      v6 = v4; /*0x65c70f*/
      v7 = v4 ^ dword_839644[v5++]; /*0x65c711*/
      v8 = v3 /*0x65c746*/
         ^ ((uint16_t)v7 * (v7 >> 16)
          + (dword_839690[v5]
           ^ ((((uint16_t)v7 * (uint16_t)v7 + ~((v7 >> 16) * (v7 >> 16))) << 16)
            | (((uint16_t)v7 * (uint16_t)v7 + ~((v7 >> 16) * (v7 >> 16))) >> 16))));
      v4 = v8; /*0x65c74b*/
      v3 = v6; /*0x65c74d*/
    }
    while ( v5 < 4 ); /*0x65c74f*/
    *p_vtable3++ = (void *)v8; /*0x65c755*/
    if ( !--v11 ) /*0x65c767*/
      break; /*0x65c767*/
    v2 = v13; /*0x65c6f8*/
  }
  LOBYTE(this->AbstractClass) = 0; /*0x65c770*/
  return this; /*0x65c76d*/

}

// ==== BACKFILL 0x0065C890  sub_65C890  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_65C890(int a2, int a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0065C890.json)
}

// ==== BACKFILL 0x0065CA00  RawFileClass::Dtor  cls=RawFileClass  sig=csp  renamed_refs=0  residual=- ====
int RawFileClass::Dtor()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x65CA00)
}

// ==== BACKFILL 0x0065CA70  BufferIOFileClass::StubReturnFalse  cls=RawFileClass  sig=csp  renamed_refs=0  residual=- ====
void BufferIOFileClass::StubReturnFalse(int a1, int a2, int a3)
{

  ; /*0x65ca70*/

}

// ==== BACKFILL 0x0065CAC0  FileClass::SetName  cls=RawFileClass  sig=csp  renamed_refs=0  residual=- ====
void* FileClass::SetName(void* a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x65CAC0)
}

// ==== BACKFILL 0x0065CB30  RawFileClass::Close  cls=RawFileClass  sig=csp  renamed_refs=0  residual=- ====
int RawFileClass::Close(int a2, int a3)
{

  (*(void (**)(RawFileClass *, int))(*(unsigned int *)this->FileClass + 8))(this, a2); /*0x65cb3c*/
  return (*(int (**)(RawFileClass *, int))(*(unsigned int *)this->FileClass + 28))(this, a3); /*0x65cb4b*/

}

// ==== BACKFILL 0x0065D1F0  FileClass::GetDosTimestamp  cls=RawFileClass  sig=csp  renamed_refs=0  residual=- ====
int FileClass::GetDosTimestamp() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x65D1F0.json */
}

// ==== BACKFILL 0x0065D240  FileClass::SetTime  cls=RawFileClass  sig=csp  renamed_refs=0  residual=- ====
bool FileClass::SetTime(int wFatTime) {
  return false;  /* G42.33b2 restub: auto restub (pass4+, 3 errs): wrong-universe gap2 body; truth func_0x65D240.json */
}

// ==== BACKFILL 0x0065D3A0  RawFileClass::QueryInterface  cls=RawFileClass  sig=csp  renamed_refs=0  residual=- ====
void* RawFileClass::QueryInterface(int a1) {
  return nullptr;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x0065D420  RawFileClass::Write  cls=RawFileClass  sig=csp  renamed_refs=0  residual=- ====
bool RawFileClass::Write() {

  return *(unsigned int *)this->FileTimeDateLo != -1; /*0x65d42b*/

}

// ==== BACKFILL 0x0065D480  ComPtr::Set  cls=ComPtr  sig=csp  renamed_refs=0  residual=- ====
int ComPtr::Set(int a2) {
  int ComPtr_field_0x04; // ecx
  int result; // eax

  if ( a2 != this->ComPtr_field_0x04 ) /*0x65d48b*/
  {
    if ( a2 ) /*0x65d48f*/
      ++a2->q010; /*0x65d491*/
    ComPtr_field_0x04 = (int)(this->ComPtr_field_0x04); /*0x65d494*/
    if ( ComPtr_field_0x04 ) /*0x65d499*/
    {
      this->ComPtr_field_0x04 = 0; /*0x65d49b*/
      result = (*(int (**)(int))(*(unsigned int *)ComPtr_field_0x04 + 8))(ComPtr_field_0x04); /*0x65d4a4*/
    }
    this->ComPtr_field_0x04 = a2; /*0x65d4a7*/
  }
  return result; /*0x65d4aa*/
}

// ==== BACKFILL 0x0065D660  ReferenceCounted::Constructor  cls=ReferenceCounted  sig=csp  renamed_refs=0  residual=- ====
void ReferenceCounted::Constructor() {
    *(void **)(char *)this = 0; /*0x65d660 vfptr 安装 (cache: *this = &vftable)*/
}

// ==== BACKFILL 0x0065D690  VtableStub::RetZero_eax_35  cls=ReferenceCounted  sig=csp  renamed_refs=0  residual=- ====
char VtableStub::RetZero_eax_35(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x65D690)
}

// ==== BACKFILL 0x0065E650  sub_65E650  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char sub_65E650(int a1, int a2, int a3)
{
  return 0; /*0x65e652*/
}

// ==== BACKFILL 0x0065EAB0  globalHelper_05EAB0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int globalHelper_05EAB0(unsigned int * a0, int a2, IUnknown * aP2, int a4, int a5, int a6)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0065EAB0.json)
}

// ==== BACKFILL 0x0065F710  sub_65F710  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_65F710(HWND hDlg, unsigned int a2, unsigned int a3, HWND hWnd)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0065F710.json)
}

// ==== BACKFILL 0x0065FB60  sub_65FB60  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_65FB60()
{
      // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x0065FB60.json)
}

// ==== BACKFILL 0x0065FB80  Team_Load_65FB80  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_65FB80::Team_Load_65FB80(int a2, IUnknown * aP2) {

  int v4; // edx
  int v5; // ecx
  int v6; // edi
  int v7; // ebp
  int *_6550C0; // eax
  int v9; // ecx
  void *v10; // eax
  void *vtable1; // edi
  void *v12; // edx
  void *v13; // eax
  void *v14; // ecx
  int v15; // ebp
  int v16; // ebp
  int v17; // edi
  int v18; // eax
  int LoadGame_field_0x10; // ecx
  int v20; // eax
  unsigned int v22[4]; // [esp+Ch] [ebp-10h] BYREF
  void *v23; // [esp+20h] [ebp+4h]

  this->AbstractClass = (void *)a2; /*0x65fb8c*/
  ((unsigned int *)this)[0] = 1061752795; /*0x65fb8e*/
  v4 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 132); /*0x65fb9b*/
  ((unsigned int *)this)[0] = 0; /*0x65fba1*/
  ((unsigned int *)this)[0] = v4; /*0x65fba8*/
  v5 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 120); /*0x65fbb4*/
  ((unsigned int *)this)[0] = (void *)aP2; /*0x65fbb7*/
  ((unsigned int *)this)[0] = v5; /*0x65fbba*/
  this->occupant = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x65fbc2*/
  this->fallRate = 0; /*0x65fbc5*/
  this->nextObject = *(ObjectClass **)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x65fbd4*/
  this->attachedBomb = 0; /*0x65fbd7*/
  LOBYTE(this->ambientSoundController[0]) = 1; /*0x65fbde*/
  BYTE1(this->ambientSoundController[0]) = 1; /*0x65fbe1*/
  v6 = *(unsigned int *)&stru_87F5F0.__pad_E12[2178]; /*0x65fbe4*/
  v7 = *(unsigned int *)&stru_87F5F0.__pad_E12[2182]; /*0x65fbea*/
  _6550C0 = Team_Load_6550C0((ObjectClass *)&stru_87F5F0.__pad_58[416], v22, (int16_t *)&aP2); /*0x65fbff*/
  v9 = *_6550C0; /*0x65fc04*/
  v10 = (void *)(_6550C0[1] - v7); /*0x65fc0b*/
  ((unsigned int *)this)[0] = (void *)(v9 - v6); /*0x65fc0d*/
  ((unsigned int *)this)[0] = v10; /*0x65fc10*/
  vtable1 = ((unsigned int *)this)[0]; /*0x65fc13*/
  v12 = v10; /*0x65fc1c*/
  v13 = (void *)(*(unsigned int *)&stru_87F5F0.__pad_E12[2190] - (unsigned int)v10); /*0x65fc23*/
  v14 = (void *)(*(unsigned int *)&stru_87F5F0.__pad_E12[2186] - (unsigned int)vtable1); /*0x65fc25*/
  v15 = *(unsigned int *)&stru_87F5F0.__pad_E12[2186] - (unsigned int)vtable1; /*0x65fc29*/
  if ( *(unsigned int *)&stru_87F5F0.__pad_E12[2186] - (int)vtable1 <= (int)v13 ) /*0x65fc2b*/
    v15 = (int)v13; /*0x65fc2d*/
  if ( (int)v12 <= v15 ) /*0x65fc31*/
  {
    v16 = *(unsigned int *)&stru_87F5F0.__pad_E12[2186] - (unsigned int)vtable1; /*0x65fc39*/
    if ( (int)v14 <= (int)v13 ) /*0x65fc3b*/
      v16 = (int)v13; /*0x65fc3d*/
  }
  else
  {
    v16 = (int)v12; /*0x65fc33*/
  }
  if ( (int)vtable1 <= v16 ) /*0x65fc41*/
  {
    v17 = *(unsigned int *)&stru_87F5F0.__pad_E12[2186] - (unsigned int)vtable1; /*0x65fc4b*/
    if ( (int)v14 <= (int)v13 ) /*0x65fc4d*/
      v17 = (int)v13; /*0x65fc4f*/
    if ( (int)v12 <= v17 ) /*0x65fc53*/
    {
      v23 = v14; /*0x65fc5d*/
      if ( (int)v14 <= (int)v13 ) /*0x65fc61*/
        v23 = v13; /*0x65fc63*/
    }
    else
    {
      v23 = v12; /*0x65fc55*/
    }
  }
  else
  {
    v23 = ((unsigned int *)this)[0]; /*0x65fc43*/
  }
  *(float *)&((unsigned int *)this)[0] = (float)(int)v23; /*0x65fc6b*/
  LoadGame_field_0x10 = stru_B04DA8.LoadGame_field_0x10; /*0x65fc87*/
  dword_B04D88 = (dword_B04D88 + 1) % 8; /*0x65fc8d*/
  v18 = dword_B04D88; /*0x65fc82*/
  dword_B04D48[dword_B04D88] = aP2; /*0x65fc92*/
  dword_B04DD8 = v18; /*0x65fc99*/
  if ( LoadGame_field_0x10 < stru_B04DA8.LoadGame_field_0x08 /*0x65fcce*/
    || (BYTE1(stru_B04DA8.LoadGame_field_0x0C) || !stru_B04DA8.LoadGame_field_0x08)
    && stru_B04DA8.LoadGame_field_0x14 > 0
    && (*(uint8_t (**)(LoadGame *, int, unsigned int))(*(unsigned int *)stru_B04DA8.__pad_0 + 8))(
         &stru_B04DA8,
         stru_B04DA8.LoadGame_field_0x08 + stru_B04DA8.LoadGame_field_0x14,
         0) )
  {
    v20 = stru_B04DA8.LoadGame_field_0x10++; /*0x65fcdb*/
    *(unsigned int *)(stru_B04DA8.LoadGame_field_0x04 + 4 * v20) = this; /*0x65fcea*/
  }
  return this; /*0x65fcef*/

}

// ==== BACKFILL 0x0065FD50  WinMainSetup_Setup_65FD50  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_65FD50()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x65FD50)
}
