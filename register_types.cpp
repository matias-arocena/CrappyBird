#include "register_types.h"

#include "core/object/class_db.h"
#include "src/crappy_movement_component.h"

void initialize_CrappyBird_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
			return;
	}
    ClassDB::register_class<CrappyMovementComponent>();
}

void uninitialize_CrappyBird_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
			return;
	}
}