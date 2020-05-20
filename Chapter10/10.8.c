/*
Program for Using Unions
*/

#include <stdio.h>

union integer{
	int a;
	char b;
	short c;
	long d;
};

int main(){
	union integer new;
	puts("Enter char , short , int and long");
	scanf("%ld",&new.d);
	printf("%ld\n",new.d );
	scanf("%hd",&new.c);
	printf("%hd\n",new.c);
	scanf("%d",&new.a);
	printf("%d\n",new.a );
	getchar();		//unless you clear the buffer it will take wrong values
	scanf("%c",&new.b);
	printf("%c\n",'new.b');
	getchar();
	
//	scanf("%c %hd %d %ld",&new.b,&new.c,&new.a,&new.d);
//	printf("%c %hd %d %ld",new.b,new.c,new.a,new.d);
	
}