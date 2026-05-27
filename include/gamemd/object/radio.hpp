#pragma once

#include "mission.hpp"

namespace ra2 {
namespace game {

enum class RadioCommand : int;

template <typename T>
struct VectorClass {
    T*      Items;
    int32_t Count;
    int32_t Capacity;

    constexpr VectorClass() noexcept : Items(nullptr), Count(0), Capacity(0) {}
};

class RadioClass : public MissionClass {
public:
    virtual HRESULT __stdcall Load(IStream* stream) override { return S_OK; }
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override { return S_OK; }

    virtual ~RadioClass() = default;

    virtual RadioCommand SendToFirstLink(RadioCommand command) { return static_cast<RadioCommand>(0); }
    virtual RadioCommand SendCommand(RadioCommand command, TechnoClass* recipient) { return static_cast<RadioCommand>(0); }
    virtual RadioCommand SendCommandWithData(RadioCommand command, AbstractClass*& inout, TechnoClass* recipient) { return static_cast<RadioCommand>(0); }
    virtual void SendToEachLink(RadioCommand command) {}

    TechnoClass* const& GetNthLink(int idx = 0) const { return m_radio_links.Items[idx]; }
    bool HasFreeLink() const { return m_radio_links.Count < m_radio_links.Capacity; }
    bool HasAnyLink() const { return m_radio_links.Count > 0; }

    int32_t             m_last_commands[3];
    VectorClass<TechnoClass*> m_radio_links;

protected:
    RadioClass() noexcept;
};

} // namespace game
} // namespace ra2
