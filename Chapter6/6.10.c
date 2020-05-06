/*
Program for Sales Commissions
*/

#include <stdio.h>
#define COMMISSION_RANGE_SIZE 9

int main(){
	int gross=0;
	int range_freq[COMMISSION_RANGE_SIZE]={0};
	puts("Enter gross amount by Salesperson and -1 to stop");
	while(gross!=-1){
		scanf("%d",&gross);
		if(gross >0){
			int amount=200+(0.09*gross);
			printf("%d\n",amount );
		amount<1000 ? (++range_freq[(amount/100)-2]) : (++range_freq[8]);
		}
	}
	printf("%-13s%9s\n","RANGE","FREQUENCY");
	for(int i=0;i<COMMISSION_RANGE_SIZE;i++){
		if(i<COMMISSION_RANGE_SIZE-1){
			printf("$%2d00 - $%d99%9d\n",i+2,i+2,range_freq[i]);
		}
		else
			printf("$1000 and more      %d\n",range_freq[8]);
	}
	
}