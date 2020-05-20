/*
Program for testing flush suing getchar()
*/

#include <stdio.h>

int main(){
	char b,c;
	printf("Enter \n");
	scanf("%c",&b);
	getchar();
	scanf("%c",&c);
	printf("%c %c\n",b,c);	
}