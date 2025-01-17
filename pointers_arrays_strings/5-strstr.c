#include "main.h"
/**
 * _strstr - find a substring in a string
 * @haystack: string
 * @needle: substring
 * Return: needle or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int a, b;

	if (*needle == '\0')
		return (haystack);
	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (haystack[a + b] != needle[b])
				break;
		}
		if (needle[b] == '\0')
			return (haystack + a);
	}
	return (NULL);
}
