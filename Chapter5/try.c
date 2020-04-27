/*
	Program for Recursive Addition
	to achive Multiplication 
*/


#include <stdio.h>

int mystery(int a,int b); // function prototype
int main(void){
	printf("%s", "Enter two positive integers: ");
	 int x; // first integer
	int y; // second integer
	scanf("%d%d", &x, &y);
	printf("The result is %d\n", mystery(x, y));
}
int mystery(int a, int b)
{
	if(b<0 && a>0){
		a=-a;
		b=-b;
	}
	b<0 ? (b=-b) : (b=b);
// base case
if (1 == b) {
	if (a<0)
	return -a;
	else 
	return a;
}
else { // recursive step
	if (a<0)
		return (-a)+mystery(a, b- 1);
	else  
		return a+ mystery(a, b- 1);
}
}