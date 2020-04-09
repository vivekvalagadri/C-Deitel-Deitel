#include <stdio.h>

int main(){
	int sum=0,mul=1;
	for(int i=1;;i++){
			mul=7*i;
		if(mul<100)
			sum+=mul;
		else 
			break;
	}
	printf("The sum is: %d\n",sum);
}