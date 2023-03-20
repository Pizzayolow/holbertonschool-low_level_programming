/**
 * init_dog - Short desription
 * @d: Description of parameter x
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 */

#include <string.h>
#include "dog.h"

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
