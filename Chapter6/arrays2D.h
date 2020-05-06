/*

This File contains basic array operations such as
accepting an array 
printing an array 
generating a random array


*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#ifndef SIZE2dc
#define SIZE2dc 0
#endif
#ifndef SIZE2dr
#define SIZE2dr 0
#endif

/*
Function accepts 2D integer array
parameter is int array
*/

void scan2dia(int a[][SIZE2dc]){
	for(int i=0;i<SIZE2Dr;i++){
		for(int j=0;j<SIZE2dc;j++)
			scanf("%d",&a[i][j]);
	}
}

/*
Function prints 2D integer array
parameter is int array 
*/

void print2dia(int a[][SIZE2dc]){
	for(int i=0;i<SIZE2Dr;i++){
		for(int j=0;j<SIZE2dc;j++)
			printf("%.2d ",a[i][j]);
		printf("\n");
	}
}

/*
Function accepts 2D double array
parameter is int array
*/

void scan2dda(double a[][SIZE2dc]){
	for(int i=0;i<SIZE2Dr;i++){
		for(int j=0;j<SIZE2dc;j++)
			scanf("%lf",&a[i][j]);
	}
}

/*
Function prints 2D double array
parameter is int array 
*/

void print2dda(double a[][SIZE2dc]){
	for(int i=0;i<SIZE2Dr;i++){
		for(int j=0;j<SIZE2dc;j++)
			printf("%lf ",a[i][j]);
		printf("\n");
	}
}

/*
Function generates an array of random integers
the range of the random numbers is from 1 to range specified
parameters are 2D int array and the range
*/


void rand2darray(int a[][SIZE2dc],int range){
	srand(time(NULL));
	for(int i=0;i<SIZE2Dr;i++){
		for(int j=0;j<SIZE2dc;j++)
			a[i][j]=(rand()%range)+1;
	}
}