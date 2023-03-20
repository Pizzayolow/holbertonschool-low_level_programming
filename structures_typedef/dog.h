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

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
