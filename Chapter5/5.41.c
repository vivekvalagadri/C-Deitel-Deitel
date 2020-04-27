/*
Program for recursive prime
*/

#include <stdio.h>

int prime(int a){
	static int i=1;
	static int count=0;
	if(i>a){
		count==2 ? puts("Prime"): puts("Composite");
		return count;
	}
	else {
		if(a%i==0)
			count++;
		i++;
		prime(a);
	}
}
int main(){
	int a;
	puts("Enter a Number");
	scanf("%d",&a);
	prime(a);
}