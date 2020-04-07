#include <stdio.h>

int main(){
	float collected,county,state,sales;
	char month[100] ;
	int n=0;
	collected=0;
	while(collected!=-1){
		printf("%s\n","Enter total amount Collected (-1 to exit)");
		scanf("%f",&collected);
		if (collected ==-1){
			puts("Exit");
			break;
		}
		printf("%s","Enter name of Month: ");
		scanf("%s",month);
		county=0.05*collected;
		state=0.04*collected;
		sales=collected-county-state;
		printf("Total Collections: $%.2f\n",collected );
		printf("Sales: $%.2f\n",sales);
		printf("County Sales Tax: $%.2f\n",county );
		printf("State Sales Tax: $%.2f\n",state);
		printf("Total Sales Tax: $%.2f\n",state+county);
	}
}