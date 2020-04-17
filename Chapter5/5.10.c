/*
Program for rounding off using ceil
*/

#include <stdio.h>
#include <math.h>

int main(){
	float n=0;
	while(n!=EOF){
		printf("Enter Number (-1) to exit\n");
		scanf("%f",&n);
		int a=n;
		ceil(n+0.5)>ceil(n) ? printf("%f %lf\n",n,ceil(n)):printf("%f %d\n",n,a);
	}
	
}