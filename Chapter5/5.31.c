/*
Program for Simulating coin toss
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int flip(){
	int a=(rand()%2);
	return a;
}

int main(){
	int hcount=0,tcount=0;
	srand(time(NULL));

	for(int i=0;i<100;i++){
		int a=flip();
		if(a==1){
			puts("Heads");
			hcount++;
		}
		else if(a==0){
			puts("Tails");
			tcount++;
		}

	}
	printf("%d\n",hcount);
	printf("%d\n",tcount);

}