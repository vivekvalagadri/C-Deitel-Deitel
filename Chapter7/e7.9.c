/*
Program for Comparing String with an other in an array of Strings
*/

#include <stdio.h>

int main(){
	int i=0;
	int count =0;
	int a=0;
	int size=0;


	char *str[]={"LMAO","HI","HI","HI"};
	char temp[]={"HI"};
	char *tPtr=temp;
	char *sPtr=*(&str[0]);

	while(*tPtr!='\0'){
		size++;
		tPtr++;
	}
	printf("%d\n",size);
	


	while(a<4){
		char *tPtr=temp;
		sPtr=(*(&str[a]));
		a++;
		if((*tPtr)==(*sPtr)){
			printf("Something\n");
			while(*tPtr!='\0'){
				tPtr++;
				sPtr++;
				count+=1;
				printf("HEHE\n");
			}
		}
	}

	if(count==(2*size)){
		printf("MATCH\n");
	}
}