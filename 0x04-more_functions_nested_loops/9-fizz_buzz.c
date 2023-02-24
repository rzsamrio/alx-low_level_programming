#include <stdio.h>

/**
 * main - prints numbers or FizzBuzz
 * Return: 0 on exit
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
		{
			if (i == 100)
				printf("Buzz\n");
			else
				printf("Buzz ");
		}
		else
			printf("%i ", i);

	}
	return (0);
}

