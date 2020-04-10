/*
Program for printing ASCII/ascii
*/

#include <stdio.h>

int main(){
		for(int j=32;j<=127;j++){
			if(j%10==0)
				printf("%c\n",j);
			else
				printf("%c ",j);
		}
		printf("\n");
	
}