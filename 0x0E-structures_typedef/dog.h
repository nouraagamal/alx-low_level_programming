#ifndef DOG_H_FILE
#define DOG_H_FILE

/**
 * struct dog - a dog struct
 * @name: the dog's name
 * @age: age of dog
 * @owner: owner of dog
 * Description: just a dog struct
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
