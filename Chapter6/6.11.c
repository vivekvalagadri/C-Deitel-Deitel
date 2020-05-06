/*
Program for demonstrating selection sort
*/

#include <stdio.h>
#include "arrays.h"

void selectionSort(int a[],int SIZE1){
	int temp;
	for(int i=0;i<SIZE1;i++){
		int samllest=i;
		for(int j=i+1;j<SIZE1;j++){
			if(a[samllest]>a[j]){
				samllest=j;
			}
		}
		temp=a[i];
		a[i]=a[samllest];
		a[samllest]=temp;
	}

}

int main(){
	int SIZE1=10;
	int arr[SIZE1];
	randarray(arr,SIZE1,10);
	puts("Unsorted Array:");
	printia(arr,SIZE1);
	selectionSort(arr,SIZE1);
	puts("Sorted Array:");
	printia(arr,SIZE1);
}