//Programs to implement Euclidean and Extended Euclidean algorithms.
#include<stdio.h>

int gcd(int a, int b)
{
	if (b==0)
	return a;
	else
	return gcd(b , a %b );
}

int gcdExtended(int a, int b,int *x,int *y)
{
	if(b==0)
	{
		*x=1;
		*y=0;
		return a;
	}
	int x1,y1;
	int d=gcdExtended(b,a%b,&x1,&y1);
	*x=y1;
	*y=x1-(y1*(a/b));
	return d;
}

int main()
{
	int a,b,x,y;
	printf("enter two integers:\n");
	scanf("%d%d",&a,&b);
	printf("GCD=%d\n",gcd(a,b));
	gcdExtended(a,b,&x,&y);
	printf("x=%d,y=%d\n",x,y);
}