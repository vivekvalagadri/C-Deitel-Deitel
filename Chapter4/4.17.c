/*
Program for Calculating Credit Limits
*/

#include <stdio.h>

struct customer{
		int customerno[3],ocredit[3],balance[3];
	};

int main(){
	struct customer a;
	a.customerno[0]=1;a.ocredit[0]=1000;a.balance[0]=250;
	a.customerno[1]=2;a.ocredit[1]=2000;a.balance[1]=1500;
	a.customerno[2]=3;a.ocredit[2]=3000;a.balance[2]=2000;

	for(int i=0;i<3;i++){
		printf("*******Customer %d*******\n",i+1);
		printf("Account Number: %d\n",a.customerno[i]);
		printf("Updated Credit: %d\n",(a.ocredit[i]/2));
		if((a.ocredit[i]/2)<a.balance[i])
			printf("%s\n","Balance exceed new credit limit" );
		printf("\n\n\n");

	}
	
}