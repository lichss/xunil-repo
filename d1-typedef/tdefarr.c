#include <stdio.h>
#include <stdlib.h>

typedef int iarr5[5];
int main(){

	iarr5 arr;
	printf("size of arr:%d\n",sizeof(arr));
	
	iarr5 darr[7];
	printf("size of darr %d\n",sizeof(darr));

	return 0;
}

/*
 * typedef 定义定长数组
 * 还可以扩展成二维数组
 *
 */
