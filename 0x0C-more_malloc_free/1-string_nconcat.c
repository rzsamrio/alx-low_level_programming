#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: string
 * Return: length
 */

unsigned int _strlen(char *s)
{
        char *head = s;

        while (*s++ != '\0')
        {
                continue;
        }
        return (s - head - 1);
}

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, l1, l2, length;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = _strlen(s1);
	l2 = _strlen(s2);

	/* Length Comparison */
	if (n > l2)
		n = l2;
	length = l1 + n;

	/* Memory allocation */
	ptr = malloc(sizeof(char) * length + 1);
	if (ptr == NULL)
		return (NULL);

	/* String catenating */
	for (i = 0; i < length; i++)
	{
		if (i < l1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - (length - n)];
	}
	ptr[length + 1] = 0;
	return (ptr);
}


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *concat;

    concat = string_nconcat("Best ", "School !!!", 6);
    printf("%s\n", concat);
    free(concat);
    return (0);
}