#pragma once

#include <cstdint>
#include <cstddef>

#include "core/enums.hpp"
#include "fundamentals.hpp"

namespace gamemd
{

class BlitterCore
{
public:
    BlitterCore() = default;
    virtual ~BlitterCore() = default;

    virtual void Blit(
        void* dest,
        byte* src,
        unsigned int length,
        uint16_t z_min,
        uint16_t* z_buf,
        uint16_t* a_buf,
        uint16_t a_lvl,
        int warp_offset) = 0;

    virtual void CallBlit0(
        void* dest,
        byte* src,
        unsigned int length,
        uint16_t z_min,
        uint16_t* z_buf,
        uint16_t* a_buf,
        uint16_t a_lvl,
        uint16_t unknown_arg,
        uint32_t useless) = 0;

    virtual void CallBlit1(
        void* dest,
        byte* src,
        unsigned int length,
        uint16_t z_min,
        uint16_t* z_buf,
        uint16_t* a_buf,
        uint16_t a_lvl) = 0;

    virtual void CallBlit2(
        void* dest,
        byte* src,
        unsigned int length,
        uint16_t z_min,
        uint16_t* z_buf,
        uint16_t* a_buf,
        uint16_t a_lvl,
        uint32_t useless) = 0;
};

template <typename T>
class Blitter : public BlitterCore
{
public:
    using PixelType = T;

    Blitter() = default;
    virtual ~Blitter() = default;

    byte* Data = nullptr;
};

class RLEBlitterCore
{
public:
    RLEBlitterCore() = default;
    virtual ~RLEBlitterCore() = default;

    virtual void Blit(
        void* dest,
        byte* src,
        byte length,
        int encoded_len,
        int a6, int a7, int a8, int a9, int a10, int a11) = 0;

    virtual void CallBlit0(
        void* dest,
        byte* src,
        byte length,
        int encoded_len,
        int a6, int a7, int a8, int a9, int a10, int a11,
        uint32_t useless) = 0;

    byte* Data = nullptr;
};

template <typename T>
class RLEBlitter : public RLEBlitterCore
{
public:
    using PixelType = T;

    RLEBlitter() = default;
    virtual ~RLEBlitter() = default;
};

//===========================================================================
// Template hierarchy:
//
//   BlitterCore -> Blitter<T>
//       ├── BlitPlain<T>                  (direct pixel copy)
//       ├── BlitTrans<T>                  (color key transparency)
//       │   ├── BlitTransXlat<T>          (+ palette translation)
//       │   │   ├── BlitTransRemap<T>     (+ remapping)
//       │   │   ├── BlitTransLucent25<T>  (25% translucency)
//       │   │   ├── BlitTransLucent50<T>  (50% translucency)
//       │   │   ├── BlitTransLucent75<T>  (75% translucency)
//       │   │   ├── BlitTransDarken<T>    (darkening effect)
//       │   │   └── BlitTransXlatAlpha<T> (+ alpha channel)
//       │   │       ├── BlitTransXlatAlphaZRead<T>
//       │   │       └── BlitTransXlatAlphaZReadWrite<T>
//       │   └── BlitTransWarp<T>          (warp/shake effect)
//       └── BlitPlainXlat<T>              (+ palette translation)
//           ├── BlitPlainXlatZRead<T>     (+ Z-buffer read)
//           │   └── BlitPlainXlatZReadWrite<T> (+ Z write)
//           └── ...
//
//   RLEBlitterCore -> RLEBlitter<T>
//       └── RLEBlitTrans<T>               (RLE + transparency)
//           └── RLEBlitTransXlat<T>        (+ palette translation)
//               ├── RLEBlitTransXlatZRead<T>
//               └── RLEBlitTransXlatAlpha<T>
//                   └── ...
//
// Each template variant specializes the Blit() virtual to implement
// its specific pixel manipulation. T = uint16_t (16-bit) or uint8_t (8-bit).
// The "Data" member points to a palette translation (LightConvertClass) buffer.
// Zip drives through scanlines, skipping transparent runs in RLE variants.
//===========================================================================

template <typename T>
class BlitPlain : public Blitter<T>
{
public:
    virtual void Blit(
        void* dest, byte* src, unsigned int length,
        uint16_t z_min, uint16_t* z_buf, uint16_t* a_buf,
        uint16_t a_lvl, int warp_offset) override
    {
        auto* d = static_cast<T*>(dest);
        auto* s = reinterpret_cast<T*>(src);
        for (unsigned int i = 0; i < length; ++i) { d[i] = s[i]; }
    }

