/*
Program for guessing the number game
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	while(1){
		int count=0;
		int r=rand()%1001;
		int a;
		puts("I have a number between 1 and 1000)");
		puts("Can you guess my number");
		puts("Please type your first guess.");
		scanf("%d",&a);
		while(1){
			if(a==r){
				printf("Excellent! You guessed the number after %d guesses!\n",count);
				break;
			}
			else if(a>r){
				puts("Too High");
				scanf("%d",&a);
				count++;
			}
			else if(a<r){
				puts("Too Low");
				scanf("%d",&a);
				count++;	
			}
		}
		printf("Would you like you play again? (y/n)\n");
		getchar();
		char c=getchar();
		if(c=='y' || c=='Y')
			continue;
		else{
			puts("See You Later!");
			break;
		}
	}


	
}