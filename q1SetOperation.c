/*
Programs to implement set operations union, intersection, difference, and Cartesian product. 
*/
#include<stdio.h>
void unionSet(int a[10], int b[10], int setA, int setB);
void intersectionSet(int c[10], int d[10], int setAa, int setBb);
void AdiffB(int a[10], int b[10], int n, int m);
void BdiffA(int a[10], int b[10], int n, int m);
void cartesian(int a[10], int b[10],int n,int m);
int c[10], i, j;
int main()
{
	int a[10],b[10], n, m;
	printf("How many elements in set A:\n");
	scanf("%d",&n);
	printf("Enter the elements for set A:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("How many elements in set B:\n");
	scanf("%d",&m);
	printf("Enter  the elements for set B:\n");
	for(j=0;j<m;j++)
	{
		scanf("%d",&b[j]);
		
	}
	printf("\nset A:{");
	for(i=0;i<n;i++)
	printf("%d"",",a[i]);
	printf("}\n");
	
	printf("set B:{");
	for(j=0;j<m;j++)
	printf("%d"",",b[j]);
	printf("}\n");
	unionSet(a,b,n,m);
	intersectionSet(a,b,n,m);
	AdiffB(a,  b,  n,m);
	BdiffA(a, b, n,m);
	cartesian(a, b,n,m);
}
void unionSet(int g[10], int h[10], int sA, int sB)
{    //The function to calculate union of two sets
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
	{
	    printf("%d,",c[i]);
	}
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
	printf("intersection of A and B:\t{");
	for(i=0;i<k;i++)
	{
		printf("%d"",",c[i]);
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
	printf("%d"",",c[i]);
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
	printf("%d"",",c[i]);
	printf("}\n");
}
void cartesian(int a[10], int b[10],int n,int m)
{
	printf("\ncartesian product:");
	printf("\n{");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{    
			printf("(");
			printf("%d,%d",a[i],b[j]);
			printf(",");
			printf(")");
			printf(",");
		}
		printf("}");
	}
	printf("\n");
}
