#include <stdio.h>

int main(){
	float sales;
	while(sales!=-1){
		puts("Enter Sales in dollars(-1 to exit): ");
		scanf("%f",&sales);
		if(sales==-1){
			puts("Exit");
			break;
		}
		printf("Sallary is: $%.2f\n",(200+0.09*sales));
	}
}