/*
Program to demonstate field widths in scanf
Program to extract digits the beautiful way
You can also extract characters in a string and do 
whatever you want with it 
*/

#include <stdio.h>
#include <string.h>
int main(void){
	int a,b,c,d,e,f,g;
	printf("%s", "Enter seven digit number");
	scanf("%1d%1d%1d%1d%1d%1d%1d",&a,&b,&c,&d,&e,&f,&g);
	printf("The input was %d %d %d %d %d %d %d \n",a,b,c,d,e,f,g);
}