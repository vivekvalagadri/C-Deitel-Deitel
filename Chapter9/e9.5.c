/*
Program for demonstating function pointers
bubble sort
*/

#include <stdio.h>
#include <arrays.h>
int ascending(int a,int b){
	return b<a;
}
int descending(int a,int b){
	return b>a;
}
void swap(int *a,int *b){
	int temp;
	temp=*b;
	*b=*a;
	*a=temp;
}
void bubble(int a[],int SIZE,int (*compare)(int a,int b)){
	for(int i=0;i<SIZE-1;i++){
		for(int j=0;j<SIZE-1;j++){
			if((*compare)(a[j],a[j+1])){
				swap(&a[j],&a[j+1]);
			}
		}
	}
}

int main(){
	SIZE1D=19;
	int arr[SIZE1D],a;
	randarray(arr,15);
	puts("Enter 1 for Ascending and 2 for Descending");
	scanf("%d",&a);
	a==1 ? bubble(arr,SIZE1D,ascending) : bubble(arr,SIZE1D,descending);
	printia(arr);
	
}