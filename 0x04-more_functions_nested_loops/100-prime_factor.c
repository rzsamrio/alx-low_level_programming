/* To find the largest prime number of 612852475143 */
#include <stdio.h>

int isprime(long long n);
long long number = 612852475143;

int main(void)
{
    long long big_factor;
    long i;

    big_factor = 1;
    for (i = 1; i < number; i++)
    {
        if (number % i == 0) /* if a factor */
        {
            number /= i;
            i = 0;
            /*
            if (i > big_factor)
            {
                if (isprime(i))
                    big_factor = i;
                else
                    continue;
            }
            else
                continue;
            */
        }
    }
    big_factor = number;
    printf("%d\n", big_factor);
    return (0);
}

int isprime(long long n)
{
    long long i;

    for (i = n / 2; i < n; i++)
    {
        if (n % i == 0) /* if n is found to be divisible */
            return (0);
        else
            continue;
    }
    return (1);
}