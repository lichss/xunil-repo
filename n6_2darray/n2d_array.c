#include <stdio.h>
#include <stdlib.h>

#define M   2
#define N   3


int main(){

   printf("[%s] : %d\n",__FUNCTION__,__LINE__);
   int c = 2;
   int* p =&c;
   char str1[] = "hellow boy?\n";
   scanf("%s",str1);
   printf("%s\n",&str1);

   scanf("%s",str1);
   printf("%s\n",&str1);

   printf("sizeof int[3] = %d\n",sizeof(int[3]));

   int a[M][N] = {};
   printf("sizeof  a = %d\n",sizeof(a));
   printf("sizeof  a[0] = %d\n",sizeof(a[0]));

   return 0;
}





