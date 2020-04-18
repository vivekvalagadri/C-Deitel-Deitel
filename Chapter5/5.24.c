/*
Program for conver USD to Euro and Yen
*/

#include <stdio.h>


float toEuro(int USD){
	return 0.92*USD;
}

float toYen(float USD){
	return 118.87*USD;
}
int main(){
	puts("USD	Yen		Euro");
	for(int USD=1;USD<=20;USD++){
		printf("%d	%.2f		%.2f\n",USD,toYen(USD),toEuro(USD));
	}
}