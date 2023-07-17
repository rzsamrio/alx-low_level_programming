#include "dog.h"

/**
 * _strcpy - copies a string
 * @dest: pointer to destination string
 * @src: pointer to source string
 */

void _strcpy(char *dest, char *src)
{
	int i, length;

	if (src == NULL)
		return;
	for (i = 0, length = 0; src[i] != '\0'; i++)
		length++;
	for (i = 0; i <= length; i++)
		dest[i] = src[i];
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

	dog = malloc(sizeof(dog_t)); /* save memory for dog */
	if (dog == NULL)
		return (NULL);

	dog->age = age;
	if (name != NULL) /* Passing null to _strcpy results in undefined behaviour */
	{
		/* allocate memory only if name is not null */
		dog->name = malloc(_strlen(name) + 1);
		if (dog->name == NULL)
		{
			free(dog);
			return (NULL);
		}
	}
	else
	{
		/* ...so it is best to simply make our dest = null on null source */
		dog->name = NULL;
	}

	if (owner != NULL) /* same here */
	{
		dog->owner = malloc(_strlen(owner) + 1);
		if (dog->owner == NULL)
		{
			free(dog->name);
			free(dog);
			return (NULL);
		}
	}
	else
		dog->owner = NULL;

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	return (dog);
}
