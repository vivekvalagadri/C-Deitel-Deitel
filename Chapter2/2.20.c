#include <stdio.h>

int main(){
	int sec,min,hrs;
	printf("%s\n","Please enter time in seconds");
	scanf("%d",&sec);
	hrs=sec/3600;
	min=(sec-(hrs*3600))/60;
	sec=(sec-(hrs*3600)-(min*60))%3600;
	printf("In hrs:min:sec is %d:%d:%d\n",hrs,min,sec);
}