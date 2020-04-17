/*
Program for odd or even
*/

#include <stdio.h>
#include <math.h>

int checkoe(int x){
	if(x%2==0)
		return 1;
	else 
		return 0;
}

int main(){
	int a=0;
	while(a!=EOF){
		puts("Enter a number (-1 to exit)");
		scanf("%d",&a);
		checkoe(a)==1 ? puts("Even") : puts("Odd");
	}
}
