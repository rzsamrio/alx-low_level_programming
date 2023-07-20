#include "3-calc.h"
/**
 * main - calculator function
 * @argc: number of command arguments
 * @argv: string of command arguents
 * Return: 0 on completion | 98 err arg size | 99 op err
*/
int main(int argc, char *argv[])
{
	int x, y, ans;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);

	operation = get_op_func(argv[2]);
	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	else
	{
		ans = operation(x, y);
		printf("%d\n", ans);
	}

	return (0);
}
