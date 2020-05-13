/*
Program for Matrix Multiplication
*/

#include <stdio.h>

int main(){
	int row1,column1,row2,column2,row3,column3;
	puts("Enter rows and columns of 1st matrix");
	scanf("%d %d",&row1,&column1);
	puts("Enter rows and columns of 2nd matrix");
	scanf("%d %d",&row2,&column2);
	if(column1!=row2){
		puts("Matrix Multiplication Not possible");	
	}
	else {
		int arr1[row1][column1];
		int arr2[row2][column2];
		int res[row1][column2];
		puts("Enter elements of matrix 1");
		for(int i=0;i<row1;i++){
			for(int j=0;j<column1;j++){
				scanf("%d",&arr1[i][j]);
			}
		}
		puts("Enter elements of matrix 2");
		for(int i=0;i<row2;i++){
			for(int j=0;j<column2;j++){
				scanf("%d",&arr2[i][j]);
			}
		} 
    	for (int i = 0; i < row1; i++) 
   		{ 
        	for (int j = 0; j < column2; j++) 
        	{ 
        		res[i][j] = 0;
            	for (int k = 0; k < column1; k++) {
                	res[i][j] += arr1[i][k]*arr2[k][j]; 
            	}
        	} 

		}
		for(int i=0;i<row1;i++){
			for(int j=0;j<column2;j++){
				printf("%d ",res[i][j]);
			}
			puts("");
		}

	}

}