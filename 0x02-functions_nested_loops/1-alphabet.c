#include "holberton.h"
/**
* main - Entry Point
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
return (0);
}

