#include "main.h"

/**
 * find_sqrt - Recursively finds the natural square root of a number.
 * @n: The number to find the square root of.
 * @guess: The current guess for the square root.
 *
 * Return: The square root, or -1 if n does not have a natural square root.
 */
int find_sqrt(int n, int guess)
{
if (guess * guess == n) /* Found the square root */
return (guess);
if (guess * guess > n) /* Exceeded n, no natural square root */
return (-1);
return (find_sqrt(n, guess + 1)); /* Try the next guess */
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The square root, or -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
if (n < 0) /* Negative numbers do not have a natural square root */
return (-1);
return (find_sqrt(n, 0)); /* Start with guess 0 */
}
