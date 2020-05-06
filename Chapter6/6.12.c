/*
Program for demostrate union of sets
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

	for(int i=0;i<SIZE1;i++){
		ar3[i]=ar1[i];
	}
	int k=0;
	for(int i=0;i<SIZE2;i++){
		int count=0;
		for(int j=0;j<SIZE1;j++){
			if(ar2[i]==ar1[j]){
				count++;
				if(count ==1){
					newSize=newSize-1;
				}
			}
		}
		if(count==0){
			ar3[SIZE1+k]=ar2[i];
			k++;
		}
	}
	printia(ar3,newSize);	

}