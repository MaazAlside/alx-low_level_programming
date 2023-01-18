#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
  * new_dog - function that creates a new dog.
  * @name: char
  * @age: float
  *@owner: char
  * Return: Pointer
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int namelen = 0;
	int ownlen = 0;

	if (name != NULL && owner != NULL)
	{
		namelen = _strlen(name);
		ownlen = _strlen(owner);
		newDog = malloc(sizeof(dog_t));

		if (newDog == NULL)
			return (NULL);
		newDog->name = malloc(sizeof(char) * namelen + 1);

		if (newDog->name == NULL)
		{
			free(newDog);
			return (NULL);
		}
		newDog->owner = malloc(sizeof(char) * ownlen + 1);

		if (newDog->owner == NULL)
		{
			free(newDog->name);
			free(newDog);
			return (NULL);
		}

		newDog->name = _strcpy(newDog->name, name);
		newDog->owner = _strcpy(newDog->owner, owner);
		newDog->age = age;
	}
	return (newDog);
}

/**
  * _strlen - function that returns the length of a string.
  * @s: char pointer
  * Return: return s
  */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; ++len)
	{
	}
	return (len);
}

/**
  * _strcpy - copie the string
  * @dest: array that returns
  * @src: the pointer that receive the string
  *
  * Return: the parameter dest.
  */

char *_strcpy(char *dest, char *src)
{
	int n = 0;
	int i;

	while (src[n] != '\0')
	{
		n++;
	}
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];

		i++;

	}
	i = i;
	while (i <= n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
