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

putchar("Size of char: %d byte(s)\n", sizeof(charType));
putchar("Size of a an int: %d byte(s)\n", sizeof(intType));
putchar("Size of a long int: %d byte(s)\n", sizeof(longType));
putchar("Size of a long long int: %zu byte(s)\n", sizeof(longyType));
putchar("Size of a float: %d byte(s)\n", sizeof(floatType));

return (0);
}
