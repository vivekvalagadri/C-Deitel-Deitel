/*
	Program to check 
	default o/p it takes a char prints and asks again
	if 10 and 11 are changed it wont print initially but while returning 
	it will print in reverse order (coz stack)
*/
#include <stdio.h>
int main(void){
	char c; // variable to hold character input by user
	char eof='0';
	if ((c = getchar()) != eof) {
		printf("%c", c);
		main();
	}
}