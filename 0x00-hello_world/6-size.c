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

printf("Size of an int: %zu byte(s)\n", sizeof(intType));
printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of a long int: %zu byte(s)\n", sizeof(longType));
printf("Size of a long long int: %zu byte(s)\n", sizeof(longyType));

return (0);
}
