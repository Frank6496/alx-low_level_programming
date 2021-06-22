#include <unistd.h>
#include "holberton.h"
#include "_putchar.c"
/**
* main - this is the entry point
* Description: returns a string when executed
* return: always 0 (succes)
* Return: 0
*/
int _putYchar(char c) /* The main func */
{
char c;
char phrase[] = "Holberton";
for (c = 0; c <= 9; c++)
{
_putchar(phrase[c]);
 _putchar('\n');
}
return (0);
}
