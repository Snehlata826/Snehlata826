#include<stdio.h>
#define size 5
void largest(int []);
main()
{
	int i,a[size];
	printf("enter the array ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	largest(a);
}
void largest(int arr[])
{
	int i,max=0;
	for(i=0;i<size;i++)
	{
		if(arr[i]>max)
			max=arr[i];
	}
	printf("the largest is %d",max);
}
