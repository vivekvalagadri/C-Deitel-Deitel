#include <stdio.h>
int main(){
	int a,b,c;
	puts("Please Enter a non zero number");
	scanf("%d",&a);
	puts("Please Enter a non zero number");
	scanf("%d",&b);
	puts("Please Enter a non zero number");
	scanf("%d",&c);
	if( ((a+b)<=c) || ((c+b)<=a) || ((a+c)<=b))
		puts("They cant be sides of a triangle");
	else
		puts("They could be the sides of a triangle");
}