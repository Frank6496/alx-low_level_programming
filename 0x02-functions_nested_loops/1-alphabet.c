#include "holberton.h"
/**
* print_alphabet - Entry Point
*
* This program prints the alphabet, in lowercase
*
* Return: Always 0 (Succes)
*/
int main(void)
{
    char    letter;

    letter = 'a';
    while (letter <= 'z')
    {
        _putchar(letter);
        letter++;
    }
_putchar('\n');
return 0;
}

