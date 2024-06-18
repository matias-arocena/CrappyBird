#include "crappy_movement_component.h"
#include "scene/3d/physics/character_body_3d.h"

void CrappyMovementComponent::set_character_body_path(const NodePath &p_character_body_path) {
    character_body_path = p_character_body_path;
    character_body = Object::cast_to<CharacterBody3D>(get_node(character_body_path));

    if (character_body == nullptr) {
        ERR_PRINT("CrappyMovementComponent: character_body_path is not a CharacterBody3D");
    }
}

NodePath CrappyMovementComponent::get_character_body_path() const {
    return character_body_path;
}

void CrappyMovementComponent::_bind_methods() {
    ClassDB::bind_method(D_METHOD("set_character_body_path", "character_body_path"), &CrappyMovementComponent::set_character_body_path);
    ClassDB::bind_method(D_METHOD("get_character_body_path"), &CrappyMovementComponent::get_character_body_path);

    ADD_PROPERTY(PropertyInfo(Variant::NODE_PATH, "character_body_path"), "set_character_body_path", "get_character_body_path");
}

