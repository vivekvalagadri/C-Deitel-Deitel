/*
Program for printing custom diamond
*/

#include <stdio.h>

int main(){
	 int n;
	puts("Enter number 1-19");
	scanf("%d",&n);
	for(int i=1,k=0;i<n+1;i+=2,++k){
		int x=n/2;
		int l=x-k;
		while(l>0){
			printf(" ");
			l--;
		}
		for (int j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
		
	}
	

	for(int i=1,k=0;i<n-1;i+=2,++k){
		int l=k+1;
		while(l>0){
			printf(" ");
			l--;
		}
		for (int j=n-1;j>i;j--){
			printf("*");
		}
		printf("\n");
	}
	
}

