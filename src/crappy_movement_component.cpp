#include "crappy_movement_component.h"
#include "scene/3d/physics/character_body_3d.h"

void CrappyMovementComponent::set_character_body(CharacterBody3D *p_character_body) {
    character_body = p_character_body;
}

CharacterBody3D* CrappyMovementComponent::get_character_body() const {
    return character_body;
}

void CrappyMovementComponent::set_gravity(float p_gravity) {
    gravity = p_gravity;
}

float CrappyMovementComponent::get_gravity() const {
    return gravity;
}

void CrappyMovementComponent::set_jump_force(float p_jump_force) {
    jump_force = p_jump_force;
}

float CrappyMovementComponent::get_jump_force() const {
    return jump_force;
}

void CrappyMovementComponent::_bind_methods() {
    ClassDB::bind_method(D_METHOD("set_character_body", "character_body"), &CrappyMovementComponent::set_character_body);
    ClassDB::bind_method(D_METHOD("get_character_body"), &CrappyMovementComponent::get_character_body);

    ClassDB::bind_method(D_METHOD("physics_process", "delta"), &CrappyMovementComponent::physics_process);

    ClassDB::bind_method(D_METHOD("set_gravity", "gravity"), &CrappyMovementComponent::set_gravity);
    ClassDB::bind_method(D_METHOD("get_gravity"), &CrappyMovementComponent::get_gravity);

    ClassDB::bind_method(D_METHOD("set_jump_force", "jump_force"), &CrappyMovementComponent::set_jump_force);
    ClassDB::bind_method(D_METHOD("get_jump_force"), &CrappyMovementComponent::get_jump_force);

    ClassDB::bind_method(D_METHOD("jump"), &CrappyMovementComponent::jump);

    ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "gravity"), "set_gravity", "get_gravity");
    ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "jump_force"), "set_jump_force", "get_jump_force");    
}

void CrappyMovementComponent::jump() {
    if (!character_body) {
        return;
    }

    Vector3 velocity = character_body->get_velocity();
    velocity.y = jump_force;
    character_body->set_velocity(velocity);
}

void CrappyMovementComponent::physics_process(float delta) {
    if (!character_body) {
        return;
    }

    Vector3 velocity = character_body->get_velocity();
    velocity.y -= gravity * delta;

    character_body->set_velocity(velocity);
    character_body->move_and_slide();
}