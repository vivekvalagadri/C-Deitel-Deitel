#include <stdio.h>
int main(void)
{
char c;
short s;
int i;
long l;
long long ll;
float f;
double d;
long double ld;
int array[20]; // create array of 20 int elements
int *ptr = array; // create pointer to array

printf("%lu\n",sizeof(c));
printf("%lu\n",sizeof(s));
printf("%lu\n",sizeof(i));
printf("%lu\n",sizeof(l));
printf("%lu\n",sizeof(ll));
printf("%lu\n",sizeof(f));
printf("%lu\n",sizeof(d));
printf("%lu\n",sizeof(ld));
printf("%lu\n",sizeof(array));
printf("%lu\n",sizeof(ptr));
printf("%p\n",ptr );
}