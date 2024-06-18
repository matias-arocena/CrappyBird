#ifndef CRAPPY_MOVEMENT_H
#define CRAPPY_MOVEMENT_H

#include "core/object/ref_counted.h"


class CrappyMovement : public RefCounted {
    GDCLASS(CrappyMovement, RefCounted);

    int count;
    
protected:
    static void _bind_methods();

public:
    void add(int p_value);
    int get_total() const;

    CrappyMovement();
};

#endif // CRAPPY_MOVEMENT_H