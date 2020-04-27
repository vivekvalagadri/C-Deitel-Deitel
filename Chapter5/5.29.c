/*
Program for finding LCM
*/

#include <stdio.h>

int LCM(int a,int b){
	static int lcm=0;
	int max=a;
	if(b>max)
		max=b;
	for(int i=1;;i++){
		for(int j=1;j<max;j++){
			if(a*i==b*j){
				lcm=a*i;
				break;
			}
			if(a*j==b*i){
				lcm=a*j;
				break;
			}
		}
		if(lcm!=0)
			break;
	}
	return lcm;
}

int main(){
	int a,b;
	puts("Enter Two Numbers");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("The LCM of the Numbers is %d\n",LCM(a,b));
}