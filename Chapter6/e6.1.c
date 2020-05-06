/*
Program for Summarising Results of a survey
with random ratings xD 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define RES_SIZE 40
#define FREQ_SIZE 11

int main(){
	int res[RES_SIZE];
	int freq[FREQ_SIZE]={0};
	int count =0;
	srand(time(NULL));

	for(int i=0;i<40;i++){
		res[i]=rand()%10+1;
	}

	for(int i=0;i<RES_SIZE;i++){
		++freq[res[i]];
	}
	printf("%-3s  %-4s  %5s\n","Res","Freq","Graph" );
	for(int i=1;i<FREQ_SIZE;i++){
		printf("%-3d  %-4d  ",i,freq[i]);
		for(int j=0;j<freq[i];j++)
		printf("*");
	printf("\n");
	}

	
}