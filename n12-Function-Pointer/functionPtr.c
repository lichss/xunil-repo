#include <stdio.h>
#include <stdlib.h>


int add(int a,int b){

	return a+b;
}

int sub(int a,int b){

	return a-b;
}

int mul(int a,int b){

	return a*b;
}
int dev(int a,int b){

	return a/b;
}




int main(int argc,char* argv[])
{
	
	int  (*fuptr)(int,int);
	int (*funcPtrArr[4]) (int,int);

	funcPtrArr[0] = add;
	funcPtrArr[1] = sub;
	funcPtrArr[2] = mul;
	funcPtrArr[3] = dev;

	fuptr = add;
	printf("see this:%d\n",	fuptr(13,8));

	printf("also see sub:%d\n",	funcPtrArr[1](13,8));
	printf("also see mul:%d\n",	funcPtrArr[2](13,8));
	printf("also see dev:%d\n",	funcPtrArr[3](13,8));
	return 0;
}




/*
 *
 * TYPE* (*funcPtrArr[]) (TYPE arg)
 * 所谓的 指向指针函数的函数指针数组
 *
 */
