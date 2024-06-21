#pragma once

#include "scene/main/node.h"

class CharacterBody3D;

class CrappyMovementComponent : public Node {
    GDCLASS(CrappyMovementComponent, Node);

    CharacterBody3D *character_body = nullptr;

    float gravity = 0.1;
    float jump_force = 5;
protected:
    static void _bind_methods();

public:
    void set_character_body(CharacterBody3D *p_character_body);
    CharacterBody3D* get_character_body() const;

    void set_gravity(float p_gravity);
    float get_gravity() const;

    void set_jump_force(float p_jump_force);
    float get_jump_force() const;

    void physics_process(float delta);

    void jump();
};

