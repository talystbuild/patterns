
//SoupSpoon - One of Two Concrete Prototypes extending the AbstractSpoon Prototype

#include "abstract_spoon.h"
#include "soupspoon.h"

spoon_t * saladspoon_new()
{
	spoon_t * s = spoon_new();
	s->name = "Salad Spoon";
}

