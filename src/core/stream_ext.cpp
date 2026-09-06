#include "core/stream_ext.hpp"

namespace gamemd {

// --- Buffer ---

// 0x40a340
void Buffer::CreateDirectSound() {}
// 0x40a6d0
void Buffer::UpdateVolumeSettings() {}
// 0x40ccd0
void Buffer::CompareEqual() {}
// 0x410ed0
void Buffer::FillCircularBufferScroll() {}
// 0x42f7c0
void Buffer::Cleanup() {}

// --- BufferClass ---

// 0x477c30
void BufferClass::CompareEqual() {}

// --- BufferIO ---

// 0x431170
void BufferIO::FindActiveChannel() {}
// 0x431dd0
void BufferIO::Flush() {}
// 0x434990
void BufferIO::Cleanup() {}

// --- CStreamClass ---

// 0x4a2930
void CStreamClass::AddRef() {}
// 0x4a2950
void CStreamClass::Release() {}
// 0x4a2990
void CStreamClass::QueryInterface() {}
// 0x4a2a20
void CStreamClass::StubReturnNullPointer() {}
// 0x4a2ab0
void CStreamClass::StreamRead() {}

// --- StreamObj ---

// 0x410e50
void StreamObj::Release() {}

// --- StreamWrapper ---

// 0x5c5d40
void StreamWrapper::Read() {}
// 0x5c5d90
void StreamWrapper::Write() {}
// 0x5c5dd0
void StreamWrapper::Seek() {}
// 0x5d6620
void StreamWrapper::readData() {}
// 0x6241e0
void StreamWrapper::StubReturnFalse() {}

// --- Text ---

// 0x433cf0
void Text::Layout() {}
// 0x433ed0
void Text::MeasureWidth() {}
// 0x5bd3d0
void Text::DrawCharAtGrid() {}
// 0x5bd490
void Text::DrawRepeated() {}

// --- TextGroup ---

// 0x433ca0
void TextGroup::SetRect() {}

} // namespace gamemd
