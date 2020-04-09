#include <stdio.h>

int main(){
	int n,num,sum=0;
	puts("Enter the number of values you want to Enter");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		puts("Enter Number");
		scanf("%d",&num);
		sum+=num;
	}
	printf("The sum is: %d\n",sum);
	float avg=sum/n;
	printf("The Average is: %.2f\n",avg);
}