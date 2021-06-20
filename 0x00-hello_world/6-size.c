#include <stdio.h>

/**
* main - entry point
*
* Return: always 0 (succes)
*/

int main(void)
{
  int intType;
  float floatType;
  char charType;
  double doubleType;

  printf("The Size of int: %zu bytes\n", sizeof(intType));
  printf("The size of float: %zu bytes\n", sizeof(floatType));
  printf("The size of char: %zu bytes\n:", sizeof(charType));
  printf("The size of double: %zu bytes\n:", sizeof(doubleType));
  
}
