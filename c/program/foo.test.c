#include <assert.h>
#include <program/foo.h>

int main() {
	Foo foo = { .id = 1 };
	assert(foo.id == 1);
	return 0;
}
