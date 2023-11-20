#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct
 * @name: Dog's Name
 * @age: Dog's Age
 * @owner: Dog's Owner
 */

struct dog
{
char *name;
float age;
char *owner;
};


void init_idog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