    virtual void CallBlit0(
        void* dest, byte* src, unsigned int length,
        uint16_t z_min, uint16_t* z_buf, uint16_t* a_buf, uint16_t a_lvl,
        uint16_t unknown_arg, uint32_t useless) override
    {
        Blit(dest, src, length, z_min, z_buf, a_buf, a_lvl, 0);
    }

    virtual void CallBlit1(
        void* dest, byte* src, unsigned int length,
        uint16_t z_min, uint16_t* z_buf, uint16_t* a_buf, uint16_t a_lvl) override
    {
        Blit(dest, src, length, z_min, z_buf, a_buf, a_lvl, 0);
    }

    virtual void CallBlit2(
        void* dest, byte* src, unsigned int length,
        uint16_t z_min, uint16_t* z_buf, uint16_t* a_buf, uint16_t a_lvl,
        uint32_t useless) override
    {
        Blit(dest, src, length, z_min, z_buf, a_buf, a_lvl, 0);
    }
};

template <typename T>
class BlitTrans : public Blitter<T>
{
public:
    T ColorKey = 0;

    virtual void Blit(
        void* dest, byte* src, unsigned int length,
        uint16_t z_min, uint16_t* z_buf, uint16_t* a_buf,
        uint16_t a_lvl, int warp_offset) override
    {
        auto* d = static_cast<T*>(dest);
        auto* s = reinterpret_cast<T*>(src);
        for (unsigned int i = 0; i < length; ++i)
        {
            if (s[i] != ColorKey) { d[i] = s[i]; }
        }
    }

    virtual void CallBlit0(
        void* dest, byte* src, unsigned int length,
        uint16_t z_min, uint16_t* z_buf, uint16_t* a_buf, uint16_t a_lvl,
        uint16_t unknown_arg, uint32_t useless) override
    {
        Blit(dest, src, length, z_min, z_buf, a_buf, a_lvl, 0);
    }

    virtual void CallBlit1(
        void* dest, byte* src, unsigned int length,
        uint16_t z_min, uint16_t* z_buf, uint16_t* a_buf, uint16_t a_lvl) override
    {
        Blit(dest, src, length, z_min, z_buf, a_buf, a_lvl, 0);
    }

