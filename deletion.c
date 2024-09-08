#include<stdio.h>
void main()
{
	int i,a[20],pos,size;
	printf("enter the size of array");
	scanf("%d",&size);

	printf("enter array elements");
	for(i=0;i<size;i++)
	{
	  scanf("%d",&a[i]);
	}
	
	printf("enter the position");
	scanf("%d",&pos);

	if(pos<0||pos>size)
	{
		printf("deletion is not possible");
	}
	else
	{	for(i=pos-1;i<size-1;i++)
		{
			a[i]=a[i+1];
		}
                size--;

		printf("the elements after deletion");
		
			for(i=0;i<size;i++)
			{
				printf("%d\t",a[i]);
						
			}
	}
}
