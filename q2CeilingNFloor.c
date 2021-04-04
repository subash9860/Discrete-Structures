// Programs to implement ceiling and floor functions.

#include<stdio.h>
#include<math.h>
int main()
{
	float val;
	printf("enter a float number:");
	scanf("%f",&val);
	printf("ceiling value of %f is %f\n",val,ceil(val));
    printf("floor value of %f is %f\n",val,floor(val));	
    return 0;
}