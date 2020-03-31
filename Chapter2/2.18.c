#include <stdio.h>

int main(){
	int high,current;
	printf("%s\n","Enter Highest Rainfall Recieved");
	scanf("%d",&high);
	printf("%s\n","Enter Current Rainfall Recieved");
	scanf("%d",&current);

	if(current>high){
		high=current;
		printf("Highest Rainfall Recoreded Yet %d\n",high);
	}
	else{
		printf("Rainfall Recievedis not the Highest\n");
	}


	}
	