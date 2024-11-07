#include <stdio.h>
#include <stdlib.h>


char* ustrcp(char* dest,const char* src){

	char* retad = dest;
	if( dest!= NULL && src!=NULL){
			puts("jin lai le.\n");
			while( (*dest++ = *src++)!= '\0' );
	}
	else{
			return NULL;
	}
	return dest;		

}

int main(){

	char str1[] = "nihao.wo xiang xia ban.\n";
	char str2[] = "woye.\n";

	ustrcp(str2,str1);
	puts(str1);
//	puts(str2);

	return 0;
}

