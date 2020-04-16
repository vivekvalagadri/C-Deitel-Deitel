/*
Program for demonstrating function coersion
implicit conversion happens essentially 
*/

#include <stdio.h>

float prin(float x){
	return x+5;
}

int main(){
	char x='A';
	double y=prin(x);
	printf("%f\n",y);
		
}