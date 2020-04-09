#include <stdio.h>

int main(){
	int a;
	unsigned long int mul=1;
	
	for (int i = 0; i < 20;i++){
		for(int j=1;j<=i;j++){
		mul*=j;
		}
		printf("%d %lu\n",i,mul );
		mul=1;
	}
}