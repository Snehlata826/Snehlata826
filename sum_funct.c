#include<stdio.h>

#define size 5
void addition(int []);
main()
{
	int n,i,a[size];
	printf("enter the array elemnts");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	addition(a);

}
void addition(int arr[])
{
      int i,sum=0;
      for(i=0;i<size;i++)
      {
	      sum=sum+arr[i];
      }
      printf("the sum is %d",sum);
}

