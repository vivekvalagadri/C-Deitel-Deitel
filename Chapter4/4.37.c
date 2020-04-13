/*
Program for 
*/

// Fig. 4.12: fig04_12.c
// Using the continue statement in a for statement.
#include <stdio.h>
int main(void){
// loop 10 times
	for (unsigned int x = 1; x <= 10; ++x) {
// if x is 5, continue with next iteration of loop
		if (x == 5){

		}
		else
		printf("%u ", x);
	}
	puts("\nDID NOT Use continue to skip printing the value 5");
}