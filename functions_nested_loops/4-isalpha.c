#include "main.h"

/**
 * _isalpha - Bir karakterin alfabetik olup olmadığını kontrol eder
 * @c: Kontrol edilecek karakter
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
