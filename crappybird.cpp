#include "crappybird.h"

void CrappyBird::add(int p_value) {
	count += p_value;
}

void CrappyBird::reset() {
	count = 0;
}

int CrappyBird::get_total() const {
	return count;
}

int CrappyBird::get_zero() const {
    return 0;
}

void CrappyBird::_bind_methods() {
	ClassDB::bind_method(D_METHOD("add", "value"), &CrappyBird::add);
	ClassDB::bind_method(D_METHOD("reset"), &CrappyBird::reset);
	ClassDB::bind_method(D_METHOD("get_total"), &CrappyBird::get_total);
    ClassDB::bind_method(D_METHOD("get_zero"), &CrappyBird::get_zero);
}

CrappyBird::CrappyBird() {
	count = 0;
}