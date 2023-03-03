#include <stdio.h>
#include <string.h>

int main(void)
{
	int sum = 0;
	char *s1 = "Hello";
	char *s2 = "olleH";
	for (int i = 0; i < strlen(s1); i++)
		sum += (int) s1[i];
	printf("%i\n", sum);
	for (int i = 0, sum = 0; i < strlen(s2); i++)
		sum += (int) s2[i];
	printf("%i\n", sum);
	int what = strcmp("Hello", "olleH");
	printf("%i\n", what);
}
