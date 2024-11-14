#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STRING_MAX 1024;

int main(){
	
	char* str1 = malloc(1024);
	printf("input string:");
	scanf("%s",str1);	
	if(!str1){
		printf("Null string..\n");
		exit(0);
	}
	str1 = realloc(str1,strlen(str1)+1);
	char* te = malloc(1);
	printf("\n%s\n",str1);
	printf("size of str:%d",te-str1);
	return 0;
}
