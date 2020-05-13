// Fig. 5.14: fig05_14.c
// Simulating the game of craps.
//Analyzing the results and understanding the game better
#include <stdio.h>
#include <stdlib.h>
#include <time.h> // contains prototype for function time
#include "arrays.h" 
#define GAME_SIZE 1000
// enumeration constants represent game status
enum Status { CONTINUE, WON, LOST };
int rollDice(void); // function prototype
int craps(){
	int count=1;
	// randomize random number generator using current time
	int myPoint; // player must make this point to win
	enum Status gameStatus; // can contain CONTINUE, WON, or LOST
	int sum = rollDice(); // first roll of the dice
	// determine game status based on sum of dice
	switch(sum) {
		// win on first roll
		case 7: // 7 is a winner
		case 11: // 11 is a winner
		gameStatus = WON;
		return 1;
		break;
		// lose on first roll
		case 2: // 2 is a loser
		case 3: // 3 is a loser
		case 12: // 12 is a loser
		gameStatus = LOST;
		return 0;
		break;
		// remember point
		default:
		gameStatus = CONTINUE; // player should keep rolling
		myPoint = sum; // remember the point
		printf("Point is %d\n", myPoint);
		break; // optional
	}
// while game not complete
	while (CONTINUE == gameStatus) { // player should keep rolling
		sum = rollDice(); // roll dice again
		count++;
		// determine game status
		if (sum == myPoint) { // win by making point
			gameStatus = WON;
			return 1*count;
		}
		else {
			if (7 == sum) { // lose by rolling 7
			gameStatus = LOST;
			return -1*count;
			}
		}
	}
}


int main(void){
	srand(time(NULL)); 	
	int wfreq[21]={0};
	int lfreq[21]={0};
	for(int i=0;i<GAME_SIZE;i++){
		int x=craps();
		if(x==1){
			puts("Won on First Roll");
			++wfreq[0];
		}
		else if(x==0){
			puts("Lost on First Roll");
			++lfreq[0];
		}
		else if(x>1){
			x>20 ? (++wfreq[20]) : (++wfreq[x-1]);
			printf("Won the game in %d rolls\n",x);
		}
		else if(x<0){
			x=-1*x;
			x>20 ? (++lfreq[20]) : (++lfreq[x-1]);
			printf("Lost the game in %d rolls\n",x);
		}
	}
	puts("Winning Rolls Frequency");
	printia(wfreq,21);
	puts("Losing Rolls Frequency");
	printia(lfreq,21);
	int wsum=0,lsum=0;
	int wsumlength=0;
	int lsumlength=0;
	for(int i=0;i<21;i++){
		lsum+=lfreq[i];
		wsum+=wfreq[i];
		wsumlength+=(i*wfreq[i]);
		lsumlength+=(i*lfreq[i]);
	}
	printf("Chances you win the game of craps %.3lf\n",(double)wsum/GAME_SIZE);
	printf("Chances you lose the game of craps %.3lf\n",(double)lsum/GAME_SIZE);
	printf("Average length of game is %lf\n",(double)(wsumlength+lsumlength)/(2*GAME_SIZE));		
}

// roll dice, calculate sum and display results
int rollDice(void){
	int die1 = 1 + (rand() % 6); // pick random die1 value
	int die2 = 1 + (rand() % 6); // pick random die2 value
	// display results of this roll
	printf("Player rolled %d + %d = %d\n", die1, die2, die1 + die2);
	return die1 + die2; // return sum of dice
}