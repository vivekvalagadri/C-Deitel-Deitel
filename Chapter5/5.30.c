/*
Program for Students Average
Quality Points for Student’s Grades
*/

#include <stdio.h>


int toQualitPoints(float marks){
	if(marks<=100 && marks>=90)
		return 4;
	else if(marks<90 && marks>=80)
		return 3;
	else if(marks<80 && marks>=70)
		return 2;
	else if(marks<70 && marks>=60)
		return 1;
	else
		return 0;
}
int main(){
	float marks;
	printf("Enter Student Marks\n");
	scanf("%f",&marks);
	printf("The Quality Point is %d\n",toQualitPoints(marks));
	
}