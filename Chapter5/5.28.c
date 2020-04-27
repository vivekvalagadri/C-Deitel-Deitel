/*
Program for calculating sum of digits
*/

#include <stdio.h>

void sumofdigits(int a){
	int x=10;
	int y=1;
	int sum=0;
	int count =0;
	while(a/y!=0){
		count+=1;
		y=y*10;
	}
	y=y/10;
	while(count!=0){
		int digit =(a/y)%10;
		sum+=digit;
		y=y/10;
		count=count-1;
	}
	printf("Sum is %d\n",sum);
}

int	main(){
	int a;
	printf("%s\n", "Please eneter a number");
	scanf("%d",&a);
	sumofdigits(a);
}