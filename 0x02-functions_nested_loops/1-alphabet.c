#include <stdio.h>

/**
* print_alphabet - a function that prints the alphabet, in lowercase
*
* Return: Always 0 (Succes)
*/
void print_alphabet(void)
{
for (int n = 97; n <= 122; n++)
{
_putchar("%n ", n);
}
_putchar('\n');
}
/** some main func duty codes **/
int main(void)
{
_putchar("Lowercase Alphabets\n");
print_alphabet();
return (0);
}