    virtual void CallBlit2(
        void* dest, byte* src, unsigned int length,
        uint16_t z_min, uint16_t* z_buf, uint16_t* a_buf, uint16_t a_lvl,
        uint32_t useless) override
    {
        Blit(dest, src, length, z_min, z_buf, a_buf, a_lvl, 0);
    }
};

template <typename T>
class BlitPlainXlat : public BlitPlain<T>
{
public:
    virtual void Blit(
        void* dest, byte* src, unsigned int length,
        uint16_t z_min, uint16_t* z_buf, uint16_t* a_buf,
        uint16_t a_lvl, int warp_offset) override
    {
        auto* d = static_cast<T*>(dest);
        auto* s = reinterpret_cast<uint8_t*>(src);
        auto* xlat = reinterpret_cast<T*>(this->Data);
        for (unsigned int i = 0; i < length; ++i)
        {
            d[i] = xlat[s[i]];
        }
    }
};

template <typename T>
class BlitTransXlat : public BlitTrans<T>
{
public:
    virtual void Blit(
        void* dest, byte* src, unsigned int length,
        uint16_t z_min, uint16_t* z_buf, uint16_t* a_buf,
        uint16_t a_lvl, int warp_offset) override
    {
        auto* d = static_cast<T*>(dest);
        auto* s = reinterpret_cast<uint8_t*>(src);
        auto* xlat = reinterpret_cast<T*>(this->Data);
        for (unsigned int i = 0; i < length; ++i)
        {
            if (s[i] != 0) { d[i] = xlat[s[i]]; }
        }
    }
};

template <typename T>
class BlitTransRemap : public BlitTransXlat<T>
{
public:
    virtual void Blit(
        void* dest, byte* src, unsigned int length,
        uint16_t z_min, uint16_t* z_buf, uint16_t* a_buf,
        uint16_t a_lvl, int warp_offset) override
    {
        auto* d = static_cast<T*>(dest);
        auto* s = reinterpret_cast<uint8_t*>(src);
        auto* xlat = reinterpret_cast<T*>(this->Data);
        for (unsigned int i = 0; i < length; ++i)
        {
            if (s[i] != 0)
            {
                uint8_t idx = s[i];
                if (z_buf && z_buf[i] > z_min) { d[i] = xlat[idx]; }
            }
        }
    }
};

template <typename T>
class BlitTransLucent25 : public BlitTransXlat<T>
{
public:
    virtual void Blit(
        void* dest, byte* src, unsigned int length,
        uint16_t z_min, uint16_t* z_buf, uint16_t* a_buf,
        uint16_t a_lvl, int warp_offset) override
    {
        auto* d = static_cast<T*>(dest);
        auto* s = reinterpret_cast<uint8_t*>(src);
        auto* xlat = reinterpret_cast<T*>(this->Data);
        for (unsigned int i = 0; i < length; ++i)
        {
            if (s[i] != 0)
            {
                T src_px = xlat[s[i]];
                d[i] = (d[i] & 0x7BEF) >> 2 + (src_px & 0x7BEF) >> 2;
            }
        }
    }
};

template <typename T>
class BlitTransLucent50 : public BlitTransXlat<T>
{
public:
    virtual void Blit(
        void* dest, byte* src, unsigned int length,
        uint16_t z_min, uint16_t* z_buf, uint16_t* a_buf,
        uint16_t a_lvl, int warp_offset) override
    {
        auto* d = static_cast<T*>(dest);
        auto* s = reinterpret_cast<uint8_t*>(src);
        auto* xlat = reinterpret_cast<T*>(this->Data);
        for (unsigned int i = 0; i < length; ++i)
        {
            if (s[i] != 0)
            {
                T src_px = xlat[s[i]];
                d[i] = (d[i] & 0x7BEF) >> 1 + (src_px & 0x7BEF) >> 1;
            }
        }
    }
};

template <typename T>
class BlitTransLucent75 : public BlitTransXlat<T>
{
public:
    virtual void Blit(
        void* dest, byte* src, unsigned int length,
        uint16_t z_min, uint16_t* z_buf, uint16_t* a_buf,
        uint16_t a_lvl, int warp_offset) override
    {
        auto* d = static_cast<T*>(dest);
        auto* s = reinterpret_cast<uint8_t*>(src);
        auto* xlat = reinterpret_cast<T*>(this->Data);
        for (unsigned int i = 0; i < length; ++i)
        {
            if (s[i] != 0)
            {
                T src_px = xlat[s[i]];
                d[i] = (d[i] & 0x7BEF) * 3 >> 2 + (src_px & 0x7BEF) >> 2;
            }
        }
    }
};

template <typename T>
class BlitTransDarken : public BlitTransXlat<T>
{
public:
    virtual void Blit(
        void* dest, byte* src, unsigned int length,
        uint16_t z_min, uint16_t* z_buf, uint16_t* a_buf,
        uint16_t a_lvl, int warp_offset) override
    {
        auto* d = static_cast<T*>(dest);
        auto* s = reinterpret_cast<uint8_t*>(src);
        auto* xlat = reinterpret_cast<T*>(this->Data);
        for (unsigned int i = 0; i < length; ++i)
        {
            if (s[i] != 0)
            {
                T src_px = xlat[s[i]];
                d[i] = (src_px & 0x7BEF) >> 1;
            }
        }
    }
};

template <typename T>
class BlitTransXlatAlpha : public BlitTransXlat<T>
{
public:
    virtual void Blit(
        void* dest, byte* src, unsigned int length,
        uint16_t z_min, uint16_t* z_buf, uint16_t* a_buf,
        uint16_t a_lvl, int warp_offset) override
    {
        auto* d = static_cast<T*>(dest);
        auto* s = reinterpret_cast<uint8_t*>(src);
        auto* xlat = reinterpret_cast<T*>(this->Data);
        for (unsigned int i = 0; i < length; ++i)
        {
            if (s[i] != 0 && (a_buf == nullptr || a_buf[i] >= a_lvl))
            {
                d[i] = xlat[s[i]];
            }
        }
    }
};

template <typename T>
class BlitTransXlatZRead : public BlitTransXlat<T>
{
public:
    virtual void Blit(
        void* dest, byte* src, unsigned int length,
        uint16_t z_min, uint16_t* z_buf, uint16_t* a_buf,
        uint16_t a_lvl, int warp_offset) override
    {
        auto* d = static_cast<T*>(dest);
        auto* s = reinterpret_cast<uint8_t*>(src);
        auto* xlat = reinterpret_cast<T*>(this->Data);
        for (unsigned int i = 0; i < length; ++i)
        {
            if (s[i] != 0 && (z_buf[i] == 0 || z_buf[i] >= z_min))
            {
                d[i] = xlat[s[i]];
            }
        }
    }
};

template <typename T>
class BlitTransXlatZReadWrite : public BlitTransXlatZRead<T>
{
public:
    virtual void Blit(
        void* dest, byte* src, unsigned int length,
        uint16_t z_min, uint16_t* z_buf, uint16_t* a_buf,
        uint16_t a_lvl, int warp_offset) override
    {
        auto* d = static_cast<T*>(dest);
        auto* s = reinterpret_cast<uint8_t*>(src);
        auto* xlat = reinterpret_cast<T*>(this->Data);
        for (unsigned int i = 0; i < length; ++i)
        {
            if (s[i] != 0 && (z_buf[i] == 0 || z_buf[i] >= z_min))
            {
                d[i] = xlat[s[i]];
                z_buf[i] = z_min;
            }
        }
    }
};

template <typename T>
class BlitTransWarp : public BlitTrans<T>
{
public:
    virtual void Blit(
        void* dest, byte* src, unsigned int length,
        uint16_t z_min, uint16_t* z_buf, uint16_t* a_buf,
        uint16_t a_lvl, int warp_offset) override
    {
        auto* d = static_cast<T*>(dest);
        auto* s = reinterpret_cast<T*>(src);
        unsigned int j = static_cast<unsigned int>(warp_offset);
        for (unsigned int i = 0; i < length; ++i)
        {
            if (s[j % length] != this->ColorKey)
            {
                d[i] = s[j % length];
            }
            ++j;
        }
    }
};

// ---------------------------------------------------------------------------
// RLE variants use run-length encoded source data.
// Each call processes one RLE command (transparent or opaque run).
// ---------------------------------------------------------------------------

template <typename T>
class RLEBlitTrans : public RLEBlitter<T>
{
public:
    T ColorKey = 0;

