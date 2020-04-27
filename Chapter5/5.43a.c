/*
	Program for Recursive Addition
	to achive Multiplication complete
*/


#include <stdio.h>

int mystery(int a,int b); // function prototype

int main(void){
	printf("%s", "Enter two integers: ");
	 int x,y; 
	scanf("%d%d", &x, &y);
	int res;
	y<0 ? (res=-mystery(x,y)):(res=mystery(x,y));
	printf("The result is %d\n",res); 
}

int mystery(int a, int b){
	b<0 ? (b=-b) : (b=b);
// base case
if (1 == b) 
	return a;
else
	return a+ mystery(a, b- 1);
}