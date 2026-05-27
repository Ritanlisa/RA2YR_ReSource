#include "gamemd/core/vector.hpp"
#include "gamemd/object/object.hpp"

namespace gamemd {

using ra2::game::ObjectClass;

DynamicVectorClass<ObjectClass*> g_current_objects;
DynamicVectorClass<ObjectClass*>& CurrentObjects = g_current_objects;

} // namespace gamemd