    virtual void Blit(
        void* dest, byte* src, byte length,
        int encoded_len, int a6, int a7, int a8, int a9, int a10, int a11) override
    {
        auto* d = static_cast<T*>(dest);
        auto* s = reinterpret_cast<T*>(src);
        for (byte i = 0; i < length; ++i)
        {
            if (s[i] != ColorKey) { d[i] = s[i]; }
        }
    }

    virtual void CallBlit0(
        void* dest, byte* src, byte length,
        int encoded_len, int a6, int a7, int a8, int a9, int a10, int a11,
        uint32_t useless) override
    {
        Blit(dest, src, length, encoded_len, a6, a7, a8, a9, a10, a11);
    }
};

template <typename T>
class RLEBlitTransXlat : public RLEBlitTrans<T>
{
public:
    virtual void Blit(
        void* dest, byte* src, byte length,
        int encoded_len, int a6, int a7, int a8, int a9, int a10, int a11) override
    {
        auto* d = static_cast<T*>(dest);
        auto* s = reinterpret_cast<uint8_t*>(src);
        auto* xlat = reinterpret_cast<T*>(this->Data);
        for (byte i = 0; i < length; ++i)
        {
            if (s[i] != 0) { d[i] = xlat[s[i]]; }
        }
    }
};

template <typename T>
class RLEBlitTransXlatZRead : public RLEBlitTransXlat<T>
{
public:
    virtual void Blit(
        void* dest, byte* src, byte length,
        int encoded_len, int a6, int a7, int a8, int a9, int a10, int a11) override
    {
        auto* d = static_cast<T*>(dest);
        auto* s = reinterpret_cast<uint8_t*>(src);
        auto* xlat = reinterpret_cast<T*>(this->Data);
        for (byte i = 0; i < length; ++i)
        {
            if (s[i] != 0) { d[i] = xlat[s[i]]; }
        }
    }
};

template <typename T>
class RLEBlitTransXlatAlpha : public RLEBlitTransXlat<T>
{
public:
    virtual void Blit(
        void* dest, byte* src, byte length,
        int encoded_len, int a6, int a7, int a8, int a9, int a10, int a11) override
    {
        auto* d = static_cast<T*>(dest);
        auto* s = reinterpret_cast<uint8_t*>(src);
        auto* xlat = reinterpret_cast<T*>(this->Data);
        for (byte i = 0; i < length; ++i)
        {
            if (s[i] != 0) { d[i] = xlat[s[i]]; }
        }
    }
};

// Common explicit template instantiation types
using Blitter8  = Blitter<uint8_t>;
using Blitter16 = Blitter<uint16_t>;

using BlitPlain8       = BlitPlain<uint8_t>;
using BlitPlain16      = BlitPlain<uint16_t>;
using BlitTrans8       = BlitTrans<uint8_t>;
using BlitTrans16      = BlitTrans<uint16_t>;
using BlitPlainXlat8   = BlitPlainXlat<uint8_t>;
using BlitPlainXlat16  = BlitPlainXlat<uint16_t>;
using BlitTransXlat8   = BlitTransXlat<uint8_t>;
using BlitTransXlat16  = BlitTransXlat<uint16_t>;
using BlitTransRemap8  = BlitTransRemap<uint8_t>;
using BlitTransRemap16 = BlitTransRemap<uint16_t>;

using BlitTransLucent25_8   = BlitTransLucent25<uint8_t>;
using BlitTransLucent25_16  = BlitTransLucent25<uint16_t>;
using BlitTransLucent50_8   = BlitTransLucent50<uint8_t>;
using BlitTransLucent50_16  = BlitTransLucent50<uint16_t>;
using BlitTransLucent75_8   = BlitTransLucent75<uint8_t>;
using BlitTransLucent75_16  = BlitTransLucent75<uint16_t>;
using BlitTransDarken8      = BlitTransDarken<uint8_t>;
using BlitTransDarken16     = BlitTransDarken<uint16_t>;

using BlitTransXlatAlpha8   = BlitTransXlatAlpha<uint8_t>;
using BlitTransXlatAlpha16  = BlitTransXlatAlpha<uint16_t>;
using BlitTransXlatZRead8   = BlitTransXlatZRead<uint8_t>;
using BlitTransXlatZRead16  = BlitTransXlatZRead<uint16_t>;
using BlitTransXlatZReadWrite8  = BlitTransXlatZReadWrite<uint8_t>;
using BlitTransXlatZReadWrite16 = BlitTransXlatZReadWrite<uint16_t>;
using BlitTransWarp8  = BlitTransWarp<uint8_t>;
using BlitTransWarp16 = BlitTransWarp<uint16_t>;

} // namespace gamemd
