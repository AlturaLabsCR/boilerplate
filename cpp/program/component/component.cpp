#include <stdio.h>
#include <program/component/component.hpp>

void print_component(const Component* comp) {
	printf("Component name: %s\n", comp->name);
}
