/*
Program for average grade
*/

// Fig. 4.7: fig04_07.c
// Counting letter grades with switch.
#include <stdio.h>

int main(void)
{
unsigned int aCount=0;
unsigned int bCount=0;
unsigned int cCount=0;
unsigned int dCount=0;
unsigned int fCount=0;
puts("Enter the letter grades.");
puts("Enter the EOF character to end input.");
int grade; // one grade
// loop until user types end-of-file key sequence
char eof='1';
while (( grade = getchar() ) != eof ) {
// determine which grade was input
switch (grade) { // switch nested in while
case 'A': // grade was uppercase A
case 'a': // or lowercase a
++aCount;
break; // necessary to exit switch
case 'B': // grade was uppercase B
case 'b': // or lowercase b
++bCount;
break;
case 'C': // grade was uppercase C
case 'c': // or lowercase c
++cCount;
break;
case 'D': // grade was uppercase D
case 'd': // or lowercase d
++dCount;
break;
case 'F': // grade was uppercase F
case 'f': // or lowercase f
++fCount;
break;
case '\n': // ignore newlines,
case '\t': // tabs,
case ' ': // and spaces in input
break;
default: // catch all other characters
printf("%s", "Incorrect letter grade entered.");
puts(" Enter a new grade.");
break; // optional; will exit switch anyway
}
} // end while
// output summary of results
puts("\nTotals for each letter grade are:");
printf("A: %u\n", aCount);
printf("B: %u\n", bCount);
printf("C: %u\n", cCount);
printf("D: %u\n", dCount);
printf("F: %u\n", fCount);
int a=90;
int b=80;
int c=70;
int d=60;
int f=50;
float avg=((aCount*a)+(bCount*b)+(cCount*c)+(dCount*d)+(fCount*f))/(aCount+bCount+cCount+dCount+fCount);
if(avg>80 && avg<=90)
printf("Average Grade is A\n");
else if(avg>70 && avg<=80)
printf("Average Grade is B\n");
else if(avg>60 && avg<=70)
printf("Average Grade is C\n");
else if(avg>50 && avg<=60)
printf("Average Grade is D\n");
else if(avg<=50)
printf("Average Grade is F");

//calc
}