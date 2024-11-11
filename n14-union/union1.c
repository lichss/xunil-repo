/*
 * union 简介
 * 声明和使用方法。
 *
 */
#include <stdio.h>


union epun {
	int i;
	float f;
	char * s;
	long long int l;
} u0;

int main(){

	union epun u1;
	union epun* pun = &u1;

	printf("union u1 size:%d\n",sizeof(u1));
	u1.l = 13;
	printf("union in int:%d\n",pun->i);	
	u1.f = 93.321;
	printf("union in float:%.3f\n",pun->f);	
	u1.i = 14;
	printf("union in int:%d\n",pun->i);	


	return 0;
}
