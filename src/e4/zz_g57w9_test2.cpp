#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/IStream_e4.hpp"
namespace gamemd {
HRESULT testfn(LPSTREAM pStm, LPPERSISTSTREAM pPStm) {
  int v9 = 4;
  IStreamVtbl *lpVtbl;
  lpVtbl = (IStreamVtbl *)((gamemd::IStream*)pStm)->__pad_0;
  HRESULT r1 = lpVtbl->Write(pStm, &v9, 4, 0);
  HRESULT r2 = pPStm->Release();
  return r1 + r2;
}
}
