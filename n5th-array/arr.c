#include <stdio.h>
#include <stdlib.h>


int main(){

   char arr1[] = {1,2,3,4,5};
   static char sarr[] = {1,2,3};

   printf("[%s]:%d\n",__FUNCTION__,__LINE__);
   for(int i=0;i<5;i++){
      printf("addr:%p ---> %d\n",arr1+i,arr1[i]);
   }
   sarr[3]=10;
   sarr[4]=11;
   for(int i=0;i<5;i++)
      printf("addr:%p ---> %d\n",sarr+i,sarr[i]);


   return 0;
}
