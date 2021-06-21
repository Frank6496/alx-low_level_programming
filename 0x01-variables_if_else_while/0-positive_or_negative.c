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
puts("is zero\n");
}
else if (n > 0) {
puts("is positive\n");
}
else if (n < 0) {
puts("is negative\n");
}
else {
puts("invalid\n");
}
	
return (0);
}
