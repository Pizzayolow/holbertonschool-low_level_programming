#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - Short desription
 * @d: Description of parameter x
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 */

#include <string.h>
#include "dog.h"

void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		printf("(nil)");
	}
	if (d->owner == NULL)
	{
		printf("(nil)");
	}

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
