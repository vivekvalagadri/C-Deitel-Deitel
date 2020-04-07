#include <stdio.h>
int main( void )
{
int x = 1;
int total = 0;
while ( x <= 5 ) { // loop 5 times
total+= x * x; // perform calculation
printf( "%d\n", x*x);
++x; // increment counter x
} // end while
printf( "Total is %d\n", total); // display result
} // end function main