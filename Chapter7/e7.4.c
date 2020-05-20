/*
Program for demostarting arrays and pointers are same xD
Jk but have similarities when it comes to strings 
*/

#include <stdio.h>

#define SIZE 5

void Copy(const char *str,char *array){
	while(*str!='\0'){
		*array=*str;
		array++;str++;
	}

}

int main(){
	char arr[SIZE];
	const char *string="Hello";
	Copy(string,arr);
	printf("%s\n",arr);
}
