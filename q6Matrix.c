// Programs to implement Boolean matrix operations join, product, and Boolean product.
#include<stdio.h>
#define m 2
#define n 2
int main()
{
	int i,j,k,sum=0,a[m][n],b[m][n],c[m][n],pro[m][n],bolpro[m][n];
	printf("Enter Elements of 1st 2X2 matrix A:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	}
	printf("Enter Elements of 2nd 2X2 matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&b[i][j]);
	}
	printf("\nA:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		printf("%d\t",a[i][j]);
		printf("\n");
	}
	printf("\nB:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		printf("%d\t",b[i][j]);
		printf("\n");
	}
	printf("\nJoin:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j] || b[i][j];
			printf("%d\t",c[i][j]);
	    }
		printf("\n");
	}

	printf("Product of the matrix=\n");    
	for(i=0;i<m;i++)    
	{    
		for(j=0;j<n;j++)    
		{    
			pro[i][j]=0;    
			for(k=0;k<n;k++)    
			{    
				pro[i][j]+=a[i][k]*b[k][j];    
			}    
		}    
	}    
	//for printing result    
	for(i=0;i<m;i++)    
	{    
		for(j=0;j<n;j++)    
		{    
			printf("%d\t",pro[i][j]);    
		}    
		printf("\n");    
	}    		
	printf("\nBoolean Product:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			for (k=0;k<n;k++)
			{
				sum = sum || a[i][k] && b[k][j];
			}
			bolpro[i][j]= sum;
			sum = 0;
	    }
	}
    for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("%d\t",bolpro[i][j]);
	}
	printf("\n");
	}	
}
