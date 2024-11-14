#include <stdio.h>
#include "aa.h"
#include "bb.h"

int main(){

	printaa();
	printbb();
	printf("[%s]",__FUNCTION__);

	return 0;
}
