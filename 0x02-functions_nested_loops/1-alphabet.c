#include "holberton.h"
/**
* main - Entry Point
*
* This program prints the alphabet, in lowercase
*
* Return: void
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
return (0);
}
