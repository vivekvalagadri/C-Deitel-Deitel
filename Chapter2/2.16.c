#include <stdio.h>
 
 int main(){
 	double a,b;
 	printf("%s\n","Please Enter digit one");
 	scanf("%lf",&a);
 	printf("%s\n","Please Enter digit two" );
 	scanf("%lf",&b);

 	printf("The sum is %lf\n",a+b);
 	printf("The difference is %lf\n",a-b);
 	printf("The quotient is %lf\n",a/b);
 	
 	// % needs int operands in C
 	//int x=a; //implicit typecasting
 	//int y=b;
 	//printf("The remainder is %d\n",x%y;


 	printf("The remainder is %d\n",int(a)%int(b)); 
 	//explicit typecasting
 }