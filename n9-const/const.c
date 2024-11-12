#include <stdio.h>
#include <stdlib.h>

int main(){

	const float pi = 3.14;
	float* pp = &pi;

	*pp = 3.33;
	printf("pi = %.6f \n",pi);

	return 0;
}
