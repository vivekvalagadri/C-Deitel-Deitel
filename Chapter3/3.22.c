#include <stdio.h>

int main(){
	long int a;
	int count=0;
	puts("Enter a Number");
	scanf("%ld",&a);
	for(int i=1;i<=a;i++){
		if(a%i==0){
			++count;
	}
}
	if(count==2)
		puts("Its a Prime Number");
	else
		puts("Its a Composite Number");
}
