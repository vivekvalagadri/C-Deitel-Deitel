/*
Program for Car rental services 
*/
#include <stdio.h>
#define MIN 25
#define MAX 50


int calculateCharges(int hrs){
	int days=0;
	int hrsleft=0;
	int cprice=0;
	if(hrs<=13){
		cprice=MIN;
		hrs-=8;
		if(hrs>=1)
		cprice=cprice+(hrs*5);
	}

	else if(hrs>13 && hrs<=24)
		cprice=MAX;

	else if(hrs>24 && hrs<=48){
		cprice=MAX;
		hrs-=24;

		if(hrs<13){
			cprice+=MIN;
			hrs-=8;
			if(hrs>=1)
			cprice=cprice+(hrs*5);
		}
		else if(hrs>13){
			cprice=2*MAX;

		}
	}

	else if(hrs>48 && hrs<=72){
		cprice=2*MAX;
		hrs-=48;

		if(hrs<13){
			cprice+=MIN;
			hrs-=8;
			if(hrs>=1)
			cprice=cprice+(hrs*5);
		}
		else if(hrs>13){
			cprice=2*MAX;

		}
	}
	return cprice;
	
}

int main(){
	
	int i=0;
	int hrs=0;
	int num;
	puts("Enter Car no and hrs for 3");
	while(i<3){
		scanf("%d",&num);
		scanf("%d",&hrs);
		if(i==0)
			puts("Cars	Hours	Charge");
		int price=calculateCharges(hrs);
		printf("%d	%d	%.2f\n",num,hrs,price+(hrs*0.5) );
		i++;

	}

}

