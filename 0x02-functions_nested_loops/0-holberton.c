#include <unistd.h>
#include <stdio.h>
#include "holberton.h"
#include "_putchar.c"
/**
* main - this is the entry point
* Description: returns a string when executed
* return: always 0 (succes)
* Return: 0
*/
int _putchar(char c) /* The main func */
{
char phrase[] = "Holberton";
for (char c = 0; c <= 9; c++)
{
_putchar(phrase[c]);
 _putchar('\n');
}
return (0);
}
