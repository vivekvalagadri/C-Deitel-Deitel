#include <stdio.h>

int main(){
	int n=1,num,sum=0;
	//puts("Enter the number of values you want to Enter");
	for(int i=0;i<n;i++){
		if(n==1){
			scanf("%d",&n);
		}
		scanf("%d",&num);
		sum+=num;
	}
	printf("The sum is: %d\n",sum);
	float avg=sum/n;
	printf("The Average is: %.2f\n",avg);
}