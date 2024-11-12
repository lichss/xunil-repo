#include <stdio.h>

enum dice6{
	ONE = 1,
	TWO,
	THREE,
	FOUR,
	FIVE,
	SIX = 1
};
int main(){

	enum dice6 d6 = TWO;

	d6 = THREE;
	d6 = 2; //Legal
	d6 = 9; //Legal	

	int anyint = SIX;
	printf("now dice = %d\n",d6);
	printf("now anyint = %d\n",anyint);
	return 0;
}


/*
 * 你其实可以把枚举当成单纯的宏定义。有时候没啥差别
 *	 
 *
 *
 */
