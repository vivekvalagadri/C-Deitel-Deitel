/*
Program to demonstrate pointer/offset not and pointerindex not 
*/

#include <stdio.h>
#define SIZE 5

int main(){
	int arr[]={0,1,2,3,4};
	int *arrPtr=arr;

	for(int i=0;i<SIZE;i++){
		printf("*(arr+%d):  %d\n",*(arr+i),*(arr+i));
	}
	puts("");

	for(int i=0;i<SIZE;i++){
		printf("arrPtr[%d]: %d\n",arrPtr[i],arrPtr[i]);
	}
	puts("");
}