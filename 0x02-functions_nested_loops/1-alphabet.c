#include "holberton.h"
/**
* print_alphabet - Entry Point
*
* This program prints the alphabet, in lowercase
*
* Return: Always 0 (Succes)
*/
void print_alphabet(void)
{
for (int n = 97; n <= 122; n++)
{
_putchar(n);
}
_putchar('\n');
}

