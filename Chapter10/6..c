// ex10_17.c
#include <stdio.h>
int mystery(unsigned int bits); // prototype
int main(void)
{
unsigned int x; // x will hold an integer entered by the user
puts("Enter an integer: ");
//scanf("%u", &x);
//printf("The result is %d\n", mystery(x));
unsigned int mask = 1 << 31;
for(unsigned int i=0;i<20;i++){
	if(mystery(i)){
		printf("%d\n",i);
	}
}
}
// What does this function do?
int mystery(unsigned int bits)
{
unsigned int mask = 1 << 31; // initialize mask
unsigned int total = 0; // initialize total
for (unsigned int i = 1; i <= 32; ++i, bits <<= 1) {
if ((bits & mask) == mask) {
++total;
}
}
return !(total % 2);
}