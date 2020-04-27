/*
	Program for Recursive Addition
	to achive Multiplication only using (add var)
*/


#include <stdio.h>

unsigned int mystery(unsigned int a,int b); // function prototype
int main(void){
	printf("%s", "Enter two positive integers: ");
	 int x; // first integer
	unsigned int y; // second integer
	scanf("%u%u", &x, &y);
	printf("The result is %u\n", mystery(x, y));
}
unsigned int mystery(unsigned int a, int b)
{
	b<0 ? (b=-b) : (b=b);
// base case
if (1 == b) {
return a;
}
else { // recursive step
return a + mystery(a, b- 1);
}
}