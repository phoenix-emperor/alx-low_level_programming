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


  char charType;    
  int intType;
  long longInt;
  long long longlongInt;
  float floatType;

  // sizeof evaluates the size of a variable
  printf("Size of a char: %c byte(s)\n", sizeof(charType));
  printf("Size of an int: %d byte(s)\n", sizeof(intType));
  printf("Size of a long int: %ld byte(s)\n", sizeof(longInt));
  printf("Size of a long long: %lld byte(s)\n", sizeof(longlongInt));
  printf("Size of a float: %f byte(s)\n", sizeof(floatType));
    
  return 0;

}
