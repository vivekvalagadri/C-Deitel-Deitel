#include <stdio.h>

int main () {
   FILE *fp;
   char c[100];
   int i=0;
  
   fp = fopen("hello.txt","r");
   while(1) {
      c[i]= fgetc(fp);
      if( feof(fp) ) { 
         break ;
      }
      //printf("%c", c);
      i++;
   }
   fclose(fp);

   for(int j=0;j<20;j++){
   	printf("%d",c[j]);
   }
   
   return(0);
}