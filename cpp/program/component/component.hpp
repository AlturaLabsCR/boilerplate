#ifndef COMPONENT_H
#define COMPONENT_H

typedef struct {
	const char* name;
} Component;

void print_component(const Component* comp);

#endif
