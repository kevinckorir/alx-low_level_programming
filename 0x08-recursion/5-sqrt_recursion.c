#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: takes an integer as argument
 * @i: takes argument for testing
 * Return: an integer
 */
int _sqrt_recursion(int n)
{
	int sqrt_of_remaining;
    /* Base case: n is less than 0, so it doesn't have a natural square root */
    if (n < 0) {
        return -1;
    }

    /* Base case: n is 0 or 1, so its natural square root is itself */
    if (n == 0 || n == 1) {
        return n;
    }

    /* Recursive case: compute the natural square root of the remaining part of n */
     sqrt_of_remaining = _sqrt_recursion(n - 1);

    /* Check if the square of the computed square root is equal to n */
    if (sqrt_of_remaining * sqrt_of_remaining == n) {
        return sqrt_of_remaining;
    } else {
        return -1;
    }
}

