/*
Programs to implement set operations union, intersection, difference, and Cartesian product. 
*/
#include<stdio.h>
int i,j, c[10];
void unionSet(int g[10], int h[10], int sA, int sB)
{
	int k=0, x=0, f1=0 ;
	for(i=0;i<sA;i++)
	{
	    c[x]=g[i];
		x++;
	}
	k=x;
	for(i=0;i<sB;i++)
	{
		f1=0;
		for(j=0;j<sA;j++)
		{
		    if(g[j]==h[i])
		    {
		        f1=0;
		        break;
			}
			else
			f1=1;
		}
		if(f1==1)
		{
			c[k]=h[i];
			k++;
		}
	}
	printf("\n union of A and B is:\t{");
	for(i=0;i<k;i++)
	printf("%d ",c[i]);
	printf("}\n");
}

void intersectionSet(int a[10], int b[10], int n, int m)
{
	int k=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i]==b[j])
			{
				c[k]=a[i];
				k++;
			}
		}
	}
	printf("intersection of A and B: {");
	for(i=0;i<k;i++)
	{
		printf("%d ",c[i]);
	}
	printf("}\n");
}

void AdiffB(int a[10], int b[10], int n, int m)
{
	int k=0, f1=0;
	for(i=0;i<n;i++)
	{
		f1=0;
		for(j=0;j<m;j++)
		{
			if(a[i]==b[j])
		    {
		        f1=0;
		        break;
			}
			else
			f1=1;
		}
		if(f1==1)
		{
			c[k]=a[i];
			k++;
		}
	}
	printf("\n difference of A-B is:\t{");
	for(i=0;i<k;i++)
	printf("%d ",c[i]);
	printf("}\n");
}

void BdiffA(int a[10], int b[10], int n, int m)
{
	int k=0, f1 =0;
	for(i=0;i<m;i++)
		{
			f1=0;
		    for(j=0;j<n;j++)
		    {
		        if(b[i]==a[j])
		    	{
		    	f1=0;
		    	break;
			}
			else	
			f1=1;
		}
		if(f1==1)
		{
			c[k]=b[i];
			k++;
		}
	}
	printf("\n difference of B-A is:\t{");
	for(i=0;i<k;i++)
	printf("%d ",c[i]);
	printf("}\n");
}

void cartesian(int a[10], int b[10],int n,int m)
{
	printf("\ncartesian product:\n{");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		printf("(%d,%d) ",a[i],b[j]);
		printf("}");
	}
	printf("\n");
}

int main()
{
	int a[10],b[10], x, y;

	printf("How many elements in set A:\n");
	scanf("%d",&x);
	printf("Enter the elements for set A:\n");
	for(i=0;i<x;i++)
	scanf("%d",&a[i]);

	printf("How many elements in set B:\n");
	scanf("%d", &y);
	printf("Enter  the elements for set B:\n");
	for(j=0;j<y;j++)
	scanf("%d",&b[j]);

	printf("\nset A:{");
	for(i=0;i<x;i++)
	printf("%d ",a[i]);
	printf("}\n");
	
	printf("set B:{");
	for(j=0;j<y;j++)
	printf("%d ",b[j]);
	printf("}\n");

	unionSet(a,b,x,y);
	intersectionSet(a,b,x,y);
	AdiffB(a,  b,  x,y);
	BdiffA(a, b, x,y);
	cartesian(a, b,x,y);
}