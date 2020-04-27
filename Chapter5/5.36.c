/*
Program for solving the Towers of Hanoi
*/

#include <stdio.h>

void towerOfHanoi(int disks,int peg1,int peg3,int peg2){
	if(disks==1){
		printf("%d->%d",peg1,peg3);
	}
	else{
	}

}

int main(){
	int disks;
	const int peg1=1;
	const int peg2=2;
	const int peg3=3;
	puts("Enter Number of disks to be moved");
	scanf("%d",&disks);
	towerOfHanoi(disks,1,3,2)
}