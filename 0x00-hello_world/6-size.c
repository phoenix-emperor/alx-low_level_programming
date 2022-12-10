#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'A program that prints the size of the various data types.'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int size_of_char = sizeof(char);
int size_of_int = sizeof(int);
int size_of_long_int = sizeof(long);
int size_of_long_long_int = sizeof(long long);
int size_of_float = sizeof(float);

/* sizeof evaluates the size of a variable */
printf("Size of a char: %d byte(s)\n", size_of_char);
printf("Size of an int: %d byte(s)\n", size_of_int);
printf("Size of a long int: %d byte(s)\n", size_of_long_int);
printf("Size of a long long int: %d byte(s)\n", size_of_long_long_int);
printf("Size of a float: %d byte(s)\n", size_of_float);

return (0);

}
