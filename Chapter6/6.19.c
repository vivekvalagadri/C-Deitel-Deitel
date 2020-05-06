/*
Program for rolling dice and summing
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define FREQ_SIZE 13


int main(){
	srand(time(NULL));
	int freq[FREQ_SIZE]={0};
	for(int i=0;i<360000;i++){
		int sum=((rand()%6)+1)+((rand()%6)+1);
		++freq[sum];
	}
	puts("SUM  FREQUENCY  PROBABILITY");
	for(int i=2;i<FREQ_SIZE;i++){
		printf("%.3d   %-8d  %.3lf\n",i,freq[i],(double)(freq[i]/360000.0));
	}
	
}