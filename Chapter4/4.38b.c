#include<stdio.h>
int main()
{
    int i,x;
    for(i=1;i<=12;i++)
    {printf("On the ");
    switch(i)
    {
        case 1:printf("first");
               break;
        case 2:printf("second");
               break;
        case 3:printf("third");
               break;
        case 4:printf("fourth");
               break;
        case 5:printf("fifth");
               break;
        case 6:printf("sixth");
               break;
        case 7:printf("seventh");
               break;
        case 8:printf("eighth");
               break;
        case 9:printf("ninth");
               break;
        case 10:printf("tenth");
               break;
        case 11:printf("eleventh");
               break;
        case 12:printf("twelfth");
               break;
        default:continue;
    }
    printf(" day of christmas\nMy true love gave to me\n");
    x=i;
    while(x>=1)
    {
    switch(x)
    {
        case 1:printf("A partridge in a pear tree\n");
               x--;
               break;
        case 2:printf("Two turtle doves\n");
               x--;
               break;
        case 3:printf("Three French hens\n");
               x--;
               break;
        case 4:printf("Four calling birds\n");
               x--;
               break;
        case 5:printf("Five gold rings\n");
               x--;
               break;
        case 6:printf("Six geese a laying\n");
               x--;
               break;
        case 7:printf("Seven swans a swimming\n");
               x--;
               break;
        case 8:printf("Eight maids a milking\n");
               x--;
               break;
        case 9:printf("Nine ladies dancing\n");
               x--;
               break;
        case 10:printf("Ten lords a leaping\n");
               x--;
               break;
        case 11:printf("Eleven pipers piping\n");
               x--;
               break;
        case 12:printf("12 drummers drumming\n");
               x--;
               break;
        default:continue;
    }
    }printf("\n");
    }
}