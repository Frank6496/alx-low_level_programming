#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - print if the number is positive, zero or negative
*
* Description: using the main function
* this program prints the out
* Return: 0
*/
int main(void)
{
  int n, lastdigit;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (lastdigit > 5)
{
printf("last digit of %d is %d and is greater than 5\n", n, lastdigit);
}
else if (lastdigit == 0)
{
printf("last digit of %d is %d and is 0\n", n, lastdigit);
}
else if (lastdigit < 6 && lastdigit != 0))
{
printf("Last digit %d is %d and is less than 6 and not 0 \n", n);
}

return (0);
}
