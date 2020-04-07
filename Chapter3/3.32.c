#include <stdio.h>

int main(){
	int a;
	int i=0;
	puts("Please enter a number");
	scanf("%d",&a);

	while(i<a){
		int j=0;
		while(j<a){
				printf("*");
				j++;
		}
	printf("\n");
	i++;
	}
}