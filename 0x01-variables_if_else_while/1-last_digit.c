#include <stdlib.h>
#include <time.h>

/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * This program finds the last digit of a random string of numbers
 * and checks if the digit is greater than 5, less than 6 or equal
 * to zero (0).
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;
int last_digit;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* n = -98; */
/* your code goes there */

if (n % 10 > 5)
{
last_digit = n % 10;
printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
}

else if (n % 10 == 0)
{
last_digit = n % 10;
printf("Last digit of %d is %d and is 0\n", n, last_digit);
}

else if (n % 10 < 6)
{
last_digit = n % 10;
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
}

return (0);
}

