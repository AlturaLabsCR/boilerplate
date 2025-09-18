#include <stdio.h>
#include <program/foo.hpp>
#include <program/component/component.hpp>

int main() {
	printf("Hello, World!\n");

	Foo foo = { .id = 42 };
	Component comp = { .name = "DisplayComponent" };

	print_foo(&foo);
	print_component(&comp);

	return 0;
}
