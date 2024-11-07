#include <stdio.h>


int ladder(int a);

int main(int argc,char* argv[]){

	printf("%d argc   %s\n",argc,argv[1]);

	if(argc>1){
		char zero = '0';
		int n = *(char*)argv[1] - zero;

		printf("%d! = %d\n",n,ladder(n));
	}
			
		
			
	printf("!5 = %d\n",ladder(5));


	return 0;
}

int ladder(int n)
{
	if(n==1){
		return 1;
	}
	else{
		return n*ladder(n-1);	
	}

}


