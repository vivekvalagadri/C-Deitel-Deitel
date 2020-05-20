/*
Program for accepting string without " in "string"
*/

#include <stdio.h>

int main(){
	char string[10];
	scanf("%*c%[^\"]",string);
	printf("%s\n",string);
	
}