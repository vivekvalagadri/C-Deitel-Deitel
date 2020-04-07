#include <stdio.h>

int	main(){
	int a,one,two,three,four,five,decimal;
	printf("%s\n", "Please eneter a 5 or less digit binary number");
	scanf("%d",&a);
	one=a%10;
	two=(a/10)%10;
	three=(a/100)%10;
	four=(a/1000)%10;
	five=(a/10000)%10;
	decimal=(one*1)+(two*2)+(three*4)+(four*8)+(five*16);
	printf("The decimal Equivalent is: %d\n",decimal);

}