#include "register_types.h"

#include "core/object/class_db.h"
#include "crappybird.h"

void initialize_CrappyBird_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
			return;
	}
	ClassDB::register_class<CrappyBird>();
}

void uninitialize_CrappyBird_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
			return;
	}
   // Nothing to do here in this example.
}