#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int r;

r = factorial(1);
printf("%d\n", r);  /* Expected: 1 */
r = factorial(5);
printf("%d\n", r);  /* Expected: 120 */
r = factorial(10);
printf("%d\n", r);  /* Expected: 3628800 */
r = factorial(-1024);
printf("%d\n", r);  /* Expected: -1 */
return (0);
}
