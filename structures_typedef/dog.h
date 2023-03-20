#ifndef DOG
#define DOG
/**
 * struct dog - Structure of dog identity
 * @name: his name
 * @age: his age
 * @owner: dogs owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
