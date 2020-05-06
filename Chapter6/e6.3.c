/*
Program for demostrating bubble sort 
of randomly generated numbers
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100

int main(){
	srand(time(NULL));
	int arr[SIZE];
	for (int i=0;i<SIZE;i++){
		arr[i]=(rand()%50+1);
	}
	for(int i=0;i<SIZE-1;i++){
		for(int j=0;j<SIZE-1;j++){
			if(arr[j]>arr[j+1]){
				int temp;
				temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(int i=1;i<=SIZE;i++){
		printf("%02d",arr[i-1]);
		i%10==0 ? puts("") : printf(" "); 
	}
}