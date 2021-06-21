#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
* main - entry point
*
* Description: it returns greater than 5 if the last digit is greater than 5 
* if its less than 5 it returns less than 5
* if last digit of n < 6 && not 0 it returns less than 6 and not 0
* return: always 0 (succes
*/
/* betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 5)
{
printf(n, "\n and is greater than 5");
}
else if (n == 0)
{
printf(n, "\n and is 0");
}
else if ((n < 6) && (n == 0))
{
printf(n, "\and is less than 6 and not 0\n");
}

return (0);
}
