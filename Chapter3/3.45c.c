#include <stdio.h>

int main(){
	int a;
	float fact=1;
	float sum=1;
	int x;
	int y=1;
	puts("Enter exponent x in e^x");
	scanf("%d",&x);
	puts("Enter level of approximation (greater the better)");
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		for(int j=1;j<=i;j++){
		fact*=j;
		}
		y*=x;
		sum+=y/fact;
		fact=1;
	}
	
	printf("The value is %f\n",sum);
}