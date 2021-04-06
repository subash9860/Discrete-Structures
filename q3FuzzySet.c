//Programs to implement fuzzy set operations.

#include<stdio.h>
#include<math.h>
int main()
{
	float x[5]={0.2,0.3,0.6,0.7,0.9};
	float y[5]={0.0,0.4,0.5,0.8,0.9};
	int i;

	printf("set A:\t{");
	for(i=0;i<5;i++)
	printf("%0.1f  ",x[i]);
	printf("}\n\n");

	printf("set B:\t{");
	for(i=0;i<5;i++)
	printf("%0.1f  ",y[i]);
	printf("}\n\n");

	printf("fuzzy union of a and b is: \n{");
	for(i=0;i<=4;i++)
	printf("%0.1f  ",fmax(x[i],y[i]));
	printf("}\n\n");

	printf("fuzzy intersection of a and b is: \n{");
	for(i=0;i<=4;i++)
	printf("%0.1f  ",fmin(x[i],y[i]));
	printf("}\n\n");

	printf("fuzzy complement of set A is:\n{");
	for(i=0;i<=4;i++)
	printf("%0.1f  ",1-x[i]);
	printf("}\n\n");

	printf("fuzzy difference of a & b is:\n{");
	for(i=0;i<=4;i++)
	printf("%0.1f   ",fmin(x[i],1-y[i]));
	printf("}\n\n");	
	return 0;
}
