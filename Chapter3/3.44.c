#include <stdio.h>
int main(){
    int a,b,c;
    puts("Please Enter a non zero number");
    scanf("%d",&a);
    puts("Please Enter a non zero number");
    scanf("%d",&b);
    puts("Please Enter a non zero number");
    scanf("%d",&c);
    if( ((a+b)<=c) || ((c+b)<=a) || ((a+c)<=b)){
        puts("Cant form a triangle");
        void exit(int status);

    }
    else{
        if( ((a*a+b*b)==c*c) || ((c*c+b*b)==a*a) || ((a*a+c*c)==b*b))
        puts("It is a Pythogaras Triplet, hence forming right triangle");
    else
        puts("They could be the sides of a triangle but not right angled");
    }
}