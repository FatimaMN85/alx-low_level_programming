#ifndef DOG_H
#define DOG_H

/**
 * dog - a dog's information
 * @name: the name
 * @age: the age
 * @owner: the owner
 *
 * Description: structure representing a dog's basic information
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_info - typedef for struct dog
 */
typedef struct dog dog_info;


#endif
