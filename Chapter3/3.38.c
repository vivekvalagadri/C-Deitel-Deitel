#include <stdio.h>

int	main(){
	int a,digit;
	int count=0;
	printf("%s\n", "Please eneter a 5 or less digit number");
	scanf("%d",&a);

	for(int i=1;i<=10000;i=i*10){
		digit=(a/i)%10;
		if(digit==9)
			count++;
	}
	printf("The Number of 9s are: %d\n",count);

}