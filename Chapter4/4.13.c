#include <stdio.h>
int main(){
	int n;
	int sum=0,square=0,cube=0;
	puts("Enter till which number");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		sum=sum+i;
	}
	for(int i=1;i<=n;i++){
		int j=i*i;
		square+=j;
	}
	for(int i=1;i<=n;i++){
		int j=i*i*i;
		cube+=j;
	}
	printf("The sum of %d natural numbers is %d\n",n,sum);
	printf("The sum of squares of %d natural numbers is %d\n",n,square);
	printf("The sum of cubes of %d natural numbers is %d\n",n,cube);
}