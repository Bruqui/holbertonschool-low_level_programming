#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns the length of the string
 * @str: string to evaluate
 * Return: the lenght of a string
 */

int _strlen(char *str)
{
	int length = 0;

	while (str[length])
	{
		length++;
	}

	return (length);
}

/**
 * *_strcpy - function that copy the string pointed by src
 * @dest: buffer to copy the string to
 * @src: the string to copy
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: the struct of the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = malloc(_strlen(name) + 1);

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	_strcpy(new_dog->name, name);

	new_dog->owner = malloc(_strlen(owner) + 1);

	if (new_dog->owner == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}

	_strcpy(new_dog->owner, owner);

	new_dog->age = age;

	return (new_dog);
}
