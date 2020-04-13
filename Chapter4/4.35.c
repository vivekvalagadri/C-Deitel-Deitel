// Fig. 4.11: fig04_11.c
// Using the break statement in a for statement.
#include <stdio.h>
int main(void){
	unsigned int x; // declared here so it can be used after loop
// loop 10 times
	for (x = 1; x <= 10; ++x) {
// if x is 5, terminate loop
	if (x == 5) {
		x=11; // break loop only if x is 5
	}
	else
	printf("%u ", x);
	}
	x=5;
	printf("\nBroke out of loop at x == %u\n", x);
}