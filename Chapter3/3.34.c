#include <stdio.h>

int main(){
	int a=1;
	int count=1;
	while (a<=9){
		int j=0;
		while(j<a){
			printf("%d ",count);
			j++;
			count++;
		}
		printf("\n");
		a++;
	}
}