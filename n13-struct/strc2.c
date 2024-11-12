/*
 * 关于字节对齐
 * 简单来讲，在结构体中的成员在存放时可能会顶格存放。方便硬件取用
 * __attribute__((packed)) 之前没见过
 *
 */
#include <stdio.h>

struct epst {

	int mInt;
	char mChar1;
	float mFloat;
	char mChar;

};//来看看甚么是字节对齐

struct epst_packed{

	int mInt;
	char mChar1;
	float mFloat;
	char mChar;

}__attribute__((packed));
//相当于告诉编译器 不要对齐

int main(){


	struct epst s1;
	struct epst_packed s2;
	printf("size of struct epst:\t%d",sizeof(s1)); 
	printf("size of struct epst_p:\t%d",sizeof(s2)); 


	return 0;
}
