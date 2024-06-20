#include "crappy_movement_component.h"
#include "scene/3d/physics/character_body_3d.h"

void CrappyMovementComponent::set_character_body(CharacterBody3D *p_character_body) {
    character_body = p_character_body;
    WARN_PRINT("Character body set: " + character_body->get_name());
}

CharacterBody3D* CrappyMovementComponent::get_character_body() const {
    return character_body;
}

void CrappyMovementComponent::_bind_methods() {
    ClassDB::bind_method(D_METHOD("set_character_body", "character_body"), &CrappyMovementComponent::set_character_body);
    ClassDB::bind_method(D_METHOD("get_character_body"), &CrappyMovementComponent::get_character_body);
}
