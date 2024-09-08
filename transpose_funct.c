#include<stdio.h>
#define r 2
#define c 3
void tran(int [][c]);
main()
{
	int a[r][c],b[r][c],i,j;
	printf("enter the array\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	tran(a);
}
void tran(int arr[][c])
{
	int i,j,b[c][r];
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			b[i][j]=arr[j][i];
		}
	}
	printf("the transpose matrix\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
}