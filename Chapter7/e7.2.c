/*
Program for printing string character by character
demonstrating const data and non const ptr
*/

#include <stdio.h>

void printing(const char*);

int main(){
	char str[]="This is a string";
	printing(str);
	printf("%s\n",str);
}

void printing(const char* string){
	while(*string !='\0'){
		printf("%c",*string );
		// *string='l'; will throwe an error 
		//error: assignment of read-only location ‘*string’
		string++;

	}
	puts("");
}