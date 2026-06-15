#pragma once

#include "mission.hpp"

namespace ra2 {
namespace game {

enum class RadioCommand : int;

template <typename T>
class VectorClass {
public:
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

    virtual RadioCommand sendToFirstLink(RadioCommand command);
    virtual RadioCommand sendCommand(RadioCommand command, TechnoClass* recipient);
    virtual RadioCommand sendCommandWithData(RadioCommand command, AbstractClass*& inout, TechnoClass* recipient);
    virtual void sendToEachLink(RadioCommand command);

    TechnoClass* const& getNthLink(int idx = 0) const { return radioLinks.Items[idx]; }
    bool hasFreeLink() const { return radioLinks.Count < radioLinks.Capacity; }
    bool hasAnyLink() const { return radioLinks.Count > 0; }

    int32_t             lastCommands[3];
    VectorClass<TechnoClass*> radioLinks;

protected:
    RadioClass() noexcept;
};

} // namespace game
} // namespace ra2
