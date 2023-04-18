#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - function that returns length of a string
 *
 * @str: string to check length
 * Return: length of string
 */
int _strlen(char *str)
{
	int len;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 * _strcopy - function that copies a string
 *
 * @src: string to copy
 * @dest: pointer to buffer where string is copied to
 * Return: dest
 */
char *_strcopy(char *dest, char *src)
{
	int len;
	int i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0 ; i < len ; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - function that defines a dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: who owns the dog
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggie;
	int len1;
	int len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	doggie = malloc(sizeof(dog_t));
	if (doggie == NULL)
		return (NULL);
	doggie->name = malloc(sizeof(char) * (len1 + 1));
	if (doggie->name == NULL)
	{
		free(doggie);
		return (NULL);
	}
	doggie->owner = malloc(sizeof(char) * (len2 + 1));
	if (doggie->name == NULL)
	{
		free(doggie);
		free(doggie->name);
		return (NULL);
	}
	_strcopy(doggie->name, name);
	_strcopy(doggie->owner, owner);
	doggie->age = age;
	return (doggie);
}
