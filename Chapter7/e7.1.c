/*
Program for changing string to upper case
using non const ptr and non const data
*/

#include <stdio.h>
#include <ctype.h>

void toconvert(char *);

int main(){
	char *str="My Name is Vivek, Im worth $0.00";
	//char str[]="My Name is Vivek, Im worth $0.00";
	toconvert(str);
	printf("%s\n",str);
}

void toconvert(char* string){   //instead char string[]
 	while(*string != '\0'){
		*string=toupper(*string);
		string++;
	}

}