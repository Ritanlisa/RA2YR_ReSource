// 自动生成 by tools/move_hpp_bodies.py — 模板/constexpr 函数体
// 模板走 .inl 为 AGENTS.md 许可路线; constexpr 须留在头文件侧

namespace gamemd {
template <typename T>
void BlitPlain<T>::Blit(
        void* dest, byte* src, unsigned int length,
        uint16_t z_min, uint16_t* z_buf, uint16_t* a_buf,
        uint16_t a_lvl, int warp_offset) {
        auto* d = static_cast<T*>(dest);
        auto* s = reinterpret_cast<T*>(src);
        for (unsigned int i = 0; i < length; ++i) { d[i] = s[i]; }
    }

void BlitPlain::CallBlit0(
        void* dest, byte* src, unsigned int length,
        uint16_t z_min, uint16_t* z_buf, uint16_t* a_buf, uint16_t a_lvl,
        uint16_t unknown_arg, uint32_t useless) {
        Blit(dest, src, length, z_min, z_buf, a_buf, a_lvl, 0);
    }

void BlitPlain::CallBlit1(
        void* dest, byte* src, unsigned int length,
        uint16_t z_min, uint16_t* z_buf, uint16_t* a_buf, uint16_t a_lvl) {
        Blit(dest, src, length, z_min, z_buf, a_buf, a_lvl, 0);
    }

void BlitPlain::CallBlit2(
        void* dest, byte* src, unsigned int length,
        uint16_t z_min, uint16_t* z_buf, uint16_t* a_buf, uint16_t a_lvl,
        uint32_t useless) {
        Blit(dest, src, length, z_min, z_buf, a_buf, a_lvl, 0);
    }

template <typename T>
void BlitTrans<T>::Blit(
        void* dest, byte* src, unsigned int length,
        uint16_t z_min, uint16_t* z_buf, uint16_t* a_buf,
        uint16_t a_lvl, int warp_offset) {
        auto* d = static_cast<T*>(dest);
        auto* s = reinterpret_cast<T*>(src);
        for (unsigned int i = 0; i < length; ++i)
        {
            if (s[i] != ColorKey) { d[i] = s[i]; }
        }
    }

void BlitTrans::CallBlit0(
        void* dest, byte* src, unsigned int length,
        uint16_t z_min, uint16_t* z_buf, uint16_t* a_buf, uint16_t a_lvl,
        uint16_t unknown_arg, uint32_t useless) {
        Blit(dest, src, length, z_min, z_buf, a_buf, a_lvl, 0);
    }

void BlitTrans::CallBlit1(
        void* dest, byte* src, unsigned int length,
        uint16_t z_min, uint16_t* z_buf, uint16_t* a_buf, uint16_t a_lvl) {
        Blit(dest, src, length, z_min, z_buf, a_buf, a_lvl, 0);
    }

void BlitTrans::CallBlit2(
        void* dest, byte* src, unsigned int length,
        uint16_t z_min, uint16_t* z_buf, uint16_t* a_buf, uint16_t a_lvl,
        uint32_t useless) {
        Blit(dest, src, length, z_min, z_buf, a_buf, a_lvl, 0);
    }

template <typename T>
void BlitPlainXlat<T>::Blit(
        void* dest, byte* src, unsigned int length,
        uint16_t z_min, uint16_t* z_buf, uint16_t* a_buf,
        uint16_t a_lvl, int warp_offset) {
        auto* d = static_cast<T*>(dest);
        auto* s = reinterpret_cast<uint8_t*>(src);
        auto* xlat = reinterpret_cast<T*>(this->Data);
        for (unsigned int i = 0; i < length; ++i)
        {
            d[i] = xlat[s[i]];
        }
    }

template <typename T>
void BlitTransXlat<T>::Blit(
        void* dest, byte* src, unsigned int length,
        uint16_t z_min, uint16_t* z_buf, uint16_t* a_buf,
        uint16_t a_lvl, int warp_offset) {
        auto* d = static_cast<T*>(dest);
        auto* s = reinterpret_cast<uint8_t*>(src);
        auto* xlat = reinterpret_cast<T*>(this->Data);
        for (unsigned int i = 0; i < length; ++i)
        {
            if (s[i] != 0) { d[i] = xlat[s[i]]; }
        }
    }

template <typename T>
void BlitTransRemap<T>::Blit(
        void* dest, byte* src, unsigned int length,
        uint16_t z_min, uint16_t* z_buf, uint16_t* a_buf,
        uint16_t a_lvl, int warp_offset) {
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

template <typename T>
void BlitTransLucent25<T>::Blit(
        void* dest, byte* src, unsigned int length,
        uint16_t z_min, uint16_t* z_buf, uint16_t* a_buf,
        uint16_t a_lvl, int warp_offset) {
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

template <typename T>
void BlitTransLucent50<T>::Blit(
        void* dest, byte* src, unsigned int length,
        uint16_t z_min, uint16_t* z_buf, uint16_t* a_buf,
        uint16_t a_lvl, int warp_offset) {
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

template <typename T>
void BlitTransLucent75<T>::Blit(
        void* dest, byte* src, unsigned int length,
        uint16_t z_min, uint16_t* z_buf, uint16_t* a_buf,
        uint16_t a_lvl, int warp_offset) {
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

template <typename T>
void BlitTransDarken<T>::Blit(
        void* dest, byte* src, unsigned int length,
        uint16_t z_min, uint16_t* z_buf, uint16_t* a_buf,
        uint16_t a_lvl, int warp_offset) {
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

template <typename T>
void BlitTransXlatAlpha<T>::Blit(
        void* dest, byte* src, unsigned int length,
        uint16_t z_min, uint16_t* z_buf, uint16_t* a_buf,
        uint16_t a_lvl, int warp_offset) {
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

template <typename T>
void BlitTransXlatZRead<T>::Blit(
        void* dest, byte* src, unsigned int length,
        uint16_t z_min, uint16_t* z_buf, uint16_t* a_buf,
        uint16_t a_lvl, int warp_offset) {
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

template <typename T>
void BlitTransXlatZReadWrite<T>::Blit(
        void* dest, byte* src, unsigned int length,
        uint16_t z_min, uint16_t* z_buf, uint16_t* a_buf,
        uint16_t a_lvl, int warp_offset) {
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

template <typename T>
void BlitTransWarp<T>::Blit(
        void* dest, byte* src, unsigned int length,
        uint16_t z_min, uint16_t* z_buf, uint16_t* a_buf,
        uint16_t a_lvl, int warp_offset) {
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

template <typename T>
void RLEBlitTrans<T>::Blit(
        void* dest, byte* src, byte length,
        int encoded_len, int a6, int a7, int a8, int a9, int a10, int a11) {
        auto* d = static_cast<T*>(dest);
        auto* s = reinterpret_cast<T*>(src);
        for (byte i = 0; i < length; ++i)
        {
            if (s[i] != ColorKey) { d[i] = s[i]; }
        }
    }

void RLEBlitTrans::CallBlit0(
        void* dest, byte* src, byte length,
        int encoded_len, int a6, int a7, int a8, int a9, int a10, int a11,
        uint32_t useless) {
        Blit(dest, src, length, encoded_len, a6, a7, a8, a9, a10, a11);
    }

template <typename T>
void RLEBlitTransXlat<T>::Blit(
        void* dest, byte* src, byte length,
        int encoded_len, int a6, int a7, int a8, int a9, int a10, int a11) {
        auto* d = static_cast<T*>(dest);
        auto* s = reinterpret_cast<uint8_t*>(src);
        auto* xlat = reinterpret_cast<T*>(this->Data);
        for (byte i = 0; i < length; ++i)
        {
            if (s[i] != 0) { d[i] = xlat[s[i]]; }
        }
    }

template <typename T>
void RLEBlitTransXlatZRead<T>::Blit(
        void* dest, byte* src, byte length,
        int encoded_len, int a6, int a7, int a8, int a9, int a10, int a11) {
        auto* d = static_cast<T*>(dest);
        auto* s = reinterpret_cast<uint8_t*>(src);
        auto* xlat = reinterpret_cast<T*>(this->Data);
        for (byte i = 0; i < length; ++i)
        {
            if (s[i] != 0) { d[i] = xlat[s[i]]; }
        }
    }

template <typename T>
void RLEBlitTransXlatAlpha<T>::Blit(
        void* dest, byte* src, byte length,
        int encoded_len, int a6, int a7, int a8, int a9, int a10, int a11) {
        auto* d = static_cast<T*>(dest);
        auto* s = reinterpret_cast<uint8_t*>(src);
        auto* xlat = reinterpret_cast<T*>(this->Data);
        for (byte i = 0; i < length; ++i)
        {
            if (s[i] != 0) { d[i] = xlat[s[i]]; }
        }
    }
}

