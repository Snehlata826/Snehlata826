#include<stdio.h>
#define r1 2
#define r2 3
#define c1 3
#define c2 2
void mul(int [][c1],int[][c2]);
main()
{
	int a[r1][c1],b[r2][c2],i,j;
	

	printf("enter the matrix 1");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the 2nd matrix");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	mul(a,b);
}
void mul(int x[][c1],int y[][c2])
{
	int i,j,k,c[r1][c2];
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			c[i][j]=0;
			for(k=0;k<c1;k++)
			{
				c[i][j]+=(x[i][k]*y[k][j]);
			}
			
		}
	}
	printf("the product :\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf(" %d\t",c[i][j]);
		}
		printf("\n");
	}
}