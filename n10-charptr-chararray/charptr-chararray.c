#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

	printf("----------------------let's play char [] ------------------------\n");
	char str1[] = "nihao. keep is important\n";
	printf("sizeof(str1): %d   strlen(str1):%d \n",sizeof(str1),strlen(str1));
	printf("addres of str1 = %p\n",str1);
	char* ptr_1 = str1+5;


//	str1 = "im next\n";/* 企图把一个地址值付给指针常量。报错 */
	puts(str1);
	puts(ptr_1);

	strcpy(str1,"world!\n");
	puts(str1);

	printf("----------------------let's play char*  ------------------------\n");
	char* str2 = "nihao. no need be worry.aaaa\n";

	printf("addres of str2 = %p\n",str2);
	printf("sizeof(str2): %d   strlen(str2):%d \n",sizeof(str2),strlen(str2));

//	strcpy(str2,"error here.\n");/* segmentation fault.*/
	str2 = "will not error.\n";
	puts(str2);
	return 0;

}

