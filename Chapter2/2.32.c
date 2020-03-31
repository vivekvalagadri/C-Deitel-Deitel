#include <stdio.h>

int main(){
	double w,h,bmi;
	printf("%s\n","Enter Weight in Kilograms");
	scanf("%lf",&w);
	printf("%s\n", "Enter Height in Meters");
	scanf("%lf",&h);
	bmi=w/(h*h);
	
	if(w>0 && h>0){
		printf("BMI is:%lf\n",bmi);
		if(bmi<18.5)
			printf("%s\n", "Underweight");
		else if(bmi>=18.5 && bmi<=24.9)
			printf("%s\n", "Normal");
		else if(bmi>=24.9 && bmi<=29.9)
			printf("%s\n", "Overweight");
		else if (bmi>=29.9)
			printf("%s\n", "Obese");
	}
	else 
		printf("%s\n", "Error!,Can't be Negative");
}