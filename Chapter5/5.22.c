#include <stdio.h>
//#include <math.h>


void seperate(int a){
	int x=10;
	int y=1;
	int count =0;
	while(a/y!=0){
		count+=1;
		y=y*10;
	}
	//y=pow(10,count-1);
	y=y/10;
	while(count!=0){
		int digit =(a/y)%10;
		printf("%d ",digit);
		y=y/10;
		count=count-1;
	}
}

int	main(){
	int a;
	printf("%s\n", "Please eneter a number");
	scanf("%d",&a);
	seperate(a);
	puts ("");
}