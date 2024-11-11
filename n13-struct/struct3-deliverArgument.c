/*
 *
 *
 */

#include <stdio.h>
#include <time.h>

struct epst{

	int m1;
	int m2;
	int m3;
};

int function_copy(struct epst ast){
//	printf("in function struct sizeof %d",sizeof(ast));

	return 0;
}
int function_addr(struct epst* pst){
//	printf("in function struct sizeof %d",sizeof(pst));

	return 0;
}

int main(){
	clock_t start,end;
	double cpuTimeUsed;

	struct epst s1 = {1,2,3,};
	struct epst* pst = &s1;	

	start = clock();
	for(int i=0;i<1000000;i++){
		 function_copy(s1);
	}
	end = clock();
	cpuTimeUsed = ((double)(end - start))/ CLOCKS_PER_SEC;
	printf("CPU time used:%d sec in copy deliver.\n",(end - start));

	return 0;
}
