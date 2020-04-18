/*
Program for printing rectangles with *
*/
#include <stdio.h>
void display(int a,int b){
	for(int i=a;i>0;i--){
		for(int j=b;j>0;j--){
			printf("*");
		}
		printf("\n");
	}
}

int main(){
	int a,b;
	puts("Enter dimentions of Rectangle");
	scanf("%d",&a);
	scanf("%d",&b);
	display(a,b);
	
}