/*
Program for printing bar graphs
*/

#include <stdio.h>

int main(){
	int n;
	printf("Enter five Numbers (1-30)\n");
	for(int i=0;i<5;i++){		
		scanf("%d",&n);
		for(int j=n;j>0;j--)
			printf("*");\
		printf("\n");
	}
}