#ifndef _MAIN_H_
#define _MAIN_H_
#include "stdio.h"
#include "stdlib.h"

/**
 * struct dog - dog struct
 * @name: first member
 * @owner: second member
 * @age: third member
 *
 * Description: dog struct
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
