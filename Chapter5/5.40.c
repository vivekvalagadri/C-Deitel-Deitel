/*
Program for recursive main
*/

#include <stdio.h>

int main(){
	static int i=1;
	if (i<10){
		printf("Recursion %d\n",i);
		i++;
		main();
	}
	else 
		return 0;
	
}