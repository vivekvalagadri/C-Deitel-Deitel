/*
Program for hypotenuse valculation 
*/

#include <stdio.h>
#include <math.h>

double hypotenuse(double x,double y){
	return sqrt((x*x)+(y*y));
}

int main(){
	double a,b;
	printf("Enter the two sides of the right angled triangle\n");
	scanf("%lf",&a);
	scanf("%lf",&b);
	printf("The hypotenuse is: %.4lf\n",hypotenuse(a,b));

		
}