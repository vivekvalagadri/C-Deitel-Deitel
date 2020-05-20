/*
Program for demonstrate left shift
*/

#include <stdio.h>

unsigned int pow2(unsigned int number,int pow){
	int mul=1;
	for(int i=0;i<pow;i++){
		mul=2*mul;
	}
	return mul*number;
}
void displayBits(unsigned int x){
	unsigned int a=1<<31;
	for(int i=1;i<=32;i++){
		putchar(x&a ? '1' : '0');
		x=x<<1;
		if(i%8==0)
			putchar(' ');
	}
	puts("");
}


int main(){
	unsigned int a=5;
	puts("Before Left Shift");
	displayBits(a);
	int lshift=8;
	puts("After Left Shift");
	displayBits(pow2(a,lshift));


	
}