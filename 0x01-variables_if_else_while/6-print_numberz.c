#include <stdio.h>

/**
 * main - Entry point
 * This program prints all single digit numbers of base 10
 * staring from zero to nine, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int num;

for (num = 0; num < 10; num++)
putchar((num % 10) + '0');

putchar('\n');

return (0);
}
