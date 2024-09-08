#include<stdio.h>
#define s 10
#define r 10
#define t 30
void main()
{
	int i,j,a[s],b[r],c[t],x,y,z;
	printf("enter the size ");
	scanf("%d",&x);
	
	printf("enter the 1st array");
	for(i=0;i<x;i++)
	{
	   scanf("%d",&a[i]);
        }
        printf("enter the size");
	scanf("%d",&y);
	printf("enter the 2nd array");
	for(j=0;j<y;j++)
	{
	  scanf("%d",&b[j]);
	 }

	 for(i=0;i<x;i++)
	 {
	  c[i]=a[i];
	 }
	 z=x+y;
	 for(j=0;j<y;j++)
	 {
	  c[i+j]=b[j];
	 }
	 printf("merged array\n");
	 for(i=0;i<z;i++)
	 {
		 printf("%d\n",c[i]);
	 }
	 
}
