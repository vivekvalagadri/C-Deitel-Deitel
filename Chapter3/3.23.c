#include <stdio.h>

int main(){

	int counter, number, largest=0;
	for(counter=1;counter<=10;counter++){
		printf("Enter %d number\n",counter);
		scanf("%d",&number);
		if(number>=0){
			if(largest<number)
			largest=number;
		}
		else{
			puts("Please Enter ONLY Positive Numbers");
			break;
		}
	}
	if(number>=0)
		printf("The largest number is: %d\n",largest);
}	