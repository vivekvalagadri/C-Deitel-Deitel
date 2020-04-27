/*
Program for reccursive exponentiation 
power function
*/

#include <stdio.h>

double power(double base,int exponent){
	if(exponent==1)
		return base;
	if(exponent==0)
		return 1;
	else
		return base*power(base,exponent-1);
}


int main(){
	double base;
	int exponent;
	puts("Enter Base and Exponent");
	scanf("%lf %d",&base,&exponent);
	//scanf("%d",);
	printf("%lf\n", power(base,exponent));
	
}