#include <stdio.h>
#include <stdlib.h>

int main(){

	printf("[%s] : [%d]",__FUNCTION__,__LINE__);
	int (*p) [3] = NULL;
//	int [3] *q = NULL;

	int a[2][3] = {1,2,3,4,5,6};

	p = a;
	//q=a[1];

return 0;
}
