#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints a struct dog.
 * @d: The struct dog to be printed.
 *
 * Return: void
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");

		if (d->age != NULL)
			printf("Age: %f\n", d->age);
		else
			printf("Age: (nil)\n");

		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
