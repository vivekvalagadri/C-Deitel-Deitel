#include <stdio.h>

int main(){
	float hrs,rate;
	while(hrs!=-1){
		puts("Enter # of hours worked (-1 to end): ");
		scanf("%f",&hrs);
		if(hrs==-1){
			puts("Exit");
			break;
		}
	puts("Enter hourly rate of the worker ($00.00): ");
	scanf("%f",&rate);
	if(hrs>0)
		hrs<=40 ? printf("Sallary is $%.2f\n",hrs*rate) : printf("Sallary is $%.2f\n",((40*rate)+((hrs-40)*rate*1.5)));
	else
		puts("Invalid!");
	}
}