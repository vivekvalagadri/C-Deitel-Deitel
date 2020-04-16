#include<stdio.h>
double calculateCharges(int h)
{
   double c=0.0;
   if(h>24)
    {
     c=h/24*50;
     h=h%24;
    }
   else if(h>13)
   {
       c=50.0;
       h=0;
   }
   else if(h>8&&h<=13)
   {
       c+=(h-8)*5.0;
       h=8;
   }
   else if(h>0&&h<=8)
   {
    return 25.0;
       h=0;
   }
   else
    {
        c=0;
   return 0.0;
   }
    return (c+calculateCharges(h));
}
int main()
{
    int i,hours,tothours=0;double charges,totcharge=0.0;
    printf("cars\thours\tcharge\n");
    for(i=1;i<=3;i++)
    {
        printf("%d\t",i);
        scanf("%d",&hours);
        if(hours<=72)
        {
            charges=.5*hours+calculateCharges(hours);
            printf("%.2lf\n",charges);
        }
        else
        {
            printf("rental not possible\n");
            continue;
        }
        tothours+=hours;
        totcharge+=charges;
    }
    printf("TOTAL\t%d\t%.2lf",tothours,totcharge);
}