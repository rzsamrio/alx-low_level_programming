/**
 * _isalpha - checks if character is an alphabet
 * @c: character
 *
 * Return: 1 if true; 0 for false
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
