#include <stdio.h>

int main(){
	printf("N	N^2	N^3	N^4\n");
	for (int i=1;i<=10;i++)
	{
		printf("%d	%d	%d	%d\n",i,i*i,i*i*i,i*i*i*i );
	}
}