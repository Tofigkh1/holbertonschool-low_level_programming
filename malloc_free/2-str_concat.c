#include "main.h"
/**
 * str_concat - concatenate 2 strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: the final string omg
 */
char *str_concat(char *s1, char *s2)
{
	char *final_string;
	int a = 0;
	int b = 0;
	int i, j;

	if (s1 != NULL)
	{
		for (a = 0; s1[a]; a++)
			;
	}
	if (s2 != NULL)
	{
		for (b = 0; s2[b]; b++)
			;
	}
	final_string = malloc(sizeof(char) * (a + b + 1));
	if (final_string == NULL)
		return (NULL);
	for (i = 0; i < a; i++)
		final_string[i] = s1[i];
	for (j = 0; j < b; j++)
		final_string[i + j] = s2[j];
	final_string[i + j] = '\0';
	return (final_string);
}
