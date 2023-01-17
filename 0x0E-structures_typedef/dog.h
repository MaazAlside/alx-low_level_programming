#ifndef HEDER_FILE
#define HEDER_FILE

/**
 *struct dog - new struct with 3 elements
 *@name: name of the dog
 *@age: age of the dog
 *@owner: onwer of the dog
 *
 * Description: struct dog with the following elements:
 * name, age, and owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *dup_strint(char *s);
void free_dog(dog_t *d);
#endif
