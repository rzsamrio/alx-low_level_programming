/**
 * _islower - checks if character is lowercase
 * @c: character
 *
 * Return: 1 if true; 0 for false
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
