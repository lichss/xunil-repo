#include <stdio.h>
#include <stdlib.h>


#define DCONST1 3.1415
#define MAX(a,b)  ({typeof(a) A = a,B=b; (A)>(B)?(A):(B);})
int main(){

   int a=0,b=0,c=0;
   a+DCONST1;
   b+DCONST1;
   c+DCONST1;

   int x=4,y=2;

   printf("%d\n",MAX(x,y));

   return 0;

}

