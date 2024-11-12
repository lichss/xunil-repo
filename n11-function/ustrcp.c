#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* ustrcp(char* dest,const char* src){

	if( dest!= NULL && src!=NULL){
			while( (*dest++ = *src++)!= '\0' );
	}
	else{
			return NULL;
	}
	return dest;		

}


char* ustrncp(char* dest,const char* src,size_t n){

	if( dest!= NULL && src!=NULL){
			while( (*dest++ = *src++)&& n-- );
	}
	else{
			return NULL;
	}
	return dest;		

}



int main(){

	char str1[] = "nihao.wo xiang xia ban.\n";
	char str_z[128];
	char str2[] = "woye";


	puts(str1);
 	ustrncp(str2,str1,999);
	puts(str2);

	return 0;
}

