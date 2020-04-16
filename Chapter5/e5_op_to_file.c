#include <stdio.h>
//#include <stdlib.h>

int main () {
   FILE * fp;

   fp = fopen ("hello.txt", "w+");
   fprintf(fp, "%s %s %s %d \n", "We", "are", "in", 2020);
   int a='5';
   fprintf(fp,"%d\n",a );
   
   fclose(fp);
   
   return(0);
}