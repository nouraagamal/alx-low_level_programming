#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - makes a new struct dog
 *
 * @name: his/her name
 * @age: how old is he
 * @owner: who are you
 *
 * Return: new dog if fails null
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, n, o;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (n = 0; name[n]; n++)
		;
	n++;
	dog->name = malloc(n * (sizeof(char)));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < n; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (o = 0; owner[o]; o++)
		;
	o++;
	dog->owner = malloc(o * (sizeof(char)));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < o; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
