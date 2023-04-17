#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure that defines a dog
 *
 * @name: name of dog
 * @owner: who owns the dog
 * @age: age of the dog
 *
 * Description: This structure describes a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H */
