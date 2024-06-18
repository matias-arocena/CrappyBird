#include "crappy_movement.h"

void CrappyMovement::add(int p_value) {
    count += p_value;
}

int CrappyMovement::get_total() const {
    return count;
}

void CrappyMovement::_bind_methods() {
    ClassDB::bind_method(D_METHOD("add", "value"), &CrappyMovement::add);
    ClassDB::bind_method(D_METHOD("get_total"), &CrappyMovement::get_total);
}

CrappyMovement::CrappyMovement() {
    count = 0;
}
