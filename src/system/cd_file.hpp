#pragma once

#include "buffer_io_file.hpp"

namespace gamemd
{

class CDFileClass : public BufferIOFileClass
{
public:
    virtual ~CDFileClass() override = default;

    // design: default constructor (compiler-generated), no callgraph reference
    CDFileClass() = default;

protected:
    // unmatched: no callgraph reference and no git history record
    explicit CDFileClass(const noinit_t&) noexcept : BufferIOFileClass(noinit_t()) {}

public:
    uint32_t CDTrackIndex = 0;
};

} // namespace gamemd
