/*
Program for playing pound with 2d prays with ptrs 
*/

#include <stdio.h>

int main(){	 
	int (*p)[5];   //for strings char *str[3]={"Hi","Bye","ok"};
 	int arr[5];					//char (*str)[3] will throw errors idky
	p=&arr;

	for(int i=0;i<5;i++){
		arr[i]=i;
	}
	ptr=arr;

	for(int i=0;i<5;i++){
		printf("%d\n",*(ptr+i));
	}

	
}

//assigning a pointer to the array, does the same thing as above 

/*
int main(){	
	int *ptr;
	int (*p)[5];
	int arr[5];
	ptr=arr;
	p=&arr;

	for(int i=0;i<5;i++){
		*ptr=i;
		ptr++;
	}
	ptr=arr;

	for(int i=0;i<5;i++){
		printf("%d\n",*(ptr+i));
	}

	
}*/