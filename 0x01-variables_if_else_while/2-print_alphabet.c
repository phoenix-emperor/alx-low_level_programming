#include <stdio.h>

/**
 * Main - This program uses putchar to print out letters a-z.
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
putchar(alpha);
}

putchar(new_line);

return (0);
}
