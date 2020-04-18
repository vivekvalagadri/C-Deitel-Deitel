/*
Program for calculating seconds after clock struck 12
*/

#include <stdio.h>

int secondsafter12(int hrs,int min,int sec){
	return (hrs*3600 + min*60 + sec);
}


int main(){
	int hrs,min,sec;
	puts("Enter hrs min and sec");
	scanf("%d",&hrs);
	scanf("%d",&min);
	scanf("%d",&sec);
	printf("The seconds elapsed after the last time"
	"the clock struck 12 is: %d\n",secondsafter12(hrs,min,sec));
}