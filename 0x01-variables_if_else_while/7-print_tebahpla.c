#include <stdio.h>

/**
 * main - Entry point
 * This program prints alphabets in revers order
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char alpha;

for (alpha = 'z'; alpha >= 'a'; alpha--)
putchar(alpha);

putchar('\n');

return (0);
}
