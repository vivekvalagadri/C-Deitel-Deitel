/*
Program to demonstate scan set and field widths
*/

#include <stdio.h>

int main(void)
{
char z[9],y[9]; // define array z
printf("%s\n", "Enter String"); //aaeeooiiplo
scanf("%8[aeiou]", z); // search for set of characters
printf("The input was \"%s\"\n", z);
//[^aeiou] for invert scan
}