/*
Program for demostrating intersection of sets
*/

#include <stdio.h>
#include "arrays.h"

int main(){
	int SIZE1=10;
	int SIZE2=SIZE1;
	int ar1[SIZE1];
	int ar2[SIZE2];
	scania(ar1,SIZE1);
	scania(ar2,SIZE2);
	for(int i=0;i<SIZE1;i++){
		for(int j=i+1;j<SIZE1;j++){
			if(ar1[i]==ar1[j]){
				ar1[j]=ar1[SIZE1-1];
				SIZE1=SIZE1-1;
			}
		}
	}

	for(int i=0;i<SIZE2;i++){
		for(int j=i+1;j<SIZE2;j++){
			if(ar2[i]==ar2[j]){
				ar2[j]=ar2[SIZE2-1];
				SIZE2=SIZE2-1;
			}
		}
	}
	int newSize=SIZE1+SIZE2;
	int ar3[newSize];
	int k=0;
	for(int i=0;i<SIZE1;i++){
		int count=0;
		for(int j=0;j<SIZE1;j++){
			if(ar2[i]==ar1[j]){
				ar3[k]=ar2[i];
				k++;
				break;

			}
		}
	}
	puts("The intersection of the sets is");
	printia(ar3,k);
}