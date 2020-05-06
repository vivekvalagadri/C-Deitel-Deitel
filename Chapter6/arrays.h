/*

This File contains basic array operations such as
accepting an array 
printing an array 
generating a random array


*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
Function prints integer array
parameters are int array and SIZE
*/
void printia(int a[],int SIZE){
		for(int i=0;i<SIZE;i++){
		printf("%.2d",a[i]);
		(i+1)%10==0 ? printf("\n") : printf(" "); 
	}
	puts("");
	
}

/*
Function prints floating point array
parameters are double array and SIZE
*/

void printda(double a[],int SIZE){
	for(int i=0;i<SIZE;i++){
		printf("%f",a[i]);
		(i+1)%10==0 ? printf("\n") : printf(" ");
	}
	puts("");

}

/*
Function prints integer array
parameters are int array and SIZE
*/
void scania(int a[],int SIZE){
		for(int i=0;i<SIZE;i++){
		scanf("%d",&a[i]);
	}
}

/*
Function accepts floating point array
parameters are double array and SIZE
*/
void scanda(double a[],int SIZE){
		for(int i=0;i<SIZE;i++){
		scanf("%lf",&a[i]);
	}
}

/*
Function generates an array of random integers
the range of the random numbers is from 1 to range specified
parameters are int array,SIZE and range
*/

void randarray(int a[],int SIZE,int range){
	srand(time(NULL));
	for(int i=0;i<SIZE;i++){
		a[i]=(rand()%range)+1;
	}
}