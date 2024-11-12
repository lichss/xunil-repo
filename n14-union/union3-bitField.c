#include <stdio.h>

union epun{
	struct {
		char b0:1;
		char b12:2;
		char b3:1;
		
	} filed;
	char e;
};

union epun8{
	struct {
		unsigned char b0:1;
		unsigned char b1:1;
		unsigned char b2:1;
		unsigned char b3:1;
		unsigned char b4:1;
		unsigned char b5:1;
		unsigned char b6:1;
		unsigned char b7:1;
		
	} filed;
	unsigned char e;
};


int main(){

	union epun u;
	u.e = 0x01;
	printf("8bit: %x\n",u.e);
	printf("bit0: %d\n",u.filed.b0);
	printf("bit12: %x\n",u.filed.b12 << 1);


	union epun8 u8;
	u8.e = 0x00;
	u8.filed.b3 = 1;
	u8.filed.b7 = 1;

	printf("u8:%x \n",u8.e);

	return 0;
}
/*
 *  涉及大小端存储
 *  补码
 *	 位域
 *
 */ 

