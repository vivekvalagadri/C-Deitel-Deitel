/*
Program for dealing poker hand
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

void deal(int deck[][FACES], char *suits[], char *faces[],char *hand[]){
	for(int i=1;i<=5;i++){
		for(int j=0;j<SUITS;j++){
			for(int k=0;k<FACES;k++){
				if(deck[j][k]==i){
					//printf("%-5s of %-8s\n",faces[k],suits[j]);
					hand[i-1]=faces[k];
				}
				
			}
		}
	}
}


int containsPair(char *hand[]){
	int a=0,count,size;
	while(a<5){
		char temp[5];
		int k=0;
		size=0;
		count=0;
		char *tPtr=temp;				//assigning pointers to arrays
		const char *hPtr=(*(&hand[a]));
		printf("Hand Selected is :%s\n",hPtr);

		while(*hPtr!='\0'){
		size++;						//computing size
		hPtr++;
		}
		int tempsize=size;
		hPtr=(*(&hand[a]));

		while(*(hPtr+k)!='\0'){		//to copy hand into temp
		*(tPtr+k)= *(hPtr+k);
		k++;
		}
		printf("temp is:%s\n",temp);
		
		a++;
		if((*tPtr)==(*hPtr)){
			printf("Something\n");
			while(tempsize>0){
				tPtr++;
				hPtr++;
				count+=1;
				tempsize-=1;
				printf("HEHE\n");
			}
			tPtr=temp;
		}
		
	}
	if(count==(2*size)){
		printf("MATCH\n");
	}
	
}



int main(){
	srand(time(NULL));
	char *hand[5];
	char *suits[]={"Diamonds","Clubs","Spaces","Hearts"};
	char *faces[]={"Ace","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King"};
	int deck [SUITS][FACES]={0};
	shuffle(deck);
	deal(deck,suits,faces,hand);
	for (int i = 0; i < 5; ++i)
	{
		printf("%s\n",hand[i]);
	}
	containsPair(hand);

}