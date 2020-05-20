/*
Program to print Celsius and Farhenheit
*/

#include <stdio.h>
int main(){
	printf("%10s%10s\n","Fahrenheit","Celsius");
	for(int f=0;f<=212;f++){
		float c=(5.0/9.0)*(f-32);
		printf("%10d%+10.3f\n",f,c);
	}
}