/*
Program for printing rectangles with fill character
*/
#include <stdio.h>
void display(int a,int b,char c){
	for(int i=a;i>0;i--){
		for(int j=b;j>0;j--){
			printf("%c",c);
		}
		printf("\n");
	}
}

int main(){
	int a,b;
	char c;
	puts("Enter dimentions of Rectangle");
	scanf("%d",&a);
	scanf("%d",&b);
	puts("Enter Fill Character");
	c=getchar();
	//scanf(" %c",&c);
	display(a,b,c);
	
}