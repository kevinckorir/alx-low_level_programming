#include <stdio.h>
#include <math.h>

/**
 * main - checks for prime numbers
 * Return: 0 Success
 */
int main(void)
{
    long num = 612852475143;
    long max_factor = -1;

    while (num % 2 == 0)
    {
        max_factor = 2;
        num /= 2;
    }

    for (long i = 3; i <= sqrt(num); i += 2)
    {
        while (num % i == 0)
        {
            max_factor = i;
            num /= i;
        }
    }

    if (num > 2)
    {
        max_factor = num;
    }

    printf("%ld\n", max_factor);

    return 0;
}

