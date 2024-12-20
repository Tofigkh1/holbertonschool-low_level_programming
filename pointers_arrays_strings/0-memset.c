#include "main.h"
/**
 * _memset - fills memory with the same byte
 * @s: pointer to the memory area
 * @b: the constant byte
 * @n: number of bytes filled
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}
