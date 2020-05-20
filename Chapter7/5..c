/*
Program for shuffling and dealing cards
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SUITS 4
#define FACES 13
#define CARDS 52

void shuffle(int deck[][FACES]){
	int face,suit;
	for(int i=1;i<=CARDS;i++){
		do{
			face=rand()%13;
			suit=rand()%4;
		}while(deck[suit][face]!=0);
		deck[suit][face]=i;
	}
}

void deal(int deck[][FACES], char *suits[], char *faces[]){
	for(int i=1;i<=CARDS;i++){
		for(int j=0;j<SUITS;j++){
			for(int k=0;k<FACES;k++){
				if(deck[j][k]==i){
					printf("%-5s of %-8s %c",faces[k],suits[j],'\t');
				}
				
			}
		}
		if(i%2==0)
		printf("\n");
	}
}



int main(){
	srand(time(NULL));
	char *suits[]={"Diamonds","Clubs","Spaces","Hearts"};
	char *faces[]={"Ace","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King"};
	int deck [SUITS][FACES]={0};
	shuffle(deck);
	deal(deck,suits,faces);
}