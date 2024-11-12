#include <stdio.h>



#if 1
int main(int argc,char* argv[]){

	printf("argc = %d ,argv[0] = %s \n",argc,argv[0]);
	char** ptr = argv;
	for(int i=0;argv[i]!=NULL;i++){
		
		printf("%p -> %p -> %s \n",ptr,*ptr,*ptr);
		ptr++;
//		printf("%p \n",ptr++);  // foolish attempt
	}

	return 0;

}



#else


int main(){

	printf("sizeof(char*)%d\n ",sizeof(char*));
	
	printf("sizeof(char**)%d\n ",sizeof(char**));
	
	char* args[] = {"aaa","bbb","ccc"};
	char** ptr = args;

	printf("ptr:%p ptr+1:%p \n",ptr , ptr+1);
	printf("step: %d",(ptr+1 - ptr));
	return 0;
}
#endif
/*
 * 
 *
 *
---

After a lot of troubleshooting, I realized that `char**` points to `char*`. When `char**` is treated as `char*[]`, it indeed stores elements in contiguous memory addresses. However, when dereferencing `char**` to `char*`, the addresses pointed to by each `char*` are not stored contiguously. According to the output, there is a gap of 32 bytes between the addresses pointed to by two consecutive `char*`. 

I'm now wondering if these 32 bytes might be the default length limit for passing `char* argv` in C/C++. Anyway, I'll keep this program as a reminder to myself. This time, I have gained an initial understanding of the relationship between `char**`, `char*[]`, and `char*`.

---

 *
 *

 * 
 */

