#include <stdio.h>

int main(){

	int counter, number;
	int largest=0,largest1=0;
	for(counter=1;counter<=10;counter++){
		printf("Enter %d number\n",counter);
		scanf("%d",&number);
		if(number>=0){
			if(largest<number || largest1<number){
				largest1=largest;
				largest=number;

			}
		}
		else{
			puts("Please Enter ONLY Positive Numbers");
			break;
		}
	}
	if(number>=0)
		printf("The largest numbers are: %d %d\n",largest1,largest);
}	