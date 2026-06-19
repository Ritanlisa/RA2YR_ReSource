#pragma once

#include "object/abstract.hpp"
#include "core/enums.hpp"
#include "core/vector.hpp"

namespace gamemd
{

class CCINIClass;

class AbstractTypeClass : public ra2::game::AbstractClass
{
public:
    static constexpr AbstractType AbsID = AbstractType::Abstract;

    static DynamicVectorClass<AbstractTypeClass*>* Array;

    static AbstractTypeClass* Find(const char* pID);
    static AbstractTypeClass* FindOrAllocate(const char* pID);
    static int FindIndex(const char* pID);

    virtual ~AbstractTypeClass() = default;  // 0x4109c0 (as Dtor)

    virtual void LoadTheaterSpecificArt(TheaterType th_type) {}
    virtual bool LoadFromINI(CCINIClass* pINI) { return false; }  // 0x410a60
    virtual bool SaveToINI(CCINIClass* pINI) { return false; }  // 0x410b90 (as WriteINI)

    const char* get_ID() const { return this->ID; }

    AbstractTypeClass(const char* pID) noexcept;  // 0x410800 (as Constructor)

    struct noinit_t {};

protected:
    AbstractTypeClass(noinit_t) noexcept {}  // 0x410800 (as Constructor)

public:
    char ID[0x18];
    uint8_t zero_3C;
    char UINameLabel[0x20];
    const wchar_t* UIName;
    char Name[0x31];
};

} // namespace gamemd
