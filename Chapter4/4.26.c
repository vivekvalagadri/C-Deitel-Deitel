/*
Program for calculating approximate value of pi
*/

#include <stdio.h>

int main(){
	float sum=4;
	int n;
	puts("enter level of approx");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		float a=(2*i)+1;
		if(i%2!=0)
			sum-=4.0/a;
		if(i%2==0)
			sum+=4.0/a;

	}
	printf("The value of pi is: %f\n",sum);
	
}

//around 625+ gives stable 3.14
//around 2475+ gives stable 3.141
//around 1000000+ gives stable 3.1415
//around 1000000+ gives stable 3.14159
