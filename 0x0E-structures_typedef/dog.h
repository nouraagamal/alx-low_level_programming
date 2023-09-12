#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog struct
 * @name: the dog's name
 * @age: age of dog
 * @owner: owner of dog
 * Description: just a dog struct
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
