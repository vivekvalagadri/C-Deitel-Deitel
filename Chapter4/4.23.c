/*
Program for Calculating compound interest.
*/

#include <stdio.h>
#include <math.h>
int main(void){
	int principal = 1000; // in pennies starting principal
	int rate = 5; // annual interest rate
	// output table column heads
	printf("%s 	%s \n", "Year", "Amount on deposit (dollars)");
	// calculate amount on deposit for each of ten years
	for (unsigned int year = 1; year <= 10; ++year) {

		// calculate new amount for specified year
		int amount = principal * pow(1+(rate/100.0), year);
		// output one table row
		int dollars=amount/100;
		int cents=amount%100;
		printf("%4u		%d.%d\n", year,dollars,cents);
	}
}