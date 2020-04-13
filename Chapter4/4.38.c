/*
Program for 
*/

#include <stdio.h>

int main(){
	int verse=0;
	char *num[12]={"first","second","third","fourth","fifth","sixth","seventh","eighth","ninth","tenth","eleventh","twelfth"};
	while(verse<12){
		printf("On the %s day of Christmas my true love sent to me\n",num[verse]);
		puts("My true love gave to me");
		for(int i=verse;i>0;i--){
			switch(i){
				case 1:
				puts("Two turtle doves");
				break;
				case 2:
				puts("Three French hens");
				break;
				case 3:
				puts("Four calling birds");
				break;
				case 4:
				puts("Five gold rings");
				break;
				case 5:
				puts("Six geese a laying");
				break;
				case 6:
				puts("Seven swans a swimming");
				break;
				case 7:
				puts("Eight maids a milking");
				break;
				case 8:
				puts("Nine ladies dancing");
				break;
				case 9:
				puts("Ten lords a leaping");
				break;
				case 10:
				puts("Eleven pipers piping");
				break;
				case 11:
				puts("12 drummers drumming");
				break;
			}

		}
		puts("A partridge in a pear tree");
		printf("\n");
		verse++;
	}
}
	