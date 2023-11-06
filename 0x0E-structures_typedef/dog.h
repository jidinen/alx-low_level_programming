#ifndef dog_h
#define dog_h

/**
 *struct dog - name of structure
 *
 *@name: first member
 *@age:second member
 *@owner:third member
 *
 *dog_t - an alias
 *
 *
 */

typedef struct dog
{	char *name;
	float age;
	char *owner;
}dog_t;



void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
