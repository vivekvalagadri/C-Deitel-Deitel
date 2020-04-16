/*
Program for Car rental services using recursion 
*/
#include <stdio.h>
#define MIN 25
#define MAX 50
#define ADD 8


int calculateCharges(int hrs){
	static int cprice=0;
	int days;
	int hrsleft;
	if(hrs<=13){
		int cprice=MIN;
		if(hrs>=8)
			return cprice+((hrs-8)*5);
		else
		return cprice;
	}

	else{
		if(hrs>=24){
			cprice=MAX;
			hrs=hrs-24;
		}
		else{
			cprice=MAX;
			return cprice;
		}
	}
	return calculateCharges(hrs)+cprice;
	
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

