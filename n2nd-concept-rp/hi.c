#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>



int main(){
   FILE* fi;

   fi = fopen("tmp","r");
   if(fi ==NULL){
      puts("can not open.\n");
      fprintf(stderr,"fopen error:%s\n",strerror(errno));
      return 3;
   }
   puts("open well.\n");
   printf("just c. and i come back.\n");


   return 0; 
}



