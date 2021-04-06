//Programs to generate permutations and combinations.

#include<stdio.h>

int fact(int num)
{
	if (num == 0 || num == 1)
	return 1;
	else 
	return num*fact(num-1);
}
int main()
{
	int n,r,p,c;
	printf("total elements (n):\t");
	scanf("%d",&n);
	printf("selected elements (r):");
	scanf("%d",&r);
	p = fact(n)/fact(n-r);
	c = fact(n)/(fact(r)*fact(n-r));
	printf("Permutation : %d\n",p);
	printf("Cambination: %d\n",c);
}
