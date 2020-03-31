#include <stdio.h>

int	main(){
	int a,one,two,three,four,five;
	printf("%s\n", "Please eneter a 5 digit number");
	scanf("%d",&a);
	one=a%10;
	two=(a/10)%10;
	three=(a/100)%10;
	four=(a/1000)%10;
	five=(a/10000)%10;
	printf("%d %d %d %d %d\n",five,four,three,two,one);

}