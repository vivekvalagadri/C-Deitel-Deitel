#include <stdio.h>

int main(){
	float p,term,rate;
	while(p!=-1){
		puts("Enter loan Principle(-1 to exit): ");
		scanf("%f",&p);
		if(p==-1){
			puts("Exit");
			break;
		}
		puts("Enter Interest rate(in decimal): ");
		scanf("%f",&rate);
		puts("Enter term of loan (in days): ");
		scanf("%f",&term);
		printf("The interest charge is $ %.2f\n",(p*term*rate)/365);


	}
}