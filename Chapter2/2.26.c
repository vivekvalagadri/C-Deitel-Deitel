#include <stdio.h>

int main(){
	int a,b;
	printf("%s\n","Enter 1st number");
	scanf("%d",&a);
	printf("%s\n","Enter 2nd number");
	scanf("%d",&b);

	if(a%b==0)
		printf("Yayyy! First Number is Multiple of Second\n");
	else
		printf("%s\n","No Comments about this case");
}