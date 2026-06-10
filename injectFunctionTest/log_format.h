#pragma once
// log_format.h — ostringstream formatters for hook DLL comparison output
// Shared between reverse_hooks.cpp generation and any other logging code.
// operator<< overloads for game types live in the respective class headers
// (math.hpp for Point2D/RectangleStruct, etc.).

#include <windows.h>
#include <sstream>
#include <string>
#include <iomanip>
#include <gamemd/core/math.hpp>

// ---- Hex8: 8-digit uppercase hex with 0x prefix ----

inline void Hex8(std::ostream& os, DWORD v) {
    char f = os.fill('0');
    os << "0x" << std::hex << std::uppercase << std::setw(8) << v << std::dec;
    os.fill(f);
}

// ---- Fmt: type-aware value formatting ----

inline void Fmt(std::ostream& os, const char* ty, DWORD v) {
    if (!ty) ty = "";
    if (strstr(ty, "Point2D"))   { os << *(const gamemd::Point2D*)v << "(";      Hex8(os, v); os << ")"; return; }
    if (strstr(ty, "RectangleStruct")) { os << *(const gamemd::RectangleStruct*)v << "("; Hex8(os, v); os << ")"; return; }
    if (strstr(ty, "bool") || strstr(ty, "Bool"))
        os << (v ? "true" : "false") << "(";
    else
        os << std::dec << v << "(";
    Hex8(os, v); os << ")";
}

// ---- FmtArr: array formatting [v0,v1,...](ADDR) ----

inline void FmtArr(std::ostream& os, int n, DWORD v) {
    if (!v || n <= 0) { os << "(null)"; return; }
    os << "[";
    for (int i = 0; i < n; i++) {
        if (i) os << ",";
        os << std::dec << ((int*)v)[i];
    }
    os << "]("; Hex8(os, v); os << ")";
}
