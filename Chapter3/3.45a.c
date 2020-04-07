#include <stdio.h>

int main(){
	int a;
	int mul=1;
	puts("Enter a Number");
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		mul*=i;
	}
	printf("The factorial is %d\n",mul);
}