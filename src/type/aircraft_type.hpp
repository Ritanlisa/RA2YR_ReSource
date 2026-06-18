#pragma once

#include "techno_type.hpp"
#include "core/enums.hpp"

namespace gamemd
{

class AnimTypeClass;

class AircraftTypeClass : public TechnoTypeClass
{
public:
    static constexpr AbstractType AbsID = AbstractType::AircraftType;

    static DynamicVectorClass<AircraftTypeClass*>* Array;
    static AircraftTypeClass* Find(const char* pID);  // 0x41c8b0
    static AircraftTypeClass* FindOrAllocate(const char* pID);  // 0x41c8b0
    static int FindIndex(const char* pID);

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override { return E_NOTIMPL; }  // 0x41ceb0 (as GetClassIdentifier)

    virtual ~AircraftTypeClass() = default;  // 0x41cfe0 (as ddtor)

    virtual AbstractType __stdcall whatAmI() const override { return AbstractType::AircraftType; }  // 0x41cfb0 (as GetTypeIdentifier)
    virtual int objectSize() const override { return 0; }  // 0x41cfc0 (as GetObjectSize)

    virtual bool SpawnAtMapCoords(CellStruct* pMapCoords, HouseClass* pOwner) override { return false; }  // 0x41cb60 (as StubReturnFalse)
    virtual ObjectClass* CreateObject(HouseClass* pOwner) override { return nullptr; }  // 0x41cb70 (as CreateAircraft)

    AircraftTypeClass(const char* pID) noexcept;  // 0x41c8b0

protected:
    AircraftTypeClass(noinit_t) noexcept;  // 0x41c8b0

public:
    int ArrayIndex;
    int PowerDrain;
    bool Carryall;
    AnimTypeClass* Trailer;
    int SpawnDelay;
    bool Rotors;
    bool CustomRotor;
    bool Landable;
    bool FlyBy;
    bool FlyBack;
    bool AirportBound;
    bool Fighter;
};

} // namespace gamemd
