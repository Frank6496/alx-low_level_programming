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

printf("The Size of int: %zu byte(s)\n", sizeof(intType));
printf("The size of float: %zu byte(s)\n", sizeof(floatType));
printf("The size of char: %zu byte(s)\n:", sizeof(charType));
printf("The size of long int: %zu byte(s)\n:", sizeof(longType));
printf("The size of long long int: %zu byte(s)\n", sizeof(longyType));

return (0);
}
