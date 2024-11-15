#include <stdio.h>


/**
 * main - Entry point of the program
 *
 * This program prints the size (in bytes) of various data types in C.
 * It includes basic types like char, int, float, and double, as well
 * as their variations such as unsigned, signed, long, and short types.
 * The sizeof operator is used to determine the memory size of each type.
 *
 * Return: Always (Success)
 */



int main () {
printf("char: %zu byte(s)\n", sizeof(char));
printf("unsigned char: %zu byte(s)\n", sizeof(unsigned char));
printf("signed char: %zu byte(s)\n", sizeof(signed char));
printf("short: %zu byte(s)\n", sizeof(short));
printf("unsigned short: %zu byte(s)\n", sizeof(unsigned short));
printf("int: %zu byte(s)\n", sizeof(int));
printf("unsigned int: %zu byte(s)\n", sizeof(unsigned int));
printf("long: %zu byte(s)\n", sizeof(long));
printf("unsigned long: %zu byte(s)\n", sizeof(unsigned long));
printf("long long: %zu byte(s)\n", sizeof(long long));
printf("unsigned long long: %zu byte(s)\n", sizeof(unsigned long long));
printf("float: %zu byte(s)\n", sizeof(float));
printf("double: %zu byte(s)\n", sizeof(double));
printf("long double: %zu byte(s)\n", sizeof(long double));
return 0;
}
