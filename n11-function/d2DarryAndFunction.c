#include <stdio.h>
#include <stdlib.h>

#define SHIFTN 1001 

int d2dfunction_Style1(int (*)[5]);
int d2dfunction_Style2(int ptr[][5]);

int main(int argc,char* argv[]){

	int d2dar[4][5] = {1,2,3,4,5,6,7,};
	int (*ptd2d)[5] = d2dar;
	int* ptstart = *d2dar;

	for(int i=0;i<20;i++){
		ptstart[i] = SHIFTN+i;
	}

	
#if 0
	printf("d2dar:\t%p  ",d2dar);
	printf("d2dar+1:\t%p  ",d2dar+1);

	printf("ptd2d:\t%p  ",ptd2d);
	printf("ptd2d+1:\t%p  ",ptd2d+1);
#endif

	d2dfunction_Style2(d2dar);	
	d2dfunction_Style1(ptd2d);	

	return 0;
}

int d2dfunction_Style1(int (*ptr)[5]){
	puts(__FUNCTION__);

	for(int i=0;i<4;i++){
		for(int j=0;j<5;j++)
			printf("%0p-->%d\t",ptr[i]+j,ptr[i][j]);
		putchar('\n');
	}
	return 0;
}

int d2dfunction_Style2(int ptr[][5]){
	puts(__FUNCTION__);

	for(int i=0;i<4;i++){
		for(int j=0;j<5;j++)
			printf("%0p-->%d\t",*(ptr+i)+j,ptr[i][j]);
		putchar('\n');
	}
	return 0;
}

