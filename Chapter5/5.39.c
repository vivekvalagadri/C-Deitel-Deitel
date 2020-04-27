/*
Program for 
*/

#include <stdio.h>

int gcd(int x,int y){
	if(y==0){
		return x;
	}
	else 
		return gcd(y,x%y);
}

int main(){
	int a,b;
	puts("Enter Two Numbers");
	scanf("%d %d",&a,&b);
	printf("GCD is %d\n",gcd(a,b) );
}