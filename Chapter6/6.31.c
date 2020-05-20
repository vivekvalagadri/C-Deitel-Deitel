/*
Program for chekcing string palindrome using recursion
*/

#include <stdio.h>

int palindrome(char str[],int x){
	int l=x;
	static int i=0;
	if(str[i]==str[l-1]){
		i++;l--;
		printf("ok\n");
		palindrome(str,l);
		printf("nk\n");
		if(i==x+1 || i==x)
			return 1;
		else
			return 0;
	}
	else 
		return 0;
}

int main(){
	char str[]="able was i ere i saw elba";
	int count=0;
	while(1){
		if(str[count]=='\0')
			break;
		else 
			count++;
	}

	printf("%d\n",count );
	int x=palindrome(str,count);
	printf("%d\n",x);
}