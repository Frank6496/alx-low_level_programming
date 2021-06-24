#include <unistd.h>

/**
 * _puchar - writes the character c to stdout
 * @c: the character to print
 * 
 * Return: On Succes 1
 * On error, -1 is returned, and errno is not appropriate
 */
int _putchar(char c)
{
return(write(1, &c, 1));
}
