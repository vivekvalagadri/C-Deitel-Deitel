#include <stdio.h>
int main(){
	int one,two,three,number,cube;
	int i=2;
	while(i<=999){
		one=i%10;
		two=(i/10)%10;
		three=(i/100)%10;
		number=i;
		cube=(one*one*one)+(two*two*two)+(three*three*three);
		if(cube==number)
			printf("%d\n",number);
		i++;
	}
}