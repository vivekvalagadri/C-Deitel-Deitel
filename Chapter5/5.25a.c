/*
Program for finding maximum of four numbers using recursive functions
*/

#include <stdio.h>

int maximum(int a){
	static int max=0;
	puts("Enter Number");
	scanf("%d",&a);
	if(a==-1)
		return max;
	else {
		if(a>=max)
			max=a;
	}
	return maximum(a);

}

int main(){
	int n=0;
	puts("Keep entering numbers and -1 to Exit");
	printf("The Maximum is: %d \n",maximum(0));
	
}