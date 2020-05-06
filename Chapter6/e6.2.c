/*
Program for checking probabilities of dice 
by rolling it a lot of times 
using arrays to store the count
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SS_SIZE 60000000
#define DICE_SIZE 7
int main(){
	srand(time(NULL));
	int freq[DICE_SIZE]={0};
	for(long int i=0;i<SS_SIZE;i++){
		++freq[rand()%6+1];
	}
	for(int i=1;i<DICE_SIZE;i++){
		printf("Probailty calculated of %d is %f\n",i,(double)(freq[i])/SS_SIZE);
		printf("%d %d\n",i,freq[i]);
	}
	
	
}