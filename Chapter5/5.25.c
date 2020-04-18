/*
Program for finding maximum of four numbers
*/

#include <stdio.h>

float maximum(float a,float b,float c,float d){
	float max=a;
	if(c>max)
		max=c;
	if(b>max)
		max=b;
	if(d>max)
		max=d;
	return max;

}

int main(){
	float a,b,c,d;
	puts("Enter 4 numbers");
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	scanf("%f",&d);
	printf("The Maximum is %f\n",maximum(a,b,c,d));
	
}