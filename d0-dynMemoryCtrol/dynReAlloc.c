#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING_SIZE 1024


struct epst{
	int mint;
	char* chptr;

};

int main(){
	
	struct epst st1,st2;

	st1.chptr = malloc(MAX_STRING_SIZE);
//	st1.chptr = "wo jiao mai mai ti.";
	strcpy(st1.chptr,"wo jiao mmt\n");
	printf("mai mai ti? %s\n",st1.chptr);
	printf("used %d Byte for chars,\n",strlen(st1.chptr));	
	st1.chptr = realloc(st1.chptr,strlen(st1.chptr)+2);
	return 0;
}
