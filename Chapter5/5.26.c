/*
Program for printing perfect numbers
*/

#include <stdio.h>

int perfect(int i){

	int sum=0;
		for(int j=1;j<i;j++){
			if(i%j==0){
				sum+=j;
			}
		}
		if(sum==i){
			for(int k=1;k<i;k++){
				if(i%k==0)
					printf("%d,",k);
			}
			printf("  %d\n",i);
		}

}

int main(){
	for(int i=1;i<=1000;i++)
		perfect(i);
}