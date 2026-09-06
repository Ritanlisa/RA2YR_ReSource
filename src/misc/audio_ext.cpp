#include "misc/audio_ext.hpp"

namespace gamemd {

// --- Audio3D ---

// 0x55a7d0
void Audio3D::ComputeRotation() {}

// --- AudioBuffer ---

// 0x409c40
void AudioBuffer::InitializePlayback() {}

// --- AudioChannel ---

// 0x4010a0
void AudioChannel::IsActive() {}
// 0x402600
void AudioChannel::DeactivatePlay() {}
// 0x402650
void AudioChannel::ActivatePlay() {}

// --- AudioCodec ---

// 0x7c81db
void AudioCodec::Decode() {}

// --- AudioConfig ---

// 0x754be0
void AudioConfig::InitDefault() {}

// --- AudioEvent ---

// 0x752db0
void AudioEvent::LoadFromINI() {}

// --- AudioFile ---

// 0x4026a0
void AudioFile::GetCallback() {}
// 0x405fd0
void AudioFile::Stop() {}

// --- AudioFileClass ---

// 0x405c00
void AudioFileClass::Release() {}

// --- AudioFrame ---

// 0x407fb0
void AudioFrame::ProcessAudioFrame() {}
// 0x7535b0
void AudioFrame::CounterInc() {}

// --- AudioIndex ---

// 0x401640
void AudioIndex::GetSampleInformation() {}

// --- AudioList ---

// 0x407480
void AudioList::GetNextEntry() {}

// --- AudioNode ---

// 0x408600
void AudioNode::Release() {}

// --- AudioOcclusion ---

// 0x756bb0
void AudioOcclusion::ComputeBoundingVertices() {}

// --- AudioOptionsClass ---

// 0x5fb160
void AudioOptionsClass::ApplySettings() {}

// --- AudioPool ---

// 0x405190
void AudioPool::ProcessQueue() {}

// --- AudioSample ---

// 0x4024a0
void AudioSample::ResetState() {}
// 0x407a90
void AudioSample::Destructor() {}
// 0x4080d0
void AudioSample::IsBuffering() {}
// 0x408840
void AudioSample::InitLinkedList() {}
// 0x408930
void AudioSample::SetField() {}

// --- AudioSource ---

// 0x406130
void AudioSource::Get() {}

// --- AudioThread ---

// 0x403920
void AudioThread::UpdateStats() {}

// --- AudioTimer ---

// 0x408230
void AudioTimer::DecrementAll() {}

} // namespace gamemd
