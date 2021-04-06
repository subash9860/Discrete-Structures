// Programs to implement ceiling and floor functions.

#include<stdio.h>
#include<math.h>
int main()
{
	float a, b, val;
	printf("Enter  two number:\n");
	scanf("%f%f",&a,&b);
	val = a/b;
	printf("ceiling value of %0.1f/%0.1f is:\t%0.0f\n",a,b,ceil(val));
    printf("floor value of %0.1f/%0.1f is :\t%0.0f\n",a,b,floor(val));
    return 0;
}