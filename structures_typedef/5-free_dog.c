#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 * free_dog - Short desription
 * @d: Description of parameter x
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
}
