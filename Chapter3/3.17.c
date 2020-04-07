#include <stdio.h>

int main(){
	float num,amt,term,rate;
	while(num!=-1){
		puts("Enter Account number(-1 to exit): ");
		scanf("%f",&num);
		if(num==-1){
			puts("Exit");
			break;
		}
		puts("Enter Mortage amount (in dollars): ");
		scanf("%f",&amt);
		puts("Enter Mortage term (in years): ");
		scanf("%f",&term);
		puts("Enter Interest rate (as a decimal): ");
		scanf("%f",&rate);
		printf("The monthly payable interest is $ %.2f\n",amt*term*rate);

	}
}