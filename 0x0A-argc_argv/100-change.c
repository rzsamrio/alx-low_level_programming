#include <stdio.h>
#include <stdlib.h>

/**
 * main - Finds the minimum number of coins given as change
 * @argc: number of cla
 * @argv: array of cla
 * Return: 0 on completion, 1 and 2 on error
*/

int main(int argc, char *argv[])
{
	int num, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	coins = 0;
	if (num == 0)
	{
		printf("0\n");
		return (2);
	}

	coins = 0;
	while (num != 0)
	{
		int tcoin = 0;
		if (num / 25 != 0)
		{
			tcoin = num / 25;
			num -= tcoin * 25;
			coins += tcoin; 
		}
		if (num / 10 != 0)
		{
			tcoin = num / 10;
			num -= tcoin * 10;
			coins += tcoin;
		}
		if (num / 5 != 0)
		{
			tcoin = num / 5;
			num -= tcoin * 5;
			coins += tcoin;
		}
		if (num / 2 != 0)
		{
			tcoin = num / 2;
			num -= tcoin * 2;
			coins += tcoin;
		}
		if (num == 1)
		{
			coins += num;
			num--;
		}

	}
	printf("%d\n", coins);
	return (0);
}
