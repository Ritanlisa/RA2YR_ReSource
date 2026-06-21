#include "misc/audio_ext.hpp"

namespace gamemd {

// --- Audio3D ---

void Audio3D::ComputeRotation() {}

// --- AudioBuffer ---

void AudioBuffer::InitializePlayback() {}

// --- AudioChannel ---

void AudioChannel::IsActive() {}
void AudioChannel::DeactivatePlay() {}
void AudioChannel::ActivatePlay() {}

// --- AudioCodec ---

void AudioCodec::Decode() {}

// --- AudioConfig ---

void AudioConfig::InitDefault() {}

// --- AudioEvent ---

void AudioEvent::LoadFromINI() {}

// --- AudioFile ---

void AudioFile::GetCallback() {}
void AudioFile::Stop() {}

// --- AudioFileClass ---

void AudioFileClass::Release() {}

// --- AudioFrame ---

void AudioFrame::ProcessAudioFrame() {}
void AudioFrame::CounterInc() {}

// --- AudioIndex ---

void AudioIndex::GetSampleInformation() {}

// --- AudioList ---

void AudioList::GetNextEntry() {}

// --- AudioNode ---

void AudioNode::Release() {}

// --- AudioOcclusion ---

void AudioOcclusion::ComputeBoundingVertices() {}

// --- AudioOptionsClass ---

void AudioOptionsClass::ApplySettings() {}

// --- AudioPool ---

void AudioPool::ProcessQueue() {}

// --- AudioSample ---

void AudioSample::ResetState() {}
void AudioSample::Destructor() {}
void AudioSample::IsBuffering() {}
void AudioSample::InitLinkedList() {}
void AudioSample::SetField() {}

// --- AudioSource ---

void AudioSource::Get() {}

// --- AudioThread ---

void AudioThread::UpdateStats() {}

// --- AudioTimer ---

void AudioTimer::DecrementAll() {}

} // namespace gamemd
