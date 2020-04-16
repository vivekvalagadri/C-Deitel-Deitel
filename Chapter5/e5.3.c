/*
Program for fibbonaci
*/

#include <stdio.h>
int fibbonaci(int num){
	if(num==1 || num==2){
		printf("%d,",(num-1));
		return num-1;
	}
	else{
		printf("%d,",num-1);
		//int x=fibbonaci(num-1)+fibbonaci(num-2);
	}
	return fibbonaci(num-1)+fibbonaci(num-2);
}


int main(){

	int x=fibbonaci(5);
	puts("");
	printf("%d\n",x);
	//printf("%d\n",x);
}