/*
Program for rounding off to 
nearest Integer/ Tenths/Hundreds/Thousands
*/

#include <stdio.h>
#include <math.h>

double roundToInteger(double x){
	return floor(x + .5);
}
double roundToTenths(double x){
	return floor(x*10 + .5)/10;
}
double roundToHundreds(double x){
	return floor(x*100 + .5)/100;
}
double roundToThousands(double x){
	return floor(x*1000 + .5)/1000;
}


int main(){
	double n;
	puts("Enter a decimal number");
	scanf("%lf",&n);
	printf("Original Value is: %lf\n",n);
	printf("Rounded to Integer: %lf\n",roundToInteger(n));
	printf("Rounded to Tenths: %lf\n",roundToTenths(n));
	printf("Rounded to Hundreds: %lf\n", roundToHundreds(n));
	printf("Rounded to Thousands: %lf\n", roundToThousands(n));

}