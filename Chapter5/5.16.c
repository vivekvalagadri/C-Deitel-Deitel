/*
Program for calculating area
*/

#include <stdio.h>
#include <math.h>

double area(double a,double b,double c){
	double s=(a+b+c)/2;
	return sqrt(s*(s-a)*(s-b)*(s-c));
}


int main(){
	double a,b,c;
	puts("Enter Size of triangle");
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	if(a>0 && b>0 && c>0){
		if( ((a+b)<=c) || ((c+b)<=a) || ((a+c)<=b))
			puts("They cant be sides of a triangle");
		else
			printf("The Area is: %.4f\n",area(a,b,c));
	}
	else
		printf("Enter Positive Values!\n");
	
}