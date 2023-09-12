#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's information
 * @name: the name
 * @age: the age
 * @owner: ownername
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

/* function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
