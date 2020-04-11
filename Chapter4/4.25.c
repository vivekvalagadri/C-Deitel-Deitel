/*
Program for printing decimals binary and octal 
*/

#include <stdio.h>

int main(){
	int a=15;
	printf("decimal	binary		octal	hex\n");
	
	for(int i=0;i<256;i++){
		printf("%d	",i);
		int a=i;
		for (int j=0;j<8;j++)
		{
			int rem=a%2;
		 	a=a/2;
			printf("%d",rem);
		}
		printf("	%o	%X",i,i);
		printf("\n");
	}
}