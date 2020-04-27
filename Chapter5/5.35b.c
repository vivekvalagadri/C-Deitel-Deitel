#include<stdio.h>
int fibonacci( int n)
{
    int t,fib1=0,fib2,c=1;
    while(c<=n)
    {
    if(c==1)
        {fib2=0;
        	c++;
         }
    else if(c==2)
        {fib2=1;
        	c++;
         }
    else
    {
      t=fib2;
      fib2=fib1+fib2;
      fib1=t;
      c++;
    }
    }
    return fib2;
}
int main()
{
    int term;
    printf("enter the term number: ");
    scanf("%d",&term);
    printf("nth term:%d\n",fibonacci(term));
}