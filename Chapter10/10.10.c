/*
Program for demonstrating right shift
*/

#include <stdio.h>

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
	unsigned int a=700;
	puts("Before Right Shift");
	displayBits(a);
	a=a>>4;
	puts("After Right Shift");
	displayBits(a);
}