#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the last digit of a randomly generated number
 *        and evaluates its properties.
 *
 * Return: Always (Success)
 */


int main(void)
{
int a;
for (a = 0; a < 10; a++)
{
putchar(a + '0');
if (a < 9)
{
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
