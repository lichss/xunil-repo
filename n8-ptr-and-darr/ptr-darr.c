#include <stdio.h>
#include <stdlib.h>

#define PRINT printf("----------------------------------------\n")

int main(){

	printf("[%s] : %d\n",__FUNCTION__,__LINE__);

	int a[4][5] = {0,};
	for(int i=0;i<4*5;i++){
		a[0][i] = i+1;
	}
/*
	for(int i=0;i<4*5;i++){
		printf("a[0][i] = %d \n",a[0][i]);
	}
*/
	PRINT;
	for(int i=0;i<4;i++){
		printf("Address of a[%d] :%p \n",i,a[i]);
	}

	PRINT;

	for(int i=0;i<4;i++){
		for(int j=0;j<5;j++)
			printf("a[%d][%d] = %d \t",i,j,a[i][j]);
		putchar('\n');
	}

	PRINT;

	for(int i=0;i<4;i++){
		for(int j=0;j<5;j++)
			printf("a[%d][%d] : %#p \t",i,j,&a[i][j]);
		putchar('\n');
	}
	
	PRINT;
	for(int i=0;i<4;i++){
		printf("a + %d = %#p \n",i,a+i);}
	
	exit(0);
	

	return 0;
}
