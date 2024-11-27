#include "main.h"

/**
 * _is_prime_helper - Checks if a number is divisible by any number less than it
 * @n: The number to check
 * @i: The current divisor to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int _is_prime_helper(int n, int i)
{
if (i * i > n) /* If i squared is greater than n, n is prime */
return (1);
if (n % i == 0) /* If n is divisible by i, it's not prime */
return (0);
return (_is_prime_helper(n, i + 1)); /* Check next divisor */
}

/**
 * is_prime_number - Determines if a number is a prime number
 * @n: The number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
if (n <= 1) /* Numbers less than or equal to 1 are not prime */
return (0);
return (_is_prime_helper(n, 2)); /* Start checking from 2 */
}
