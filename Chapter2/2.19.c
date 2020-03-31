#include <stdio.h>

int main(){
	int a,b,c;
	printf("%s\n","Enter 1st no");
	scanf("%d",&a);
	printf("%s\n","Enter 2nd no");
	scanf("%d",&b);
	printf("%s\n","Enter 3rd no");
	scanf("%d",&c);

	printf("The sum is %d\n",a+b+c);
 	printf("The average is %d\n",(a+b+c)/3);
 	printf("The product is %d\n",a*b*c);

	if(a>=b && a>=c)
		printf("Largest is %d\n",a);
	if(b>=a && b>=c)
		printf("Largest is %d\n",b);
	if(c>=a && c>=b)
		printf("Largest is %d\n",c);
	if(a<=b && a<=c)
		printf("Smallest is %d\n",a);
	if(b<=a && b<=c)
		printf("Smallest is %d\n",b);
	if(c<=a && c<=b)
		printf("Smallest is %d\n",c);


	}
	