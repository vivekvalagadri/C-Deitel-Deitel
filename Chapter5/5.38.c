/*
Program for Visualising Recursion using Factorials
*/

#include <stdio.h>

long long unsigned int factorial(int fact){
	static int i=1;
	if(fact==1){
		printf("Recursion %d\n",fact);
		printf("Base Case Returns 1\n");
		return 1;
	}
	else{
		printf("Recursion %d\n",i);
		printf("%d.%d!\n",fact,fact-1);
		i++;
		return fact*(factorial(fact-1));
	}
}

int main(){
	int fact;
	puts("Enter Number");
	scanf("%d",&fact);
	printf("%llu\n",factorial(fact));
	
}