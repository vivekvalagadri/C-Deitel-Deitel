/*
Program to Supress/ Skip characters from i/p stream
%d-%d-%d to skip this but sometimes you cant skip some characters 
SO YOU SUPRESS THEM 
%d%*c%d%*c%d%  wherein %*c will supress the character in the position of %*c
*/


#include <stdio.h>
int main(void){
	int month = 0;
	int day = 0;
	int year = 0;
	printf("%s", "Enter a date in the form mm-dd-yyyy: ");
	scanf("%d%*c%d%*c%d", &month, &day, &year);
	printf("month = %d day = %d year = %d\n\n", month, day, year);
	printf("%s", "Enter a date in the form mm/dd/yyyy: ");
	scanf("%d%*c%d%*c%d", &month, &day, &year);
	printf("month = %d day = %d year = %d\n", month, day, year);
}