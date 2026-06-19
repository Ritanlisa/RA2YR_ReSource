#pragma once

#include "buffer_io_file.hpp"

namespace gamemd
{

class CDFileClass : public BufferIOFileClass
{
public:
    virtual ~CDFileClass() override = default;

    CDFileClass() = default; // IDA: UNMATCHED — defaulted_special_member, default_ctor, no_callgraph_match

protected:
    explicit CDFileClass(const noinit_t&) noexcept : BufferIOFileClass(noinit_t()) {} // IDA: UNMATCHED — no_callgraph_match, no_git_history

public:
    uint32_t CDTrackIndex = 0;
};

} // namespace gamemd
