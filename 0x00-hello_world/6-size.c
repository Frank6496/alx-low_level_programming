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

printf("Size of char: %d byte(s)\n", sizeof(charType));
printf("Size of a an int: %d byte(s)\n", sizeof(intType));
printf("Size of a long int: %d byte(s)\n", sizeof(longType));
printf("Size of a long long int: %zu byte(s)\n", sizeof(longyType));
printf("Size of a float: %d byte(s)\n", sizeof(floatType));

return (0);
}
