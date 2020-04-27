// Fig. 5.14: fig05_14.c
// Simulating the game of craps.
#include <stdio.h>
#include <stdlib.h>
#include <time.h> // contains prototype for function time
// enumeration constants represent game status
enum Status { CONTINUE, WON, LOST };
int rollDice(void); // function prototype
int craps(){
	// randomize random number generator using current time
	srand(time(NULL));
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
		// determine game status
		if (sum == myPoint) { // win by making point
			gameStatus = WON;
			return 1;
		}
		else {
			if (7 == sum) { // lose by rolling 7
			gameStatus = LOST;
			return 0;
			}
		}
	}
}


int main(void){
	static int bankBalance=1000,wager;
	while(1){
		puts("Enter Wager and 0 to quit");
		scanf("%d",&wager);
		if (wager==0)
			break;
		while(wager>bankBalance){
			puts("Please Enter Lower Wager");
			scanf("%d",&wager);
		}
		if(wager<=bankBalance){
			int a=craps();
			if(a==1){
				bankBalance=bankBalance+wager;
				puts("Player wins");
				printf("New Bank Balance: %d\n",bankBalance);
				puts("You're up big.Now's the time to cash in your chips!");
			}
			else{
				bankBalance=bankBalance-wager;
				puts("Player loses");
				printf("New Bank Balance: %d\n",bankBalance);
				puts("Oh, you're going for broke, huh?");
				if(bankBalance<=0){
					puts("Sorry. You busted!");
					break;
				}
			}

		}
	}
		
}

// roll dice, calculate sum and display results
int rollDice(void){
	int die1 = 1 + (rand() % 6); // pick random die1 value
	int die2 = 1 + (rand() % 6); // pick random die2 value
	// display results of this roll
	printf("Player rolled %d + %d = %d\n", die1, die2, die1 + die2);
	return die1 + die2; // return sum of dice
}