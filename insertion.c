#include<stdio.h>

void main()
{
	int i;
	int a[10],pos,item,size;
	printf("enter the size");
	scanf("%d",&size);
	printf("enter the array elements");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	
	}
	printf("enter the item to be entered\n");
    scanf("%d",&item);
       
    printf("enter the desired position");
	scanf("%d",&pos);

	if(pos<1||pos>size+1)
	  printf("invalid position");   
       
       for(i=size;i>=pos;i--)
       {
	       a[i]=a[i-1];
       }
       a[pos-1]=item;
       size++;

       printf("elements after insertion\n");
       for(i=0;i<size;i++)
       {
	       printf("%d\t",a[i]);
       }


}
	
