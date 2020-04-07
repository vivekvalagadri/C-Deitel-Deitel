#include <stdio.h>

int main(){
	int a;
	puts("Enter a number");
	scanf("%d",&a);
	printf("Preincremented:%d\n",++a);
	printf("Post incremented:%d\n",a++);
	int b=8+a++;
	printf("NOW:%d\n",b);
	printf("%d\n",a );
}
