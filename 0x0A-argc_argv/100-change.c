#include <stdio.h>
#include <stdlib.h>

int get_coins(int num);
/**
 * main - Finds the minimum number of coins given as change
 * @argc: number of cla
 * @argv: array of cla
 * Return: 0 on completion, 1 and 2 on error
*/

int main(int argc, char *argv[])
{
	int n, coin;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("0\n");
		return(2);
	}
	coin = get_coins(n);
	printf("%d\n", coin);
	return (0);
}

/**
 * get_coins - calculates the minimum number of coins for cash
 * @num: amount of cash
 * Return: no. of coins
*/
int get_coins(int num)
{
	int coins;

	coins = 0;
	while (num != 0)
	{
		if (num / 25 != 0)
		{
			coins += num / 25;
			num -= (num / 25) * 25;
		}
		if (num / 10 != 0)
		{
			coins += num / 10;
			num -= (num / 10) * 10;
		}
		if (num / 5 != 0)
		{
			coins += num / 5;
			num -= (num / 5) * 5;	
		}
		if (num / 2 != 0)
		{
			coins += num / 2;
			num -= (num / 2) * 2;
		}
		if (num == 1)
		{
			coins += num;
			num--;
		}
	}
		return (coins);
}