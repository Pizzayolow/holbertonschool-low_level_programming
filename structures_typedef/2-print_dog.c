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
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d->owner == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}

	printf("Age: %f\n", d->age);
}
