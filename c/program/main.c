#include <stdio.h>
#include <program/foo.h>
#include <program/component/component.h>

int main() {
	printf("Hello, World!\n");

	Foo foo = { .id = 42 };
	Component comp = { .name = "DisplayComponent" };

	print_foo(&foo);
	print_component(&comp);

	return 0;
}
