#pragma once

#include "buffer_io_file.hpp"

namespace gamemd
{

class CDFileClass : public BufferIOFileClass
{
public:
    virtual ~CDFileClass() override = default;

    CDFileClass() = default;

protected:
    explicit CDFileClass(const noinit_t&) noexcept : BufferIOFileClass(noinit_t()) {}

public:
    uint32_t CDTrackIndex = 0;
};

} // namespace gamemd
