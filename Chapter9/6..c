/*
Program for demonstrating selection sort
*/

#include <stdio.h>
#include <arrays.h>
SIZE1D=10;

void selectionSort(int arr[]){
	for(int i=0;i<SIZE1D;i++){
		int samllest=a[i];
		for(int j=0;j<SIZE1D;j++){
			if(samllest<a[j]){
				samllest=a[j];
			}
			a[i]=samllest;
		}
	}

}

int main(){
	int arr[SIZE1D];
	randarray(arr);
	puts("Unsorted Array:")
	printia(arr);
	selectionSort(arr);
	printia(arr);
}