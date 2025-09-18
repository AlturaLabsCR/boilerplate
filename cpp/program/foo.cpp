#include <stdio.h>
#include <program/foo.hpp>

void print_foo(const Foo* foo) {
	printf("Foo ID: %d\n", foo->id);
}
