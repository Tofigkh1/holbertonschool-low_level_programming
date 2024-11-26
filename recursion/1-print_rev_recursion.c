#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed.
 */
void _print_rev_recursion(char *s)
{
if (*s) /* Check if the string is not empty */
{
_print_rev_recursion(s + 1); /* Recursive call to next character */
_putchar(*s); /* Print the current character after recursion */
}
}
