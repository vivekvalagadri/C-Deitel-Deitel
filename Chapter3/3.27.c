#include <stdio.h>

int main( void )
{
// initialize variables in definitions
unsigned int passes = 0; // number of passes
unsigned int failures = 0; // number of failures
unsigned int student = 1; // student counter
int result; // one exam result
// process 10 students using counter-controlled loop
while ( student <= 10 ) {
// prompt user for input and obtain value from user
	printf( "%s", "Enter result ( 1=pass,2=fail ): " );
	scanf( "%d", &result );
	if(result==1 || result==2){
		// if result 1, increment passes
		if ( result == 1 ) {
			passes = passes + 1;
		} // end if
		else { // otherwise, increment failures
		failures = failures + 1;
		}	 // end else
	++student;
	}
	else
		puts("Please Enter Either 1 or 2 ");

} 

// end while
// termination phase; display number of passes and failures
printf( "Passed %u\n", passes );
printf( "Failed %u\n", failures );
// if more than eight students passed, print "Bonus to instructor!"
if ( passes > 8 ) {
puts( "Bonus to instructor!" );
} // end if
} // end function main