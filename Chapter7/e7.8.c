/*
Program for copying string from and array of trings
*/

#include <stdio.h>

int main(){
	char *str[]={"HI","BYE"};
	int k=0;
	char temp[3];
	while(*(*str+k)!='\0'){
			temp[k]= *(*str+k);
			k++;
		}
	printf("%s\n",temp);
	
}