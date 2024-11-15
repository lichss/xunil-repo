#include <stdio.h>
#include <stdlib.h>

#define USERDEFIEN 939
#define Udint int
#define Udip int*
typedef int udint;
typedef int* udip;

int main(){


	USERDEFIEN;
	udint a = 100;
	Udint b = 100,c = 102;
	Udip p,q;
	udip pp,qq;

	printf("udint: %d\n",a); 

	return 0;
}

/*
 * 仔细观察上面的程序 和预编译输出后的结果
 * 	-- 预编译：gcc -E tdef.c > tdef.i
 * 可以发现 如不设计指针符号* 两者差距不大
 * 如有涉及 typedef 比 宏定义更好。
 * 本质上是类型重命名和直接替换的差异。
 * 
 * 预编译部分结果展示如下：
 *
# 7 "tdef.c"
typedef int udint;
typedef int* udip;

int main(){


 939;
 udint a = 100;
 int b = 100,c = 102;
 int* p,q;
 udip pp,qq;

 printf("udint: %d\n",a);

 return 0;
}
 *
 *
 */
