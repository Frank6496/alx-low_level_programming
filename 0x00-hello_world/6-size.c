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

printf("Size of int: %zu byte(s)\n", sizeof(intType));
printf("Size of float: %zu byte(s)\n", sizeof(floatType));
printf("Size of char: %zu byte(s)\n:", sizeof(charType));
printf("Size of long int: %zu byte(s)\n:", sizeof(longType));
printf("Size of long long int: %zu byte(s)\n", sizeof(longyType));

return (0);
}
