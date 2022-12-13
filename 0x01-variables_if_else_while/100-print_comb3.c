#include <stdio.h>
/**
 * main - Entry point
 * This program prints all possible combinations of single digit numbers.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int num;

for (num = 148; num < 158; num++)
{
putchar(num);

if (num != 157)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);
}
