#include <stdio.h>
#include <stdlib.h>

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
	for(int i=0;i<4;i++){
		printf("Address of a[%d] :%p \n",i,a[i]);
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<5;j++)
			printf("a[%d][%d] = %d \t",i,j,a[i][j]);
		putchar('\n');
	}

	for(int i=0;i<4;i++){
		for(int j=0;j<5;j++)
			printf("a[%d][%d] : %d \t",i,j,a[i][j]);
		putchar('\n');
	}

	
	exit(0);
	

	return 0;
}
