#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter n value: ");
    scanf("%d",&n);

        for(i=(n/2);i>=0;i--)
            {
            for(j=0;j<n;j++)
                {
                    if(j<i||j>n-1-i)
                       printf(" ");
                    else
                       printf("*");
                }
                printf("\n");
            }
        for(i=1;i<=(n/2);i++)
          {
            for(j=0;j<n;j++)
                {
                    if(j<i||j>n-1-i)
                       printf(" ");
                    else
                       printf("*");
                }
                printf("\n");
        }

}	