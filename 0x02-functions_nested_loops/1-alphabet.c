#include "main.h"

/**
 * main - Entry point.
 * pint alphabets in lowercase
 * Return: 0 (Always success)
 */

void print_alphabet(void)
{
char alpha;

for (alpha = 'a'; alpha <= 'z'; alpha ++)
_putchar(alpha);

_putchar('\n');
}
