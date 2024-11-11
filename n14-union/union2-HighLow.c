/*
 * 利用union的性质 
 * 一个变量计算其高位和低位相加
 *
 */
#include <stdio.h>
#include <stdint.h>

union epun{
	struct {
		unsigned short h;
		unsigned short l;
	} part;
	unsigned int e;

};

int main(){

	unsigned int uu = 0x11223344;

	printf("%X \n",uu>>16);
	printf("%X \n",uu&0x0000FFFF);
	printf("%x \n",(uu>>16)+(uu&0xffff));


	union epun u;
	u.e = 0x11223344;
	printf("in union:%x\t%x\n",u.part.l,u.part.h);
	printf("in union:%x\n",u.part.l+u.part.h);
	
	int (*ptr) [3] = NULL;






	return 0;
}
