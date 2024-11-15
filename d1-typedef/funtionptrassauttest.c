#include <stdio.h>
#include <stdlib.h>

int add(int a){
	return a+1;
}
	
int main(){

	int (*fptr)(int) = add;
	printf("%d = 1+1",fptr(1));	

	return 0;
}
