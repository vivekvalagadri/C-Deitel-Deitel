#include<stdio.h>
int main()
{
    int flag,pen=0,c,n,turn=4,i=25,j=25,k,a[50][50]={0};
    while(c!=9)
    {
        printf(">>");
        scanf("%d",&c);
        switch(c)
        {
            case 1: pen=0;
                      break;
            case 2: pen=1;
                      break;
            case 3: turn--;
                    if(turn<0)
                     printf("not possible");
                    break;
            case 4:turn++;
                   if(turn>4)
                    printf("not possible");
                   break;
            case 5:{printf(",");
                   scanf("%d",&n);
                   for(k=1;k<=n;k++)
                   {
                       if(turn==3)
                       a[i][j++]=pen;
                       else if(turn==1)
                        a[i][j--]=pen;
                       else if(turn==2)
                        a[i--][j]=pen;
                       else
                        a[i++][j]=pen;
                   }
                   break;}
            case 6:{for(i=0;i<50;i++)
                     {
                         for(j=0;j<50;j++)
                         {
                             if(a[i][j]==1)
                                printf("*");
                             else
                                printf(" ");
                         }
                         printf("\n");
                     }
                     break;}
            case 9:printf("end of command");
                   break;
        }
    }
}