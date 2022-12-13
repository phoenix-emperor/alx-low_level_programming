#include <stdio.h>

/**
 * main - Entry Point
 * This program uses putchar to print out letters a-z.
 * except q and e.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char alpha;
char new_line;
new_line = '\n';

for (alpha = 'a'; alpha <= 'z'; alpha++)
{
if (alpha != 'e' && alpha != 'q')
putchar(alpha);
}

putchar(new_line);

return (0);
}
