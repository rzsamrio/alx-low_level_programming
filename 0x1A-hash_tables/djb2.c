#include "hash_tables.h"
#include <string.h> 
/**
 * main - Console like system to display hash key for different strings
 * Return: 0
 */


int main(void)
{
	unsigned long int hash;
	size_t n = 0;
	char *buf =  NULL;
	
	while(1)
	{
		printf("str: ");
		getline(&buf, &n, stdin);

		
		strtok(buf, " \n");
		hash = hash_djb2((unsigned char *) buf);
		printf("Hash: %lu\n", hash);
	}
	return (0);
}
