// Fig. 5.18: fig05_18.c
// Recursive factorial function.
#include <stdio.h>
long long unsigned int factorial(unsigned int number);


int main(void)
{
	int n;
	puts("Enter a Number to finds it Factorial");
	scanf("%u",&n);
// during each iteration, calculate
// factorial(i) and display result
	unsigned long long int x=factorial(n);
	puts("");
printf("%llu \n",x);
// recursive definition of function factorial

}
long long unsigned int factorial(unsigned int number)
{
// base case
if (number <= 1) {
	printf("1");
return 1;
}
else { // recursive step
printf("%d.",number );
return number*factorial(number - 1);
//return number
}

}
