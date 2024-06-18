#pragma once

#include "scene/3d/node_3d.h"

class CharacterBody3D;

class CrappyMovementComponent : public Node3D {
    GDCLASS(CrappyMovementComponent, Node3D);

    CharacterBody3D *character_body = nullptr;

    NodePath character_body_path;
protected:
    static void _bind_methods();

public:
    void set_character_body_path(const NodePath &p_character_body_path);
    NodePath get_character_body_path() const;
};

