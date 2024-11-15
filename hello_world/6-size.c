#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program prints the size (in bytes) of specific data types in C.
 * It uses the sizeof operator to determine the memory size of each type.
 *
 * Return: Always (Success)
 */

int main(void)
{
printf("Size of a char: %zu byte(s)\n", sizeof(char));
printf("Size of an int: %zu byte(s)\n", sizeof(int));
printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
printf("Size of a float: %zu byte(s)\n", sizeof(float));
return 0;
}
