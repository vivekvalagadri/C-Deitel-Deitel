/*
Program for weekly pay
*/

#include <stdio.h>

int main(){
	int code;
	int fix,weeks;
	float hrs,rate;
	double gross;
	double amt;
	int n;
	puts("Enter Employee code");
	scanf("%d",&code);
	switch(code){
		case 1:
		puts("Enter weekly sallary for managers and no of weeks");
		scanf("%d",&fix);
		scanf("%d",&weeks);
		if(weeks>0)
		printf("Sallary is $%d\n",fix*weeks);
		else
			puts("Invalid!");
		break;

		case 2:
		puts("Enter # of hours worked");
		scanf("%f",&hrs);
		puts("Enter hourly rate of the worker ($00.00): ");
		scanf("%f",&rate);
		if(hrs>0)
			hrs<=40 ? printf("Sallary is $%.2f\n",hrs*rate) : printf("Sallary is $%.2f\n",((40*rate)+((hrs-40)*rate*1.5)));
		else
			puts("Invalid!");
		break;

		case 3:
			puts("Enter gross weekly sales");
			scanf("%lf",&gross);
			printf("Sallary is %.2lf\n",250+(5.7*gross));
			break;
		case 4:
			puts("amount of money to be received for each piece");
            scanf("%lf",&amt);
            printf("no. of pieces made: ");
            scanf("%d",&n);
            printf("Sallary is: %.2lf\n",amt*n);
               break;
       	default:
       		puts("Invalid!");
	}
}