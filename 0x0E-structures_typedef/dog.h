#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: 1st memeber
 * @age: 2nd member
 * @owner: 3rd member
 *
 * Description: defining named dog with three members: name, age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /*DOG_H*/
