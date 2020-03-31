/*
Primarily fatal errors are those errors 
which aborts the program and return 
the user to operating system. 
In this situation the data which 
was already processed may be lost.

One might prefer a fatal error over a non fatal one because
tracing out a fatal error would be easier as the code would 
immediately terminate if there is one 
but in case of a non fatal error such as a semantic or a logical
error the code might get exectuded but our desired output might 
not appear!
*/
#include <stdio.h>
int main(){
	printf("Primarily fatal errors are those errors \n");
	printf("which aborts the program and return \n");
	printf("the user to operating system. \n");
	printf("In this situation the data which \n");
	printf("was already processed may be lost. \n\n");


}
