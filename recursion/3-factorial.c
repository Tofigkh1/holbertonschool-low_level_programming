#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number whose factorial is to be calculated.
 *
 * Return: The factorial of n, or -1 if n is less than 0.
 */
int factorial(int n)
{
if (n < 0) /* Error case: if n is less than 0 */
return (-1);
else if (n == 0) /* Base case: factorial of 0 is 1 */
return (1);
else /* Recursive case: factorial of n is n * factorial of (n-1) */
return (n * factorial(n - 1));
}
