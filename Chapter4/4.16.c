/*
Program for printing triangular patterns
Uncomment for different patterns
*/

#include <stdio.h>



int main(){
	for(int i=0;i<10;i++){
		int l=10-i;
		while(l>0){
			printf(" ");
			l--;
		}
		for (int j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
		
	}
	
}

/*C)
int main(){
	for(int i=0;i<10;i++){
		for (int j=10;j>i;j--){
			printf("*");
		}
		printf("\n");
		int l=i;
		while(l>=0){
			printf(" ");
			l--;
		}
	}
	printf("\n");
	
}
*/
/* B)
int main(){
	for(int i=0;i<10;i++){
		for (int j=10;j>i;j--){
			printf("*");
		}
		printf("\n");
	}
	
}
*/

/* A)
int main(){
	for(int i=0;i<10;i++){
		for (int j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
	}
	
}
*/