// C Program to find largest prime
// factor of number
#include <math.h>
#include <stdio.h>


long long maxPrimeFactors(long long n)
{
	
long long maxPrime = -1;

while (n % 2 == 0) {
maxPrime = 2;
n >>= 1; 
}

for (int i = 3; i <= sqrt(n); i += 2) {
while (n % i == 0) {
maxPrime = i;
n = n / i;
}
}


if (n > 2)
maxPrime = n;

return maxPrime;
}

int main()
{
long long n = 15;
printf("%lld\n", maxPrimeFactors(n));

n = 612852475143;
printf("%lld", maxPrimeFactors(n));

return 0;
}
