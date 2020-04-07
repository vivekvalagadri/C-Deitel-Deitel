#include <stdio.h>

int main(){
	printf("A	A+3	A+6	A+9\n");
	for (int i=7;i<=35;i=i+7)
	{
		printf("%d	%d	%d	%d\n",i,i+3,i+6,i+9);
	}
}