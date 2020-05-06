/*
Program for demonstrating linear search
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100

int main(){
	srand(time(NULL));
	int a;
	int arr[SIZE];
	for (int i=0;i<SIZE;i++){
		arr[i]=(rand()%50+1);
	}
	for(int i=1;i<=SIZE;i++){
		printf("%02d",arr[i-1]);
		i%10==0 ? puts("") : printf(" "); 
	}
	puts("Enter a nuber to search from "
		"the randomly generated numbers btw 1 and 50");
	scanf("%d",&a);
	for(int i=0;i<SIZE;i++){
		if(a==arr[i]){
			printf("Found the element at %d Position\n",i+1);
		}
	}
}