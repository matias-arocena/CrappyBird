#ifndef CRAPPYBIRD_H
#define CRAPPYBIRD_H

#include "core/object/ref_counted.h"

class CrappyBird : public RefCounted {
	GDCLASS(CrappyBird, RefCounted);

	int count;

protected:
	static void _bind_methods();

public:
	void add(int p_value);
	void reset();
	int get_total() const;
    int get_zero() const;

	CrappyBird();
};

#endif // CRAPPYBIRD_H