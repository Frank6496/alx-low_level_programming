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
  long longType;
  long long longyType;

  printf("The Size of int: %zu bytes\n", sizeof(intType));
  printf("The size of float: %zu bytes\n", sizeof(floatType));
  printf("The size of char: %zu bytes\n:", sizeof(charType));
  printf("The size of long: %zu bytes\n:", sizeof(longType));
  printf("The size of long long: %zu bytes\n", sizeof(longyType));
  
}
