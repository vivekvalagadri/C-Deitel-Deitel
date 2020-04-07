#include <stdio.h>

int main(){

	for(int i=1;i<=510;i++){
		if(i%51==0){
			printf("\n");
			//i=i-1;
		}
		else{
			printf("$");
		}
	}
}
