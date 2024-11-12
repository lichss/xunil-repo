#include <stdio.h>
#include <stdlib.h>


struct st1{

	int member1 ;
	float member2;


};  //基础定义方法

struct st2{
	int mint;
	float mfloat1,mfloat2;

	struct st3{
			int member1;	
			float member2;		
	} mst3;

	struct st1 mst1;

};// 带有嵌套定义的。

int main(){
	struct st1 s = {9,9.3915};
	struct st2 s2 = { .mfloat1 = 3,.mst3 = {1,2.2}};
//	s2.mst3.member1 = 2;
	printf("member int:%d \n",s.member1);
	printf("member float:%f \n",s.member2);

	printf("member str3 member %d \n",s2.mst3.member1);

	return 0;
}
