#include <stdio.h>
#include <math.h>
int main(void){
	for(int rate=5;rate<=10;rate++){
	double principal = 1000.0; // starting principal
	double amount=0;
	printf("For Rate: %d\n",rate);
	printf("%4s%21s\n", "Year", "Amount on deposit");
	for (unsigned int year = 1; year <= 10; ++year) {
 		amount = principal * pow(1.0 + rate, year);
		printf("%4u%21.2f\n", year, amount);
}
}
}