/*
Program for shuffling and dealing cards 
and placing them in struct card
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SUITS 4
#define FACES 13
#define CARDS 52

typedef struct card{
		const char *suit;
		const char *face;
	}Card;

void LoadDeck(Card cdeck[],char *suits[],char *faces[]){
	for(int i=0;i<CARDS;i++){
		cdeck[i].face=faces[(i%FACES)];
		cdeck[i].suit=suits[(i%SUITS)];
	}
}


void shuffle(Card cdeck[]){
	for(int i=0;i<CARDS;i++){
		int x=rand()%CARDS;
		Card temp;
		temp=cdeck[i];
		cdeck[i]=cdeck[x];
		cdeck[x]=temp;
	}
}

void deal(Card cdeck[]){
	for(int i=1;i<=CARDS;i++){
		printf("%-5s of %-8s",cdeck[i-1].face,cdeck[i-1].suit);
		i%4==0 ? puts(""):printf("\t");
	}
}



int main(){
	srand(time(NULL));
	char *suits[]={"Diamonds","Clubs","Spades","Hearts"};
	char *faces[]={"Ace","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King"};
	Card cdeck[52];
	LoadDeck(cdeck,suits,faces);
	shuffle(cdeck);
	deal(cdeck);
}