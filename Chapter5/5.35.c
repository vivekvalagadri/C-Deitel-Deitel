/*
Program for Fibonacci series
non recursive 
loop
*/

#include <stdio.h>

unsigned long long int fibonacci(unsigned int a){
	int bterm=1;
	int aterm=0;
	unsigned long long int cterm=0;
	for(int i=0;i<a-2;i++){
		cterm=aterm+bterm;
		aterm=bterm;
		bterm=cterm;
	}
	return cterm;
}

int main(){
	unsigned int a;
	puts("Enter Number");
	scanf("%u",&a);
	printf("%llu\n",fibonacci(a));

	
}