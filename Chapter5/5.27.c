/*
Program for solving quadratic equation
*/

#include <stdio.h>
#include <math.h>

int quadratic(int a,int b,int c){
	float dis=(b*b)-(4*a*c);
	if(dis<0)
		puts("Inaginary Roots!");
	else{
		puts("Real Roots!");
		double x=(-b+sqrt(dis))/(2*a);
		double y=(-b-sqrt(dis))/(2*a);
		printf("The roots are: %f %f\n",x,y);
	}

}

int main(){
	int a,b,c;
	puts("Enter the coefficients of The Quadratic Equation");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	quadratic(a,b,c);
	
}