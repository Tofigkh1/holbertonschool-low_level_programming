#include "main.h"
/**
 * puts_half - ooo
 * @str: ooo
 * Return: ooo
 */
void puts_half(char *str)
{
	int a = 0;
	int b;

	while (str[a] != '\0')
		a++;
	if (a % 2 == 0)
		b = a / 2;
	else
		b = a / 2 + 1;
	while (str[b])
	{
		_putchar(str[b]);
		b++;
	}
	b--;
	_putchar('\n');
}
