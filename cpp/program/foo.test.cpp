#include <assert.h>
#include <program/foo.hpp>

int main() {
	Foo foo = { .id = 1 };
	assert(foo.id == 1);
	return 0;
}
