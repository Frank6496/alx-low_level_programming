#include <stdio.h>
#include <ctype.h>
/**
* main - print alphabet
* x: temp var
* Description: lower alpha
* Return: Always 0 succes
*/
int main(void)
{
int x;

for (x = 'A'; x <= 'z'; x++)
{
x = tolower(x);
putchar(x);
}
putchar('\n');
return (0);
}
