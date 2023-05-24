#ifndef DOG_H
#define DOG_H

/**
 * struct dog - adog struct
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: just a dog struct in bobby
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(const char *str);
char *_strcopy(char *dest, char *src);

#endif
