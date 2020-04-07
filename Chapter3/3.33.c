#include <stdio.h>

int main(){
	int a;
	int l=0;
	puts("Please enter a number");
	scanf("%d",&a);
	while(l<a){
			printf("*");
			++l;
		}
	printf("\n");

		int i=0;
	while(i<(a-2)){
		int j=0;
		while(j<a){
			if(j==0 || j==(a-1))
				printf("*");
			else 
				printf(" ");
			j++;
		}
	printf("\n");
	i++;
}
int k=0;
	while(k<a){
			printf("*");
			k++;
		}	
		printf("\n");

}