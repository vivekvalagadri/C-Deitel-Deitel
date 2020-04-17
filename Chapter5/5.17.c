/*
Program for checking right angled or not
*/

#include <stdio.h>
#include <math.h>

int checkHypotenuse(int x,int y,int z){
	if(z==sqrt((x*x)+(y*y)))
		return 1;
	else 
		return 0;
}

int main(){
	int a,b,c;
	printf("Enter the  sides of the right angled triangle (last being hypotenuse)\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	checkHypotenuse(a,b,c)==1 ? puts("Right Triangle") : puts("Not a Right Triangle");
		
}
