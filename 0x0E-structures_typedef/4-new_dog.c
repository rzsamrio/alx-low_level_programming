#include "dog.h"

/**
 * _strcpy - copies a string
 * @dest: pointer to destination string
 * @src: pointer to source string
 * Return: destination string
 */

char *_strcpy(char *dest, char *src)
{
	int i, length;

	for (i = 0, length = 0; src[i] != '\0'; i++)
		length++;
	for (i = 0; i <= length; i++)
		dest[i] = src[i];
	return (dest);
}
/**
 * _strlen - Returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	char *head = s;

	while (*s++ != '\0')
	{
		continue;
	}
	return (s - head - 1);
}
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: the address of this variable
*/


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t)); /* save memory for dog */
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(_strlen(name) + 1); /*save memory for */
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(_strlen(name) + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);
	return (dog);
}
