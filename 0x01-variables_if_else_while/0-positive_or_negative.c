#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * return: always 0 (succes)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if(n == 0) {
printf("is zero\n");
}
else if (n > 0) {
printf("is positive\n");
}
else if (n < 0) {
printf("is negative\n");
}
else {
printf("invalid\n");
}
	
return (0);
}
