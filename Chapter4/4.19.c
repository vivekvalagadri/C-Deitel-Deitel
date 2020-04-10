/*
Program for Online sales
*/

#include <stdio.h>

int main(){
	int n,qty;
	float a,b,c,d,e;
	float sum1=0,sum2=0,sum3=0,sum4=0,sum5=0;
	while(n!=EOF){
		printf("Enter Product Number and Qty. (-1 to exit and calculate total)\n");
		scanf("%d",&n);
		scanf("%d",&qty);
		switch(n){
			case 1:
			a=qty*2.98;
			sum1+=a;
			break;
			case 2:
			b=qty*4.50;
			sum2+=b;
			break;
			case 3:
			c=qty*9.98;
			sum3+=c;
			break;
			case 4:
			d=qty*4.49;
			sum4+=d;
			break;
			case 5:
			e=qty*6.87;
			sum5+=e;
			break;
			case -1:
			break;
			default:
			puts("Enter a valid Product Number");
		}
	}
	printf("Total sales of Product 1: %.2f\n",sum1);
	printf("Total sales of Product 2: %.2f\n",sum2);
	printf("Total sales of Product 3: %.2f\n",sum3);
	printf("Total sales of Product 4: %.2f\n",sum4);
	printf("Total sales of Product 5: %.2f\n",sum5);
}
	
