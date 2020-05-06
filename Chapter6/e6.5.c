/*
Program for demonstrating binary search
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 17
void sort(int arr[]){
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
	printf("\n\n\n");
	for(int i=1;i<=SIZE;i++){
		printf("%02d",arr[i-1]);
		i%10==0 ? puts("") : printf(" "); 
	}
}
int search(int arr[],int a){
	int low=0;
	int high=SIZE-1;
	while(low<=high){
		int middle=(low+high)/2;
		if(arr[middle]==a){
			return middle;
		}
		else if(a<arr[middle]){
			high=middle-1;
		}
		else{
			low=middle+1;
		}
	}
	return -1;
}



int main(){
	srand(time(NULL));
	int a;
	int arr[SIZE];
	for (int i=0;i<SIZE;i++){
		//arr[i]=(rand()%50+1);
		arr[i]=i;
	}
	for(int i=1;i<=SIZE;i++){
		printf("%02d",arr[i-1]);
		i%10==0 ? puts("") : printf(" "); 
	}
	sort(arr);
	puts("Enter a nuber to search from "
		"the randomly generated numbers btw 1 and 50");
	scanf("%d",&a);
	int x=search(arr,a);
	x==-1 ? puts("Not Found!") : printf("Found at %d position\n",x);
}