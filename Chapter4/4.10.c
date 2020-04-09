#include <stdio.h>

int main(){
	puts("Celsius	Farenheit");
	for(int c=30;c<=50;c++){
		float f=((9.0/5.0)*c)+32;
		printf("%d	%.2f\n",c,f);
	}
}