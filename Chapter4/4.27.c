/*
Program for calculating pythogaras triplets
concidering 3,4,5 and 4,3,5 as one triplet
*/

#include <stdio.h>

int main(){
	int count=0;
	printf("a	b	c\n");
	for(int i=1;i<=500;i++){
		for(int j=1;j<=i;j++){
			for(int k=1;k<=j;k++){
				if(k*k+j*j==i*i){
						printf("%d	%d	%d\n",k,j,i);
						count+=1;
				}
			}

		}
	}
	printf("There are total %d pythogaras triplets with hypotenuse not larger 500\n",count);
	
}