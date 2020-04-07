#include <stdio.h>
int main(){
	float r;
	puts("Enter Radius");
	scanf("%f",&r);
	printf("The diameter is %f\n",2*r);
	printf("The Circumference is %f\n",2*3.14159*r);
	printf("The Area is %f\n",3.14159*r*r);
}