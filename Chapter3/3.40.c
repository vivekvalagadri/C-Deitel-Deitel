#include <stdio.h>

int main(){
	int mul=1;
	for(int i=0;i<50;i++){
		for(int j=0;j<=i;j++){
			mul*=3;
		}
		printf("%d\n",mul);
		mul=1;
	}
}

/* 
after a point the stack overflows 
leading to reduntant values
*/