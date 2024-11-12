/*
 * malloc ralloc realloc free
 *
 */
#include <stdio.h>
#include <stdlib.h>

void callNmem(int** ptr,int N){

	*ptr = malloc(N);
	if(!ptr){
		puts("maloc error\n");
		return;
	}
		
	return;
}

int main(){
	
	int* ptr = malloc(sizeof(int)*10);
	for(int i=0;i<10;i++)
		printf("%p\n",ptr+i);
	free(ptr);	
	ptr = NULL;
	printf("-------------------\n");

	ptr = calloc(sizeof(int),10);
	for(int i=0;i<10;i++)
		printf("%p\n",ptr+i);
	
	printf("-------------------\n");

	callNmem(&ptr,20);
	for(int i=0;i<5;i++)
		printf("%p\n",ptr+i);
	*ptr = 12;
	printf("before free:%p --> %d\n",ptr,*ptr);
	free(ptr);
	printf("after free: %p --> %d\n",ptr,*ptr);
	//*ptr = 13;
	int* ptr2 = malloc(20);
	printf("a new ptr be malloc:%p --> %d\n",ptr2,*ptr2);
	return 0;
}




