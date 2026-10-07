// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

namespace gamemd {

struct FontRenderer {
    int InitContext(int *a2);
    void* DrawTextA_ph;  // 0x0 (no offset truth)  // w18j3: filler renamed (no offset truth; canon FontRenderer::DrawTextA is a method)
    static unsigned int DrawTextA(...);  // w18j3 C2597 static-call supply (w16g4 convention)
};

} // namespace gamemd
