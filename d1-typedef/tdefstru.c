#include <stdio.h>

struct epst{

	int in;
	float f;

};

typedef struct epst EPST;
typedef struct epst epst;

/* more commonly use below: */
typedef struct {
	int in;
	float f;
} epst2;

/* or keep original name,so can both way can be used. */
typedef struct epst3{
	int in;
	float f;
} epst3;

int main(){

	EPST n1 = {1,1.2};
	epst n2 = {2,2.2};
	epst* stp = &n2;
	printf("n2:%d,%.3f\n",n2.in ,n2.f );
	printf("pn2:%d,%.3f\n",stp->in, stp->f+1);

	epst2 e1 = {1, 1.4};
	epst2* epsp = &e1;
	printf("e1:%d ,%.3f\n",e1.in, e1.f);
	printf("ep:%d ,%.3f\n",epsp->in, epsp->f);
	
	struct epst3 c1 = {3, 3.33};
	epst3 c2 = {33, 33.33};
	printf("c1:%d ,%.3f\n",c1.in, c1.f);
	printf("c2:%d ,%.3f\n",c2.in, c2.f);

	return 0;
}
