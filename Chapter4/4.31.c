/*
Program for printing diamond
*/

#include <stdio.h>

int main(){
	for(int i=1,k=0;i<10;i+=2,++k){
		int l=4-k;
		while(l>0){
			printf(" ");
			l--;
		}
		for (int j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
		
	}
	

	for(int i=1,k=0;i<8;i+=2,++k){
		int l=k+1;
		while(l>0){
			printf(" ");
			l--;
		}
		for (int j=8;j>i;j--){
			printf("*");
		}
		printf("\n");
	}
	
}

